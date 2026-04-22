#!/usr/bin/env bash
set -euo pipefail

cd /workspace

echo "Workspace: $(pwd)"
echo "Python: $(python --version)"
echo "pip: $(pip --version)"
echo "PYTHONPATH: ${PYTHONPATH:-<unset>}"
echo "MODELICAPATH: ${MODELICAPATH:-<unset>}"
echo "BUILDINGS_LIBRARY_PACKAGE: ${BUILDINGS_LIBRARY_PACKAGE:-<unset>}"
echo "CFD_DOCKER_IMAGE: ${CFD_DOCKER_IMAGE:-<unset>}"
echo "omc: $(command -v omc)"
omc --version

python - <<'PY'
import importlib
from pathlib import Path

mods = ["numpy", "yaml", "OMPython", "buildingspy", "matplotlib", "cfd_pipeline.cli"]
for mod in mods:
    try:
        importlib.import_module(mod)
        print(f"python module ok: {mod}")
    except Exception as exc:
        print(f"python module failed: {mod}: {exc}")

root = Path("/workspace")
for path in [
    root / "cases" / "minimal_coupled" / "case.yaml",
    root / "cases" / "coarse_dc" / "case.yaml",
    root / "cases" / "full_dc" / "case.yaml",
    root / "docker" / "stages" / "50_run_case.sh",
    root / "src" / "cfd_pipeline" / "cli.py",
]:
    print(f"exists[{path}]: {path.exists()}")
PY

if [[ -f /workspace/external/modelica-buildings/Buildings/package.mo ]]; then
  echo "Buildings package: /workspace/external/modelica-buildings/Buildings/package.mo"
else
  echo "Buildings package missing under /workspace/external/modelica-buildings" >&2
fi

echo "OpenModelica library cache:"
find /home/cfd/.openmodelica/libraries -maxdepth 2 -type f -name package.mo 2>/dev/null | sort || true

echo "cfd_pipeline CLI help:"
python -m cfd_pipeline.cli --help >/tmp/cfd_cli_help.txt 2>/tmp/cfd_cli_help.err || true
sed -n '1,80p' /tmp/cfd_cli_help.txt || true
sed -n '1,40p' /tmp/cfd_cli_help.err || true

ffd_bin="${ISAT_FFD_BIN:-/workspace/ffd_isat}"
if [[ -f "${ffd_bin}" ]]; then
  echo "FFD binary: ${ffd_bin}"
  file "${ffd_bin}" || true
else
  echo "FFD binary missing: ${ffd_bin}" >&2
fi

if command -v clinfo >/dev/null 2>&1; then
  echo "OpenCL devices:"
  clinfo | sed -n '1,60p' || true
fi
