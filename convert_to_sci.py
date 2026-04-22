"""
convert_to_sci.py
=================
Convert the Python-generated geometry (cell_flags.npy + grid CSVs + geometry.json)
to the two native SCI-format files that isat_ffd reads:

    dc_model.cfd  –  SCI ASCII boundary-condition file
    dc_model.dat  –  zeroone.dat solid-flag file (0=fluid, 1=solid, 25 per line)

SCI format documented from isat_ffd src/ffd_isat/sci_reader.c (doetools/isat_ffd).

Usage
-----
    python convert_to_sci.py [--config dc_config.yaml]
                             [--grid-dir .]
                             [--outdir .]

All paths default to the current working directory.
"""

import argparse
import json
import os
import sys

import numpy as np
import yaml

# ---------------------------------------------------------------------------
# Cell-flag constants (must match generate_ffd_inputs.py)
# ---------------------------------------------------------------------------
FLUID           = 0
SOLID           = 1
INLET           = 2
OUTLET          = 3
WALL_ADIABATIC  = 4
WALL_TEMP       = 5
WALL_HEATFLUX   = 6
RACK_COLD_FACE  = 7
RACK_HOT_FACE   = 8
TILE_OPENING    = 9
CONTAINMENT     = 10
RACK_SOURCE     = 11  # rack interior: fluid (allows through-flow), not solid

# Default rack airflow rate per unit heat (125 CFM/kW → m³/(s·W))
# 1 CFM = 0.00047194745 m³/s
RACK_FLOW_RATE_PER_W = 125 * 0.00047194745 / 1000.0   # ≈ 5.9e-5 m³/(s·W)


# ===========================================================================
# Grid helpers
# ===========================================================================

def load_grid_nodes(grid_dir):
    """Load 1-D node-position arrays from the three grid CSVs."""
    nodes = {}
    for axis in ("x", "y", "z"):
        path = os.path.join(grid_dir, f"grid_{axis}.csv")
        data = np.loadtxt(path, delimiter=",", skiprows=1)
        # CSV columns: node_index, coordinate
        nodes[axis] = data[:, 1]
    return nodes["x"], nodes["y"], nodes["z"]


def cell_widths(nodes):
    """Convert node positions to cell-width array (length = n_cells)."""
    return np.diff(nodes)   # delx[0..imax-1] in 0-based; delx[1..imax] in 1-based FFD


def find_cell_range(nodes, lo, hi):
    """
    Given node positions, find the (start_0based, count) of cells whose span
    [nodes[i], nodes[i+1]] overlaps with [lo, hi].

    Returns (start, count) in 0-based indexing (add 1 for 1-based FFD index).
    Returns None if no cells found.
    """
    n = len(nodes) - 1
    start = None
    end = -1
    for i in range(n):
        c_lo = nodes[i]
        c_hi = nodes[i + 1]
        if c_hi > lo and c_lo < hi:
            if start is None:
                start = i
            end = i
    if start is None:
        return None
    return start, end - start + 1  # (start_0based, count)


def find_k_for_z(nodes_z, z_target, tol=1e-6):
    """
    Find the 0-based k-index of the cell immediately ABOVE z_target.
    Assumes z_target is a node position (or very close to one).
    """
    for k in range(len(nodes_z) - 1):
        if abs(nodes_z[k] - z_target) < tol:
            return k          # cell k spans [z_target, nodes_z[k+1]]
        if nodes_z[k] < z_target < nodes_z[k + 1]:
            return k + 1      # first cell whose lower face is above z_target (round up)
    return None


# ===========================================================================
# .dat writer  (zeroone format)
# ===========================================================================

def write_dat(flags, nodes_z, outpath, mode="coupled"):
    """
    Write dc_model.dat in SCI zeroone format.

    Rules:
      mark=1 → SOLID (blocks all airflow)
      mark=0 → fluid (or special BC cell like INLET/OUTLET/TILE)

    Additional: cells at the raised-floor plane (Z=0) that are currently FLUID
    are marked as SOLID to represent the non-perforated raised-floor panels.

    Mode-specific behavior:
      coupled:
        - containment walls are emitted as solid cells in .dat
        - rack interior stays fluid; rack effects are represented by face BCs
      standalone-native:
        - rack rows are emitted as solid blocks in .dat so the legacy native
          solver can reinterpret them from the `Rack ...` block records
        - containment stays out of .dat and is provided by native BLOCK records
    """
    imax, jmax, kmax = flags.shape   # 0-based: [0..imax-1, 0..jmax-1, 0..kmax-1]

    # --- Build the dat_flags array (1 = solid) ---
    dat = np.zeros((imax, jmax, kmax), dtype=np.int32)
    dat[flags == SOLID]       = 1
    if mode == "standalone-native":
        # Match the last known-good native standalone topology: rack solids are
        # declared in zeroone.dat, then the legacy solver upgrades them into
        # native Rack inlet/outlet semantics from the BLOCK records. Keep
        # containment out of zeroone.dat so the native BLOCK records own it.
        dat[flags == RACK_SOURCE] = 1
    else:
        dat[flags == CONTAINMENT] = 1
        # RACK_SOURCE (11) cells are deliberately left as 0 (fluid). They
        # allow cold→hot through-flow driven by the CRAC pressure field. The
        # hot-face BLOCK BC in the .cfd file re-marks the last cell layer as
        # SOLID at runtime (via the SCI reader), so heat injection is still
        # applied there.

    # --- Add non-perforated raised-floor panels ---
    # The raised floor is at Z_python = 0.0.  In nodes_z (which runs from
    # -plenum_depth to white_space_height), Z=0 should be a node.
    tile_ks = np.unique(np.where(flags == TILE_OPENING)[2])
    if len(tile_ks) == 0:
        print("  WARNING: no TILE_OPENING cells found; raised floor not added to .dat")
    else:
        for kt in tile_ks:
            # Cells at this k-level that are currently FLUID → raised-floor panel
            floor_mask = flags[:, :, kt] == FLUID
            dat[:, :, kt][floor_mask] = 1
            n_added = int(floor_mask.sum())
            print(f"  Raised-floor solid: added {n_added} cells at k={kt+1} (1-based)")

    # --- Write the file ---
    total = imax * jmax * kmax
    solid_count = int(dat.sum())
    print(f"  .dat: {solid_count:,} / {total:,} cells marked solid ({100*solid_count/total:.1f}%)")

    with open(outpath, "w") as fh:
        col = 0
        for k in range(kmax):        # k=0..kmax-1 (0-based) = 1..kmax (1-based FFD)
            for j in range(jmax):
                for i in range(imax):
                    fh.write(str(dat[i, j, k]))
                    col += 1
                    if col == 25:
                        fh.write("\n")
                        col = 0
                    else:
                        fh.write(" ")
        if col != 0:
            fh.write("\n")

    print(f"  Written: {outpath}")


# ===========================================================================
# Index-conversion helpers for .cfd
# ===========================================================================

def block_sci_indices(nodes_x, nodes_y, nodes_z, xmin, xmax, ymin, ymax, zmin, zmax):
    """
    Given a 3-D block in Python coordinates, return SCI block BC tokens:
        SI, SJ, SK, EI_ext, EJ_ext, EK_ext
    where EI_ext is the EXTENT (number of cells) for non-wall-adjacent blocks.
    SI/SJ/SK are 1-based FFD indices.

    The FFD adjustment for blocks: EI_actual = EI_ext + SI - 1 (when SI > 1).
    """
    rx = find_cell_range(nodes_x, xmin, xmax)
    ry = find_cell_range(nodes_y, ymin, ymax)
    rz = find_cell_range(nodes_z, zmin, zmax)
    if rx is None or ry is None or rz is None:
        raise ValueError(f"Block [{xmin},{xmax}]×[{ymin},{ymax}]×[{zmin},{zmax}] "
                         "not found in grid")
    return (rx[0]+1, ry[0]+1, rz[0]+1, rx[1], ry[1], rz[1])


def rack_native_dir_code(rack):
    """Map rack cold-face orientation to native FFD rack-flow direction."""
    cold_face = rack["cold_face"]
    if cold_face == "-y":
        return 2
    if cold_face == "+y":
        return -2
    if cold_face == "-x":
        return 1
    if cold_face == "+x":
        return -1
    if cold_face == "-z":
        return 3
    if cold_face == "+z":
        return -3
    raise ValueError(f"Unsupported rack cold_face for native rack mode: {cold_face!r}")


def rack_native_name(rack):
    """Return the legacy/native rack block name consumed by standalone FFD."""
    total_heat_w = float(rack["total_heat_w"])
    flow_per_w = float(rack["fan_q_max_m3s"]) / total_heat_w if total_heat_w > 0 else 0.0
    return (
        f"Rack {rack_native_dir_code(rack)} "
        f"{total_heat_w:.1f} {flow_per_w:.6e} {rack['id']}"
    )


def rack_hot_face_sci_indices(nodes_x, nodes_y, nodes_z, rack):
    """
    Return SCI indices for a one-cell-thick heated slab placed on the rack row's
    hot face. The rack body itself remains a solid obstacle through `.dat`.

    This matches the Buildings `libffd.so` capabilities more closely than the
    legacy `Rack ...` block syntax, which this library does not interpret.
    """
    rx = find_cell_range(nodes_x, rack["x_min"], rack["x_max"])
    ry = find_cell_range(nodes_y, rack["y_min"], rack["y_max"])
    rz = find_cell_range(nodes_z, rack["z_min"], rack["z_max"])
    if rx is None or ry is None or rz is None:
        raise ValueError(f'Rack hot face for {rack["id"]} not found in grid')

    if rack["cold_face"] == "-y":
        j0 = ry[0] + ry[1] - 1
    else:
        j0 = ry[0]

    return (
        rx[0] + 1,
        j0 + 1,
        rz[0] + 1,
        rx[1],
        1,
        rz[1],
    )


def wall_face_sci_indices(wall_side, nodes_x, nodes_y, nodes_z,
                          y_lo, y_hi, z_lo, z_hi):
    """
    Return SCI inlet/outlet BC tokens for a vertical wall face (west or east).
    Uses the face convention: EI=0 (west or east wall).

    SI=1 for west, SI=imax+1 for east.
    SJ, EJ, SK, EK are 1-based start and EXTENT.
    """
    imax = len(nodes_x) - 1
    jmax = len(nodes_y) - 1
    kmax = len(nodes_z) - 1
    ry = find_cell_range(nodes_y, y_lo, y_hi)
    rz = find_cell_range(nodes_z, z_lo, z_hi)
    if ry is None or rz is None:
        raise ValueError(f"Wall face y=[{y_lo},{y_hi}] z=[{z_lo},{z_hi}] not in grid")
    if wall_side == "west":
        SI = 1
    else:  # east
        SI = imax + 1
    SJ  = ry[0] + 1
    EJ  = ry[1]           # extent in j
    SK  = rz[0] + 1
    EK  = rz[1]           # extent in k
    return SI, SJ, SK, 0, EJ, EK


def tile_sci_indices(nodes_x, nodes_y, nodes_z, xmin, xmax, ymin, ymax, k_tile_0based):
    """
    Return SCI outlet BC tokens for a horizontal tile face at k=k_tile_0based (0-based).
    Uses the floor convention: EK=0 (face at k_tile+1 boundary in 1-based).

    SK = k_tile_0based + 1 (1-based FFD index of the tile cell).
    SI, EI and SJ, EJ are 1-based start and EXTENT.
    """
    rx = find_cell_range(nodes_x, xmin, xmax)
    ry = find_cell_range(nodes_y, ymin, ymax)
    if rx is None or ry is None:
        raise ValueError(f"Tile face x=[{xmin},{xmax}] y=[{ymin},{ymax}] not in grid")
    SK = k_tile_0based + 1   # 1-based k index of the tile cell
    return rx[0]+1, ry[0]+1, SK, rx[1], ry[1], 0  # SI, SJ, SK, EI, EJ, EK=0


# ===========================================================================
# .cfd writer
# ===========================================================================

def write_cfd(cfg, geo, nodes_x, nodes_y, nodes_z, flags, outpath, mode="coupled"):
    """Write dc_model.cfd in SCI ASCII format."""
    imax = len(nodes_x) - 1
    jmax = len(nodes_y) - 1
    kmax = len(nodes_z) - 1

    plenum_depth = cfg["room"]["plenum_depth"]       # 0.6 m
    Lx = cfg["room"]["length_x"]                     # 15.0 m
    Ly = cfg["room"]["length_y"]                     # 25.0 m
    Lz = cfg["room"]["white_space_height"] + plenum_depth  # 4.5 m

    del_x = cell_widths(nodes_x)
    del_y = cell_widths(nodes_y)
    del_z = cell_widths(nodes_z)

    # --- Find tile k-index (0-based) ---
    tile_ks = np.unique(np.where(flags == TILE_OPENING)[2])
    if len(tile_ks) == 0:
        raise RuntimeError("No TILE_OPENING cells found in cell_flags.npy")
    k_tile = int(tile_ks[0])   # first (lowest) k-index of tile layer
    print(f"  Tile layer: k={k_tile+1} (1-based), Z_python="
          f"[{nodes_z[k_tile]:.4f}, {nodes_z[k_tile+1]:.4f}] m")

    # --- Gather BCs ---
    # Inlets: CRAC supply (into plenum)
    crac_inlets  = [o for o in geo["crac_openings"] if o["type"] == "crac_supply"]
    # Outlets: CRAC return (from whitespace)
    crac_returns = [o for o in geo["crac_openings"] if o["type"] == "crac_return"]
    tile_zones   = geo["tile_zones"]
    rack_blocks  = [b for b in geo["rack_blocks"]]
    containment_blocks = [b for b in geo.get("containment_blocks", [])]
    native_mode = (mode == "standalone-native")

    nb_inlet   = len(crac_inlets)
    # For the coupled path, perforated tiles remain internal openings in
    # case.dat and are intentionally omitted from the SCI outlet list so the
    # HVAC port count stays aligned with Modelica. For the standalone-native
    # path, emit native Tile outlets so FFD applies its own pressure-jump
    # model instead of the effective-area approximation.
    nb_outlet  = len(crac_returns) + (len(tile_zones) if native_mode else 0)
    nb_block   = len(rack_blocks) + (len(containment_blocks) if native_mode else 0)
    nb_wall    = 6
    nb_bc      = nb_inlet + nb_outlet

    print(f"  BC summary: {nb_inlet} inlets | {nb_outlet} outlets "
          f"| {nb_block} internal blocks | {nb_wall} walls")

    lines = []

    # -----------------------------------------------------------------------
    # Header: room dimensions + cell counts
    # -----------------------------------------------------------------------
    lines.append(f"{Lx:.4f} {Ly:.4f} {Lz:.4f}")
    lines.append(f"{imax} {jmax} {kmax}")

    # Cell widths (one axis per line, space-separated)
    lines.append(" ".join(f"{d:.6f}" for d in del_x))
    lines.append(" ".join(f"{d:.6f}" for d in del_y))
    lines.append(" ".join(f"{d:.6f}" for d in del_z))

    # -----------------------------------------------------------------------
    # Wall type flags (W E S N Bottom Top) – all 0 = adiabatic
    # -----------------------------------------------------------------------
    lines.append("0 0 0 0 0 0")

    # -----------------------------------------------------------------------
    # Total BC count
    # -----------------------------------------------------------------------
    lines.append(str(nb_bc))

    # -----------------------------------------------------------------------
    # INLETS: CRAC supply openings
    # -----------------------------------------------------------------------
    lines.append(str(nb_inlet))

    for crac in crac_inlets:
        wall = crac["wall"]
        y_lo = crac["y_min"]
        y_hi = crac["y_max"]
        # z in Python coords (nodes_z also Python coords — no shift needed here)
        z_lo = crac["z_min"]
        z_hi = crac["z_max"]

        SI, SJ, SK, EI, EJ, EK = wall_face_sci_indices(
            wall, nodes_x, nodes_y, nodes_z, y_lo, y_hi, z_lo, z_hi
        )

        # Inlet velocity (normal to wall face, into domain)
        rated_q = crac["rated_flow_m3s"]
        area = (y_hi - y_lo) * (z_hi - z_lo)
        v = rated_q / area if area > 0 else 9.0
        U = v  if wall == "west" else -v    # west: +X into domain
        V = 0.0
        W = 0.0
        T = crac["supply_temp_c"]
        Xi = 0.0   # no contaminant

        cid = crac["id"]
        lines.append(f"{cid}")
        lines.append(f"{SI} {SJ} {SK} {EI} {EJ} {EK} {T:.2f} {Xi:.4f} "
                     f"{U:.4f} {V:.4f} {W:.4f}")

    # -----------------------------------------------------------------------
    # OUTLETS: CRAC returns
    # -----------------------------------------------------------------------
    lines.append(str(nb_outlet))

    for crac in crac_returns:
        wall = crac["wall"]
        y_lo = crac["y_min"]
        y_hi = crac["y_max"]
        # z in Python coords
        z_lo = crac["z_min"]
        z_hi = crac["z_max"]

        SI, SJ, SK, EI, EJ, EK = wall_face_sci_indices(
            wall, nodes_x, nodes_y, nodes_z, y_lo, y_hi, z_lo, z_hi
        )

        # Outlet: velocity sign points OUT of domain
        rated_q = cfg["crac_units"][0]["rated_flow_m3s"]   # same for all
        area = (y_hi - y_lo) * (z_hi - z_lo)
        v = rated_q / area if area > 0 else 9.0
        U = -v if wall == "west" else v   # west outlet: -X (leaving domain)
        V = 0.0
        W = 0.0
        T = cfg["ffd"]["initial_temp_c"]
        Xi = 0.0

        cid = crac["id"]
        lines.append(f"{cid}")
        lines.append(f"{SI} {SJ} {SK} {EI} {EJ} {EK} {T:.2f} {Xi:.4f} "
                     f"{U:.4f} {V:.4f} {W:.4f}")

    if native_mode:
        for tz in tile_zones:
            SI, SJ, SK, EI, EJ, EK = tile_sci_indices(
                nodes_x, nodes_y, nodes_z,
                tz["x_min"], tz["x_max"], tz["y_min"], tz["y_max"], k_tile
            )
            open_ratio = float(tz["open_area_ratio"])
            tid = f"Tile {open_ratio:.4f} {tz['id']}"
            lines.append(tid)
            # The legacy/native FFD parser derives tile resistance from the
            # Tile name token and uses the face orientation here to place the
            # pressure-jump boundary at the raised floor.
            lines.append(
                f"{SI} {SJ} {SK} {EI} {EJ} {EK} "
                f"{cfg['ffd']['initial_temp_c']:.2f} 0.0000 0.0000 0.0000 -1.0000"
            )

    # -----------------------------------------------------------------------
    # BLOCKS
    # -----------------------------------------------------------------------
    lines.append(str(nb_block))

    if native_mode:
        for rack in rack_blocks:
            SI, SJ, SK, EI, EJ, EK = block_sci_indices(
                nodes_x, nodes_y, nodes_z,
                rack["x_min"], rack["x_max"],
                rack["y_min"], rack["y_max"],
                rack["z_min"], rack["z_max"],
            )
            lines.append(rack_native_name(rack))
            lines.append(f"{SI} {SJ} {SK} {EI} {EJ} {EK} 0 {float(rack['heat_flux_w_m2']):.4f}")

        for block in containment_blocks:
            SI, SJ, SK, EI, EJ, EK = block_sci_indices(
                nodes_x, nodes_y, nodes_z,
                block["x_min"], block["x_max"],
                block["y_min"], block["y_max"],
                block["z_min"], block["z_max"],
            )
            lines.append(block["id"])
            lines.append(f"{SI} {SJ} {SK} {EI} {EJ} {EK} 0 0.0000")
    else:
        for rack in rack_blocks:
            x_lo = rack["x_min"];  x_hi = rack["x_max"]
            z_lo = rack["z_min"];  z_hi = rack["z_max"]
            SI, SJ, SK, EI, EJ, EK = rack_hot_face_sci_indices(
                nodes_x, nodes_y, nodes_z, rack
            )
            heat_w = float(rack["total_heat_w"])
            hot_face_area = (x_hi - x_lo) * (z_hi - z_lo)
            heat_flux = float(rack.get("heat_flux_w_m2", heat_w / hot_face_area))
            rid = rack["id"]
            lines.append(f"{rid}_hot_face")
            lines.append(f"{SI} {SJ} {SK} {EI} {EJ} {EK} 0 {heat_flux:.4f}")

    # -----------------------------------------------------------------------
    # WALLS (6 room faces, all adiabatic: FLTMP=0, TMP=0.0)
    # -----------------------------------------------------------------------
    # Convention:
    #   SI/SJ/SK: 1-based start (1 = first real cell or ghost cell edge)
    #   EI/EJ/EK: extent (count of cells) — except EI/EJ/EK=0 means "this face only"
    # -----------------------------------------------------------------------
    lines.append(str(nb_wall))

    wall_defs = [
        ("West wall",    1,       1,       1,       0,    jmax, kmax),
        ("East wall",    imax+1,  1,       1,       0,    jmax, kmax),
        ("South wall",   1,       1,       1,       imax, 0,    kmax),
        ("North wall",   1,       jmax+1,  1,       imax, 0,    kmax),
        ("Floor",        1,       1,       1,       imax, jmax, 0),
        ("Ceiling",      1,       1,       kmax+1,  imax, jmax, 0),
    ]
    for (name, SI, SJ, SK, EI, EJ, EK) in wall_defs:
        lines.append(name)
        lines.append(f"{SI} {SJ} {SK} {EI} {EJ} {EK} 0 0.0")

    # -----------------------------------------------------------------------
    # SOURCES (none)
    # -----------------------------------------------------------------------
    lines.append("0")

    # -----------------------------------------------------------------------
    # Miscellaneous settings and required trailer records.
    # -----------------------------------------------------------------------
    misc = [
        "100",                           # max iterations
        "1e-6",                          # convergence rate
        "0",                             # turbulence model (0 = zero-equation)
        f"{cfg['ffd']['initial_temp_c']:.1f}",   # initial temperature
        "0.0",                           # min value
        "60.0",                          # max value
        "0",                             # fts value
        "1.0",                           # under-relaxation factor
        "0.0 0.0 0.0",                   # reference point (x y z)
        "0.0 0.0 0.0 0",                 # monitoring point (x y z flag)
        "0",                             # restart flag (0 = fresh start)
        "100",                           # print frequency
        "0",                             # pressure variable (0 = gauge)
        "0 0",                           # steady-state flag, buoyancy flag
    ]
    lines.extend(misc)

    fluid = cfg["fluid"]
    ffd_cfg = cfg["ffd"]
    step_total = int(round(ffd_cfg["total_time"] / ffd_cfg["time_step"]))
    lines.append(
        f"{fluid['density']:.6f} {fluid['kinematic_viscosity']:.8e} "
        f"{fluid['thermal_conductivity']:.6f} 0.0 0.0 {fluid['gravity_z']:.6f} "
        f"{fluid['thermal_expansion']:.6f} {ffd_cfg['initial_temp_c']:.6f} "
        f"{fluid['specific_heat']:.6f}"
    )
    lines.append(f"0.0 {ffd_cfg['time_step']:.6f} {step_total}")
    lines.append("0.9")

    # -----------------------------------------------------------------------
    # Write file
    # -----------------------------------------------------------------------
    with open(outpath, "w", newline="\n") as fh:
        fh.write("\n".join(lines) + "\n")

    print(f"  Written: {outpath}  ({len(lines)} lines)")


# ===========================================================================
# Validation
# ===========================================================================

def validate(cfd_path, dat_path, flags):
    """Basic sanity checks on written files."""
    ok = True

    # -- .dat: count solid cells ---
    dat_vals = []
    with open(dat_path) as fh:
        for line in fh:
            dat_vals.extend(int(x) for x in line.split())
    imax, jmax, kmax = flags.shape
    expected_cells = imax * jmax * kmax
    if len(dat_vals) != expected_cells:
        print(f"  ERROR .dat: expected {expected_cells} values, got {len(dat_vals)}")
        ok = False
    else:
        solid_dat = sum(dat_vals)
        print(f"  .dat validation: {solid_dat:,} solid cells read back OK")

    # -- .cfd: check it has the right number of lines ---
    with open(cfd_path) as fh:
        n_lines = sum(1 for _ in fh)
    print(f"  .cfd validation: {n_lines} lines OK")

    return ok


# ===========================================================================
# Main
# ===========================================================================

def main():
    ap = argparse.ArgumentParser(description="Generate dc_model.cfd and dc_model.dat")
    ap.add_argument("--config",   default="dc_config.yaml",
                    help="Path to YAML configuration file")
    ap.add_argument("--grid-dir", default=".",
                    help="Directory containing grid_x/y/z.csv and cell_flags.npy")
    ap.add_argument("--geo",      default="geometry.json",
                    help="Path to geometry.json")
    ap.add_argument("--outdir",   default=".",
                    help="Output directory for .cfd and .dat files")
    ap.add_argument(
        "--mode",
        choices=("coupled", "standalone-native"),
        default="coupled",
        help=(
            "Choose coupled-compatible SCI emission or the native standalone "
            "rack/tile format consumed by the legacy GPU FFD solver."
        ),
    )
    args = ap.parse_args()

    # --- Load inputs ---
    print("Loading inputs...")
    with open(args.config) as fh:
        cfg = yaml.safe_load(fh)

    with open(args.geo) as fh:
        geo = json.load(fh)

    nodes_x, nodes_y, nodes_z = load_grid_nodes(args.grid_dir)
    flags = np.load(os.path.join(args.grid_dir, "cell_flags.npy"))

    imax, jmax, kmax = flags.shape
    print(f"  Grid: {imax} × {jmax} × {kmax} = {imax*jmax*kmax:,} cells")

    os.makedirs(args.outdir, exist_ok=True)

    # Read filename targets from config (or use defaults)
    out_cfg = cfg.get("output", {})
    cfd_name = out_cfg.get("mesh_file",     "dc_model.cfd")
    dat_name = out_cfg.get("obstacle_file", "dc_model.dat")
    cfd_path = os.path.join(args.outdir, cfd_name)
    dat_path = os.path.join(args.outdir, dat_name)

    # --- Write .dat ---
    print("\nWriting .dat (zeroone solid-flag file)...")
    write_dat(flags, nodes_z, dat_path, mode=args.mode)

    # --- Write .cfd ---
    print("\nWriting .cfd (SCI boundary-condition file)...")
    write_cfd(cfg, geo, nodes_x, nodes_y, nodes_z, flags, cfd_path, mode=args.mode)

    # --- Validate ---
    print("\nValidating output files...")
    ok = validate(cfd_path, dat_path, flags)

    if ok:
        print("\nConversion complete.")
        print("Next step: compile isat_ffd and run:  ./ffd dc_model.ffd")
    else:
        print("\nConversion completed with warnings — review errors above.")
        sys.exit(1)


if __name__ == "__main__":
    main()
