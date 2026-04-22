#!/usr/bin/env bash
set -euo pipefail

RUN_DIR=/workspace/output/coarse_dc/standalone/coarse-field
mkdir -p /workspace/output/coarse_dc/standalone
rm -rf "$RUN_DIR"
mkdir -p "$RUN_DIR"

cp /workspace/ingest/coarse_dc/current/case.ffd "$RUN_DIR/case.ffd"
cp /workspace/ingest/coarse_dc/current/case.ffd "$RUN_DIR/input.ffd"
cp /workspace/ingest/coarse_dc/current/case.cfd "$RUN_DIR/case.cfd"
cp /workspace/ingest/coarse_dc/current/case.dat "$RUN_DIR/case.dat"
cp /workspace/ingest/coarse_dc/current/grid_x.csv "$RUN_DIR/grid_x.csv"
cp /workspace/ingest/coarse_dc/current/grid_y.csv "$RUN_DIR/grid_y.csv"
cp /workspace/ingest/coarse_dc/current/grid_z.csv "$RUN_DIR/grid_z.csv"
cp /workspace/archive/legacy_2026-04-09/wsl/ffd_isat "$RUN_DIR/ffd_isat"
cp /workspace/Kernels_3D.cl /workspace/data_structure_gpu.h /workspace/modelica_ffd_common.h "$RUN_DIR/"

cd "$RUN_DIR"
chmod +x ./ffd_isat
./ffd_isat
