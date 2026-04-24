#!/usr/bin/env bash
set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
cd "$ROOT"

echo "CFD native Linux doctor"
echo "root: $ROOT"
echo

check_cmd() {
  local name="$1"
  if command -v "$name" >/dev/null 2>&1; then
    echo "ok: $name -> $(command -v "$name")"
    return 0
  fi
  echo "missing: $name"
  return 1
}

check_cmd python3 || true
check_cmd gcc || true
check_cmd make || true
check_cmd clinfo || true
check_cmd nvidia-smi || true
check_cmd omc || echo "note: omc is optional for standalone physics-v1"

echo
echo "Python:"
python3 --version || true

echo
echo "OpenCL platforms:"
if command -v clinfo >/dev/null 2>&1; then
  clinfo -l || true
else
  echo "clinfo unavailable; install clinfo and OpenCL ICD packages"
fi

echo
echo "NVIDIA:"
if command -v nvidia-smi >/dev/null 2>&1; then
  nvidia-smi || true
else
  echo "nvidia-smi unavailable"
fi

echo
SOLVER="${ISAT_FFD_BIN:-$ROOT/build/native/ffd_isat}"
if [[ -x "$SOLVER" ]]; then
  echo "ok: native solver -> $SOLVER"
else
  echo "missing: native solver -> $SOLVER"
  echo "run: scripts/build-ffd-native.sh"
fi

echo
echo "Required Ubuntu packages for the native path usually include:"
echo "  build-essential ocl-icd-opencl-dev clinfo nvidia-driver-* nvidia-opencl-icd"
