#ifndef PHYSICS_SOURCES_H
#define PHYSICS_SOURCES_H

#define PHYSICS_V1_MAX_RACKS 128
#define PHYSICS_V1_MAX_TILES 64
#define PHYSICS_V1_MAX_EXTRACTORS 32

typedef struct {
  int enabled;
  int rack_count;
  int tile_count;
  int extractor_count;
  float rack_body_bounds[PHYSICS_V1_MAX_RACKS * 6];
  float rack_cold_bounds[PHYSICS_V1_MAX_RACKS * 6];
  float rack_hot_bounds[PHYSICS_V1_MAX_RACKS * 6];
  float rack_plume_bounds[PHYSICS_V1_MAX_RACKS * 6];
  float rack_dir[PHYSICS_V1_MAX_RACKS * 3];
  float rack_heat_w[PHYSICS_V1_MAX_RACKS];
  float rack_airflow_m3s[PHYSICS_V1_MAX_RACKS];
  float rack_hot_volume_m3[PHYSICS_V1_MAX_RACKS];
  float rack_target_speed[PHYSICS_V1_MAX_RACKS];
  float rack_momentum_damping[PHYSICS_V1_MAX_RACKS];
  float rack_thermal_damping[PHYSICS_V1_MAX_RACKS];
  float rack_plume_mixing[PHYSICS_V1_MAX_RACKS];
  float rack_source_delta_limit[PHYSICS_V1_MAX_RACKS];
  float rack_max_delta_t[PHYSICS_V1_MAX_RACKS];
  float tile_bounds[PHYSICS_V1_MAX_TILES * 5];
  float tile_loss[PHYSICS_V1_MAX_TILES];
  float extractor_bounds[PHYSICS_V1_MAX_EXTRACTORS * 6];
  float extractor_dir[PHYSICS_V1_MAX_EXTRACTORS * 3];
  float extractor_target_speed[PHYSICS_V1_MAX_EXTRACTORS];
  float extractor_max_speed[PHYSICS_V1_MAX_EXTRACTORS];
  float extractor_damping[PHYSICS_V1_MAX_EXTRACTORS];
} PHYSICS_V1_SOURCES;

int load_physics_v1_sources(const char *path, PHYSICS_V1_SOURCES *sources);

#endif
