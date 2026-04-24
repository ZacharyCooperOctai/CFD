from __future__ import annotations

import os
import shutil
import subprocess
from dataclasses import dataclass
from datetime import datetime, timezone
from pathlib import Path
from typing import Iterable

from .manifests import write_json


UTC = timezone.utc


def utc_now() -> str:
    return datetime.now(tz=UTC).isoformat()


def ensure_clean_dir(path: Path) -> None:
    if path.exists():
        shutil.rmtree(path)
    path.mkdir(parents=True, exist_ok=True)


def append_text(path: Path, text: str) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    with path.open('a', encoding='utf-8') as handle:
        handle.write(text)


def tail_lines(path: Path, limit: int = 100) -> list[str]:
    if not path.exists():
        return []
    lines = path.read_text(encoding='utf-8', errors='replace').splitlines()
    return lines[-limit:]


def quote_cmd(cmd: Iterable[str]) -> str:
    return ' '.join(str(part) for part in cmd)


@dataclass
class StageRecorder:
    root: Path
    stage_dir: Path
    case_id: str
    stage: str
    run_id: str

    def __post_init__(self) -> None:
        self.stage_dir.mkdir(parents=True, exist_ok=True)
        self.stdout_path = self.stage_dir / 'stdout.log'
        self.stderr_path = self.stage_dir / 'stderr.log'
        self.summary_path = self.stage_dir / 'summary.md'
        self.status_path = self.stage_dir / 'status.json'
        self.manifest_path = self.stage_dir / 'manifest.json'
        self.diagnostics_dir = self.stage_dir / 'diagnostics'
        self.inputs_dir = self.stage_dir / 'inputs'
        self.results_dir = self.stage_dir / 'results'
        self.diagnostics_dir.mkdir(exist_ok=True)
        self.inputs_dir.mkdir(exist_ok=True)
        self.results_dir.mkdir(exist_ok=True)

    def write_manifest(self, command: list[str], inputs: list[dict] | None = None, extra: dict | None = None) -> None:
        payload = {
            'case_id': self.case_id,
            'stage': self.stage,
            'run_id': self.run_id,
            'runtime': os.environ.get('CFD_RUNTIME', 'native-linux'),
            'command': command,
            'cwd': str(self.root),
            'started_at': utc_now(),
            'inputs': inputs or [],
        }
        if extra:
            payload.update(extra)
        write_json(self.manifest_path, payload)

    def write_status(self, state: str, exit_code: int | None = None, failing_step: str | None = None,
                     last_completed_step: str | None = None, extra: dict | None = None) -> None:
        payload = {
            'state': state,
            'exit_code': exit_code,
            'failing_step': failing_step,
            'last_completed_step': last_completed_step,
            'updated_at': utc_now(),
        }
        if extra:
            payload.update(extra)
        write_json(self.status_path, payload)

    def write_summary(self, lines: list[str]) -> None:
        self.summary_path.write_text('\n'.join(lines).rstrip() + '\n', encoding='utf-8')

    def run_command(self, name: str, cmd: list[str], cwd: Path | None = None, env: dict | None = None,
                    timeout: int | None = None, check: bool = True) -> subprocess.CompletedProcess:
        out = self.diagnostics_dir / f'{name}_stdout.log'
        err = self.diagnostics_dir / f'{name}_stderr.log'
        append_text(self.stdout_path, f'$ {quote_cmd(cmd)}\n')
        with out.open('w', encoding='utf-8') as stdout_handle, err.open('w', encoding='utf-8') as stderr_handle:
            res = subprocess.run(
                cmd,
                cwd=str(cwd or self.root),
                env=env,
                stdout=stdout_handle,
                stderr=stderr_handle,
                timeout=timeout,
                check=False,
                text=True,
            )
        append_text(self.stdout_path, f'[{name}] exit={res.returncode}\n')
        if check and res.returncode != 0:
            raise subprocess.CalledProcessError(res.returncode, cmd)
        return res
