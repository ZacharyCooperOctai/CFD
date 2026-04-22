#ifndef s000_baseline__H
#define s000_baseline__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#include "simulation/simulation_runtime.h"
#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
  modelica_real _p;
  modelica_real _T;
  real_array _X;
} Scenario__s000__baseline_dc_MediumA_ThermodynamicState;
extern struct record_description Scenario__s000__baseline_dc_MediumA_ThermodynamicState__desc;

void Scenario__s000__baseline_dc_MediumA_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define Scenario__s000__baseline_dc_MediumA_ThermodynamicState_construct(td, ths ) Scenario__s000__baseline_dc_MediumA_ThermodynamicState_construct_p(td, &ths )
void Scenario__s000__baseline_dc_MediumA_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define Scenario__s000__baseline_dc_MediumA_ThermodynamicState_copy(src,dst) Scenario__s000__baseline_dc_MediumA_ThermodynamicState_copy_p(&src, &dst)


void Scenario__s000__baseline_dc_MediumA_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T, real_array in_X);
#define Scenario__s000__baseline_dc_MediumA_ThermodynamicState_wrap_vars(td, dst , in_p, in_T, in_X) Scenario__s000__baseline_dc_MediumA_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T, in_X)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void Scenario__s000__baseline_dc_MediumA_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T, real_array* in_X);
// #define Scenario__s000__baseline_dc_MediumA_ThermodynamicState_copy_to_vars(src,...) Scenario__s000__baseline_dc_MediumA_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t Scenario__s000__baseline_dc_MediumA_ThermodynamicState_array;
#define alloc_Scenario__s000__baseline_dc_MediumA_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, Scenario__s000__baseline_dc_MediumA_ThermodynamicState_construct_p, ndims, sizeof(Scenario__s000__baseline_dc_MediumA_ThermodynamicState), __VA_ARGS__)
#define Scenario__s000__baseline_dc_MediumA_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, Scenario__s000__baseline_dc_MediumA_ThermodynamicState_copy_p, sizeof(Scenario__s000__baseline_dc_MediumA_ThermodynamicState))
#define Scenario__s000__baseline_dc_MediumA_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, Scenario__s000__baseline_dc_MediumA_ThermodynamicState_copy_p, sizeof(Scenario__s000__baseline_dc_MediumA_ThermodynamicState))
#define Scenario__s000__baseline_dc_MediumA_ThermodynamicState_array_get(src,ndims,...)   (*(Scenario__s000__baseline_dc_MediumA_ThermodynamicState*)(generic_array_get(&src, sizeof(Scenario__s000__baseline_dc_MediumA_ThermodynamicState), __VA_ARGS__)))
#define Scenario__s000__baseline_dc_MediumA_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, Scenario__s000__baseline_dc_MediumA_ThermodynamicState_copy_p, sizeof(Scenario__s000__baseline_dc_MediumA_ThermodynamicState), __VA_ARGS__)

typedef Scenario__s000__baseline_dc_MediumA_ThermodynamicState Scenario__s000__baseline_dc_retRes_Medium_ThermodynamicState;
extern struct record_description Scenario__s000__baseline_dc_retRes_Medium_ThermodynamicState__desc;

void Scenario__s000__baseline_dc_retRes_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define Scenario__s000__baseline_dc_retRes_Medium_ThermodynamicState_construct(td, ths ) Scenario__s000__baseline_dc_retRes_Medium_ThermodynamicState_construct_p(td, &ths )
void Scenario__s000__baseline_dc_retRes_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define Scenario__s000__baseline_dc_retRes_Medium_ThermodynamicState_copy(src,dst) Scenario__s000__baseline_dc_retRes_Medium_ThermodynamicState_copy_p(&src, &dst)


void Scenario__s000__baseline_dc_retRes_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T, real_array in_X);
#define Scenario__s000__baseline_dc_retRes_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T, in_X) Scenario__s000__baseline_dc_retRes_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T, in_X)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void Scenario__s000__baseline_dc_retRes_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T, real_array* in_X);
// #define Scenario__s000__baseline_dc_retRes_Medium_ThermodynamicState_copy_to_vars(src,...) Scenario__s000__baseline_dc_retRes_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t Scenario__s000__baseline_dc_retRes_Medium_ThermodynamicState_array;
#define alloc_Scenario__s000__baseline_dc_retRes_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, Scenario__s000__baseline_dc_retRes_Medium_ThermodynamicState_construct_p, ndims, sizeof(Scenario__s000__baseline_dc_retRes_Medium_ThermodynamicState), __VA_ARGS__)
#define Scenario__s000__baseline_dc_retRes_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, Scenario__s000__baseline_dc_retRes_Medium_ThermodynamicState_copy_p, sizeof(Scenario__s000__baseline_dc_retRes_Medium_ThermodynamicState))
#define Scenario__s000__baseline_dc_retRes_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, Scenario__s000__baseline_dc_retRes_Medium_ThermodynamicState_copy_p, sizeof(Scenario__s000__baseline_dc_retRes_Medium_ThermodynamicState))
#define Scenario__s000__baseline_dc_retRes_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(Scenario__s000__baseline_dc_retRes_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(Scenario__s000__baseline_dc_retRes_Medium_ThermodynamicState), __VA_ARGS__)))
#define Scenario__s000__baseline_dc_retRes_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, Scenario__s000__baseline_dc_retRes_Medium_ThermodynamicState_copy_p, sizeof(Scenario__s000__baseline_dc_retRes_Medium_ThermodynamicState), __VA_ARGS__)

typedef Scenario__s000__baseline_dc_MediumA_ThermodynamicState Scenario__s000__baseline_dc_retSink_Medium_ThermodynamicState;
extern struct record_description Scenario__s000__baseline_dc_retSink_Medium_ThermodynamicState__desc;

void Scenario__s000__baseline_dc_retSink_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define Scenario__s000__baseline_dc_retSink_Medium_ThermodynamicState_construct(td, ths ) Scenario__s000__baseline_dc_retSink_Medium_ThermodynamicState_construct_p(td, &ths )
void Scenario__s000__baseline_dc_retSink_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define Scenario__s000__baseline_dc_retSink_Medium_ThermodynamicState_copy(src,dst) Scenario__s000__baseline_dc_retSink_Medium_ThermodynamicState_copy_p(&src, &dst)


void Scenario__s000__baseline_dc_retSink_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T, real_array in_X);
#define Scenario__s000__baseline_dc_retSink_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T, in_X) Scenario__s000__baseline_dc_retSink_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T, in_X)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void Scenario__s000__baseline_dc_retSink_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T, real_array* in_X);
// #define Scenario__s000__baseline_dc_retSink_Medium_ThermodynamicState_copy_to_vars(src,...) Scenario__s000__baseline_dc_retSink_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t Scenario__s000__baseline_dc_retSink_Medium_ThermodynamicState_array;
#define alloc_Scenario__s000__baseline_dc_retSink_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, Scenario__s000__baseline_dc_retSink_Medium_ThermodynamicState_construct_p, ndims, sizeof(Scenario__s000__baseline_dc_retSink_Medium_ThermodynamicState), __VA_ARGS__)
#define Scenario__s000__baseline_dc_retSink_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, Scenario__s000__baseline_dc_retSink_Medium_ThermodynamicState_copy_p, sizeof(Scenario__s000__baseline_dc_retSink_Medium_ThermodynamicState))
#define Scenario__s000__baseline_dc_retSink_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, Scenario__s000__baseline_dc_retSink_Medium_ThermodynamicState_copy_p, sizeof(Scenario__s000__baseline_dc_retSink_Medium_ThermodynamicState))
#define Scenario__s000__baseline_dc_retSink_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(Scenario__s000__baseline_dc_retSink_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(Scenario__s000__baseline_dc_retSink_Medium_ThermodynamicState), __VA_ARGS__)))
#define Scenario__s000__baseline_dc_retSink_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, Scenario__s000__baseline_dc_retSink_Medium_ThermodynamicState_copy_p, sizeof(Scenario__s000__baseline_dc_retSink_Medium_ThermodynamicState), __VA_ARGS__)

typedef Scenario__s000__baseline_dc_MediumA_ThermodynamicState Scenario__s000__baseline_dc_roo_air_Medium_ThermodynamicState;
extern struct record_description Scenario__s000__baseline_dc_roo_air_Medium_ThermodynamicState__desc;

void Scenario__s000__baseline_dc_roo_air_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define Scenario__s000__baseline_dc_roo_air_Medium_ThermodynamicState_construct(td, ths ) Scenario__s000__baseline_dc_roo_air_Medium_ThermodynamicState_construct_p(td, &ths )
void Scenario__s000__baseline_dc_roo_air_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define Scenario__s000__baseline_dc_roo_air_Medium_ThermodynamicState_copy(src,dst) Scenario__s000__baseline_dc_roo_air_Medium_ThermodynamicState_copy_p(&src, &dst)


void Scenario__s000__baseline_dc_roo_air_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T, real_array in_X);
#define Scenario__s000__baseline_dc_roo_air_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T, in_X) Scenario__s000__baseline_dc_roo_air_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T, in_X)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void Scenario__s000__baseline_dc_roo_air_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T, real_array* in_X);
// #define Scenario__s000__baseline_dc_roo_air_Medium_ThermodynamicState_copy_to_vars(src,...) Scenario__s000__baseline_dc_roo_air_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t Scenario__s000__baseline_dc_roo_air_Medium_ThermodynamicState_array;
#define alloc_Scenario__s000__baseline_dc_roo_air_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, Scenario__s000__baseline_dc_roo_air_Medium_ThermodynamicState_construct_p, ndims, sizeof(Scenario__s000__baseline_dc_roo_air_Medium_ThermodynamicState), __VA_ARGS__)
#define Scenario__s000__baseline_dc_roo_air_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, Scenario__s000__baseline_dc_roo_air_Medium_ThermodynamicState_copy_p, sizeof(Scenario__s000__baseline_dc_roo_air_Medium_ThermodynamicState))
#define Scenario__s000__baseline_dc_roo_air_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, Scenario__s000__baseline_dc_roo_air_Medium_ThermodynamicState_copy_p, sizeof(Scenario__s000__baseline_dc_roo_air_Medium_ThermodynamicState))
#define Scenario__s000__baseline_dc_roo_air_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(Scenario__s000__baseline_dc_roo_air_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(Scenario__s000__baseline_dc_roo_air_Medium_ThermodynamicState), __VA_ARGS__)))
#define Scenario__s000__baseline_dc_roo_air_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, Scenario__s000__baseline_dc_roo_air_Medium_ThermodynamicState_copy_p, sizeof(Scenario__s000__baseline_dc_roo_air_Medium_ThermodynamicState), __VA_ARGS__)

typedef Scenario__s000__baseline_dc_MediumA_ThermodynamicState Scenario__s000__baseline_dc_roo_air_fluInt_Medium_ThermodynamicState;
extern struct record_description Scenario__s000__baseline_dc_roo_air_fluInt_Medium_ThermodynamicState__desc;

void Scenario__s000__baseline_dc_roo_air_fluInt_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define Scenario__s000__baseline_dc_roo_air_fluInt_Medium_ThermodynamicState_construct(td, ths ) Scenario__s000__baseline_dc_roo_air_fluInt_Medium_ThermodynamicState_construct_p(td, &ths )
void Scenario__s000__baseline_dc_roo_air_fluInt_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define Scenario__s000__baseline_dc_roo_air_fluInt_Medium_ThermodynamicState_copy(src,dst) Scenario__s000__baseline_dc_roo_air_fluInt_Medium_ThermodynamicState_copy_p(&src, &dst)


void Scenario__s000__baseline_dc_roo_air_fluInt_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T, real_array in_X);
#define Scenario__s000__baseline_dc_roo_air_fluInt_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T, in_X) Scenario__s000__baseline_dc_roo_air_fluInt_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T, in_X)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void Scenario__s000__baseline_dc_roo_air_fluInt_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T, real_array* in_X);
// #define Scenario__s000__baseline_dc_roo_air_fluInt_Medium_ThermodynamicState_copy_to_vars(src,...) Scenario__s000__baseline_dc_roo_air_fluInt_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t Scenario__s000__baseline_dc_roo_air_fluInt_Medium_ThermodynamicState_array;
#define alloc_Scenario__s000__baseline_dc_roo_air_fluInt_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, Scenario__s000__baseline_dc_roo_air_fluInt_Medium_ThermodynamicState_construct_p, ndims, sizeof(Scenario__s000__baseline_dc_roo_air_fluInt_Medium_ThermodynamicState), __VA_ARGS__)
#define Scenario__s000__baseline_dc_roo_air_fluInt_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, Scenario__s000__baseline_dc_roo_air_fluInt_Medium_ThermodynamicState_copy_p, sizeof(Scenario__s000__baseline_dc_roo_air_fluInt_Medium_ThermodynamicState))
#define Scenario__s000__baseline_dc_roo_air_fluInt_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, Scenario__s000__baseline_dc_roo_air_fluInt_Medium_ThermodynamicState_copy_p, sizeof(Scenario__s000__baseline_dc_roo_air_fluInt_Medium_ThermodynamicState))
#define Scenario__s000__baseline_dc_roo_air_fluInt_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(Scenario__s000__baseline_dc_roo_air_fluInt_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(Scenario__s000__baseline_dc_roo_air_fluInt_Medium_ThermodynamicState), __VA_ARGS__)))
#define Scenario__s000__baseline_dc_roo_air_fluInt_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, Scenario__s000__baseline_dc_roo_air_fluInt_Medium_ThermodynamicState_copy_p, sizeof(Scenario__s000__baseline_dc_roo_air_fluInt_Medium_ThermodynamicState), __VA_ARGS__)

typedef Scenario__s000__baseline_dc_MediumA_ThermodynamicState Scenario__s000__baseline_dc_sup_Medium_ThermodynamicState;
extern struct record_description Scenario__s000__baseline_dc_sup_Medium_ThermodynamicState__desc;

void Scenario__s000__baseline_dc_sup_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define Scenario__s000__baseline_dc_sup_Medium_ThermodynamicState_construct(td, ths ) Scenario__s000__baseline_dc_sup_Medium_ThermodynamicState_construct_p(td, &ths )
void Scenario__s000__baseline_dc_sup_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define Scenario__s000__baseline_dc_sup_Medium_ThermodynamicState_copy(src,dst) Scenario__s000__baseline_dc_sup_Medium_ThermodynamicState_copy_p(&src, &dst)


void Scenario__s000__baseline_dc_sup_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T, real_array in_X);
#define Scenario__s000__baseline_dc_sup_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T, in_X) Scenario__s000__baseline_dc_sup_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T, in_X)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void Scenario__s000__baseline_dc_sup_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T, real_array* in_X);
// #define Scenario__s000__baseline_dc_sup_Medium_ThermodynamicState_copy_to_vars(src,...) Scenario__s000__baseline_dc_sup_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t Scenario__s000__baseline_dc_sup_Medium_ThermodynamicState_array;
#define alloc_Scenario__s000__baseline_dc_sup_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, Scenario__s000__baseline_dc_sup_Medium_ThermodynamicState_construct_p, ndims, sizeof(Scenario__s000__baseline_dc_sup_Medium_ThermodynamicState), __VA_ARGS__)
#define Scenario__s000__baseline_dc_sup_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, Scenario__s000__baseline_dc_sup_Medium_ThermodynamicState_copy_p, sizeof(Scenario__s000__baseline_dc_sup_Medium_ThermodynamicState))
#define Scenario__s000__baseline_dc_sup_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, Scenario__s000__baseline_dc_sup_Medium_ThermodynamicState_copy_p, sizeof(Scenario__s000__baseline_dc_sup_Medium_ThermodynamicState))
#define Scenario__s000__baseline_dc_sup_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(Scenario__s000__baseline_dc_sup_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(Scenario__s000__baseline_dc_sup_Medium_ThermodynamicState), __VA_ARGS__)))
#define Scenario__s000__baseline_dc_sup_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, Scenario__s000__baseline_dc_sup_Medium_ThermodynamicState_copy_p, sizeof(Scenario__s000__baseline_dc_sup_Medium_ThermodynamicState), __VA_ARGS__)

DLLDirection
modelica_string omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getAbsolutePath(threadData_t *threadData, modelica_string _uri);
#define boxptr_Buildings_BoundaryConditions_WeatherData_BaseClasses_getAbsolutePath omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getAbsolutePath
static const MMC_DEFSTRUCTLIT(boxvar_lit_Buildings_BoundaryConditions_WeatherData_BaseClasses_getAbsolutePath,2,0) {(void*) boxptr_Buildings_BoundaryConditions_WeatherData_BaseClasses_getAbsolutePath,0}};
#define boxvar_Buildings_BoundaryConditions_WeatherData_BaseClasses_getAbsolutePath MMC_REFSTRUCTLIT(boxvar_lit_Buildings_BoundaryConditions_WeatherData_BaseClasses_getAbsolutePath)


DLLDirection
modelica_real omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getAltitudeLocationTMY3(threadData_t *threadData, modelica_string _filNam);
DLLDirection
modelica_metatype boxptr_Buildings_BoundaryConditions_WeatherData_BaseClasses_getAltitudeLocationTMY3(threadData_t *threadData, modelica_metatype _filNam);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Buildings_BoundaryConditions_WeatherData_BaseClasses_getAltitudeLocationTMY3,2,0) {(void*) boxptr_Buildings_BoundaryConditions_WeatherData_BaseClasses_getAltitudeLocationTMY3,0}};
#define boxvar_Buildings_BoundaryConditions_WeatherData_BaseClasses_getAltitudeLocationTMY3 MMC_REFSTRUCTLIT(boxvar_lit_Buildings_BoundaryConditions_WeatherData_BaseClasses_getAltitudeLocationTMY3)


DLLDirection
modelica_string omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getHeaderElementTMY3(threadData_t *threadData, modelica_string _filNam, modelica_string _start, modelica_string _name, modelica_integer _position);
DLLDirection
modelica_metatype boxptr_Buildings_BoundaryConditions_WeatherData_BaseClasses_getHeaderElementTMY3(threadData_t *threadData, modelica_metatype _filNam, modelica_metatype _start, modelica_metatype _name, modelica_metatype _position);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Buildings_BoundaryConditions_WeatherData_BaseClasses_getHeaderElementTMY3,2,0) {(void*) boxptr_Buildings_BoundaryConditions_WeatherData_BaseClasses_getHeaderElementTMY3,0}};
#define boxvar_Buildings_BoundaryConditions_WeatherData_BaseClasses_getHeaderElementTMY3 MMC_REFSTRUCTLIT(boxvar_lit_Buildings_BoundaryConditions_WeatherData_BaseClasses_getHeaderElementTMY3)


DLLDirection
modelica_string omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLastHeaderElementTMY3(threadData_t *threadData, modelica_string _filNam, modelica_string _start, modelica_string _name);
#define boxptr_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLastHeaderElementTMY3 omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLastHeaderElementTMY3
static const MMC_DEFSTRUCTLIT(boxvar_lit_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLastHeaderElementTMY3,2,0) {(void*) boxptr_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLastHeaderElementTMY3,0}};
#define boxvar_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLastHeaderElementTMY3 MMC_REFSTRUCTLIT(boxvar_lit_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLastHeaderElementTMY3)


DLLDirection
modelica_real omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLatitudeTMY3(threadData_t *threadData, modelica_string _filNam);
DLLDirection
modelica_metatype boxptr_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLatitudeTMY3(threadData_t *threadData, modelica_metatype _filNam);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLatitudeTMY3,2,0) {(void*) boxptr_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLatitudeTMY3,0}};
#define boxvar_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLatitudeTMY3 MMC_REFSTRUCTLIT(boxvar_lit_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLatitudeTMY3)


DLLDirection
modelica_real omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLongitudeTMY3(threadData_t *threadData, modelica_string _filNam);
DLLDirection
modelica_metatype boxptr_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLongitudeTMY3(threadData_t *threadData, modelica_metatype _filNam);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLongitudeTMY3,2,0) {(void*) boxptr_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLongitudeTMY3,0}};
#define boxvar_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLongitudeTMY3 MMC_REFSTRUCTLIT(boxvar_lit_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLongitudeTMY3)


DLLDirection
real_array omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getTimeSpanTMY3(threadData_t *threadData, modelica_string _filNam, modelica_string _tabNam);
DLLDirection
modelica_metatype boxptr_Buildings_BoundaryConditions_WeatherData_BaseClasses_getTimeSpanTMY3(threadData_t *threadData, modelica_metatype _filNam, modelica_metatype _tabNam);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Buildings_BoundaryConditions_WeatherData_BaseClasses_getTimeSpanTMY3,2,0) {(void*) boxptr_Buildings_BoundaryConditions_WeatherData_BaseClasses_getTimeSpanTMY3,0}};
#define boxvar_Buildings_BoundaryConditions_WeatherData_BaseClasses_getTimeSpanTMY3 MMC_REFSTRUCTLIT(boxvar_lit_Buildings_BoundaryConditions_WeatherData_BaseClasses_getTimeSpanTMY3)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern void getTimeSpan(const char* (*_filNam*), const char* (*_tabNam*), double* (*_timeSpan*));
 */


DLLDirection
modelica_real omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getTimeZoneTMY3(threadData_t *threadData, modelica_string _filNam);
DLLDirection
modelica_metatype boxptr_Buildings_BoundaryConditions_WeatherData_BaseClasses_getTimeZoneTMY3(threadData_t *threadData, modelica_metatype _filNam);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Buildings_BoundaryConditions_WeatherData_BaseClasses_getTimeZoneTMY3,2,0) {(void*) boxptr_Buildings_BoundaryConditions_WeatherData_BaseClasses_getTimeZoneTMY3,0}};
#define boxvar_Buildings_BoundaryConditions_WeatherData_BaseClasses_getTimeZoneTMY3 MMC_REFSTRUCTLIT(boxvar_lit_Buildings_BoundaryConditions_WeatherData_BaseClasses_getTimeZoneTMY3)


DLLDirection
modelica_real omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData_t *threadData, modelica_real _m_flow, modelica_real _k, modelica_real _m_flow_turbulent);
DLLDirection
modelica_metatype boxptr_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData_t *threadData, modelica_metatype _m_flow, modelica_metatype _k, modelica_metatype _m_flow_turbulent);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow,2,0) {(void*) boxptr_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow,0}};
#define boxvar_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow MMC_REFSTRUCTLIT(boxvar_lit_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow)


DLLDirection
modelica_real omc_Buildings_ThermalZones_Detailed_BaseClasses_cfdExchangeData(threadData_t *threadData, modelica_integer _flag, modelica_real _t, modelica_real _dt, real_array _u, modelica_integer _nU, modelica_integer _nY, real_array *out_y, modelica_integer *out_retVal);
DLLDirection
modelica_metatype boxptr_Buildings_ThermalZones_Detailed_BaseClasses_cfdExchangeData(threadData_t *threadData, modelica_metatype _flag, modelica_metatype _t, modelica_metatype _dt, modelica_metatype _u, modelica_metatype _nU, modelica_metatype _nY, modelica_metatype *out_y, modelica_metatype *out_retVal);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Buildings_ThermalZones_Detailed_BaseClasses_cfdExchangeData,2,0) {(void*) boxptr_Buildings_ThermalZones_Detailed_BaseClasses_cfdExchangeData,0}};
#define boxvar_Buildings_ThermalZones_Detailed_BaseClasses_cfdExchangeData MMC_REFSTRUCTLIT(boxvar_lit_Buildings_ThermalZones_Detailed_BaseClasses_cfdExchangeData)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern int cfdExchangeData(double (*_t*), double (*_dt*), const double* (*_u*), int (*_nU*), int (*_nY*), double* (*_modTimRea*), double* (*_y*));
 */


DLLDirection
modelica_integer omc_Buildings_ThermalZones_Detailed_BaseClasses_cfdStartCosimulation(threadData_t *threadData, modelica_string _cfdFilNam, string_array _name, real_array _A, real_array _til, integer_array _bouCon, modelica_integer _nPorts, string_array _portName, modelica_boolean _haveSensor, string_array _sensorName, modelica_boolean _haveShade, modelica_integer _nSur, modelica_integer _nSen, modelica_integer _nConExtWin, modelica_integer _nXi, modelica_integer _nC, modelica_real _rho_start);
DLLDirection
modelica_metatype boxptr_Buildings_ThermalZones_Detailed_BaseClasses_cfdStartCosimulation(threadData_t *threadData, modelica_metatype _cfdFilNam, modelica_metatype _name, modelica_metatype _A, modelica_metatype _til, modelica_metatype _bouCon, modelica_metatype _nPorts, modelica_metatype _portName, modelica_metatype _haveSensor, modelica_metatype _sensorName, modelica_metatype _haveShade, modelica_metatype _nSur, modelica_metatype _nSen, modelica_metatype _nConExtWin, modelica_metatype _nXi, modelica_metatype _nC, modelica_metatype _rho_start);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Buildings_ThermalZones_Detailed_BaseClasses_cfdStartCosimulation,2,0) {(void*) boxptr_Buildings_ThermalZones_Detailed_BaseClasses_cfdStartCosimulation,0}};
#define boxvar_Buildings_ThermalZones_Detailed_BaseClasses_cfdStartCosimulation MMC_REFSTRUCTLIT(boxvar_lit_Buildings_ThermalZones_Detailed_BaseClasses_cfdStartCosimulation)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern int cfdStartCosimulation(const char* (*_cfdFilNam*), const char** (*_name*), const double* (*_A*), const double* (*_til*), const int* (*_bouCon*), int (*_nPorts*), const char** (*_portName*), int (*_haveSensor*), const char** (*_sensorName*), int (*_haveShade*), int (*_nSur*), int (*_nSen*), int (*_nConExtWin*), int (*_nXi*), int (*_nC*), double (*_rho_start*));
 */


DLLDirection
modelica_complex omc_Buildings_ThermalZones_Detailed_BaseClasses_CFDThread_constructor(threadData_t *threadData);
DLLDirection
modelica_metatype boxptr_Buildings_ThermalZones_Detailed_BaseClasses_CFDThread_constructor(threadData_t *threadData);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Buildings_ThermalZones_Detailed_BaseClasses_CFDThread_constructor,2,0) {(void*) boxptr_Buildings_ThermalZones_Detailed_BaseClasses_CFDThread_constructor,0}};
#define boxvar_Buildings_ThermalZones_Detailed_BaseClasses_CFDThread_constructor MMC_REFSTRUCTLIT(boxvar_lit_Buildings_ThermalZones_Detailed_BaseClasses_CFDThread_constructor)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern void * cfdcosim();
 */


DLLDirection
void omc_Buildings_ThermalZones_Detailed_BaseClasses_CFDThread_destructor(threadData_t *threadData, modelica_complex _FFDThre);
DLLDirection
void boxptr_Buildings_ThermalZones_Detailed_BaseClasses_CFDThread_destructor(threadData_t *threadData, modelica_metatype _FFDThre);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Buildings_ThermalZones_Detailed_BaseClasses_CFDThread_destructor,2,0) {(void*) boxptr_Buildings_ThermalZones_Detailed_BaseClasses_CFDThread_destructor,0}};
#define boxvar_Buildings_ThermalZones_Detailed_BaseClasses_CFDThread_destructor MMC_REFSTRUCTLIT(boxvar_lit_Buildings_ThermalZones_Detailed_BaseClasses_CFDThread_destructor)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern void cfdSendStopCommand(void * (*_FFDThre*));
 */


DLLDirection
modelica_real omc_Modelica_Blocks_Tables_Internal_getNextTimeEvent(threadData_t *threadData, modelica_complex _tableID, modelica_real _timeIn);
DLLDirection
modelica_metatype boxptr_Modelica_Blocks_Tables_Internal_getNextTimeEvent(threadData_t *threadData, modelica_metatype _tableID, modelica_metatype _timeIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Tables_Internal_getNextTimeEvent,2,0) {(void*) boxptr_Modelica_Blocks_Tables_Internal_getNextTimeEvent,0}};
#define boxvar_Modelica_Blocks_Tables_Internal_getNextTimeEvent MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Tables_Internal_getNextTimeEvent)

extern double ModelicaStandardTables_CombiTimeTable_nextTimeEvent(void * /*_tableID*/, double /*_timeIn*/);


DLLDirection
modelica_real omc_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmax(threadData_t *threadData, modelica_complex _tableID);
DLLDirection
modelica_metatype boxptr_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmax(threadData_t *threadData, modelica_metatype _tableID);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmax,2,0) {(void*) boxptr_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmax,0}};
#define boxvar_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmax MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmax)

extern double ModelicaStandardTables_CombiTable1D_maximumAbscissa(void * /*_tableID*/);


DLLDirection
modelica_real omc_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmin(threadData_t *threadData, modelica_complex _tableID);
DLLDirection
modelica_metatype boxptr_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmin(threadData_t *threadData, modelica_metatype _tableID);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmin,2,0) {(void*) boxptr_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmin,0}};
#define boxvar_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmin MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmin)

extern double ModelicaStandardTables_CombiTable1D_minimumAbscissa(void * /*_tableID*/);


DLLDirection
modelica_real omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData_t *threadData, modelica_complex _tableID, modelica_integer _icol, modelica_real _u);
DLLDirection
modelica_metatype boxptr_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData_t *threadData, modelica_metatype _tableID, modelica_metatype _icol, modelica_metatype _u);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Tables_Internal_getTable1DValue,2,0) {(void*) boxptr_Modelica_Blocks_Tables_Internal_getTable1DValue,0}};
#define boxvar_Modelica_Blocks_Tables_Internal_getTable1DValue MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Tables_Internal_getTable1DValue)

extern double ModelicaStandardTables_CombiTable1D_getValue(void * /*_tableID*/, int /*_icol*/, double /*_u*/);


DLLDirection
modelica_real omc_Modelica_Blocks_Tables_Internal_getTimeTableTmax(threadData_t *threadData, modelica_complex _tableID);
DLLDirection
modelica_metatype boxptr_Modelica_Blocks_Tables_Internal_getTimeTableTmax(threadData_t *threadData, modelica_metatype _tableID);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Tables_Internal_getTimeTableTmax,2,0) {(void*) boxptr_Modelica_Blocks_Tables_Internal_getTimeTableTmax,0}};
#define boxvar_Modelica_Blocks_Tables_Internal_getTimeTableTmax MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Tables_Internal_getTimeTableTmax)

extern double ModelicaStandardTables_CombiTimeTable_maximumTime(void * /*_tableID*/);


DLLDirection
modelica_real omc_Modelica_Blocks_Tables_Internal_getTimeTableTmin(threadData_t *threadData, modelica_complex _tableID);
DLLDirection
modelica_metatype boxptr_Modelica_Blocks_Tables_Internal_getTimeTableTmin(threadData_t *threadData, modelica_metatype _tableID);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Tables_Internal_getTimeTableTmin,2,0) {(void*) boxptr_Modelica_Blocks_Tables_Internal_getTimeTableTmin,0}};
#define boxvar_Modelica_Blocks_Tables_Internal_getTimeTableTmin MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Tables_Internal_getTimeTableTmin)

extern double ModelicaStandardTables_CombiTimeTable_minimumTime(void * /*_tableID*/);


DLLDirection
modelica_real omc_Modelica_Blocks_Tables_Internal_getTimeTableValueNoDer(threadData_t *threadData, modelica_complex _tableID, modelica_integer _icol, modelica_real _timeIn, modelica_real _nextTimeEvent, modelica_real _pre_nextTimeEvent);
DLLDirection
modelica_metatype boxptr_Modelica_Blocks_Tables_Internal_getTimeTableValueNoDer(threadData_t *threadData, modelica_metatype _tableID, modelica_metatype _icol, modelica_metatype _timeIn, modelica_metatype _nextTimeEvent, modelica_metatype _pre_nextTimeEvent);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Tables_Internal_getTimeTableValueNoDer,2,0) {(void*) boxptr_Modelica_Blocks_Tables_Internal_getTimeTableValueNoDer,0}};
#define boxvar_Modelica_Blocks_Tables_Internal_getTimeTableValueNoDer MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Tables_Internal_getTimeTableValueNoDer)

extern double ModelicaStandardTables_CombiTimeTable_getValue(void * /*_tableID*/, int /*_icol*/, double /*_timeIn*/, double /*_nextTimeEvent*/, double /*_pre_nextTimeEvent*/);


DLLDirection
modelica_complex omc_Modelica_Blocks_Types_ExternalCombiTable1D_constructor(threadData_t *threadData, modelica_string _tableName, modelica_string _fileName, real_array _table, integer_array _columns, modelica_integer _smoothness, modelica_integer _extrapolation, modelica_boolean _verboseRead, modelica_string _delimiter, modelica_integer _nHeaderLines);
DLLDirection
modelica_metatype boxptr_Modelica_Blocks_Types_ExternalCombiTable1D_constructor(threadData_t *threadData, modelica_metatype _tableName, modelica_metatype _fileName, modelica_metatype _table, modelica_metatype _columns, modelica_metatype _smoothness, modelica_metatype _extrapolation, modelica_metatype _verboseRead, modelica_metatype _delimiter, modelica_metatype _nHeaderLines);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Types_ExternalCombiTable1D_constructor,2,0) {(void*) boxptr_Modelica_Blocks_Types_ExternalCombiTable1D_constructor,0}};
#define boxvar_Modelica_Blocks_Types_ExternalCombiTable1D_constructor MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Types_ExternalCombiTable1D_constructor)

extern void * ModelicaStandardTables_CombiTable1D_init3(const char* /*_fileName*/, const char* /*_tableName*/, const double* /*_table*/, size_t, size_t, const int* /*_columns*/, size_t, int /*_smoothness*/, int /*_extrapolation*/, int /*_verboseRead*/, const char* /*_delimiter*/, int /*_nHeaderLines*/);


DLLDirection
void omc_Modelica_Blocks_Types_ExternalCombiTable1D_destructor(threadData_t *threadData, modelica_complex _externalCombiTable1D);
DLLDirection
void boxptr_Modelica_Blocks_Types_ExternalCombiTable1D_destructor(threadData_t *threadData, modelica_metatype _externalCombiTable1D);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Types_ExternalCombiTable1D_destructor,2,0) {(void*) boxptr_Modelica_Blocks_Types_ExternalCombiTable1D_destructor,0}};
#define boxvar_Modelica_Blocks_Types_ExternalCombiTable1D_destructor MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Types_ExternalCombiTable1D_destructor)

extern void ModelicaStandardTables_CombiTable1D_close(void * /*_externalCombiTable1D*/);


DLLDirection
modelica_complex omc_Modelica_Blocks_Types_ExternalCombiTimeTable_constructor(threadData_t *threadData, modelica_string _tableName, modelica_string _fileName, real_array _table, modelica_real _startTime, integer_array _columns, modelica_integer _smoothness, modelica_integer _extrapolation, modelica_real _shiftTime, modelica_integer _timeEvents, modelica_boolean _verboseRead, modelica_string _delimiter, modelica_integer _nHeaderLines);
DLLDirection
modelica_metatype boxptr_Modelica_Blocks_Types_ExternalCombiTimeTable_constructor(threadData_t *threadData, modelica_metatype _tableName, modelica_metatype _fileName, modelica_metatype _table, modelica_metatype _startTime, modelica_metatype _columns, modelica_metatype _smoothness, modelica_metatype _extrapolation, modelica_metatype _shiftTime, modelica_metatype _timeEvents, modelica_metatype _verboseRead, modelica_metatype _delimiter, modelica_metatype _nHeaderLines);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Types_ExternalCombiTimeTable_constructor,2,0) {(void*) boxptr_Modelica_Blocks_Types_ExternalCombiTimeTable_constructor,0}};
#define boxvar_Modelica_Blocks_Types_ExternalCombiTimeTable_constructor MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Types_ExternalCombiTimeTable_constructor)

extern void * ModelicaStandardTables_CombiTimeTable_init3(const char* /*_fileName*/, const char* /*_tableName*/, const double* /*_table*/, size_t, size_t, double /*_startTime*/, const int* /*_columns*/, size_t, int /*_smoothness*/, int /*_extrapolation*/, double /*_shiftTime*/, int /*_timeEvents*/, int /*_verboseRead*/, const char* /*_delimiter*/, int /*_nHeaderLines*/);


DLLDirection
void omc_Modelica_Blocks_Types_ExternalCombiTimeTable_destructor(threadData_t *threadData, modelica_complex _externalCombiTimeTable);
DLLDirection
void boxptr_Modelica_Blocks_Types_ExternalCombiTimeTable_destructor(threadData_t *threadData, modelica_metatype _externalCombiTimeTable);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Types_ExternalCombiTimeTable_destructor,2,0) {(void*) boxptr_Modelica_Blocks_Types_ExternalCombiTimeTable_destructor,0}};
#define boxvar_Modelica_Blocks_Types_ExternalCombiTimeTable_destructor MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Types_ExternalCombiTimeTable_destructor)

extern void ModelicaStandardTables_CombiTimeTable_close(void * /*_externalCombiTimeTable*/);


DLLDirection
void omc_Modelica_Fluid_Utilities_checkBoundary(threadData_t *threadData, modelica_string _mediumName, string_array _substanceNames, modelica_boolean _singleState, modelica_boolean _define_p, real_array _X_boundary, modelica_string _modelName);
DLLDirection
void boxptr_Modelica_Fluid_Utilities_checkBoundary(threadData_t *threadData, modelica_metatype _mediumName, modelica_metatype _substanceNames, modelica_metatype _singleState, modelica_metatype _define_p, modelica_metatype _X_boundary, modelica_metatype _modelName);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Utilities_checkBoundary,2,0) {(void*) boxptr_Modelica_Fluid_Utilities_checkBoundary,0}};
#define boxvar_Modelica_Fluid_Utilities_checkBoundary MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Utilities_checkBoundary)


DLLDirection
modelica_boolean omc_Modelica_Math_BooleanVectors_anyTrue(threadData_t *threadData, boolean_array _b);
DLLDirection
modelica_metatype boxptr_Modelica_Math_BooleanVectors_anyTrue(threadData_t *threadData, modelica_metatype _b);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Math_BooleanVectors_anyTrue,2,0) {(void*) boxptr_Modelica_Math_BooleanVectors_anyTrue,0}};
#define boxvar_Modelica_Math_BooleanVectors_anyTrue MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Math_BooleanVectors_anyTrue)


DLLDirection
modelica_real omc_Modelica_Math_Vectors_norm(threadData_t *threadData, real_array _v, modelica_real _p);
DLLDirection
modelica_metatype boxptr_Modelica_Math_Vectors_norm(threadData_t *threadData, modelica_metatype _v, modelica_metatype _p);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Math_Vectors_norm,2,0) {(void*) boxptr_Modelica_Math_Vectors_norm,0}};
#define boxvar_Modelica_Math_Vectors_norm MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Math_Vectors_norm)


DLLDirection
modelica_string omc_Modelica_Math_Vectors_toString(threadData_t *threadData, real_array _v, modelica_string _name, modelica_integer _significantDigits);
DLLDirection
modelica_metatype boxptr_Modelica_Math_Vectors_toString(threadData_t *threadData, modelica_metatype _v, modelica_metatype _name, modelica_metatype _significantDigits);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Math_Vectors_toString,2,0) {(void*) boxptr_Modelica_Math_Vectors_toString,0}};
#define boxvar_Modelica_Math_Vectors_toString MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Math_Vectors_toString)


DLLDirection
void omc_Modelica_Utilities_Streams_error(threadData_t *threadData, modelica_string _string);
#define boxptr_Modelica_Utilities_Streams_error omc_Modelica_Utilities_Streams_error
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Streams_error,2,0) {(void*) boxptr_Modelica_Utilities_Streams_error,0}};
#define boxvar_Modelica_Utilities_Streams_error MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Streams_error)


DLLDirection
modelica_string omc_Modelica_Utilities_Streams_readLine(threadData_t *threadData, modelica_string _fileName, modelica_integer _lineNumber, modelica_boolean *out_endOfFile);
DLLDirection
modelica_metatype boxptr_Modelica_Utilities_Streams_readLine(threadData_t *threadData, modelica_metatype _fileName, modelica_metatype _lineNumber, modelica_metatype *out_endOfFile);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Streams_readLine,2,0) {(void*) boxptr_Modelica_Utilities_Streams_readLine,0}};
#define boxvar_Modelica_Utilities_Streams_readLine MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Streams_readLine)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern const char* ModelicaInternal_readLine(const char* (*_fileName*), int (*_lineNumber*), int* (*_endOfFile*));
 */


DLLDirection
modelica_integer omc_Modelica_Utilities_Strings_compare(threadData_t *threadData, modelica_string _string1, modelica_string _string2, modelica_boolean _caseSensitive);
DLLDirection
modelica_metatype boxptr_Modelica_Utilities_Strings_compare(threadData_t *threadData, modelica_metatype _string1, modelica_metatype _string2, modelica_metatype _caseSensitive);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_compare,2,0) {(void*) boxptr_Modelica_Utilities_Strings_compare,0}};
#define boxvar_Modelica_Utilities_Strings_compare MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_compare)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern int ModelicaStrings_compare(const char* (*_string1*), const char* (*_string2*), int (*_caseSensitive*));
 */


DLLDirection
modelica_integer omc_Modelica_Utilities_Strings_find(threadData_t *threadData, modelica_string _string, modelica_string _searchString, modelica_integer _startIndex, modelica_boolean _caseSensitive);
DLLDirection
modelica_metatype boxptr_Modelica_Utilities_Strings_find(threadData_t *threadData, modelica_metatype _string, modelica_metatype _searchString, modelica_metatype _startIndex, modelica_metatype _caseSensitive);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_find,2,0) {(void*) boxptr_Modelica_Utilities_Strings_find,0}};
#define boxvar_Modelica_Utilities_Strings_find MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_find)


DLLDirection
modelica_integer omc_Modelica_Utilities_Strings_findLast(threadData_t *threadData, modelica_string _string, modelica_string _searchString, modelica_integer _startIndex, modelica_boolean _caseSensitive);
DLLDirection
modelica_metatype boxptr_Modelica_Utilities_Strings_findLast(threadData_t *threadData, modelica_metatype _string, modelica_metatype _searchString, modelica_metatype _startIndex, modelica_metatype _caseSensitive);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_findLast,2,0) {(void*) boxptr_Modelica_Utilities_Strings_findLast,0}};
#define boxvar_Modelica_Utilities_Strings_findLast MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_findLast)


DLLDirection
modelica_boolean omc_Modelica_Utilities_Strings_isEmpty(threadData_t *threadData, modelica_string _string);
DLLDirection
modelica_metatype boxptr_Modelica_Utilities_Strings_isEmpty(threadData_t *threadData, modelica_metatype _string);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_isEmpty,2,0) {(void*) boxptr_Modelica_Utilities_Strings_isEmpty,0}};
#define boxvar_Modelica_Utilities_Strings_isEmpty MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_isEmpty)


DLLDirection
modelica_boolean omc_Modelica_Utilities_Strings_isEqual(threadData_t *threadData, modelica_string _string1, modelica_string _string2, modelica_boolean _caseSensitive);
DLLDirection
modelica_metatype boxptr_Modelica_Utilities_Strings_isEqual(threadData_t *threadData, modelica_metatype _string1, modelica_metatype _string2, modelica_metatype _caseSensitive);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_isEqual,2,0) {(void*) boxptr_Modelica_Utilities_Strings_isEqual,0}};
#define boxvar_Modelica_Utilities_Strings_isEqual MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_isEqual)


DLLDirection
modelica_integer omc_Modelica_Utilities_Strings_length(threadData_t *threadData, modelica_string _string);
DLLDirection
modelica_metatype boxptr_Modelica_Utilities_Strings_length(threadData_t *threadData, modelica_metatype _string);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_length,2,0) {(void*) boxptr_Modelica_Utilities_Strings_length,0}};
#define boxvar_Modelica_Utilities_Strings_length MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_length)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern int ModelicaStrings_length(const char* (*_string*));
 */


DLLDirection
modelica_string omc_Modelica_Utilities_Strings_repeat(threadData_t *threadData, modelica_integer _n, modelica_string _string);
DLLDirection
modelica_metatype boxptr_Modelica_Utilities_Strings_repeat(threadData_t *threadData, modelica_metatype _n, modelica_metatype _string);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_repeat,2,0) {(void*) boxptr_Modelica_Utilities_Strings_repeat,0}};
#define boxvar_Modelica_Utilities_Strings_repeat MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_repeat)


DLLDirection
modelica_string omc_Modelica_Utilities_Strings_substring(threadData_t *threadData, modelica_string _string, modelica_integer _startIndex, modelica_integer _endIndex);
DLLDirection
modelica_metatype boxptr_Modelica_Utilities_Strings_substring(threadData_t *threadData, modelica_metatype _string, modelica_metatype _startIndex, modelica_metatype _endIndex);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_substring,2,0) {(void*) boxptr_Modelica_Utilities_Strings_substring,0}};
#define boxvar_Modelica_Utilities_Strings_substring MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_substring)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern const char* ModelicaStrings_substring(const char* (*_string*), int (*_startIndex*), int (*_endIndex*));
 */


DLLDirection
modelica_integer omc_Modelica_Utilities_Strings_Advanced_scanReal(threadData_t *threadData, modelica_string _string, modelica_integer _startIndex, modelica_boolean _unsigned, modelica_real *out_number);
DLLDirection
modelica_metatype boxptr_Modelica_Utilities_Strings_Advanced_scanReal(threadData_t *threadData, modelica_metatype _string, modelica_metatype _startIndex, modelica_metatype _unsigned, modelica_metatype *out_number);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_Advanced_scanReal,2,0) {(void*) boxptr_Modelica_Utilities_Strings_Advanced_scanReal,0}};
#define boxvar_Modelica_Utilities_Strings_Advanced_scanReal MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_Advanced_scanReal)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern void ModelicaStrings_scanReal(const char* (*_string*), int (*_startIndex*), int (*_unsigned*), int* (*_nextIndex*), double* (*_number*));
 */


DLLDirection
modelica_integer omc_Modelica_Utilities_Strings_Advanced_skipWhiteSpace(threadData_t *threadData, modelica_string _string, modelica_integer _startIndex);
DLLDirection
modelica_metatype boxptr_Modelica_Utilities_Strings_Advanced_skipWhiteSpace(threadData_t *threadData, modelica_metatype _string, modelica_metatype _startIndex);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_Advanced_skipWhiteSpace,2,0) {(void*) boxptr_Modelica_Utilities_Strings_Advanced_skipWhiteSpace,0}};
#define boxvar_Modelica_Utilities_Strings_Advanced_skipWhiteSpace MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_Advanced_skipWhiteSpace)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern int ModelicaStrings_skipWhiteSpace(const char* (*_string*), int (*_startIndex*));
 */

DLLDirection
Scenario__s000__baseline_dc_MediumA_ThermodynamicState omc_Scenario__s000__baseline_dc_MediumA_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X);

DLLDirection
modelica_metatype boxptr_Scenario__s000__baseline_dc_MediumA_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Scenario__s000__baseline_dc_MediumA_ThermodynamicState,2,0) {(void*) boxptr_Scenario__s000__baseline_dc_MediumA_ThermodynamicState,0}};
#define boxvar_Scenario__s000__baseline_dc_MediumA_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_Scenario__s000__baseline_dc_MediumA_ThermodynamicState)


DLLDirection
Scenario__s000__baseline_dc_retRes_Medium_ThermodynamicState omc_Scenario__s000__baseline_dc_retRes_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X);

DLLDirection
modelica_metatype boxptr_Scenario__s000__baseline_dc_retRes_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Scenario__s000__baseline_dc_retRes_Medium_ThermodynamicState,2,0) {(void*) boxptr_Scenario__s000__baseline_dc_retRes_Medium_ThermodynamicState,0}};
#define boxvar_Scenario__s000__baseline_dc_retRes_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_Scenario__s000__baseline_dc_retRes_Medium_ThermodynamicState)


DLLDirection
Scenario__s000__baseline_dc_retSink_Medium_ThermodynamicState omc_Scenario__s000__baseline_dc_retSink_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X);

DLLDirection
modelica_metatype boxptr_Scenario__s000__baseline_dc_retSink_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Scenario__s000__baseline_dc_retSink_Medium_ThermodynamicState,2,0) {(void*) boxptr_Scenario__s000__baseline_dc_retSink_Medium_ThermodynamicState,0}};
#define boxvar_Scenario__s000__baseline_dc_retSink_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_Scenario__s000__baseline_dc_retSink_Medium_ThermodynamicState)


DLLDirection
Scenario__s000__baseline_dc_roo_air_Medium_ThermodynamicState omc_Scenario__s000__baseline_dc_roo_air_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X);

DLLDirection
modelica_metatype boxptr_Scenario__s000__baseline_dc_roo_air_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Scenario__s000__baseline_dc_roo_air_Medium_ThermodynamicState,2,0) {(void*) boxptr_Scenario__s000__baseline_dc_roo_air_Medium_ThermodynamicState,0}};
#define boxvar_Scenario__s000__baseline_dc_roo_air_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_Scenario__s000__baseline_dc_roo_air_Medium_ThermodynamicState)


DLLDirection
void omc_Scenario__s000__baseline_dc_roo_air_cfd_assertStringsAreUnique(threadData_t *threadData, modelica_string _descriptiveName, modelica_integer _n, string_array _names);
DLLDirection
void boxptr_Scenario__s000__baseline_dc_roo_air_cfd_assertStringsAreUnique(threadData_t *threadData, modelica_metatype _descriptiveName, modelica_metatype _n, modelica_metatype _names);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Scenario__s000__baseline_dc_roo_air_cfd_assertStringsAreUnique,2,0) {(void*) boxptr_Scenario__s000__baseline_dc_roo_air_cfd_assertStringsAreUnique,0}};
#define boxvar_Scenario__s000__baseline_dc_roo_air_cfd_assertStringsAreUnique MMC_REFSTRUCTLIT(boxvar_lit_Scenario__s000__baseline_dc_roo_air_cfd_assertStringsAreUnique)


DLLDirection
modelica_real omc_Scenario__s000__baseline_dc_roo_air_cfd_exchange(threadData_t *threadData, modelica_integer _flag, modelica_real _t, modelica_real _dt, real_array _u, modelica_integer _nU, real_array _yFixed, modelica_integer _nY, real_array *out_y, modelica_integer *out_retVal);
DLLDirection
modelica_metatype boxptr_Scenario__s000__baseline_dc_roo_air_cfd_exchange(threadData_t *threadData, modelica_metatype _flag, modelica_metatype _t, modelica_metatype _dt, modelica_metatype _u, modelica_metatype _nU, modelica_metatype _yFixed, modelica_metatype _nY, modelica_metatype *out_y, modelica_metatype *out_retVal);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Scenario__s000__baseline_dc_roo_air_cfd_exchange,2,0) {(void*) boxptr_Scenario__s000__baseline_dc_roo_air_cfd_exchange,0}};
#define boxvar_Scenario__s000__baseline_dc_roo_air_cfd_exchange MMC_REFSTRUCTLIT(boxvar_lit_Scenario__s000__baseline_dc_roo_air_cfd_exchange)


DLLDirection
modelica_string omc_Scenario__s000__baseline_dc_roo_air_cfd_returnNonUniqueStrings(threadData_t *threadData, modelica_integer _n, boolean_array _ideNam, string_array _names);
DLLDirection
modelica_metatype boxptr_Scenario__s000__baseline_dc_roo_air_cfd_returnNonUniqueStrings(threadData_t *threadData, modelica_metatype _n, modelica_metatype _ideNam, modelica_metatype _names);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Scenario__s000__baseline_dc_roo_air_cfd_returnNonUniqueStrings,2,0) {(void*) boxptr_Scenario__s000__baseline_dc_roo_air_cfd_returnNonUniqueStrings,0}};
#define boxvar_Scenario__s000__baseline_dc_roo_air_cfd_returnNonUniqueStrings MMC_REFSTRUCTLIT(boxvar_lit_Scenario__s000__baseline_dc_roo_air_cfd_returnNonUniqueStrings)


DLLDirection
void omc_Scenario__s000__baseline_dc_roo_air_cfd_sendParameters(threadData_t *threadData, modelica_string _cfdFilNam, string_array _name, real_array _A, real_array _til, integer_array _bouCon, modelica_integer _nPorts, string_array _portName, modelica_boolean _haveSensor, string_array _sensorName, modelica_boolean _haveShade, modelica_integer _nSur, modelica_integer _nSen, modelica_integer _nConExtWin, modelica_integer _nXi, modelica_integer _nC, modelica_real _rho_start);
DLLDirection
void boxptr_Scenario__s000__baseline_dc_roo_air_cfd_sendParameters(threadData_t *threadData, modelica_metatype _cfdFilNam, modelica_metatype _name, modelica_metatype _A, modelica_metatype _til, modelica_metatype _bouCon, modelica_metatype _nPorts, modelica_metatype _portName, modelica_metatype _haveSensor, modelica_metatype _sensorName, modelica_metatype _haveShade, modelica_metatype _nSur, modelica_metatype _nSen, modelica_metatype _nConExtWin, modelica_metatype _nXi, modelica_metatype _nC, modelica_metatype _rho_start);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Scenario__s000__baseline_dc_roo_air_cfd_sendParameters,2,0) {(void*) boxptr_Scenario__s000__baseline_dc_roo_air_cfd_sendParameters,0}};
#define boxvar_Scenario__s000__baseline_dc_roo_air_cfd_sendParameters MMC_REFSTRUCTLIT(boxvar_lit_Scenario__s000__baseline_dc_roo_air_cfd_sendParameters)


DLLDirection
Scenario__s000__baseline_dc_roo_air_fluInt_Medium_ThermodynamicState omc_Scenario__s000__baseline_dc_roo_air_fluInt_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X);

DLLDirection
modelica_metatype boxptr_Scenario__s000__baseline_dc_roo_air_fluInt_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Scenario__s000__baseline_dc_roo_air_fluInt_Medium_ThermodynamicState,2,0) {(void*) boxptr_Scenario__s000__baseline_dc_roo_air_fluInt_Medium_ThermodynamicState,0}};
#define boxvar_Scenario__s000__baseline_dc_roo_air_fluInt_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_Scenario__s000__baseline_dc_roo_air_fluInt_Medium_ThermodynamicState)


DLLDirection
void omc_Scenario__s000__baseline_dc_roo_irRadExc_checkSurfaceAreas(threadData_t *threadData, modelica_integer _n, real_array _A, modelica_string _name);
DLLDirection
void boxptr_Scenario__s000__baseline_dc_roo_irRadExc_checkSurfaceAreas(threadData_t *threadData, modelica_metatype _n, modelica_metatype _A, modelica_metatype _name);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Scenario__s000__baseline_dc_roo_irRadExc_checkSurfaceAreas,2,0) {(void*) boxptr_Scenario__s000__baseline_dc_roo_irRadExc_checkSurfaceAreas,0}};
#define boxvar_Scenario__s000__baseline_dc_roo_irRadExc_checkSurfaceAreas MMC_REFSTRUCTLIT(boxvar_lit_Scenario__s000__baseline_dc_roo_irRadExc_checkSurfaceAreas)


DLLDirection
void omc_Scenario__s000__baseline_dc_roo_irRadGai_checkSurfaceAreas(threadData_t *threadData, modelica_integer _n, real_array _A, modelica_string _name);
DLLDirection
void boxptr_Scenario__s000__baseline_dc_roo_irRadGai_checkSurfaceAreas(threadData_t *threadData, modelica_metatype _n, modelica_metatype _A, modelica_metatype _name);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Scenario__s000__baseline_dc_roo_irRadGai_checkSurfaceAreas,2,0) {(void*) boxptr_Scenario__s000__baseline_dc_roo_irRadGai_checkSurfaceAreas,0}};
#define boxvar_Scenario__s000__baseline_dc_roo_irRadGai_checkSurfaceAreas MMC_REFSTRUCTLIT(boxvar_lit_Scenario__s000__baseline_dc_roo_irRadGai_checkSurfaceAreas)


DLLDirection
void omc_Scenario__s000__baseline_dc_roo_radTem_checkSurfaceAreas(threadData_t *threadData, modelica_integer _n, real_array _A, modelica_string _name);
DLLDirection
void boxptr_Scenario__s000__baseline_dc_roo_radTem_checkSurfaceAreas(threadData_t *threadData, modelica_metatype _n, modelica_metatype _A, modelica_metatype _name);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Scenario__s000__baseline_dc_roo_radTem_checkSurfaceAreas,2,0) {(void*) boxptr_Scenario__s000__baseline_dc_roo_radTem_checkSurfaceAreas,0}};
#define boxvar_Scenario__s000__baseline_dc_roo_radTem_checkSurfaceAreas MMC_REFSTRUCTLIT(boxvar_lit_Scenario__s000__baseline_dc_roo_radTem_checkSurfaceAreas)


DLLDirection
Scenario__s000__baseline_dc_sup_Medium_ThermodynamicState omc_Scenario__s000__baseline_dc_sup_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X);

DLLDirection
modelica_metatype boxptr_Scenario__s000__baseline_dc_sup_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Scenario__s000__baseline_dc_sup_Medium_ThermodynamicState,2,0) {(void*) boxptr_Scenario__s000__baseline_dc_sup_Medium_ThermodynamicState,0}};
#define boxvar_Scenario__s000__baseline_dc_sup_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_Scenario__s000__baseline_dc_sup_Medium_ThermodynamicState)
#include "s000_baseline_model.h"


#ifdef __cplusplus
}
#endif
#endif
