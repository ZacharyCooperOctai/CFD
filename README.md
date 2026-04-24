# CFD Native Linux Workflow

This repository now treats the Ubuntu native standalone FFD path as the
canonical first workflow for `physics-v1`.

## Quick Start

```bash
python3 -m venv .venv
. .venv/bin/activate
pip install -r requirements.txt
export PYTHONPATH="$PWD/src"

scripts/cfd-doctor-native.sh
scripts/build-ffd-native.sh
scripts/run-standalone-physics-v1.sh fnb fnb-smoke
```

If an existing native solver binary is available before the full source is
vendored, point the pipeline at it:

```bash
export ISAT_FFD_BIN=/path/to/ffd_isat
```

By default, standalone runs require a working NVIDIA GPU preflight. To allow a
CPU OpenCL fallback for debugging:

```bash
export CFD_ALLOW_CPU_OPENCL=1
```

## Physics-v1 Contract

`cases/fnb/case.yaml` declares `case.physics_model: physics-v1`.

The ingest stage writes:

- `case.ffd`
- `case.cfd`
- `case.dat`
- `case.sources`
- `geometry.json`
- `grid_x.csv`, `grid_y.csv`, `grid_z.csv`
- `cell_flags.npy`
- `sensor_locations.csv`

`case.sources` is the solver-facing source-region contract. It describes rack
fluid heat/momentum source regions and floor-tile pressure-jump regions without
turning racks into solid blocks or tiles into effective-area boundary patches.

## Native CLI

```bash
python -m cfd_pipeline.cli generate-ingest --case fnb --physics-model physics-v1
python -m cfd_pipeline.cli run-standalone --case fnb --run-id fnb-smoke
python -m cfd_pipeline.cli validate-standalone --case fnb --run-id fnb-smoke
python -m cfd_pipeline.cli export-vtk --case fnb --run-id fnb-smoke
```

Coupled Modelica stages remain available for later integration, but are not the
first acceptance path for `physics-v1`.
