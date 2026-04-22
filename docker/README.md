# Docker Workflow

The active workflow is Docker-only and stage-based.

The repository is mounted at `/workspace`, and all generated artifacts stay under
`/workspace/ingest`, `/workspace/output`, or `/workspace/archive`.

## Build

```bash
docker compose build
```

## Doctor

```bash
docker compose run --rm cfd cfd-doctor
```

## Canonical CLI

```bash
docker compose run --rm cfd python -m cfd_pipeline.cli <stage> --case <case> [options]
```

Stages:
- `archive`
- `generate-ingest`
- `build-coupled`
- `run-coupled`
- `validate`
- `run-case`

Cases:
- `minimal_coupled`
- `coarse_dc`
- `full_dc`

## Stage Wrappers

The same stages are available as shell wrappers under `docker/stages/`.

Examples:

```bash
docker compose run --rm cfd bash docker/stages/00_archive_legacy.sh
docker compose run --rm cfd bash docker/stages/50_run_case.sh --case minimal_coupled --run-id smoke-001
```

## Typical Flow

Archive legacy artifacts:

```bash
docker compose run --rm cfd python -m cfd_pipeline.cli archive
```

Run the minimal coupled regression:

```bash
docker compose run --rm cfd python -m cfd_pipeline.cli run-case --case minimal_coupled --run-id minimal-smoke
```

Run the reduced DC debug case:

```bash
docker compose run --rm cfd python -m cfd_pipeline.cli run-case --case coarse_dc --run-id coarse-smoke
```

Run the native standalone FFD path for a data-centre case with rack through-flow,
tile pressure jumps, and VTK export:

```bash
docker compose run --rm cfd bash docker/run-standalone-native-case.sh fnb fnb-native-gpu
```

## Output Layout

Each stage writes to:

```text
output/<case>/<stage>/<run-id>/
```

Every stage directory contains:
- `manifest.json`
- `status.json`
- `stdout.log`
- `stderr.log`
- `summary.md`

Run stages additionally contain:
- `inputs/`
- `diagnostics/`
- `results/`

## Notes

- The container uses a Linux virtual environment at `/opt/cfd-venv`.
- The container uses Linux `omc`, not the Windows OpenModelica installation.
- The legacy standalone validation wrapper is intentionally retired from the active workflow.
