#!/usr/bin/env bash
set -euo pipefail

export VIRTUAL_ENV="${VIRTUAL_ENV:-/opt/cfd-venv}"
export PATH="${VIRTUAL_ENV}/bin:${PATH}"
export PYTHONPATH="/workspace/src${PYTHONPATH:+:${PYTHONPATH}}"
export PYTHONUNBUFFERED="${PYTHONUNBUFFERED:-1}"
export MPLBACKEND="${MPLBACKEND:-Agg}"
export CFD_DOCKER_IMAGE="${CFD_DOCKER_IMAGE:-cfd-openmodelica:local}"

# Prefer the host Nvidia OpenCL ICD under WSL when it is mounted into the
# container. If that library is absent, do not override OCL_ICD_VENDORS:
# letting ocl-icd use /etc/OpenCL/vendors preserves the packaged CPU ICDs
# such as PoCL for fallback execution.
#
# Try both naming conventions used by different Nvidia/WSL2 driver releases:
#   libnvidia-opencl.so.1  — older dedicated OpenCL library name
#   libOpenCL.so.1         — WSL2 WDDM driver layout (newer releases)
_NVIDIA_OCL_LIB=""
for _candidate in \
    /usr/lib/wsl/lib/libnvidia-opencl.so.1 \
    /usr/lib/wsl/lib/libOpenCL.so.1; do
  if [[ -r "${_candidate}" ]]; then
    _NVIDIA_OCL_LIB="${_candidate}"
    break
  fi
done

if [[ -n "${_NVIDIA_OCL_LIB}" ]]; then
  export OCL_ICD_VENDORS="${OCL_ICD_VENDORS:-${HOME}/.config/OpenCL/vendors}"
  mkdir -p "${OCL_ICD_VENDORS}"
  printf '%s\n' "${_NVIDIA_OCL_LIB}" > "${OCL_ICD_VENDORS}/nvidia.icd"
  export LD_LIBRARY_PATH="/usr/lib/wsl/lib${LD_LIBRARY_PATH:+:${LD_LIBRARY_PATH}}"
  export NVIDIA_VISIBLE_DEVICES="${NVIDIA_VISIBLE_DEVICES:-all}"
  export NVIDIA_DRIVER_CAPABILITIES="${NVIDIA_DRIVER_CAPABILITIES:-compute,utility}"
fi
unset _NVIDIA_OCL_LIB _candidate

if [[ -d /workspace/external/modelica-buildings ]]; then
  export BUILDINGS_LIBRARY_PACKAGE="${BUILDINGS_LIBRARY_PACKAGE:-/workspace/external/modelica-buildings/Buildings/package.mo}"
fi

mkdir -p \
  /workspace/archive \
  /workspace/build_logs \
  /workspace/ingest/minimal_coupled/current \
  /workspace/ingest/coarse_dc/current \
  /workspace/ingest/full_dc/current \
  /workspace/ingest/fnb/current \
  /workspace/output/minimal_coupled/build \
  /workspace/output/minimal_coupled/run \
  /workspace/output/minimal_coupled/validate \
  /workspace/output/coarse_dc/build \
  /workspace/output/coarse_dc/run \
  /workspace/output/coarse_dc/validate \
  /workspace/output/full_dc/build \
  /workspace/output/full_dc/run \
  /workspace/output/full_dc/validate

ffd_bin="${ISAT_FFD_BIN:-/workspace/ffd_isat}"
if [[ -f "${ffd_bin}" ]]; then
  chmod +x "${ffd_bin}" 2>/dev/null || true
fi

msl_root="/home/cfd/.openmodelica/libraries/Modelica 4.0.0+maint.om"
if [[ ! -f "${msl_root}/package.mo" ]]; then
  cat >/tmp/install_modelica.mos <<'EOF'
installPackage(Modelica, "4.0.0+maint.om", exactMatch=true);
getErrorString();
quit();
EOF
  omc /tmp/install_modelica.mos >/tmp/install_modelica.log 2>&1 || cat /tmp/install_modelica.log >&2
fi

exec "$@"
