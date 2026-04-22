from __future__ import annotations

from datetime import datetime
from pathlib import Path

import yaml


def repo_root() -> Path:
    return Path(__file__).resolve().parents[2]


def case_dir(case_id: str) -> Path:
    return repo_root() / 'cases' / case_id


def load_case_config(case_id: str) -> dict:
    path = case_dir(case_id) / 'case.yaml'
    if not path.exists():
        raise FileNotFoundError(f'Case config not found: {path}')
    return yaml.safe_load(path.read_text(encoding='utf-8'))


def default_run_id(case_cfg: dict, explicit: str | None = None) -> str:
    if explicit:
        return explicit
    stamp = datetime.utcnow().strftime('%Y%m%dT%H%M%SZ')
    return f"{case_cfg['case']['id']}-{stamp}"


def stage_dir(case_id: str, stage: str, run_id: str) -> Path:
    return repo_root() / 'output' / case_id / stage / run_id
