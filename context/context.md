# CFD Workspace Context

Last updated: 2026-04-22

## Current Direction

- Active workflow is native Ubuntu / Linux first.
- Canonical first target is standalone OpenCL FFD for `fnb` with
  `case.physics_model: physics-v1`.
- Docker and WSL wrapper workflows are retired from the active runtime surface.
- Coupled OpenModelica + Buildings stages remain in the codebase for later
  integration, but they are not the first acceptance path for physics-v1.

## Native Entry Points

```bash
scripts/cfd-doctor-native.sh
scripts/build-ffd-native.sh
scripts/run-standalone-physics-v1.sh fnb fnb-smoke
```

Equivalent Python CLI:

```bash
python -m cfd_pipeline.cli generate-ingest --case fnb --physics-model physics-v1
python -m cfd_pipeline.cli run-standalone --case fnb --run-id fnb-smoke
python -m cfd_pipeline.cli validate-standalone --case fnb --run-id fnb-smoke
python -m cfd_pipeline.cli export-vtk --case fnb --run-id fnb-smoke
```

## Physics-v1 Contract

The ingest stage writes `case.sources` alongside `case.ffd`, `case.cfd`,
`case.dat`, grid CSVs, `cell_flags.npy`, `geometry.json`, and
`sensor_locations.csv`.

`case.sources` describes:

- rack fluid momentum and heat source regions
- rack fan-curve parameters
- transverse damping for rack source cells
- floor-tile pressure-jump regions
- tile open area ratio, discharge coefficient, and loss coefficient

Racks remain fluid in `case.dat`. Containment remains solid geometry. Tile
regions remain internal raised-floor regions instead of effective-area boundary
conditions.

## Solver Source Status

`external/isat_ffd` is the intended vendored source tree for native standalone
builds. The repository currently contains the previous workflow's FFD headers
and OpenCL kernel, but not enough C source to build a complete solver binary.

Until the complete source is vendored, set:

```bash
export ISAT_FFD_BIN=/path/to/native/ffd_isat
```
