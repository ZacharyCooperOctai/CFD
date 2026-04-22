#!/usr/bin/env bash
set -euo pipefail

cd /workspace

has_case=0
for arg in "$@"; do
  if [[ "${arg}" == "--case" ]]; then
    has_case=1
    break
  fi
done

if [[ ${has_case} -eq 0 ]]; then
  exec python -m cfd_pipeline.cli run-case --case full_dc "$@"
fi

exec python -m cfd_pipeline.cli run-case "$@"
