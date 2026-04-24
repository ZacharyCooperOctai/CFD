from __future__ import annotations

import json
from math import isclose
from pathlib import Path

import numpy as np

from .common import default_run_id, load_case_config, repo_root, stage_dir
from .logging_utils import StageRecorder, ensure_clean_dir, tail_lines
from .manifests import write_json


RACK_SOURCE = 11
RACK_COLD_FACE = 7
RACK_HOT_FACE = 8
TILE_OPENING = 9
HOT_AISLE_EXTRACTOR = 12


def _active_rack_count(cfg: dict) -> int:
    total = 0
    default_slots = int(cfg['rack_defaults']['racks_per_row'])
    for row in cfg['rack_rows']:
        slots = int(row.get('rack_positions', default_slots))
        missing = {int(value) for value in row.get('missing_rack_indices', [])}
        total += sum(1 for idx in range(1, slots + 1) if idx not in missing)
    return total


def _expected_rack_heat_w(cfg: dict) -> float:
    default_heat_kw = float(cfg['rack_defaults']['default_heat_per_rack_kw'])
    default_slots = int(cfg['rack_defaults']['racks_per_row'])
    total = 0.0
    for row in cfg['rack_rows']:
        slots = int(row.get('rack_positions', default_slots))
        missing = {int(value) for value in row.get('missing_rack_indices', [])}
        active = sum(1 for idx in range(1, slots + 1) if idx not in missing)
        total += float(row.get('heat_per_rack_kw', default_heat_kw)) * 1000.0 * active
    return total


def _expects_tile_regions(cfg: dict) -> bool:
    return bool(cfg.get('perforated_tiles', {}).get('enabled', True))


def _active_return_capacity(cfg: dict) -> float:
    return sum(
        float(unit.get('rated_flow_m3s', 0.0))
        for unit in cfg['crac_units']
        if unit.get('active', True)
    )


def _read_dat(path: Path) -> np.ndarray:
    values: list[int] = []
    for line in path.read_text(encoding='utf-8', errors='replace').splitlines():
        values.extend(int(item) for item in line.split())
    return np.asarray(values, dtype=np.int8)


def _load_result_plt(path: Path) -> dict[str, np.ndarray]:
    lines = path.read_text(encoding='utf-8', errors='replace').splitlines()
    variables_line = lines[1].strip()
    raw_names = variables_line.split('=', 1)[1].split(',')
    names = [name.strip() for name in raw_names]
    raw = np.loadtxt(path, skiprows=3)
    return {name: raw[:, idx] for idx, name in enumerate(names)}


def _bounds_mask(data: dict[str, np.ndarray], bounds: dict, fluid_only: bool = True) -> np.ndarray:
    mask = (
        (data['X'] >= float(bounds['x_min'])) & (data['X'] <= float(bounds['x_max'])) &
        (data['Y'] >= float(bounds['y_min'])) & (data['Y'] <= float(bounds['y_max'])) &
        (data['Z'] >= float(bounds['z_min'])) & (data['Z'] <= float(bounds['z_max']))
    )
    if fluid_only and 'FlagP' in data:
        mask &= np.isclose(data['FlagP'], -1.0)
    return mask


def _flow_weighted_temp(data: dict[str, np.ndarray], mask: np.ndarray, direction: list[float]) -> tuple[float, float]:
    if not np.any(mask):
        return float('nan'), 0.0
    normal = data['U'][mask] * direction[0] + data['V'][mask] * direction[1] + data['W'][mask] * direction[2]
    positive = np.maximum(normal, 0.0)
    if float(np.sum(positive)) <= 1e-12:
        return float(np.mean(data['T'][mask])), 0.0
    return float(np.sum(data['T'][mask] * positive) / np.sum(positive)), float(np.mean(positive))


def _temperature_distribution_diagnostics(
    cfg: dict,
    data: dict[str, np.ndarray],
) -> tuple[dict, list[str]]:
    warnings: list[str] = []
    ambient = float(cfg['ffd']['initial_temp_c'])
    fluid = np.isclose(data.get('FlagP', np.full_like(data['T'], -1.0)), -1.0)
    temps = data['T'][fluid]
    temps = temps[np.isfinite(temps)]
    if temps.size == 0:
        return {'fluid_cell_count': 0}, ['No finite fluid temperature cells were available.']

    max_t = float(np.max(temps))
    min_t = float(np.min(temps))
    mean_t = float(np.mean(temps))
    active = temps > ambient + 0.10
    active_t = temps[active]
    unique_rounded_0p1 = int(np.unique(np.round(temps, 1)).size)
    active_unique_rounded_0p1 = int(np.unique(np.round(active_t, 1)).size) if active_t.size else 0
    intermediate = (temps > ambient + 0.5) & (temps < max_t - 0.5)
    active_intermediate = (
        (active_t > ambient + 0.5) & (active_t < max_t - 0.5)
        if active_t.size else np.asarray([], dtype=bool)
    )

    entropy_bits = 0.0
    entropy_normalized = 0.0
    if active_t.size and max_t > ambient + 1.0:
        hist, _ = np.histogram(active_t, bins=16, range=(ambient, max_t))
        nonzero = hist[hist > 0].astype(float)
        if nonzero.size:
            prob = nonzero / np.sum(nonzero)
            entropy_bits = float(-np.sum(prob * np.log2(prob)))
            entropy_normalized = float(entropy_bits / np.log2(16))

    diag = {
        'fluid_cell_count': int(temps.size),
        'min_c': min_t,
        'mean_c': mean_t,
        'max_c': max_t,
        'unique_rounded_0p1_count': unique_rounded_0p1,
        'active_cell_count': int(active_t.size),
        'active_unique_rounded_0p1_count': active_unique_rounded_0p1,
        'intermediate_cell_fraction': float(np.sum(intermediate) / max(temps.size, 1)),
        'active_intermediate_cell_fraction': float(np.sum(active_intermediate) / max(active_t.size, 1)),
        'active_histogram_entropy_bits': entropy_bits,
        'active_histogram_entropy_normalized': entropy_normalized,
    }

    if max_t > ambient + 10.0 and active_t.size > 100:
        if active_unique_rounded_0p1 < 8:
            warnings.append(
                f"Temperature field appears too quantized: only {active_unique_rounded_0p1} active rounded temperature levels."
            )
        if diag['active_intermediate_cell_fraction'] < 0.05:
            warnings.append(
                "Temperature field appears nearly binary: fewer than 5% of heated cells are intermediate temperatures."
            )
        if entropy_normalized < 0.25:
            warnings.append(
                f"Temperature histogram entropy is low ({entropy_normalized:.2f}); scalar transport/mixing may be under-resolved."
            )

    return diag, warnings


def _rack_and_aisle_diagnostics(cfg: dict, sources: dict, data: dict[str, np.ndarray]) -> tuple[dict, list[str], list[str]]:
    fluid = sources.get('fluid', {})
    rho = float(fluid.get('density_kg_m3', cfg['fluid']['density']))
    cp = float(fluid.get('specific_heat_j_kg_k', cfg['fluid']['specific_heat']))
    rack_diags = []
    errors: list[str] = []
    warnings: list[str] = []

    total_expected = 0.0
    total_observed = 0.0
    total_cold_flow = 0.0
    total_hot_flow = 0.0
    for rack in sources.get('rack_sources', []):
        direction = [float(v) for v in rack['flow_direction']]
        cold_mask = _bounds_mask(data, rack['cold_face_bounds'])
        hot_mask = _bounds_mask(data, rack['hot_face_bounds'])
        tin, cold_speed = _flow_weighted_temp(data, cold_mask, direction)
        tout, hot_speed = _flow_weighted_temp(data, hot_mask, direction)
        airflow = max(float(rack.get('airflow_m3s', 0.0)), 0.05)
        expected = float(rack['total_heat_w'])
        observed = rho * airflow * cp * max(tout - tin, 0.0)
        cold_flow = cold_speed * float(rack.get('face_area_m2', 0.0))
        hot_flow = hot_speed * float(rack.get('face_area_m2', 0.0))
        total_expected += expected
        total_observed += observed
        total_cold_flow += cold_flow
        total_hot_flow += hot_flow
        rack_diags.append({
            'id': rack['id'],
            'tin_c': tin,
            'tout_c': tout,
            'delta_t_c': tout - tin,
            'expected_heat_w': expected,
            'observed_heat_w': observed,
            'cold_flow_m3s': cold_flow,
            'hot_flow_m3s': hot_flow,
            'cold_face_cells': int(np.sum(cold_mask)),
            'hot_face_cells': int(np.sum(hot_mask)),
        })
        if not np.any(cold_mask) or not np.any(hot_mask):
            errors.append(f"Rack {rack['id']} cold/hot face has no result cells.")
            continue
        if tout <= tin + 5.0:
            errors.append(f"Rack {rack['id']} outlet is not at least 5 C hotter than inlet ({tin:.2f} -> {tout:.2f}).")
        if expected > 0 and abs(observed - expected) / expected > 0.20:
            warnings.append(f"Rack {rack['id']} heat pickup differs from configured heat by >20% ({observed:.1f} W vs {expected:.1f} W).")
        denom = max(max(cold_flow, hot_flow), 1e-9)
        if abs(cold_flow - hot_flow) / denom > 0.20:
            warnings.append(f"Rack {rack['id']} inlet/outlet flow differs by >20% ({cold_flow:.3f} vs {hot_flow:.3f} m3/s).")

    ambient = float(cfg['ffd']['initial_temp_c'])
    rack_map = {rack['id']: rack for rack in sources.get('rack_sources', [])}
    aisle_diags = []
    for extractor in sources.get('hot_aisle_extractors', []):
        between = extractor.get('between', [])
        if len(between) != 2 or between[0] not in rack_map or between[1] not in rack_map:
            continue
        r1 = rack_map[between[0]]
        r2 = rack_map[between[1]]
        b1 = r1['body_bounds']
        b2 = r2['body_bounds']
        strict = {
            'x_min': max(float(b1['x_min']), float(b2['x_min'])) + 0.03,
            'x_max': min(float(b1['x_max']), float(b2['x_max'])) - 0.03,
            'y_min': min(float(b1['y_max']), float(b2['y_max'])) + 0.03,
            'y_max': max(float(b1['y_min']), float(b2['y_min'])) - 0.03,
            'z_min': 0.30,
            'z_max': min(float(b1['z_max']), float(b2['z_max'])) - 0.03,
        }
        mask = _bounds_mask(data, strict)
        if not np.any(mask):
            warnings.append(f"Hot aisle {extractor['hot_aisle_id']} strict interior has no result cells.")
            continue
        mean_t = float(np.mean(data['T'][mask]))
        max_t = float(np.max(data['T'][mask]))
        aisle_diags.append({
            'id': extractor['hot_aisle_id'],
            'mean_c': mean_t,
            'max_c': max_t,
            'cell_count': int(np.sum(mask)),
        })
        if mean_t <= ambient + 3.0:
            warnings.append(f"Hot aisle {extractor['hot_aisle_id']} mean is not > ambient+3 C ({mean_t:.2f} C).")
        if max_t <= ambient + 10.0:
            warnings.append(f"Hot aisle {extractor['hot_aisle_id']} max is not > ambient+10 C ({max_t:.2f} C).")

    global_error = abs(total_observed - total_expected) / max(total_expected, 1e-9)
    if total_expected > 0 and global_error > 0.10:
        warnings.append(f"Global rack heat pickup differs from configured heat by >10% ({total_observed:.1f} W vs {total_expected:.1f} W).")
    global_flow_error = abs(total_cold_flow - total_hot_flow) / max(max(total_cold_flow, total_hot_flow), 1e-9)
    if global_flow_error > 0.10:
        warnings.append(
            f"Global rack inlet/outlet flow differs by >10% ({total_cold_flow:.3f} vs {total_hot_flow:.3f} m3/s)."
        )
    temp_distribution, temp_warnings = _temperature_distribution_diagnostics(cfg, data)
    warnings.extend(temp_warnings)

    return {
        'racks': rack_diags,
        'hot_aisles': aisle_diags,
        'temperature_distribution': temp_distribution,
        'global_expected_heat_w': total_expected,
        'global_observed_heat_w': total_observed,
        'global_relative_error': global_error,
        'global_cold_flow_m3s': total_cold_flow,
        'global_hot_flow_m3s': total_hot_flow,
        'global_flow_relative_error': global_flow_error,
    }, errors, warnings


def validate_standalone(case_id: str, run_id: str | None = None) -> dict:
    root = repo_root()
    cfg = load_case_config(case_id)
    run_id = default_run_id(cfg, explicit=run_id)
    vdir = stage_dir(case_id, 'validate', run_id)
    ensure_clean_dir(vdir)
    recorder = StageRecorder(root=root, stage_dir=vdir, case_id=case_id, stage='validate-standalone', run_id=run_id)
    recorder.write_manifest(['python', '-m', 'cfd_pipeline.cli', 'validate-standalone', '--case', case_id, '--run-id', run_id])
    recorder.write_status('started')

    ingest_dir = root / 'ingest' / case_id / 'current'
    run_dir = stage_dir(case_id, 'run', run_id)
    sources_path = ingest_dir / 'case.sources'
    flags_path = ingest_dir / 'cell_flags.npy'
    dat_path = ingest_dir / 'case.dat'
    log_path = run_dir / 'diagnostics' / 'log_gpu.ffd'
    result_plt = run_dir / 'runtime' / 'result.plt'

    errors: list[str] = []
    warnings: list[str] = []
    payload: dict = {'case_id': case_id, 'run_id': run_id, 'errors': errors, 'warnings': warnings}

    if cfg['case'].get('physics_model') == 'physics-v1':
        if not sources_path.exists():
            errors.append(f'Missing physics-v1 source file: {sources_path}')
        else:
            sources = json.loads(sources_path.read_text(encoding='utf-8'))
            payload['source_totals'] = sources.get('totals', {})
            expected_heat = _expected_rack_heat_w(cfg)
            observed_heat = float(sources.get('totals', {}).get('rack_heat_w', 0.0))
            if not isclose(observed_heat, expected_heat, rel_tol=1e-9, abs_tol=1e-6):
                errors.append(f'Rack heat mismatch: expected {expected_heat}, observed {observed_heat}')
            if len(sources.get('rack_sources', [])) != _active_rack_count(cfg):
                errors.append('Rack source count does not match configured active rack count.')
            if _expects_tile_regions(cfg) and len(sources.get('tile_pressure_jumps', [])) != len(cfg['rack_rows']):
                errors.append('Tile pressure-jump region count does not match rack row count.')
            if not sources.get('hot_aisle_extractors'):
                errors.append('No hot-aisle extractors were generated.')
            for rack in sources.get('rack_sources', []):
                for key in ('body_bounds', 'cold_face_bounds', 'hot_face_bounds', 'plume_bounds'):
                    bounds = rack.get(key, {})
                    if any(float(bounds.get(axis, 0.0)) == 0.0 and axis.endswith('_max') for axis in ('x_max', 'y_max', 'z_max')):
                        errors.append(f"Rack {rack.get('id', '<unknown>')} has invalid {key}.")
                if int(rack.get('cold_face_cell_count', 0)) <= 0 or int(rack.get('hot_face_cell_count', 0)) <= 0:
                    errors.append(f"Rack {rack.get('id', '<unknown>')} has an empty cold/hot face slab.")
                if int(rack.get('plume_cell_count', 0)) <= 0:
                    errors.append(f"Rack {rack.get('id', '<unknown>')} has an empty exhaust plume slab.")
                if float(rack.get('hot_face_volume_m3', 0.0)) <= 0.0:
                    errors.append(f"Rack {rack.get('id', '<unknown>')} has invalid hot-face source volume.")
            for extractor in sources.get('hot_aisle_extractors', []):
                if float(extractor.get('slot_area_m2', 0.0)) <= 0.0:
                    errors.append(f"Extractor {extractor.get('id', '<unknown>')} has zero slot area.")
            total_extractor_flow = float(sources.get('totals', {}).get('hot_aisle_extractor_flow_m3s', 0.0))
            total_return_capacity = _active_return_capacity(cfg)
            if total_extractor_flow > total_return_capacity + 1e-9:
                errors.append(
                    f'Hot-aisle extractor flow {total_extractor_flow} exceeds CRAC return capacity {total_return_capacity}.'
                )

        if flags_path.exists() and dat_path.exists():
            flags = np.load(flags_path)
            dat = _read_dat(dat_path)
            if dat.size != flags.size:
                errors.append(f'.dat cell count {dat.size} does not match cell_flags.npy size {flags.size}')
            else:
                dat_grid = dat.reshape(flags.shape, order='F')
                rack_solid = int(np.sum(dat_grid[flags == RACK_SOURCE]))
                tile_count = int(np.sum(flags == TILE_OPENING))
                cold_count = int(np.sum(flags == RACK_COLD_FACE))
                hot_count = int(np.sum(flags == RACK_HOT_FACE))
                extractor_count = int(np.sum(flags == HOT_AISLE_EXTRACTOR))
                payload['rack_source_cells_marked_solid'] = rack_solid
                payload['tile_opening_cells'] = tile_count
                payload['rack_cold_face_cells'] = cold_count
                payload['rack_hot_face_cells'] = hot_count
                payload['hot_aisle_extractor_cells'] = extractor_count
                if rack_solid:
                    errors.append(f'{rack_solid} rack source cells are solid in case.dat; racks must remain fluid.')
                if int(np.sum(dat_grid[flags == RACK_COLD_FACE])) or int(np.sum(dat_grid[flags == RACK_HOT_FACE])):
                    errors.append('Rack cold/hot face cells are solid in case.dat; rack device faces must remain fluid.')
                if int(np.sum(dat_grid[flags == HOT_AISLE_EXTRACTOR])):
                    errors.append('Hot-aisle extractor cells are solid in case.dat; extractor guide cells must remain fluid.')
                if _expects_tile_regions(cfg) and tile_count == 0:
                    errors.append('No tile opening cells were flagged.')
                if cold_count == 0 or hot_count == 0:
                    errors.append('Rack cold/hot face CellType flags are missing.')
                if extractor_count == 0:
                    errors.append('Hot-aisle extractor CellType flags are missing.')
        else:
            errors.append('Missing cell_flags.npy or case.dat for source-region validation.')

    if log_path.exists():
        log_text = log_path.read_text(encoding='utf-8', errors='replace')
        for pattern in cfg['case'].get('validation', {}).get('fail_on_ffd_patterns', []):
            if pattern.lower() in log_text.lower():
                errors.append(f'Forbidden FFD pattern found: {pattern}')
    else:
        warnings.append('No log_gpu.ffd was captured for this run.')

    if not result_plt.exists() and not (run_dir / 'results' / 'result.plt').exists():
        warnings.append('No result.plt found; VTK export will be unavailable until the solver writes field output.')
    elif cfg['case'].get('physics_model') == 'physics-v1' and sources_path.exists():
        result_path = result_plt if result_plt.exists() else run_dir / 'results' / 'result.plt'
        try:
            sources = json.loads(sources_path.read_text(encoding='utf-8'))
            diagnostics, diag_errors, diag_warnings = _rack_and_aisle_diagnostics(
                cfg, sources, _load_result_plt(result_path)
            )
            payload['physics_diagnostics'] = diagnostics
            errors.extend(diag_errors)
            warnings.extend(diag_warnings)
        except Exception as exc:
            errors.append(f'Could not compute physics diagnostics: {type(exc).__name__}: {exc}')

    write_json(vdir / 'validation.json', payload)
    if errors:
        recorder.write_status('failed', exit_code=1, failing_step='validate-standalone')
        recorder.write_summary([
            '# Standalone Validation Summary',
            '',
            f'- Case: `{case_id}`',
            f'- Run id: `{run_id}`',
            '',
            'Errors:',
            *[f'- {err}' for err in errors],
            *(['', 'Warnings:', *[f'- {warning}' for warning in warnings]] if warnings else []),
            '',
            'Last FFD log lines:',
            '```text',
            *tail_lines(log_path, 50),
            '```',
        ])
        raise RuntimeError('; '.join(errors))

    recorder.write_status('passed', exit_code=0, last_completed_step='validate-standalone')
    recorder.write_summary([
        '# Standalone Validation Summary',
        '',
        f'- Case: `{case_id}`',
        f'- Run id: `{run_id}`',
        '- Physics-v1 source-region checks passed.',
        *([f'- Warning: {warning}' for warning in warnings] if warnings else []),
    ])
    return payload
