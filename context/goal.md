# Project Goal: Data Centre Thermal Digital Twin for ML Training Data Generation

## Purpose

This project builds a physics-based digital twin of a raised-floor data centre to generate
high-fidelity training data for a machine learning model. The ML objective is to learn the
mapping from **CRAC control actions → spatially-resolved rack inlet temperature responses**
across a variety of operating conditions, without running a full CFD simulation at inference time.

Each simulation episode represents one 15-minute steady-state window under a fixed set of CRAC
setpoints (fan speed + supply temperature). The outputs are sensor time series that the ML model
uses as labelled examples.

---

## Architecture Overview

```
dc_config.yaml
    │
    ▼
generate_ffd_inputs.py          ← Step 1: geometry + mesh definition
    │  writes:
    ├── geometry.json            (human-readable geometry record)
    ├── grid_x/y/z.csv           (1D node coordinate arrays)
    ├── cell_flags.npy           (100×317×37 int32 flag array)
    ├── sensor_locations.csv     (325 sensor positions)
    ├── dc_model.ffd             (FFD parameter file)
    └── summary.txt              (cell count statistics)
    │
    ▼
convert_to_sci.py               ← Step 2: format conversion
    │  writes:
    ├── dc_model.cfd             (SCI ASCII boundary-condition file for isat_ffd)
    └── dc_model.dat             (zeroone solid-flag file for isat_ffd)
    │
    ▼
isat_ffd  (native Linux binary) ← Step 3: standalone FFD validation
    │  reads: input.ffd → dc_model.cfd, dc_model.dat, Kernels_3D.cl
    │  writes: log_gpu.ffd, field output files
    │
    ▼
validation/check_energy_balance.py    ← Step 4: physics sanity checks
    │  checks: energy balance (±5%), rack inlet temps (18–35°C)
    │
    ▼
dc_model.mo  (OpenModelica)     ← Step 5: Modelica HVAC model
    │  couples to isat_ffd via Buildings.ThermalZones.Detailed.CFD
    │  exposes: u_fan[6], u_Tsup[6] as ML control interface
    │
    ▼
run_scenarios.py                ← Step 6: ML training data sweep
    │  reads: scenarios/scenario_template.csv
    │  writes: output/training_data/scenario_NNN.npz
    └──────────────────────────────────────────────────────────►
                                  output/training_dataset.npz
```

---

## Room Geometry

| Parameter | Value |
|-----------|-------|
| Footprint | 15 m × 25 m |
| White space height | 3.9 m |
| Plenum depth | 0.6 m |
| Total height | 4.5 m |
| Rack rows | 8 rows × 13 racks = 104 racks |
| Total IT load | 104 × 5 kW = 520 kW |
| CRAC units | 6 (paired east/west at 3 Y-positions) |
| CRAC rated flow | 4.5 m³/s each |
| CRAC supply temp | 14 °C nominal |

Airflow path: CRACs inject cold air into the sub-floor plenum → cold air rises through
perforated floor tiles in cold aisles → flows through rack cold faces → exhausted through
rack hot faces into hot aisles (contained by glass enclosures) → CRAC units draw hot air
from return grilles near ceiling.

Coordinate origin: top-left room corner at raised-floor level. X = left→right (15 m),
Y = near→far (25 m), Z = vertical upward. Plenum occupies Z = −0.6 m to 0.

---

## Key Files and Their Roles

### `dc_config.yaml`
Single source of truth for all geometry, mesh, CRAC specs, and solver settings. Every
downstream script reads this file — nothing is hardcoded elsewhere.

### `generate_ffd_inputs.py`
Reads `dc_config.yaml` and generates 6 output files. Creates the computational mesh
(non-uniform grid with local refinement near racks and tile openings), assigns cell flags
(FLUID=0, SOLID=1, INLET=2, OUTLET=3, WALL=4, RACK_COLD=7, RACK_HOT=8, TILE=9,
CONTAINMENT=10), and writes the FFD parameter file.

### `convert_to_sci.py`
Converts the Python-generated mesh to the SCI binary formats natively read by `isat_ffd`:
- `dc_model.cfd`: ASCII boundary-condition file listing every inlet/outlet/rack/tile cell
  with its flow rate, temperature, and port name. Has sections for CRAC supplies, CRAC
  returns, rack cold faces (heat sources), rack hot faces (outlets), and tile openings.
- `dc_model.dat`: ASCII zeroone file, one integer per cell (1=solid, 0=fluid) in
  Z-major→Y-major→X order, 25 values per line. Used by FFD to identify solid obstacles.

### `dc_model.ffd` / `input.ffd`
FFD parameter file specifying solver settings (dt=0.1s, t_end=900s), fluid properties,
initial conditions, and output frequency. FFD reads this as `input.ffd` in standalone mode
(symlinked or copied from `dc_model.ffd`).

### `isat_ffd` (native Linux binary)
Fast Fluid Dynamics solver from Han et al. 2021 (doetools/isat_ffd on GitHub). Compiled
on Ubuntu with OpenCL support. Solves the incompressible
Navier-Stokes + energy equations on the structured grid using explicit time stepping.
GPU kernels are in `Kernels_3D.cl`; mesh and data structures in `data_structure_gpu.h`.
In coupled mode, Modelica drives boundary conditions every 10s via the Buildings library
CFD interface; in standalone mode, BCs are fixed from `dc_model.cfd`.

### `dc_model.mo`
OpenModelica model coupling isat_ffd to Modelica Buildings library HVAC components.
Six CRAC units are modelled as `FlowControlled_m_flow` fans + `HeaterCooler_u` coils with
PID temperature controllers. `RealInput u_fan[6]` (0–1 fan fraction) and `u_Tsup[6]`
(supply temperature setpoint in K) are the ML control interface — they can be driven by a
`CombiTimeTable` reading any scenario CSV, making each simulation episode fully parametric.
Room ports 1–6 = CRAC supply inlets; ports 7–12 = CRAC return outlets.

### `validation/`
- `run_steady.ffd`: FFD config for standalone validation (all CRACs at rated flow, 14°C)
- `check_energy_balance.py`: Validates total CRAC cooling ≈ 520 kW IT load (±5%),
  all rack inlet sensors 18–35°C, generates heatmap plots

### `run_scenarios.py`
Orchestrates the ML training sweep via OMPython:
1. Generates a CombiTimeTable Modelica input for each scenario's CRAC setpoints
2. Runs a 900s OpenModelica simulation
3. Extracts sensor time series from the `.mat` result file
4. Saves per-scenario `.npz` (control: Nx12, T_rack: Nx312, T_crac_return: Nx6)
5. Aggregates all scenarios into `training_dataset.npz`

### `scenarios/scenario_template.csv`
Defines CRAC setpoints for each 15-minute episode. 37 scenarios in the initial sweep:
baseline (all CRACs nominal) + fan sweep (each CRAC stepped 100%→60%→100%) +
supply temperature sweep (each CRAC stepped 14°C→18°C→14°C) + pairwise combinations.

---

## Current Status (as of 2026-04-01)

| Step | Status |
|------|--------|
| Geometry + mesh generation (`generate_ffd_inputs.py`) | Complete |
| SCI format conversion (`convert_to_sci.py`) | Complete — `dc_model.cfd` and `.dat` verified |
| Modelica model (`dc_model.mo`) | Complete — not yet compiled/tested |
| Standalone FFD validation | **In progress** — isat_ffd builds and reads mesh; OpenCL kernel compilation blocked |
| ML scenario runner (`run_scenarios.py`) | Complete — not yet run |

**Active blocker:** pocl (CPU OpenCL) fails to compile `Kernels_3D.cl` with the error
`call to '_cl_max' is ambiguous`. Root cause: all 24 `max(X, 0)` calls in the kernel have
been patched to `fmax(X, (REAL)0)` (where `REAL = float`), and the mutable program-scope
`static char msg[1000]` in `data_structure_gpu.h` has been commented out, but the kernel
compilation still fails. Next step: confirm whether pocl is reading the patched files by
checking the temp file contents, or investigate whether `fmax` is also ambiguous under pocl's
`_builtin_renames.h` (which renames OpenCL built-ins).

**Native Linux setup:** build `ffd_isat` into `build/native/ffd_isat`, or set
`ISAT_FFD_BIN` to an existing native Linux binary. Runtime inputs are staged
under `output/<case>/run/<run-id>/runtime/`.

---

## ML Training Data Schema

Each scenario `.npz` contains:
- `control`: (N_timesteps, 12) — `[crac1_fan, ..., crac6_fan, crac1_Tsup, ..., crac6_Tsup]`
- `T_rack`: (N_timesteps, 312) — rack inlet temperatures at 3 heights × 104 racks (°C)
- `T_crac_return`: (N_timesteps, 6) — CRAC return air temperatures (°C)
- `metadata`: dict with scenario ID, CRAC setpoints, timestamps

The aggregated `training_dataset.npz` stacks all 37 episodes for use in model training.

---

## Dependencies

```
Python (native venv):      numpy, pyyaml, matplotlib, OMPython, BuildingsPy
Ubuntu:                    gcc, libOpenCL-dev, clinfo, NVIDIA OpenCL ICD
OpenModelica:              optional for later coupled workflow
Buildings library:         download from simulationresearch.lbl.gov/modelica
isat_ffd source:           vendored under external/isat_ffd
```
