#!/usr/bin/env bash
set -euo pipefail

CASE_ID="${1:?usage: run-standalone-native-case.sh <case_id> [run_id]}"
RUN_ID="${2:-native-standalone}"

ROOT="/workspace"
CASE_DIR="${ROOT}/cases/${CASE_ID}"
INGEST_DIR="${ROOT}/ingest/${CASE_ID}/current"
RUN_DIR="${ROOT}/output/${CASE_ID}/standalone/${RUN_ID}"
RESULTS_DIR="${RUN_DIR}/results"
DIAG_DIR="${RUN_DIR}/diagnostics"
KNOWN_GOOD_BINARY="${ROOT}/archive/legacy_2026-04-09/output/output/wsl_validation_run/ffd_isat_fresh"
LEGACY_BINARY="${ROOT}/archive/legacy_2026-04-09/wsl/ffd_isat"

if [[ -n "${FFD_STANDALONE_BIN:-}" ]]; then
  BINARY_SRC="${FFD_STANDALONE_BIN}"
elif [[ -f "${KNOWN_GOOD_BINARY}" ]]; then
  BINARY_SRC="${KNOWN_GOOD_BINARY}"
else
  BINARY_SRC="${LEGACY_BINARY}"
fi

if [[ ! -d "${CASE_DIR}" ]]; then
  echo "Missing case directory: ${CASE_DIR}" >&2
  exit 1
fi

if [[ ! -f "${BINARY_SRC}" ]]; then
  echo "Missing standalone FFD binary: ${BINARY_SRC}" >&2
  exit 1
fi

echo "Using standalone FFD binary: ${BINARY_SRC}"

write_legacy_input_ffd() {
  local src_ffd="$1"
  local dst_ffd="$2"
  {
    awk '
      /^inpu\.parameter_file_format / ||
      /^inpu\.parameter_file_name / ||
      /^inpu\.block_file_name /
    ' "${src_ffd}"
    printf '\n'
    awk '
      /^prob\.nu / ||
      /^prob\.rho / ||
      /^prob\.gravx / ||
      /^prob\.gravy / ||
      /^prob\.gravz / ||
      /^prob\.cond / ||
      /^prob\.Cp / ||
      /^prob\.beta / ||
      /^prob\.diff / ||
      /^prob\.alpha / ||
      /^prob\.coeff_h / ||
      /^prob\.Temp_Buoyancy /
    ' "${src_ffd}"
    printf '\n'
    awk '
      /^init\.T / ||
      /^init\.u / ||
      /^init\.v / ||
      /^init\.w /
    ' "${src_ffd}"
    printf '\n'
    # mytime.t_steady tells the solver at which physical time to write result.plt.
    # solv.cosimulation 0 tells it to run standalone (not wait for a Modelica signal).
    # Both were previously stripped by this filter, which is why result.plt was never
    # written even after a complete 900 s run.
    awk '
      /^mytime\.t_steady / ||
      /^solv\.cosimulation /
    ' "${src_ffd}"
    awk '
      /^outp\.version /
    ' "${src_ffd}"
    printf '\n'
  } > "${dst_ffd}"
}

mkdir -p "${INGEST_DIR}"
python "${ROOT}/generate_ffd_inputs.py" \
  --config "${CASE_DIR}/case.yaml" \
  --outdir "${INGEST_DIR}" \
  --cosimulation 0 \
  --native-tile-pressure-jump

python "${ROOT}/convert_to_sci.py" \
  --config "${CASE_DIR}/case.yaml" \
  --grid-dir "${INGEST_DIR}" \
  --geo "${INGEST_DIR}/geometry.json" \
  --outdir "${INGEST_DIR}" \
  --mode standalone-native

rm -rf "${RUN_DIR}"
mkdir -p "${RUN_DIR}" "${RESULTS_DIR}" "${DIAG_DIR}"

cp "${INGEST_DIR}/case.ffd" "${RUN_DIR}/case.ffd"
write_legacy_input_ffd "${INGEST_DIR}/case.ffd" "${RUN_DIR}/input.ffd"
cp "${INGEST_DIR}/case.cfd" "${RUN_DIR}/case.cfd"
cp "${INGEST_DIR}/case.dat" "${RUN_DIR}/case.dat"

for extra in grid_x.csv grid_y.csv grid_z.csv geometry.json cell_flags.npy sensor_locations.csv summary.txt; do
  if [[ -f "${INGEST_DIR}/${extra}" ]]; then
    cp "${INGEST_DIR}/${extra}" "${RUN_DIR}/${extra}"
  fi
done

cp "${BINARY_SRC}" "${RUN_DIR}/ffd_isat"
cp "${ROOT}/Kernels_3D.cl" "${ROOT}/data_structure_gpu.h" "${ROOT}/modelica_ffd_common.h" "${RUN_DIR}/"

echo "--- OpenCL platforms ---" | tee "${DIAG_DIR}/clinfo.txt"
clinfo -l 2>&1 | tee -a "${DIAG_DIR}/clinfo.txt" || true

cd "${RUN_DIR}"
chmod +x ./ffd_isat
./ffd_isat input.ffd

if [[ -f log_gpu.ffd ]]; then
  cp log_gpu.ffd "${DIAG_DIR}/log_gpu.ffd"
fi
if [[ -f ffd.log ]]; then
  cp ffd.log "${DIAG_DIR}/ffd.log"
fi

if [[ ! -f result.plt ]]; then
  echo "Standalone FFD run completed without result.plt in ${RUN_DIR}" >&2
  exit 1
fi

python -m cfd_pipeline.export_vtk \
  --result-plt "${RUN_DIR}/result.plt" \
  --grid-dir "${RUN_DIR}" \
  --output "${RESULTS_DIR}/result.vtr"

for artifact in result.plt unsteady.plt output.cfd; do
  if [[ -f "${RUN_DIR}/${artifact}" ]]; then
    cp "${RUN_DIR}/${artifact}" "${RESULTS_DIR}/${artifact}"
  fi
done
