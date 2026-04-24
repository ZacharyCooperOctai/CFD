#!/usr/bin/env bash
set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
SRC="$ROOT/external/isat_ffd"
OUT="$ROOT/build/native"

mkdir -p "$OUT"

if [[ ! -d "$SRC" ]]; then
  echo "Missing vendored solver source: $SRC" >&2
  exit 1
fi

if [[ -f "$SRC/Makefile" || -f "$SRC/makefile" ]]; then
  make -C "$SRC" BUILD_DIR="$OUT"
else
  echo "No Makefile found in $SRC." >&2
  echo "Vendor the active isat_ffd C/OpenCL source there, or set ISAT_FFD_BIN to an existing native binary." >&2
  exit 1
fi

if [[ ! -x "$OUT/ffd_isat" ]]; then
  echo "Build completed but $OUT/ffd_isat was not produced." >&2
  exit 1
fi

echo "Built native solver: $OUT/ffd_isat"
