#include "physics_sources.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static float value_after(const char *start, const char *key, float fallback) {
  const char *p = strstr(start, key);
  if (p == NULL) return fallback;
  p = strchr(p, ':');
  if (p == NULL) return fallback;
  return (float)strtod(p + 1, NULL);
}

static const char *array_after(const char *start, const char *key, float *out, int n) {
  const char *p = strstr(start, key);
  int i;
  if (p == NULL) return NULL;
  p = strchr(p, '[');
  if (p == NULL) return NULL;
  p++;
  for (i = 0; i < n; i++) {
    out[i] = (float)strtod(p, (char **)&p);
    p = strchr(p, (i == n - 1) ? ']' : ',');
    if (p == NULL) return NULL;
    p++;
  }
  return p;
}

static const char *section_after(const char *start, const char *key) {
  const char *p = strstr(start, key);
  if (p == NULL) return NULL;
  return strchr(p, '{');
}

static int bounds_after(const char *start, const char *key, float *out) {
  const char *p = section_after(start, key);
  if (p == NULL) return 0;
  out[0] = value_after(p, "\"x_min\"", 0.0f);
  out[1] = value_after(p, "\"x_max\"", 0.0f);
  out[2] = value_after(p, "\"y_min\"", 0.0f);
  out[3] = value_after(p, "\"y_max\"", 0.0f);
  out[4] = value_after(p, "\"z_min\"", 0.0f);
  out[5] = value_after(p, "\"z_max\"", 0.0f);
  return 1;
}

static const char *earliest_nonnull(const char *a, const char *b) {
  if (a == NULL) return b;
  if (b == NULL) return a;
  return a < b ? a : b;
}

static char *read_file(const char *path) {
  FILE *fh = fopen(path, "rb");
  long size;
  char *buf;
  if (fh == NULL) return NULL;
  if (fseek(fh, 0, SEEK_END) != 0) {
    fclose(fh);
    return NULL;
  }
  size = ftell(fh);
  if (size < 0) {
    fclose(fh);
    return NULL;
  }
  rewind(fh);
  buf = (char *)calloc((size_t)size + 1, 1);
  if (buf == NULL) {
    fclose(fh);
    return NULL;
  }
  if (fread(buf, 1, (size_t)size, fh) != (size_t)size) {
    free(buf);
    fclose(fh);
    return NULL;
  }
  fclose(fh);
  return buf;
}

int load_physics_v1_sources(const char *path, PHYSICS_V1_SOURCES *sources) {
  char *text;
  const char *p;
  const char *tile_start;
  const char *extractor_start;
  const char *rack_end;
  int count;
  memset(sources, 0, sizeof(*sources));

  text = read_file(path);
  if (text == NULL) return 0;
  if (strstr(text, "\"version\": \"physics-v1\"") == NULL) {
    free(text);
    return 0;
  }

  tile_start = strstr(text, "\"tile_pressure_jumps\"");
  extractor_start = strstr(text, "\"hot_aisle_extractors\"");
  rack_end = earliest_nonnull(tile_start, extractor_start);
  p = strstr(text, "\"rack_sources\"");
  count = 0;
  while (p != NULL && (rack_end == NULL || p < rack_end) && count < PHYSICS_V1_MAX_RACKS) {
    const char *next_new = strstr(p + 1, "\"type\": \"rack_device_heat_exchanger\"");
    const char *next_old = strstr(p + 1, "\"type\": \"rack_fluid_momentum_heat_source\"");
    const char *next = earliest_nonnull(next_new, next_old);
    float *body = &sources->rack_body_bounds[count * 6];
    float *cold = &sources->rack_cold_bounds[count * 6];
    float *hot = &sources->rack_hot_bounds[count * 6];
    float *plume = &sources->rack_plume_bounds[count * 6];
    float *d = &sources->rack_dir[count * 3];
    float face_area;
    if (next == NULL || (rack_end != NULL && next > rack_end)) break;
    p = next;
    if (!bounds_after(p, "\"body_bounds\"", body)) {
      bounds_after(p, "\"bounds\"", body);
    }
    if (!bounds_after(p, "\"cold_face_bounds\"", cold)) {
      memcpy(cold, body, 6 * sizeof(float));
    }
    if (!bounds_after(p, "\"hot_face_bounds\"", hot)) {
      memcpy(hot, body, 6 * sizeof(float));
    }
    if (!bounds_after(p, "\"plume_bounds\"", plume)) {
      memcpy(plume, hot, 6 * sizeof(float));
    }
    array_after(p, "\"flow_direction\"", d, 3);
    sources->rack_heat_w[count] = value_after(p, "\"total_heat_w\"", 0.0f);
    if (sources->rack_heat_w[count] <= 0.0f) {
      float volume = (body[1] - body[0]) * (body[3] - body[2]) * (body[5] - body[4]);
      sources->rack_heat_w[count] = value_after(p, "\"volumetric_heat_w_m3\"", 0.0f) * volume;
    }
    face_area = value_after(p, "\"face_area_m2\"", 0.0f);
    sources->rack_hot_volume_m3[count] = value_after(p, "\"hot_face_volume_m3\"", 0.0f);
    if (sources->rack_hot_volume_m3[count] <= 0.0f) {
      sources->rack_hot_volume_m3[count] =
        (hot[1] - hot[0]) * (hot[3] - hot[2]) * (hot[5] - hot[4]);
    }
    sources->rack_target_speed[count] = value_after(p, "\"target_velocity_m_s\"", 0.0f);
    sources->rack_airflow_m3s[count] = value_after(p, "\"airflow_m3s\"", 0.0f);
    if (sources->rack_airflow_m3s[count] <= 0.0f && face_area > 0.0f) {
      sources->rack_airflow_m3s[count] = sources->rack_target_speed[count] * face_area;
    }
    sources->rack_momentum_damping[count] = value_after(p, "\"momentum_damping_s_inv\"", 5.0f);
    sources->rack_thermal_damping[count] = value_after(p, "\"thermal_damping_s_inv\"", 5.0f);
    sources->rack_plume_mixing[count] = value_after(p, "\"plume_mixing_s_inv\"", 0.8f);
    sources->rack_source_delta_limit[count] = value_after(p, "\"max_source_delta_t_per_step_c\"", 2.0f);
    sources->rack_max_delta_t[count] = value_after(p, "\"max_delta_t_c\"", 60.0f);
    count++;
  }
  sources->rack_count = count;

  p = tile_start;
  count = 0;
  while (p != NULL && count < PHYSICS_V1_MAX_TILES) {
    const char *next = strstr(p + 1, "\"type\": \"floor_tile_pressure_jump_region\"");
    float *b = &sources->tile_bounds[count * 5];
    if (next == NULL) break;
    p = next;
    b[0] = value_after(p, "\"x_min\"", 0.0f);
    b[1] = value_after(p, "\"x_max\"", 0.0f);
    b[2] = value_after(p, "\"y_min\"", 0.0f);
    b[3] = value_after(p, "\"y_max\"", 0.0f);
    b[4] = value_after(p, "\"z\"", 0.0f);
    sources->tile_loss[count] = value_after(p, "\"loss_coefficient\"", 0.0f);
    count++;
  }
  sources->tile_count = count;

  p = extractor_start;
  count = 0;
  while (p != NULL && count < PHYSICS_V1_MAX_EXTRACTORS) {
    const char *next = strstr(p + 1, "\"type\": \"hot_aisle_extractor\"");
    float *b = &sources->extractor_bounds[count * 6];
    float *d = &sources->extractor_dir[count * 3];
    if (next == NULL) break;
    p = next;
    bounds_after(p, "\"bounds\"", b);
    array_after(p, "\"direction\"", d, 3);
    sources->extractor_target_speed[count] = value_after(p, "\"target_velocity_m_s\"", 0.0f);
    sources->extractor_max_speed[count] = value_after(p, "\"max_velocity_m_s\"", 3.0f);
    sources->extractor_damping[count] = value_after(p, "\"damping_s_inv\"", 3.0f);
    count++;
  }
  sources->extractor_count = count;
  sources->enabled = sources->rack_count > 0 || sources->tile_count > 0 || sources->extractor_count > 0;
  free(text);
  return sources->enabled;
}
