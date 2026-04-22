from __future__ import annotations

import shutil
from pathlib import Path

import yaml

from .common import case_dir, default_run_id, load_case_config, repo_root, stage_dir
from .logging_utils import StageRecorder, ensure_clean_dir, tail_lines
from .manifests import collect_file_metadata


def _load_scenario(case_id: str, scenario: str) -> tuple[Path, dict]:
    path = case_dir(case_id) / 'scenarios' / f'{scenario}.yaml'
    if not path.exists():
        raise FileNotFoundError(f'Scenario not found: {path}')
    return path, yaml.safe_load(path.read_text(encoding='utf-8'))


def _wrapper_model(case_cfg: dict, scenario_cfg: dict) -> str:
    model_name = case_cfg['case']['model_name']
    fan_values = scenario_cfg['controls']['fan_fraction']
    temp_values = scenario_cfg['controls']['supply_temp_k']
    n_fan = case_cfg['case']['controls']['fan_count']
    n_temp = case_cfg['case']['controls']['supply_temp_count']
    if len(fan_values) != n_fan:
        raise ValueError(f'Expected {n_fan} fan controls, got {len(fan_values)}')
    if len(temp_values) != n_temp:
        raise ValueError(f'Expected {n_temp} supply temperatures, got {len(temp_values)}')
    fan_vec = ', '.join(f'{value:.6f}' for value in fan_values)
    temp_vec = ', '.join(f'{value:.6f}' for value in temp_values)
    return f'''within ;
model RunCase
  {model_name} dc;
  Modelica.Blocks.Sources.Constant fanCon[{n_fan}](k={{ {fan_vec} }});
  Modelica.Blocks.Sources.Constant supCon[{n_temp}](k={{ {temp_vec} }});
equation
  connect(fanCon.y, dc.u_fan);
  connect(supCon.y, dc.u_Tsup);
end RunCase;
'''


def _build_mos(build_dir: Path, case_model: Path, wrapper_model: Path, stop_time: float, sync_dt: float) -> str:
    intervals = max(1, int(round(stop_time / sync_dt)))
    return f'''cd("{build_dir.as_posix()}");
loadModel(Modelica);
loadFile("{(repo_root() / 'external/modelica-buildings/Buildings/package.mo').as_posix()}");
loadFile("{case_model.as_posix()}");
loadFile("{wrapper_model.as_posix()}");
buildModel(RunCase, startTime=0, stopTime={stop_time}, numberOfIntervals={intervals}, tolerance=1e-6, method="dassl", outputFormat="mat", fileNamePrefix="run_case");
getErrorString();
quit();
'''


def build_coupled(case_id: str, scenario: str | None = None, run_id: str | None = None,
                  stop_time: float | None = None, sync_dt: float | None = None) -> dict:
    root = repo_root()
    cfg = load_case_config(case_id)
    run_id = default_run_id(cfg, explicit=run_id)
    scenario = scenario or cfg['case']['defaults']['scenario']
    stop_time = float(stop_time or cfg['case']['defaults']['stop_time'])
    sync_dt = float(sync_dt or cfg['case']['defaults']['sync_dt'])

    bdir = stage_dir(case_id, 'build', run_id)
    ensure_clean_dir(bdir)
    recorder = StageRecorder(root=root, stage_dir=bdir, case_id=case_id, stage='build', run_id=run_id)

    case_model = case_dir(case_id) / 'model.mo'
    scenario_path, scenario_cfg = _load_scenario(case_id, scenario)
    inputs = collect_file_metadata([case_dir(case_id) / 'case.yaml', case_model, scenario_path], root=root)
    recorder.write_manifest(['python', '-m', 'cfd_pipeline.cli', 'build-coupled', '--case', case_id, '--scenario', scenario, '--run-id', run_id], inputs=inputs)
    recorder.write_status('started')

    shutil.copy2(case_dir(case_id) / 'case.yaml', recorder.inputs_dir / 'case.yaml')
    shutil.copy2(case_model, recorder.inputs_dir / 'model.mo')
    shutil.copy2(scenario_path, recorder.inputs_dir / scenario_path.name)

    wrapper_path = bdir / 'RunCase.mo'
    wrapper_path.write_text(_wrapper_model(cfg, scenario_cfg), encoding='utf-8')
    mos_path = bdir / 'build_model.mos'
    mos_path.write_text(_build_mos(bdir, case_model, wrapper_path, stop_time, sync_dt), encoding='utf-8')

    try:
        recorder.run_command('omc_build', ['omc', str(mos_path)], cwd=bdir)
        exe = bdir / 'run_case'
        if not exe.exists():
            raise FileNotFoundError(f'Expected build executable not found: {exe}')
        recorder.run_command('ldd', ['ldd', str(exe)], cwd=bdir)
        recorder.write_status('passed', exit_code=0, last_completed_step='build-coupled')
        recorder.write_summary([
            '# Build Summary',
            '',
            f'- Case: `{case_id}`',
            f'- Scenario: `{scenario}`',
            f'- Run id: `{run_id}`',
            f'- Stop time: `{stop_time}` s',
            f'- Sync interval: `{sync_dt}` s',
            f'- Executable: `{exe.name}`',
            '',
            'Key diagnostics:',
            '- `diagnostics/omc_build_stdout.log`',
            '- `diagnostics/omc_build_stderr.log`',
            '- `diagnostics/ldd_stdout.log`',
        ])
    except Exception as exc:
        recorder.write_status('failed', exit_code=1, failing_step='build-coupled')
        summary = [
            '# Build Summary',
            '',
            f'- Case: `{case_id}`',
            f'- Scenario: `{scenario}`',
            f'- Run id: `{run_id}`',
            f'- Failure: `{type(exc).__name__}: {exc}`',
            '',
            'Last output lines:',
            '```text',
            *tail_lines(recorder.diagnostics_dir / 'omc_build_stdout.log', 40),
            *tail_lines(recorder.diagnostics_dir / 'omc_build_stderr.log', 40),
            '```',
        ]
        recorder.write_summary(summary)
        raise

    return {
        'run_id': run_id,
        'build_dir': bdir,
        'scenario': scenario,
    }
