#!/usr/bin/env bash
set -euo pipefail

SRC=/workspace/external/modelica-buildings/Buildings/Resources/src/FastFluidDynamics
RUN_DIR=/workspace/output/coarse_dc/standalone/coarse-field-libffd

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

gcc -Wall -m64 -std=c89 -pedantic -msse2 -mfpmath=sse -fcommon \
  -I"$SRC" \
  /workspace/docker/ffd_standalone_main.c \
  "$SRC"/advection.c \
  "$SRC"/boundary.c \
  "$SRC"/chen_zero_equ_model.c \
  "$SRC"/cosimulation.c \
  "$SRC"/data_writer.c \
  "$SRC"/diffusion.c \
  "$SRC"/ffd.c \
  "$SRC"/ffd_data_reader.c \
  "$SRC"/ffd_dll.c \
  "$SRC"/geometry.c \
  "$SRC"/initialization.c \
  "$SRC"/interpolation.c \
  "$SRC"/parameter_reader.c \
  "$SRC"/projection.c \
  "$SRC"/sci_reader.c \
  "$SRC"/solver.c \
  "$SRC"/solver_gs.c \
  "$SRC"/solver_tdma.c \
  "$SRC"/timing.c \
  "$SRC"/utility.c \
  -lpthread -lm \
  -o "$RUN_DIR/ffd_standalone"

cd "$RUN_DIR"
./ffd_standalone
