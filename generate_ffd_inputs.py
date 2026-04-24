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
HOT_AISLE_EXTRACTOR = 12  # fluid guide region from contained hot aisle to returns

FLAG_NAMES = {
    FLUID: "fluid", SOLID: "solid", INLET: "inlet", OUTLET: "outlet",
    WALL_ADIABATIC: "wall_adiabatic", WALL_TEMP: "wall_temperature",
    WALL_HEATFLUX: "wall_heatflux", RACK_COLD_FACE: "rack_cold_face",
    RACK_HOT_FACE: "rack_hot_face", TILE_OPENING: "tile_opening",
    CONTAINMENT: "containment_wall", RACK_SOURCE: "rack_device_body",
    HOT_AISLE_EXTRACTOR: "hot_aisle_extractor",
}


def room_z_bounds(cfg):
    """Return the global Z-domain bounds for the case."""
    room = cfg["room"]
    z_min = float(room.get("domain_z_min", -float(room.get("plenum_depth", 0.0))))
    z_max = float(room.get("domain_z_max", room["white_space_height"]))
    return z_min, z_max


def room_z_offset(cfg):
    """Return the shift from global Z to solver-local Z coordinates."""
    z_min, _ = room_z_bounds(cfg)
    return -z_min


def tiles_enabled(cfg):
    """Whether the case uses perforated floor-tile regions."""
    return bool(cfg.get("perforated_tiles", {}).get("enabled", True))


def unit_is_active(unit):
    """Return whether a cooling unit is active in the baseline geometry."""
    return bool(unit.get("active", True))


def row_total_slots(cfg, row):
    """Return the physical rack-slot count for a row."""
    return int(row.get("rack_positions", cfg["rack_defaults"]["racks_per_row"]))


def row_missing_indices(row):
    """Return the configured 1-based missing rack-slot indices for a row."""
    missing = []
    for raw in row.get("missing_rack_indices", []):
        idx = int(raw)
        if idx not in missing:
            missing.append(idx)
    return sorted(missing)


def row_active_indices(cfg, row):
    """Return the active 1-based rack-slot indices for a row."""
    total = row_total_slots(cfg, row)
    missing = set(row_missing_indices(row))
    return [idx for idx in range(1, total + 1) if idx not in missing]


def row_active_rack_count(cfg, row):
    """Return the number of populated racks in a row."""
    return len(row_active_indices(cfg, row))


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
    min_ref_size = min([base_size] + [float(spec.get("min_size", base_size)) for spec in refinement_specs])
    merge_tol = max(min_ref_size * 0.50, 1e-7)

    def coalesce(values):
        merged = []
        for value in sorted(values):
            value = 0.0 if abs(value) < merge_tol else length if abs(value - length) < merge_tol else value
            if not merged:
                merged.append(value)
                continue
            if value - merged[-1] < merge_tol:
                if abs(value - length) < merge_tol:
                    merged[-1] = length
                continue
            merged.append(value)
        return merged

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
    nodes = coalesce(nodes)
    filled = [nodes[0]]
    for i in range(1, len(nodes)):
        gap = nodes[i] - nodes[i - 1]
        if gap > base_size * 1.5:
            n_fill = max(1, int(round(gap / base_size)))
            dx = gap / n_fill
            for j in range(1, n_fill):
                filled.append(nodes[i - 1] + j * dx)
        filled.append(nodes[i])

    return coalesce(filled)


def collect_refinement_points(cfg):
    """
    Gather all coordinates that need mesh refinement, organised by axis.
    Returns dict with keys 'x', 'y', 'z', each a list of refinement specs.
    """
    ref = {"x": [], "y": [], "z": []}
    rack_depth = cfg["rack_defaults"]["rack_depth"]
    rack_height = cfg["rack_defaults"]["rack_height"]
    mesh_cfg = cfg["mesh"]
    row_map = {row["id"]: row for row in cfg["rack_rows"]}

    # Rack faces
    for row in cfg["rack_rows"]:
        oy = row["origin_y"]
        # The row occupies [oy, oy + rack_depth] in Y
        face_lo = oy
        face_hi = oy + rack_depth
        rf = mesh_cfg["refinement"]["rack_faces"]
        ref["y"].append({"centre": face_lo, "extent": rf["depth"], "min_size": rf["min_cell_size"]})
        ref["y"].append({"centre": face_hi, "extent": rf["depth"], "min_size": rf["min_cell_size"]})

    # Hot-aisle interiors and rack spans.  The grid is structured, so these
    # axis-wise refinements deliberately cover the rack/hot-aisle band rather
    # than trying to create local unstructured refinement patches.
    ha_ref = mesh_cfg["refinement"].get("hot_aisles", {})
    ha_min = float(ha_ref.get("min_cell_size", 0.075))
    x_min_cell = float(ha_ref.get("x_min_cell_size", ha_min))
    z_min_cell = float(ha_ref.get("z_min_cell_size", ha_min))
    rack_x_min = min(row["origin_x"] for row in cfg["rack_rows"])
    rack_x_max = max(row["origin_x"] + row["row_length"] for row in cfg["rack_rows"])
    rack_span_margin_x = float(ha_ref.get("x_margin", 0.15))
    ref["x"].append({
        "centre": 0.5 * (rack_x_min + rack_x_max),
        "extent": 0.5 * (rack_x_max - rack_x_min) + rack_span_margin_x,
        "min_size": x_min_cell,
    })
    ref["z"].append({
        "centre": 0.5 * rack_height,
        "extent": 0.5 * rack_height + 0.20,
        "min_size": z_min_cell,
    })
    for aisle in cfg.get("aisles", {}).get("hot_aisles", []):
        try:
            ha_geo = hot_aisle_geometry(cfg, row_map, aisle)
        except ValueError:
            continue
        y_min = ha_geo["y_min"]
        y_max = ha_geo["y_max"]
        ref["y"].append({
            "centre": 0.5 * (y_min + y_max),
            "extent": 0.5 * (y_max - y_min) + 0.05,
            "min_size": ha_min,
        })

    # Tile openings (at Z=0)
    if tiles_enabled(cfg):
        tf = mesh_cfg["refinement"]["tile_openings"]
        ref["z"].append({"centre": 0.0, "extent": tf["depth"], "min_size": tf["min_cell_size"]})

    # Cooling-unit openings
    cf = mesh_cfg["refinement"]["crac_openings"]
    for opening in compute_crac_openings(cfg):
        axis = opening["axis"]
        coord = float(opening["face_coordinate"])
        min_size = float(cf["min_cell_size"])
        depth = float(cf["depth"])
        if axis == "x":
            ref["x"].append({"centre": coord, "extent": depth, "min_size": min_size})
            ref["y"].append({
                "centre": 0.5 * (opening["y_min"] + opening["y_max"]),
                "extent": 0.5 * (opening["y_max"] - opening["y_min"]) + 0.05,
                "min_size": min_size,
            })
            ref["z"].append({
                "centre": 0.5 * (opening["z_min"] + opening["z_max"]),
                "extent": 0.5 * (opening["z_max"] - opening["z_min"]) + 0.05,
                "min_size": min_size,
            })
        elif axis == "y":
            ref["y"].append({"centre": coord, "extent": depth, "min_size": min_size})
            ref["x"].append({
                "centre": 0.5 * (opening["x_min"] + opening["x_max"]),
                "extent": 0.5 * (opening["x_max"] - opening["x_min"]) + 0.05,
                "min_size": min_size,
            })
            ref["z"].append({
                "centre": 0.5 * (opening["z_min"] + opening["z_max"]),
                "extent": 0.5 * (opening["z_max"] - opening["z_min"]) + 0.05,
                "min_size": min_size,
            })
        elif axis == "z":
            ref["z"].append({"centre": coord, "extent": depth, "min_size": min_size})
            ref["x"].append({
                "centre": 0.5 * (opening["x_min"] + opening["x_max"]),
                "extent": 0.5 * (opening["x_max"] - opening["x_min"]) + 0.05,
                "min_size": min_size,
            })
            ref["y"].append({
                "centre": 0.5 * (opening["y_min"] + opening["y_max"]),
                "extent": 0.5 * (opening["y_max"] - opening["y_min"]) + 0.05,
                "min_size": min_size,
            })

    # Plenum Z refinement — resolve stratification and tile jet entrainment
    plenum_depth = float(cfg["room"].get("plenum_depth", 0.0))
    plenum_ref = mesh_cfg["refinement"].get("plenum", {})
    if plenum_ref and plenum_depth > 0.0:
        ref["z"].append({
            "centre": -plenum_depth / 2,
            "extent": plenum_depth / 2 + 0.05,
            "min_size": float(plenum_ref.get("min_cell_size", 0.05)),
        })

    # Overhead space Z refinement — resolve hot plume rise and ceiling-level mixing
    _, white_space_h = room_z_bounds(cfg)
    overhead_ref = mesh_cfg["refinement"].get("overhead_space", {})
    if overhead_ref:
        z_min_oh = float(overhead_ref.get("z_min", 2.0))
        z_max_oh = float(overhead_ref.get("z_max", white_space_h))
        ref["z"].append({
            "centre": 0.5 * (z_min_oh + z_max_oh),
            "extent": 0.5 * (z_max_oh - z_min_oh) + 0.05,
            "min_size": float(overhead_ref.get("min_cell_size", 0.05)),
        })

    # Ceiling return plenum Z refinement — resolve flow into near-ceiling return grilles
    ceiling_ref = mesh_cfg["refinement"].get("ceiling_return", {})
    if ceiling_ref:
        z_min_cr = float(ceiling_ref.get("z_min", 3.2))
        z_max_cr = float(ceiling_ref.get("z_max", white_space_h))
        ref["z"].append({
            "centre": 0.5 * (z_min_cr + z_max_cr),
            "extent": 0.5 * (z_max_cr - z_min_cr) + 0.02,
            "min_size": float(ceiling_ref.get("min_cell_size", 0.04)),
        })

    false_ceiling_z = cfg["room"].get("false_ceiling_base_z")
    if false_ceiling_z is not None:
        ref["z"].append({
            "centre": float(false_ceiling_z),
            "extent": 0.10,
            "min_size": float(ceiling_ref.get("min_cell_size", cf["min_cell_size"])),
        })

    # Cold-aisle Y refinement — resolve supply jet and rack inlet boundary layer
    ca_ref = mesh_cfg["refinement"].get("cold_aisles", {})
    if ca_ref:
        ca_min = float(ca_ref.get("min_cell_size", 0.05))
        ca_depth = float(ca_ref.get("depth", 0.4))
        for row in cfg["rack_rows"]:
            oy = row["origin_y"]
            cf_side = row["cold_face"]
            if cf_side == "-y":
                # Cold aisle is to the south (-Y) of this row's y_min
                ref["y"].append({
                    "centre": oy - ca_depth / 2,
                    "extent": ca_depth / 2 + 0.05,
                    "min_size": ca_min,
                })
            else:
                # Cold aisle is to the north (+Y) of this row's y_max
                y_cold = oy + rack_depth
                ref["y"].append({
                    "centre": y_cold + ca_depth / 2,
                    "extent": ca_depth / 2 + 0.05,
                    "min_size": ca_min,
                })

    return ref


def build_3d_grid(cfg):
    """Build structured grid node arrays for X, Y, Z axes."""
    room = cfg["room"]
    base = cfg["mesh"]["base_cell_size"]
    refs = collect_refinement_points(cfg)

    z_min, z_max = room_z_bounds(cfg)
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
        active_racks = row_active_rack_count(cfg, row)
        total_heat_w = heat_kw * 1000 * active_racks
        cold_face = row["cold_face"]

        # Fan curve: Q_max at free delivery, ΔP_max at shut-off
        fan_curve = {**defaults.get("rack_fan_curve", {}),
                     **row.get("rack_fan_curve", {})}
        q_max_m3s = (fan_curve.get("q_max_m3s_per_kw", 0.059)
                     * heat_kw * active_racks)
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
            "active_rack_count": active_racks,
            "fan_q_max_m3s": round(q_max_m3s, 4),
            "fan_dp_max_pa": dp_max_pa,
            "fan_q_ref_m3s": round(q_ref_m3s, 4),
            "fan_dp_ref_pa": round(dp_ref_pa, 2),
        }
        blocks.append(block)
    return blocks


def compute_individual_racks(cfg):
    """Compute 3D bounding boxes for each individual physical rack (racks_per_row per row).

    Returns one block per physical rack rather than one per row, enabling the
    physics-v1 solver to model per-rack heat and airflow variation instead of
    smearing a whole row into a single source region.
    """
    blocks = []
    defaults = cfg["rack_defaults"]
    depth = defaults["rack_depth"]
    height = defaults["rack_height"]
    for row in cfg["rack_rows"]:
        ox = row["origin_x"]
        oy = row["origin_y"]
        row_len = row["row_length"]
        heat_kw = row.get("heat_per_rack_kw", defaults["default_heat_per_rack_kw"])
        cold_face = row["cold_face"]
        active_indices = row_active_indices(cfg, row)
        total_slots = row_total_slots(cfg, row)

        fan_curve = {**defaults.get("rack_fan_curve", {}), **row.get("rack_fan_curve", {})}
        q_max_m3s_per_kw = fan_curve.get("q_max_m3s_per_kw", 0.059)
        dp_max_pa = fan_curve.get("dp_max_pa", 80.0)
        # Per-rack fan operating point
        q_max_m3s = q_max_m3s_per_kw * heat_kw
        q_ref_m3s = q_max_m3s * 0.5
        dp_ref_pa = dp_max_pa * (1.0 - (q_ref_m3s / q_max_m3s) ** 2)

        rack_w = row_len / total_slots
        for slot_idx in active_indices:
            x_min = ox + (slot_idx - 1) * rack_w
            x_max = ox + slot_idx * rack_w
            block = {
                "id": f"{row['id']}_rack{slot_idx:02d}",
                "type": "rack_device",
                "x_min": x_min,
                "x_max": x_max,
                "y_min": oy,
                "y_max": oy + depth,
                "z_min": 0.0,
                "z_max": height,
                "cold_face": cold_face,
                "total_heat_w": heat_kw * 1000.0,
                "heat_flux_w_m2": heat_kw * 1000.0 / (rack_w * height),
                "fan_q_max_m3s": round(q_max_m3s, 4),
                "fan_dp_max_pa": dp_max_pa,
                "fan_q_ref_m3s": round(q_ref_m3s, 4),
                "fan_dp_ref_pa": round(dp_ref_pa, 2),
            }
            blocks.append(block)
    return blocks


def hot_aisle_geometry(cfg, rack_map, aisle):
    """Return geometric metadata for a hot aisle between rows or a row and wall."""
    rack_depth = float(cfg["rack_defaults"]["rack_depth"])
    rack_height = float(cfg["rack_defaults"]["rack_height"])

    def _row_geom(row):
        if "x_min" in row:
            x_min = float(row["x_min"])
            x_max = float(row["x_max"])
            y_min = float(row["y_min"])
            y_max = float(row["y_max"])
            z_max = float(row.get("z_max", rack_height))
        else:
            x_min = float(row["origin_x"])
            x_max = float(row["origin_x"] + row["row_length"])
            y_min = float(row["origin_y"])
            y_max = float(row["origin_y"] + rack_depth)
            z_max = float(rack_height)
        airflow = float(row.get("airflow_m3s", row.get("fan_q_ref_m3s", 0.0)))
        return x_min, x_max, y_min, y_max, z_max, airflow

    if len(aisle.get("between", [])) == 2:
        r1 = rack_map[aisle["between"][0]]
        r2 = rack_map[aisle["between"][1]]
        r1_x_min, r1_x_max, _, r1_y_max, r1_z_max, r1_airflow = _row_geom(r1)
        r2_x_min, r2_x_max, r2_y_min, _, r2_z_max, r2_airflow = _row_geom(r2)
        return {
            "between": aisle["between"],
            "rows": [r1, r2],
            "x_min": min(r1_x_min, r2_x_min),
            "x_max": max(r1_x_max, r2_x_max),
            "y_min": min(r1_y_max, r2_y_min),
            "y_max": max(r1_y_max, r2_y_min),
            "rack_z_max": max(r1_z_max, r2_z_max),
            "target_flow_m3s": r1_airflow + r2_airflow,
        }

    location = str(aisle.get("location", ""))
    if location.startswith("south_of_"):
        row = rack_map[location.removeprefix("south_of_")]
        x_min, x_max, _, y_max, z_max, airflow = _row_geom(row)
        return {
            "between": [row["id"]],
            "rows": [row],
            "x_min": x_min,
            "x_max": x_max,
            "y_min": y_max,
            "y_max": float(cfg["room"]["length_y"]),
            "rack_z_max": z_max,
            "target_flow_m3s": airflow,
        }
    if location.startswith("north_of_"):
        row = rack_map[location.removeprefix("north_of_")]
        x_min, x_max, y_min, _, z_max, airflow = _row_geom(row)
        return {
            "between": [row["id"]],
            "rows": [row],
            "x_min": x_min,
            "x_max": x_max,
            "y_min": 0.0,
            "y_max": y_min,
            "rack_z_max": z_max,
            "target_flow_m3s": airflow,
        }
    raise ValueError(f"Unsupported hot aisle definition: {aisle}")


def compute_containment_blocks(cfg, rack_blocks, hot_aisle_extractors=None):
    """
    Compute thin solid blocks for hot aisle containment.
    The containment encloses the top and the two short ends of each hot aisle.
    """
    blocks = []
    rack_map = {b["id"]: b for b in rack_blocks}
    row_cfg_map = {row["id"]: row for row in cfg["rack_rows"]}
    extractor_map = {
        item["hot_aisle_id"]: item
        for item in (hot_aisle_extractors or [])
    }
    wall_thickness = 0.05  # m, thin wall for glass enclosure
    room_x_max = float(cfg["room"]["length_x"])

    def snapped_x_min(row):
        return float(row.get("body_bounds", {}).get("x_min", row["x_min"]))

    def snapped_x_max(row):
        return float(row.get("body_bounds", {}).get("x_max", row["x_max"]))

    def contiguous_ranges(indices):
        if not indices:
            return []
        ranges = []
        start = prev = indices[0]
        for idx in indices[1:]:
            if idx == prev + 1:
                prev = idx
                continue
            ranges.append((start, prev))
            start = prev = idx
        ranges.append((start, prev))
        return ranges

    def add_missing_rack_gap_panels(ha, ha_geo, ha_z_max):
        """Close missing rack bays on the hot-aisle boundary with glass panels."""
        tol = 1e-6
        for row in ha_geo["rows"]:
            row_cfg = row_cfg_map.get(row["id"])
            if row_cfg is None:
                continue
            missing = row_missing_indices(row_cfg)
            if not missing:
                continue

            flow_dir = direction_from_cold_face(row["cold_face"])
            total_slots = row_total_slots(cfg, row_cfg)
            slot_w = float(row_cfg["row_length"]) / total_slots
            x0 = float(row_cfg["origin_x"])

            panel = None
            if abs(flow_dir[1]) > 0.5:
                if flow_dir[1] > 0:
                    hot_boundary = float(row["y_max"])
                    if (
                        abs(hot_boundary - ha_geo["y_min"]) > tol and
                        abs(hot_boundary - ha_geo["y_max"]) > tol
                    ):
                        continue
                    panel = {
                        "y_min": hot_boundary - wall_thickness,
                        "y_max": hot_boundary,
                    }
                else:
                    hot_boundary = float(row["y_min"])
                    if (
                        abs(hot_boundary - ha_geo["y_min"]) > tol and
                        abs(hot_boundary - ha_geo["y_max"]) > tol
                    ):
                        continue
                    panel = {
                        "y_min": hot_boundary,
                        "y_max": hot_boundary + wall_thickness,
                    }
            elif abs(flow_dir[0]) > 0.5:
                if flow_dir[0] > 0:
                    hot_boundary = float(row["x_max"])
                    panel = {
                        "x_min": hot_boundary - wall_thickness,
                        "x_max": hot_boundary,
                    }
                else:
                    hot_boundary = float(row["x_min"])
                    panel = {
                        "x_min": hot_boundary,
                        "x_max": hot_boundary + wall_thickness,
                    }
            else:
                continue

            for first, last in contiguous_ranges(missing):
                span_x_min = x0 + (first - 1) * slot_w
                span_x_max = x0 + last * slot_w
                suffix = f"gap{first:02d}" if first == last else f"gap{first:02d}_{last:02d}"
                block = {
                    "id": f"{ha['id']}_{row['id']}_{suffix}",
                    "type": "containment",
                    "subtype": "missing_rack_gap_panel",
                    "row_id": row["id"],
                    "x_min": span_x_min,
                    "x_max": span_x_max,
                    "y_min": float(row["y_min"]),
                    "y_max": float(row["y_max"]),
                    "z_min": 0.0,
                    "z_max": ha_z_max,
                }
                block.update(panel)
                blocks.append(block)

    for ha in cfg["aisles"]["hot_aisles"]:
        if not ha.get("containment", False):
            continue

        ha_geo = hot_aisle_geometry(cfg, rack_map, ha)
        ha_y_min = ha_geo["y_min"]
        ha_y_max = ha_geo["y_max"]
        ha_x_min = ha_geo["x_min"]
        ha_x_max = ha_geo["x_max"]
        rack_z_max = ha_geo["rack_z_max"]
        ha_z_max = float(ha.get("containment_top_z", rack_z_max))
        west_edge = min(snapped_x_min(row) for row in ha_geo["rows"])
        east_edge = max(snapped_x_max(row) for row in ha_geo["rows"])
        wall_x_min = max(0.0, west_edge - wall_thickness)
        wall_x_max = west_edge
        east_wall_x_min = east_edge
        east_wall_x_max = min(room_x_max, east_edge + wall_thickness)

        # End wall (west end)
        blocks.append({
            "id": f"{ha['id']}_end_west",
            "type": "containment",
            "x_min": wall_x_min,
            "x_max": wall_x_max,
            "y_min": ha_y_min,
            "y_max": ha_y_max,
            "z_min": 0.0,
            "z_max": ha_z_max,
        })
        # End wall (east end)
        blocks.append({
            "id": f"{ha['id']}_end_east",
            "type": "containment",
            "x_min": east_wall_x_min,
            "x_max": east_wall_x_max,
            "y_min": ha_y_min,
            "y_max": ha_y_max,
            "z_min": 0.0,
            "z_max": ha_z_max,
        })

        if ha_z_max > rack_z_max + 1e-9:
            blocks.append({
                "id": f"{ha['id']}_side_north",
                "type": "containment",
                "x_min": ha_x_min,
                "x_max": ha_x_max,
                "y_min": ha_y_min - wall_thickness,
                "y_max": ha_y_min,
                "z_min": rack_z_max,
                "z_max": ha_z_max,
            })
            blocks.append({
                "id": f"{ha['id']}_side_south",
                "type": "containment",
                "x_min": ha_x_min,
                "x_max": ha_x_max,
                "y_min": ha_y_max,
                "y_max": ha_y_max + wall_thickness,
                "z_min": rack_z_max,
                "z_max": ha_z_max,
            })

        add_missing_rack_gap_panels(ha, ha_geo, ha_z_max)

        if ha.get("roof_panel", True):
            # Roof panel, split around an extractor slot when physics-v1 creates one.
            extractor = extractor_map.get(ha["id"])
            if extractor is None:
                roof_segments = [(ha_x_min, ha_x_max, "roof")]
            else:
                opening = extractor["opening_bounds"]
                roof_segments = [
                    (ha_x_min, opening["x_min"], "roof_west"),
                    (opening["x_max"], ha_x_max, "roof_east"),
                ]

            for x0, x1, suffix in roof_segments:
                if x1 - x0 <= 1e-9:
                    continue
                blocks.append({
                    "id": f"{ha['id']}_{suffix}",
                    "type": "containment",
                    "x_min": x0,
                    "x_max": x1,
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
    if not tiles_enabled(cfg):
        return []

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


def direction_from_cold_face(cold_face):
    """Return cold-to-hot flow direction for a rack source region."""
    mapping = {
        "-x": [1.0, 0.0, 0.0],
        "+x": [-1.0, 0.0, 0.0],
        "-y": [0.0, 1.0, 0.0],
        "+y": [0.0, -1.0, 0.0],
        "-z": [0.0, 0.0, 1.0],
        "+z": [0.0, 0.0, -1.0],
    }
    if cold_face not in mapping:
        raise ValueError(f"Unsupported rack cold_face: {cold_face!r}")
    return mapping[cold_face]


def cell_centres(nodes):
    return [(nodes[i] + nodes[i + 1]) / 2.0 for i in range(len(nodes) - 1)]


def centre_indices_between(nodes, lo, hi):
    indices = []
    for i, c in enumerate(cell_centres(nodes)):
        if lo <= c <= hi:
            indices.append(i)
    return indices


def bounds_from_indices(nodes_x, nodes_y, nodes_z, ix, iy, iz):
    if not ix or not iy or not iz:
        raise ValueError("Cannot build bounds from an empty cell-index selection.")
    return {
        "x_min": nodes_x[min(ix)],
        "x_max": nodes_x[max(ix) + 1],
        "y_min": nodes_y[min(iy)],
        "y_max": nodes_y[max(iy) + 1],
        "z_min": nodes_z[min(iz)],
        "z_max": nodes_z[max(iz) + 1],
    }


def measure_span(nodes, indices):
    if not indices:
        return 0.0
    return nodes[max(indices) + 1] - nodes[min(indices)]


def assign_rack_device_regions(
    rack_blocks,
    nodes_x,
    nodes_y,
    nodes_z,
    hot_face_depth_m=0.25,
    plume_depth_m=0.60,
):
    """Attach snapped body/cold/hot face bounds to each rack row.

    Face regions are chosen from actual adjacent cell layers so coarse meshes
    either get a resolvable one-cell interface or fail early.
    """
    nx = len(nodes_x) - 1
    ny = len(nodes_y) - 1
    nz = len(nodes_z) - 1

    body_sets = {}
    for rack in rack_blocks:
        body_ix = centre_indices_between(nodes_x, rack["x_min"], rack["x_max"])
        body_iy = centre_indices_between(nodes_y, rack["y_min"], rack["y_max"])
        body_iz = centre_indices_between(nodes_z, rack["z_min"], rack["z_max"])
        if not body_ix or not body_iy or not body_iz:
            raise ValueError(f"Rack {rack['id']} is not resolved by the mesh.")
        body_sets[rack["id"]] = (body_ix, body_iy, body_iz)

    def overlaps_other_rack(rack_id, axis, candidate_idx, ix, iy, iz):
        ix_set = set(ix)
        iy_set = set(iy)
        iz_set = set(iz)
        for other_id, (other_ix, other_iy, other_iz) in body_sets.items():
            if other_id == rack_id:
                continue
            if axis == 0:
                if candidate_idx in other_ix and iy_set.intersection(other_iy) and iz_set.intersection(other_iz):
                    return True
            elif axis == 1:
                if candidate_idx in other_iy and ix_set.intersection(other_ix) and iz_set.intersection(other_iz):
                    return True
            else:
                if candidate_idx in other_iz and ix_set.intersection(other_ix) and iy_set.intersection(other_iy):
                    return True
        return False

    def adjacent_layer(body_indices, sign, max_index):
        idx = max(body_indices) + 1 if sign > 0 else min(body_indices) - 1
        if idx < 0 or idx >= max_index:
            return []
        return [idx]

    def exhaust_slab(rack_id, nodes, body_indices, sign, max_index, axis, ix, iy, iz):
        """Select a finite outlet slab in adjacent aisle cells.

        The source remains a rack hot-face control volume, but using a snapped
        finite exhaust depth makes the outlet robust on coarse meshes and avoids
        relying on a zero-thickness one-cell strip to seed the transported scalar.
        """
        start = max(body_indices) + 1 if sign > 0 else min(body_indices) - 1
        step = 1 if sign > 0 else -1
        if start < 0 or start >= max_index:
            return []

        selected = []
        idx = start
        while 0 <= idx < max_index:
            if overlaps_other_rack(rack_id, axis, idx, ix, iy, iz):
                break
            selected.append(idx)
            if measure_span(nodes, selected) >= max(hot_face_depth_m, 1e-9):
                break
            idx += step
        return sorted(selected)

    def downstream_slab(rack_id, nodes, start_indices, sign, max_index, axis, ix, iy, iz, depth_m):
        if not start_indices:
            return []
        start = max(start_indices) + 1 if sign > 0 else min(start_indices) - 1
        step = 1 if sign > 0 else -1
        selected = []
        idx = start
        while 0 <= idx < max_index:
            if overlaps_other_rack(rack_id, axis, idx, ix, iy, iz):
                break
            selected.append(idx)
            if measure_span(nodes, selected) >= max(depth_m, 1e-9):
                break
            idx += step
        return sorted(selected)

    for rack in rack_blocks:
        body_ix, body_iy, body_iz = body_sets[rack["id"]]

        flow_dir = direction_from_cold_face(rack["cold_face"])
        cold_ix, cold_iy, cold_iz = list(body_ix), list(body_iy), list(body_iz)
        hot_ix, hot_iy, hot_iz = list(body_ix), list(body_iy), list(body_iz)

        if abs(flow_dir[0]) > 0.5:
            if flow_dir[0] > 0:
                cold_ix = adjacent_layer(body_ix, -1, nx)
                hot_ix = exhaust_slab(rack["id"], nodes_x, body_ix, 1, nx, 0, body_ix, body_iy, body_iz)
                plume_ix = downstream_slab(rack["id"], nodes_x, hot_ix, 1, nx, 0, body_ix, body_iy, body_iz, plume_depth_m)
            else:
                cold_ix = adjacent_layer(body_ix, 1, nx)
                hot_ix = exhaust_slab(rack["id"], nodes_x, body_ix, -1, nx, 0, body_ix, body_iy, body_iz)
                plume_ix = downstream_slab(rack["id"], nodes_x, hot_ix, -1, nx, 0, body_ix, body_iy, body_iz, plume_depth_m)
            plume_iy, plume_iz = list(body_iy), list(body_iz)
        elif abs(flow_dir[1]) > 0.5:
            if flow_dir[1] > 0:
                cold_iy = adjacent_layer(body_iy, -1, ny)
                hot_iy = exhaust_slab(rack["id"], nodes_y, body_iy, 1, ny, 1, body_ix, body_iy, body_iz)
                plume_iy = downstream_slab(rack["id"], nodes_y, hot_iy, 1, ny, 1, body_ix, body_iy, body_iz, plume_depth_m)
            else:
                cold_iy = adjacent_layer(body_iy, 1, ny)
                hot_iy = exhaust_slab(rack["id"], nodes_y, body_iy, -1, ny, 1, body_ix, body_iy, body_iz)
                plume_iy = downstream_slab(rack["id"], nodes_y, hot_iy, -1, ny, 1, body_ix, body_iy, body_iz, plume_depth_m)
            plume_ix, plume_iz = list(body_ix), list(body_iz)
        else:
            if flow_dir[2] > 0:
                cold_iz = adjacent_layer(body_iz, -1, nz)
                hot_iz = exhaust_slab(rack["id"], nodes_z, body_iz, 1, nz, 2, body_ix, body_iy, body_iz)
                plume_iz = downstream_slab(rack["id"], nodes_z, hot_iz, 1, nz, 2, body_ix, body_iy, body_iz, plume_depth_m)
            else:
                cold_iz = adjacent_layer(body_iz, 1, nz)
                hot_iz = exhaust_slab(rack["id"], nodes_z, body_iz, -1, nz, 2, body_ix, body_iy, body_iz)
                plume_iz = downstream_slab(rack["id"], nodes_z, hot_iz, -1, nz, 2, body_ix, body_iy, body_iz, plume_depth_m)
            plume_ix, plume_iy = list(body_ix), list(body_iy)

        if (
            not cold_ix or not cold_iy or not cold_iz or
            not hot_ix or not hot_iy or not hot_iz or
            min(cold_ix) < 0 or max(cold_ix) >= nx or
            min(hot_ix) < 0 or max(hot_ix) >= nx or
            min(cold_iy) < 0 or max(cold_iy) >= ny or
            min(hot_iy) < 0 or max(hot_iy) >= ny or
            min(cold_iz) < 0 or max(cold_iz) >= nz or
            min(hot_iz) < 0 or max(hot_iz) >= nz
        ):
            raise ValueError(f"Rack {rack['id']} cold/hot face lies outside the mesh.")

        face_area = (
            measure_span(nodes_x, body_ix) * measure_span(nodes_z, body_iz)
            if abs(flow_dir[1]) > 0.5 else
            measure_span(nodes_y, body_iy) * measure_span(nodes_z, body_iz)
            if abs(flow_dir[0]) > 0.5 else
            measure_span(nodes_x, body_ix) * measure_span(nodes_y, body_iy)
        )
        airflow = max(float(rack["fan_q_ref_m3s"]), 0.05)
        if face_area <= 1e-9:
            raise ValueError(f"Rack {rack['id']} face area is zero after mesh snapping.")

        rack["body_bounds"] = bounds_from_indices(nodes_x, nodes_y, nodes_z, body_ix, body_iy, body_iz)
        rack["cold_face_bounds"] = bounds_from_indices(nodes_x, nodes_y, nodes_z, cold_ix, cold_iy, cold_iz)
        rack["hot_face_bounds"] = bounds_from_indices(nodes_x, nodes_y, nodes_z, hot_ix, hot_iy, hot_iz)
        if not plume_ix or not plume_iy or not plume_iz:
            plume_ix, plume_iy, plume_iz = list(hot_ix), list(hot_iy), list(hot_iz)
        rack["plume_bounds"] = bounds_from_indices(nodes_x, nodes_y, nodes_z, plume_ix, plume_iy, plume_iz)
        rack["flow_direction"] = flow_dir
        rack["airflow_m3s"] = airflow
        rack["face_area_m2"] = face_area
        rack["target_velocity_m_s"] = min(max(airflow / face_area, 0.01), 3.0)
        rack["hot_face_depth_m"] = measure_span(
            nodes_x if abs(flow_dir[0]) > 0.5 else nodes_y if abs(flow_dir[1]) > 0.5 else nodes_z,
            hot_ix if abs(flow_dir[0]) > 0.5 else hot_iy if abs(flow_dir[1]) > 0.5 else hot_iz,
        )
        rack["hot_face_volume_m3"] = face_area * max(rack["hot_face_depth_m"], 1e-6)
        rack["plume_depth_m"] = measure_span(
            nodes_x if abs(flow_dir[0]) > 0.5 else nodes_y if abs(flow_dir[1]) > 0.5 else nodes_z,
            plume_ix if abs(flow_dir[0]) > 0.5 else plume_iy if abs(flow_dir[1]) > 0.5 else plume_iz,
        )
        rack["momentum_damping_s_inv"] = 15.0
        rack["thermal_damping_s_inv"] = 5.0
        rack["plume_mixing_s_inv"] = 1.5
        rack["max_source_delta_t_per_step_c"] = 2.0
        rack["max_delta_t_c"] = 60.0
        rack["body_cell_count"] = len(body_ix) * len(body_iy) * len(body_iz)
        rack["cold_face_cell_count"] = len(cold_ix) * len(cold_iy) * len(cold_iz)
        rack["hot_face_cell_count"] = len(hot_ix) * len(hot_iy) * len(hot_iz)
        rack["plume_cell_count"] = len(plume_ix) * len(plume_iy) * len(plume_iz)

    return rack_blocks


def _nearest_return_pair(crac_openings, y_centre):
    returns = [item for item in crac_openings if item["type"] == "crac_return"]
    if not returns:
        raise ValueError("No CRAC return openings are available for hot-aisle extractors.")
    grouped = {}
    for opening in returns:
        cy = 0.5 * (opening["y_min"] + opening["y_max"])
        grouped.setdefault(round(cy, 6), []).append(opening)
    nearest_y = min(grouped, key=lambda value: abs(value - y_centre))
    return grouped[nearest_y]


def _normalise(vec):
    length = math.sqrt(sum(v * v for v in vec))
    if length <= 1e-9:
        return [0.0, 0.0, 1.0]
    return [v / length for v in vec]


def compute_hot_aisle_extractors(cfg, rack_blocks, crac_openings, nodes_x, nodes_y, nodes_z):
    """Create snapped fluid guide regions that vent contained hot aisles to returns."""
    extractors = []
    rack_map = {b["id"]: b for b in rack_blocks}
    extractor_cfg = cfg.get("hot_aisle_extractors", {})
    slot_velocity = float(extractor_cfg.get("slot_velocity_m_s", 2.0))
    max_velocity = float(extractor_cfg.get("max_velocity_m_s", 3.0))
    capture_depth = float(extractor_cfg.get("capture_depth_below_top_m", 0.30))
    z_centres = cell_centres(nodes_z)

    for ha in cfg["aisles"]["hot_aisles"]:
        if not ha.get("containment", False):
            continue
        ha_geo = hot_aisle_geometry(cfg, rack_map, ha)
        y_min = ha_geo["y_min"]
        y_max = ha_geo["y_max"]
        x_min = ha_geo["x_min"]
        x_max = ha_geo["x_max"]
        z_top = float(ha.get("containment_top_z", ha_geo["rack_z_max"]))
        y_centre = 0.5 * (y_min + y_max)
        x_centre = 0.5 * (x_min + x_max)

        target_flow = ha_geo["target_flow_m3s"]
        required_area = target_flow / slot_velocity
        y_indices = centre_indices_between(nodes_y, y_min, y_max)
        if not y_indices:
            raise ValueError(f"Hot aisle {ha['id']} has no resolved Y cells.")
        y_span = measure_span(nodes_y, y_indices)
        target_x_width = min(x_max - x_min, max(required_area / max(y_span, 1e-9), 0.15))
        x_cells = [
            (abs(0.5 * (nodes_x[i] + nodes_x[i + 1]) - x_centre), i)
            for i in centre_indices_between(nodes_x, x_min, x_max)
        ]
        if not x_cells:
            raise ValueError(f"Hot aisle {ha['id']} has no resolved X cells.")
        selected_x = []
        for _, idx in sorted(x_cells):
            selected_x.append(idx)
            selected_x = list(range(min(selected_x), max(selected_x) + 1))
            if measure_span(nodes_x, selected_x) >= target_x_width:
                break

        z_indices = [
            i for i, c in enumerate(z_centres)
            if z_top - capture_depth <= c <= cfg["room"]["white_space_height"]
        ]
        if not z_indices:
            k_top = find_cell_index(nodes_z, max(nodes_z[0], z_top - 1e-6))
            if k_top is None:
                raise ValueError(f"Hot aisle {ha['id']} extractor has no resolved Z cells.")
            z_indices = [k_top]

        connected = _nearest_return_pair(crac_openings, y_centre)
        return_ids = [item["id"] for item in connected]
        return_capacity = sum(float(item.get("rated_flow_m3s", 0.0)) for item in connected)
        if return_capacity > 0 and target_flow > return_capacity:
            target_flow = return_capacity
        actual_area = measure_span(nodes_x, selected_x) * y_span
        target_velocity = min(max(target_flow / max(actual_area, 1e-9), 0.1), max_velocity)

        direction = [0.0, 0.0, 1.0]  # vertical upward: models buoyant rise through containment roof slot

        opening_bounds = bounds_from_indices(nodes_x, nodes_y, nodes_z, selected_x, y_indices, [z_indices[0]])
        opening_bounds["axis"] = "z"
        opening_bounds["face_coordinate"] = z_top
        opening_bounds["face_side"] = "positive"
        opening_bounds["z_min"] = z_top
        opening_bounds["z_max"] = z_top + 0.05
        bounds = bounds_from_indices(nodes_x, nodes_y, nodes_z, selected_x, y_indices, z_indices)
        extractors.append({
            "id": f"{ha['id']}_extractor",
            "type": "hot_aisle_extractor",
            "hot_aisle_id": ha["id"],
            "between": ha_geo["between"],
            "bounds": bounds,
            "opening_bounds": opening_bounds,
            "connected_return_ids": return_ids,
            "target_flow_m3s": target_flow,
            "target_velocity_m_s": target_velocity,
            "direction": direction,
            "max_velocity_m_s": max_velocity,
            "damping_s_inv": 3.0,
            "slot_area_m2": actual_area,
        })

    return extractors


def compute_crac_openings(cfg):
    """Compute cooling-unit supply and return boundary faces."""
    room = cfg["room"]
    openings = []

    for crac in cfg["crac_units"]:
        if str(crac.get("topology", "")).lower() == "direct_room_supply":
            wall = crac.get("wall", "west")
            if wall != "west":
                raise ValueError(f"Unsupported direct_room_supply wall: {wall!r}")

            origin_y = float(crac["origin_y"])
            width_y = float(crac["width_y"])
            depth_x = float(crac["depth_x"])
            unit_height = float(crac["unit_height_z"])
            cavity_base = float(crac["return_cavity_base_z"])
            active = unit_is_active(crac)

            if active:
                openings.append({
                    "id": f"{crac['id']}_supply",
                    "type": "crac_supply",
                    "axis": "x",
                    "face_coordinate": depth_x,
                    "face_side": "positive",
                    "normal": [1.0, 0.0, 0.0],
                    "x_min": depth_x,
                    "x_max": depth_x,
                    "y_min": origin_y,
                    "y_max": origin_y + width_y,
                    "z_min": 0.0,
                    "z_max": unit_height,
                    "rated_flow_m3s": crac["rated_flow_m3s"],
                    "supply_temp_c": crac["supply_temp_c"],
                })

                openings.append({
                    "id": f"{crac['id']}_return",
                    "type": "crac_return",
                    "axis": "z",
                    "face_coordinate": cavity_base,
                    "face_side": "positive",
                    "normal": [0.0, 0.0, -1.0],
                    "x_min": 0.0,
                    "x_max": depth_x,
                    "y_min": origin_y,
                    "y_max": origin_y + width_y,
                    "z_min": cavity_base,
                    "z_max": cavity_base,
                    "rated_flow_m3s": crac["rated_flow_m3s"],
                })
            continue

        wall = crac["wall"]
        dy = crac["discharge_y"]
        sw = crac["supply_opening_width"]
        sh = crac["supply_opening_height"]
        rw = crac["return_grille_width"]
        rh = crac["return_grille_height"]
        rz = crac["return_grille_z_centre"]
        ry = crac["return_grille_y"]

        x_face = 0.0 if wall == "west" else room["length_x"]
        normal = [1.0, 0.0, 0.0] if wall == "west" else [-1.0, 0.0, 0.0]

        openings.append({
            "id": f"{crac['id']}_supply",
            "type": "crac_supply",
            "axis": "x",
            "face_coordinate": x_face,
            "face_side": "positive" if wall == "west" else "negative",
            "normal": normal,
            "x_min": x_face,
            "x_max": x_face,
            "y_min": dy - sw / 2,
            "y_max": dy + sw / 2,
            "z_min": -float(room.get("plenum_depth", 0.0)),
            "z_max": -float(room.get("plenum_depth", 0.0)) + sh,
            "rated_flow_m3s": crac["rated_flow_m3s"],
            "supply_temp_c": crac["supply_temp_c"],
        })

        openings.append({
            "id": f"{crac['id']}_return",
            "type": "crac_return",
            "axis": "x",
            "face_coordinate": x_face,
            "face_side": "positive" if wall == "west" else "negative",
            "normal": [-normal[0], 0.0, 0.0],
            "x_min": x_face,
            "x_max": x_face,
            "y_min": ry - rw / 2,
            "y_max": ry + rw / 2,
            "z_min": rz - rh / 2,
            "z_max": rz + rh / 2,
            "rated_flow_m3s": crac["rated_flow_m3s"],
        })

    return openings


def compute_cooling_equipment_blocks(cfg):
    """Compute solid blocks representing FWU bodies and return ducts."""
    blocks = []
    for unit in cfg["crac_units"]:
        if str(unit.get("topology", "")).lower() != "direct_room_supply":
            continue
        wall = unit.get("wall", "west")
        if wall != "west":
            raise ValueError(f"Unsupported direct_room_supply wall: {wall!r}")
        origin_y = float(unit["origin_y"])
        width_y = float(unit["width_y"])
        depth_x = float(unit["depth_x"])
        unit_height = float(unit["unit_height_z"])
        cavity_base = float(unit["return_cavity_base_z"])
        blocks.append({
            "id": f"{unit['id']}_body",
            "type": "cooling_unit_body",
            "x_min": 0.0,
            "x_max": depth_x,
            "y_min": origin_y,
            "y_max": origin_y + width_y,
            "z_min": 0.0,
            "z_max": unit_height,
        })
        if cavity_base > unit_height + 1e-9:
            blocks.append({
                "id": f"{unit['id']}_duct",
                "type": "cooling_unit_duct",
                "x_min": 0.0,
                "x_max": depth_x,
                "y_min": origin_y,
                "y_max": origin_y + width_y,
                "z_min": unit_height,
                "z_max": cavity_base,
            })
    return blocks


def compute_false_ceiling_blocks(cfg, slab_openings=None):
    """Compute solid false-ceiling slabs with rectangular cut-outs."""
    base_z = cfg["room"].get("false_ceiling_base_z")
    if base_z is None:
        return []

    thickness = float(cfg["room"].get("false_ceiling_thickness", 0.05))
    room = cfg["room"]
    openings = []
    for opening in slab_openings or []:
        if opening.get("axis") != "z":
            continue
        if abs(float(opening["face_coordinate"]) - float(base_z)) > 1e-6:
            continue
        openings.append({
            "x_min": float(opening["x_min"]),
            "x_max": float(opening["x_max"]),
            "y_min": float(opening["y_min"]),
            "y_max": float(opening["y_max"]),
        })

    x_coords = [0.0, float(room["length_x"])]
    y_coords = [0.0, float(room["length_y"])]
    for opening in openings:
        x_coords.extend([opening["x_min"], opening["x_max"]])
        y_coords.extend([opening["y_min"], opening["y_max"]])

    x_coords = sorted(set(round(value, 9) for value in x_coords))
    y_coords = sorted(set(round(value, 9) for value in y_coords))
    blocks = []
    for ix in range(len(x_coords) - 1):
        x0 = x_coords[ix]
        x1 = x_coords[ix + 1]
        if x1 - x0 <= 1e-9:
            continue
        for iy in range(len(y_coords) - 1):
            y0 = y_coords[iy]
            y1 = y_coords[iy + 1]
            if y1 - y0 <= 1e-9:
                continue
            cx = 0.5 * (x0 + x1)
            cy = 0.5 * (y0 + y1)
            covered = any(
                opening["x_min"] <= cx <= opening["x_max"] and
                opening["y_min"] <= cy <= opening["y_max"]
                for opening in openings
            )
            if covered:
                continue
            blocks.append({
                "id": f"false_ceiling_{ix:02d}_{iy:02d}",
                "type": "false_ceiling",
                "x_min": x0,
                "x_max": x1,
                "y_min": y0,
                "y_max": y1,
                "z_min": float(base_z),
                "z_max": float(base_z) + thickness,
            })
    return blocks


def compute_sensors(cfg, rack_blocks):
    """Generate virtual sensor locations.

    Expects individual rack blocks (one per physical rack) rather than row-level
    blocks.  Each block produces one sensor cluster at the rack X-centre.
    """
    sensors = []
    heights = cfg["sensors"]["rack_inlet_heights"]
    offset = cfg["sensors"]["rack_inlet_offset"]

    for rb in rack_blocks:
        cf = rb["cold_face"]
        x_centre = 0.5 * (rb["x_min"] + rb["x_max"])
        for hi, h in enumerate(heights):
            if cf == "-y":
                y_sensor = rb["y_min"] - offset
            else:
                y_sensor = rb["y_max"] + offset
            sensors.append({
                "id": f"{rb['id']}_h{hi + 1}",
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
    tol = 1e-9

    for i in range(nx):
        if nodes_x[i + 1] <= block["x_min"] + tol or nodes_x[i] >= block["x_max"] - tol:
            continue
        for j in range(ny):
            if nodes_y[j + 1] <= block["y_min"] + tol or nodes_y[j] >= block["y_max"] - tol:
                continue
            for k in range(nz):
                if nodes_z[k + 1] <= block["z_min"] + tol or nodes_z[k] >= block["z_max"] - tol:
                    continue
                flags[i, j, k] = flag_value


def generate_cell_flags(cfg, nodes_x, nodes_y, nodes_z,
                        rack_blocks, containment_blocks, tile_zones,
                        hot_aisle_extractors=None, solid_blocks=None):
    """
    Create 3D flag array for all cells.
    Convention: flags[i,j,k] where i=X, j=Y, k=Z.
    """
    nx = len(nodes_x) - 1
    ny = len(nodes_y) - 1
    nz = len(nodes_z) - 1

    flags = np.zeros((nx, ny, nz), dtype=np.int32)

    # Mark boundary walls first so any explicit internal geometry that touches
    # a boundary can overwrite the wall label and remain solid/fluid as needed.
    for i in range(nx):
        for j in range(ny):
            flags[i, j, 0] = WALL_ADIABATIC
    for i in range(nx):
        for j in range(ny):
            flags[i, j, nz - 1] = WALL_ADIABATIC
    for j in range(ny):
        for k in range(nz):
            flags[0, j, k] = WALL_ADIABATIC
            flags[nx - 1, j, k] = WALL_ADIABATIC
    for i in range(nx):
        for k in range(nz):
            flags[i, 0, k] = WALL_ADIABATIC
            flags[i, ny - 1, k] = WALL_ADIABATIC

    # Mark rack device regions as fluid source cells.  The body, cold-face,
    # and hot-face markers are semantic CellType values only; .dat keeps them
    # fluid so the OpenCL rack-device kernels can drive flow and temperature.
    for rb in rack_blocks:
        flag_block(flags, nodes_x, nodes_y, nodes_z, rb.get("body_bounds", rb), RACK_SOURCE)
        if "cold_face_bounds" in rb:
            flag_block(flags, nodes_x, nodes_y, nodes_z, rb["cold_face_bounds"], RACK_COLD_FACE)
        if "hot_face_bounds" in rb:
            flag_block(flags, nodes_x, nodes_y, nodes_z, rb["hot_face_bounds"], RACK_HOT_FACE)

    # Mark containment walls as solid.  Use overlap-based flagging so that
    # walls thinner than one cell (0.05 m glass on 0.15 m mesh) still capture
    # the cell they intersect rather than being silently dropped.
    for cb in containment_blocks:
        flag_block_overlap(flags, nodes_x, nodes_y, nodes_z, cb, CONTAINMENT)

    for block in solid_blocks or []:
        flag_block_overlap(flags, nodes_x, nodes_y, nodes_z, block, SOLID)

    for extractor in hot_aisle_extractors or []:
        flag_block(flags, nodes_x, nodes_y, nodes_z, extractor["bounds"], HOT_AISLE_EXTRACTOR)

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
        f"prob.chen_a 0.11000",
        f"prob.Prt 0.9",
        f"prob.Temp_Buoyancy {ffd['initial_temp_c']}",
        f"mytime.t_steady {max(float(ffd['sync_interval']), float(ffd['time_step']))}",
        f"solv.solver GS",
        f"solv.check_residual 1",
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
                        tile_zones, crac_openings, sensors, cfg,
                        hot_aisle_extractors=None, solid_blocks=None):
    """Write complete geometry description to JSON."""
    geom = {
        "room": cfg["room"],
        "rack_blocks": rack_blocks,
        "containment_blocks": containment_blocks,
        "solid_blocks": solid_blocks or [],
        "hot_aisle_extractors": hot_aisle_extractors or [],
        "tile_zones": tile_zones,
        "crac_openings": crac_openings,
        "sensors": sensors,
        "flag_codes": {str(k): v for k, v in FLAG_NAMES.items()},
    }
    path = os.path.join(outdir, "geometry.json")
    with open(path, "w") as f:
        json.dump(geom, f, indent=2, default=str)
    return path


def _z_shift_bounds(bounds_dict, dz):
    """Return a copy of a bounds dict with z_min and z_max shifted by dz."""
    b = dict(bounds_dict)
    b["z_min"] = b["z_min"] + dz
    b["z_max"] = b["z_max"] + dz
    return b


def write_sources_json(outdir, rack_blocks, tile_zones, cfg, hot_aisle_extractors=None):
    """Write physics-v1 region metadata consumed by the native standalone solver.

    Bounds are written in solver-local Z coordinates where Z=0 is the plenum
    floor (bottom of the FFD domain).  The generator works in global coordinates
    where Z=0 is the raised floor, so every Z value is shifted by +plenum_depth
    before writing so the OpenCL kernels address the correct cells.
    """
    fluid = cfg["fluid"]
    dz = room_z_offset(cfg)  # global → solver-local Z offset
    rack_sources = []
    for rack in rack_blocks:
        total_heat_w = float(rack["total_heat_w"])
        rack_sources.append({
            "id": rack["id"],
            "type": "rack_device_heat_exchanger",
            "body_bounds": _z_shift_bounds(rack["body_bounds"], dz),
            "cold_face_bounds": _z_shift_bounds(rack["cold_face_bounds"], dz),
            "hot_face_bounds": _z_shift_bounds(rack["hot_face_bounds"], dz),
            "plume_bounds": _z_shift_bounds(rack["plume_bounds"], dz),
            "cold_face": rack["cold_face"],
            "flow_direction": rack["flow_direction"],
            "total_heat_w": total_heat_w,
            "airflow_m3s": rack["airflow_m3s"],
            "face_area_m2": rack["face_area_m2"],
            "hot_face_depth_m": rack["hot_face_depth_m"],
            "hot_face_volume_m3": rack["hot_face_volume_m3"],
            "plume_depth_m": rack["plume_depth_m"],
            "fan_q_max_m3s": rack["fan_q_max_m3s"],
            "fan_dp_max_pa": rack["fan_dp_max_pa"],
            "fan_q_ref_m3s": rack["fan_q_ref_m3s"],
            "fan_dp_ref_pa": rack["fan_dp_ref_pa"],
            "target_velocity_m_s": rack["target_velocity_m_s"],
            "max_delta_t_c": rack["max_delta_t_c"],
            "thermal_source_model": "bounded_enthalpy_flux",
            "max_source_delta_t_per_step_c": rack["max_source_delta_t_per_step_c"],
            "momentum_damping_s_inv": rack["momentum_damping_s_inv"],
            "thermal_damping_s_inv": rack["thermal_damping_s_inv"],
            "plume_mixing_s_inv": rack["plume_mixing_s_inv"],
            "body_cell_count": rack["body_cell_count"],
            "cold_face_cell_count": rack["cold_face_cell_count"],
            "hot_face_cell_count": rack["hot_face_cell_count"],
            "plume_cell_count": rack["plume_cell_count"],
        })

    tile_sources = []
    for tile in tile_zones:
        tile_sources.append({
            "id": tile["id"],
            "type": "floor_tile_pressure_jump_region",
            "bounds": {
                "x_min": tile["x_min"],
                "x_max": tile["x_max"],
                "y_min": tile["y_min"],
                "y_max": tile["y_max"],
                "z": tile["z"] + dz,   # shift to solver-local Z
            },
            "normal": [0.0, 0.0, 1.0],
            "open_area_ratio": tile["open_area_ratio"],
            "effective_open_fraction": tile["effective_open_fraction"],
            "discharge_coefficient": cfg["perforated_tiles"].get("discharge_coefficient", 1.0),
            "loss_coefficient": tile["loss_coefficient"],
            "pressure_jump_model": "delta_p_equals_K_half_rho_v2",
        })

    # Shift extractor bounds into solver-local Z before writing.
    shifted_extractors = []
    for ex in (hot_aisle_extractors or []):
        ex_out = dict(ex)
        ex_out["bounds"] = _z_shift_bounds(ex["bounds"], dz)
        ex_out["opening_bounds"] = _z_shift_bounds(ex["opening_bounds"], dz)
        shifted_extractors.append(ex_out)

    payload = {
        "version": "physics-v1",
        "fluid": {
            "density_kg_m3": fluid["density"],
            "specific_heat_j_kg_k": fluid["specific_heat"],
        },
        "rack_sources": rack_sources,
        "tile_pressure_jumps": tile_sources,
        "hot_aisle_extractors": shifted_extractors,
        "totals": {
            "rack_heat_w": sum(src["total_heat_w"] for src in rack_sources),
            "rack_source_count": len(rack_sources),
            "tile_region_count": len(tile_sources),
            "hot_aisle_extractor_count": len(shifted_extractors),
            "hot_aisle_extractor_flow_m3s": sum(
                float(src["target_flow_m3s"]) for src in shifted_extractors
            ),
        },
    }
    out_cfg = cfg.get("output", {})
    path = os.path.join(outdir, out_cfg.get("source_file", "case.sources"))
    with open(path, "w") as f:
        json.dump(payload, f, indent=2)
        f.write("\n")
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
                  crac_openings, sensors, flags, hot_aisle_extractors=None,
                  solid_blocks=None):
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
        f"  Plenum depth: {cfg['room'].get('plenum_depth', 0.0)} m",
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
    lines.append(f"ADDITIONAL SOLID BLOCKS: {len(solid_blocks or [])}")
    lines.append(f"HOT-AISLE EXTRACTORS: {len(hot_aisle_extractors or [])}")
    lines.append(f"PERFORATED TILE ZONES: {len(tile_zones)}")
    lines.append(f"PHYSICS SOURCE FILE: {cfg.get('output', {}).get('source_file', 'case.sources')}")
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
    parser.add_argument(
        "--physics-model",
        default=None,
        help="Physics model contract to emit. physics-v1 writes case.sources and full tile pressure-jump regions.",
    )
    args = parser.parse_args()

    # Load config
    with open(args.config) as f:
        cfg = yaml.safe_load(f)
    physics_model = args.physics_model or cfg.get("case", {}).get("physics_model", "legacy")
    if physics_model == "physics-v1":
        args.native_tile_pressure_jump = True
        args.cosimulation = 0

    os.makedirs(args.outdir, exist_ok=True)

    # --- Compute geometry ---
    print("Computing geometry...")
    # Row-level blocks: used for tile zones, containment, extractors, and geometry JSON.
    # These cover the full X span of each row so downstream geometry helpers work
    # correctly (hot-aisle Y bounds, containment roof, tile strips).
    row_blocks = compute_rack_blocks(cfg)
    tile_zones = compute_tile_zones(
        cfg,
        row_blocks,
        native_pressure_jump=args.native_tile_pressure_jump,
    )
    crac_openings = compute_crac_openings(cfg)

    # --- Build mesh ---
    print("Building structured grid...")
    nodes_x, nodes_y, nodes_z = build_3d_grid(cfg)
    nx = len(nodes_x) - 1
    ny = len(nodes_y) - 1
    nz = len(nodes_z) - 1
    print(f"  Grid: {nx} x {ny} x {nz} = {nx*ny*nz:,} cells")

    hot_face_depth_m = float(
        cfg.get("rack_device", {}).get(
            "hot_face_depth_m",
            cfg.get("rack_defaults", {}).get("hot_face_depth_m", 0.25),
        )
    )

    # Assign face regions to row blocks so hot-aisle extractors can use airflow.
    row_blocks = assign_rack_device_regions(
        row_blocks, nodes_x, nodes_y, nodes_z,
        hot_face_depth_m=hot_face_depth_m,
    )
    hot_aisle_extractors = (
        compute_hot_aisle_extractors(cfg, row_blocks, crac_openings, nodes_x, nodes_y, nodes_z)
        if physics_model == "physics-v1" else []
    )
    containment_blocks = compute_containment_blocks(cfg, row_blocks, hot_aisle_extractors)
    solid_blocks = compute_cooling_equipment_blocks(cfg)
    solid_blocks.extend(
        compute_false_ceiling_blocks(
            cfg,
            [item.get("opening_bounds", item) for item in hot_aisle_extractors] +
            [item for item in crac_openings if item.get("type") == "crac_return"],
        )
    )

    # Individual rack blocks: one per physical rack, used for physics sources,
    # cell flagging, and sensors.  Gives the solver per-rack heat/airflow resolution
    # instead of smearing an entire row into a single source region.
    if physics_model == "physics-v1":
        print(f"  Computing {cfg['rack_defaults']['racks_per_row']} individual racks"
              f" × {len(cfg['rack_rows'])} rows...")
        individual_racks = compute_individual_racks(cfg)
        individual_racks = assign_rack_device_regions(
            individual_racks, nodes_x, nodes_y, nodes_z,
            hot_face_depth_m=hot_face_depth_m,
        )
        print(f"  {len(individual_racks)} individual rack sources resolved")
    else:
        individual_racks = row_blocks

    sensors = compute_sensors(cfg, individual_racks)

    # --- Flag cells ---
    flags = None
    if HAS_NUMPY:
        print("Flagging cells...")
        flags = generate_cell_flags(
            cfg, nodes_x, nodes_y, nodes_z,
            individual_racks, containment_blocks, tile_zones,
            hot_aisle_extractors, solid_blocks,
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
        args.outdir, row_blocks, containment_blocks,
        tile_zones, crac_openings, sensors, cfg,
        hot_aisle_extractors, solid_blocks,
    )
    print(f"  {p}")

    if physics_model == "physics-v1":
        p = write_sources_json(args.outdir, individual_racks, tile_zones, cfg, hot_aisle_extractors)
        print(f"  {p}")

    p = write_sensors_csv(sensors, args.outdir)
    print(f"  {p}")

    p = write_summary(
        args.outdir, cfg, nodes_x, nodes_y, nodes_z,
        row_blocks, containment_blocks, tile_zones,
        crac_openings, sensors, flags, hot_aisle_extractors, solid_blocks,
    )
    print(f"  {p}")

    print("\nDone. Review summary.txt for geometry audit.")
    print("Next steps:")
    print("  1. Review geometry.json and cell_flags.npy for correctness")
    print("  2. Import into SCI_FFD to generate .cfd/.dat, or write a converter")
    print("  3. Set up the Modelica Rooms.CFD model referencing the .ffd file")


if __name__ == "__main__":
    main()
