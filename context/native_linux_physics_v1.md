# Native Linux Physics-v1 Notes

Date: 2026-04-22

The active workflow is native Ubuntu first. Docker and WSL wrapper workflows are
retired from the active runtime surface.

## Canonical Target

- Case: `fnb`
- Physics model: `physics-v1`
- First acceptance path: standalone OpenCL FFD
- Later integration path: OpenModelica + Buildings coupling

## Generated Physics Contract

`generate-ingest` writes `ingest/<case>/current/case.sources` for
`physics-v1`. The file contains:

- rack fluid momentum and heat source regions
- rack fan curve parameters
- transverse damping coefficient
- floor tile pressure-jump regions
- tile open area ratio, discharge coefficient, and loss coefficient

Racks remain fluid in `case.dat`. Containment remains solid geometry. Tile
regions remain internal regions at the raised floor instead of external
effective-area boundary conditions.

## Native Commands

```bash
scripts/cfd-doctor-native.sh
scripts/build-ffd-native.sh
scripts/run-standalone-physics-v1.sh fnb fnb-smoke
```

The full solver C source still needs to be present under `external/isat_ffd` for
`scripts/build-ffd-native.sh` to produce `build/native/ffd_isat`. Until then,
set `ISAT_FFD_BIN` to an existing native Linux solver binary.
