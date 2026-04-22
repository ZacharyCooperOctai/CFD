#!/usr/bin/env bash
set -euo pipefail
cd /workspace
exec python -m cfd_pipeline.cli run-coupled "$@"
