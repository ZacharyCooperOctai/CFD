#!/usr/bin/env bash
set -euo pipefail

OUTDIR="${1:-/workspace/output/container_smoke}"
EXE_NAME="${2:-s000_baseline}"
SLEEP_SECS="${DIAG_SLEEP:-20}"
LOG_FLAGS="${DIAG_LOG_FLAGS:-LOG_STATS,LOG_SOLVER,LOG_EVENTS,LOG_INIT,LOG_STDOUT,LOG_LS,LOG_NLS}"

EXE="${OUTDIR}/${EXE_NAME}"
STDOUT_LOG="${OUTDIR}/gdb_run_stdout.log"
STDERR_LOG="${OUTDIR}/gdb_run_stderr.log"
MAT_FILE="${OUTDIR}/gdb_run.mat"
PS_LOG="${OUTDIR}/proc_threads.txt"
GDB_LOG="${OUTDIR}/gdb_attach.txt"
STRACE_LOG="${OUTDIR}/strace_attach.txt"
PROC_STATUS_LOG="${OUTDIR}/proc_status.txt"

if [[ ! -x "${EXE}" ]]; then
  echo "Missing executable: ${EXE}" >&2
  exit 1
fi

rm -f "${STDOUT_LOG}" "${STDERR_LOG}" "${MAT_FILE}" "${PS_LOG}" "${GDB_LOG}" "${STRACE_LOG}" "${PROC_STATUS_LOG}"

cd "${OUTDIR}"
"./${EXE_NAME}" "-lv=${LOG_FLAGS}" "-r=$(basename "${MAT_FILE}")" >"${STDOUT_LOG}" 2>"${STDERR_LOG}" &
PID=$!

echo "PID=${PID}"
sleep "${SLEEP_SECS}"

ps -T -p "${PID}" -o pid,tid,ppid,stat,pcpu,comm,wchan:32 >"${PS_LOG}" || true
cat "/proc/${PID}/status" >"${PROC_STATUS_LOG}" || true

gdb -q -batch \
  -ex 'set pagination off' \
  -ex "attach ${PID}" \
  -ex 'info threads' \
  -ex 'thread apply all bt full' \
  -ex 'detach' \
  -ex 'quit' \
  "./${EXE_NAME}" >"${GDB_LOG}" 2>&1 || true

strace -f -tt -p "${PID}" -o "${STRACE_LOG}" -qq -s 160 &
STRACE_PID=$!
sleep 3
kill -INT "${STRACE_PID}" >/dev/null 2>&1 || true
wait "${STRACE_PID}" 2>/dev/null || true

kill -INT "${PID}" >/dev/null 2>&1 || true
wait "${PID}" 2>/dev/null || true

echo "Logs written to ${OUTDIR}"
