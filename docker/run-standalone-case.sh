#!/usr/bin/env bash
set -euo pipefail

CASE_ID="${1:?usage: run-standalone-case.sh <case_id> [run_id]}"
RUN_ID="${2:-standalone-run}"
INGEST_DIR="/workspace/ingest/${CASE_ID}/current"
RUN_DIR="/workspace/output/${CASE_ID}/standalone/${RUN_ID}"
BINARY_SRC="${FFD_STANDALONE_BIN:-/workspace/archive/legacy_2026-04-09/wsl/ffd_isat}"

if [[ ! -d "${INGEST_DIR}" ]]; then
  echo "Missing ingest directory: ${INGEST_DIR}" >&2
  exit 1
fi

if [[ ! -f "${BINARY_SRC}" ]]; then
  echo "Missing standalone FFD binary: ${BINARY_SRC}" >&2
  exit 1
fi

mkdir -p "/workspace/output/${CASE_ID}/standalone"
rm -rf "${RUN_DIR}"
mkdir -p "${RUN_DIR}"

cp "${INGEST_DIR}/case.ffd" "${RUN_DIR}/case.ffd"
cp "${INGEST_DIR}/case.ffd" "${RUN_DIR}/input.ffd"
cp "${INGEST_DIR}/case.cfd" "${RUN_DIR}/case.cfd"
cp "${INGEST_DIR}/case.dat" "${RUN_DIR}/case.dat"

for extra in grid_x.csv grid_y.csv grid_z.csv geometry.json cell_flags.npy sensor_locations.csv summary.txt; do
  if [[ -f "${INGEST_DIR}/${extra}" ]]; then
    cp "${INGEST_DIR}/${extra}" "${RUN_DIR}/${extra}"
  fi
done

cp "${BINARY_SRC}" "${RUN_DIR}/ffd_isat"
cp /workspace/Kernels_3D.cl /workspace/data_structure_gpu.h /workspace/modelica_ffd_common.h "${RUN_DIR}/"

cd "${RUN_DIR}"
chmod +x ./ffd_isat
./ffd_isat
