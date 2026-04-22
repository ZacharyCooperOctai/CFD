#!/usr/bin/env bash
set -euo pipefail

cd /workspace

cat >&2 <<'EOF'
The legacy standalone validation entrypoint is retired from the active workflow.
Use the staged Docker pipeline instead, for example:

  python -m cfd_pipeline.cli run-case --case minimal_coupled

Or call the stage wrappers under:

  docker/stages/
EOF

exit 2
