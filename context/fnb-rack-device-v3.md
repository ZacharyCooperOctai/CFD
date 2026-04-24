# fnb-rack-device-v3: Physics Model Summary

Run ID: `fnb-rack-device-v3`  
Case: `fnb`  
Physics model: `physics-v1`  
Grid: 177 × 352 × 59 = 3,675,936 cells  
Simulated time: 1800 s (time-averaged from 900 s onward)

---

## Fluid

Air is treated as an incompressible Newtonian fluid with constant properties.

| Property | Value |
|---|---|
| Density ρ | 1.204 kg/m³ |
| Kinematic viscosity ν | 1.516 × 10⁻⁵ m²/s |
| Thermal conductivity k | 0.0257 W/m·K |
| Specific heat Cp | 1006 J/kg·K |
| Thermal expansion β | 3.43 × 10⁻³ K⁻¹ |
| Thermal diffusivity α | 2.14 × 10⁻⁵ m²/s |

---

## Solver

Fast Fluid Dynamics (FFD) on a structured rectilinear grid, accelerated via OpenCL on GPU. The governing equations are the incompressible Navier-Stokes equations with the Boussinesq buoyancy approximation (gravitational acceleration –9.81 m/s² in Z).

- **Advection:** semi-Lagrangian (SEMI)
- **Diffusion/pressure:** Gauss-Seidel iterative solver (GS)
- **Interpolation:** bilinear
- **Time step:** 0.05 s (halved from v1 to reduce CFL)
- **Turbulence:** Chen zero-equation model (algebraic eddy viscosity), coefficient cₐ = 0.09

The Chen model computes eddy viscosity as νₜ = cₐ · |u| · ℓ where ℓ is the local cell size, giving a simple jet/mixing correction without transport equations. cₐ = 0.09 (up from 0.039 in earlier runs) gives better prediction of jet entrainment and hot-plume mixing.

---

## Mesh

Structured rectilinear grid with targeted refinement in regions of high gradient.

| Region | Min cell size |
|---|---|
| Rack faces (Y) | 0.05 m |
| Hot aisles (Y) | 0.075 m |
| Tile openings (Z) | 0.05 m |
| Plenum (Z) | 0.05 m |
| Cold aisles (Y) | 0.05 m |
| CRAC openings (Y) | 0.075 m |
| Elsewhere | 0.15 m base |

Plenum and cold-aisle refinements were added in v3 to resolve supply-jet entrainment and tile discharge.

---

## CRAC Units (6 total)

Three east/west pairs. Each modelled as a **Dirichlet inlet boundary condition** in the plenum at the supply opening face and an **outlet boundary condition** at the return grille.

- **Supply:** fixed velocity normal to wall, fixed temperature T = 14 °C, at Z = −0.6 m to −0.1 m on east/west walls.
- **Return:** fixed outflow velocity; return temperature derived from the global energy balance (T_return = T_supply + Q_total / (ṁ_total · Cp) ≈ 29.9 °C). This prevents an artificial cold sink that would otherwise be imposed by fixing the return at the supply temperature.
- Rated flow per unit: 4.5 m³/s; total supply: 27 m³/s.

---

## Raised-Floor Plenum

A 0.6 m deep sub-floor plenum distributes cold supply air to the white space through perforated floor tiles. The plenum is part of the computational domain (Z = −0.6 to 0 m). CRAC units discharge into the plenum at Z ≈ −0.6 m.

---

## Perforated Floor Tiles (physics-v1 pressure-jump model)

Eight tile strips, one in front of each rack row cold face. Each strip is 0.6 m wide and spans the full row length.

The tile is modelled as a **pressure-jump boundary** at the raised-floor level (solver-local Z = 0.6 m). The resistance is expressed as:

    ΔP = K · ½ρv²        K = (1 / (AR · Cd))² − 1

where AR = 0.25 (25 % open area ratio) and Cd = 0.6 (sharp-edged perforation, Idelchik), giving an effective open fraction of 0.15 and K ≈ 43. The pressure jump damps vertical velocity at the tile face, correctly throttling the cold supply jet entering the white space from the plenum.

---

## Rack Heat Exchangers — 104 individual racks (physics-v1)

Each physical rack is modelled independently (13 per row × 8 rows). In earlier runs, all 13 racks in a row were smeared into a single row-level source; v3 resolves each rack separately at 5 kW each (520 kW total).

Each rack source consists of four snapped regions:

| Region | Role |
|---|---|
| **Cold face** | One cell layer on the inlet side. Cold-aisle air temperature is sampled here as T_in. |
| **Rack body** | Interior cells; momentum is driven toward the hot face by a damping source term (15 s⁻¹), suppressing lateral bypass. |
| **Hot face** | One to two cell layers on the exhaust side. Enthalpy flux Q = ρ · Cp · ṁ · ΔT is injected here, raising the local temperature by ΔT = Q / (ρ · Cp · ṁ). |
| **Plume** | Cells immediately downstream of the hot face; a mixing source (0.8 s⁻¹) blends the exhaust jet into the aisle. |

Fan operating point: Q_ref = 0.148 m³/s per rack (50 % of free-delivery flow), ΔP_ref ≈ 60 Pa. Momentum damping was increased from 5 to 15 s⁻¹ compared to earlier runs to reduce lateral air bypass around the racks.

All Z coordinates in `case.sources` are in solver-local space (Z = 0 at plenum floor), shifted by +0.6 m relative to the global geometry coordinate system.

---

## Hot-Aisle Containment

Thin solid walls (0.05 m, glass panels) enclose the top and short ends of each hot aisle. Four contained hot aisles (between rows 1–2, 3–4, 5–6, 7–8). Modelled as **solid obstacle cells** (flag = CONTAINMENT) using overlap-based flagging so sub-cell-size panels are captured on the coarse mesh.

The containment roof has an opening at the extractor slot location so hot air can escape upward to the CRAC return.

---

## Hot-Aisle Extractors (4 total, physics-v1)

One extractor per contained hot aisle. Each extractor is a **momentum source region** spanning the top of the hot aisle from just below rack height to ~0.8 m above, directing hot air toward the nearest CRAC return grille on the east or west wall.

- Target flow: sum of the two adjacent rack rows' fan airflows (~7.67 m³/s per extractor).
- Target velocity: computed from target flow / slot area.
- Damping coefficient: 3.0 s⁻¹ (softer than rack damping to allow the flow to adjust).

---

## Boundary Walls

All six room envelope faces (floor, ceiling, four walls) are treated as **adiabatic walls** (zero heat flux, no-slip velocity). CRAC openings are cut into the east and west walls.
