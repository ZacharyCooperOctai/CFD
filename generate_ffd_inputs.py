#!/usr/bin/env python3
"""
generate_ffd_inputs.py
======================
Reads dc_config.yaml and generates all FFD input artefacts:

  1. <name>.ffd        — FFD parameter file (solver settings, fluid props)
  2. geometry.json      — complete geometry description (blocks, BCs, sensors)
  3. grid_x/y/z.csv     — non-uniform structured grid node coordinates
  4. cell_flags.npy      — 3-D numpy array flagging each cell (fluid/solid/BC type)
  5. sensor_locations.csv — virtual sensor coordinates
  6. summary.txt         — human-readable geometry audit

The .cfd / .dat files consumed by the Modelica Buildings FFD are normally
produced by the SCI_FFD GUI tool. This script creates an equivalent
intermediate representation so you can either:
  (a) import the geometry into SCI for final .cfd/.dat generation, or
  (b) write a thin adapter that converts cell_flags.npy → .cfd/.dat directly
      (the binary formats are straightforward structured-grid flag arrays).

Usage:
    python generate_ffd_inputs.py [--config dc_config.yaml] [--outdir ./output]
"""

import argparse
import json
import math
import os
import sys

import yaml

try:
    import numpy as np
    HAS_NUMPY = True
except ImportError:
    HAS_NUMPY = False
    print("WARNING: numpy not found. cell_flags.npy will not be generated.")


# =============================================================================
# Cell flag constants (matching FFD internal conventions)
# =============================================================================
FLUID   = 0
SOLID   = 1
INLET   = 2
OUTLET  = 3
WALL_ADIABATIC = 4
WALL_TEMP = 5
WALL_HEATFLUX = 6
RACK_COLD_FACE = 7   # air drawn in (acts as outlet from room perspective)
RACK_HOT_FACE  = 8   # heated air exhaust (acts as inlet to room)
TILE_OPENING   = 9   # perforated tile connecting plenum to white space
CONTAINMENT    = 10  # thin solid wall (hot aisle glass enclosure)
RACK_SOURCE    = 11  # rack interior: fluid with CRAC-driven through-flow (not solid)

FLAG_NAMES = {
    FLUID: "fluid", SOLID: "solid", INLET: "inlet", OUTLET: "outlet",
    WALL_ADIABATIC: "wall_adiabatic", WALL_TEMP: "wall_temperature",
    WALL_HEATFLUX: "wall_heatflux", RACK_COLD_FACE: "rack_cold_face",
    RACK_HOT_FACE: "rack_hot_face", TILE_OPENING: "tile_opening",
    CONTAINMENT: "containment_wall", RACK_SOURCE: "rack_source",
}


# =============================================================================
# Grid generation
# =============================================================================
def build_1d_grid(length, base_size, refinement_specs=None):
    """
    Build a non-uniform 1-D grid along [0, length].

    refinement_specs: list of dicts with keys:
        centre  — coordinate of refinement centre
        extent  — half-width of refined region
        min_size — minimum cell size in this region

    Returns array of node coordinates (N+1 values for N cells).
    """
    if refinement_specs is None:
        refinement_specs = []

    # Start with uniform grid
    n_base = max(2, int(math.ceil(length / base_size)))
    nodes = list(set([0.0, length]))

    # Add refinement region boundaries
    for spec in refinement_specs:
        lo = max(0, spec["centre"] - spec["extent"])
        hi = min(length, spec["centre"] + spec["extent"])
        nodes.extend([lo, hi])
        # Fill refined region
        n_ref = max(1, int(math.ceil((hi - lo) / spec["min_size"])))
        for i in range(n_ref + 1):
            nodes.append(lo + i * (hi - lo) / n_ref)

    # Fill remaining gaps with base-size cells
    nodes = sorted(set(nodes))
    filled = [nodes[0]]
    for i in range(1, len(nodes)):
        gap = nodes[i] - nodes[i - 1]
        if gap > base_size * 1.5:
            n_fill = max(1, int(round(gap / base_size)))
            dx = gap / n_fill
            for j in range(1, n_fill):
                filled.append(nodes[i - 1] + j * dx)
        filled.append(nodes[i])

    return sorted(set(filled))


def collect_refinement_points(cfg):
    """
    Gather all coordinates that need mesh refinement, organised by axis.
    Returns dict with keys 'x', 'y', 'z', each a list of refinement specs.
    """
    ref = {"x": [], "y": [], "z": []}
    rack_depth = cfg["rack_defaults"]["rack_depth"]
    mesh_cfg = cfg["mesh"]

    # Rack faces
    for row in cfg["rack_rows"]:
        oy = row["origin_y"]
        # The row occupies [oy, oy + rack_depth] in Y
        face_lo = oy
        face_hi = oy + rack_depth
        rf = mesh_cfg["refinement"]["rack_faces"]
        ref["y"].append({"centre": face_lo, "extent": rf["depth"], "min_size": rf["min_cell_size"]})
        ref["y"].append({"centre": face_hi, "extent": rf["depth"], "min_size": rf["min_cell_size"]})

    # Tile openings (at Z=0)
    tf = mesh_cfg["refinement"]["tile_openings"]
    ref["z"].append({"centre": 0.0, "extent": tf["depth"], "min_size": tf["min_cell_size"]})

    # CRAC openings
    cf = mesh_cfg["refinement"]["crac_openings"]
    for crac in cfg["crac_units"]:
        ref["y"].append({
            "centre": crac["discharge_y"],
            "extent": cf["depth"],
            "min_size": cf["min_cell_size"],
        })

    return ref


def build_3d_grid(cfg):
    """Build structured grid node arrays for X, Y, Z axes."""
    room = cfg["room"]
    base = cfg["mesh"]["base_cell_size"]
    refs = collect_refinement_points(cfg)

    # Z domain: [-plenum_depth, white_space_height]
    z_min = -room["plenum_depth"]
    z_max = room["white_space_height"]
    z_length = z_max - z_min

    nodes_x = build_1d_grid(room["length_x"], base, refs.get("x", []))
    nodes_y = build_1d_grid(room["length_y"], base, refs.get("y", []))

    # For Z, shift refinement specs relative to z_min
    z_refs = []
    for spec in refs.get("z", []):
        z_refs.append({
            "centre": spec["centre"] - z_min,
            "extent": spec["extent"],
            "min_size": spec["min_size"],
        })
    nodes_z_local = build_1d_grid(z_length, base, z_refs)
    # Shift back to global coordinates
    nodes_z = [z + z_min for z in nodes_z_local]

    return nodes_x, nodes_y, nodes_z


# =============================================================================
# Geometry block definitions
# =============================================================================
def compute_rack_blocks(cfg):
    """Compute 3D bounding boxes for each rack row."""
    blocks = []
    defaults = cfg["rack_defaults"]
    depth = defaults["rack_depth"]
    height = defaults["rack_height"]

    for row in cfg["rack_rows"]:
        ox = row["origin_x"]
        oy = row["origin_y"]
        row_len = row["row_length"]
        heat_kw = row.get("heat_per_rack_kw", defaults["default_heat_per_rack_kw"])
        total_heat_w = heat_kw * 1000 * defaults["racks_per_row"]
        cold_face = row["cold_face"]

        # Fan curve: Q_max at free delivery, ΔP_max at shut-off
        fan_curve = {**defaults.get("rack_fan_curve", {}),
                     **row.get("rack_fan_curve", {})}
        q_max_m3s = (fan_curve.get("q_max_m3s_per_kw", 0.059)
                     * heat_kw * defaults["racks_per_row"])
        dp_max_pa = fan_curve.get("dp_max_pa", 80.0)
        # Reference operating point: 50% flow (a mid-curve estimate).
        # With tile pressure drop, actual Q will be lower than Q_max.
        q_ref_m3s  = q_max_m3s * 0.5
        dp_ref_pa  = dp_max_pa * (1.0 - (q_ref_m3s / q_max_m3s) ** 2)

        block = {
            "id": row["id"],
            "type": "rack_row",
            "x_min": ox,
            "x_max": ox + row_len,
            "y_min": oy,
            "y_max": oy + depth,
            "z_min": 0.0,         # sits on raised floor
            "z_max": height,
            "cold_face": cold_face,
            "total_heat_w": total_heat_w,
            "heat_flux_w_m2": total_heat_w / (row_len * height),  # per face area
            "fan_q_max_m3s": round(q_max_m3s, 4),
            "fan_dp_max_pa": dp_max_pa,
            "fan_q_ref_m3s": round(q_ref_m3s, 4),
            "fan_dp_ref_pa": round(dp_ref_pa, 2),
        }
        blocks.append(block)
    return blocks


def compute_containment_blocks(cfg, rack_blocks):
    """
    Compute thin solid blocks for hot aisle containment.
    The containment encloses the top and the two short ends of each hot aisle.
    """
    blocks = []
    rack_map = {b["id"]: b for b in rack_blocks}
    wall_thickness = 0.05  # m, thin wall for glass enclosure

    for ha in cfg["aisles"]["hot_aisles"]:
        if not ha.get("containment", False):
            continue

        r1 = rack_map[ha["between"][0]]
        r2 = rack_map[ha["between"][1]]

        # Hot aisle Y span
        ha_y_min = r1["y_max"]  # south face of first row
        ha_y_max = r2["y_min"]  # north face of second row
        # X span matches the rack rows
        ha_x_min = min(r1["x_min"], r2["x_min"])
        ha_x_max = max(r1["x_max"], r2["x_max"])
        # Z: from floor to top of racks
        ha_z_max = max(r1["z_max"], r2["z_max"])

        # End wall (west end)
        blocks.append({
            "id": f"{ha['id']}_end_west",
            "type": "containment",
            "x_min": ha_x_min - wall_thickness,
            "x_max": ha_x_min,
            "y_min": ha_y_min,
            "y_max": ha_y_max,
            "z_min": 0.0,
            "z_max": ha_z_max,
        })
        # End wall (east end)
        blocks.append({
            "id": f"{ha['id']}_end_east",
            "type": "containment",
            "x_min": ha_x_max,
            "x_max": ha_x_max + wall_thickness,
            "y_min": ha_y_min,
            "y_max": ha_y_max,
            "z_min": 0.0,
            "z_max": ha_z_max,
        })
        # Roof panel
        blocks.append({
            "id": f"{ha['id']}_roof",
            "type": "containment",
            "x_min": ha_x_min,
            "x_max": ha_x_max,
            "y_min": ha_y_min,
            "y_max": ha_y_max,
            "z_min": ha_z_max,
            "z_max": ha_z_max + wall_thickness,
        })

    return blocks


def compute_tile_zones(cfg, rack_blocks, native_pressure_jump=False):
    """
    Compute perforated tile zones at Z=0 in front of each rack's cold face.
    These are openings connecting the plenum to the white space.
    """
    tiles = []
    strip_w = cfg["perforated_tiles"]["tile_strip_width"]
    open_ratio = cfg["perforated_tiles"]["open_area_ratio"]
    Cd = cfg["perforated_tiles"].get("discharge_coefficient", 1.0)
    # Effective open fraction accounts for both geometric open area (AR) and
    # the vena-contracta / energy loss effect (Cd).  For the coupled-compatible
    # path, only that fraction of the strip is flagged as TILE_OPENING.
    # For the native standalone path, the full geometric strip is flagged and
    # the solver applies its own tile pressure-jump model from the Tile record.
    eff_open = open_ratio * Cd
    # Pressure-drop coefficient: ΔP = K × ½ρv²  (Idelchik perforated plate)
    loss_coeff = (1.0 / eff_open) ** 2 - 1.0

    for rb in rack_blocks:
        cf = rb["cold_face"]
        if cf == "-y":
            # Cold face is the north face (y_min side)
            tile = {
                "id": f"{rb['id']}_tiles",
                "x_min": rb["x_min"],
                "x_max": rb["x_max"],
                "y_min": rb["y_min"] - strip_w,
                "y_max": rb["y_min"],
                "z": 0.0,
                "open_area_ratio": open_ratio,
                "effective_open_fraction": round(eff_open, 4),
                "loss_coefficient": round(loss_coeff, 2),
                "native_pressure_jump": bool(native_pressure_jump),
            }
        else:  # "+y"
            # Cold face is the south face (y_max side)
            tile = {
                "id": f"{rb['id']}_tiles",
                "x_min": rb["x_min"],
                "x_max": rb["x_max"],
                "y_min": rb["y_max"],
                "y_max": rb["y_max"] + strip_w,
                "z": 0.0,
                "open_area_ratio": open_ratio,
                "effective_open_fraction": round(eff_open, 4),
                "loss_coefficient": round(loss_coeff, 2),
                "native_pressure_jump": bool(native_pressure_jump),
            }
        tiles.append(tile)
    return tiles


def compute_crac_openings(cfg):
    """Compute CRAC supply (plenum) and return (white space) boundary patches."""
    room = cfg["room"]
    openings = []

    for crac in cfg["crac_units"]:
        wall = crac["wall"]
        dy = crac["discharge_y"]
        sw = crac["supply_opening_width"]
        sh = crac["supply_opening_height"]
        rw = crac["return_grille_width"]
        rh = crac["return_grille_height"]
        rz = crac["return_grille_z_centre"]
        ry = crac["return_grille_y"]

        if wall == "west":
            x_face = 0.0
        else:
            x_face = room["length_x"]

        # Supply into plenum (at wall face, in the plenum zone)
        openings.append({
            "id": f"{crac['id']}_supply",
            "type": "crac_supply",
            "wall": wall,
            "x": x_face,
            "y_min": dy - sw / 2,
            "y_max": dy + sw / 2,
            "z_min": -room["plenum_depth"],
            "z_max": -room["plenum_depth"] + sh,
            "rated_flow_m3s": crac["rated_flow_m3s"],
            "supply_temp_c": crac["supply_temp_c"],
        })

        # Return from white space (at wall face, high up)
        openings.append({
            "id": f"{crac['id']}_return",
            "type": "crac_return",
            "wall": wall,
            "x": x_face,
            "y_min": ry - rw / 2,
            "y_max": ry + rw / 2,
            "z_min": rz - rh / 2,
            "z_max": rz + rh / 2,
        })

    return openings


def compute_sensors(cfg, rack_blocks):
    """Generate virtual sensor locations."""
    sensors = []
    heights = cfg["sensors"]["rack_inlet_heights"]
    offset = cfg["sensors"]["rack_inlet_offset"]
    rack_depth = cfg["rack_defaults"]["rack_depth"]
    racks_per_row = cfg["rack_defaults"]["racks_per_row"]

    for rb in rack_blocks:
        cf = rb["cold_face"]
        # Place sensors at each rack position along the row
        rack_w = (rb["x_max"] - rb["x_min"]) / racks_per_row
        for ri in range(racks_per_row):
            x_centre = rb["x_min"] + (ri + 0.5) * rack_w
            for hi, h in enumerate(heights):
                if cf == "-y":
                    y_sensor = rb["y_min"] - offset
                else:
                    y_sensor = rb["y_max"] + offset
                sensors.append({
                    "id": f"{rb['id']}_rack{ri+1:02d}_h{hi+1}",
                    "x": round(x_centre, 4),
                    "y": round(y_sensor, 4),
                    "z": h,
                    "type": "rack_inlet_temperature",
                })

    # Extra sensors
    for es in cfg["sensors"].get("extra_sensors", []):
        sensors.append({
            "id": es["id"],
            "x": es["x"],
            "y": es["y"],
            "z": es["z"],
            "type": "point_sensor",
        })

    return sensors


# =============================================================================
# Cell flagging
# =============================================================================
def find_cell_index(nodes, coord):
    """Find the cell index that contains the given coordinate."""
    for i in range(len(nodes) - 1):
        if nodes[i] <= coord < nodes[i + 1]:
            return i
    # Handle exact upper boundary
    if abs(coord - nodes[-1]) < 1e-9:
        return len(nodes) - 2
    return None


def flag_block(flags, nodes_x, nodes_y, nodes_z, block, flag_value):
    """Set flag_value for all cells whose centres fall inside the block."""
    nx = len(nodes_x) - 1
    ny = len(nodes_y) - 1
    nz = len(nodes_z) - 1

    for i in range(nx):
        cx = (nodes_x[i] + nodes_x[i + 1]) / 2
        if cx < block["x_min"] or cx > block["x_max"]:
            continue
        for j in range(ny):
            cy = (nodes_y[j] + nodes_y[j + 1]) / 2
            if cy < block["y_min"] or cy > block["y_max"]:
                continue
            for k in range(nz):
                cz = (nodes_z[k] + nodes_z[k + 1]) / 2
                if cz < block["z_min"] or cz > block["z_max"]:
                    continue
                flags[i, j, k] = flag_value


def flag_block_overlap(flags, nodes_x, nodes_y, nodes_z, block, flag_value):
    """Set flag_value for any cell whose volume overlaps the block.

    Unlike flag_block (which tests cell centres), this flags a cell whenever
    the block and the cell share *any* volume.  Required for features thinner
    than one mesh cell — e.g. 0.05 m containment glass on a 0.15 m base mesh.
    """
    nx = len(nodes_x) - 1
    ny = len(nodes_y) - 1
    nz = len(nodes_z) - 1

    for i in range(nx):
        if nodes_x[i + 1] <= block["x_min"] or nodes_x[i] >= block["x_max"]:
            continue
        for j in range(ny):
            if nodes_y[j + 1] <= block["y_min"] or nodes_y[j] >= block["y_max"]:
                continue
            for k in range(nz):
                if nodes_z[k + 1] <= block["z_min"] or nodes_z[k] >= block["z_max"]:
                    continue
                flags[i, j, k] = flag_value


def generate_cell_flags(cfg, nodes_x, nodes_y, nodes_z,
                        rack_blocks, containment_blocks, tile_zones):
    """
    Create 3D flag array for all cells.
    Convention: flags[i,j,k] where i=X, j=Y, k=Z.
    """
    nx = len(nodes_x) - 1
    ny = len(nodes_y) - 1
    nz = len(nodes_z) - 1

    flags = np.zeros((nx, ny, nz), dtype=np.int32)

    # Mark rack rows as RACK_SOURCE (fluid — allows CRAC-driven through-flow).
    # The hot-face heat-flux BLOCK BC in the .cfd file still applies to the
    # last cell layer of each rack; those cells are re-marked SOLID by the
    # SCI reader at runtime.  Marking the rack interior as RACK_SOURCE here
    # ensures .dat marks them as 0 (fluid), not 1 (solid).
    for rb in rack_blocks:
        flag_block(flags, nodes_x, nodes_y, nodes_z, rb, RACK_SOURCE)

    # Mark containment walls as solid.  Use overlap-based flagging so that
    # walls thinner than one cell (0.05 m glass on 0.15 m mesh) still capture
    # the cell they intersect rather than being silently dropped.
    for cb in containment_blocks:
        flag_block_overlap(flags, nodes_x, nodes_y, nodes_z, cb, CONTAINMENT)

    # Mark perforated tile openings at Z≈0.
    # Only a fraction (effective_open_fraction = AR × Cd) of the geometric
    # tile strip area is marked FLUID; the rest becomes raised-floor panel
    # (SOLID in .dat).  A regular column stride distributes open cells evenly.
    for tz in tile_zones:
        eff_open = tz.get("effective_open_fraction", 1.0)
        native_pressure_jump = bool(tz.get("native_pressure_jump", False))
        k0 = find_cell_index(nodes_z, 0.0)
        if k0 is None:
            continue
        tile_cells = []
        for i in range(nx):
            cx = (nodes_x[i] + nodes_x[i + 1]) / 2
            if cx < tz["x_min"] or cx > tz["x_max"]:
                continue
            for j in range(ny):
                cy = (nodes_y[j] + nodes_y[j + 1]) / 2
                if cy < tz["y_min"] or cy > tz["y_max"]:
                    continue
                tile_cells.append((i, j))
        if native_pressure_jump:
            for i, j in tile_cells:
                flags[i, j, k0] = TILE_OPENING
            continue
        n_total = len(tile_cells)
        n_open  = max(1, round(n_total * eff_open))
        stride  = max(1, round(n_total / n_open))
        for idx, (i, j) in enumerate(tile_cells):
            if idx % stride == 0:
                flags[i, j, k0] = TILE_OPENING
            # Remaining cells stay FLUID; write_dat() will mark them as
            # raised-floor SOLID when it processes the tile k-level.

    # Mark boundary walls
    # Floor of plenum (bottom Z boundary)
    for i in range(nx):
        for j in range(ny):
            flags[i, j, 0] = WALL_ADIABATIC
    # Ceiling (top Z boundary)
    for i in range(nx):
        for j in range(ny):
            flags[i, j, nz - 1] = WALL_ADIABATIC
    # X walls
    for j in range(ny):
        for k in range(nz):
            flags[0, j, k] = WALL_ADIABATIC
            flags[nx - 1, j, k] = WALL_ADIABATIC
    # Y walls
    for i in range(nx):
        for k in range(nz):
            flags[i, 0, k] = WALL_ADIABATIC
            flags[i, ny - 1, k] = WALL_ADIABATIC

    return flags


# =============================================================================
# File writers
# =============================================================================
def write_ffd_file(cfg, outdir, cosimulation=1):
    """Write the .ffd parameter file."""
    fluid = cfg["fluid"]
    ffd = cfg["ffd"]
    out = cfg["output"]
    tur_model_map = {
        "laminar": "LAM",
        "zero_equation": "CHEN",
        "constant": "CONSTANT",
    }
    tur_model = tur_model_map.get(str(ffd.get("turbulence_model", "laminar")).lower())
    if tur_model is None:
        raise ValueError(
            f"Unsupported FFD turbulence_model: {ffd.get('turbulence_model')!r}. "
            "Expected laminar, zero_equation, or constant."
        )

    lines = [
        f"inpu.parameter_file_format SCI",
        f"inpu.parameter_file_name {out['mesh_file']}",
        f"inpu.block_file_name {out['obstacle_file']}",
        f"",
        f"prob.nu {fluid['kinematic_viscosity']}",
        f"prob.rho {fluid['density']}",
        f"prob.gravx 0",
        f"prob.gravy 0",
        f"prob.gravz {fluid['gravity_z']}",
        f"prob.cond {fluid['thermal_conductivity']}",
        f"prob.Cp {fluid['specific_heat']}",
        f"prob.beta {fluid['thermal_expansion']}",
        f"prob.diff 0.00001",
        f"prob.alpha {fluid['thermal_diffusivity']}",
        f"prob.coeff_h 0.004",
        f"prob.force 1.0",
        f"prob.source 1.0",
        f"prob.movie 0",
        f"prob.tur_model {tur_model}",
        f"prob.chen_a 0.03874",
        f"prob.Prt 0.9",
        f"prob.Temp_Buoyancy {ffd['initial_temp_c']}",
        f"mytime.t_steady {max(float(ffd['sync_interval']), float(ffd['time_step']))}",
        f"solv.solver GS",
        f"solv.check_residual 0",
        f"solv.advection_solver SEMI",
        f"solv.interpolation BILINEAR",
        f"solv.cosimulation {int(cosimulation)}",
        f"",
        f"init.T {ffd['initial_temp_c']}",
        f"init.u 0.0",
        f"init.v 0.0",
        f"init.w 0.0",
        f"",
        f"outp.version RUN",
        f"",
        # Buildings.Media.Air exposes one independent species mass fraction.
        # Keep the coupled FFD metadata aligned with the Modelica medium so the
        # port exchange arrays have matching sizes.
        f"bc.nb_Xi 1",
        f"bc.nb_C 0",
    ]

    path = os.path.join(outdir, out["ffd_file"])
    with open(path, "w") as f:
        f.write("\n".join(lines) + "\n")
    return path


def write_grid_csv(nodes, axis_name, outdir):
    """Write grid node coordinates to CSV."""
    path = os.path.join(outdir, f"grid_{axis_name}.csv")
    with open(path, "w") as f:
        f.write(f"node_index,{axis_name}_m\n")
        for i, v in enumerate(nodes):
            f.write(f"{i},{v:.6f}\n")
    return path


def write_geometry_json(outdir, rack_blocks, containment_blocks,
                        tile_zones, crac_openings, sensors, cfg):
    """Write complete geometry description to JSON."""
    geom = {
        "room": cfg["room"],
        "rack_blocks": rack_blocks,
        "containment_blocks": containment_blocks,
        "tile_zones": tile_zones,
        "crac_openings": crac_openings,
        "sensors": sensors,
        "flag_codes": {str(k): v for k, v in FLAG_NAMES.items()},
    }
    path = os.path.join(outdir, "geometry.json")
    with open(path, "w") as f:
        json.dump(geom, f, indent=2, default=str)
    return path


def write_sensors_csv(sensors, outdir):
    """Write sensor locations to CSV."""
    path = os.path.join(outdir, "sensor_locations.csv")
    with open(path, "w") as f:
        f.write("id,x_m,y_m,z_m,type\n")
        for s in sensors:
            f.write(f"{s['id']},{s['x']},{s['y']},{s['z']},{s['type']}\n")
    return path


def write_summary(outdir, cfg, nodes_x, nodes_y, nodes_z,
                  rack_blocks, containment_blocks, tile_zones,
                  crac_openings, sensors, flags):
    """Write a human-readable geometry and mesh audit."""
    nx = len(nodes_x) - 1
    ny = len(nodes_y) - 1
    nz = len(nodes_z) - 1
    total_cells = nx * ny * nz

    lines = [
        "=" * 70,
        "DATA CENTRE FFD MODEL — GEOMETRY AND MESH SUMMARY",
        "=" * 70,
        "",
        "ROOM ENVELOPE",
        f"  X (width):  {cfg['room']['length_x']} m",
        f"  Y (length): {cfg['room']['length_y']} m",
        f"  White space height: {cfg['room']['white_space_height']} m",
        f"  Plenum depth: {cfg['room']['plenum_depth']} m",
        f"  Total Z domain: {nodes_z[0]:.2f} to {nodes_z[-1]:.2f} m",
        "",
        "MESH",
        f"  Grid nodes:  X={len(nodes_x)}, Y={len(nodes_y)}, Z={len(nodes_z)}",
        f"  Grid cells:  X={nx}, Y={ny}, Z={nz}",
        f"  Total cells: {total_cells:,}",
        f"  Min cell size X: {min(nodes_x[i+1]-nodes_x[i] for i in range(nx)):.4f} m",
        f"  Max cell size X: {max(nodes_x[i+1]-nodes_x[i] for i in range(nx)):.4f} m",
        f"  Min cell size Y: {min(nodes_y[i+1]-nodes_y[i] for i in range(ny)):.4f} m",
        f"  Max cell size Y: {max(nodes_y[i+1]-nodes_y[i] for i in range(ny)):.4f} m",
        f"  Min cell size Z: {min(nodes_z[i+1]-nodes_z[i] for i in range(nz)):.4f} m",
        f"  Max cell size Z: {max(nodes_z[i+1]-nodes_z[i] for i in range(nz)):.4f} m",
        "",
        "RACK ROWS",
    ]
    for rb in rack_blocks:
        lines.append(
            f"  {rb['id']}: X=[{rb['x_min']:.1f}, {rb['x_max']:.1f}] "
            f"Y=[{rb['y_min']:.1f}, {rb['y_max']:.1f}] "
            f"Z=[{rb['z_min']:.1f}, {rb['z_max']:.2f}] "
            f"heat={rb['total_heat_w']:.0f} W"
        )

    lines.append("")
    lines.append(f"CONTAINMENT BLOCKS: {len(containment_blocks)}")
    lines.append(f"PERFORATED TILE ZONES: {len(tile_zones)}")
    lines.append(f"CRAC OPENINGS: {len(crac_openings)}")
    lines.append(f"VIRTUAL SENSORS: {len(sensors)}")

    if flags is not None:
        lines.append("")
        lines.append("CELL FLAG DISTRIBUTION")
        unique, counts = np.unique(flags, return_counts=True)
        for u, c in zip(unique, counts):
            name = FLAG_NAMES.get(u, f"unknown_{u}")
            pct = 100.0 * c / total_cells
            lines.append(f"  {name:25s}: {c:>10,} cells ({pct:5.1f}%)")

    path = os.path.join(outdir, "summary.txt")
    with open(path, "w") as f:
        f.write("\n".join(lines) + "\n")
    return path


# =============================================================================
# Main
# =============================================================================
def main():
    parser = argparse.ArgumentParser(description="Generate FFD inputs from YAML config")
    parser.add_argument("--config", default="dc_config.yaml", help="Path to YAML config")
    parser.add_argument("--outdir", default="./output", help="Output directory")
    parser.add_argument(
        "--cosimulation",
        type=int,
        choices=(0, 1),
        default=1,
        help="Set solv.cosimulation in the generated .ffd file. Use 0 for standalone FFD runs.",
    )
    parser.add_argument(
        "--native-tile-pressure-jump",
        action="store_true",
        help=(
            "Flag the full perforated-tile strip so standalone FFD can apply its "
            "native pressure-jump tile model. Default behavior keeps the "
            "coupled-compatible effective-open-area approximation."
        ),
    )
    args = parser.parse_args()

    # Load config
    with open(args.config) as f:
        cfg = yaml.safe_load(f)

    os.makedirs(args.outdir, exist_ok=True)

    # --- Compute geometry ---
    print("Computing geometry...")
    rack_blocks = compute_rack_blocks(cfg)
    containment_blocks = compute_containment_blocks(cfg, rack_blocks)
    tile_zones = compute_tile_zones(
        cfg,
        rack_blocks,
        native_pressure_jump=args.native_tile_pressure_jump,
    )
    crac_openings = compute_crac_openings(cfg)
    sensors = compute_sensors(cfg, rack_blocks)

    # --- Build mesh ---
    print("Building structured grid...")
    nodes_x, nodes_y, nodes_z = build_3d_grid(cfg)
    nx = len(nodes_x) - 1
    ny = len(nodes_y) - 1
    nz = len(nodes_z) - 1
    print(f"  Grid: {nx} x {ny} x {nz} = {nx*ny*nz:,} cells")

    # --- Flag cells ---
    flags = None
    if HAS_NUMPY:
        print("Flagging cells...")
        flags = generate_cell_flags(
            cfg, nodes_x, nodes_y, nodes_z,
            rack_blocks, containment_blocks, tile_zones,
        )
        np.save(os.path.join(args.outdir, "cell_flags.npy"), flags)
        print(f"  Saved cell_flags.npy ({flags.shape})")

    # --- Write outputs ---
    print("Writing output files...")

    p = write_ffd_file(cfg, args.outdir, cosimulation=args.cosimulation)
    print(f"  {p}")

    for axis, nodes in [("x", nodes_x), ("y", nodes_y), ("z", nodes_z)]:
        p = write_grid_csv(nodes, axis, args.outdir)
        print(f"  {p}")

    p = write_geometry_json(
        args.outdir, rack_blocks, containment_blocks,
        tile_zones, crac_openings, sensors, cfg,
    )
    print(f"  {p}")

    p = write_sensors_csv(sensors, args.outdir)
    print(f"  {p}")

    p = write_summary(
        args.outdir, cfg, nodes_x, nodes_y, nodes_z,
        rack_blocks, containment_blocks, tile_zones,
        crac_openings, sensors, flags,
    )
    print(f"  {p}")

    print("\nDone. Review summary.txt for geometry audit.")
    print("Next steps:")
    print("  1. Review geometry.json and cell_flags.npy for correctness")
    print("  2. Import into SCI_FFD to generate .cfd/.dat, or write a converter")
    print("  3. Set up the Modelica Rooms.CFD model referencing the .ffd file")


if __name__ == "__main__":
    main()
