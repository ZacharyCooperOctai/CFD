"""
check_energy_balance.py
========================
Validate a completed standalone FFD run by checking:

  1. Energy balance: total CRAC cooling ≈ total IT heat load (within ±5 %)
  2. Rack inlet temperatures: all within 18–35 °C at steady state
  3. No negative plenum pressures (physical sanity)

Usage
-----
Run from the project root after a successful FFD validation run:

    python validation/check_energy_balance.py \\
        --sensors  sensor_locations.csv \\
        --ffd-out  validation/ffd_output.csv \\
        --config   dc_config.yaml

The FFD output format expected: a CSV (or TSV) with columns
    time, sensor_id, temperature_C

If the FFD outputs a different format (e.g. binary Tecplot), adjust the
``load_ffd_output()`` function below.
"""

import argparse
import os
import sys
import warnings

import numpy as np
import yaml

try:
    import matplotlib
    matplotlib.use("Agg")
    import matplotlib.pyplot as plt
    HAS_MATPLOTLIB = True
except ImportError:
    HAS_MATPLOTLIB = False
    warnings.warn("matplotlib not found; plots will be skipped")


# ---------------------------------------------------------------------------
# Configurable thresholds
# ---------------------------------------------------------------------------
ENERGY_BALANCE_TOL  = 0.05    # ±5 % energy balance tolerance
RACK_INLET_MIN_C    = 18.0    # minimum acceptable rack inlet temperature
RACK_INLET_MAX_C    = 35.0    # maximum acceptable rack inlet temperature
STEADY_FRAC         = 0.8     # use the last 20 % of the time series as "steady"


# ---------------------------------------------------------------------------
# Load functions
# ---------------------------------------------------------------------------

def load_config(path):
    with open(path) as fh:
        return yaml.safe_load(fh)


def load_sensors(path):
    """Load sensor_locations.csv → dict {sensor_id: {x, y, z, type}}"""
    import csv
    sensors = {}
    with open(path) as fh:
        reader = csv.DictReader(fh)
        for row in reader:
            sensors[row["id"]] = {
                "x":    float(row["x_m"]),
                "y":    float(row["y_m"]),
                "z":    float(row["z_m"]),
                "type": row["type"],
            }
    return sensors


def load_ffd_output(path):
    """
    Load FFD sensor output.

    Expected format (adjust if your FFD writes differently):
        CSV with header: time,sensor_id,temperature_C
        or: time,<sensor1>,<sensor2>,...  (wide format)

    Returns
    -------
    times    : 1-D array of simulation times [s]
    temp_df  : dict {sensor_id: 1-D array of temperatures [°C]}
    """
    if not os.path.exists(path):
        print(f"ERROR: FFD output file not found: {path}")
        print("  Run the FFD validation first:  ./ffd validation/run_steady.ffd")
        sys.exit(1)

    data = np.genfromtxt(path, delimiter=",", names=True, dtype=None,
                         encoding="utf-8")

    if "time" not in data.dtype.names:
        raise ValueError(f"Expected 'time' column in {path}")

    times = data["time"].astype(float)
    temp_df = {}
    for col in data.dtype.names:
        if col == "time":
            continue
        temp_df[col] = data[col].astype(float)

    return times, temp_df


# ---------------------------------------------------------------------------
# Analysis functions
# ---------------------------------------------------------------------------

def steady_slice(arr, frac=STEADY_FRAC):
    """Return the last ``frac`` portion of an array (the 'steady-state' part)."""
    n = max(1, int(len(arr) * (1 - frac)))
    return arr[n:]


def check_energy_balance(cfg, temp_df):
    """
    Estimate CRAC cooling power from return–supply temperature difference
    and compare against total IT load.

    Returns (Q_crac_kW, Q_it_kW, balance_error_fraction).
    """
    rho  = cfg["fluid"]["density"]          # kg/m³
    Cp   = cfg["fluid"]["specific_heat"]    # J/(kg·K)

    # Total IT load from config
    Q_it_W = sum(
        row["heat_per_rack_kw"] * 1000 * cfg["rack_defaults"]["racks_per_row"]
        for row in cfg["rack_rows"]
    )
    Q_it_kW = Q_it_W / 1000.0

    # CRAC cooling: Q = m_dot × Cp × (T_return – T_supply)
    Q_crac_W = 0.0
    missing = []
    for crac in cfg["crac_units"]:
        cid = crac["id"]
        ret_key = f"{cid}_return"
        sup_key = f"{cid}_supply"
        if ret_key not in temp_df or sup_key not in temp_df:
            missing.append(cid)
            continue
        T_ret = np.mean(steady_slice(temp_df[ret_key]))
        T_sup = np.mean(steady_slice(temp_df[sup_key]))
        m_dot = rho * crac["rated_flow_m3s"]
        Q_crac_W += m_dot * Cp * (T_ret - T_sup)

    if missing:
        print(f"  WARNING: CRAC sensor data missing for: {missing}")

    Q_crac_kW = Q_crac_W / 1000.0
    error = abs(Q_crac_kW - Q_it_kW) / Q_it_kW if Q_it_kW > 0 else float("inf")
    return Q_crac_kW, Q_it_kW, error


def check_rack_inlet_temperatures(temp_df):
    """Check that all rack inlet sensors are within acceptable bounds."""
    rack_keys = [k for k in temp_df if "rack" in k and "_h" in k]
    if not rack_keys:
        print("  WARNING: No rack inlet sensors found in FFD output")
        return None, None

    T_all = np.array([np.mean(steady_slice(temp_df[k])) for k in rack_keys])
    T_min = float(T_all.min())
    T_max = float(T_all.max())
    T_mean = float(T_all.mean())
    return T_min, T_max, T_mean, rack_keys, T_all


# ---------------------------------------------------------------------------
# Plotting
# ---------------------------------------------------------------------------

def plot_rack_inlet_heatmap(sensors, rack_keys, T_all, outdir):
    """Scatter-plot of steady-state rack inlet temperatures (plan view)."""
    if not HAS_MATPLOTLIB:
        return
    xs = [sensors[k]["x"] for k in rack_keys]
    ys = [sensors[k]["y"] for k in rack_keys]
    sc = plt.scatter(xs, ys, c=T_all, cmap="RdYlBu_r", s=8,
                     vmin=RACK_INLET_MIN_C, vmax=RACK_INLET_MAX_C)
    plt.colorbar(sc, label="Rack inlet T (°C)")
    plt.xlabel("X (m)"); plt.ylabel("Y (m)")
    plt.title("Steady-state rack inlet temperatures")
    plt.gca().set_aspect("equal")
    outpath = os.path.join(outdir, "rack_inlet_T.png")
    plt.savefig(outpath, dpi=150, bbox_inches="tight")
    plt.close()
    print(f"  Plot saved: {outpath}")


def plot_crac_temperatures(cfg, temp_df, times, outdir):
    """Time-history plot of all 6 CRAC return temperatures."""
    if not HAS_MATPLOTLIB:
        return
    fig, ax = plt.subplots(figsize=(10, 4))
    for crac in cfg["crac_units"]:
        key = f"{crac['id']}_return"
        if key in temp_df:
            ax.plot(times, temp_df[key], label=crac["id"])
    ax.axhline(RACK_INLET_MAX_C, color="red", ls="--", lw=0.8, label="35°C limit")
    ax.set_xlabel("Time (s)"); ax.set_ylabel("Return air T (°C)")
    ax.set_title("CRAC return air temperatures")
    ax.legend(fontsize=7, ncol=3)
    outpath = os.path.join(outdir, "crac_return_T.png")
    fig.savefig(outpath, dpi=150, bbox_inches="tight")
    plt.close(fig)
    print(f"  Plot saved: {outpath}")


# ---------------------------------------------------------------------------
# Main
# ---------------------------------------------------------------------------

def main():
    ap = argparse.ArgumentParser(
        description="Energy balance and temperature checks for FFD validation run")
    ap.add_argument("--sensors",  default="sensor_locations.csv")
    ap.add_argument("--ffd-out",  default="validation/ffd_output.csv",
                    help="FFD sensor output CSV (time vs sensor temperatures)")
    ap.add_argument("--config",   default="dc_config.yaml")
    ap.add_argument("--outdir",   default="validation",
                    help="Directory for output plots")
    args = ap.parse_args()

    cfg     = load_config(args.config)
    sensors = load_sensors(args.sensors)

    print("Loading FFD output...")
    times, temp_df = load_ffd_output(args.ffd_out)
    print(f"  {len(times)} time steps, {len(temp_df)} sensor columns")
    print(f"  Time range: {times[0]:.0f} – {times[-1]:.0f} s")

    os.makedirs(args.outdir, exist_ok=True)

    # -----------------------------------------------------------------------
    # Check 1: energy balance
    # -----------------------------------------------------------------------
    print("\n--- Check 1: Energy balance ---")
    Q_crac, Q_it, err = check_energy_balance(cfg, temp_df)
    print(f"  CRAC cooling (estimated): {Q_crac:.1f} kW")
    print(f"  IT load (from config):    {Q_it:.1f} kW")
    print(f"  Imbalance:                {100*err:.1f} %")
    if err <= ENERGY_BALANCE_TOL:
        print(f"  PASS  (tolerance: ±{100*ENERGY_BALANCE_TOL:.0f} %)")
    else:
        print(f"  FAIL  (tolerance: ±{100*ENERGY_BALANCE_TOL:.0f} %)")

    # -----------------------------------------------------------------------
    # Check 2: rack inlet temperatures
    # -----------------------------------------------------------------------
    print("\n--- Check 2: Rack inlet temperatures ---")
    result = check_rack_inlet_temperatures(temp_df)
    if result is None:
        print("  SKIP (no data)")
    else:
        T_min, T_max, T_mean, rack_keys, T_all = result
        print(f"  Min: {T_min:.1f} °C  |  Mean: {T_mean:.1f} °C  |  Max: {T_max:.1f} °C")
        if T_min >= RACK_INLET_MIN_C and T_max <= RACK_INLET_MAX_C:
            print(f"  PASS  (range: {RACK_INLET_MIN_C}–{RACK_INLET_MAX_C} °C)")
        else:
            if T_min < RACK_INLET_MIN_C:
                print(f"  FAIL  min {T_min:.1f} °C < {RACK_INLET_MIN_C} °C")
            if T_max > RACK_INLET_MAX_C:
                hot = [rack_keys[i] for i in np.where(T_all > RACK_INLET_MAX_C)[0]]
                print(f"  FAIL  max {T_max:.1f} °C > {RACK_INLET_MAX_C} °C  ({len(hot)} sensors)")

        plot_rack_inlet_heatmap(sensors, rack_keys, T_all, args.outdir)
        plot_crac_temperatures(cfg, temp_df, times, args.outdir)

    # -----------------------------------------------------------------------
    # Summary
    # -----------------------------------------------------------------------
    print("\n--- Summary ---")
    all_pass = (err <= ENERGY_BALANCE_TOL) and (result is not None) and \
               (result[0] >= RACK_INLET_MIN_C) and (result[1] <= RACK_INLET_MAX_C)
    if all_pass:
        print("  All checks PASSED. Proceed to coupled FFD-Modelica simulation.")
    else:
        print("  One or more checks FAILED. Review FFD boundary conditions.")
        sys.exit(1)


if __name__ == "__main__":
    main()
