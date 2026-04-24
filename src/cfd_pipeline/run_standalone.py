from __future__ import annotations

import os
import re
import json
import shutil
import subprocess
from pathlib import Path

import numpy as np

from .common import default_run_id, load_case_config, repo_root, stage_dir
from .logging_utils import StageRecorder, append_text, ensure_clean_dir, tail_lines
from .manifests import collect_file_metadata


def _solver_path(root: Path) -> Path:
    override = os.environ.get('ISAT_FFD_BIN')
    if override:
        return Path(override).expanduser()
    return root / 'build' / 'native' / 'ffd_isat'


def _patch_input_ffd_for_standalone(ffd_path: Path, cfg: dict) -> None:
    total_time = float(cfg.get('ffd', {}).get('total_time', 900.0))
    # Time-averaging begins at half the run duration so the solver collects a
    # full second-half average rather than a single-step snapshot.
    averaging_start = total_time * 0.5
    text = ffd_path.read_text(encoding='utf-8')
    text = re.sub(r'(?m)^(solv\.cosimulation\s+)\d+', r'\g<1>0', text)
    text = re.sub(r'(?m)^(mytime\.t_steady\s+)\S+', rf'\g<1>{averaging_start}', text)
    ffd_path.write_text(text, encoding='utf-8')


def _run_diag(name: str, cmd: list[str], recorder: StageRecorder) -> subprocess.CompletedProcess | None:
    if shutil.which(cmd[0]) is None:
        (recorder.diagnostics_dir / f'{name}.log').write_text(f'{cmd[0]} not found\n', encoding='utf-8')
        return None
    with (recorder.diagnostics_dir / f'{name}.log').open('w', encoding='utf-8') as handle:
        return subprocess.run(cmd, cwd=str(recorder.root), stdout=handle, stderr=subprocess.STDOUT, text=True, check=False)


def _gpu_preflight(recorder: StageRecorder) -> None:
    nvidia = _run_diag('nvidia-smi', ['nvidia-smi'], recorder)
    _run_diag('clinfo', ['clinfo', '-l'], recorder)
    allow_cpu = os.environ.get('CFD_ALLOW_CPU_OPENCL', '').lower() in {'1', 'true', 'yes'}
    if nvidia is not None and nvidia.returncode == 0:
        return
    if allow_cpu:
        append_text(recorder.stdout_path, '[preflight] NVIDIA GPU unavailable; CFD_ALLOW_CPU_OPENCL permits fallback\n')
        return
    raise RuntimeError(
        'NVIDIA GPU preflight failed. Set CFD_ALLOW_CPU_OPENCL=1 to allow CPU/OpenCL fallback for this run.'
    )


def _read_dat(path: Path) -> np.ndarray:
    values: list[int] = []
    for line in path.read_text(encoding='utf-8', errors='replace').splitlines():
        values.extend(int(item) for item in line.split())
    return np.asarray(values, dtype=np.int8)


def _physics_v1_input_preflight(ingest_dir: Path, cfg: dict) -> None:
    sources = json.loads((ingest_dir / 'case.sources').read_text(encoding='utf-8'))
    errors: list[str] = []
    for rack in sources.get('rack_sources', []):
        if rack.get('type') != 'rack_device_heat_exchanger':
            errors.append(f"Rack {rack.get('id', '<unknown>')} is not a rack_device_heat_exchanger.")
        if int(rack.get('cold_face_cell_count', 0)) <= 0 or int(rack.get('hot_face_cell_count', 0)) <= 0:
            errors.append(f"Rack {rack.get('id', '<unknown>')} has an empty cold/hot face slab.")
        if int(rack.get('plume_cell_count', 0)) <= 0:
            errors.append(f"Rack {rack.get('id', '<unknown>')} has an empty exhaust plume slab.")
        if float(rack.get('hot_face_volume_m3', 0.0)) <= 0.0:
            errors.append(f"Rack {rack.get('id', '<unknown>')} has invalid hot-face source volume.")
    if not sources.get('hot_aisle_extractors'):
        errors.append('No hot-aisle extractors were generated.')
    extractor_flow = float(sources.get('totals', {}).get('hot_aisle_extractor_flow_m3s', 0.0))
    return_capacity = sum(
        float(unit.get('rated_flow_m3s', 0.0))
        for unit in cfg['crac_units']
        if unit.get('active', True)
    )
    if extractor_flow > return_capacity + 1e-9:
        errors.append(f'Extractor flow {extractor_flow} exceeds CRAC return capacity {return_capacity}.')

    flags_path = ingest_dir / 'cell_flags.npy'
    dat_path = ingest_dir / 'case.dat'
    if flags_path.exists() and dat_path.exists():
        flags = np.load(flags_path)
        dat = _read_dat(dat_path).reshape(flags.shape, order='F')
        for flag_value, label in ((7, 'rack cold face'), (8, 'rack hot face'), (11, 'rack body'), (12, 'hot-aisle extractor')):
            if int(np.sum(flags == flag_value)) <= 0:
                errors.append(f'Missing {label} cells in cell_flags.npy.')
            if int(np.sum(dat[flags == flag_value])) > 0:
                errors.append(f'{label} cells are solid in case.dat.')
    else:
        errors.append('Missing cell_flags.npy or case.dat for physics-v1 preflight.')

    if errors:
        raise RuntimeError('physics-v1 input preflight failed: ' + '; '.join(errors))


def run_standalone(case_id: str, run_id: str | None = None, timeout_s: int | None = None) -> dict:
    root = repo_root()
    cfg = load_case_config(case_id)
    run_id = default_run_id(cfg, explicit=run_id)
    timeout_s = int(timeout_s or cfg['case'].get('standalone_timeout_s', 7200))

    ingest_dir = root / 'ingest' / case_id / 'current'
    required_names = {'case.ffd', 'case.cfd', 'case.dat'}
    if cfg['case'].get('physics_model') == 'physics-v1':
        required_names.add('case.sources')
    missing = [name for name in sorted(required_names) if not (ingest_dir / name).exists()]
    if missing:
        raise FileNotFoundError(f'Missing ingest input(s): {", ".join(missing)}')
    if cfg['case'].get('physics_model') == 'physics-v1':
        _physics_v1_input_preflight(ingest_dir, cfg)

    solver = _solver_path(root)
    if not solver.exists():
        raise FileNotFoundError(
            f'Native solver not found: {solver}. Run scripts/build-ffd-native.sh or set ISAT_FFD_BIN.'
        )

    rdir = stage_dir(case_id, 'run', run_id)
    ensure_clean_dir(rdir)
    recorder = StageRecorder(root=root, stage_dir=rdir, case_id=case_id, stage='run-standalone', run_id=run_id)
    recorder.inputs_dir.mkdir(exist_ok=True)
    recorder.results_dir.mkdir(exist_ok=True)

    runtime_dir = rdir / 'runtime'
    runtime_dir.mkdir(parents=True, exist_ok=True)
    ingest_files = [path for path in sorted(ingest_dir.iterdir()) if path.is_file()]
    for path in ingest_files:
        shutil.copy2(path, recorder.inputs_dir / path.name)
        shutil.copy2(path, runtime_dir / path.name)
    shutil.copy2(runtime_dir / 'case.ffd', runtime_dir / 'input.ffd')
    _patch_input_ffd_for_standalone(runtime_dir / 'input.ffd', cfg)

    solver_source_dir = root / 'external' / 'isat_ffd' / 'src' / 'ffd_isat'
    kernel = solver_source_dir / 'Kernels_3D.cl'
    if kernel.exists():
        shutil.copy2(kernel, runtime_dir / 'Kernels_3D.cl')
        for header in solver_source_dir.glob('*.h'):
            shutil.copy2(header, runtime_dir / header.name)
    elif (root / 'Kernels_3D.cl').exists():
        shutil.copy2(root / 'Kernels_3D.cl', runtime_dir / 'Kernels_3D.cl')
        header = root / 'data_structure_gpu.h'
        if header.exists():
            shutil.copy2(header, runtime_dir / header.name)

    inputs = collect_file_metadata([solver, *ingest_files], root=root if solver.is_relative_to(root) else None)
    recorder.write_manifest(
        ['python', '-m', 'cfd_pipeline.cli', 'run-standalone', '--case', case_id, '--run-id', run_id],
        inputs=inputs,
    )
    recorder.write_status('started')

    try:
        _gpu_preflight(recorder)
        cmd = [str(solver)]
        append_text(recorder.stdout_path, '$ ' + ' '.join(cmd) + '\n')
        with (recorder.diagnostics_dir / 'solver_stdout.log').open('w', encoding='utf-8') as stdout_handle, (
            recorder.diagnostics_dir / 'solver_stderr.log'
        ).open('w', encoding='utf-8') as stderr_handle:
            result = subprocess.run(
                cmd,
                cwd=str(runtime_dir),
                stdout=stdout_handle,
                stderr=stderr_handle,
                text=True,
                check=False,
                timeout=timeout_s,
            )
        append_text(recorder.stdout_path, f'[solver] exit={result.returncode}\n')
    except subprocess.TimeoutExpired as exc:
        _collect_runtime_artifacts(runtime_dir, recorder)
        recorder.write_status('failed', exit_code=124, failing_step='run-standalone', extra={'timeout_s': timeout_s})
        recorder.write_summary([
            '# Standalone Run Summary',
            '',
            f'- Case: `{case_id}`',
            f'- Run id: `{run_id}`',
            f'- Failure: timeout after `{timeout_s}` s',
            '',
            'Last diagnostics:',
            '```text',
            *tail_lines(recorder.diagnostics_dir / 'solver_stdout.log', 40),
            *tail_lines(recorder.diagnostics_dir / 'solver_stderr.log', 40),
            *tail_lines(recorder.diagnostics_dir / 'log_gpu.ffd', 80),
            '```',
        ])
        raise RuntimeError(f'Standalone solver timed out after {timeout_s} s') from exc
    except Exception as exc:
        _collect_runtime_artifacts(runtime_dir, recorder)
        recorder.write_status('failed', exit_code=1, failing_step='run-standalone')
        recorder.write_summary([
            '# Standalone Run Summary',
            '',
            f'- Case: `{case_id}`',
            f'- Run id: `{run_id}`',
            f'- Failure: `{type(exc).__name__}: {exc}`',
            '',
            'Last diagnostics:',
            '```text',
            *tail_lines(recorder.diagnostics_dir / 'nvidia-smi.log', 40),
            *tail_lines(recorder.diagnostics_dir / 'solver_stdout.log', 40),
            *tail_lines(recorder.diagnostics_dir / 'solver_stderr.log', 40),
            '```',
        ])
        raise

    _collect_runtime_artifacts(runtime_dir, recorder)
    result_path = runtime_dir / 'result.plt'
    if result.returncode == 0 and not result_path.exists():
        append_text(recorder.stdout_path, '[solver] missing result.plt\n')
        recorder.write_status('failed', exit_code=1, failing_step='run-standalone')
        recorder.write_summary([
            '# Standalone Run Summary',
            '',
            f'- Case: `{case_id}`',
            f'- Run id: `{run_id}`',
            '- Failure: solver exited successfully but did not produce `result.plt`',
            '',
            'Last output lines:',
            '```text',
            *tail_lines(recorder.diagnostics_dir / 'solver_stdout.log', 60),
            *tail_lines(recorder.diagnostics_dir / 'solver_stderr.log', 60),
            *tail_lines(recorder.diagnostics_dir / 'log_gpu.ffd', 80),
            '```',
        ])
        raise RuntimeError('Standalone solver completed without producing result.plt')

    if result.returncode != 0:
        recorder.write_status('failed', exit_code=result.returncode, failing_step='run-standalone')
        recorder.write_summary([
            '# Standalone Run Summary',
            '',
            f'- Case: `{case_id}`',
            f'- Run id: `{run_id}`',
            f'- Exit code: `{result.returncode}`',
            '',
            'Last output lines:',
            '```text',
            *tail_lines(recorder.diagnostics_dir / 'solver_stdout.log', 60),
            *tail_lines(recorder.diagnostics_dir / 'solver_stderr.log', 60),
            *tail_lines(recorder.diagnostics_dir / 'log_gpu.ffd', 60),
            '```',
        ])
        raise RuntimeError(f'Standalone solver failed with exit code {result.returncode}')

    recorder.write_status('passed', exit_code=0, last_completed_step='run-standalone')
    recorder.write_summary([
        '# Standalone Run Summary',
        '',
        f'- Case: `{case_id}`',
        f'- Run id: `{run_id}`',
        f'- Solver: `{solver}`',
        '- Runtime directory: `runtime/`',
        '',
        'Diagnostics:',
        '- `diagnostics/clinfo.log`',
        '- `diagnostics/nvidia-smi.log`',
        '- `diagnostics/solver_stdout.log`',
        '- `diagnostics/solver_stderr.log`',
        '- `diagnostics/log_gpu.ffd`',
    ])
    return {'run_id': run_id, 'run_dir': rdir, 'runtime_dir': runtime_dir}


def _collect_runtime_artifacts(runtime_dir: Path, recorder: StageRecorder) -> None:
    for name in ['log_gpu.ffd', 'result.plt']:
        src = runtime_dir / name
        if not src.exists():
            continue
        dst_dir = recorder.diagnostics_dir if name.endswith('.ffd') else recorder.results_dir
        dst = dst_dir / name
        if dst.exists():
            dst.unlink()
        shutil.copy2(src, dst)
