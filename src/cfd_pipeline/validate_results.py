from __future__ import annotations

from pathlib import Path
from math import isnan

from buildingspy.io.outputfile import Reader

from .common import default_run_id, load_case_config, repo_root, stage_dir
from .logging_utils import StageRecorder, ensure_clean_dir, tail_lines
from .manifests import write_json


def validate_results(case_id: str, run_id: str | None = None, stop_time: float | None = None) -> dict:
    root = repo_root()
    cfg = load_case_config(case_id)
    run_id = default_run_id(cfg, explicit=run_id)
    stop_time = float(stop_time or cfg['case']['defaults']['stop_time'])
    vdir = stage_dir(case_id, 'validate', run_id)
    ensure_clean_dir(vdir)
    recorder = StageRecorder(root=root, stage_dir=vdir, case_id=case_id, stage='validate', run_id=run_id)
    recorder.write_manifest(['python', '-m', 'cfd_pipeline.cli', 'validate', '--case', case_id, '--run-id', run_id])
    recorder.write_status('started')

    run_dir = stage_dir(case_id, 'run', run_id)
    result_path = run_dir / 'results' / 'result.mat'
    stdout_path = run_dir / 'diagnostics' / 'modelica_stdout.log'
    stderr_path = run_dir / 'diagnostics' / 'modelica_stderr.log'
    ffd_path = run_dir / 'diagnostics' / 'ffd.log'
    validation_cfg = cfg['case'].get('validation', {})

    errors: list[str] = []
    warnings: list[str] = []
    final_time = None
    variables: list[str] = []
    variable_set: set[str] = set()
    if not result_path.exists():
        errors.append(f'Missing result file: {result_path}')
    else:
        try:
            reader = Reader(str(result_path), 'openmodelica')
            variables = reader.varNames()
            variable_set = set(variables)
            if not variables:
                errors.append('Result file is readable but contains no variables.')
            else:
                time_var = 'time' if 'time' in variable_set else variables[0]
                time, _ = reader.values(time_var)
                final_time = float(max(time))
                if final_time + 1e-9 < stop_time:
                    errors.append(f'Result final time {final_time} did not reach stop time {stop_time}.')
                for bound in validation_cfg.get('variable_bounds', []):
                    name = bound['name']
                    if name not in variable_set:
                        errors.append(f'Required validation variable missing: {name}')
                        continue
                    values = reader.values(name)[1]
                    series_min = float(min(values))
                    series_max = float(max(values))
                    if isnan(series_min) or isnan(series_max):
                        errors.append(f'Variable {name} contains NaN values.')
                        continue
                    lo = bound.get('min')
                    hi = bound.get('max')
                    if lo is not None and series_min < float(lo):
                        errors.append(f'Variable {name} fell below min {lo}: observed {series_min}.')
                    if hi is not None and series_max > float(hi):
                        errors.append(f'Variable {name} exceeded max {hi}: observed {series_max}.')
        except Exception as exc:
            errors.append(f'Could not read MAT file: {type(exc).__name__}: {exc}')

    stdout_text = stdout_path.read_text(encoding='utf-8', errors='replace') if stdout_path.exists() else ''
    ffd_text = ffd_path.read_text(encoding='utf-8', errors='replace') if ffd_path.exists() else ''
    for pattern in validation_cfg.get('fail_on_stdout_patterns', []):
        if pattern.lower() in stdout_text.lower():
            errors.append(f'Forbidden stdout pattern found: {pattern}')
    for pattern in validation_cfg.get('fail_on_ffd_patterns', []):
        if pattern.lower() in ffd_text.lower():
            errors.append(f'Forbidden FFD pattern found: {pattern}')
    stderr_text = stderr_path.read_text(encoding='utf-8', errors='replace') if stderr_path.exists() else ''
    for pattern in validation_cfg.get('fail_on_stderr_patterns', []):
        if pattern.lower() in stderr_text.lower():
            errors.append(f'Forbidden stderr pattern found: {pattern}')
    if stderr_text.strip():
        warnings.append('stderr.log is not empty.')

    payload = {
        'case_id': case_id,
        'run_id': run_id,
        'result_file': str(result_path),
        'final_time': final_time,
        'variable_count': len(variables),
        'errors': errors,
        'warnings': warnings,
    }
    write_json(vdir / 'validation.json', payload)

    if errors:
        recorder.write_status('failed', exit_code=1, failing_step='validate')
        recorder.write_summary([
            '# Validation Summary',
            '',
            f'- Case: `{case_id}`',
            f'- Run id: `{run_id}`',
            f'- Final time: `{final_time}`',
            '',
            'Errors:',
            *[f'- {err}' for err in errors],
            *(['', 'Warnings:', *[f'- {warning}' for warning in warnings]] if warnings else []),
            '',
            'Last output lines:',
            '```text',
            *tail_lines(stdout_path, 40),
            *tail_lines(stderr_path, 40),
            *tail_lines(ffd_path, 40),
            '```',
        ])
        raise RuntimeError('; '.join(errors))

    recorder.write_status('passed', exit_code=0, last_completed_step='validate')
    recorder.write_summary([
        '# Validation Summary',
        '',
        f'- Case: `{case_id}`',
        f'- Run id: `{run_id}`',
        f'- Final time: `{final_time}`',
        f'- Variable count: `{len(variables)}`',
        *([f'- Warning: {warning}' for warning in warnings] if warnings else []),
        '- Validation passed with no critical errors.',
    ])
    return payload
