"""
run_scenarios.py
================
ML training-data generator for the FFD–Modelica coupled data-centre model.

Generates a sweep of CRAC control scenarios, runs each as a 15-minute
coupled simulation, and aggregates the results into a single training dataset.

Each scenario is a 15-minute episode with fixed or time-varying CRAC setpoints.
Output data format per episode:
    control   : (T, 12) float32  — fan fractions + supply temps for 6 CRACs
    T_rack    : (T, 312) float32 — rack inlet temperatures at every time step
    T_crac_ret: (T, 6) float32   — CRAC return temperatures
    T_crac_sup: (T, 6) float32   — CRAC supply temperatures
    time_s    : (T,) float32     — simulation time [s] within the episode

Usage
-----
    python run_scenarios.py [--config dc_config.yaml] [--outdir output/training_data]

Requirements
------------
    pip install OMPython BuildingsPy   (see requirements.txt)
    OpenModelica must be installed and on PATH (omc command available).
    Buildings library path must be set in OpenModelica user config.
"""

import argparse
import csv
import ctypes
import glob
import itertools
import os
import re
import shutil
import sys
import time
from contextlib import ExitStack
from pathlib import Path

import numpy as np
import yaml

# Try to import OpenModelica Python interface
try:
    from OMPython import OMCSessionZMQ
    HAS_OMC = True
except ImportError:
    HAS_OMC = False
    print("WARNING: OMPython not available — simulation runs will be skipped.")
    print("         Install with: pip install OMPython")

# Try BuildingsPy for result parsing
try:
    from buildingspy.io.outputfile import Reader as MATReader
    HAS_BP = True
except ImportError:
    HAS_BP = False
    try:
        import scipy.io as sio
        HAS_SCIPY = True
    except ImportError:
        HAS_SCIPY = False
        print("WARNING: BuildingsPy and scipy not available — result parsing will fail.")
        print("         Install with: pip install BuildingsPy")


# ---------------------------------------------------------------------------
# Constants
# ---------------------------------------------------------------------------
N_CRAC     = 6
DEFAULT_EPISODE_S = 900.0
DEFAULT_SYNC_DT   = 10.0
OFFICIAL_FFD_EXAMPLE = "Buildings.ThermalZones.Detailed.Examples.FFD.ForcedConvection"
OFFICIAL_FFD_STOP_S  = 30.0
OFFICIAL_FFD_SYNC_DT = 6.0
OFFICIAL_FFD_LOG_FLAGS = "LOG_STATS,LOG_INIT,LOG_SOLVER,LOG_EVENTS"
LOCAL_FFD_RUNTIME_FILES = ("dc_model.ffd", "dc_model.cfd", "dc_model.dat")


def compute_number_of_intervals(stop_time_s, sync_dt_s):
    """Return the OpenModelica numberOfIntervals value for a uniform sync step."""
    if sync_dt_s <= 0:
        raise ValueError("sync_dt_s must be > 0")
    return int(round(stop_time_s / sync_dt_s))


def build_uniform_time_grid(stop_time_s, number_of_intervals):
    """Return the uniform time grid used for interpolation/parsing."""
    return np.linspace(0.0, stop_time_s, number_of_intervals + 1, dtype=np.float32)


# ---------------------------------------------------------------------------
# Scenario generation
# ---------------------------------------------------------------------------

def generate_scenarios():
    """
    Build the full sweep of CRAC control scenarios.

    Returns a list of dicts, each with keys:
        id        : str scenario identifier
        fan       : list[float] length 6  (fan fractions)
        Tsup_C    : list[float] length 6  (supply temp in °C)
        description: str
    """
    scenarios = []
    sid = 0

    # --- Baseline: all CRACs at 100 % fan, 14 °C ---
    scenarios.append({
        "id": f"s{sid:03d}_baseline",
        "fan":    [1.0] * N_CRAC,
        "Tsup_C": [14.0] * N_CRAC,
        "description": "Baseline: all CRACs 100% fan, 14°C",
    })
    sid += 1

    # --- Fan sweep: step one CRAC at a time to 80 %, 60 %, 40 % ---
    for i in range(N_CRAC):
        for frac in (0.8, 0.6, 0.4):
            fan = [1.0] * N_CRAC
            fan[i] = frac
            scenarios.append({
                "id": f"s{sid:03d}_crac{i+1}_fan{int(frac*100)}",
                "fan":    fan,
                "Tsup_C": [14.0] * N_CRAC,
                "description": f"CRAC {i+1} fan @ {int(frac*100)}%, rest @ 100%",
            })
            sid += 1

    # --- Supply temp sweep: raise one CRAC Tsup to 16 °C, 18 °C ---
    for i in range(N_CRAC):
        for t in (16.0, 18.0):
            Tsup = [14.0] * N_CRAC
            Tsup[i] = t
            scenarios.append({
                "id": f"s{sid:03d}_crac{i+1}_Tsup{int(t)}",
                "fan":    [1.0] * N_CRAC,
                "Tsup_C": Tsup,
                "description": f"CRAC {i+1} Tsup @ {t}°C, rest @ 14°C",
            })
            sid += 1

    # --- Combined: pairs of adjacent CRACs at reduced fan ---
    pairs = [(0, 1), (2, 3), (4, 5)]    # (west, east) pairs per aisle group
    for (i, j) in pairs:
        for frac in (0.7, 0.5):
            fan = [1.0] * N_CRAC
            fan[i] = frac
            fan[j] = frac
            scenarios.append({
                "id": f"s{sid:03d}_crac{i+1}{j+1}_fan{int(frac*100)}",
                "fan":    fan,
                "Tsup_C": [14.0] * N_CRAC,
                "description": f"CRACs {i+1}&{j+1} @ {int(frac*100)}%, rest @ 100%",
            })
            sid += 1

    print(f"Generated {len(scenarios)} scenarios")
    return scenarios


# ---------------------------------------------------------------------------
# Modelica scenario file generation
# ---------------------------------------------------------------------------

def write_scenario_mo(scenario, scenario_mo_path, stop_time_s, sync_dt_s):
    """
    Write a Modelica script that instantiates DataCentreFFD with a
    CombiTimeTable driving the CRAC setpoints for this scenario.
    """
    fan   = scenario["fan"]
    Tsup  = [t + 273.15 for t in scenario["Tsup_C"]]  # convert to K

    # Build CombiTimeTable data: constant for the full 15-minute episode
    fan_str  = "{" + ", ".join(f"{v:.4f}" for v in fan)  + "}"
    Tsup_str = "{" + ", ".join(f"{v:.4f}" for v in Tsup) + "}"

    content = f"""\
// Auto-generated scenario: {scenario['id']}
// {scenario['description']}
model Scenario_{scenario['id']}
  DataCentreFFD dc;

  Modelica.Blocks.Sources.CombiTimeTable fanTable(
    table = [0, {', '.join(f"{v:.4f}" for v in fan)};
             {stop_time_s:.0f}, {', '.join(f"{v:.4f}" for v in fan)}],
    columns = 2:{N_CRAC + 1},
    smoothness = Modelica.Blocks.Types.Smoothness.ConstantSegments)
    annotation(Placement(transformation(extent={{{{-200, 60}}, {{-180, 80}}}})));

  Modelica.Blocks.Sources.CombiTimeTable TsupTable(
    table = [0, {', '.join(f"{v:.4f}" for v in Tsup)};
             {stop_time_s:.0f}, {', '.join(f"{v:.4f}" for v in Tsup)}],
    columns = 2:{N_CRAC + 1},
    smoothness = Modelica.Blocks.Types.Smoothness.ConstantSegments)
    annotation(Placement(transformation(extent={{{{-200, 30}}, {{-180, 50}}}})));

equation
  for i in 1:{N_CRAC} loop
    connect(fanTable.y[i],  dc.u_fan[i]);
    connect(TsupTable.y[i], dc.u_Tsup[i]);
  end for;

  annotation(experiment(StopTime = {stop_time_s:.0f}, Interval = {sync_dt_s:.0f}));
end Scenario_{scenario['id']};
"""
    with open(scenario_mo_path, "w") as fh:
        fh.write(content)


# ---------------------------------------------------------------------------
# OpenModelica simulation runner
# ---------------------------------------------------------------------------

def resolve_omc_executable():
    """Return the OpenModelica compiler path if it can be found locally."""
    candidates = []

    path_hit = shutil.which("omc")
    if path_hit:
        candidates.append(path_hit)

    common_patterns = [
        r"C:\OpenModelica*\bin\omc.exe",
        r"C:\Program Files\OpenModelica*\bin\omc.exe",
    ]
    local_appdata = os.environ.get("LOCALAPPDATA")
    if local_appdata:
        common_patterns.append(
            os.path.join(local_appdata, "Programs", "OpenModelica*", "bin", "omc.exe")
        )

    for pattern in common_patterns:
        candidates.extend(sorted(glob.glob(pattern)))

    for candidate in candidates:
        cand_path = Path(candidate)
        if cand_path.exists():
            return cand_path.resolve()
    return None


def prepare_omc_environment():
    """
    Ensure omc is discoverable for OMPython.
    Returns the resolved omc path, or None if OpenModelica is not installed.
    """
    omc_path = resolve_omc_executable()
    if omc_path is None:
        return None

    omc_bin = str(omc_path.parent)
    openmodelica_home = str(omc_path.parent.parent)

    path_parts = os.environ.get("PATH", "").split(os.pathsep) if os.environ.get("PATH") else []
    if omc_bin not in path_parts:
        os.environ["PATH"] = omc_bin + os.pathsep + os.environ.get("PATH", "")

    os.environ.setdefault("OPENMODELICAHOME", openmodelica_home)
    return omc_path


def resolve_buildings_package():
    """Return a local Buildings package.mo path when one is available."""
    candidates = []

    env_package = os.environ.get("BUILDINGS_LIBRARY_PACKAGE")
    if env_package:
        candidates.append(Path(env_package))

    env_root = os.environ.get("BUILDINGS_LIBRARY_DIR")
    if env_root:
        env_root_path = Path(env_root)
        candidates.extend([
            env_root_path / "package.mo",
            env_root_path / "Buildings" / "package.mo",
        ])

    candidates.extend([
        Path("external/modelica-buildings/Buildings/package.mo"),
        Path(r"C:\OMLibs\modelica-buildings\Buildings\package.mo"),
    ])

    appdata = os.environ.get("APPDATA")
    if appdata:
        candidates.extend(
            Path(appdata, ".openmodelica", "libraries").glob("Buildings*\\package.mo")
        )

    seen = set()
    for candidate in candidates:
        try:
            resolved = candidate.resolve()
        except OSError:
            continue
        if resolved in seen:
            continue
        seen.add(resolved)
        if resolved.exists():
            return resolved
    return None


def add_modelica_library_root(package_mo_path):
    """Append the package root to MODELICAPATH for the spawned omc process."""
    package_root = str(package_mo_path.parent.parent)
    current = os.environ.get("MODELICAPATH", "")
    parts = [p for p in current.split(os.pathsep) if p]
    if package_root not in parts:
        os.environ["MODELICAPATH"] = (
            package_root + (os.pathsep + current if current else "")
        )


def resolve_buildings_ffd_runtime(buildings_package):
    """Return the platform-specific Buildings FFD shared library."""
    if buildings_package is None:
        return None

    lib_root = buildings_package.parent / "Resources" / "Library"
    arch_dirs = []
    file_names = []

    if os.name == "nt":
        arch_dirs.extend(["win64" if sys.maxsize > 2**32 else "win32", "win32"])
        file_names.append("ffd.dll")
    else:
        arch_dirs.extend(["linux64" if sys.maxsize > 2**32 else "linux32", "linux64", "linux32"])
        file_names.extend(["libffd.so", "ffd.so"])

    seen = set()
    for arch_dir in arch_dirs:
        if arch_dir in seen:
            continue
        seen.add(arch_dir)
        for file_name in file_names:
            runtime_path = lib_root / arch_dir / file_name
            if runtime_path.exists():
                return runtime_path
    return None


def try_load_shared_library(lib_name_or_path, dll_dirs=None):
    """Try to load a shared library and return (ok, error_message)."""
    dll_dirs = dll_dirs or []
    try:
        with ExitStack() as stack:
            if os.name == "nt" and hasattr(os, "add_dll_directory"):
                for dll_dir in dll_dirs:
                    if not dll_dir:
                        continue
                    dll_dir_path = Path(dll_dir)
                    if not dll_dir_path.exists():
                        continue
                    handle = os.add_dll_directory(str(dll_dir_path))
                    stack.callback(handle.close)
                ctypes.WinDLL(str(lib_name_or_path))
            else:
                ctypes.CDLL(str(lib_name_or_path))
        return True, ""
    except OSError as exc:
        return False, str(exc)


def preflight_openmodelica_runtime():
    """
    Validate the local OpenModelica/Buildings runtime before running a simulation.

    Returns a dict with resolved paths and an `errors` list.
    """
    omc_path = prepare_omc_environment()
    buildings_package = resolve_buildings_package()
    ffd_runtime = resolve_buildings_ffd_runtime(buildings_package)

    errors = []

    if omc_path is None:
        errors.append(
            "OpenModelica compiler `omc.exe` was not found. Install OpenModelica "
            "or add `omc.exe` to PATH."
        )

    if buildings_package is None:
        errors.append(
            "Buildings library package.mo was not found. Set BUILDINGS_LIBRARY_PACKAGE "
            "or install the library under C:\\OMLibs\\modelica-buildings."
        )

    if buildings_package is not None:
        if ffd_runtime is None:
            errors.append(
                "Buildings FFD runtime library was not found under "
                f"{buildings_package.parent / 'Resources' / 'Library'}."
            )
        elif os.name == "nt":
            msvcr_ok, msvcr_err = try_load_shared_library("MSVCR120.dll")
            if not msvcr_ok:
                errors.append(
                    "Missing Microsoft Visual C++ 2013 x64 runtime "
                    "(`MSVCR120.dll`). Install the VC++ 2013 Redistributable (x64). "
                    f"Windows loader message: {msvcr_err}"
                )

            ffd_ok, ffd_err = try_load_shared_library(
                ffd_runtime,
                dll_dirs=[ffd_runtime.parent, omc_path.parent if omc_path else None],
            )
            if not ffd_ok:
                errors.append(
                    f"Buildings FFD library could not be loaded from `{ffd_runtime}`. "
                    f"Windows loader message: {ffd_err}"
                )
        else:
            ffd_ok, ffd_err = try_load_shared_library(ffd_runtime)
            if not ffd_ok:
                errors.append(
                    f"Buildings FFD library could not be loaded from `{ffd_runtime}`. "
                    f"Loader message: {ffd_err}"
                )

    return {
        "omc_path": omc_path,
        "buildings_package": buildings_package,
        "ffd_runtime": ffd_runtime,
        "errors": errors,
    }


def build_simflags(result_file_name=None, log_flags=None):
    """Assemble OpenModelica simflags for a simulation run."""
    flags = []
    if result_file_name:
        flags.append(f"-r={result_file_name}")
    if log_flags:
        flags.append(f"-lv={log_flags}")
    return " ".join(flags)


def sync_local_ffd_runtime_files(work_dir, runtime_files=LOCAL_FFD_RUNTIME_FILES):
    """Copy the local FFD input files into the simulation working directory."""
    work_dir_path = Path(work_dir).resolve()
    work_dir_path.mkdir(parents=True, exist_ok=True)

    for file_name in runtime_files:
        src = Path(file_name).resolve()
        if not src.exists():
            raise FileNotFoundError(
                f"required FFD runtime file `{file_name}` was not found at `{src}`"
            )
        shutil.copy2(src, work_dir_path / src.name)


def extract_result_candidates(sim_result, work_dir, file_name_prefix, explicit_result_name=None):
    """Return candidate result file paths based on OMC output and local conventions."""
    candidates = []

    if explicit_result_name:
        candidates.append(Path(work_dir) / explicit_result_name)
    candidates.append(Path(work_dir) / f"{file_name_prefix}.mat")

    if isinstance(sim_result, dict):
        result_file = sim_result.get("resultFile")
        if result_file:
            result_path = Path(str(result_file))
            if not result_path.is_absolute():
                result_path = Path(work_dir) / result_path
            candidates.insert(0, result_path)
    else:
        match = re.search(r'resultFile\\s*=\\s*"([^"]+)"', str(sim_result))
        if match:
            result_path = Path(match.group(1))
            if not result_path.is_absolute():
                result_path = Path(work_dir) / result_path
            candidates.insert(0, result_path)

    seen = set()
    ordered = []
    for candidate in candidates:
        resolved = candidate.resolve() if candidate.exists() else candidate
        key = str(resolved)
        if key in seen:
            continue
        seen.add(key)
        ordered.append(candidate)
    return ordered


def wait_for_nonempty_result(candidate_paths, timeout_s=10.0, poll_s=0.25):
    """Wait briefly for a non-empty result file to appear after simulate()."""
    deadline = time.time() + timeout_s
    while time.time() < deadline:
        for candidate in candidate_paths:
            if candidate.exists() and candidate.stat().st_size > 0:
                return candidate.resolve()
        time.sleep(poll_s)
    return None


def simulation_finished_successfully(sim_result):
    """Return True when OpenModelica reported a successful simulation."""
    if isinstance(sim_result, dict):
        messages = str(sim_result.get("messages", ""))
        if "The simulation finished successfully" in messages:
            return True
        return bool(sim_result.get("resultFile"))

    return "The simulation finished successfully" in str(sim_result)


def mat_result_reaches_stop_time(mat_path, expected_stop_time_s, probe_names=None):
    """Return True when a materialized .mat file contains data at the requested stop time."""
    if not Path(mat_path).exists() or Path(mat_path).stat().st_size == 0:
        return False

    if HAS_BP:
        reader = MATReader(str(mat_path), "dymola")
        names = probe_names or reader.varNames()
        for name in names:
            try:
                t_arr, _ = reader.values(name)
            except Exception:
                continue
            if len(t_arr) and abs(float(t_arr[-1]) - float(expected_stop_time_s)) <= 1e-6:
                return True
        return False

    if HAS_SCIPY:
        try:
            mat = sio.loadmat(mat_path, squeeze_me=True)
        except Exception:
            return False
        for key, value in mat.items():
            if key.startswith("__"):
                continue
            if hasattr(value, "shape") and getattr(value, "size", 0) > 0:
                return True
        return False

    return False


def load_required_modelica_files(omc, buildings_package, additional_model_files):
    """Load Buildings and any local Modelica files into the active OMC session."""
    if not omc.sendExpression("loadModel(Modelica)"):
        err = omc.sendExpression("getErrorString()")
        raise RuntimeError(f"failed to load Modelica library: {err}")

    buildings_package_path = (
        buildings_package.as_posix() if buildings_package is not None else None
    )
    if buildings_package_path is not None:
        if not omc.sendExpression(f'loadFile("{buildings_package_path}")'):
            err = omc.sendExpression("getErrorString()")
            raise RuntimeError(
                "failed to load Buildings library from "
                f"{buildings_package}: {err}"
            )
    elif not omc.sendExpression("loadModel(Buildings)"):
        err = omc.sendExpression("getErrorString()")
        raise RuntimeError(f"failed to load Buildings library: {err}")

    for model_file in additional_model_files:
        model_path = Path(model_file).resolve().as_posix()
        if not omc.sendExpression(f'loadFile("{model_path}")'):
            err = omc.sendExpression("getErrorString()")
            raise RuntimeError(f"failed to load model file `{model_file}`: {err}")


def simulate_modelica_class(
    omc,
    class_name,
    work_dir,
    stop_time_s,
    number_of_intervals,
    file_name_prefix,
    result_file_name=None,
    log_flags=None,
):
    """Run a Modelica simulation and return (result_path, raw_omc_result, exception_text)."""
    work_dir_path = Path(work_dir).resolve()
    explicit_result_name = result_file_name or f"{file_name_prefix}.mat"
    simflags = build_simflags(
        result_file_name=explicit_result_name,
        log_flags=log_flags,
    )

    if not omc.sendExpression(f'cd("{work_dir_path.as_posix()}")'):
        err = omc.sendExpression("getErrorString()")
        raise RuntimeError(f"failed to switch OMC working directory: {err}")

    sim_expr = (
        f'simulate({class_name}, '
        f'stopTime={stop_time_s:.0f}, '
        f'numberOfIntervals={number_of_intervals}, '
        f'tolerance=1e-6, '
        f'outputFormat="mat", '
        f'fileNamePrefix="{file_name_prefix}", '
        f'simflags="{simflags}")'
    )
    sim_result = None
    sim_exception = None
    try:
        sim_result = omc.sendExpression(sim_expr)
    except Exception as exc:
        sim_exception = str(exc)
        sim_result = sim_exception

    candidate_paths = extract_result_candidates(
        sim_result,
        work_dir_path,
        file_name_prefix,
        explicit_result_name,
    )
    result_path = wait_for_nonempty_result(candidate_paths)
    return result_path, sim_result, sim_exception


def run_official_buildings_ffd_gate(preflight, output_root):
    """Compile and run the upstream Buildings FFD example before local scenarios."""
    if not HAS_OMC:
        return None

    gate_dir = Path(output_root).resolve().parent / "om_buildings_example"
    gate_dir.mkdir(parents=True, exist_ok=True)

    omc = None
    try:
        omc = OMCSessionZMQ()
        load_required_modelica_files(omc, preflight["buildings_package"], [])
        result_path, sim_result, sim_exception = simulate_modelica_class(
            omc=omc,
            class_name=OFFICIAL_FFD_EXAMPLE,
            work_dir=gate_dir,
            stop_time_s=OFFICIAL_FFD_STOP_S,
            number_of_intervals=compute_number_of_intervals(
                OFFICIAL_FFD_STOP_S,
                OFFICIAL_FFD_SYNC_DT,
            ),
            file_name_prefix="ForcedConvection_30s",
            result_file_name="ForcedConvection_30s.mat",
            log_flags=OFFICIAL_FFD_LOG_FLAGS,
        )

        if result_path is not None and mat_result_reaches_stop_time(
            result_path,
            OFFICIAL_FFD_STOP_S,
            probe_names=["roo.ports[1].m_flow"],
        ):
            return result_path

        err = omc.sendExpression("getErrorString()")
        print("  ERROR: official Buildings FFD example failed.")
        print(f"         simulate(...) returned: {sim_result}")
        if sim_exception:
            print(f"         OMC exception: {sim_exception}")
        if err:
            print(f"         OMC error: {err}")
        return None
    except Exception as exc:
        print(f"  ERROR while running official Buildings FFD example: {exc}")
        return None
    finally:
        if omc is not None:
            try:
                omc.quit()
            except Exception:
                pass


def run_omc_simulation(
    scenario_id,
    scenario_mo_path,
    work_dir,
    stop_time_s,
    sync_dt_s,
    preflight=None,
):
    """
    Compile and simulate using OpenModelica via OMPython.
    Returns path to the .mat result file, or None on failure.
    """
    if not HAS_OMC:
        return None

    if preflight is None:
        preflight = preflight_openmodelica_runtime()

    if preflight["errors"]:
        print("  ERROR: OpenModelica/Buildings preflight failed:")
        for issue in preflight["errors"]:
            print(f"         - {issue}")
        return None

    omc = None
    try:
        sync_local_ffd_runtime_files(work_dir)
        omc = OMCSessionZMQ()
        load_required_modelica_files(
            omc,
            preflight["buildings_package"],
            ["dc_model.mo", scenario_mo_path],
        )

        class_name = f"Scenario_{scenario_id}"
        number_of_intervals = compute_number_of_intervals(stop_time_s, sync_dt_s)
        result_path, sim_result, sim_exception = simulate_modelica_class(
            omc=omc,
            class_name=class_name,
            work_dir=work_dir,
            stop_time_s=stop_time_s,
            number_of_intervals=number_of_intervals,
            file_name_prefix=scenario_id,
            result_file_name=f"{scenario_id}.mat",
        )
        if result_path is None:
            err = omc.sendExpression("getErrorString()")
            print(f"  WARNING: simulation may have failed: {sim_result}")
            if sim_exception:
                print(f"           OMC exception: {sim_exception}")
            if err:
                print(f"           OMC error: {err}")
            return None

        if sim_exception:
            print("  WARNING: OpenModelica raised an exception, but a non-empty .mat file was produced.")
            print(f"           Continuing with materialized result: {result_path}")
            print(f"           OMC exception: {sim_exception}")

        if not simulation_finished_successfully(sim_result):
            print("  WARNING: OpenModelica reported a failure, but a non-empty .mat file was produced.")
            print(f"           Continuing with materialized result: {result_path}")

        return str(result_path)

    except Exception as exc:
        print(f"  ERROR running OMC: {exc}")
        return None
    finally:
        if omc is not None:
            try:
                omc.quit()
            except Exception:
                pass


# ---------------------------------------------------------------------------
# Result parsing
# ---------------------------------------------------------------------------

def parse_mat_result(
    mat_path,
    sensors_path,
    stop_time_s=DEFAULT_EPISODE_S,
    sync_dt_s=DEFAULT_SYNC_DT,
):
    """
    Extract sensor time series from a Modelica .mat result file.

    Returns
    -------
    time_s      : (T,) float32
    control     : (T, 12) float32  [fan×6, Tsup×6]
    T_rack      : (T, 312) float32
    T_crac_ret  : (T, 6) float32
    T_crac_sup  : (T, 6) float32
    """
    number_of_intervals = compute_number_of_intervals(stop_time_s, sync_dt_s)
    t_uni = build_uniform_time_grid(stop_time_s, number_of_intervals)

    # Load sensor list to know rack inlet variable names
    rack_ids = []
    with open(sensors_path) as fh:
        reader = csv.DictReader(fh)
        for row in reader:
            if row["type"] == "rack_inlet_temperature":
                rack_ids.append(row["id"])

    if HAS_BP:
        try:
            r = MATReader(str(mat_path), "dymola")
        except Exception as exc:
            print(f"  ERROR: failed to open `{mat_path}` with BuildingsPy: {exc}")
            return None
        t = r.varNames()
        # Helper: safe read (return NaN column if not present)
        def get_var(name):
            try:
                t_arr, v_arr = r.values(name)
                # Interpolate to uniform grid
                return np.interp(t_uni, t_arr, v_arr).astype(np.float32)
            except Exception:
                return np.full(number_of_intervals + 1, np.nan, dtype=np.float32)

    elif HAS_SCIPY:
        try:
            mat = sio.loadmat(mat_path, squeeze_me=True)
        except Exception as exc:
            print(f"  ERROR: failed to open `{mat_path}` with scipy: {exc}")
            return None
        name_arr = mat.get("name", [])
        data_arr = mat.get("data_2", mat.get("dataInfo", None))

        def get_var(name):
            # scipy .mat for Dymola: 'name' rows, 'data_2' columns
            try:
                idx = list(name_arr).index(name)
                return data_arr[idx].astype(np.float32)
            except (ValueError, IndexError):
                return np.full(number_of_intervals + 1, np.nan, dtype=np.float32)
    else:
        print("  ERROR: no .mat reader available (install BuildingsPy or scipy)")
        return None

    def get_first_available(names):
        for name in names:
            values = get_var(name)
            if not np.all(np.isnan(values)):
                return values
        return np.full(number_of_intervals + 1, np.nan, dtype=np.float32)

    # Control
    fan_data  = np.stack([
        get_first_available([f"u_fan[{i+1}]", f"dc.u_fan[{i+1}]"])
        for i in range(N_CRAC)
    ], axis=1)
    Tsup_data = np.stack([
        get_first_available([f"u_Tsup[{i+1}]", f"dc.u_Tsup[{i+1}]"])
        for i in range(N_CRAC)
    ], axis=1)
    control   = np.concatenate([fan_data, Tsup_data], axis=1)

    # Rack inlet temperatures (all 312 sensors)
    T_rack = np.stack([
        get_first_available([
            f"roo.CFDSensor.{rid}_T",
            f"dc.roo.CFDSensor.{rid}_T",
        ])
        for rid in rack_ids
    ], axis=1)
    # Fallback naming convention
    if np.all(np.isnan(T_rack)):
        T_rack = np.stack([
            get_first_available([f"T_rack_{j}", f"dc.T_rack_{j}"])
            for j in range(len(rack_ids))
        ], axis=1)

    # CRAC temperatures
    T_crac_ret = np.stack([
        get_first_available([f"T_ret_out[{i+1}]", f"dc.T_ret_out[{i+1}]"])
        for i in range(N_CRAC)
    ], axis=1)
    T_crac_sup = np.stack([
        get_first_available([f"T_sup_out[{i+1}]", f"dc.T_sup_out[{i+1}]"])
        for i in range(N_CRAC)
    ], axis=1)

    return t_uni, control, T_rack, T_crac_ret, T_crac_sup


# ---------------------------------------------------------------------------
# Main
# ---------------------------------------------------------------------------

def main():
    ap = argparse.ArgumentParser(
        description="Generate ML training data via FFD–Modelica scenario sweeps")
    ap.add_argument("--config",   default="dc_config.yaml")
    ap.add_argument("--sensors",  default="sensor_locations.csv")
    ap.add_argument("--outdir",   default="output/training_data")
    ap.add_argument("--stop-time", type=float, default=DEFAULT_EPISODE_S,
                    help="Simulation stop time in seconds (default: 900)")
    ap.add_argument("--sync-dt", type=float, default=DEFAULT_SYNC_DT,
                    help="Modelica/FFD exchange interval in seconds (default: 10)")
    ap.add_argument("--scenario", default=None,
                    help="Run only this scenario ID (for debugging)")
    ap.add_argument("--dry-run",  action="store_true",
                    help="Generate scenario files without running simulations")
    ap.add_argument("--skip-runtime-gate", action="store_true",
                    help="Skip the official Buildings FFD example preflight run")
    args = ap.parse_args()

    os.makedirs(args.outdir, exist_ok=True)
    os.makedirs("scenarios", exist_ok=True)

    if args.stop_time <= 0:
        print("ERROR: --stop-time must be > 0")
        sys.exit(1)
    if args.sync_dt <= 0:
        print("ERROR: --sync-dt must be > 0")
        sys.exit(1)
    if compute_number_of_intervals(args.stop_time, args.sync_dt) <= 0:
        print("ERROR: --stop-time/--sync-dt produced zero intervals")
        sys.exit(1)

    with open(args.config) as fh:
        cfg = yaml.safe_load(fh)

    # --- Build scenario list ---
    all_scenarios = generate_scenarios()
    if args.scenario:
        all_scenarios = [s for s in all_scenarios if s["id"] == args.scenario]
        if not all_scenarios:
            print(f"ERROR: scenario '{args.scenario}' not found")
            sys.exit(1)

    preflight = None
    if not args.dry_run:
        preflight = preflight_openmodelica_runtime()
        if preflight["errors"]:
            print("ERROR: OpenModelica/Buildings preflight failed:")
            for issue in preflight["errors"]:
                print(f"  - {issue}")
            sys.exit(1)

        print("Preflight:")
        print(f"  omc:       {preflight['omc_path']}")
        print(f"  Buildings: {preflight['buildings_package']}")
        if preflight["ffd_runtime"] is not None:
            print(f"  ffd lib:   {preflight['ffd_runtime']}")

        if not args.skip_runtime_gate:
            print("\nRunning official Buildings FFD runtime gate...")
            gate_result = run_official_buildings_ffd_gate(preflight, args.outdir)
            if gate_result is None:
                print("ERROR: official Buildings FFD example did not produce a .mat result.")
                sys.exit(1)
            print(f"  Runtime gate passed: {gate_result}")

    # --- Run each scenario ---
    results = []
    t_start_all = time.time()
    for idx, sc in enumerate(all_scenarios):
        print(f"\n[{idx+1}/{len(all_scenarios)}] {sc['id']}: {sc['description']}")

        # Write scenario Modelica file
        sc_mo_path = os.path.join("scenarios", f"{sc['id']}.mo")
        write_scenario_mo(
            sc,
            sc_mo_path,
            stop_time_s=args.stop_time,
            sync_dt_s=args.sync_dt,
        )

        if args.dry_run:
            print(f"  Dry run: wrote {sc_mo_path}")
            continue

        # Run simulation
        mat_path = run_omc_simulation(
            sc["id"],
            sc_mo_path,
            args.outdir,
            stop_time_s=args.stop_time,
            sync_dt_s=args.sync_dt,
            preflight=preflight,
        )
        if mat_path is None:
            print(f"  SKIP: simulation failed or OMC not available")
            continue

        # Parse results
        parsed = parse_mat_result(
            mat_path,
            args.sensors,
            stop_time_s=args.stop_time,
            sync_dt_s=args.sync_dt,
        )
        if parsed is None:
            print(f"  SKIP: could not parse {mat_path}")
            continue

        t_arr, control, T_rack, T_crac_ret, T_crac_sup = parsed

        # Save episode
        out_path = os.path.join(args.outdir, f"{sc['id']}.npz")
        np.savez_compressed(
            out_path,
            time_s     = t_arr,
            control    = control.astype(np.float32),
            T_rack     = T_rack.astype(np.float32),
            T_crac_ret = T_crac_ret.astype(np.float32),
            T_crac_sup = T_crac_sup.astype(np.float32),
            scenario_id = sc["id"],
            description = sc["description"],
        )
        print(f"  Saved: {out_path}  "
              f"(T_rack shape: {T_rack.shape}, "
              f"T_max={np.nanmax(T_rack):.1f}°C)")
        results.append(out_path)

    if args.dry_run:
        print(f"\nDry run complete. {len(all_scenarios)} scenario .mo files written.")
        return

    # --- Aggregate into single training dataset ---
    if results:
        print(f"\nAggregating {len(results)} episodes into training_dataset.npz...")
        all_episodes = []
        for p in results:
            d = np.load(p, allow_pickle=True)
            all_episodes.append({
                "control":    d["control"],
                "T_rack":     d["T_rack"],
                "T_crac_ret": d["T_crac_ret"],
                "T_crac_sup": d["T_crac_sup"],
            })

        ds_path = os.path.join("output", "training_dataset.npz")
        np.savez_compressed(
            ds_path,
            # Stack along episode axis (axis 0)
            control    = np.stack([e["control"]    for e in all_episodes]),   # (N_ep, T, 12)
            T_rack     = np.stack([e["T_rack"]     for e in all_episodes]),   # (N_ep, T, 312)
            T_crac_ret = np.stack([e["T_crac_ret"] for e in all_episodes]),   # (N_ep, T, 6)
            T_crac_sup = np.stack([e["T_crac_sup"] for e in all_episodes]),   # (N_ep, T, 6)
            scenario_ids = np.array([os.path.basename(p) for p in results]),
        )
        print(f"  Dataset saved: {ds_path}")
        print(f"  Episodes: {len(results)}")
        print(f"  Control shape: {np.stack([e['control'] for e in all_episodes]).shape}")

    elapsed = time.time() - t_start_all
    print(f"\nTotal wall time: {elapsed:.0f} s ({elapsed/60:.1f} min)")


if __name__ == "__main__":
    main()
