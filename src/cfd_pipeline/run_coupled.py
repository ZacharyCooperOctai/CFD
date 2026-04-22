from __future__ import annotations

import shutil
import subprocess
from pathlib import Path

from .common import default_run_id, load_case_config, repo_root, stage_dir
from .logging_utils import StageRecorder, append_text, ensure_clean_dir, tail_lines
from .manifests import collect_file_metadata


def _default_timeout(case_id: str, stop_time: float) -> int:
    if case_id == 'minimal_coupled':
        return 1200
    if case_id == 'coarse_dc':
        return 3600
    return max(7200, int(stop_time * 20))


def run_coupled(case_id: str, run_id: str | None = None, stop_time: float | None = None,
                timeout_s: int | None = None) -> dict:
    root = repo_root()
    cfg = load_case_config(case_id)
    run_id = default_run_id(cfg, explicit=run_id)
    stop_time = float(stop_time or cfg['case']['defaults']['stop_time'])
    timeout_s = int(timeout_s or _default_timeout(case_id, stop_time))

    build_dir = stage_dir(case_id, 'build', run_id)
    if not build_dir.exists():
        raise FileNotFoundError(f'Build stage missing for run {run_id}: {build_dir}')

    rdir = stage_dir(case_id, 'run', run_id)
    ensure_clean_dir(rdir)
    recorder = StageRecorder(root=root, stage_dir=rdir, case_id=case_id, stage='run', run_id=run_id)
    recorder.inputs_dir.mkdir(exist_ok=True)
    recorder.results_dir.mkdir(exist_ok=True)

    runtime_dir = rdir / 'runtime'
    shutil.copytree(build_dir, runtime_dir, dirs_exist_ok=True)

    ingest_dir = root / 'ingest' / case_id / 'current'
    ingest_files = [path for path in sorted(ingest_dir.iterdir()) if path.is_file()]
    required_names = {'case.ffd', 'case.cfd', 'case.dat'}
    missing = [name for name in sorted(required_names) if not (ingest_dir / name).exists()]
    if missing:
        raise FileNotFoundError(f'Missing ingest input(s) for run stage: {", ".join(missing)}')
    for path in ingest_files:
        shutil.copy2(path, recorder.inputs_dir / path.name)
        shutil.copy2(path, runtime_dir / path.name)

    manifest_inputs = collect_file_metadata([build_dir / 'run_case', *ingest_files], root=root)
    recorder.write_manifest(['python', '-m', 'cfd_pipeline.cli', 'run-coupled', '--case', case_id, '--run-id', run_id], inputs=manifest_inputs)
    recorder.write_status('started')

    stdout_path = recorder.diagnostics_dir / 'modelica_stdout.log'
    stderr_path = recorder.diagnostics_dir / 'modelica_stderr.log'
    cmd = ['./run_case', f'-r={(recorder.results_dir / "result.mat").as_posix()}', '-lv=LOG_STATS,LOG_SOLVER']

    try:
        append_text(recorder.stdout_path, '$ ' + ' '.join(cmd) + '\n')
        with stdout_path.open('w', encoding='utf-8') as stdout_handle, stderr_path.open('w', encoding='utf-8') as stderr_handle:
            result = subprocess.run(cmd, cwd=str(runtime_dir), stdout=stdout_handle, stderr=stderr_handle, text=True, check=False, timeout=timeout_s)
        append_text(recorder.stdout_path, f'[run_case] exit={result.returncode}\n')
    except subprocess.TimeoutExpired as exc:
        result = None
        append_text(recorder.stderr_path, f'run timed out after {timeout_s} s\n')
        recorder.write_status('failed', exit_code=124, failing_step='run-coupled', extra={'timeout_s': timeout_s})
        _finalize_runtime_logs(runtime_dir, recorder)
        recorder.write_summary([
            '# Run Summary',
            '',
            f'- Case: `{case_id}`',
            f'- Run id: `{run_id}`',
            f'- Failure: timeout after `{timeout_s}` s',
            '',
            'Last output lines:',
            '```text',
            *tail_lines(stdout_path, 60),
            *tail_lines(stderr_path, 60),
            '```',
        ])
        raise RuntimeError(f'Coupled run timed out after {timeout_s} s') from exc

    _finalize_runtime_logs(runtime_dir, recorder)
    result_path = recorder.results_dir / 'result.mat'
    if result.returncode != 0 or not result_path.exists():
        _capture_gdb(runtime_dir, recorder, cmd)
        recorder.write_status('failed', exit_code=result.returncode, failing_step='run-coupled')
        recorder.write_summary([
            '# Run Summary',
            '',
            f'- Case: `{case_id}`',
            f'- Run id: `{run_id}`',
            f'- Exit code: `{result.returncode}`',
            f'- Result file present: `{result_path.exists()}`',
            '',
            'Last output lines:',
            '```text',
            *tail_lines(stdout_path, 60),
            *tail_lines(stderr_path, 60),
            *tail_lines(recorder.diagnostics_dir / 'ffd.log', 60),
            '```',
        ])
        raise RuntimeError(f'Coupled run failed with exit code {result.returncode}')

    recorder.write_status('passed', exit_code=0, last_completed_step='run-coupled')
    recorder.write_summary([
        '# Run Summary',
        '',
        f'- Case: `{case_id}`',
        f'- Run id: `{run_id}`',
        f'- Result file: `results/result.mat`',
        '',
        'Diagnostics:',
        '- `diagnostics/modelica_stdout.log`',
        '- `diagnostics/modelica_stderr.log`',
        '- `diagnostics/ffd.log`',
    ])
    return {'run_id': run_id, 'run_dir': rdir, 'result_path': result_path}


def _capture_gdb(runtime_dir: Path, recorder: StageRecorder, cmd: list[str]) -> None:
    gdb_path = recorder.diagnostics_dir / 'gdb_bt.txt'
    gdb_cmd = ['gdb', '-batch', '-ex', 'set pagination off', '-ex', 'run', '-ex', 'thread apply all bt']
    gdb_cmd.extend(['--args', *cmd])
    with gdb_path.open('w', encoding='utf-8') as handle:
        subprocess.run(gdb_cmd, cwd=str(runtime_dir), stdout=handle, stderr=subprocess.STDOUT, check=False, text=True)


def _finalize_runtime_logs(runtime_dir: Path, recorder: StageRecorder) -> None:
    for name in ['ffd.log', 'core', 'core.0']:
        src = runtime_dir / name
        if src.exists():
            dst = recorder.diagnostics_dir / src.name
            if dst.exists():
                dst.unlink()
            shutil.move(str(src), str(dst))
