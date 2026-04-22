from __future__ import annotations

import argparse
import csv
import re
from pathlib import Path

import matplotlib

matplotlib.use("Agg")

import matplotlib.pyplot as plt
import numpy as np


def load_result_plt(path: Path) -> tuple[str, list[str], dict[str, np.ndarray]]:
    lines = path.read_text(encoding="utf-8", errors="replace").splitlines()
    if len(lines) < 4:
        raise ValueError(f"Unexpected Tecplot file format: {path}")

    title = lines[0].strip()
    variables_line = lines[1].strip()
    zone_line = lines[2].strip()

    var_match = re.search(r"VARIABLES\s*=\s*(.*)", variables_line)
    if var_match is None:
        raise ValueError(f"Could not parse VARIABLES line: {variables_line}")
    variables = [part.strip() for part in var_match.group(1).split(",")]

    zone_match = re.search(r"I=(\d+),\s*J=(\d+),\s*K=(\d+)", zone_line)
    if zone_match is None:
        raise ValueError(f"Could not parse ZONE line: {zone_line}")

    raw = np.loadtxt(path, skiprows=3)
    if raw.ndim != 2 or raw.shape[1] != len(variables):
        raise ValueError(f"Unexpected data shape {raw.shape}; expected {len(variables)} columns")

    data = {name: raw[:, idx] for idx, name in enumerate(variables)}
    return title, variables, data


def nearest_plane(values: np.ndarray, target: float) -> float:
    unique = np.unique(values)
    return float(unique[np.argmin(np.abs(unique - target))])


def sanitize_token(value: float) -> str:
    return f"{value:.3f}m".replace(".", "p")


def write_csv(path: Path, header: list[str], rows: np.ndarray) -> None:
    with path.open("w", newline="", encoding="utf-8") as handle:
        writer = csv.writer(handle)
        writer.writerow(header)
        writer.writerows(rows.tolist())


def save_xy_temperature(
    data: dict[str, np.ndarray],
    mask: np.ndarray,
    target_z: float,
    out_dir: Path,
) -> tuple[float, Path, Path]:
    z_actual = nearest_plane(data["Z"][mask], target_z)
    plane = mask & np.isclose(data["Z"], z_actual)

    fig, ax = plt.subplots(figsize=(10, 6), constrained_layout=True)
    contour = ax.tricontourf(data["X"][plane], data["Y"][plane], data["T"][plane], levels=30, cmap="inferno")
    ax.set_title(f"Temperature XY Slice at z = {z_actual:.3f} m")
    ax.set_xlabel("X [m]")
    ax.set_ylabel("Y [m]")
    fig.colorbar(contour, ax=ax, label="Temperature [degC]")

    png_path = out_dir / f"temperature_xy_z_{sanitize_token(z_actual)}.png"
    fig.savefig(png_path, dpi=200)
    plt.close(fig)

    csv_path = out_dir / f"temperature_xy_z_{sanitize_token(z_actual)}.csv"
    rows = np.column_stack((data["X"][plane], data["Y"][plane], data["T"][plane]))
    write_csv(csv_path, ["X_m", "Y_m", "Temperature_degC"], rows)
    return z_actual, png_path, csv_path


def save_yz_temperature(
    data: dict[str, np.ndarray],
    mask: np.ndarray,
    target_x: float,
    out_dir: Path,
) -> tuple[float, Path, Path]:
    x_actual = nearest_plane(data["X"][mask], target_x)
    plane = mask & np.isclose(data["X"], x_actual)

    fig, ax = plt.subplots(figsize=(10, 6), constrained_layout=True)
    contour = ax.tricontourf(data["Y"][plane], data["Z"][plane], data["T"][plane], levels=30, cmap="inferno")
    ax.set_title(f"Temperature YZ Slice at x = {x_actual:.3f} m")
    ax.set_xlabel("Y [m]")
    ax.set_ylabel("Z [m]")
    fig.colorbar(contour, ax=ax, label="Temperature [degC]")

    png_path = out_dir / f"temperature_yz_x_{sanitize_token(x_actual)}.png"
    fig.savefig(png_path, dpi=200)
    plt.close(fig)

    csv_path = out_dir / f"temperature_yz_x_{sanitize_token(x_actual)}.csv"
    rows = np.column_stack((data["Y"][plane], data["Z"][plane], data["T"][plane]))
    write_csv(csv_path, ["Y_m", "Z_m", "Temperature_degC"], rows)
    return x_actual, png_path, csv_path


def save_xz_temperature(
    data: dict[str, np.ndarray],
    mask: np.ndarray,
    target_y: float,
    out_dir: Path,
) -> tuple[float, Path, Path]:
    y_actual = nearest_plane(data["Y"][mask], target_y)
    plane = mask & np.isclose(data["Y"], y_actual)

    fig, ax = plt.subplots(figsize=(10, 6), constrained_layout=True)
    contour = ax.tricontourf(data["X"][plane], data["Z"][plane], data["T"][plane], levels=30, cmap="inferno")
    ax.set_title(f"Temperature XZ Slice at y = {y_actual:.3f} m")
    ax.set_xlabel("X [m]")
    ax.set_ylabel("Z [m]")
    fig.colorbar(contour, ax=ax, label="Temperature [degC]")

    png_path = out_dir / f"temperature_xz_y_{sanitize_token(y_actual)}.png"
    fig.savefig(png_path, dpi=200)
    plt.close(fig)

    csv_path = out_dir / f"temperature_xz_y_{sanitize_token(y_actual)}.csv"
    rows = np.column_stack((data["X"][plane], data["Z"][plane], data["T"][plane]))
    write_csv(csv_path, ["X_m", "Z_m", "Temperature_degC"], rows)
    return y_actual, png_path, csv_path


def build_arg_parser() -> argparse.ArgumentParser:
    parser = argparse.ArgumentParser(description="Extract and plot temperature slices from an FFD result.plt field.")
    parser.add_argument("--result-plt", type=Path, required=True, help="Path to the Tecplot ASCII field file.")
    parser.add_argument("--outdir", type=Path, required=True, help="Directory for PNG and CSV slice outputs.")
    parser.add_argument("--z-slices", type=float, nargs="*", default=[0.75, 1.13, 1.51], help="Target XY slice heights [m].")
    parser.add_argument("--x-slices", type=float, nargs="*", default=[7.5], help="Target YZ slice x-positions [m].")
    parser.add_argument("--y-slices", type=float, nargs="*", default=[12.5], help="Target XZ slice y-positions [m].")
    return parser


def main() -> int:
    args = build_arg_parser().parse_args()
    result_plt = args.result_plt.resolve()
    out_dir = args.outdir.resolve()
    out_dir.mkdir(parents=True, exist_ok=True)

    title, variables, data = load_result_plt(result_plt)
    if "FlagP" not in variables or "T" not in variables:
        raise ValueError("Expected Tecplot field to contain FlagP and T variables.")

    fluid = np.isclose(data["FlagP"], -1.0)
    if not np.any(fluid):
        raise ValueError("No fluid cells found in result.plt.")

    summary_lines = [
        f"Title: {title}",
        f"Source: {result_plt}",
        f"Fluid cells: {int(fluid.sum())}",
        "",
        "Generated slices:",
    ]

    for target_z in args.z_slices:
        z_actual, png_path, csv_path = save_xy_temperature(data, fluid, target_z, out_dir)
        summary_lines.append(
            f"- XY temperature: requested z={target_z:.3f} m, used z={z_actual:.3f} m, png={png_path.name}, csv={csv_path.name}"
        )

    for target_x in args.x_slices:
        x_actual, png_path, csv_path = save_yz_temperature(data, fluid, target_x, out_dir)
        summary_lines.append(
            f"- YZ temperature: requested x={target_x:.3f} m, used x={x_actual:.3f} m, png={png_path.name}, csv={csv_path.name}"
        )

    for target_y in args.y_slices:
        y_actual, png_path, csv_path = save_xz_temperature(data, fluid, target_y, out_dir)
        summary_lines.append(
            f"- XZ temperature: requested y={target_y:.3f} m, used y={y_actual:.3f} m, png={png_path.name}, csv={csv_path.name}"
        )

    (out_dir / "summary.txt").write_text("\n".join(summary_lines) + "\n", encoding="utf-8")
    print("\n".join(summary_lines))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
