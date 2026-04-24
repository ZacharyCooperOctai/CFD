#!/usr/bin/env bash
set -euo pipefail

if [[ $# -lt 2 ]]; then
  echo "usage: scripts/run-standalone-physics-v1.sh <case> <run-id> [timeout-s]" >&2
  exit 2
fi

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
CASE_ID="$1"
RUN_ID="$2"
TIMEOUT="${3:-}"

cd "$ROOT"
export PYTHONPATH="$ROOT/src${PYTHONPATH:+:$PYTHONPATH}"

CMD=(python3 -m cfd_pipeline.cli run-standalone-case --case "$CASE_ID" --run-id "$RUN_ID" --physics-model physics-v1)
if [[ -n "$TIMEOUT" ]]; then
  CMD+=(--timeout-s "$TIMEOUT")
fi

"${CMD[@]}"

if [[ -f "output/$CASE_ID/run/$RUN_ID/runtime/result.plt" ]]; then
  python3 -m cfd_pipeline.cli export-vtk --case "$CASE_ID" --run-id "$RUN_ID"
else
  echo "No result.plt found; skipping VTK export."
fi
