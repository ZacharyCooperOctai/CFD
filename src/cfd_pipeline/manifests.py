from __future__ import annotations

import hashlib
import json
from pathlib import Path
from typing import Iterable


def sha256_file(path: Path) -> str:
    hsh = hashlib.sha256()
    with path.open('rb') as handle:
        for chunk in iter(lambda: handle.read(1024 * 1024), b''):
            hsh.update(chunk)
    return hsh.hexdigest()


def file_metadata(path: Path, root: Path | None = None) -> dict:
    rel = path.relative_to(root) if root is not None else path
    return {
        'path': rel.as_posix(),
        'bytes': path.stat().st_size,
        'sha256': sha256_file(path),
    }


def collect_file_metadata(paths: Iterable[Path], root: Path | None = None) -> list[dict]:
    return [file_metadata(path, root=root) for path in sorted(paths)]


def write_json(path: Path, payload: dict) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(payload, indent=2, sort_keys=True) + '\n', encoding='utf-8')
