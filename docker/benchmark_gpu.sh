#!/usr/bin/env bash
# Benchmark: 45-second FFD run using the full_dc baseline-900s directory in-place.
# Temporarily patches case.cfd step_total to 450, runs the solver, then restores.
# Running in-place replicates exactly the conditions of the original successful run.
#
# Usage: docker compose run --rm cfd bash docker/benchmark_gpu.sh
set -euo pipefail

RUN_DIR="/workspace/output/full_dc/standalone/baseline-900s"
FFD_BIN="${RUN_DIR}/ffd_isat"
SIM_SECONDS=45
STEP_TOTAL=450   # 45 / 0.1

if [[ ! -f "${FFD_BIN}" ]]; then
  echo "ERROR: ${FFD_BIN} not found"; exit 1
fi

echo "============================================"
echo " FFD benchmark — full_dc, ${SIM_SECONDS} sim-seconds"
echo " Running in-place from: ${RUN_DIR}"
echo "============================================"
echo

echo "--- OpenCL platforms ---"
clinfo -l 2>/dev/null || echo "(clinfo not available)"
echo

# Patch step_total in case.cfd (9000 → 450), saving the original
cd "${RUN_DIR}"
# Restore from a previous crashed run if needed
if [[ -f case.cfd.orig ]]; then
  echo "  (Restoring case.cfd from previous crashed run)"
  cp case.cfd.orig case.cfd && rm case.cfd.orig
fi
cp case.cfd case.cfd.orig

python3 - case.cfd "${STEP_TOTAL}" <<'PYEOF'
import sys, re
path, steps = sys.argv[1], sys.argv[2]
with open(path) as f:
    text = f.read()
patched = re.sub(
    r'(^0\.0\s+0\.100000\s+)\d+',
    lambda m: m.group(1) + steps,
    text, count=1, flags=re.MULTILINE,
)
assert patched != text, "step_total line not found in case.cfd"
with open(path, 'w') as f:
    f.write(patched)
print(f"  Patched step_total: 9000 → {steps} (45 sim-seconds)")
PYEOF

echo "  Starting solver from ${RUN_DIR}"
echo "  (PoCL compiles the kernel on first run — may take time)"
echo

# Run using the same input.ffd that worked originally — no modifications
START_TS=$(date +%s%3N)
rm -f log_gpu.ffd

"${FFD_BIN}" input.ffd &
FFD_PID=$!

# Stream log_gpu.ffd as it appears
for i in $(seq 1 300); do [ -f log_gpu.ffd ] && break; sleep 1; done
[ -f log_gpu.ffd ] && tail -f log_gpu.ffd & TAIL_PID=$!

set +e
wait "${FFD_PID}"
FFD_EXIT=$?
set -e
sleep 1
kill "${TAIL_PID:-}" 2>/dev/null || true

END_TS=$(date +%s%3N)
WALL_MS=$(( END_TS - START_TS ))
WALL_S=$(python3 -c "print(f'{${WALL_MS}/1000:.1f}')")

# Restore original case.cfd
cp case.cfd.orig case.cfd && rm case.cfd.orig
echo "(case.cfd restored)"

echo
echo "============================================"
echo " RESULTS (exit code: ${FFD_EXIT})"
echo "============================================"
echo " Wall-clock time : ${WALL_S} s"
echo " Simulated time  : ${SIM_SECONDS} s"
if (( WALL_MS > 0 )); then
  echo " Real-time ratio : $(python3 -c "print(f'{${SIM_SECONDS}/(${WALL_MS}/1000):.4f}x')")"
fi
echo
echo "--- Final timing lines from solver ---"
grep "^Physical time" log_gpu.ffd | tail -8 || echo "(no timing output — check log above)"
echo "============================================"
