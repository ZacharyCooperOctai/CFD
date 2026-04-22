# FNB Docker CFD Investigation Summary

Date: 2026-04-17

## Request Context

The target was to run the FNB FFD CFD case in Docker with these changes:

- racks treated as fluid regions with momentum and heat sources
- floor tiles represented with pressure-jump behaviour instead of only effective-area boundary treatment
- containment walls represented as physical geometry so they appear in ParaView `.vtr` exports
- Docker updated to use the system Nvidia GPU for acceleration if available

## Code Changes Made

### Case generation

- `generate_ffd_inputs.py`
  - added support for native tile pressure-jump handling
  - added explicit cosimulation control
  - updated tile handling so full tile strips can be emitted as native tile openings
- `convert_to_sci.py`
  - added standalone native generation mode
  - emitted native rack source blocks, tile outlets, and containment geometry blocks
  - adjusted `.dat` generation so rack source regions are solid in the grid where needed, while containment is preserved for standalone geometry output

### Docker/runtime

- `docker-compose.yml`
  - added GPU-related container settings (`gpus: all`, Nvidia env vars, `/usr/lib/wsl` mount)
- `docker/entrypoint.sh`
  - fixed OpenCL ICD setup so the container only forces the Nvidia ICD path when the Nvidia OpenCL library is actually present
  - otherwise the container now falls back cleanly to the existing PoCL ICD instead of hiding all OpenCL platforms
- `docker/run-standalone-native-case.sh`
  - switched to a known-good archived standalone FFD binary
  - added generation of a legacy-compatible minimal `input.ffd` derived from the current case files

## Investigation Findings

### 1. Nvidia GPU acceleration is not currently available inside the container

The container could see `/dev/dxg` and the mounted WSL library directory, but the expected Nvidia OpenCL library was not present:

- missing: `/usr/lib/wsl/lib/libnvidia-opencl.so.1`

That means the container did not have a usable Nvidia OpenCL platform available, even with the GPU-related Docker settings applied.

### 2. The entrypoint was masking the working CPU OpenCL fallback

Before the fix, the entrypoint always redirected `OCL_ICD_VENDORS` to a private directory, even when the Nvidia OpenCL ICD was absent. That hid the system PoCL ICD and left the standalone solver without a visible OpenCL platform.

After fixing the entrypoint, `clinfo` inside the run environment showed:

- `Platform #0: Portable Computing Language`
- device: `pthread-Intel(R) Core(TM) Ultra 7 155H`

So the case could at least run on CPU OpenCL fallback.

### 3. The legacy standalone binary was stalling on the current `input.ffd` format

Cross-testing showed the main startup stall was not caused by the current `case.cfd` geometry/source generation. It was caused by the more verbose current `input.ffd` / `.ffd` header format.

Observed behaviour:

- archived minimal `input.ffd` + current `case.cfd` + archived `dc_model.dat` ran
- current generated `input.ffd` + current `case.cfd` + archived `dc_model.dat` stalled before solver initialization

This isolated the blocker to the `input.ffd` format expected by the archived standalone binary.

### 4. The current FNB case does run with CPU OpenCL fallback after the fixes

After switching to the legacy-compatible `input.ffd`, the current FNB standalone case advanced in Docker.

Evidence:

- smoke/cross-tests advanced with the current `case.cfd`
- a longer probe run reached about `Physical time=162.4000 s` in `output/fnb/standalone/fnb-native-gpu/log_gpu.ffd`

## Current Status

- Docker container support for the modified native FNB case is improved and the case is runnable on PoCL CPU OpenCL fallback.
- True Nvidia GPU acceleration is still unresolved because the required Nvidia OpenCL userspace library is not available inside the container.
- A full longer run was started, but it was not fully validated to completion because that run was interrupted before the end.

## Main Root Causes

1. The container did not expose a usable Nvidia OpenCL runtime, so GPU acceleration was not actually available.
2. The Docker entrypoint hid the fallback PoCL OpenCL platform when Nvidia OpenCL was absent.
3. The archived standalone FFD binary is stricter about `input.ffd` format than the currently generated file format.

## Useful Artifacts

- run log: `output/fnb/standalone/fnb-native-gpu/log_gpu.ffd`
- OpenCL diagnostics: `output/fnb/standalone/fnb-native-gpu/diagnostics/clinfo.txt`
- cross-test outputs:
  - `output/fnb/archive-input-smoke`
  - `output/fnb/cross-test-current-cfd-archive-dat`
  - `output/fnb/cross-test-archive-ffd-current-cfd`

## Container Cleanup

The active CFD container was stopped during cleanup:

- stopped container: `cfd-cfd-run-04b0f9f63d64`

No running Docker containers remained after that check.

## Recommended Next Steps

1. Verify whether the host WSL/Nvidia stack actually provides OpenCL support, not just CUDA-related libraries.
2. If Nvidia OpenCL is unavailable on the host, either install/enable that runtime or accept CPU OpenCL fallback for this containerized path.
3. If the archived standalone binary remains the execution target, keep the legacy-compatible `input.ffd` generation path.
4. Once GPU runtime availability is confirmed, rerun the standalone FNB case and validate completion plus output quality in ParaView.
