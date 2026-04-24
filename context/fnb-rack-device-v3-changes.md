## Problem 1: Hot Aisle Return is not physically modeled

### What's wrong

CRAC return grilles at `z_centre = 3.0m` (2.7 - 3.3m) only 0.44m above the rack tops. These returns should be near the ceiling (z ~ 3.3-3.9m) so that buoyant hot air rises all the way to them.

The extractor direction is horizontal and towards the wall. This should not be the case, the hot air should rise vertically through the containment roof slot, spread across the ceiling and then be drawn into the wall-mounted returns.

There is no ceiling return plenum. The 1.64 m overhead space is unrefined open air. Real HAR relies on a ceiling collection zone. The overhead space needs resolution to model this.

The return temperature is fixed at 29.9 degrees (as per the global energy balance). This is theoretically ok but it creates an artifical temperature constraint when the local temperatures deviate from the mean. 


## Problem 2: Mesh is too coarse in the mixing regions

### What's wrong?

In the hot aisle (Y) the mesh sizing is 0.075m which gives 20 cells across the 1.5m aisle. This is insufficient and a mesh size of 0.04m should be used giving 38 cells. This will resolve vertical stratification and lateral jet shear.

The overhead and ceiling space has a cell sizing between 0.075 and 0.144m. This gives 11 - 22 cells across the 1.64m space. This should be dropped to 0.05m, yielding 33 cells. This should capture the hot plume rise and ceiling level mixing.

The ceiling return plenum (3.3 - 3.9) is 5 cells deep. The sizing should be dropped to 0.04m and result in 15 cells. This will resolve the flow into the return grills.

The racks (per rack = 0.87m) have a sizing of 0.075 which yields 11 cells per rack. This should also be dropped to 0.05m, yielding 17 cells per rack. This should fix the end of row recirculation.

The original cell count was 3.68M cells. These changes should increase it to 5.5 - 6.0M cells, which will still remain within GPU memory constraints.

##  Specific Changes Required
1. cases/fnb/case.yaml — return grille elevation + mesh refinements
For all 6 CRAC units, move return grilles from mid-room to near-ceiling:


`return_grille_z_centre: 3.55   # was 3.0 — places grille at z = 3.25–3.85 m (ceiling level)`
`return_grille_height: 0.6      # unchanged, but now spans top of white space`

Add two new mesh refinement zones:

```bash
mesh:
  refinement:
    hot_aisles:
      min_cell_size: 0.04      # was 0.075 — halves cell size, doubles cells across aisle
      x_min_cell_size: 0.075
      z_min_cell_size: 0.04    # was 0.075
    cold_aisles:
      min_cell_size: 0.04      # was 0.05
      depth: 0.4
    overhead_space:            # NEW — ceiling return plenum
      min_cell_size: 0.05
      z_min: 2.0               # starts just above rack height
      z_max: 3.9               # up to ceiling
    ceiling_return:            # NEW — near-ceiling band
      min_cell_size: 0.04
      z_min: 3.2
      z_max: 3.9
```

2. `generate_ffd_inputs.py` — extractor direction + overhead mesh
Fix extractor direction (line 816) — change from wall-pointing to vertical:


`# was: direction = _normalise([return_centre[i] - extractor_centre[i] for i in range(3)])`
`direction = [0.0, 0.0, 1.0]   # purely upward — models hot air rising through containment slot`

Add overhead Z refinement in collect_refinement_points() after the plenum block (line 208):

```python
# Overhead / ceiling return space — resolves hot plume rise and return flow
overhead_ref = mesh_cfg["refinement"].get("overhead_space", {})
if overhead_ref:
    z_min_oh = float(overhead_ref.get("z_min", 2.0))
    z_max_oh = float(overhead_ref.get("z_max", room["white_space_height"]))
    ref["z"].append({
        "centre": 0.5 * (z_min_oh + z_max_oh),
        "extent": 0.5 * (z_max_oh - z_min_oh) + 0.05,
        "min_size": float(overhead_ref.get("min_cell_size", 0.05)),
    })
ceiling_ref = mesh_cfg["refinement"].get("ceiling_return", {})
if ceiling_ref:
    z_min_cr = float(ceiling_ref.get("z_min", 3.2))
    z_max_cr = float(ceiling_ref.get("z_max", room["white_space_height"]))
    ref["z"].append({
        "centre": 0.5 * (z_min_cr + z_max_cr),
        "extent": 0.5 * (z_max_cr - z_min_cr) + 0.02,
        "min_size": float(ceiling_ref.get("min_cell_size", 0.04)),
    })
```

3. `generate_ffd_inputs.py` — extractor Z bounds should extend to ceiling
Widen the extractor Z range so the momentum source extends up through the overhead space (line 788–791):

```python
# was: z_top + 0.80
z_indices = [
    i for i, c in enumerate(z_centres)
    if z_top - 0.30 <= c <= cfg["room"]["white_space_height"]  # extend all the way to ceiling
]
```

4. `src/cfd_pipeline/` physics sources — increase plume mixing
In the rack source generation, increase `plume_mixing_s_inv` from `0.8` to `1.5–2.0` s⁻¹. This directly increases turbulent entrainment of the hot exhaust jet into the surrounding aisle air. Also consider raising chen_a from 0.09 to 0.11 in case.yaml (ffd.chen_a) to increase eddy viscosity in the overhead mixing space.

5. `convert_to_sci.py` — return temperature reference
The 29.9 °C Dirichlet at the outlet is correct globally but any local return that is drawing hotter-than-average air (end-of-row racks) will be constrained. Change the reference to use the local initial temperature to make it a true floating outlet:

```python
# was: T = supply_T_c + delta_t  (global balance = 29.9 °C)
T = cfg["ffd"]["initial_temp_c"]   # neutral reference; outlet advects actual upstream temperature
```

## Summary of Physical Effect Expected
With these changes the flow path becomes physically correct:

1. Cold air rises through tiles → cold aisle → rack cold face (unchanged)
2. Hot exhaust rises vertically through the containment slot (extractor direction = `[0,0,1]`)
3. Hot air collects in the ceiling return zone (now refined to 0.04–0.05 m cells)
4. CRAC returns at z = 3.25–3.85 m draw hot air down from the ceiling (matches real HAR topology)
5. The 33 overhead Z cells and 38 hot-aisle Y cells resolve the thermal stratification and jet-mixing that currently appears as "consistent, unperturbed gradients"