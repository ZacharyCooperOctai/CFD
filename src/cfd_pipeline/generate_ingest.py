from __future__ import annotations

import shutil
import subprocess
import sys
from pathlib import Path

from .common import case_dir, load_case_config, repo_root
from .logging_utils import StageRecorder
from .manifests import collect_file_metadata


def _normalize_text_file(src: Path, dst: Path) -> None:
    text = src.read_text(encoding='utf-8', errors='replace')
    dst.write_text(text.replace('\r\n', '\n').replace('\r', '\n'), encoding='utf-8', newline='\n')


def _rewrite_minimal_ffd(content: str) -> str:
    lines: list[str] = []
    for line in content.splitlines():
        stripped = line.strip()
        if stripped.startswith('inpu.parameter_file_name '):
            lines.append('inpu.parameter_file_name case.cfd // Name of extra parameter file')
        elif stripped.startswith('inpu.block_file_name '):
            lines.append('inpu.block_file_name case.dat // Name of file defines the block in space')
        elif stripped.startswith('sensor.nb_sensor '):
            lines.append('sensor.nb_sensor 0 // Number of sensors')
        elif stripped.startswith('sensor.name '):
            continue
        elif stripped.startswith('bc.C '):
            lines.append('bc.nb_C 0 // Total number of trace substances')
        else:
            lines.append(line)
    return '\n'.join(lines) + '\n'


def _write_minimal_sensor_csv(path: Path) -> None:
    path.write_text('sensor_id,x,y,z\n', encoding='utf-8')


def generate_ingest(case_id: str, recorder: StageRecorder | None = None,
                    physics_model: str | None = None) -> dict:
    root = repo_root()
    cfg = load_case_config(case_id)
    cdir = case_dir(case_id)
    ingest_dir = root / 'ingest' / case_id / 'current'
    if ingest_dir.exists():
        shutil.rmtree(ingest_dir)
    ingest_dir.mkdir(parents=True, exist_ok=True)

    generator = cfg['case']['generator']
    physics_model = physics_model or cfg['case'].get('physics_model')
    if generator == 'buildings_forced_convection_template':
        template = cfg['template']
        base_ffd = root / template['base_ffd']
        base_cfd = root / template['base_cfd']
        base_dat = root / template['base_dat']
        _normalize_text_file(base_cfd, ingest_dir / 'case.cfd')
        _normalize_text_file(base_dat, ingest_dir / 'case.dat')
        (ingest_dir / 'case.ffd').write_text(
            _rewrite_minimal_ffd(base_ffd.read_text(encoding='utf-8', errors='replace')),
            encoding='utf-8',
            newline='\n',
        )
        _write_minimal_sensor_csv(ingest_dir / 'sensor_locations.csv')
        summary = [
            '# Minimal Ingest Summary',
            '',
            '- Source template: `ForcedConvection` from Buildings library',
            '- Generated files: `case.ffd`, `case.cfd`, `case.dat`, `sensor_locations.csv`',
            '- Sensors disabled for this regression case',
        ]
        (ingest_dir / 'summary.txt').write_text('\n'.join(summary) + '\n', encoding='utf-8')
    elif generator == 'legacy_dc':
        cmd_gen = [
            sys.executable,
            str(root / 'generate_ffd_inputs.py'),
            '--config', str(cdir / 'case.yaml'),
            '--outdir', str(ingest_dir),
        ]
        if physics_model:
            cmd_gen.extend(['--physics-model', physics_model])
        if recorder is not None:
            recorder.run_command('generate_ffd_inputs', cmd_gen, cwd=root)
        else:
            subprocess.run(cmd_gen, cwd=str(root), check=True)
        convert_mode = 'physics-v1' if physics_model == 'physics-v1' else 'coupled'
        cmd_sci = [
            sys.executable,
            str(root / 'convert_to_sci.py'),
            '--config', str(cdir / 'case.yaml'),
            '--grid-dir', str(ingest_dir),
            '--geo', str(ingest_dir / 'geometry.json'),
            '--outdir', str(ingest_dir),
            '--mode', convert_mode,
        ]
        if recorder is not None:
            recorder.run_command('convert_to_sci', cmd_sci, cwd=root)
        else:
            subprocess.run(cmd_sci, cwd=str(root), check=True)
        # Normalize the canonical runtime names for the staged pipeline.
        required = [('case.ffd', 'case.ffd'), ('case.cfd', 'case.cfd'), ('case.dat', 'case.dat')]
        if physics_model == 'physics-v1':
            required.append(('case.sources', 'case.sources'))
        for src_name, dst_name in required:
            src = ingest_dir / src_name
            if not src.exists():
                raise FileNotFoundError(f'Missing generated ingest file: {src}')
        summary_path = ingest_dir / 'summary.txt'
        if not summary_path.exists():
            summary_path.write_text('# Ingest Summary\n', encoding='utf-8')
    else:
        raise ValueError(f'Unsupported generator for case {case_id}: {generator}')

    generated = [path for path in ingest_dir.iterdir() if path.is_file()]
    return {
        'ingest_dir': ingest_dir,
        'generated_files': collect_file_metadata(generated, root=root),
    }
