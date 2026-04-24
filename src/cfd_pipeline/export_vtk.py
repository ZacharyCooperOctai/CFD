from __future__ import annotations

"""
export_vtk.py
=============
Convert a Tecplot ASCII FFD result (result.plt) + structured grid CSV files
into a VTK RectilinearGrid file (result.vtk) containing every field in the
domain.

The output VTK file can be opened in ParaView, VisIt, or loaded in a Jupyter
notebook via pyvista for 3-D interactive visualisation.

Fields written as cell data:
    T       - temperature [degC]
    U       - x-velocity [m/s]
    V       - y-velocity [m/s]
    W       - z-velocity [m/s]
    Speed   - velocity magnitude sqrt(U^2+V^2+W^2) [m/s]
    P       - pressure [Pa]
    Xi      - species fraction [-]
    FlagP   - cell type flag (-1=fluid, 1=solid, 0=inlet, 2=outlet, ...)

Field data (metadata):
    case_id, run_id, source_plt

Usage (standalone):
    python -m cfd_pipeline.export_vtk --case fnb --run-id <run_id>

    # smoke-test against an existing result.plt without a full run:
    python -m cfd_pipeline.export_vtk \\
        --result-plt output/full_dc/run/full-thermal-v1/runtime/result.plt \\
        --grid-dir   ingest/full_dc/current \\
        --output     /tmp/result.vtk
"""

import argparse
import csv
from pathlib import Path
from typing import Optional

import numpy as np

try:
    import pyvista as pv
except ImportError as exc:  # pragma: no cover
    raise ImportError(
        "pyvista is required for VTK export.  Install it with:\n"
        "    pip install pyvista>=0.43"
    ) from exc

from .plot_result_slices import load_result_plt
from .common import repo_root


# ---------------------------------------------------------------------------
# Grid helpers
# ---------------------------------------------------------------------------

def _load_node_array(csv_path: Path) -> np.ndarray:
    """Load a grid_x/y/z.csv file and return a 1-D float64 node array."""
    nodes: list[float] = []
    with csv_path.open(newline="", encoding="utf-8") as fh:
        reader = csv.reader(fh)
        for row in reader:
            if not row or row[0].startswith("#"):
                continue
            # Format: index, coordinate  OR  just coordinate
            try:
                nodes.append(float(row[-1]))
            except ValueError:
                continue
    return np.asarray(nodes, dtype=np.float64)


def _cell_centres(nodes: np.ndarray) -> np.ndarray:
    """Return cell-centre coordinates from node positions."""
    return 0.5 * (nodes[:-1] + nodes[1:])


# ---------------------------------------------------------------------------
# Core conversion
# ---------------------------------------------------------------------------

def plt_to_vtk(
    result_plt: Path,
    grid_dir: Path,
    output_vtk: Path,
    case_id: str = "",
    run_id: str = "",
) -> Path:
    """Convert a Tecplot ASCII result.plt + grid CSVs into a VTK RectilinearGrid.

    Parameters
    ----------
    result_plt:
        Path to the Tecplot ASCII field file produced by the FFD solver.
    grid_dir:
        Directory containing grid_x.csv, grid_y.csv, grid_z.csv.
    output_vtk:
        Destination path for the VTK file (will be created/overwritten).
    case_id, run_id:
        Metadata strings embedded as field data in the VTK file.

    Returns
    -------
    Path to the written VTK file.
    """
    # ------------------------------------------------------------------
    # 1. Load structured grid node arrays
    # ------------------------------------------------------------------
    nodes_x = _load_node_array(grid_dir / "grid_x.csv")
    nodes_y = _load_node_array(grid_dir / "grid_y.csv")
    nodes_z = _load_node_array(grid_dir / "grid_z.csv")

    nx = len(nodes_x) - 1  # number of cells in X
    ny = len(nodes_y) - 1
    nz = len(nodes_z) - 1
    n_total = nx * ny * nz

    cx = _cell_centres(nodes_x)
    cy = _cell_centres(nodes_y)
    cz = _cell_centres(nodes_z)

    # ------------------------------------------------------------------
    # 2. Load Tecplot PLT data (flat point list with X,Y,Z + fields)
    # ------------------------------------------------------------------
    _title, variables, data = load_result_plt(result_plt)

    # Determine which field names are present (some older runs may omit Xi)
    available = set(variables)
    field_names = [v for v in ("U", "V", "W", "T", "P", "Xi", "FlagP") if v in available]

    # ------------------------------------------------------------------
    # 3. Index each PLT point into its (i,j,k) cell
    #
    # searchsorted with side='right' on node arrays:
    #   nodes_x has NX+1 values;  searchsorted(...) - 1 gives the cell index.
    # Clamp to [0, N-1] to handle points exactly on the far boundary.
    # ------------------------------------------------------------------
    # The FFD solver writes Z in domain-local coordinates (Z=0 at plenum floor).
    # Grid node arrays use global coordinates where nodes_z[0] = -plenum_depth < 0.
    # Shift PLT Z values by nodes_z[0] to align the two coordinate systems.
    ix = np.clip(np.searchsorted(nodes_x, data["X"], side="right") - 1, 0, nx - 1)
    iy = np.clip(np.searchsorted(nodes_y, data["Y"], side="right") - 1, 0, ny - 1)
    iz = np.clip(np.searchsorted(nodes_z, data["Z"] + nodes_z[0], side="right") - 1, 0, nz - 1)

    # pyvista RectilinearGrid flattens cells in Fortran order: X fastest, Z slowest
    # flat_index = ix + nx*iy + nx*ny*iz
    flat_idx = ix + nx * iy + nx * ny * iz

    # ------------------------------------------------------------------
    # 4. Allocate full-domain arrays and scatter PLT data into them
    #    Cells not covered by the PLT point set retain their init value.
    # ------------------------------------------------------------------
    # Default: NaN for float fields, 1.0 (solid) for FlagP so un-hit cells
    # are not mistaken for fluid.
    cell_arrays: dict[str, np.ndarray] = {}
    for name in field_names:
        if name == "FlagP":
            arr = np.ones(n_total, dtype=np.float32)
        else:
            arr = np.full(n_total, np.nan, dtype=np.float32)
        arr[flat_idx] = data[name].astype(np.float32)
        cell_arrays[name] = arr

    # Speed = |velocity|
    if "U" in cell_arrays and "V" in cell_arrays and "W" in cell_arrays:
        cell_arrays["Speed"] = np.sqrt(
            cell_arrays["U"] ** 2 + cell_arrays["V"] ** 2 + cell_arrays["W"] ** 2
        )

    # ------------------------------------------------------------------
    # 5. Build pyvista RectilinearGrid
    # ------------------------------------------------------------------
    grid = pv.RectilinearGrid(nodes_x, nodes_y, nodes_z)

    for name, arr in cell_arrays.items():
        grid.cell_data[name] = arr

    # CellType: full pre-solver flag values from cell_flags.npy.
    # Distinguishes fluid(0), wall_adiabatic(4), tile_opening(9),
    # containment(10), rack_source(11) etc. — richer than FlagP which
    # collapses all solids to 1.
    cell_flags_path = grid_dir / "cell_flags.npy"
    if cell_flags_path.exists():
        raw_flags = np.load(cell_flags_path)  # shape (nx, ny, nz), C or F order
        # cell_flags is written in (nx, ny, nz) index order; flatten to match
        # pyvista's Fortran-order (X fastest) flat layout.
        grid.cell_data["CellType"] = raw_flags.ravel(order="F").astype(np.int8)

    # Embed metadata
    grid.field_data["case_id"] = np.array([case_id], dtype=object)
    grid.field_data["run_id"] = np.array([run_id], dtype=object)
    grid.field_data["source_plt"] = np.array([str(result_plt)], dtype=object)
    grid.field_data["grid_nx_ny_nz"] = np.array([nx, ny, nz], dtype=np.int32)

    # ------------------------------------------------------------------
    # 6. Write VTK file
    # ------------------------------------------------------------------
    output_vtk.parent.mkdir(parents=True, exist_ok=True)
    grid.save(str(output_vtk))

    n_fluid = int(np.sum(cell_arrays.get("FlagP", np.ones(n_total)) < -0.5))
    print(
        f"VTK written: {output_vtk}\n"
        f"  Grid:   {nx} x {ny} x {nz} = {n_total:,} cells\n"
        f"  Fluid:  {n_fluid:,} cells\n"
        f"  Fields: {', '.join(cell_arrays)}"
    )
    return output_vtk


# ---------------------------------------------------------------------------
# Pipeline entry point
# ---------------------------------------------------------------------------

def export_vtk(case_id: str, run_id: str) -> Path:
    """Locate pipeline artefacts for *case_id* / *run_id* and write result.vtk.

    Expects:
        ingest/<case_id>/current/grid_x.csv   (and grid_y, grid_z)
        output/<case_id>/run/<run_id>/runtime/result.plt

    Writes:
        output/<case_id>/run/<run_id>/results/result.vtk
    """
    root = repo_root()
    grid_dir = root / "ingest" / case_id / "current"
    result_plt = root / "output" / case_id / "run" / run_id / "runtime" / "result.plt"
    output_vtk = root / "output" / case_id / "run" / run_id / "results" / "result.vtr"

    if not grid_dir.is_dir():
        raise FileNotFoundError(
            f"Grid directory not found: {grid_dir}\n"
            f"Run generate-ingest for case '{case_id}' first."
        )
    if not result_plt.exists():
        raise FileNotFoundError(
            f"result.plt not found: {result_plt}\n"
            f"Run the coupled simulation for run-id '{run_id}' first."
        )

    return plt_to_vtk(
        result_plt=result_plt,
        grid_dir=grid_dir,
        output_vtk=output_vtk,
        case_id=case_id,
        run_id=run_id,
    )


# ---------------------------------------------------------------------------
# CLI
# ---------------------------------------------------------------------------

def _build_parser() -> argparse.ArgumentParser:
    parser = argparse.ArgumentParser(
        description="Export FFD result.plt to VTK RectilinearGrid."
    )
    group = parser.add_mutually_exclusive_group(required=True)
    group.add_argument(
        "--case",
        help="Case ID (uses standard pipeline paths under ingest/ and output/).",
    )
    group.add_argument(
        "--result-plt",
        type=Path,
        help="Direct path to result.plt (use with --grid-dir and --output).",
    )
    parser.add_argument("--run-id", help="Run ID (required when --case is used).")
    parser.add_argument(
        "--grid-dir",
        type=Path,
        help="Directory with grid_x/y/z.csv (required when --result-plt is used).",
    )
    parser.add_argument(
        "--output",
        type=Path,
        help="Output VTK path (required when --result-plt is used).",
    )
    return parser


def main() -> int:
    args = _build_parser().parse_args()

    if args.case is not None:
        if not args.run_id:
            print("ERROR: --run-id is required when --case is used.")
            return 1
        export_vtk(case_id=args.case, run_id=args.run_id)
    else:
        if not args.grid_dir or not args.output:
            print("ERROR: --grid-dir and --output are required when --result-plt is used.")
            return 1
        plt_to_vtk(
            result_plt=args.result_plt,
            grid_dir=args.grid_dir,
            output_vtk=args.output,
        )
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
