#!/usr/bin/env bash
set -euo pipefail

echo '=== ENV ==='
env | sort | grep -E '^(HOME|PATH|MODELICAPATH|OPENMODELICA|OMC|BUILDINGS|USER)=' || true

echo
echo '=== BINARIES ==='
command -v omc || true
command -v python || true
command -v bash || true
ls -l /usr/bin/omc /usr/bin/python3 2>/dev/null || true

echo
echo '=== KEY DIRS ==='
for d in \
  /home/cfd \
  /home/cfd/.openmodelica \
  /home/cfd/.openmodelica/libraries \
  /usr/lib/omlibrary \
  /usr/share/omlibrary \
  /usr/lib/openmodelica \
  /usr/share/openmodelica \
  /usr/local/lib/omlibrary \
  /usr/local/share/omlibrary
  do
  if [[ -e "$d" ]]; then
    echo "--- $d ---"
    ls -la "$d" | sed -n '1,80p'
  fi
done

echo
echo '=== MODEL LIB SEARCH ==='
find /usr /opt /home/cfd -maxdepth 5 \( -iname 'Modelica*' -o -iname 'omlibrary' -o -iname 'openmodelica' \) 2>/dev/null | sed -n '1,200p'

echo
echo '=== PACKAGE.MO SEARCH ==='
find /usr /opt /home/cfd -maxdepth 6 -iname 'package.mo' 2>/dev/null | sed -n '1,200p'

echo
echo '=== OMC SCRIPT ==='
cat >/tmp/check_paths.mos <<'EOF'
getInstallationDirectoryPath();
getModelicaPath();
loadModel(Modelica);
getErrorString();
quit();
EOF
omc /tmp/check_paths.mos || true

echo
echo '=== INDEX.JSON HEAD ==='
if [[ -f /home/cfd/.openmodelica/libraries/index.json ]]; then
  wc -c /home/cfd/.openmodelica/libraries/index.json
  sed -n '1,80p' /home/cfd/.openmodelica/libraries/index.json
fi