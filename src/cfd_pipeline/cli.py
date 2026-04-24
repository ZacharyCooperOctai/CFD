from __future__ import annotations

import argparse
import shutil
from pathlib import Path

from .build_coupled import build_coupled
from .common import default_run_id, load_case_config, repo_root, stage_dir
from .generate_ingest import generate_ingest
from .logging_utils import StageRecorder, ensure_clean_dir, tail_lines
from .manifests import collect_file_metadata
from .run_coupled import run_coupled
from .run_standalone import run_standalone
from .validate_results import validate_results
from .validate_standalone import validate_standalone


ARCHIVE_TAG = 'legacy_2026-04-09'


def _discover_cases() -> list[str]:
    root = repo_root() / 'cases'
    return sorted(
        path.name for path in root.iterdir()
        if path.is_dir() and (path / 'case.yaml').exists()
    )


def archive_legacy(run_id: str | None = None) -> dict:
    root = repo_root()
    archive_root = root / 'archive' / ARCHIVE_TAG
    archive_root.mkdir(parents=True, exist_ok=True)
    stage_root = archive_root / 'archive_stage'
    ensure_clean_dir(stage_root)
    recorder = StageRecorder(root=root, stage_dir=stage_root, case_id='system', stage='archive', run_id=run_id or ARCHIVE_TAG)
    recorder.write_manifest(['python', '-m', 'cfd_pipeline.cli', 'archive'])
    recorder.write_status('started')

    move_plan = {
        archive_root / 'output': [root / 'output'],
        archive_root / 'build_logs': [root / 'build_logs'],
        archive_root / 'root_generated': [
            root / 'cell_flags.npy',
            root / 'dc_model.cfd',
            root / 'dc_model.dat',
            root / 'dc_model.ffd',
            root / 'geometry.json',
            root / 'grid_x.csv',
            root / 'grid_y.csv',
            root / 'grid_z.csv',
            root / 'sensor_locations.csv',
            root / 'summary.txt',
            root / 'input.ffd',
            root / 'log_gpu.ffd',
            root / 'run.log',
            root / 'om_forced_convection_30s.mos',
        ],
        archive_root / 'legacy_binaries': [
            root / 'ffd_isat',
            root / 'ffd_isat_dbg',
        ],
        archive_root / 'legacy_sources': [
            root / 'dc_model.mo',
            root / 'dc_config.yaml',
            root / 'scenarios',
            root / 'run_scenarios.py',
        ],
    }

    moved: list[Path] = []
    for target_dir, sources in move_plan.items():
        target_dir.mkdir(parents=True, exist_ok=True)
        for source in sources:
            if not source.exists():
                continue
            destination = target_dir / source.name
            if destination.exists():
                continue
            shutil.move(str(source), str(destination))
            moved.append(destination)

    # Recreate canonical active directories after moving the legacy output tree.
    for rel in [
        'output/minimal_coupled/build',
        'output/minimal_coupled/run',
        'output/minimal_coupled/validate',
        'output/coarse_dc/build',
        'output/coarse_dc/run',
        'output/coarse_dc/validate',
        'output/full_dc/build',
        'output/full_dc/run',
        'output/full_dc/validate',
        'build_logs',
    ]:
        (root / rel).mkdir(parents=True, exist_ok=True)

    recorder.write_status('passed', exit_code=0, last_completed_step='archive')
    recorder.write_summary([
        '# Archive Summary',
        '',
        f'- Archive root: `{archive_root}`',
        f'- Moved entries: `{len(moved)}`',
        '',
        'Primary archive targets:',
        '- `archive/legacy_2026-04-09/output`',
        '- `archive/legacy_2026-04-09/build_logs`',
        '- `archive/legacy_2026-04-09/root_generated`',
        '- `archive/legacy_2026-04-09/legacy_binaries`',
        '- `archive/legacy_2026-04-09/legacy_sources`',
    ])
    return {'archive_root': archive_root, 'moved_count': len(moved)}


def stage_generate_ingest(case_id: str, run_id: str | None = None,
                          physics_model: str | None = None) -> dict:
    root = repo_root()
    cfg = load_case_config(case_id)
    run_id = default_run_id(cfg, explicit=run_id)
    gdir = stage_dir(case_id, 'generate-ingest', run_id)
    ensure_clean_dir(gdir)
    recorder = StageRecorder(root=root, stage_dir=gdir, case_id=case_id, stage='generate-ingest', run_id=run_id)
    inputs = collect_file_metadata([Path(root / 'cases' / case_id / 'case.yaml')], root=root)
    command = ['python', '-m', 'cfd_pipeline.cli', 'generate-ingest', '--case', case_id, '--run-id', run_id]
    if physics_model:
        command.extend(['--physics-model', physics_model])
    recorder.write_manifest(command, inputs=inputs)
    recorder.write_status('started')
    try:
        result = generate_ingest(case_id, recorder=recorder, physics_model=physics_model)
        ingest_dir = result['ingest_dir']
        for file_path in ingest_dir.iterdir():
            if file_path.is_file():
                shutil.copy2(file_path, recorder.inputs_dir / file_path.name)
        recorder.write_status('passed', exit_code=0, last_completed_step='generate-ingest')
        inventory = result['generated_files']
        summary = ['# Generate Ingest Summary', '', f'- Case: `{case_id}`', f'- Run id: `{run_id}`', '', 'Generated files:']
        summary.extend([f"- `{item['path']}` ({item['bytes']} bytes)" for item in inventory])
        summary_txt = ingest_dir / 'summary.txt'
        if summary_txt.exists():
            summary.extend(['', 'Generator summary:', '```text', *tail_lines(summary_txt, 40), '```'])
        recorder.write_summary(summary)
        return {'run_id': run_id, 'ingest_dir': ingest_dir}
    except Exception as exc:
        recorder.write_status('failed', exit_code=1, failing_step='generate-ingest')
        recorder.write_summary([
            '# Generate Ingest Summary',
            '',
            f'- Case: `{case_id}`',
            f'- Run id: `{run_id}`',
            f'- Failure: `{type(exc).__name__}: {exc}`',
        ])
        raise


def run_case(case_id: str, scenario: str | None = None, run_id: str | None = None,
             stop_time: float | None = None, sync_dt: float | None = None, timeout_s: int | None = None) -> dict:
    cfg = load_case_config(case_id)
    run_id = default_run_id(cfg, explicit=run_id)
    scenario = scenario or cfg['case']['defaults']['scenario']
    stop_time = float(stop_time or cfg['case']['defaults']['stop_time'])
    sync_dt = float(sync_dt or cfg['case']['defaults']['sync_dt'])
    stage_generate_ingest(case_id=case_id, run_id=run_id)
    build_coupled(case_id=case_id, scenario=scenario, run_id=run_id, stop_time=stop_time, sync_dt=sync_dt)
    run_coupled(case_id=case_id, run_id=run_id, stop_time=stop_time, timeout_s=timeout_s)
    return validate_results(case_id=case_id, run_id=run_id, stop_time=stop_time)


def run_standalone_case(case_id: str, run_id: str | None = None, timeout_s: int | None = None,
                        physics_model: str | None = None) -> dict:
    cfg = load_case_config(case_id)
    run_id = default_run_id(cfg, explicit=run_id)
    physics_model = physics_model or cfg['case'].get('physics_model')
    stage_generate_ingest(case_id=case_id, run_id=run_id, physics_model=physics_model)
    run_standalone(case_id=case_id, run_id=run_id, timeout_s=timeout_s)
    return validate_standalone(case_id=case_id, run_id=run_id)


def main() -> None:
    parser = argparse.ArgumentParser(description='Native Linux CFD pipeline CLI')
    sub = parser.add_subparsers(dest='stage', required=True)

    sub.add_parser('archive', help='Archive legacy generated artifacts and reset active output structure.')

    _all_cases = _discover_cases()

    for name in ['generate-ingest', 'build-coupled', 'run-coupled', 'validate', 'run-case',
                 'run-standalone', 'validate-standalone', 'run-standalone-case']:
        sta = sub.add_parser(name)
        sta.add_argument('--case', required=True, choices=_all_cases)
        sta.add_argument('--run-id', default=None)
        sta.add_argument('--scenario', default=None)
        sta.add_argument('--stop-time', type=float, default=None)
        sta.add_argument('--sync-dt', type=float, default=None)
        sta.add_argument('--timeout-s', type=int, default=None)
        sta.add_argument('--physics-model', default=None)

    evtk = sub.add_parser('export-vtk', help='Export result.plt to VTK RectilinearGrid after a completed run.')
    evtk.add_argument('--case', required=True, choices=_all_cases)
    evtk.add_argument('--run-id', required=True)

    args = parser.parse_args()
    if args.stage == 'archive':
        archive_legacy()
    elif args.stage == 'generate-ingest':
        stage_generate_ingest(case_id=args.case, run_id=args.run_id, physics_model=args.physics_model)
    elif args.stage == 'build-coupled':
        build_coupled(case_id=args.case, scenario=args.scenario, run_id=args.run_id, stop_time=args.stop_time, sync_dt=args.sync_dt)
    elif args.stage == 'run-coupled':
        run_coupled(case_id=args.case, run_id=args.run_id, stop_time=args.stop_time, timeout_s=args.timeout_s)
    elif args.stage == 'validate':
        validate_results(case_id=args.case, run_id=args.run_id, stop_time=args.stop_time)
    elif args.stage == 'run-case':
        run_case(case_id=args.case, scenario=args.scenario, run_id=args.run_id, stop_time=args.stop_time, sync_dt=args.sync_dt, timeout_s=args.timeout_s)
    elif args.stage == 'run-standalone':
        run_standalone(case_id=args.case, run_id=args.run_id, timeout_s=args.timeout_s)
    elif args.stage == 'validate-standalone':
        validate_standalone(case_id=args.case, run_id=args.run_id)
    elif args.stage == 'run-standalone-case':
        run_standalone_case(case_id=args.case, run_id=args.run_id, timeout_s=args.timeout_s, physics_model=args.physics_model)
    elif args.stage == 'export-vtk':
        from .export_vtk import export_vtk
        path = export_vtk(case_id=args.case, run_id=args.run_id)
        print(f'VTK written: {path}')
    else:
        raise ValueError(args.stage)


if __name__ == '__main__':
    main()
