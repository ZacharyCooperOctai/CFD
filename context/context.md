# CFD Workspace Context

Last updated: 2026-04-08

## Purpose
- Raised-floor data-centre CFD + Modelica coupling workflow for generating ML training data.
- Standalone WSL FFD validation path is operational.
- Modelica-coupled path is being brought up on Windows with OpenModelica.

## Current Environment
- Repo root: `C:\Users\ZacharyCooper-Baldoc\Desktop\Repositories\CFD`
- WSL distro used for FFD: `Ubuntu`
- OpenModelica installed on Windows at `C:\OpenModelica`
- `omc.exe` verified:
  - path: `C:\OpenModelica\bin\omc.exe`
  - version: `OpenModelica v1.26.3 (64-bit)`
- Python environment for orchestration:
  - `.\.venv\Scripts\python.exe`
  - `OMPython` available
  - `BuildingsPy` available

## Standalone FFD Status
- Standalone WSL validation completed successfully for the full 900 s window.
- Explicit run directory:
  - `output/wsl_validation_run`
- Evidence from `output/wsl_validation_run/log_gpu.ffd`:
  - `dt=0.100000`
  - `step_total=9000`
  - reached `Physical time=900.0000 s`

## Important Local Fixes Already Applied
- `Kernels_3D.cl`
  - Replaced PoCL-problematic positive-part logic with `POSPART(...)`.
- `convert_to_sci.py`
  - Added missing SCI trailer records so FFD no longer reads `dt=0` / `step_total=0`.
- `input.ffd`
  - Set `outp.version RUN`
- `dc_model.ffd`
  - Set `outp.version RUN`
- `run_wsl_validation.ps1`
  - Added one-command regenerate/sync/build/run automation for the standalone WSL path.
- `run_scenarios.py`
  - Added `omc` discovery/preflight.
  - Switched scenario generation away from invalid connector overrides in `extends`.

## Key Files
- `goal.md`
  - high-level project intent and current blocker summary
- `dc_model.mo`
  - main coupled Modelica model
- `run_scenarios.py`
  - OMPython-based scenario runner
- `convert_to_sci.py`
  - writes `dc_model.cfd` and `dc_model.dat`
- `run_wsl_validation.ps1`
  - automated standalone validation entrypoint
- `output/wsl_validation_run`
  - current explicit standalone validation workspace

## OpenModelica Bring-Up Status
- `omc` installed and runnable.
- OpenModelica user config found:
  - `C:\Users\ZacharyCooper-Baldoc\AppData\Roaming\OpenModelica\omedit.ini`
- `OMPython` can now start `omc` successfully from the project `.venv`.
- Official Buildings library `v9.0.0` cloned locally to:
  - `C:\OMLibs\modelica-buildings`
- `run_scenarios.py` now resolves and loads:
  - `C:\OMLibs\modelica-buildings\Buildings\package.mo`
  - instead of relying on global OpenModelica package-manager state
- Verified directly with `OMPython`:
  - `loadFile("C:/OMLibs/modelica-buildings/Buildings/package.mo") == true`
- `run_scenarios.py` scenario generation now instantiates `DataCentreFFD` as a component
  instead of inheriting from it, and result parsing now accepts both plain and `dc.`-prefixed variable names
- `dc_model.mo` is now adapted part-way for Buildings 9 / OpenModelica 1.26:
  - removed unsupported `roo.T_start` modifier
  - replaced invalid `HeaterCooler_u` usage with simpler prescribed supply-source logic
  - added explicit `roo.portName`
  - added explicit `AFlo` / `hRoo`
  - set `sensorName={""}` to disable CFD sensors cleanly for smoke testing
  - added adiabatic surface heat-flow sources for the six room boundaries
- Current coupled-model blocker:
  - `Scenario_s000_baseline` still translates to an under-determined system
  - latest count: `1288 equation(s)` vs `1291 variable(s)` during `simulate(...)`
  - this is currently a local `dc_model.mo` balance issue, not a missing-Buildings issue
- Independent OpenModelica build blocker observed on the official Buildings FFD example:
  - `Buildings.ThermalZones.Detailed.Examples.FFD.ForcedConvection` checks successfully
  - inside the sandbox, the generated simulator build fails with MSYS/MinGW errors such as:
    - `sh.exe: ... CreateFileMapping ... Win32 error 5`
  - rerunning `C:\OpenModelica\bin\omc.exe om_forced_convection_30s.mos` outside the sandbox does build the executable successfully
  - however the example still returns `Simulation execution failed` at runtime, with no `.mat` file and no detailed log emitted yet
  - directly invoking `output/om_buildings_example/ForcedConvection_30s.bat` returns exit code `0`, but still produces no result file
- Next step:
  - inspect the Windows FFD runtime failure from the official Buildings example
  - continue balancing `dc_model.mo` until a first coupled scenario can compile and run

## Current Windows FFD Crash Diagnosis
- The current coupled Windows crash is now localized to the Buildings FFD DLL source, not the WSL standalone solver.
- Confirmed with `gdb` on `output/training_smoke_sensorfix/s000_baseline.exe`:
  - crash thread is inside `ffd.dll`
  - top frame is `ucrtbase!strlen`
  - call chain is `read_parameter -> initialize -> ffd -> ffd_cosimulation -> ffd_thread`
- Root cause:
  - `external/modelica-buildings/Buildings/Resources/src/FastFluidDynamics/parameter_reader.c`
  - co-simulation path extraction assumes `/` path separators:
    - `char *lastSlash = strrchr(para->cosim->para->fileName, '/');`
    - `strlen(lastSlash)` then dereferences `NULL` for Windows paths like `C:\...\dc_model.ffd`
  - this is the immediate reason for the access violation in the coupled Windows path
- Local fixes now present in the workspace copy of Buildings:
  - `external/modelica-buildings/Buildings/Resources/src/FastFluidDynamics/parameter_reader.c`
    - patched to accept both `/` and `\` separators
  - `external/modelica-buildings/Buildings/Resources/src/FastFluidDynamics/ffd.c`
    - removed premature free of `cosim->ffd->msg` in `modelicaError()`
  - `external/modelica-buildings/Buildings/Resources/src/FastFluidDynamics/data_structure.h`
  - `external/modelica-buildings/Buildings/Resources/src/FastFluidDynamics/cosimulation.h`
  - `external/modelica-buildings/Buildings/Resources/src/FastFluidDynamics/ffd_dll.h`
  - `external/modelica-buildings/Buildings/Resources/src/FastFluidDynamics/ffd_dll.c`
    - relaxed Windows detection so the DLL can be rebuilt locally with clang on Windows
  - rebuilt DLL currently staged at:
    - `external/modelica-buildings/Buildings/Resources/Library/win64/ffd.dll`
- Interpretation:
  - the Windows/OpenModelica path has at least one real Windows-specific bug in upstream Buildings FFD handling
  - even after this fix, the coupled workflow may still expose further runtime or model issues, but this specific memory crash is now understood

## Linux Container Workflow
- Added a Linux-native container workflow to move the CFD + OpenModelica CLI path off the mixed Windows/WSL runtime.
- New container assets:
  - `Dockerfile`
    - base image: `openmodelica/openmodelica:v1.26.3-ompython`
    - installs Linux OpenCL runtime packages and creates a container-local venv at `/opt/cfd-venv`
  - `docker-compose.yml`
    - mounts the whole repo at `/workspace`
    - keeps generated outputs under `/workspace/output`
    - mounts a persistent OpenModelica home volume at `/root/.openmodelica`
  - `docker/entrypoint.sh`
    - exports container-local Python/Modelica environment
    - points Buildings to `/workspace/external/modelica-buildings/Buildings/package.mo`
  - `docker/cfd-doctor.sh`
    - quick environment verification inside the container
  - `docker/run-standalone-validation.sh`
    - regenerates FFD inputs, syncs `output/docker_validation_run`, and runs the repo-local Linux `ffd_isat`
  - `docker/run-coupled-scenarios.sh`
    - runs `run_scenarios.py` inside the Linux container
  - `docker/README.md`
    - container usage notes and example commands
- `run_scenarios.py` was also made more container-friendly:
  - generalized Buildings FFD runtime detection from Windows-only `ffd.dll` to cross-platform shared library discovery
  - Linux preflight now checks that the Buildings FFD shared library can be loaded
- Validation status for the container setup:
  - `docker compose config` succeeds locally
  - Docker Linux engine was started successfully from Windows
  - `docker compose build` completed once; a later rebuild hit a transient Docker Desktop BuildKit snapshot error during image export
  - `docker compose run --rm cfd cfd-doctor` succeeds with:
    - Linux `omc` at `/usr/bin/omc`
    - Python venv at `/opt/cfd-venv`
    - Buildings at `/workspace/external/modelica-buildings/Buildings/package.mo`
    - Linux FFD runtime at `/workspace/external/modelica-buildings/Buildings/Resources/Library/linux64/libffd.so`
    - repo-local standalone binary at `/workspace/ffd_isat`

## Container Path Findings
- Relevant OpenModelica paths inside the Linux container:
  - `omc`: `/usr/bin/omc`
  - installation directory reported by OMC: `"/usr/bin/.."` (effectively `/usr`)
  - builtin compiler file present at: `/usr/lib/omc/ModelicaBuiltin.mo`
  - user library cache root: `/home/cfd/.openmodelica/libraries`
  - package index only path before installation: `/home/cfd/.openmodelica/libraries/index.json`
- Important discovery:
  - the container did not have an unpacked Modelica Standard Library under `MODELICAPATH`
  - `getModelicaPath()` returned only `/home/cfd/.openmodelica/libraries/`
  - `loadModel(Modelica)` failed until Modelica was explicitly installed into the user library cache
- Installed into the container cache:
  - `Modelica 4.0.0+maint.om`
  - `ModelicaServices 4.0.0+maint.om`
  - `Complex 4.0.0+maint.om`
- The earlier container `MODELICAPATH` override to only the Buildings root was removed from:
  - `docker-compose.yml`
  - `docker/entrypoint.sh`

## Current Container Smoke Status
- Official runtime gate now passes in Linux:
  - `output/om_buildings_example/ForcedConvection_30s.mat`
- Local coupled smoke run now gets much further:
  - generates compiled artifacts in `output/container_smoke`
  - produces `output/container_smoke/s000_baseline`
  - writes `output/container_smoke/s000_baseline.log`
  - writes `output/container_smoke/ffd.log`
- Current Linux-native blocker:
  - the local `s000_baseline` run appears to stall after initialization / first FFD activity
  - `output/container_smoke/s000_baseline.mat` is present but corrupt / truncated and unreadable by BuildingsPy
  - `output/container_smoke/s000_baseline.log` currently stops after initialization warnings
  - `output/container_smoke/ffd.log` only shows repeated FFD parameter-file opens, not a clean simulation completion

## Container Stall Diagnosis
- Added a repeatable Linux runtime diagnostic helper:
  - `docker/diagnose-coupled-stall.sh`
  - runs `output/container_smoke/s000_baseline` directly, captures stdout/stderr, thread state, `gdb` backtraces, and a short `strace`
- Direct executable run with heavier logging:
  - `output/container_smoke/direct_stdout.log`
  - reaches `LOG_INIT | info | ### END INITIALIZATION ###`
  - then starts `Linear System 1996` at `time 0`
- Running the executable in a ptrace-enabled container exposed the real failure mode:
  - `output/container_smoke/gdb_under_gdb.txt:132`
  - `output/container_smoke/gdb_under_gdb.txt:204`
  - `output/container_smoke/gdb_under_gdb.txt:280`
  - these show `Start Fast Fluid Dynamics Simulation with Thread` three times during initialization
  - `output/container_smoke/gdb_under_gdb.txt:348`
  - thread 17 receives `SIGSEGV`
  - `output/container_smoke/gdb_under_gdb.txt:453`
  - `output/container_smoke/gdb_under_gdb.txt:486`
  - FFD worker threads are inside `read_parameter()` from `libffd.so`
  - `output/container_smoke/gdb_run_stderr.log:1`
  - non-gdb run reports `free(): unaligned chunk detected in tcache 2`
- Interpretation:
  - the first Modelica-to-FFD data exchange has not happened yet
  - the generated executable shows the first actual exchange call in the regular section at:
    - `output/container_smoke/s000_baseline.c:2173`
  - but the crash occurs earlier, while OpenModelica is still in initialization:
    - `output/container_smoke/gdb_under_gdb.txt:283`
  - so the failure is not in the sync handshake and not in result writing
  - it is an FFD startup / initialization failure caused by multiple FFD threads being launched before the first exchange
- Why multiple FFD threads start:
  - `external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo:233`
  - `external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo:250`
  - `sendParameters(...)` is in an `initial equation` section
  - the generated model confirms this is equation 930 in the initial section:
    - `output/container_smoke/s000_baseline_info.json`
  - under homotopy initialization, that external call is evaluated multiple times
  - each evaluation launches a new FFD thread through:
    - `external/modelica-buildings/Buildings/Resources/C-Sources/cfdStartCosimulation.c:227`
- Current leading root cause:
  - repeated execution of `cfdStartCosimulation()` during initialization is spawning multiple concurrent FFD threads against the same global `cosim` state and same input files
  - one worker is segfaulting in `read_parameter()`, another is blocked in `_IO_fgets`, and another is inside `ffd_log()` / `fclose()`
  - this explains the corrupt `.mat`, the repeated parameter-file opens in `ffd.log`, and the apparent stall in non-gdb runs

## Notes
- WSL/FFD and Windows/OpenModelica are separate execution paths.
- Standalone FFD does not require OpenModelica.
- The coupled workflow requires `omc` on Windows and a working `Buildings` library configuration.

## Coupled Runtime Progress Since The Initial Container Stall
- Confirmed and fixed several concrete coupled-runtime defects in the Linux FFD path:
  - `external/modelica-buildings/Buildings/Resources/C-Sources/cfdStartCosimulation.c`
    - made startup idempotent so repeated `initial equation` evaluation no longer launches multiple FFD threads
  - `convert_to_sci.py`
    - removed perforated tile zones from coupled fluid-port emission
    - reason: tiles are internal openings in `dc_model.dat`, not Modelica fluid ports
  - `generate_ffd_inputs.py`
    - emits `bc.nb_Xi 1`
    - emits `bc.nb_C 0`
    - now emits `outp.version RUN`
  - `dc_model.mo`
    - wall names aligned with FFD names exactly
    - west/east wall areas aligned to the FFD net areas after CRAC openings
  - `external/modelica-buildings/Buildings/Resources/src/FastFluidDynamics/sci_reader.c`
    - internal solids from `zeroone.dat` now initialize `BINDEX[3]` and `BINDEX[4]`
  - `external/modelica-buildings/Buildings/Resources/src/FastFluidDynamics/cosimulation.c`
    - thermal wall exchange now skips non-domain internal solids
    - sensor export now handles `nSen=0` correctly instead of dereferencing `senVal[0]` / `senVal[1]`
  - `external/modelica-buildings/Buildings/Resources/src/FastFluidDynamics/makefile`
    - Linux build now uses `-fcommon` so `libffd.so` can be rebuilt with modern GCC

## Latest Output Evidence
- Main current run directory:
  - `output/manual_smoke_area`
- Important artifacts:
  - `output/manual_smoke_area/gdb_bt.txt`
    - previous crash backtrace showed `SIGSEGV` in `set_sensor_data()` with `nSen=0`
  - `output/manual_smoke_area/manual_stdout.log`
    - Modelica now advances through the 20 s and 30 s solver steps
    - at 20 s, `CFDExchange.mo` assertions report several return-port temperatures above the 373.15 K upper bound
  - `output/manual_smoke_area/ffd.log`
    - FFD is no longer crashing at startup
    - FFD advances in physical time beyond the first exchange
    - latest interrupted run reached only about `15.6 s` physical FFD time before the outer timeout cut it off
  - `output/manual_smoke_area/manual_run.mat`
    - file exists but is truncated / invalid because the process did not complete cleanly
  - `output/manual_smoke_area/manual_run_10s.mat`
    - also truncated / invalid
    - runtime override attempt did not actually change the built model stop time

## Current Interpretation
- The original Windows path issue is no longer the main blocker.
- The original Linux startup race is also no longer the main blocker.
- The current blocker set is now architectural:
  - the coupled executable is too slow for the present debug loop on this full 3D case
  - FFD and Modelica are tightly synchronized at 10 s exchange intervals, so truncated runs leave corrupt `.mat` files and poor observability
  - the workflow still couples geometry generation, FFD runtime debugging, and Modelica validation in one large step
  - by 20 s, the coupled state is already producing non-physical temperatures, so even a fully completed `.mat` would not yet be trustworthy

## Architectural Risks In The Current Docker Workflow
- One-shot monolithic smoke cases are too expensive:
  - the current 100 x 317 x 37 grid drives very slow FFD runtime in the coupled loop
  - each full debug iteration costs tens of minutes to hours
- Result validation is all-or-nothing:
  - OpenModelica only finalizes a valid `.mat` on clean completion
  - when the process is interrupted, the result file is unreadable, which hides intermediate state
- The same run is being used for three jobs at once:
  - runtime integration proof
  - physical plausibility check
  - large-case performance check
- The generated FFD inputs are still optimized for the full DC case, not for fast coupled debugging.

## Recommended Next Approach
- Split the workflow into explicit stages instead of continuing to iterate on the full baseline case:
  1. Create a minimal Linux-only coupled regression case.
     - tiny grid
     - one supply, one return
     - no racks or a single simplified heat block
     - goal: prove clean `.mat` completion and stable Modelica↔FFD exchange
  2. Create a reduced DC debug case.
     - same file-generation pipeline
     - coarser mesh
     - shorter stop time
     - fewer active CRAC units / simplified loads
     - goal: catch coupling and physical-instability issues cheaply
  3. Keep the full DC baseline as a final validation tier only.
     - do not use it as the primary debug loop
  4. Add explicit progress artifacts.
     - periodic FFD checkpoint outputs
     - reduced exchange-time logging
     - per-stage smoke scripts that write to dedicated output directories

## Practical Recommendation
- Stop debugging on `output/manual_smoke_area` as the primary path.
- Build a new `debug_coupled_minimal` case first, get a clean `.mat`, then scale up in controlled steps.

## 2026-04-09 Docker-Only Staged Workflow Implementation
- Implemented the new active layout:
  - `cases/minimal_coupled/`
  - `cases/coarse_dc/`
  - `cases/full_dc/`
  - `src/cfd_pipeline/`
  - `docker/stages/`
  - `ingest/<case>/current/`
  - `output/<case>/{generate-ingest,build,run,validate}/<run-id>/`
- New pipeline entrypoint:
  - `python -m cfd_pipeline.cli <stage> --case <case> ...`
- Implemented stages:
  - `archive`
  - `generate-ingest`
  - `build-coupled`
  - `run-coupled`
  - `validate`
  - `run-case`
- Implemented stage artifacts for each run:
  - `manifest.json`
  - `status.json`
  - `stdout.log`
  - `stderr.log`
  - `summary.md`
  - plus `inputs/`, `diagnostics/`, `results/` where applicable
- Added Docker stage wrappers:
  - `docker/stages/00_archive_legacy.sh`
  - `docker/stages/10_generate_ingest.sh`
  - `docker/stages/20_build_coupled.sh`
  - `docker/stages/30_run_coupled.sh`
  - `docker/stages/40_validate.sh`
  - `docker/stages/50_run_case.sh`
- Updated Docker runtime wiring:
  - `Dockerfile`
  - `docker-compose.yml`
  - `docker/entrypoint.sh`
  - `docker/README.md`

## Archive Stage Result
- Ran inside Docker:
  - `docker compose run --rm cfd python -m cfd_pipeline.cli archive`
- Legacy artifacts were archived to:
  - `archive/legacy_2026-04-09/`
- Active root is now reduced to source/config + the new staged directories.
- The old ad-hoc `output/` tree and root-generated CFD files are no longer on the active path.

## Minimal Regression Case Result
- Run id:
  - `minimal-smoke`
- Stage outputs:
  - `output/minimal_coupled/generate-ingest/minimal-smoke/`
  - `output/minimal_coupled/build/minimal-smoke/`
  - `output/minimal_coupled/run/minimal-smoke/`
  - `output/minimal_coupled/validate/minimal-smoke/`
- The minimal case now builds, runs, and validates successfully inside Docker.
- Validation summary:
  - `output/minimal_coupled/validate/minimal-smoke/summary.md`
  - final time `20.0 s`
  - variable count `480`
  - `.mat` readable and validation passed
- Result file:
  - `output/minimal_coupled/run/minimal-smoke/results/result.mat`

## Minimal-Case Failure That Was Found And Fixed
- First minimal runtime attempt failed in FFD boundary-name comparison:
  - `output/minimal_coupled/run/minimal-smoke/diagnostics/ffd.log`
  - `ERROR in compare_boundary_names(): Could not find the Modelica wall boundary "East Wall" in FFD.`
- Root cause:
  - the template `ForcedConvection.cfd` copied from the Windows checkout had CRLF line endings
  - FFD kept the trailing carriage return in wall names when reading SCI input
  - that broke the Modelica?FFD boundary-name match
- Fix:
  - normalized template `.cfd` / `.dat` / `.ffd` ingest files to LF in `src/cfd_pipeline/generate_ingest.py`
- After normalization, the same run id completed successfully.

## Current Residuals
- `docker compose build` is currently flaky because the Ubuntu security mirror returned `504 Gateway Time-out` during `apt-get update`.
- A cached local image still exists and was sufficient to run the new staged pipeline.
- The minimal case is now the confirmed clean regression target.
- `coarse_dc` and `full_dc` are defined in the new layout but have not yet been executed in the new pipeline.
- Also verified the canonical end-to-end orchestrator:
  - `docker compose run --rm cfd python -m cfd_pipeline.cli run-case --case minimal_coupled --run-id minimal-e2e --scenario baseline --stop-time 20 --sync-dt 10`
  - passed end-to-end with a valid MAT file and passing validation in:
    - `output/minimal_coupled/validate/minimal-e2e/summary.md`
- Verified the reduced coarse DC ingest stage inside Docker:
  - `docker compose run --rm cfd python -m cfd_pipeline.cli generate-ingest --case coarse_dc --run-id coarse-smoke-2`
  - succeeded and wrote staged diagnostics to:
    - `output/coarse_dc/generate-ingest/coarse-smoke-2/diagnostics/generate_ffd_inputs_stdout.log`
    - `output/coarse_dc/generate-ingest/coarse-smoke-2/diagnostics/convert_to_sci_stdout.log`
  - coarse mesh summary:
    - `38 x 91 x 12 = 41,496 cells`
- Verified a stage wrapper directly:
  - `docker compose run --rm cfd bash docker/stages/10_generate_ingest.sh --case minimal_coupled --run-id minimal-wrapper`
  - completed successfully
- Generated a coarse trial data-center CFD field in Docker after correcting the coarse west/east wall area in `cases/coarse_dc/model.mo`.
- First coarse coupled run failed because Modelica wall area and FFD wall area disagreed:
  - `output/coarse_dc/run/coarse-field/diagnostics/ffd.log`
  - `West wall`: Modelica `108.464512 m2` vs FFD `107.770001 m2`
- Patched `cases/coarse_dc/model.mo` to use the coarse-grid wall area and reran.
- Successful coarse field run:
  - build dir: `output/coarse_dc/build/coarse-field-v2/`
  - run dir: `output/coarse_dc/run/coarse-field-v2/`
  - exact field file: `output/coarse_dc/run/coarse-field-v2/runtime/result.plt`
  - transient field file: `output/coarse_dc/run/coarse-field-v2/runtime/unsteady.plt`
  - SCI output snapshot: `output/coarse_dc/run/coarse-field-v2/runtime/output.cfd`
- FFD completion evidence:
  - `output/coarse_dc/run/coarse-field-v2/diagnostics/ffd.log`
  - FFD wrote `result.plt` and stopped cleanly after receiving the Modelica stop command.
- Added a short visualization notebook:
  - `notebooks/visualize_result_plt.ipynb`
  - default input path points at `output/coarse_dc/run/coarse-field-v2/runtime/result.plt`
  - plots one horizontal and one vertical speed slice with quiver arrows
## 2026-04-10 Full Data-Center Field Run
- Undertook one field-producing CFD run for the original full data-center layout.
- Operating-condition assumption used:
  - original `full_dc` baseline layout from `cases/full_dc/case.yaml`
  - 8 rack rows, 13 racks per row, `5.0 kW` per rack
  - 6 CRAC units
  - each CRAC at `4.5 m3/s`
  - each CRAC supply temperature `14.0 degC`
  - full ingest mesh: `100 x 317 x 37 = 1,172,900` cells
- Standalone full run with the archived `ffd_isat` binary completed to `900 s`, but that binary did not emit Tecplot field files.
- A coupled full run was therefore used to obtain the field output:
  - build: `output/full_dc/build/full-field-v1/`
  - run: `output/full_dc/run/full-field-v1/`
  - field file: `output/full_dc/run/full-field-v1/runtime/result.plt`
  - transient field file: `output/full_dc/run/full-field-v1/runtime/unsteady.plt`
  - SCI output snapshot: `output/full_dc/run/full-field-v1/runtime/output.cfd`
- Coupled full run evidence:
  - `output/full_dc/run/full-field-v1/diagnostics/ffd.log`
  - FFD wrote `result.plt` and `unsteady.plt` after receiving the Modelica stop command.
- Important caveat:
  - `validate` on `full-field-v1` failed for thermal realism
  - return temperatures exceeded the current validation bounds and stdout contained `LOG_ASSERT`
  - use this field as a qualitative flow-visualization artifact, not yet as a trusted thermally validated case
- Visualization notebook added for this field:
  - `notebooks/visualize_full_dc_result_plt.ipynb`
  - default path points to `output/full_dc/run/full-field-v1/runtime/result.plt`
  - notebook was smoke-tested by generating `output/full_dc/run/full-field-v1/runtime/test_slice.png`

## 2026-04-10 Thermal Validation Fix For Full Field
- The earlier `full-field-v1` field is now superseded by a thermally validated run:
  - trusted full field: `output/full_dc/run/full-thermal-v1/runtime/result.plt`
  - trusted transient field: `output/full_dc/run/full-thermal-v1/runtime/unsteady.plt`
  - validation summary: `output/full_dc/validate/full-thermal-v1/summary.md`
- Validation status:
  - `full-thermal-v1` passed validation with no critical errors
  - final time `30.0 s`
  - variable count `1044`
- Root cause of the earlier non-physical temperatures:
  - the Buildings FFD reader does not use the legacy rack metadata that had been written into the SCI block section, so the rack rows were effectively treated as generic heated solids rather than fan-driven rack devices
  - the generated `.ffd` input was not writing `prob.tur_model`, so FFD silently fell back to `LAM`, which produced unrealistically weak convective heat transfer at the heated rack faces
  - the all-heat-flow room-envelope setup was still producing initial infrared-radiation assertions, which prevented clean thermal validation even after the rack representation improved
- Implemented fixes:
  - `convert_to_sci.py:186`
    - added `rack_hot_face_sci_indices(...)`
    - changed generated rack thermal representation from full heated rack blocks to one-cell-thick heated hot-face slabs
    - left solids and containment in `.dat` as obstacles
  - `generate_ffd_inputs.py:501`
    - explicitly map turbulence setting to FFD keywords
    - now writes `prob.tur_model`, `prob.chen_a`, `prob.Prt`, `prob.force`, `prob.source`, and `solv.cosimulation`
  - `cases/coarse_dc/model.mo:110`
  - `cases/full_dc/model.mo:110`
    - switched room envelope CFD boundaries to fixed-temperature surfaces
    - connected `FixedTemperature TWal[6]` to `roo.surf_surBou`
    - kept `linearizeRadiation = true`
- Regression path used:
  - `coarse-thermal-v3` proved the rack representation + turbulence fix removed the runaway temperatures
  - `coarse-thermal-v4` proved the fixed-temperature envelope removed the remaining radiation-assert validation failures
  - `full-thermal-v1` then applied the same fixes to the original full data-center layout and passed validation
- Operational note:
  - the first `full-thermal-v1` run timed out on the pipeline timeout during shutdown/file finalization, even though the coupled simulation had numerically completed
  - rerunning the same built case with a longer timeout completed successfully and produced the validated field
- Notebook update:
  - `notebooks/visualize_full_dc_result_plt.ipynb` now points to `output/full_dc/run/full-thermal-v1/runtime/result.plt`
- Result:
  - the full-field temperature distribution is now on a validated path and can be used for visualization from `full-thermal-v1` rather than `full-field-v1`

## 2026-04-11 Extracted Full-Thermal Temperature Slices
- Added a reusable plotting utility:
  - `src/cfd_pipeline/plot_result_slices.py`
- Ran it inside Docker against the validated field:
  - source field: `output/full_dc/run/full-thermal-v1/runtime/result.plt`
  - output directory: `output/full_dc/run/full-thermal-v1/plots/`
- Requested slice set was based on the configured rack-inlet heights plus room mid-planes:
  - XY at `z = 0.75 m`, `1.13 m`, `1.51 m`
  - YZ at `x = 7.5 m`
  - XZ at `y = 12.5 m`
- Actual grid planes used after snapping to the nearest CFD plane:
  - XY `z = 0.733 m` → `temperature_xy_z_0p733m.png`
  - XY `z = 1.170 m` → `temperature_xy_z_1p170m.png`
  - XY `z = 1.466 m` → `temperature_xy_z_1p466m.png`
  - YZ `x = 7.425 m` → `temperature_yz_x_7p425m.png`
  - XZ `y = 12.517 m` → `temperature_xz_y_12p517m.png`
- Matching extracted slice CSVs were also written for each plot in the same directory.
- Plot inventory:
  - `output/full_dc/run/full-thermal-v1/plots/summary.txt`
- Notebook update:
  - `notebooks/visualize_full_dc_result_plt.ipynb` now includes dedicated cells to reproduce the exact `full-thermal-v1` temperature slice set inline:
    - XY at requested `z = 0.75 m`, `1.13 m`, `1.51 m`
    - YZ at requested `x = 7.5 m`
    - XZ at requested `y = 12.5 m`

## 2026-04-13 Full-Field Temperature Spike Diagnosis
- The apparent temperature singularities in the `full-thermal-v1` plots are not a notebook-only artifact.
- Direct inspection of `output/full_dc/run/full-thermal-v1/runtime/result.plt` shows:
  - fluid temperature range: `14.02 degC` to `123.52 degC`
  - the hottest fluid cells are clustered at:
    - `x ~= 8.0 m`
    - `y ~= 8.946, 10.354, 14.146, 15.554 m`
    - `z ~= 0.644 m`
  - local velocities at those points are essentially stagnant (`|u|`, `|v|`, `|w|` all near zero)
- Those coordinates line up one CFD cell off the generated rack hot-face slabs in:
  - `output/full_dc/run/full-thermal-v1/runtime/case.cfd`
  - specifically the `row_3_hot_face`, `row_4_hot_face`, `row_5_hot_face`, and `row_6_hot_face` internal heat-flux blocks
- This confirms the spike mechanism:
  - each rack row is currently represented as a solid obstacle plus a one-cell-thick heated hot-face slab
  - the model does **not** include rack fan through-flow from cold aisle to hot aisle
  - heat is therefore injected into nearly stagnant cells adjacent to the hot face, which creates very high local temperatures
- The plot then makes these cells look like singularities because `tricontourf` interpolates around a few isolated extreme points.
- There is a second consistency check showing the full-field temperature distribution is still not physically trustworthy:
  - `output/full_dc/run/full-thermal-v1/diagnostics/ffd.log` shows CRAC return temperatures only around `22.0 degC` to `22.36 degC` by `30 s`
  - that is not consistent with `520 kW` of IT heat being removed by `27 m3/s` of `14 degC` supply air
- Conclusion:
  - `full-thermal-v1` is acceptable for qualitative bulk-flow viewing
  - it is **not** yet trustworthy as a physically realistic internal temperature field
  - the remaining model gap is the rack thermal/momentum representation, not the plotting notebook
