/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "tmp_two_returns_res_model.h"
#include "simulation/solver/events.h"
#include "util/real_array.h"

/* FIXME these defines are ugly and hard to read, why not use direct function pointers instead? */
#define prefixedName_performSimulation tmp_two_returns_res_performSimulation
#define prefixedName_updateContinuousSystem tmp_two_returns_res_updateContinuousSystem
#include <simulation/solver/perform_simulation.c.inc>

#define prefixedName_performQSSSimulation tmp_two_returns_res_performQSSSimulation
#include <simulation/solver/perform_qss_simulation.c.inc>


/* dummy VARINFO and FILEINFO */
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int tmp_two_returns_res_input_function(DATA *data, threadData_t *threadData)
{
  
  return 0;
}

int tmp_two_returns_res_input_function_init(DATA *data, threadData_t *threadData)
{
  
  return 0;
}

int tmp_two_returns_res_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  
  return 0;
}

int tmp_two_returns_res_inputNames(DATA *data, char ** names){
  
  return 0;
}

int tmp_two_returns_res_data_function(DATA *data, threadData_t *threadData)
{
  return 0;
}

int tmp_two_returns_res_dataReconciliationInputNames(DATA *data, char ** names){
  
  return 0;
}

int tmp_two_returns_res_dataReconciliationUnmeasuredVariables(DATA *data, char ** names)
{
  
  return 0;
}

int tmp_two_returns_res_output_function(DATA *data, threadData_t *threadData)
{
  
  return 0;
}

int tmp_two_returns_res_setc_function(DATA *data, threadData_t *threadData)
{
  
  return 0;
}

int tmp_two_returns_res_setb_function(DATA *data, threadData_t *threadData)
{
  
  return 0;
}


/*
equation index: 1168
type: SIMPLE_ASSIGN
ret.ports[2].h_outflow = 1006.0 * (-273.15 + ret.T) * (1.0 - ret.X[1]) + (2.5010145e6 + 1860.0 * (-273.15 + ret.T)) * ret.X[1]
*/
void tmp_two_returns_res_eqFunction_1168(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1168};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[61]] /* ret.ports[2].h_outflow variable */) = (1006.0) * ((-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[11]] /* ret.T PARAM */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[12]] /* ret.X[1] PARAM */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[11]] /* ret.T PARAM */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[12]] /* ret.X[1] PARAM */));
  threadData->lastEquationSolved = 1168;
}

/*
equation index: 1169
type: SIMPLE_ASSIGN
sup2.ports[1].h_outflow = 1006.0 * (-273.15 + Tsup2.k) * (1.0 - sup2.X[1]) + (2.5010145e6 + 1860.0 * (-273.15 + Tsup2.k)) * sup2.X[1]
*/
void tmp_two_returns_res_eqFunction_1169(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1169};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[219]] /* sup2.ports[1].h_outflow variable */) = (1006.0) * ((-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4]] /* Tsup2.k PARAM */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1319]] /* sup2.X[1] PARAM */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4]] /* Tsup2.k PARAM */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1319]] /* sup2.X[1] PARAM */));
  threadData->lastEquationSolved = 1169;
}

/*
equation index: 1170
type: SIMPLE_ASSIGN
sup1.ports[1].h_outflow = 1006.0 * (-273.15 + Tsup1.k) * (1.0 - sup1.X[1]) + (2.5010145e6 + 1860.0 * (-273.15 + Tsup1.k)) * sup1.X[1]
*/
void tmp_two_returns_res_eqFunction_1170(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1170};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[216]] /* sup1.ports[1].h_outflow variable */) = (1006.0) * ((-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3]] /* Tsup1.k PARAM */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1315]] /* sup1.X[1] PARAM */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3]] /* Tsup1.k PARAM */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1315]] /* sup1.X[1] PARAM */));
  threadData->lastEquationSolved = 1170;
}

/*
equation index: 1171
type: SIMPLE_ASSIGN
roo.air.cfd.u[15] = 273.15 + (sup2.ports[1].h_outflow + (-2.5010145e6) * sup2.X[1]) / (1006.0 * (1.0 - sup2.X[1]) + 1860.0 * sup2.X[1])
*/
void tmp_two_returns_res_eqFunction_1171(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1171};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[83]] /* roo.air.cfd.u[15] variable */) = 273.15 + DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[219]] /* sup2.ports[1].h_outflow variable */) + (-2.5010145e6) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1319]] /* sup2.X[1] PARAM */)),(1006.0) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1319]] /* sup2.X[1] PARAM */)) + (1860.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1319]] /* sup2.X[1] PARAM */)),"1006.0 * (1.0 - sup2.X[1]) + 1860.0 * sup2.X[1]",equationIndexes);
  threadData->lastEquationSolved = 1171;
}

/*
equation index: 1172
type: SIMPLE_ASSIGN
roo.air.cfd.u[14] = 273.15 + (sup1.ports[1].h_outflow + (-2.5010145e6) * sup1.X[1]) / (1006.0 * (1.0 - sup1.X[1]) + 1860.0 * sup1.X[1])
*/
void tmp_two_returns_res_eqFunction_1172(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1172};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[82]] /* roo.air.cfd.u[14] variable */) = 273.15 + DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[216]] /* sup1.ports[1].h_outflow variable */) + (-2.5010145e6) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1315]] /* sup1.X[1] PARAM */)),(1006.0) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1315]] /* sup1.X[1] PARAM */)) + (1860.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1315]] /* sup1.X[1] PARAM */)),"1006.0 * (1.0 - sup1.X[1]) + 1860.0 * sup1.X[1]",equationIndexes);
  threadData->lastEquationSolved = 1172;
}

/*
equation index: 1173
type: SIMPLE_ASSIGN
sup2.X_in_internal[2] = sup2.X[2]
*/
void tmp_two_returns_res_eqFunction_1173(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1173};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[218]] /* sup2.X_in_internal[2] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1320]] /* sup2.X[2] PARAM */);
  threadData->lastEquationSolved = 1173;
}

/*
equation index: 1174
type: SIMPLE_ASSIGN
sup2.X_in_internal[1] = sup2.X[1]
*/
void tmp_two_returns_res_eqFunction_1174(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1174};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[217]] /* sup2.X_in_internal[1] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1319]] /* sup2.X[1] PARAM */);
  threadData->lastEquationSolved = 1174;
}

/*
equation index: 1175
type: SIMPLE_ASSIGN
sup1.X_in_internal[2] = sup1.X[2]
*/
void tmp_two_returns_res_eqFunction_1175(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1175};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[215]] /* sup1.X_in_internal[2] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1316]] /* sup1.X[2] PARAM */);
  threadData->lastEquationSolved = 1175;
}

/*
equation index: 1176
type: SIMPLE_ASSIGN
sup1.X_in_internal[1] = sup1.X[1]
*/
void tmp_two_returns_res_eqFunction_1176(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1176};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[214]] /* sup1.X_in_internal[1] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1315]] /* sup1.X[1] PARAM */);
  threadData->lastEquationSolved = 1176;
}

/*
equation index: 1177
type: SIMPLE_ASSIGN
ret.X_in_internal[2] = ret.X[2]
*/
void tmp_two_returns_res_eqFunction_1177(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1177};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[59]] /* ret.X_in_internal[2] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[13]] /* ret.X[2] PARAM */);
  threadData->lastEquationSolved = 1177;
}

/*
equation index: 1178
type: SIMPLE_ASSIGN
ret.X_in_internal[1] = ret.X[1]
*/
void tmp_two_returns_res_eqFunction_1178(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1178};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[58]] /* ret.X_in_internal[1] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[12]] /* ret.X[1] PARAM */);
  threadData->lastEquationSolved = 1178;
}

/*
equation index: 1179
type: SIMPLE_ASSIGN
ret.p_in_internal = ret.p
*/
void tmp_two_returns_res_eqFunction_1179(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1179};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[60]] /* ret.p_in_internal variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[14]] /* ret.p PARAM */);
  threadData->lastEquationSolved = 1179;
}

/*
equation index: 1180
type: SIMPLE_ASSIGN
$DER.roo.air.cfd.uInt[7] = roo.air.cfd.u[7]
*/
void tmp_two_returns_res_eqFunction_1180(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1180};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[28]] /* der(roo.air.cfd.uInt[7]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[75]] /* roo.air.cfd.u[7] variable */);
  threadData->lastEquationSolved = 1180;
}

/*
equation index: 1181
type: SIMPLE_ASSIGN
$DER.roo.air.cfd.uInt[8] = roo.air.cfd.u[8]
*/
void tmp_two_returns_res_eqFunction_1181(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1181};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[29]] /* der(roo.air.cfd.uInt[8]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[76]] /* roo.air.cfd.u[8] variable */);
  threadData->lastEquationSolved = 1181;
}

/*
equation index: 1182
type: SIMPLE_ASSIGN
$DER.roo.air.cfd.uInt[14] = roo.air.cfd.u[14]
*/
void tmp_two_returns_res_eqFunction_1182(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1182};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* der(roo.air.cfd.uInt[14]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[82]] /* roo.air.cfd.u[14] variable */);
  threadData->lastEquationSolved = 1182;
}

/*
equation index: 1183
type: SIMPLE_ASSIGN
$DER.roo.air.cfd.uInt[15] = roo.air.cfd.u[15]
*/
void tmp_two_returns_res_eqFunction_1183(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1183};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[36]] /* der(roo.air.cfd.uInt[15]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[83]] /* roo.air.cfd.u[15] variable */);
  threadData->lastEquationSolved = 1183;
}

/*
equation index: 1184
type: SIMPLE_ASSIGN
$whenCondition4 = sample(1, roo.air.cfd.startTime, roo.air.cfd.samplePeriod)
*/
void tmp_two_returns_res_eqFunction_1184(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1184};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) = data->simulationInfo->samples[0];
  threadData->lastEquationSolved = 1184;
}

/*
equation index: 1185
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.firstTrigger = time <= roo.air.cfd.startTime + 0.5 * roo.air.cfd.samplePeriod;
end when;
*/
void tmp_two_returns_res_eqFunction_1185(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1185};
  modelica_boolean tmp0;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    tmp0 = LessEq(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[84]] /* roo.air.cfd.startTime PARAM */) + (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[4]] /* roo.air.cfd.firstTrigger DISCRETE */) = tmp0;
  }
  threadData->lastEquationSolved = 1185;
}

/*
equation index: 1186
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uWri[1] = if time < roo.air.cfd.startTime + 0.1 * roo.air.cfd.samplePeriod then pre(roo.air.cfd.u[1]) else (roo.air.cfd.uInt[1] - pre(roo.air.cfd.uIntPre[1])) / roo.air.cfd.samplePeriod;
end when;
*/
void tmp_two_returns_res_eqFunction_1186(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1186};
  modelica_boolean tmp1;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    tmp1 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[84]] /* roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[310]] /* roo.air.cfd.uWri[1] DISCRETE */) = (tmp1?(data->simulationInfo->realVarsPre[69] /* roo.air.cfd.u[1] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* roo.air.cfd.uInt[1] STATE(1,roo.air.cfd.u[1]) */) - (data->simulationInfo->realVarsPre[289] /* roo.air.cfd.uIntPre[1] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* roo.air.cfd.samplePeriod PARAM */),"roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1186;
}

/*
equation index: 1187
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uWri[2] = if time < roo.air.cfd.startTime + 0.1 * roo.air.cfd.samplePeriod then pre(roo.air.cfd.u[2]) else (roo.air.cfd.uInt[2] - pre(roo.air.cfd.uIntPre[2])) / roo.air.cfd.samplePeriod;
end when;
*/
void tmp_two_returns_res_eqFunction_1187(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1187};
  modelica_boolean tmp2;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    tmp2 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[84]] /* roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[311]] /* roo.air.cfd.uWri[2] DISCRETE */) = (tmp2?(data->simulationInfo->realVarsPre[70] /* roo.air.cfd.u[2] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* roo.air.cfd.uInt[2] STATE(1,roo.air.cfd.u[2]) */) - (data->simulationInfo->realVarsPre[290] /* roo.air.cfd.uIntPre[2] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* roo.air.cfd.samplePeriod PARAM */),"roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1187;
}

/*
equation index: 1188
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uWri[3] = if time < roo.air.cfd.startTime + 0.1 * roo.air.cfd.samplePeriod then pre(roo.air.cfd.u[3]) else (roo.air.cfd.uInt[3] - pre(roo.air.cfd.uIntPre[3])) / roo.air.cfd.samplePeriod;
end when;
*/
void tmp_two_returns_res_eqFunction_1188(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1188};
  modelica_boolean tmp3;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    tmp3 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[84]] /* roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* roo.air.cfd.uWri[3] DISCRETE */) = (tmp3?(data->simulationInfo->realVarsPre[71] /* roo.air.cfd.u[3] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* roo.air.cfd.uInt[3] STATE(1,roo.air.cfd.u[3]) */) - (data->simulationInfo->realVarsPre[291] /* roo.air.cfd.uIntPre[3] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* roo.air.cfd.samplePeriod PARAM */),"roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1188;
}

/*
equation index: 1189
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uWri[4] = if time < roo.air.cfd.startTime + 0.1 * roo.air.cfd.samplePeriod then pre(roo.air.cfd.u[4]) else (roo.air.cfd.uInt[4] - pre(roo.air.cfd.uIntPre[4])) / roo.air.cfd.samplePeriod;
end when;
*/
void tmp_two_returns_res_eqFunction_1189(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1189};
  modelica_boolean tmp4;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    tmp4 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[84]] /* roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[313]] /* roo.air.cfd.uWri[4] DISCRETE */) = (tmp4?(data->simulationInfo->realVarsPre[72] /* roo.air.cfd.u[4] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* roo.air.cfd.uInt[4] STATE(1,roo.air.cfd.u[4]) */) - (data->simulationInfo->realVarsPre[292] /* roo.air.cfd.uIntPre[4] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* roo.air.cfd.samplePeriod PARAM */),"roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1189;
}

/*
equation index: 1190
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uWri[5] = if time < roo.air.cfd.startTime + 0.1 * roo.air.cfd.samplePeriod then pre(roo.air.cfd.u[5]) else (roo.air.cfd.uInt[5] - pre(roo.air.cfd.uIntPre[5])) / roo.air.cfd.samplePeriod;
end when;
*/
void tmp_two_returns_res_eqFunction_1190(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1190};
  modelica_boolean tmp5;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    tmp5 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[84]] /* roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[314]] /* roo.air.cfd.uWri[5] DISCRETE */) = (tmp5?(data->simulationInfo->realVarsPre[73] /* roo.air.cfd.u[5] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* roo.air.cfd.uInt[5] STATE(1,roo.air.cfd.u[5]) */) - (data->simulationInfo->realVarsPre[293] /* roo.air.cfd.uIntPre[5] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* roo.air.cfd.samplePeriod PARAM */),"roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1190;
}

/*
equation index: 1191
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uWri[6] = if time < roo.air.cfd.startTime + 0.1 * roo.air.cfd.samplePeriod then pre(roo.air.cfd.u[6]) else (roo.air.cfd.uInt[6] - pre(roo.air.cfd.uIntPre[6])) / roo.air.cfd.samplePeriod;
end when;
*/
void tmp_two_returns_res_eqFunction_1191(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1191};
  modelica_boolean tmp6;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    tmp6 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[84]] /* roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[315]] /* roo.air.cfd.uWri[6] DISCRETE */) = (tmp6?(data->simulationInfo->realVarsPre[74] /* roo.air.cfd.u[6] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* roo.air.cfd.uInt[6] STATE(1,roo.air.cfd.u[6]) */) - (data->simulationInfo->realVarsPre[294] /* roo.air.cfd.uIntPre[6] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* roo.air.cfd.samplePeriod PARAM */),"roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1191;
}

/*
equation index: 1192
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uWri[7] = if time < roo.air.cfd.startTime + 0.1 * roo.air.cfd.samplePeriod then roo.air.cfd.u[7] else (roo.air.cfd.uInt[7] - pre(roo.air.cfd.uIntPre[7])) / roo.air.cfd.samplePeriod;
end when;
*/
void tmp_two_returns_res_eqFunction_1192(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1192};
  modelica_boolean tmp7;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    tmp7 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[84]] /* roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* roo.air.cfd.uWri[7] DISCRETE */) = (tmp7?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[75]] /* roo.air.cfd.u[7] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* roo.air.cfd.uInt[7] STATE(1,roo.air.cfd.u[7]) */) - (data->simulationInfo->realVarsPre[295] /* roo.air.cfd.uIntPre[7] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* roo.air.cfd.samplePeriod PARAM */),"roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1192;
}

/*
equation index: 1193
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uWri[8] = if time < roo.air.cfd.startTime + 0.1 * roo.air.cfd.samplePeriod then roo.air.cfd.u[8] else (roo.air.cfd.uInt[8] - pre(roo.air.cfd.uIntPre[8])) / roo.air.cfd.samplePeriod;
end when;
*/
void tmp_two_returns_res_eqFunction_1193(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1193};
  modelica_boolean tmp8;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    tmp8 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[84]] /* roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[317]] /* roo.air.cfd.uWri[8] DISCRETE */) = (tmp8?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[76]] /* roo.air.cfd.u[8] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* roo.air.cfd.uInt[8] STATE(1,roo.air.cfd.u[8]) */) - (data->simulationInfo->realVarsPre[296] /* roo.air.cfd.uIntPre[8] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* roo.air.cfd.samplePeriod PARAM */),"roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1193;
}

/*
equation index: 1194
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uWri[9] = if time < roo.air.cfd.startTime + 0.1 * roo.air.cfd.samplePeriod then pre(roo.air.cfd.u[9]) else (roo.air.cfd.uInt[9] - pre(roo.air.cfd.uIntPre[9])) / roo.air.cfd.samplePeriod;
end when;
*/
void tmp_two_returns_res_eqFunction_1194(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1194};
  modelica_boolean tmp9;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    tmp9 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[84]] /* roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[318]] /* roo.air.cfd.uWri[9] DISCRETE */) = (tmp9?(data->simulationInfo->realVarsPre[77] /* roo.air.cfd.u[9] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* roo.air.cfd.uInt[9] STATE(1,roo.air.cfd.u[9]) */) - (data->simulationInfo->realVarsPre[297] /* roo.air.cfd.uIntPre[9] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* roo.air.cfd.samplePeriod PARAM */),"roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1194;
}

/*
equation index: 1195
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uWri[10] = if time < roo.air.cfd.startTime + 0.1 * roo.air.cfd.samplePeriod then pre(roo.air.cfd.u[10]) else (roo.air.cfd.uInt[10] - pre(roo.air.cfd.uIntPre[10])) / roo.air.cfd.samplePeriod;
end when;
*/
void tmp_two_returns_res_eqFunction_1195(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1195};
  modelica_boolean tmp10;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    tmp10 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[84]] /* roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[319]] /* roo.air.cfd.uWri[10] DISCRETE */) = (tmp10?(data->simulationInfo->realVarsPre[78] /* roo.air.cfd.u[10] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* roo.air.cfd.uInt[10] STATE(1,roo.air.cfd.u[10]) */) - (data->simulationInfo->realVarsPre[298] /* roo.air.cfd.uIntPre[10] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* roo.air.cfd.samplePeriod PARAM */),"roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1195;
}

/*
equation index: 1196
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uWri[11] = if time < roo.air.cfd.startTime + 0.1 * roo.air.cfd.samplePeriod then pre(roo.air.cfd.u[11]) else (roo.air.cfd.uInt[11] - pre(roo.air.cfd.uIntPre[11])) / roo.air.cfd.samplePeriod;
end when;
*/
void tmp_two_returns_res_eqFunction_1196(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1196};
  modelica_boolean tmp11;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    tmp11 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[84]] /* roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[320]] /* roo.air.cfd.uWri[11] DISCRETE */) = (tmp11?(data->simulationInfo->realVarsPre[79] /* roo.air.cfd.u[11] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* roo.air.cfd.uInt[11] STATE(1,roo.air.cfd.u[11]) */) - (data->simulationInfo->realVarsPre[299] /* roo.air.cfd.uIntPre[11] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* roo.air.cfd.samplePeriod PARAM */),"roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1196;
}

/*
equation index: 1197
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uWri[12] = if time < roo.air.cfd.startTime + 0.1 * roo.air.cfd.samplePeriod then pre(roo.air.cfd.u[12]) else (roo.air.cfd.uInt[12] - pre(roo.air.cfd.uIntPre[12])) / roo.air.cfd.samplePeriod;
end when;
*/
void tmp_two_returns_res_eqFunction_1197(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1197};
  modelica_boolean tmp12;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    tmp12 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[84]] /* roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[321]] /* roo.air.cfd.uWri[12] DISCRETE */) = (tmp12?(data->simulationInfo->realVarsPre[80] /* roo.air.cfd.u[12] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* roo.air.cfd.uInt[12] STATE(1,roo.air.cfd.u[12]) */) - (data->simulationInfo->realVarsPre[300] /* roo.air.cfd.uIntPre[12] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* roo.air.cfd.samplePeriod PARAM */),"roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1197;
}

/*
equation index: 1198
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uWri[13] = if time < roo.air.cfd.startTime + 0.1 * roo.air.cfd.samplePeriod then pre(roo.air.cfd.u[13]) else (roo.air.cfd.uInt[13] - pre(roo.air.cfd.uIntPre[13])) / roo.air.cfd.samplePeriod;
end when;
*/
void tmp_two_returns_res_eqFunction_1198(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1198};
  modelica_boolean tmp13;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    tmp13 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[84]] /* roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[322]] /* roo.air.cfd.uWri[13] DISCRETE */) = (tmp13?(data->simulationInfo->realVarsPre[81] /* roo.air.cfd.u[13] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* roo.air.cfd.uInt[13] STATE(1,roo.air.cfd.u[13]) */) - (data->simulationInfo->realVarsPre[301] /* roo.air.cfd.uIntPre[13] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* roo.air.cfd.samplePeriod PARAM */),"roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1198;
}

/*
equation index: 1199
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uWri[14] = if time < roo.air.cfd.startTime + 0.1 * roo.air.cfd.samplePeriod then pre(roo.air.cfd.u[14]) else (roo.air.cfd.uInt[14] - pre(roo.air.cfd.uIntPre[14])) / roo.air.cfd.samplePeriod;
end when;
*/
void tmp_two_returns_res_eqFunction_1199(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1199};
  modelica_boolean tmp14;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    tmp14 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[84]] /* roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[323]] /* roo.air.cfd.uWri[14] DISCRETE */) = (tmp14?(data->simulationInfo->realVarsPre[82] /* roo.air.cfd.u[14] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* roo.air.cfd.uInt[14] STATE(1,roo.air.cfd.u[14]) */) - (data->simulationInfo->realVarsPre[302] /* roo.air.cfd.uIntPre[14] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* roo.air.cfd.samplePeriod PARAM */),"roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1199;
}

/*
equation index: 1200
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uWri[15] = if time < roo.air.cfd.startTime + 0.1 * roo.air.cfd.samplePeriod then pre(roo.air.cfd.u[15]) else (roo.air.cfd.uInt[15] - pre(roo.air.cfd.uIntPre[15])) / roo.air.cfd.samplePeriod;
end when;
*/
void tmp_two_returns_res_eqFunction_1200(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1200};
  modelica_boolean tmp15;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    tmp15 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[84]] /* roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[324]] /* roo.air.cfd.uWri[15] DISCRETE */) = (tmp15?(data->simulationInfo->realVarsPre[83] /* roo.air.cfd.u[15] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* roo.air.cfd.uInt[15] STATE(1,roo.air.cfd.u[15]) */) - (data->simulationInfo->realVarsPre[303] /* roo.air.cfd.uIntPre[15] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* roo.air.cfd.samplePeriod PARAM */),"roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1200;
}

/*
equation index: 1201
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uWri[16] = if time < roo.air.cfd.startTime + 0.1 * roo.air.cfd.samplePeriod then pre(roo.air.cfd.u[16]) else (roo.air.cfd.uInt[16] - pre(roo.air.cfd.uIntPre[16])) / roo.air.cfd.samplePeriod;
end when;
*/
void tmp_two_returns_res_eqFunction_1201(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1201};
  modelica_boolean tmp16;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    tmp16 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[84]] /* roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[325]] /* roo.air.cfd.uWri[16] DISCRETE */) = (tmp16?(data->simulationInfo->realVarsPre[84] /* roo.air.cfd.u[16] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* roo.air.cfd.uInt[16] STATE(1,roo.air.cfd.u[16]) */) - (data->simulationInfo->realVarsPre[304] /* roo.air.cfd.uIntPre[16] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* roo.air.cfd.samplePeriod PARAM */),"roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1201;
}

/*
equation index: 1202
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uWri[17] = if time < roo.air.cfd.startTime + 0.1 * roo.air.cfd.samplePeriod then pre(roo.air.cfd.u[17]) else (roo.air.cfd.uInt[17] - pre(roo.air.cfd.uIntPre[17])) / roo.air.cfd.samplePeriod;
end when;
*/
void tmp_two_returns_res_eqFunction_1202(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1202};
  modelica_boolean tmp17;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    tmp17 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[84]] /* roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[326]] /* roo.air.cfd.uWri[17] DISCRETE */) = (tmp17?(data->simulationInfo->realVarsPre[85] /* roo.air.cfd.u[17] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* roo.air.cfd.uInt[17] STATE(1,roo.air.cfd.u[17]) */) - (data->simulationInfo->realVarsPre[305] /* roo.air.cfd.uIntPre[17] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* roo.air.cfd.samplePeriod PARAM */),"roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1202;
}

/*
equation index: 1203
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uWri[18] = if time < roo.air.cfd.startTime + 0.1 * roo.air.cfd.samplePeriod then pre(roo.air.cfd.u[18]) else (roo.air.cfd.uInt[18] - pre(roo.air.cfd.uIntPre[18])) / roo.air.cfd.samplePeriod;
end when;
*/
void tmp_two_returns_res_eqFunction_1203(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1203};
  modelica_boolean tmp18;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    tmp18 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[84]] /* roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[327]] /* roo.air.cfd.uWri[18] DISCRETE */) = (tmp18?(data->simulationInfo->realVarsPre[86] /* roo.air.cfd.u[18] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* roo.air.cfd.uInt[18] STATE(1,roo.air.cfd.u[18]) */) - (data->simulationInfo->realVarsPre[306] /* roo.air.cfd.uIntPre[18] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* roo.air.cfd.samplePeriod PARAM */),"roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1203;
}

/*
equation index: 1204
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uWri[19] = if time < roo.air.cfd.startTime + 0.1 * roo.air.cfd.samplePeriod then pre(roo.air.cfd.u[19]) else (roo.air.cfd.uInt[19] - pre(roo.air.cfd.uIntPre[19])) / roo.air.cfd.samplePeriod;
end when;
*/
void tmp_two_returns_res_eqFunction_1204(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1204};
  modelica_boolean tmp19;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    tmp19 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[84]] /* roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[328]] /* roo.air.cfd.uWri[19] DISCRETE */) = (tmp19?(data->simulationInfo->realVarsPre[87] /* roo.air.cfd.u[19] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* roo.air.cfd.uInt[19] STATE(1,roo.air.cfd.u[19]) */) - (data->simulationInfo->realVarsPre[307] /* roo.air.cfd.uIntPre[19] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* roo.air.cfd.samplePeriod PARAM */),"roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1204;
}

/*
equation index: 1205
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uWri[20] = if time < roo.air.cfd.startTime + 0.1 * roo.air.cfd.samplePeriod then pre(roo.air.cfd.u[20]) else (roo.air.cfd.uInt[20] - pre(roo.air.cfd.uIntPre[20])) / roo.air.cfd.samplePeriod;
end when;
*/
void tmp_two_returns_res_eqFunction_1205(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1205};
  modelica_boolean tmp20;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    tmp20 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[84]] /* roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[329]] /* roo.air.cfd.uWri[20] DISCRETE */) = (tmp20?(data->simulationInfo->realVarsPre[88] /* roo.air.cfd.u[20] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* roo.air.cfd.uInt[20] STATE(1,roo.air.cfd.u[20]) */) - (data->simulationInfo->realVarsPre[308] /* roo.air.cfd.uIntPre[20] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* roo.air.cfd.samplePeriod PARAM */),"roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1205;
}

/*
equation index: 1206
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uWri[21] = if time < roo.air.cfd.startTime + 0.1 * roo.air.cfd.samplePeriod then pre(roo.air.cfd.u[21]) else (roo.air.cfd.uInt[21] - pre(roo.air.cfd.uIntPre[21])) / roo.air.cfd.samplePeriod;
end when;
*/
void tmp_two_returns_res_eqFunction_1206(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1206};
  modelica_boolean tmp21;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    tmp21 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[84]] /* roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[330]] /* roo.air.cfd.uWri[21] DISCRETE */) = (tmp21?(data->simulationInfo->realVarsPre[89] /* roo.air.cfd.u[21] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* roo.air.cfd.uInt[21] STATE(1,roo.air.cfd.u[21]) */) - (data->simulationInfo->realVarsPre[309] /* roo.air.cfd.uIntPre[21] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* roo.air.cfd.samplePeriod PARAM */),"roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1206;
}

/*
equation index: 1207
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uIntPre[1] = roo.air.cfd.uInt[1];
end when;
*/
void tmp_two_returns_res_eqFunction_1207(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1207};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[289]] /* roo.air.cfd.uIntPre[1] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* roo.air.cfd.uInt[1] STATE(1,roo.air.cfd.u[1]) */);
  }
  threadData->lastEquationSolved = 1207;
}

/*
equation index: 1208
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uIntPre[2] = roo.air.cfd.uInt[2];
end when;
*/
void tmp_two_returns_res_eqFunction_1208(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1208};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[290]] /* roo.air.cfd.uIntPre[2] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* roo.air.cfd.uInt[2] STATE(1,roo.air.cfd.u[2]) */);
  }
  threadData->lastEquationSolved = 1208;
}

/*
equation index: 1209
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uIntPre[3] = roo.air.cfd.uInt[3];
end when;
*/
void tmp_two_returns_res_eqFunction_1209(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1209};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[291]] /* roo.air.cfd.uIntPre[3] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* roo.air.cfd.uInt[3] STATE(1,roo.air.cfd.u[3]) */);
  }
  threadData->lastEquationSolved = 1209;
}

/*
equation index: 1210
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uIntPre[4] = roo.air.cfd.uInt[4];
end when;
*/
void tmp_two_returns_res_eqFunction_1210(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1210};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[292]] /* roo.air.cfd.uIntPre[4] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* roo.air.cfd.uInt[4] STATE(1,roo.air.cfd.u[4]) */);
  }
  threadData->lastEquationSolved = 1210;
}

/*
equation index: 1211
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uIntPre[5] = roo.air.cfd.uInt[5];
end when;
*/
void tmp_two_returns_res_eqFunction_1211(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1211};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[293]] /* roo.air.cfd.uIntPre[5] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* roo.air.cfd.uInt[5] STATE(1,roo.air.cfd.u[5]) */);
  }
  threadData->lastEquationSolved = 1211;
}

/*
equation index: 1212
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uIntPre[6] = roo.air.cfd.uInt[6];
end when;
*/
void tmp_two_returns_res_eqFunction_1212(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1212};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[294]] /* roo.air.cfd.uIntPre[6] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* roo.air.cfd.uInt[6] STATE(1,roo.air.cfd.u[6]) */);
  }
  threadData->lastEquationSolved = 1212;
}

/*
equation index: 1213
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uIntPre[7] = roo.air.cfd.uInt[7];
end when;
*/
void tmp_two_returns_res_eqFunction_1213(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1213};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[295]] /* roo.air.cfd.uIntPre[7] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* roo.air.cfd.uInt[7] STATE(1,roo.air.cfd.u[7]) */);
  }
  threadData->lastEquationSolved = 1213;
}

/*
equation index: 1214
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uIntPre[8] = roo.air.cfd.uInt[8];
end when;
*/
void tmp_two_returns_res_eqFunction_1214(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1214};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[296]] /* roo.air.cfd.uIntPre[8] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* roo.air.cfd.uInt[8] STATE(1,roo.air.cfd.u[8]) */);
  }
  threadData->lastEquationSolved = 1214;
}

/*
equation index: 1215
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uIntPre[9] = roo.air.cfd.uInt[9];
end when;
*/
void tmp_two_returns_res_eqFunction_1215(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1215};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[297]] /* roo.air.cfd.uIntPre[9] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* roo.air.cfd.uInt[9] STATE(1,roo.air.cfd.u[9]) */);
  }
  threadData->lastEquationSolved = 1215;
}

/*
equation index: 1216
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uIntPre[10] = roo.air.cfd.uInt[10];
end when;
*/
void tmp_two_returns_res_eqFunction_1216(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1216};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[298]] /* roo.air.cfd.uIntPre[10] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* roo.air.cfd.uInt[10] STATE(1,roo.air.cfd.u[10]) */);
  }
  threadData->lastEquationSolved = 1216;
}

/*
equation index: 1217
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uIntPre[11] = roo.air.cfd.uInt[11];
end when;
*/
void tmp_two_returns_res_eqFunction_1217(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1217};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[299]] /* roo.air.cfd.uIntPre[11] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* roo.air.cfd.uInt[11] STATE(1,roo.air.cfd.u[11]) */);
  }
  threadData->lastEquationSolved = 1217;
}

/*
equation index: 1218
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uIntPre[12] = roo.air.cfd.uInt[12];
end when;
*/
void tmp_two_returns_res_eqFunction_1218(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1218};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[300]] /* roo.air.cfd.uIntPre[12] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* roo.air.cfd.uInt[12] STATE(1,roo.air.cfd.u[12]) */);
  }
  threadData->lastEquationSolved = 1218;
}

/*
equation index: 1219
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uIntPre[13] = roo.air.cfd.uInt[13];
end when;
*/
void tmp_two_returns_res_eqFunction_1219(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1219};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[301]] /* roo.air.cfd.uIntPre[13] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* roo.air.cfd.uInt[13] STATE(1,roo.air.cfd.u[13]) */);
  }
  threadData->lastEquationSolved = 1219;
}

/*
equation index: 1220
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uIntPre[14] = roo.air.cfd.uInt[14];
end when;
*/
void tmp_two_returns_res_eqFunction_1220(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1220};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[302]] /* roo.air.cfd.uIntPre[14] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* roo.air.cfd.uInt[14] STATE(1,roo.air.cfd.u[14]) */);
  }
  threadData->lastEquationSolved = 1220;
}

/*
equation index: 1221
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uIntPre[15] = roo.air.cfd.uInt[15];
end when;
*/
void tmp_two_returns_res_eqFunction_1221(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1221};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[303]] /* roo.air.cfd.uIntPre[15] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* roo.air.cfd.uInt[15] STATE(1,roo.air.cfd.u[15]) */);
  }
  threadData->lastEquationSolved = 1221;
}

/*
equation index: 1222
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uIntPre[16] = roo.air.cfd.uInt[16];
end when;
*/
void tmp_two_returns_res_eqFunction_1222(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1222};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[304]] /* roo.air.cfd.uIntPre[16] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* roo.air.cfd.uInt[16] STATE(1,roo.air.cfd.u[16]) */);
  }
  threadData->lastEquationSolved = 1222;
}

/*
equation index: 1223
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uIntPre[17] = roo.air.cfd.uInt[17];
end when;
*/
void tmp_two_returns_res_eqFunction_1223(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1223};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[305]] /* roo.air.cfd.uIntPre[17] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* roo.air.cfd.uInt[17] STATE(1,roo.air.cfd.u[17]) */);
  }
  threadData->lastEquationSolved = 1223;
}

/*
equation index: 1224
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uIntPre[18] = roo.air.cfd.uInt[18];
end when;
*/
void tmp_two_returns_res_eqFunction_1224(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1224};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[306]] /* roo.air.cfd.uIntPre[18] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* roo.air.cfd.uInt[18] STATE(1,roo.air.cfd.u[18]) */);
  }
  threadData->lastEquationSolved = 1224;
}

/*
equation index: 1225
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uIntPre[19] = roo.air.cfd.uInt[19];
end when;
*/
void tmp_two_returns_res_eqFunction_1225(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1225};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[307]] /* roo.air.cfd.uIntPre[19] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* roo.air.cfd.uInt[19] STATE(1,roo.air.cfd.u[19]) */);
  }
  threadData->lastEquationSolved = 1225;
}

/*
equation index: 1226
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uIntPre[20] = roo.air.cfd.uInt[20];
end when;
*/
void tmp_two_returns_res_eqFunction_1226(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1226};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* roo.air.cfd.uIntPre[20] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* roo.air.cfd.uInt[20] STATE(1,roo.air.cfd.u[20]) */);
  }
  threadData->lastEquationSolved = 1226;
}

/*
equation index: 1227
type: WHEN

when {$whenCondition4} then
  roo.air.cfd.uIntPre[21] = roo.air.cfd.uInt[21];
end when;
*/
void tmp_two_returns_res_eqFunction_1227(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1227};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[309]] /* roo.air.cfd.uIntPre[21] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* roo.air.cfd.uInt[21] STATE(1,roo.air.cfd.u[21]) */);
  }
  threadData->lastEquationSolved = 1227;
}

/*
equation index: 1228
type: ALGORITHM

  roo.air.cfd.retVal := pre(roo.air.cfd.retVal);
  roo.air.cfd.y[16] := pre(roo.air.cfd.y[16]);
  roo.air.cfd.y[15] := pre(roo.air.cfd.y[15]);
  roo.air.cfd.y[14] := pre(roo.air.cfd.y[14]);
  roo.air.cfd.y[13] := pre(roo.air.cfd.y[13]);
  roo.air.cfd.y[12] := pre(roo.air.cfd.y[12]);
  roo.air.cfd.y[11] := pre(roo.air.cfd.y[11]);
  roo.air.cfd.y[10] := pre(roo.air.cfd.y[10]);
  roo.air.cfd.y[9] := pre(roo.air.cfd.y[9]);
  roo.air.cfd.y[8] := pre(roo.air.cfd.y[8]);
  roo.air.cfd.y[7] := pre(roo.air.cfd.y[7]);
  roo.air.cfd.y[6] := pre(roo.air.cfd.y[6]);
  roo.air.cfd.y[5] := pre(roo.air.cfd.y[5]);
  roo.air.cfd.y[4] := pre(roo.air.cfd.y[4]);
  roo.air.cfd.y[3] := pre(roo.air.cfd.y[3]);
  roo.air.cfd.y[2] := pre(roo.air.cfd.y[2]);
  roo.air.cfd.y[1] := pre(roo.air.cfd.y[1]);
  roo.air.cfd.modTimRea := pre(roo.air.cfd.modTimRea);
  $whenCondition3 := pre($whenCondition3);
  $whenCondition3 := $whenCondition4;
  when $whenCondition3 then
    (roo.air.cfd.modTimRea, roo.air.cfd.y, roo.air.cfd.retVal) := TmpTwoReturnsRes.roo.air.cfd.exchange(0, time, roo.air.cfd.samplePeriod, roo.air.cfd.uWri, 21, roo.air.cfd.yFixed, 16);
    assert(roo.air.cfd.retVal >= 0, "Obtained negative return value during data transfer with CFD.
   Aborting simulation. Check CFD log file.
   Received: retVal = " + String(roo.air.cfd.retVal, 0, true));
  end when;
*/
void tmp_two_returns_res_eqFunction_1228(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1228};
  real_array tmp22;
  real_array tmp23;
  real_array tmp24;
  modelica_boolean tmp25;
  static const MMC_DEFSTRINGLIT(tmp26,128,"Obtained negative return value during data transfer with CFD.\n   Aborting simulation. Check CFD log file.\n   Received: retVal = ");
  modelica_string tmp27;
  modelica_metatype tmpMeta28;
  static int tmp29 = 0;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[0]] /* roo.air.cfd.retVal DISCRETE */) = (data->simulationInfo->integerVarsPre[0] /* roo.air.cfd.retVal DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[346]] /* roo.air.cfd.y[16] DISCRETE */) = (data->simulationInfo->realVarsPre[346] /* roo.air.cfd.y[16] DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[345]] /* roo.air.cfd.y[15] DISCRETE */) = (data->simulationInfo->realVarsPre[345] /* roo.air.cfd.y[15] DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[344]] /* roo.air.cfd.y[14] DISCRETE */) = (data->simulationInfo->realVarsPre[344] /* roo.air.cfd.y[14] DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[343]] /* roo.air.cfd.y[13] DISCRETE */) = (data->simulationInfo->realVarsPre[343] /* roo.air.cfd.y[13] DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[342]] /* roo.air.cfd.y[12] DISCRETE */) = (data->simulationInfo->realVarsPre[342] /* roo.air.cfd.y[12] DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[341]] /* roo.air.cfd.y[11] DISCRETE */) = (data->simulationInfo->realVarsPre[341] /* roo.air.cfd.y[11] DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[340]] /* roo.air.cfd.y[10] DISCRETE */) = (data->simulationInfo->realVarsPre[340] /* roo.air.cfd.y[10] DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[339]] /* roo.air.cfd.y[9] DISCRETE */) = (data->simulationInfo->realVarsPre[339] /* roo.air.cfd.y[9] DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[338]] /* roo.air.cfd.y[8] DISCRETE */) = (data->simulationInfo->realVarsPre[338] /* roo.air.cfd.y[8] DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[337]] /* roo.air.cfd.y[7] DISCRETE */) = (data->simulationInfo->realVarsPre[337] /* roo.air.cfd.y[7] DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[336]] /* roo.air.cfd.y[6] DISCRETE */) = (data->simulationInfo->realVarsPre[336] /* roo.air.cfd.y[6] DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[335]] /* roo.air.cfd.y[5] DISCRETE */) = (data->simulationInfo->realVarsPre[335] /* roo.air.cfd.y[5] DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[334]] /* roo.air.cfd.y[4] DISCRETE */) = (data->simulationInfo->realVarsPre[334] /* roo.air.cfd.y[4] DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[333]] /* roo.air.cfd.y[3] DISCRETE */) = (data->simulationInfo->realVarsPre[333] /* roo.air.cfd.y[3] DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[332]] /* roo.air.cfd.y[2] DISCRETE */) = (data->simulationInfo->realVarsPre[332] /* roo.air.cfd.y[2] DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[331]] /* roo.air.cfd.y[1] DISCRETE */) = (data->simulationInfo->realVarsPre[331] /* roo.air.cfd.y[1] DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[288]] /* roo.air.cfd.modTimRea DISCRETE */) = (data->simulationInfo->realVarsPre[288] /* roo.air.cfd.modTimRea DISCRETE */);

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[2]] /* $whenCondition3 DISCRETE */) = (data->simulationInfo->booleanVarsPre[2] /* $whenCondition3 DISCRETE */);

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[2]] /* $whenCondition3 DISCRETE */) = (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */);

  if(data->simulationInfo->discreteCall == 1)
  {
    if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[2]] /* $whenCondition3 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[2] /* $whenCondition3 DISCRETE */) /* edge */))
    {
      real_array_create(&tmp22, ((modelica_real*)&((&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[331]] /* roo.air.cfd.y[1] DISCRETE */))[((modelica_integer) 1) - 1])), 1, (_index_t)16);
      real_array_create(&tmp23, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[310]] /* roo.air.cfd.uWri[1] DISCRETE */)[((modelica_integer) 1) - 1])), 1, (_index_t)21);
      real_array_create(&tmp24, ((modelica_real*)&((&data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[97]] /* roo.air.cfd.yFixed[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)16);
      (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[288]] /* roo.air.cfd.modTimRea DISCRETE */) = omc_TmpTwoReturnsRes_roo_air_cfd_exchange(threadData, ((modelica_integer) 0), data->localData[0]->timeValue, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* roo.air.cfd.samplePeriod PARAM */), tmp23, ((modelica_integer) 21), tmp24, ((modelica_integer) 16) ,&tmp22 ,&(data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[0]] /* roo.air.cfd.retVal DISCRETE */));

      {
        tmp25 = GreaterEq((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[0]] /* roo.air.cfd.retVal DISCRETE */),((modelica_integer) 0));
        if(!tmp25)
        {
          tmp27 = modelica_integer_to_modelica_string((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[0]] /* roo.air.cfd.retVal DISCRETE */), ((modelica_integer) 0), 1 /* true */);
          tmpMeta28 = stringAppend(MMC_REFSTRINGLIT(tmp26),tmp27);
          {
            const char* assert_cond = "(roo.air.cfd.retVal >= 0)";
            if (data->simulationInfo->noThrowAsserts) {
              FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",316,5,319,49,1};
              infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta28));
              data->simulationInfo->needToReThrow = 1;
            } else {
              FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",316,5,319,49,1};
              omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta28));
            }
          }
        }
      }
    }
  }
  threadData->lastEquationSolved = 1228;
}

/*
equation index: 1229
type: SIMPLE_ASSIGN
roo.irRadExc.T4Opa[2] = -2.2155463946313015e10 - (-1.0076963532349998e8) * roo.air.cfd.y[2]
*/
void tmp_two_returns_res_eqFunction_1229(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1229};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[123]] /* roo.irRadExc.T4Opa[2] variable */) = -2.2155463946313015e10 - ((-1.0076963532349998e8) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[332]] /* roo.air.cfd.y[2] DISCRETE */)));
  threadData->lastEquationSolved = 1229;
}

/*
equation index: 1230
type: SIMPLE_ASSIGN
roo.irRadExc.T4Opa[5] = -2.2155463946313015e10 - (-1.0076963532349998e8) * roo.air.cfd.y[5]
*/
void tmp_two_returns_res_eqFunction_1230(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1230};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[126]] /* roo.irRadExc.T4Opa[5] variable */) = -2.2155463946313015e10 - ((-1.0076963532349998e8) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[335]] /* roo.air.cfd.y[5] DISCRETE */)));
  threadData->lastEquationSolved = 1230;
}

/*
equation index: 1231
type: SIMPLE_ASSIGN
roo.air.fluInt.ports_mXi_flow[1,1] = fan1.k * (if fan1.k > 0.0 then sup1.X[1] else roo.air.cfd.y[12])
*/
void tmp_two_returns_res_eqFunction_1231(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1231};
  modelica_boolean tmp30;
  tmp30 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5]] /* fan1.k PARAM */),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[99]] /* roo.air.fluInt.ports_mXi_flow[1,1] variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5]] /* fan1.k PARAM */)) * ((tmp30?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1315]] /* sup1.X[1] PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[342]] /* roo.air.cfd.y[12] DISCRETE */)));
  threadData->lastEquationSolved = 1231;
}

/*
equation index: 1232
type: SIMPLE_ASSIGN
roo.irRadExc.T4Opa[4] = -2.2155463946313015e10 - (-1.0076963532349998e8) * roo.air.cfd.y[4]
*/
void tmp_two_returns_res_eqFunction_1232(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1232};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[125]] /* roo.irRadExc.T4Opa[4] variable */) = -2.2155463946313015e10 - ((-1.0076963532349998e8) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[334]] /* roo.air.cfd.y[4] DISCRETE */)));
  threadData->lastEquationSolved = 1232;
}

/*
equation index: 1233
type: SIMPLE_ASSIGN
roo.air.fluInt.ports_mXi_flow[2,1] = fan2.k * (if fan2.k > 0.0 then sup2.X[1] else roo.air.cfd.y[13])
*/
void tmp_two_returns_res_eqFunction_1233(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1233};
  modelica_boolean tmp31;
  tmp31 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[6]] /* fan2.k PARAM */),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[100]] /* roo.air.fluInt.ports_mXi_flow[2,1] variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[6]] /* fan2.k PARAM */)) * ((tmp31?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1319]] /* sup2.X[1] PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[343]] /* roo.air.cfd.y[13] DISCRETE */)));
  threadData->lastEquationSolved = 1233;
}

/*
equation index: 1234
type: SIMPLE_ASSIGN
roo.ports[2].h_outflow = 1006.0 * (-273.15 + roo.air.cfd.y[9]) * (1.0 - roo.air.cfd.y[13]) + (2.5010145e6 + 1860.0 * (-273.15 + roo.air.cfd.y[9])) * roo.air.cfd.y[13]
*/
void tmp_two_returns_res_eqFunction_1234(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1234};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[180]] /* roo.ports[2].h_outflow variable */) = (1006.0) * ((-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[339]] /* roo.air.cfd.y[9] DISCRETE */)) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[343]] /* roo.air.cfd.y[13] DISCRETE */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[339]] /* roo.air.cfd.y[9] DISCRETE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[343]] /* roo.air.cfd.y[13] DISCRETE */));
  threadData->lastEquationSolved = 1234;
}

/*
equation index: 1235
type: SIMPLE_ASSIGN
roo.irRadExc.T4Opa[1] = -2.2155463946313015e10 - (-1.0076963532349998e8) * roo.air.cfd.y[1]
*/
void tmp_two_returns_res_eqFunction_1235(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1235};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[122]] /* roo.irRadExc.T4Opa[1] variable */) = -2.2155463946313015e10 - ((-1.0076963532349998e8) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[331]] /* roo.air.cfd.y[1] DISCRETE */)));
  threadData->lastEquationSolved = 1235;
}

/*
equation index: 1236
type: SIMPLE_ASSIGN
roo.irRadExc.T4Opa[3] = -2.2155463946313015e10 - (-1.0076963532349998e8) * roo.air.cfd.y[3]
*/
void tmp_two_returns_res_eqFunction_1236(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1236};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[124]] /* roo.irRadExc.T4Opa[3] variable */) = -2.2155463946313015e10 - ((-1.0076963532349998e8) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[333]] /* roo.air.cfd.y[3] DISCRETE */)));
  threadData->lastEquationSolved = 1236;
}

/*
equation index: 1237
type: SIMPLE_ASSIGN
roo.air.cfd.u[21] = roo.air.cfd.y[15]
*/
void tmp_two_returns_res_eqFunction_1237(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1237};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[89]] /* roo.air.cfd.u[21] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[345]] /* roo.air.cfd.y[15] DISCRETE */);
  threadData->lastEquationSolved = 1237;
}

/*
equation index: 1238
type: SIMPLE_ASSIGN
$DER.roo.air.cfd.uInt[21] = roo.air.cfd.u[21]
*/
void tmp_two_returns_res_eqFunction_1238(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1238};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[42]] /* der(roo.air.cfd.uInt[21]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[89]] /* roo.air.cfd.u[21] variable */);
  threadData->lastEquationSolved = 1238;
}

/*
equation index: 1239
type: SIMPLE_ASSIGN
roo.ports[4].h_outflow = 1006.0 * (-273.15 + roo.air.cfd.y[11]) * (1.0 - roo.air.cfd.u[21]) + (2.5010145e6 + 1860.0 * (-273.15 + roo.air.cfd.y[11])) * roo.air.cfd.u[21]
*/
void tmp_two_returns_res_eqFunction_1239(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1239};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[182]] /* roo.ports[4].h_outflow variable */) = (1006.0) * ((-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[341]] /* roo.air.cfd.y[11] DISCRETE */)) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[89]] /* roo.air.cfd.u[21] variable */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[341]] /* roo.air.cfd.y[11] DISCRETE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[89]] /* roo.air.cfd.u[21] variable */));
  threadData->lastEquationSolved = 1239;
}

/*
equation index: 1240
type: SIMPLE_ASSIGN
roo.air.cfd.u[17] = 273.15 + (roo.ports[4].h_outflow + (-2.5010145e6) * roo.air.cfd.u[21]) / (1006.0 * (1.0 - roo.air.cfd.u[21]) + 1860.0 * roo.air.cfd.u[21])
*/
void tmp_two_returns_res_eqFunction_1240(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1240};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[85]] /* roo.air.cfd.u[17] variable */) = 273.15 + DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[182]] /* roo.ports[4].h_outflow variable */) + (-2.5010145e6) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[89]] /* roo.air.cfd.u[21] variable */)),(1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[89]] /* roo.air.cfd.u[21] variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[89]] /* roo.air.cfd.u[21] variable */)),"1006.0 * (1.0 - roo.air.cfd.u[21]) + 1860.0 * roo.air.cfd.u[21]",equationIndexes);
  threadData->lastEquationSolved = 1240;
}

/*
equation index: 1241
type: SIMPLE_ASSIGN
$DER.roo.air.cfd.uInt[17] = roo.air.cfd.u[17]
*/
void tmp_two_returns_res_eqFunction_1241(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1241};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[38]] /* der(roo.air.cfd.uInt[17]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[85]] /* roo.air.cfd.u[17] variable */);
  threadData->lastEquationSolved = 1241;
}

/*
equation index: 1242
type: SIMPLE_ASSIGN
roo.irRadExc.T4Opa[6] = -2.2155463946313015e10 - (-1.0076963532349998e8) * roo.air.cfd.y[6]
*/
void tmp_two_returns_res_eqFunction_1242(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1242};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[127]] /* roo.irRadExc.T4Opa[6] variable */) = -2.2155463946313015e10 - ((-1.0076963532349998e8) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[336]] /* roo.air.cfd.y[6] DISCRETE */)));
  threadData->lastEquationSolved = 1242;
}

/*
equation index: 1267
type: LINEAR

<var>roo.irRadExc.J[3]</var>
<var>roo.irRadExc.J[1]</var>
<var>roo.irRadExc.J[2]</var>
<var>roo.irRadExc.J[4]</var>
<var>roo.irRadExc.J[6]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void tmp_two_returns_res_eqFunction_1267(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1267};
  /* Linear equation system */
  int retValue;
  double aux_x[5] = { (data->localData[1]->realVars[data->simulationInfo->realVarsIndex[116]] /* roo.irRadExc.J[3] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[114]] /* roo.irRadExc.J[1] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[115]] /* roo.irRadExc.J[2] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[117]] /* roo.irRadExc.J[4] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[119]] /* roo.irRadExc.J[6] variable */) };
  infoStreamPrint(OMC_LOG_DT, 0, "Solving linear system 1267 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);

  retValue = solve_linear_system(data, threadData, 2, &aux_x[0]);

  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1267};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving linear system 1267 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[116]] /* roo.irRadExc.J[3] variable */) = aux_x[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[114]] /* roo.irRadExc.J[1] variable */) = aux_x[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[115]] /* roo.irRadExc.J[2] variable */) = aux_x[2];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[117]] /* roo.irRadExc.J[4] variable */) = aux_x[3];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[119]] /* roo.irRadExc.J[6] variable */) = aux_x[4];

  threadData->lastEquationSolved = 1267;
}

/*
equation index: 1268
type: SIMPLE_ASSIGN
roo.irRadExc.conSurBou[5].Q_flow = (-roo.irRadExc.J[5]) - roo.irRadExc.G[5]
*/
void tmp_two_returns_res_eqFunction_1268(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1268};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[138]] /* roo.irRadExc.conSurBou[5].Q_flow variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[118]] /* roo.irRadExc.J[5] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[112]] /* roo.irRadExc.G[5] variable */);
  threadData->lastEquationSolved = 1268;
}

/*
equation index: 1269
type: SIMPLE_ASSIGN
roo.irRadExc.conSurBou[3].Q_flow = (-roo.irRadExc.J[3]) - roo.irRadExc.G[3]
*/
void tmp_two_returns_res_eqFunction_1269(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1269};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[136]] /* roo.irRadExc.conSurBou[3].Q_flow variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[116]] /* roo.irRadExc.J[3] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[110]] /* roo.irRadExc.G[3] variable */);
  threadData->lastEquationSolved = 1269;
}

/*
equation index: 1270
type: SIMPLE_ASSIGN
roo.irRadExc.conSurBou[1].Q_flow = (-roo.irRadExc.J[1]) - roo.irRadExc.G[1]
*/
void tmp_two_returns_res_eqFunction_1270(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1270};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[134]] /* roo.irRadExc.conSurBou[1].Q_flow variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[114]] /* roo.irRadExc.J[1] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[108]] /* roo.irRadExc.G[1] variable */);
  threadData->lastEquationSolved = 1270;
}

/*
equation index: 1271
type: SIMPLE_ASSIGN
roo.irRadExc.conSurBou[2].Q_flow = (-roo.irRadExc.J[2]) - roo.irRadExc.G[2]
*/
void tmp_two_returns_res_eqFunction_1271(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1271};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[135]] /* roo.irRadExc.conSurBou[2].Q_flow variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[115]] /* roo.irRadExc.J[2] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[109]] /* roo.irRadExc.G[2] variable */);
  threadData->lastEquationSolved = 1271;
}

/*
equation index: 1272
type: SIMPLE_ASSIGN
roo.irRadExc.conSurBou[4].Q_flow = (-roo.irRadExc.J[4]) - roo.irRadExc.G[4]
*/
void tmp_two_returns_res_eqFunction_1272(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1272};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[137]] /* roo.irRadExc.conSurBou[4].Q_flow variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[117]] /* roo.irRadExc.J[4] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[111]] /* roo.irRadExc.G[4] variable */);
  threadData->lastEquationSolved = 1272;
}

/*
equation index: 1273
type: SIMPLE_ASSIGN
roo.irRadExc.conSurBou[6].Q_flow = (-roo.irRadExc.J[6]) - roo.irRadExc.G[6]
*/
void tmp_two_returns_res_eqFunction_1273(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1273};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[139]] /* roo.irRadExc.conSurBou[6].Q_flow variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[119]] /* roo.irRadExc.J[6] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[113]] /* roo.irRadExc.G[6] variable */);
  threadData->lastEquationSolved = 1273;
}

/*
equation index: 1274
type: SIMPLE_ASSIGN
roo.heaPorRad.T = (293.15 * roo.radTem.epsAOpa[1] + 293.15 * roo.radTem.epsAOpa[2] + 293.15 * roo.radTem.epsAOpa[3] + 293.15 * roo.radTem.epsAOpa[4] + roo.radTem.epsAOpa[5] * roo.air.cfd.y[1] + roo.radTem.epsAOpa[6] * roo.air.cfd.y[2] + roo.radTem.epsAOpa[7] * roo.air.cfd.y[3] + roo.radTem.epsAOpa[8] * roo.air.cfd.y[4] + roo.radTem.epsAOpa[9] * roo.air.cfd.y[5] + roo.radTem.epsAOpa[10] * roo.air.cfd.y[6] + 293.15 * (roo.radTem.epsAOpa[11] + roo.radTem.epsAOpa[12] + roo.radTem.epsAGla[1])) / (roo.radTem.epsAOpa[1] + roo.radTem.epsAOpa[2] + roo.radTem.epsAOpa[3] + roo.radTem.epsAOpa[4] + roo.radTem.epsAOpa[5] + roo.radTem.epsAOpa[6] + roo.radTem.epsAOpa[7] + roo.radTem.epsAOpa[8] + roo.radTem.epsAOpa[9] + roo.radTem.epsAOpa[10] + roo.radTem.epsAOpa[11] + roo.radTem.epsAOpa[12] + roo.radTem.epsAGla[1])
*/
void tmp_two_returns_res_eqFunction_1274(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1274};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[107]] /* roo.heaPorRad.T variable */) = DIVISION_SIM((293.15) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1231]] /* roo.radTem.epsAOpa[1] PARAM */)) + (293.15) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1232]] /* roo.radTem.epsAOpa[2] PARAM */)) + (293.15) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1233]] /* roo.radTem.epsAOpa[3] PARAM */)) + (293.15) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1234]] /* roo.radTem.epsAOpa[4] PARAM */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1235]] /* roo.radTem.epsAOpa[5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[331]] /* roo.air.cfd.y[1] DISCRETE */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1236]] /* roo.radTem.epsAOpa[6] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[332]] /* roo.air.cfd.y[2] DISCRETE */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1237]] /* roo.radTem.epsAOpa[7] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[333]] /* roo.air.cfd.y[3] DISCRETE */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1238]] /* roo.radTem.epsAOpa[8] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[334]] /* roo.air.cfd.y[4] DISCRETE */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1239]] /* roo.radTem.epsAOpa[9] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[335]] /* roo.air.cfd.y[5] DISCRETE */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1240]] /* roo.radTem.epsAOpa[10] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[336]] /* roo.air.cfd.y[6] DISCRETE */)) + (293.15) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1241]] /* roo.radTem.epsAOpa[11] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1242]] /* roo.radTem.epsAOpa[12] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1230]] /* roo.radTem.epsAGla[1] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1231]] /* roo.radTem.epsAOpa[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1232]] /* roo.radTem.epsAOpa[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1233]] /* roo.radTem.epsAOpa[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1234]] /* roo.radTem.epsAOpa[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1235]] /* roo.radTem.epsAOpa[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1236]] /* roo.radTem.epsAOpa[6] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1237]] /* roo.radTem.epsAOpa[7] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1238]] /* roo.radTem.epsAOpa[8] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1239]] /* roo.radTem.epsAOpa[9] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1240]] /* roo.radTem.epsAOpa[10] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1241]] /* roo.radTem.epsAOpa[11] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1242]] /* roo.radTem.epsAOpa[12] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1230]] /* roo.radTem.epsAGla[1] PARAM */),"roo.radTem.epsAOpa[1] + roo.radTem.epsAOpa[2] + roo.radTem.epsAOpa[3] + roo.radTem.epsAOpa[4] + roo.radTem.epsAOpa[5] + roo.radTem.epsAOpa[6] + roo.radTem.epsAOpa[7] + roo.radTem.epsAOpa[8] + roo.radTem.epsAOpa[9] + roo.radTem.epsAOpa[10] + roo.radTem.epsAOpa[11] + roo.radTem.epsAOpa[12] + roo.radTem.epsAGla[1]",equationIndexes);
  threadData->lastEquationSolved = 1274;
}

/*
equation index: 1275
type: SIMPLE_ASSIGN
roo.ports[1].h_outflow = 1006.0 * (-273.15 + roo.air.cfd.y[8]) * (1.0 - roo.air.cfd.y[12]) + (2.5010145e6 + 1860.0 * (-273.15 + roo.air.cfd.y[8])) * roo.air.cfd.y[12]
*/
void tmp_two_returns_res_eqFunction_1275(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1275};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[179]] /* roo.ports[1].h_outflow variable */) = (1006.0) * ((-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[338]] /* roo.air.cfd.y[8] DISCRETE */)) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[342]] /* roo.air.cfd.y[12] DISCRETE */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[338]] /* roo.air.cfd.y[8] DISCRETE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[342]] /* roo.air.cfd.y[12] DISCRETE */));
  threadData->lastEquationSolved = 1275;
}

/*
equation index: 1276
type: SIMPLE_ASSIGN
roo.air.cfd.u[20] = roo.air.cfd.y[14]
*/
void tmp_two_returns_res_eqFunction_1276(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1276};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* roo.air.cfd.u[20] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[344]] /* roo.air.cfd.y[14] DISCRETE */);
  threadData->lastEquationSolved = 1276;
}

/*
equation index: 1277
type: SIMPLE_ASSIGN
$DER.roo.air.cfd.uInt[20] = roo.air.cfd.u[20]
*/
void tmp_two_returns_res_eqFunction_1277(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1277};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[41]] /* der(roo.air.cfd.uInt[20]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* roo.air.cfd.u[20] variable */);
  threadData->lastEquationSolved = 1277;
}

/*
equation index: 1278
type: SIMPLE_ASSIGN
roo.ports[3].h_outflow = 1006.0 * (-273.15 + roo.air.cfd.y[10]) * (1.0 - roo.air.cfd.u[20]) + (2.5010145e6 + 1860.0 * (-273.15 + roo.air.cfd.y[10])) * roo.air.cfd.u[20]
*/
void tmp_two_returns_res_eqFunction_1278(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1278};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[181]] /* roo.ports[3].h_outflow variable */) = (1006.0) * ((-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[340]] /* roo.air.cfd.y[10] DISCRETE */)) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* roo.air.cfd.u[20] variable */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[340]] /* roo.air.cfd.y[10] DISCRETE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* roo.air.cfd.u[20] variable */));
  threadData->lastEquationSolved = 1278;
}

/*
equation index: 1279
type: SIMPLE_ASSIGN
roo.air.cfd.u[16] = 273.15 + (roo.ports[3].h_outflow + (-2.5010145e6) * roo.air.cfd.u[20]) / (1006.0 * (1.0 - roo.air.cfd.u[20]) + 1860.0 * roo.air.cfd.u[20])
*/
void tmp_two_returns_res_eqFunction_1279(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1279};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[84]] /* roo.air.cfd.u[16] variable */) = 273.15 + DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[181]] /* roo.ports[3].h_outflow variable */) + (-2.5010145e6) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* roo.air.cfd.u[20] variable */)),(1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* roo.air.cfd.u[20] variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* roo.air.cfd.u[20] variable */)),"1006.0 * (1.0 - roo.air.cfd.u[20]) + 1860.0 * roo.air.cfd.u[20]",equationIndexes);
  threadData->lastEquationSolved = 1279;
}

/*
equation index: 1280
type: SIMPLE_ASSIGN
$DER.roo.air.cfd.uInt[16] = roo.air.cfd.u[16]
*/
void tmp_two_returns_res_eqFunction_1280(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1280};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[37]] /* der(roo.air.cfd.uInt[16]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[84]] /* roo.air.cfd.u[16] variable */);
  threadData->lastEquationSolved = 1280;
}

/*
equation index: 1281
type: SIMPLE_ASSIGN
roo.air.cfd.sampleTrigger = $whenCondition4
*/
void tmp_two_returns_res_eqFunction_1281(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1281};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* roo.air.cfd.sampleTrigger DISCRETE */) = (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */);
  threadData->lastEquationSolved = 1281;
}

/*
equation index: 1282
type: SIMPLE_ASSIGN
roo.irRadGai.sumAEpsInv = 1.0 / (roo.irRadGai.sumAEpsNoWin + roo.irRadGai.AEpsConExtWinUns[1])
*/
void tmp_two_returns_res_eqFunction_1282(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1282};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* roo.irRadGai.sumAEpsInv variable */) = DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1020]] /* roo.irRadGai.sumAEpsNoWin PARAM */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[141]] /* roo.irRadGai.AEpsConExtWinUns[1] variable */),"roo.irRadGai.sumAEpsNoWin + roo.irRadGai.AEpsConExtWinUns[1]",equationIndexes);
  threadData->lastEquationSolved = 1282;
}

/*
equation index: 1283
type: SIMPLE_ASSIGN
roo.irRadGai.fraSurBou[6] = roo.irRadGai.AEpsSurBou[6] * roo.irRadGai.sumAEpsInv
*/
void tmp_two_returns_res_eqFunction_1283(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1283};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[174]] /* roo.irRadGai.fraSurBou[6] variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[829]] /* roo.irRadGai.AEpsSurBou[6] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* roo.irRadGai.sumAEpsInv variable */));
  threadData->lastEquationSolved = 1283;
}

/*
equation index: 1284
type: SIMPLE_ASSIGN
roo.irRadGai.conSurBou[6].Q_flow = (-roo.irRadGai.fraSurBou[6]) * roo.irRadGai.Q_flow
*/
void tmp_two_returns_res_eqFunction_1284(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1284};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[161]] /* roo.irRadGai.conSurBou[6].Q_flow variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[174]] /* roo.irRadGai.fraSurBou[6] variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[143]] /* roo.irRadGai.Q_flow variable */));
  threadData->lastEquationSolved = 1284;
}

/*
equation index: 1285
type: SIMPLE_ASSIGN
roo.air.cfd.u[6] = (-roo.irRadExc.conSurBou[6].Q_flow) - roo.irRadGai.conSurBou[6].Q_flow
*/
void tmp_two_returns_res_eqFunction_1285(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1285};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[74]] /* roo.air.cfd.u[6] variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[139]] /* roo.irRadExc.conSurBou[6].Q_flow variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[161]] /* roo.irRadGai.conSurBou[6].Q_flow variable */);
  threadData->lastEquationSolved = 1285;
}

/*
equation index: 1286
type: SIMPLE_ASSIGN
$DER.roo.air.cfd.uInt[6] = roo.air.cfd.u[6]
*/
void tmp_two_returns_res_eqFunction_1286(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1286};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* der(roo.air.cfd.uInt[6]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[74]] /* roo.air.cfd.u[6] variable */);
  threadData->lastEquationSolved = 1286;
}

/*
equation index: 1287
type: SIMPLE_ASSIGN
roo.irRadGai.fraSurBou[5] = roo.irRadGai.AEpsSurBou[5] * roo.irRadGai.sumAEpsInv
*/
void tmp_two_returns_res_eqFunction_1287(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1287};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[173]] /* roo.irRadGai.fraSurBou[5] variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[828]] /* roo.irRadGai.AEpsSurBou[5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* roo.irRadGai.sumAEpsInv variable */));
  threadData->lastEquationSolved = 1287;
}

/*
equation index: 1288
type: SIMPLE_ASSIGN
roo.irRadGai.conSurBou[5].Q_flow = (-roo.irRadGai.fraSurBou[5]) * roo.irRadGai.Q_flow
*/
void tmp_two_returns_res_eqFunction_1288(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1288};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[160]] /* roo.irRadGai.conSurBou[5].Q_flow variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[173]] /* roo.irRadGai.fraSurBou[5] variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[143]] /* roo.irRadGai.Q_flow variable */));
  threadData->lastEquationSolved = 1288;
}

/*
equation index: 1289
type: SIMPLE_ASSIGN
roo.air.cfd.u[5] = (-roo.irRadExc.conSurBou[5].Q_flow) - roo.irRadGai.conSurBou[5].Q_flow
*/
void tmp_two_returns_res_eqFunction_1289(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1289};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[73]] /* roo.air.cfd.u[5] variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[138]] /* roo.irRadExc.conSurBou[5].Q_flow variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[160]] /* roo.irRadGai.conSurBou[5].Q_flow variable */);
  threadData->lastEquationSolved = 1289;
}

/*
equation index: 1290
type: SIMPLE_ASSIGN
$DER.roo.air.cfd.uInt[5] = roo.air.cfd.u[5]
*/
void tmp_two_returns_res_eqFunction_1290(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1290};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* der(roo.air.cfd.uInt[5]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[73]] /* roo.air.cfd.u[5] variable */);
  threadData->lastEquationSolved = 1290;
}

/*
equation index: 1291
type: SIMPLE_ASSIGN
roo.irRadGai.fraSurBou[4] = roo.irRadGai.AEpsSurBou[4] * roo.irRadGai.sumAEpsInv
*/
void tmp_two_returns_res_eqFunction_1291(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1291};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[172]] /* roo.irRadGai.fraSurBou[4] variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[827]] /* roo.irRadGai.AEpsSurBou[4] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* roo.irRadGai.sumAEpsInv variable */));
  threadData->lastEquationSolved = 1291;
}

/*
equation index: 1292
type: SIMPLE_ASSIGN
roo.irRadGai.conSurBou[4].Q_flow = (-roo.irRadGai.fraSurBou[4]) * roo.irRadGai.Q_flow
*/
void tmp_two_returns_res_eqFunction_1292(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1292};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[159]] /* roo.irRadGai.conSurBou[4].Q_flow variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[172]] /* roo.irRadGai.fraSurBou[4] variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[143]] /* roo.irRadGai.Q_flow variable */));
  threadData->lastEquationSolved = 1292;
}

/*
equation index: 1293
type: SIMPLE_ASSIGN
roo.air.cfd.u[4] = (-roo.irRadExc.conSurBou[4].Q_flow) - roo.irRadGai.conSurBou[4].Q_flow
*/
void tmp_two_returns_res_eqFunction_1293(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1293};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[72]] /* roo.air.cfd.u[4] variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[137]] /* roo.irRadExc.conSurBou[4].Q_flow variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[159]] /* roo.irRadGai.conSurBou[4].Q_flow variable */);
  threadData->lastEquationSolved = 1293;
}

/*
equation index: 1294
type: SIMPLE_ASSIGN
$DER.roo.air.cfd.uInt[4] = roo.air.cfd.u[4]
*/
void tmp_two_returns_res_eqFunction_1294(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1294};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* der(roo.air.cfd.uInt[4]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[72]] /* roo.air.cfd.u[4] variable */);
  threadData->lastEquationSolved = 1294;
}

/*
equation index: 1295
type: SIMPLE_ASSIGN
roo.irRadGai.fraSurBou[3] = roo.irRadGai.AEpsSurBou[3] * roo.irRadGai.sumAEpsInv
*/
void tmp_two_returns_res_eqFunction_1295(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1295};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[171]] /* roo.irRadGai.fraSurBou[3] variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[826]] /* roo.irRadGai.AEpsSurBou[3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* roo.irRadGai.sumAEpsInv variable */));
  threadData->lastEquationSolved = 1295;
}

/*
equation index: 1296
type: SIMPLE_ASSIGN
roo.irRadGai.conSurBou[3].Q_flow = (-roo.irRadGai.fraSurBou[3]) * roo.irRadGai.Q_flow
*/
void tmp_two_returns_res_eqFunction_1296(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1296};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[158]] /* roo.irRadGai.conSurBou[3].Q_flow variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[171]] /* roo.irRadGai.fraSurBou[3] variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[143]] /* roo.irRadGai.Q_flow variable */));
  threadData->lastEquationSolved = 1296;
}

/*
equation index: 1297
type: SIMPLE_ASSIGN
roo.air.cfd.u[3] = (-roo.irRadExc.conSurBou[3].Q_flow) - roo.irRadGai.conSurBou[3].Q_flow
*/
void tmp_two_returns_res_eqFunction_1297(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1297};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[71]] /* roo.air.cfd.u[3] variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[136]] /* roo.irRadExc.conSurBou[3].Q_flow variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[158]] /* roo.irRadGai.conSurBou[3].Q_flow variable */);
  threadData->lastEquationSolved = 1297;
}

/*
equation index: 1298
type: SIMPLE_ASSIGN
$DER.roo.air.cfd.uInt[3] = roo.air.cfd.u[3]
*/
void tmp_two_returns_res_eqFunction_1298(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1298};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* der(roo.air.cfd.uInt[3]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[71]] /* roo.air.cfd.u[3] variable */);
  threadData->lastEquationSolved = 1298;
}

/*
equation index: 1299
type: SIMPLE_ASSIGN
roo.irRadGai.fraSurBou[2] = roo.irRadGai.AEpsSurBou[2] * roo.irRadGai.sumAEpsInv
*/
void tmp_two_returns_res_eqFunction_1299(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1299};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* roo.irRadGai.fraSurBou[2] variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[825]] /* roo.irRadGai.AEpsSurBou[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* roo.irRadGai.sumAEpsInv variable */));
  threadData->lastEquationSolved = 1299;
}

/*
equation index: 1300
type: SIMPLE_ASSIGN
roo.irRadGai.conSurBou[2].Q_flow = (-roo.irRadGai.fraSurBou[2]) * roo.irRadGai.Q_flow
*/
void tmp_two_returns_res_eqFunction_1300(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1300};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[157]] /* roo.irRadGai.conSurBou[2].Q_flow variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* roo.irRadGai.fraSurBou[2] variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[143]] /* roo.irRadGai.Q_flow variable */));
  threadData->lastEquationSolved = 1300;
}

/*
equation index: 1301
type: SIMPLE_ASSIGN
roo.air.cfd.u[2] = (-roo.irRadExc.conSurBou[2].Q_flow) - roo.irRadGai.conSurBou[2].Q_flow
*/
void tmp_two_returns_res_eqFunction_1301(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1301};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[70]] /* roo.air.cfd.u[2] variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[135]] /* roo.irRadExc.conSurBou[2].Q_flow variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[157]] /* roo.irRadGai.conSurBou[2].Q_flow variable */);
  threadData->lastEquationSolved = 1301;
}

/*
equation index: 1302
type: SIMPLE_ASSIGN
$DER.roo.air.cfd.uInt[2] = roo.air.cfd.u[2]
*/
void tmp_two_returns_res_eqFunction_1302(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1302};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* der(roo.air.cfd.uInt[2]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[70]] /* roo.air.cfd.u[2] variable */);
  threadData->lastEquationSolved = 1302;
}

/*
equation index: 1303
type: SIMPLE_ASSIGN
roo.irRadGai.fraSurBou[1] = roo.irRadGai.AEpsSurBou[1] * roo.irRadGai.sumAEpsInv
*/
void tmp_two_returns_res_eqFunction_1303(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1303};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[169]] /* roo.irRadGai.fraSurBou[1] variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[824]] /* roo.irRadGai.AEpsSurBou[1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* roo.irRadGai.sumAEpsInv variable */));
  threadData->lastEquationSolved = 1303;
}

/*
equation index: 1304
type: SIMPLE_ASSIGN
roo.irRadGai.conSurBou[1].Q_flow = (-roo.irRadGai.fraSurBou[1]) * roo.irRadGai.Q_flow
*/
void tmp_two_returns_res_eqFunction_1304(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1304};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[156]] /* roo.irRadGai.conSurBou[1].Q_flow variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[169]] /* roo.irRadGai.fraSurBou[1] variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[143]] /* roo.irRadGai.Q_flow variable */));
  threadData->lastEquationSolved = 1304;
}

/*
equation index: 1305
type: SIMPLE_ASSIGN
roo.air.cfd.u[1] = (-roo.irRadExc.conSurBou[1].Q_flow) - roo.irRadGai.conSurBou[1].Q_flow
*/
void tmp_two_returns_res_eqFunction_1305(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1305};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[69]] /* roo.air.cfd.u[1] variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[134]] /* roo.irRadExc.conSurBou[1].Q_flow variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[156]] /* roo.irRadGai.conSurBou[1].Q_flow variable */);
  threadData->lastEquationSolved = 1305;
}

/*
equation index: 1306
type: SIMPLE_ASSIGN
$DER.roo.air.cfd.uInt[1] = roo.air.cfd.u[1]
*/
void tmp_two_returns_res_eqFunction_1306(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1306};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* der(roo.air.cfd.uInt[1]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[69]] /* roo.air.cfd.u[1] variable */);
  threadData->lastEquationSolved = 1306;
}

/*
equation index: 1307
type: SIMPLE_ASSIGN
roo.irRadGai.fraConBou[1] = roo.irRadGai.AEpsConBou[1] * roo.irRadGai.sumAEpsInv
*/
void tmp_two_returns_res_eqFunction_1307(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1307};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[162]] /* roo.irRadGai.fraConBou[1] variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[818]] /* roo.irRadGai.AEpsConBou[1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* roo.irRadGai.sumAEpsInv variable */));
  threadData->lastEquationSolved = 1307;
}

/*
equation index: 1308
type: SIMPLE_ASSIGN
roo.irRadGai.fraConPar_b[1] = roo.irRadGai.AEpsConPar_b[1] * roo.irRadGai.sumAEpsInv
*/
void tmp_two_returns_res_eqFunction_1308(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1308};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[168]] /* roo.irRadGai.fraConPar_b[1] variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[823]] /* roo.irRadGai.AEpsConPar_b[1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* roo.irRadGai.sumAEpsInv variable */));
  threadData->lastEquationSolved = 1308;
}

/*
equation index: 1309
type: SIMPLE_ASSIGN
roo.irRadGai.fraConPar_a[1] = roo.irRadGai.AEpsConPar_a[1] * roo.irRadGai.sumAEpsInv
*/
void tmp_two_returns_res_eqFunction_1309(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1309};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[167]] /* roo.irRadGai.fraConPar_a[1] variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[822]] /* roo.irRadGai.AEpsConPar_a[1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* roo.irRadGai.sumAEpsInv variable */));
  threadData->lastEquationSolved = 1309;
}

/*
equation index: 1310
type: SIMPLE_ASSIGN
roo.irRadGai.fraConExtWinFra[1] = roo.irRadGai.AEpsConExtWinFra[1] * roo.irRadGai.sumAEpsInv
*/
void tmp_two_returns_res_eqFunction_1310(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1310};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[164]] /* roo.irRadGai.fraConExtWinFra[1] variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[820]] /* roo.irRadGai.AEpsConExtWinFra[1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* roo.irRadGai.sumAEpsInv variable */));
  threadData->lastEquationSolved = 1310;
}

/*
equation index: 1311
type: SIMPLE_ASSIGN
roo.irRadGai.fraConExtWinGla[1] = roo.irRadGai.AEpsConExtWinUns[1] * roo.irRadGai.sumAEpsInv
*/
void tmp_two_returns_res_eqFunction_1311(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1311};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[165]] /* roo.irRadGai.fraConExtWinGla[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[141]] /* roo.irRadGai.AEpsConExtWinUns[1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* roo.irRadGai.sumAEpsInv variable */));
  threadData->lastEquationSolved = 1311;
}

/*
equation index: 1312
type: SIMPLE_ASSIGN
roo.irRadGai.JOutConExtWin[1] = roo.irRadGai.fraConExtWinGla[1] * roo.irRadGai.Q_flow
*/
void tmp_two_returns_res_eqFunction_1312(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1312};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[142]] /* roo.irRadGai.JOutConExtWin[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[165]] /* roo.irRadGai.fraConExtWinGla[1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[143]] /* roo.irRadGai.Q_flow variable */));
  threadData->lastEquationSolved = 1312;
}

/*
equation index: 1313
type: SIMPLE_ASSIGN
roo.irRadGai.fraConExtWinOpa[1] = roo.irRadGai.AEpsConExtWinOpa[1] * roo.irRadGai.sumAEpsInv
*/
void tmp_two_returns_res_eqFunction_1313(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1313};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[166]] /* roo.irRadGai.fraConExtWinOpa[1] variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[821]] /* roo.irRadGai.AEpsConExtWinOpa[1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* roo.irRadGai.sumAEpsInv variable */));
  threadData->lastEquationSolved = 1313;
}

/*
equation index: 1314
type: SIMPLE_ASSIGN
roo.irRadGai.fraConExt[1] = roo.irRadGai.AEpsConExt[1] * roo.irRadGai.sumAEpsInv
*/
void tmp_two_returns_res_eqFunction_1314(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1314};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[163]] /* roo.irRadGai.fraConExt[1] variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[819]] /* roo.irRadGai.AEpsConExt[1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* roo.irRadGai.sumAEpsInv variable */));
  threadData->lastEquationSolved = 1314;
}

/*
equation index: 1315
type: SIMPLE_ASSIGN
retRes1.dp = roo.air.fluInt.p - ret.p
*/
void tmp_two_returns_res_eqFunction_1315(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1315};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[62]] /* retRes1.dp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* roo.air.fluInt.p STATE(1) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[14]] /* ret.p PARAM */);
  threadData->lastEquationSolved = 1315;
}

void tmp_two_returns_res_eqFunction_1316(DATA*, threadData_t*);
/*
equation index: 1317
indexNonlinear: 4
type: NONLINEAR

vars: {roo.air.cfd.u[12]}
eqns: {1316}
*/
void tmp_two_returns_res_eqFunction_1317(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1317};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 1317 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[80]] /* roo.air.cfd.u[12] variable */);
  retValue = solve_nonlinear_system(data, threadData, 4);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1317};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 1317 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[80]] /* roo.air.cfd.u[12] variable */) = data->simulationInfo->nonlinearSystemData[4].nlsx[0];
  threadData->lastEquationSolved = 1317;
}

/*
equation index: 1318
type: SIMPLE_ASSIGN
$DER.roo.air.cfd.uInt[12] = roo.air.cfd.u[12]
*/
void tmp_two_returns_res_eqFunction_1318(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1318};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[33]] /* der(roo.air.cfd.uInt[12]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[80]] /* roo.air.cfd.u[12] variable */);
  threadData->lastEquationSolved = 1318;
}

/*
equation index: 1319
type: SIMPLE_ASSIGN
roo.air.fluInt.ports_mXi_flow[3,1] = roo.air.cfd.u[12] * roo.air.cfd.u[20]
*/
void tmp_two_returns_res_eqFunction_1319(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1319};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[101]] /* roo.air.fluInt.ports_mXi_flow[3,1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[80]] /* roo.air.cfd.u[12] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* roo.air.cfd.u[20] variable */));
  threadData->lastEquationSolved = 1319;
}

/*
equation index: 1320
type: SIMPLE_ASSIGN
retRes2.dp = roo.air.fluInt.p - ret.p
*/
void tmp_two_returns_res_eqFunction_1320(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1320};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[65]] /* retRes2.dp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* roo.air.fluInt.p STATE(1) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[14]] /* ret.p PARAM */);
  threadData->lastEquationSolved = 1320;
}

void tmp_two_returns_res_eqFunction_1321(DATA*, threadData_t*);
/*
equation index: 1322
indexNonlinear: 5
type: NONLINEAR

vars: {roo.air.cfd.u[13]}
eqns: {1321}
*/
void tmp_two_returns_res_eqFunction_1322(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1322};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 1322 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[81]] /* roo.air.cfd.u[13] variable */);
  retValue = solve_nonlinear_system(data, threadData, 5);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1322};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 1322 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[81]] /* roo.air.cfd.u[13] variable */) = data->simulationInfo->nonlinearSystemData[5].nlsx[0];
  threadData->lastEquationSolved = 1322;
}

/*
equation index: 1323
type: SIMPLE_ASSIGN
$DER.roo.air.fluInt.p = roo.air.fluInt.p_start * (fan1.k + fan2.k + roo.air.cfd.u[12] + roo.air.cfd.u[13]) / roo.air.fluInt.m_start
*/
void tmp_two_returns_res_eqFunction_1323(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1323};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[43]] /* der(roo.air.fluInt.p) STATE_DER */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[285]] /* roo.air.fluInt.p_start PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5]] /* fan1.k PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[6]] /* fan2.k PARAM */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[80]] /* roo.air.cfd.u[12] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[81]] /* roo.air.cfd.u[13] variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[284]] /* roo.air.fluInt.m_start PARAM */),"roo.air.fluInt.m_start",equationIndexes));
  threadData->lastEquationSolved = 1323;
}

/*
equation index: 1324
type: SIMPLE_ASSIGN
$DER.roo.air.cfd.uInt[13] = roo.air.cfd.u[13]
*/
void tmp_two_returns_res_eqFunction_1324(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1324};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[34]] /* der(roo.air.cfd.uInt[13]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[81]] /* roo.air.cfd.u[13] variable */);
  threadData->lastEquationSolved = 1324;
}

/*
equation index: 1325
type: SIMPLE_ASSIGN
roo.air.fluInt.ports_mXi_flow[4,1] = roo.air.cfd.u[13] * roo.air.cfd.u[21]
*/
void tmp_two_returns_res_eqFunction_1325(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1325};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[102]] /* roo.air.fluInt.ports_mXi_flow[4,1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[81]] /* roo.air.cfd.u[13] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[89]] /* roo.air.cfd.u[21] variable */));
  threadData->lastEquationSolved = 1325;
}

/*
equation index: 1326
type: SIMPLE_ASSIGN
roo.air.fluInt.mbXi_flow[1] = roo.air.fluInt.ports_mXi_flow[1,1] + roo.air.fluInt.ports_mXi_flow[2,1] + roo.air.fluInt.ports_mXi_flow[3,1] + roo.air.fluInt.ports_mXi_flow[4,1]
*/
void tmp_two_returns_res_eqFunction_1326(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1326};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[98]] /* roo.air.fluInt.mbXi_flow[1] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[99]] /* roo.air.fluInt.ports_mXi_flow[1,1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[100]] /* roo.air.fluInt.ports_mXi_flow[2,1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[101]] /* roo.air.fluInt.ports_mXi_flow[3,1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[102]] /* roo.air.fluInt.ports_mXi_flow[4,1] variable */);
  threadData->lastEquationSolved = 1326;
}

/*
equation index: 1327
type: SIMPLE_ASSIGN
roo.air.cfd.u[11] = fan2.k
*/
void tmp_two_returns_res_eqFunction_1327(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1327};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[79]] /* roo.air.cfd.u[11] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[6]] /* fan2.k PARAM */);
  threadData->lastEquationSolved = 1327;
}

/*
equation index: 1328
type: SIMPLE_ASSIGN
$DER.roo.air.cfd.uInt[11] = roo.air.cfd.u[11]
*/
void tmp_two_returns_res_eqFunction_1328(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1328};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[32]] /* der(roo.air.cfd.uInt[11]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[79]] /* roo.air.cfd.u[11] variable */);
  threadData->lastEquationSolved = 1328;
}

/*
equation index: 1329
type: SIMPLE_ASSIGN
roo.air.cfd.u[10] = fan1.k
*/
void tmp_two_returns_res_eqFunction_1329(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1329};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[78]] /* roo.air.cfd.u[10] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5]] /* fan1.k PARAM */);
  threadData->lastEquationSolved = 1329;
}

/*
equation index: 1330
type: SIMPLE_ASSIGN
$DER.roo.air.cfd.uInt[10] = roo.air.cfd.u[10]
*/
void tmp_two_returns_res_eqFunction_1330(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1330};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* der(roo.air.cfd.uInt[10]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[78]] /* roo.air.cfd.u[10] variable */);
  threadData->lastEquationSolved = 1330;
}

/*
equation index: 1331
type: SIMPLE_ASSIGN
roo.air.cfd.u[19] = sup2.X[1]
*/
void tmp_two_returns_res_eqFunction_1331(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1331};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[87]] /* roo.air.cfd.u[19] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1319]] /* sup2.X[1] PARAM */);
  threadData->lastEquationSolved = 1331;
}

/*
equation index: 1332
type: SIMPLE_ASSIGN
$DER.roo.air.cfd.uInt[19] = roo.air.cfd.u[19]
*/
void tmp_two_returns_res_eqFunction_1332(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1332};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[40]] /* der(roo.air.cfd.uInt[19]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[87]] /* roo.air.cfd.u[19] variable */);
  threadData->lastEquationSolved = 1332;
}

/*
equation index: 1333
type: SIMPLE_ASSIGN
roo.air.cfd.u[9] = roo.air.fluInt.p
*/
void tmp_two_returns_res_eqFunction_1333(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1333};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[77]] /* roo.air.cfd.u[9] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* roo.air.fluInt.p STATE(1) */);
  threadData->lastEquationSolved = 1333;
}

/*
equation index: 1334
type: SIMPLE_ASSIGN
$DER.roo.air.cfd.uInt[9] = roo.air.cfd.u[9]
*/
void tmp_two_returns_res_eqFunction_1334(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1334};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[30]] /* der(roo.air.cfd.uInt[9]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[77]] /* roo.air.cfd.u[9] variable */);
  threadData->lastEquationSolved = 1334;
}

/*
equation index: 1335
type: SIMPLE_ASSIGN
roo.air.cfd.u[18] = sup1.X[1]
*/
void tmp_two_returns_res_eqFunction_1335(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1335};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[86]] /* roo.air.cfd.u[18] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1315]] /* sup1.X[1] PARAM */);
  threadData->lastEquationSolved = 1335;
}

/*
equation index: 1336
type: SIMPLE_ASSIGN
$DER.roo.air.cfd.uInt[18] = roo.air.cfd.u[18]
*/
void tmp_two_returns_res_eqFunction_1336(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1336};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[39]] /* der(roo.air.cfd.uInt[18]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[86]] /* roo.air.cfd.u[18] variable */);
  threadData->lastEquationSolved = 1336;
}

/*
equation index: 1337
type: SIMPLE_ASSIGN
weaDat.weaBus.cloTim = time
*/
void tmp_two_returns_res_eqFunction_1337(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1337};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[277]] /* weaDat.weaBus.cloTim variable */) = data->localData[0]->timeValue;
  threadData->lastEquationSolved = 1337;
}

/*
equation index: 1338
type: SIMPLE_ASSIGN
$whenCondition2 = weaDat.conTim.canRepeatWeatherFile and weaDat.weaBus.cloTim > pre(weaDat.conTim.tNext)
*/
void tmp_two_returns_res_eqFunction_1338(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1338};
  modelica_boolean tmp32;
  modelica_real tmp33;
  modelica_real tmp34;
  tmp33 = 1.0;
  tmp34 = 1.0;
  relationhysteresis(data, &tmp32, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[277]] /* weaDat.weaBus.cloTim variable */), (data->simulationInfo->realVarsPre[347] /* weaDat.conTim.tNext DISCRETE */), tmp33, tmp34, 1, Greater, GreaterZC);
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1]] /* $whenCondition2 DISCRETE */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[296]] /* weaDat.conTim.canRepeatWeatherFile PARAM */) && tmp32);
  threadData->lastEquationSolved = 1338;
}

/*
equation index: 1339
type: SIMPLE_ASSIGN
$cse5 = cos(0.017202423838958484 * (10.0 + 1.1574074074074073e-5 * weaDat.weaBus.cloTim))
*/
void tmp_two_returns_res_eqFunction_1339(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1339};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[55]] /* $cse5 variable */) = cos((0.017202423838958484) * (10.0 + (1.1574074074074073e-5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[277]] /* weaDat.weaBus.cloTim variable */))));
  threadData->lastEquationSolved = 1339;
}

/*
equation index: 1340
type: SIMPLE_ASSIGN
weaDat.weaBus.solDec = asin((-0.3979486313076103) * $cse5)
*/
void tmp_two_returns_res_eqFunction_1340(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1340};
  modelica_real tmp35;
  tmp35 = (-0.3979486313076103) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[55]] /* $cse5 variable */));
  if(!(tmp35 >= -1.0 && tmp35 <= 1.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of asin((-0.3979486313076103) * $cse5) outside the domain -1.0 <= %g <= 1.0", tmp35);
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[282]] /* weaDat.weaBus.solDec variable */) = asin(tmp35);
  threadData->lastEquationSolved = 1340;
}

/*
equation index: 1341
type: SIMPLE_ASSIGN
$cse10 = sin(weaDat.weaBus.solDec)
*/
void tmp_two_returns_res_eqFunction_1341(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1341};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[44]] /* $cse10 variable */) = sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[282]] /* weaDat.weaBus.solDec variable */));
  threadData->lastEquationSolved = 1341;
}

/*
equation index: 1342
type: SIMPLE_ASSIGN
$cse7 = cos(weaDat.weaBus.solDec)
*/
void tmp_two_returns_res_eqFunction_1342(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1342};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[56]] /* $cse7 variable */) = cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[282]] /* weaDat.weaBus.solDec variable */));
  threadData->lastEquationSolved = 1342;
}

/*
equation index: 1343
type: SIMPLE_ASSIGN
weaDat.add30Min.y = 1800.0 * weaDat.add30Min.k1 + weaDat.add30Min.k2 * weaDat.weaBus.cloTim
*/
void tmp_two_returns_res_eqFunction_1343(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1343};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[223]] /* weaDat.add30Min.y variable */) = (1800.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1329]] /* weaDat.add30Min.k1 PARAM */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1330]] /* weaDat.add30Min.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[277]] /* weaDat.weaBus.cloTim variable */));
  threadData->lastEquationSolved = 1343;
}

/*
equation index: 1344
type: SIMPLE_ASSIGN
$whenCondition1 = weaDat.conTimMin.canRepeatWeatherFile and weaDat.add30Min.y > pre(weaDat.conTimMin.tNext)
*/
void tmp_two_returns_res_eqFunction_1344(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1344};
  modelica_boolean tmp36;
  modelica_real tmp37;
  modelica_real tmp38;
  tmp37 = 1.0;
  tmp38 = 1.0;
  relationhysteresis(data, &tmp36, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[223]] /* weaDat.add30Min.y variable */), (data->simulationInfo->realVarsPre[348] /* weaDat.conTimMin.tNext DISCRETE */), tmp37, tmp38, 0, Greater, GreaterZC);
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[297]] /* weaDat.conTimMin.canRepeatWeatherFile PARAM */) && tmp36);
  threadData->lastEquationSolved = 1344;
}

/*
equation index: 1345
type: SIMPLE_ASSIGN
weaDat.locTim.locTim = weaDat.weaBus.cloTim + weaDat.locTim.diff
*/
void tmp_two_returns_res_eqFunction_1345(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1345};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[259]] /* weaDat.locTim.locTim variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[277]] /* weaDat.weaBus.cloTim variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1358]] /* weaDat.locTim.diff PARAM */);
  threadData->lastEquationSolved = 1345;
}

/*
equation index: 1346
type: SIMPLE_ASSIGN
weaDat.eqnTim.Bt = 0.017261498096647215 * (-80.0 + 1.1574074074074073e-5 * weaDat.weaBus.cloTim)
*/
void tmp_two_returns_res_eqFunction_1346(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1346};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[257]] /* weaDat.eqnTim.Bt variable */) = (0.017261498096647215) * (-80.0 + (1.1574074074074073e-5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[277]] /* weaDat.weaBus.cloTim variable */)));
  threadData->lastEquationSolved = 1346;
}

/*
equation index: 1347
type: SIMPLE_ASSIGN
$cse13 = sin(weaDat.eqnTim.Bt)
*/
void tmp_two_returns_res_eqFunction_1347(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1347};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[47]] /* $cse13 variable */) = sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[257]] /* weaDat.eqnTim.Bt variable */));
  threadData->lastEquationSolved = 1347;
}

/*
equation index: 1348
type: SIMPLE_ASSIGN
$cse12 = cos(weaDat.eqnTim.Bt)
*/
void tmp_two_returns_res_eqFunction_1348(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1348};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[46]] /* $cse12 variable */) = cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[257]] /* weaDat.eqnTim.Bt variable */));
  threadData->lastEquationSolved = 1348;
}

/*
equation index: 1349
type: SIMPLE_ASSIGN
$cse11 = sin(2.0 * weaDat.eqnTim.Bt)
*/
void tmp_two_returns_res_eqFunction_1349(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1349};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[45]] /* $cse11 variable */) = sin((2.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[257]] /* weaDat.eqnTim.Bt variable */)));
  threadData->lastEquationSolved = 1349;
}

/*
equation index: 1350
type: SIMPLE_ASSIGN
weaDat.eqnTim.eqnTim = 60.0 * (9.87 * $cse11 + (-7.53) * $cse12 + (-1.5) * $cse13)
*/
void tmp_two_returns_res_eqFunction_1350(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1350};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* weaDat.eqnTim.eqnTim variable */) = (60.0) * ((9.87) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[45]] /* $cse11 variable */)) + (-7.53) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[46]] /* $cse12 variable */)) + (-1.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[47]] /* $cse13 variable */)));
  threadData->lastEquationSolved = 1350;
}

/*
equation index: 1351
type: SIMPLE_ASSIGN
weaDat.weaBus.solTim = weaDat.locTim.locTim + weaDat.eqnTim.eqnTim
*/
void tmp_two_returns_res_eqFunction_1351(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1351};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[284]] /* weaDat.weaBus.solTim variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[259]] /* weaDat.locTim.locTim variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* weaDat.eqnTim.eqnTim variable */);
  threadData->lastEquationSolved = 1351;
}

/*
equation index: 1352
type: SIMPLE_ASSIGN
weaDat.weaBus.solHouAng = 0.2617993877991494 * (-12.0 + 2.777777777777778e-4 * weaDat.weaBus.solTim)
*/
void tmp_two_returns_res_eqFunction_1352(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1352};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[283]] /* weaDat.weaBus.solHouAng variable */) = (0.2617993877991494) * (-12.0 + (2.777777777777778e-4) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[284]] /* weaDat.weaBus.solTim variable */)));
  threadData->lastEquationSolved = 1352;
}

/*
equation index: 1353
type: SIMPLE_ASSIGN
$cse8 = cos(weaDat.weaBus.solHouAng)
*/
void tmp_two_returns_res_eqFunction_1353(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1353};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[57]] /* $cse8 variable */) = cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[283]] /* weaDat.weaBus.solHouAng variable */));
  threadData->lastEquationSolved = 1353;
}

/*
equation index: 1354
type: SIMPLE_ASSIGN
weaDat.weaBus.solZen = acos($cse6 * $cse7 * $cse8 + $cse9 * $cse10)
*/
void tmp_two_returns_res_eqFunction_1354(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1354};
  modelica_real tmp39;
  tmp39 = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[0]] /* $cse6 PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[56]] /* $cse7 variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[57]] /* $cse8 variable */))) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1]] /* $cse9 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[44]] /* $cse10 variable */));
  if(!(tmp39 >= -1.0 && tmp39 <= 1.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of acos($cse6 * $cse7 * $cse8 + $cse9 * $cse10) outside the domain -1.0 <= %g <= 1.0", tmp39);
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[285]] /* weaDat.weaBus.solZen variable */) = acos(tmp39);
  threadData->lastEquationSolved = 1354;
}

/*
equation index: 1355
type: SIMPLE_ASSIGN
weaDat.weaBus.solAlt = 1.5707963267948966 - weaDat.weaBus.solZen
*/
void tmp_two_returns_res_eqFunction_1355(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1355};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[281]] /* weaDat.weaBus.solAlt variable */) = 1.5707963267948966 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[285]] /* weaDat.weaBus.solZen variable */);
  threadData->lastEquationSolved = 1355;
}

/*
equation index: 1356
type: WHEN

when {$whenCondition2} then
  weaDat.conTim.tNext = if weaDat.conTim.canRepeatWeatherFile then weaDat.conTim.lenWea * (1.0 + (*Real*)(integer(weaDat.weaBus.cloTim / weaDat.conTim.lenWea))) else time;
end when;
*/
void tmp_two_returns_res_eqFunction_1356(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1356};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1]] /* $whenCondition2 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[1] /* $whenCondition2 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[347]] /* weaDat.conTim.tNext DISCRETE */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[296]] /* weaDat.conTim.canRepeatWeatherFile PARAM */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1344]] /* weaDat.conTim.lenWea PARAM */)) * (1.0 + ((modelica_real)((modelica_integer)floor(DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[277]] /* weaDat.weaBus.cloTim variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1344]] /* weaDat.conTim.lenWea PARAM */),"weaDat.conTim.lenWea",equationIndexes))))):data->localData[0]->timeValue);
  }
  threadData->lastEquationSolved = 1356;
}

/*
equation index: 1357
type: SIMPLE_ASSIGN
weaDat.conTim.calTim = if weaDat.conTim.canRepeatWeatherFile then weaDat.weaBus.cloTim - weaDat.conTim.tNext + weaDat.conTim.lenWea else weaDat.weaBus.cloTim
*/
void tmp_two_returns_res_eqFunction_1357(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1357};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[225]] /* weaDat.conTim.calTim variable */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[296]] /* weaDat.conTim.canRepeatWeatherFile PARAM */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[277]] /* weaDat.weaBus.cloTim variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[347]] /* weaDat.conTim.tNext DISCRETE */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1344]] /* weaDat.conTim.lenWea PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[277]] /* weaDat.weaBus.cloTim variable */));
  threadData->lastEquationSolved = 1357;
}

/*
equation index: 1358
type: SIMPLE_ASSIGN
weaDat.datRea.y[1] = Modelica.Blocks.Tables.Internal.getTable1DValue(weaDat.datRea.tableID, 1, weaDat.conTim.calTim)
*/
void tmp_two_returns_res_eqFunction_1358(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1358};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* weaDat.datRea.y[1] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[1]), ((modelica_integer) 1), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[225]] /* weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 1358;
}

/*
equation index: 1359
type: SIMPLE_ASSIGN
weaDat.weaBus.TDryBul = 273.15 + weaDat.datRea.y[1]
*/
void tmp_two_returns_res_eqFunction_1359(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1359};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[274]] /* weaDat.weaBus.TDryBul variable */) = 273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* weaDat.datRea.y[1] variable */);
  threadData->lastEquationSolved = 1359;
}

/*
equation index: 1360
type: SIMPLE_ASSIGN
$cse3 = exp(-17.2799 - (-4102.99) / (-35.719 + weaDat.weaBus.TDryBul))
*/
void tmp_two_returns_res_eqFunction_1360(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1360};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[53]] /* $cse3 variable */) = exp(-17.2799 - (DIVISION_SIM(-4102.99,-35.719 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[274]] /* weaDat.weaBus.TDryBul variable */),"-35.719 + weaDat.weaBus.TDryBul",equationIndexes)));
  threadData->lastEquationSolved = 1360;
}

/*
equation index: 1361
type: SIMPLE_ASSIGN
weaDat.datRea.y[2] = Modelica.Blocks.Tables.Internal.getTable1DValue(weaDat.datRea.tableID, 2, weaDat.conTim.calTim)
*/
void tmp_two_returns_res_eqFunction_1361(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1361};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[229]] /* weaDat.datRea.y[2] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[1]), ((modelica_integer) 2), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[225]] /* weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 1361;
}

/*
equation index: 1362
type: SIMPLE_ASSIGN
weaDat.weaBus.TDewPoi = 273.15 + weaDat.datRea.y[2]
*/
void tmp_two_returns_res_eqFunction_1362(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1362};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[273]] /* weaDat.weaBus.TDewPoi variable */) = 273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[229]] /* weaDat.datRea.y[2] variable */);
  threadData->lastEquationSolved = 1362;
}

/*
equation index: 1363
type: SIMPLE_ASSIGN
weaDat.TBlaSkyCom.TDewPoiK = smooth(1, if noEvent(weaDat.weaBus.TDewPoi - weaDat.weaBus.TDryBul > 0.1) then weaDat.weaBus.TDryBul else if noEvent(weaDat.weaBus.TDewPoi - weaDat.weaBus.TDryBul < -0.1) then weaDat.weaBus.TDewPoi else 0.25 * 10.0 * (weaDat.weaBus.TDewPoi - weaDat.weaBus.TDryBul) * ((10.0 * (weaDat.weaBus.TDewPoi - weaDat.weaBus.TDryBul)) ^ 2.0 - 3.0) * (weaDat.weaBus.TDewPoi - weaDat.weaBus.TDryBul) + 0.5 * (weaDat.weaBus.TDryBul + weaDat.weaBus.TDewPoi))
*/
void tmp_two_returns_res_eqFunction_1363(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1363};
  modelica_boolean tmp40;
  modelica_boolean tmp41;
  modelica_real tmp42;
  modelica_boolean tmp43;
  modelica_real tmp44;
  modelica_boolean tmp45;
  modelica_real tmp46;
  tmp40 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[273]] /* weaDat.weaBus.TDewPoi variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[274]] /* weaDat.weaBus.TDryBul variable */),0.1);
  tmp45 = (modelica_boolean)tmp40;
  if(tmp45)
  {
    tmp46 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[274]] /* weaDat.weaBus.TDryBul variable */);
  }
  else
  {
    tmp41 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[273]] /* weaDat.weaBus.TDewPoi variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[274]] /* weaDat.weaBus.TDryBul variable */),-0.1);
    tmp43 = (modelica_boolean)tmp41;
    if(tmp43)
    {
      tmp44 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[273]] /* weaDat.weaBus.TDewPoi variable */);
    }
    else
    {
      tmp42 = (10.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[273]] /* weaDat.weaBus.TDewPoi variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[274]] /* weaDat.weaBus.TDryBul variable */));
      tmp44 = (0.25) * ((((10.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[273]] /* weaDat.weaBus.TDewPoi variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[274]] /* weaDat.weaBus.TDryBul variable */))) * ((tmp42 * tmp42) - 3.0)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[273]] /* weaDat.weaBus.TDewPoi variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[274]] /* weaDat.weaBus.TDryBul variable */))) + (0.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[274]] /* weaDat.weaBus.TDryBul variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[273]] /* weaDat.weaBus.TDewPoi variable */));
    }
    tmp46 = tmp44;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[220]] /* weaDat.TBlaSkyCom.TDewPoiK variable */) = tmp46;
  threadData->lastEquationSolved = 1363;
}

/*
equation index: 1364
type: SIMPLE_ASSIGN
$cse14 = log(0.0036609921288669233 * weaDat.TBlaSkyCom.TDewPoiK)
*/
void tmp_two_returns_res_eqFunction_1364(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1364};
  modelica_real tmp47;
  tmp47 = (0.0036609921288669233) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[220]] /* weaDat.TBlaSkyCom.TDewPoiK variable */));
  if(!(tmp47 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of log(0.0036609921288669233 * weaDat.TBlaSkyCom.TDewPoiK) was %g should be > 0", tmp47);
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[48]] /* $cse14 variable */) = log(tmp47);
  threadData->lastEquationSolved = 1364;
}

/*
equation index: 1365
type: SIMPLE_ASSIGN
weaDat.datRea.y[3] = Modelica.Blocks.Tables.Internal.getTable1DValue(weaDat.datRea.tableID, 3, weaDat.conTim.calTim)
*/
void tmp_two_returns_res_eqFunction_1365(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1365};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[230]] /* weaDat.datRea.y[3] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[1]), ((modelica_integer) 3), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[225]] /* weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 1365;
}

/*
equation index: 1366
type: SIMPLE_ASSIGN
weaDat.relHumSel.uFil = 0.01 * weaDat.datRea.y[3]
*/
void tmp_two_returns_res_eqFunction_1366(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1366};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[261]] /* weaDat.relHumSel.uFil variable */) = (0.01) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[230]] /* weaDat.datRea.y[3] variable */));
  threadData->lastEquationSolved = 1366;
}

/*
equation index: 1367
type: SIMPLE_ASSIGN
$cse18 = max(0.0, weaDat.relHumSel.uFil)
*/
void tmp_two_returns_res_eqFunction_1367(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1367};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[52]] /* $cse18 variable */) = fmax(0.0,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[261]] /* weaDat.relHumSel.uFil variable */));
  threadData->lastEquationSolved = 1367;
}

/*
equation index: 1368
type: SIMPLE_ASSIGN
weaDat.weaBus.relHum = min(1.0, $cse18)
*/
void tmp_two_returns_res_eqFunction_1368(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1368};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[280]] /* weaDat.weaBus.relHum variable */) = fmin(1.0,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[52]] /* $cse18 variable */));
  threadData->lastEquationSolved = 1368;
}

/*
equation index: 1369
type: SIMPLE_ASSIGN
weaDat.tWetBul_TDryBulXi.XiDryBul = 0.621964713077499 * weaDat.weaBus.relHum / ((-0.378035286922501) * weaDat.weaBus.relHum + 0.0016349032219037793 * weaDat.pAtmSel.p * $cse3)
*/
void tmp_two_returns_res_eqFunction_1369(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1369};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[263]] /* weaDat.tWetBul_TDryBulXi.XiDryBul variable */) = (0.621964713077499) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[280]] /* weaDat.weaBus.relHum variable */),(-0.378035286922501) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[280]] /* weaDat.weaBus.relHum variable */)) + (0.0016349032219037793) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1366]] /* weaDat.pAtmSel.p PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[53]] /* $cse3 variable */))),"(-0.378035286922501) * weaDat.weaBus.relHum + 0.0016349032219037793 * weaDat.pAtmSel.p * $cse3",equationIndexes));
  threadData->lastEquationSolved = 1369;
}

void tmp_two_returns_res_eqFunction_1370(DATA*, threadData_t*);
void tmp_two_returns_res_eqFunction_1371(DATA*, threadData_t*);
void tmp_two_returns_res_eqFunction_1372(DATA*, threadData_t*);
void tmp_two_returns_res_eqFunction_1373(DATA*, threadData_t*);
/*
equation index: 1379
indexNonlinear: 6
type: NONLINEAR

vars: {weaDat.weaBus.TWetBul}
eqns: {1370, 1371, 1372, 1373}
*/
void tmp_two_returns_res_eqFunction_1379(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1379};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 1379 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[275]] /* weaDat.weaBus.TWetBul variable */);
  retValue = solve_nonlinear_system(data, threadData, 6);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1379};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 1379 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[275]] /* weaDat.weaBus.TWetBul variable */) = data->simulationInfo->nonlinearSystemData[6].nlsx[0];
  threadData->lastEquationSolved = 1379;
}

/*
equation index: 1380
type: SIMPLE_ASSIGN
weaDat.datRea.y[4] = Modelica.Blocks.Tables.Internal.getTable1DValue(weaDat.datRea.tableID, 4, weaDat.conTim.calTim)
*/
void tmp_two_returns_res_eqFunction_1380(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1380};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[231]] /* weaDat.datRea.y[4] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[1]), ((modelica_integer) 4), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[225]] /* weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 1380;
}

/*
equation index: 1381
type: SIMPLE_ASSIGN
weaDat.datRea.y[5] = Modelica.Blocks.Tables.Internal.getTable1DValue(weaDat.datRea.tableID, 5, weaDat.conTim.calTim)
*/
void tmp_two_returns_res_eqFunction_1381(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1381};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[232]] /* weaDat.datRea.y[5] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[1]), ((modelica_integer) 5), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[225]] /* weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 1381;
}

/*
equation index: 1382
type: SIMPLE_ASSIGN
weaDat.datRea.y[6] = Modelica.Blocks.Tables.Internal.getTable1DValue(weaDat.datRea.tableID, 6, weaDat.conTim.calTim)
*/
void tmp_two_returns_res_eqFunction_1382(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1382};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[233]] /* weaDat.datRea.y[6] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[1]), ((modelica_integer) 6), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[225]] /* weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 1382;
}

/*
equation index: 1383
type: SIMPLE_ASSIGN
weaDat.datRea.y[7] = Modelica.Blocks.Tables.Internal.getTable1DValue(weaDat.datRea.tableID, 7, weaDat.conTim.calTim)
*/
void tmp_two_returns_res_eqFunction_1383(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1383};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[234]] /* weaDat.datRea.y[7] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[1]), ((modelica_integer) 7), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[225]] /* weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 1383;
}

/*
equation index: 1384
type: SIMPLE_ASSIGN
weaDat.datRea.y[8] = Modelica.Blocks.Tables.Internal.getTable1DValue(weaDat.datRea.tableID, 8, weaDat.conTim.calTim)
*/
void tmp_two_returns_res_eqFunction_1384(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1384};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[235]] /* weaDat.datRea.y[8] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[1]), ((modelica_integer) 8), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[225]] /* weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 1384;
}

/*
equation index: 1385
type: SIMPLE_ASSIGN
weaDat.datRea.y[9] = Modelica.Blocks.Tables.Internal.getTable1DValue(weaDat.datRea.tableID, 9, weaDat.conTim.calTim)
*/
void tmp_two_returns_res_eqFunction_1385(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1385};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[236]] /* weaDat.datRea.y[9] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[1]), ((modelica_integer) 9), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[225]] /* weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 1385;
}

/*
equation index: 1386
type: SIMPLE_ASSIGN
weaDat.datRea.y[10] = Modelica.Blocks.Tables.Internal.getTable1DValue(weaDat.datRea.tableID, 10, weaDat.conTim.calTim)
*/
void tmp_two_returns_res_eqFunction_1386(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1386};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[237]] /* weaDat.datRea.y[10] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[1]), ((modelica_integer) 10), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[225]] /* weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 1386;
}

/*
equation index: 1387
type: SIMPLE_ASSIGN
weaDat.datRea.y[11] = Modelica.Blocks.Tables.Internal.getTable1DValue(weaDat.datRea.tableID, 11, weaDat.conTim.calTim)
*/
void tmp_two_returns_res_eqFunction_1387(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1387};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[238]] /* weaDat.datRea.y[11] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[1]), ((modelica_integer) 11), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[225]] /* weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 1387;
}

/*
equation index: 1388
type: SIMPLE_ASSIGN
weaDat.conWinDir.y = 0.017453292519943295 * weaDat.datRea.y[11]
*/
void tmp_two_returns_res_eqFunction_1388(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1388};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[227]] /* weaDat.conWinDir.y variable */) = (0.017453292519943295) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[238]] /* weaDat.datRea.y[11] variable */));
  threadData->lastEquationSolved = 1388;
}

/*
equation index: 1389
type: SIMPLE_ASSIGN
$cse15 = max(0.0, weaDat.conWinDir.y)
*/
void tmp_two_returns_res_eqFunction_1389(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1389};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[49]] /* $cse15 variable */) = fmax(0.0,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[227]] /* weaDat.conWinDir.y variable */));
  threadData->lastEquationSolved = 1389;
}

/*
equation index: 1390
type: SIMPLE_ASSIGN
weaDat.weaBus.winDir = min(6.283185307179586, $cse15)
*/
void tmp_two_returns_res_eqFunction_1390(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1390};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[286]] /* weaDat.weaBus.winDir variable */) = fmin(6.283185307179586,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[49]] /* $cse15 variable */));
  threadData->lastEquationSolved = 1390;
}

/*
equation index: 1391
type: SIMPLE_ASSIGN
weaDat.datRea.y[12] = Modelica.Blocks.Tables.Internal.getTable1DValue(weaDat.datRea.tableID, 12, weaDat.conTim.calTim)
*/
void tmp_two_returns_res_eqFunction_1391(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1391};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[239]] /* weaDat.datRea.y[12] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[1]), ((modelica_integer) 12), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[225]] /* weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 1391;
}

/*
equation index: 1392
type: SIMPLE_ASSIGN
weaDat.weaBus.winSpe = max(0.0, weaDat.datRea.y[12])
*/
void tmp_two_returns_res_eqFunction_1392(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1392};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[287]] /* weaDat.weaBus.winSpe variable */) = fmax(0.0,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[239]] /* weaDat.datRea.y[12] variable */));
  threadData->lastEquationSolved = 1392;
}

/*
equation index: 1393
type: SIMPLE_ASSIGN
weaDat.datRea.y[13] = Modelica.Blocks.Tables.Internal.getTable1DValue(weaDat.datRea.tableID, 13, weaDat.conTim.calTim)
*/
void tmp_two_returns_res_eqFunction_1393(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1393};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[240]] /* weaDat.datRea.y[13] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[1]), ((modelica_integer) 13), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[225]] /* weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 1393;
}

/*
equation index: 1394
type: SIMPLE_ASSIGN
weaDat.totSkyCovSel.y = 0.1 * weaDat.datRea.y[13]
*/
void tmp_two_returns_res_eqFunction_1394(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1394};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[267]] /* weaDat.totSkyCovSel.y variable */) = (0.1) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[240]] /* weaDat.datRea.y[13] variable */));
  threadData->lastEquationSolved = 1394;
}

/*
equation index: 1395
type: SIMPLE_ASSIGN
$cse17 = max(0.0, weaDat.totSkyCovSel.y)
*/
void tmp_two_returns_res_eqFunction_1395(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1395};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[51]] /* $cse17 variable */) = fmax(0.0,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[267]] /* weaDat.totSkyCovSel.y variable */));
  threadData->lastEquationSolved = 1395;
}

/*
equation index: 1396
type: SIMPLE_ASSIGN
weaDat.weaBus.nTot = min(1.0, $cse17)
*/
void tmp_two_returns_res_eqFunction_1396(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1396};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[279]] /* weaDat.weaBus.nTot variable */) = fmin(1.0,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[51]] /* $cse17 variable */));
  threadData->lastEquationSolved = 1396;
}

/*
equation index: 1397
type: SIMPLE_ASSIGN
weaDat.datRea.y[14] = Modelica.Blocks.Tables.Internal.getTable1DValue(weaDat.datRea.tableID, 14, weaDat.conTim.calTim)
*/
void tmp_two_returns_res_eqFunction_1397(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1397};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[241]] /* weaDat.datRea.y[14] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[1]), ((modelica_integer) 14), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[225]] /* weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 1397;
}

/*
equation index: 1398
type: SIMPLE_ASSIGN
weaDat.opaSkyCovSel.y = 0.1 * weaDat.datRea.y[14]
*/
void tmp_two_returns_res_eqFunction_1398(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1398};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[260]] /* weaDat.opaSkyCovSel.y variable */) = (0.1) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[241]] /* weaDat.datRea.y[14] variable */));
  threadData->lastEquationSolved = 1398;
}

/*
equation index: 1399
type: SIMPLE_ASSIGN
$cse16 = max(0.0, weaDat.opaSkyCovSel.y)
*/
void tmp_two_returns_res_eqFunction_1399(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1399};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[50]] /* $cse16 variable */) = fmax(0.0,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[260]] /* weaDat.opaSkyCovSel.y variable */));
  threadData->lastEquationSolved = 1399;
}

/*
equation index: 1400
type: SIMPLE_ASSIGN
weaDat.weaBus.nOpa = min(1.0, $cse16)
*/
void tmp_two_returns_res_eqFunction_1400(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1400};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[278]] /* weaDat.weaBus.nOpa variable */) = fmin(1.0,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[50]] /* $cse16 variable */));
  threadData->lastEquationSolved = 1400;
}

/*
equation index: 1401
type: SIMPLE_ASSIGN
weaDat.TBlaSkyCom.nOpa10 = 10.0 * weaDat.weaBus.nOpa
*/
void tmp_two_returns_res_eqFunction_1401(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1401};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[222]] /* weaDat.TBlaSkyCom.nOpa10 variable */) = (10.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[278]] /* weaDat.weaBus.nOpa variable */));
  threadData->lastEquationSolved = 1401;
}

/*
equation index: 1402
type: SIMPLE_ASSIGN
weaDat.TBlaSkyCom.epsSky = (0.787 + 0.764 * $cse14) * (1.0 + 0.0224 * weaDat.TBlaSkyCom.nOpa10 + (-0.0035) * weaDat.TBlaSkyCom.nOpa10 ^ 2.0 + 2.8e-4 * weaDat.TBlaSkyCom.nOpa10 ^ 3.0)
*/
void tmp_two_returns_res_eqFunction_1402(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1402};
  modelica_real tmp48;
  modelica_real tmp49;
  tmp48 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[222]] /* weaDat.TBlaSkyCom.nOpa10 variable */);
  tmp49 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[222]] /* weaDat.TBlaSkyCom.nOpa10 variable */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[221]] /* weaDat.TBlaSkyCom.epsSky variable */) = (0.787 + (0.764) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[48]] /* $cse14 variable */))) * (1.0 + (0.0224) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[222]] /* weaDat.TBlaSkyCom.nOpa10 variable */)) + (-0.0035) * ((tmp48 * tmp48)) + (2.8e-4) * ((tmp49 * tmp49 * tmp49)));
  threadData->lastEquationSolved = 1402;
}

/*
equation index: 1403
type: SIMPLE_ASSIGN
weaDat.weaBus.TBlaSky = weaDat.weaBus.TDryBul * weaDat.TBlaSkyCom.epsSky ^ 0.25
*/
void tmp_two_returns_res_eqFunction_1403(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1403};
  modelica_real tmp50;
  modelica_real tmp51;
  modelica_real tmp52;
  modelica_real tmp53;
  modelica_real tmp54;
  modelica_real tmp55;
  modelica_real tmp56;
  tmp50 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[221]] /* weaDat.TBlaSkyCom.epsSky variable */);
  tmp51 = 0.25;
  if(tmp50 < 0.0 && tmp51 != 0.0)
  {
    tmp53 = modf(tmp51, &tmp54);
    
    if(tmp53 > 0.5)
    {
      tmp53 -= 1.0;
      tmp54 += 1.0;
    }
    else if(tmp53 < -0.5)
    {
      tmp53 += 1.0;
      tmp54 -= 1.0;
    }
    
    if(fabs(tmp53) < 1e-10)
      tmp52 = pow(tmp50, tmp54);
    else
    {
      tmp56 = modf(1.0/tmp51, &tmp55);
      if(tmp56 > 0.5)
      {
        tmp56 -= 1.0;
        tmp55 += 1.0;
      }
      else if(tmp56 < -0.5)
      {
        tmp56 += 1.0;
        tmp55 -= 1.0;
      }
      if(fabs(tmp56) < 1e-10 && ((unsigned long)tmp55 & 1))
      {
        tmp52 = -pow(-tmp50, tmp53)*pow(tmp50, tmp54);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp50, tmp51);
      }
    }
  }
  else
  {
    tmp52 = pow(tmp50, tmp51);
  }
  if(isnan(tmp52) || isinf(tmp52))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp50, tmp51);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[272]] /* weaDat.weaBus.TBlaSky variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[274]] /* weaDat.weaBus.TDryBul variable */)) * (tmp52);
  threadData->lastEquationSolved = 1403;
}

/*
equation index: 1404
type: SIMPLE_ASSIGN
weaDat.datRea.y[15] = Modelica.Blocks.Tables.Internal.getTable1DValue(weaDat.datRea.tableID, 15, weaDat.conTim.calTim)
*/
void tmp_two_returns_res_eqFunction_1404(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1404};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[242]] /* weaDat.datRea.y[15] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[1]), ((modelica_integer) 15), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[225]] /* weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 1404;
}

/*
equation index: 1405
type: SIMPLE_ASSIGN
weaDat.datRea.y[16] = Modelica.Blocks.Tables.Internal.getTable1DValue(weaDat.datRea.tableID, 16, weaDat.conTim.calTim)
*/
void tmp_two_returns_res_eqFunction_1405(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1405};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[243]] /* weaDat.datRea.y[16] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[1]), ((modelica_integer) 16), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[225]] /* weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 1405;
}

/*
equation index: 1406
type: SIMPLE_ASSIGN
weaDat.weaBus.ceiHei = max(0.0, weaDat.datRea.y[16])
*/
void tmp_two_returns_res_eqFunction_1406(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1406};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[276]] /* weaDat.weaBus.ceiHei variable */) = fmax(0.0,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[243]] /* weaDat.datRea.y[16] variable */));
  threadData->lastEquationSolved = 1406;
}

/*
equation index: 1407
type: SIMPLE_ASSIGN
weaDat.datRea.y[17] = Modelica.Blocks.Tables.Internal.getTable1DValue(weaDat.datRea.tableID, 17, weaDat.conTim.calTim)
*/
void tmp_two_returns_res_eqFunction_1407(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1407};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[244]] /* weaDat.datRea.y[17] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[1]), ((modelica_integer) 17), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[225]] /* weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 1407;
}

/*
equation index: 1408
type: SIMPLE_ASSIGN
weaDat.datRea.y[18] = Modelica.Blocks.Tables.Internal.getTable1DValue(weaDat.datRea.tableID, 18, weaDat.conTim.calTim)
*/
void tmp_two_returns_res_eqFunction_1408(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1408};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[245]] /* weaDat.datRea.y[18] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[1]), ((modelica_integer) 18), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[225]] /* weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 1408;
}

/*
equation index: 1409
type: SIMPLE_ASSIGN
weaDat.datRea.y[19] = Modelica.Blocks.Tables.Internal.getTable1DValue(weaDat.datRea.tableID, 19, weaDat.conTim.calTim)
*/
void tmp_two_returns_res_eqFunction_1409(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1409};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[246]] /* weaDat.datRea.y[19] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[1]), ((modelica_integer) 19), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[225]] /* weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 1409;
}

/*
equation index: 1410
type: SIMPLE_ASSIGN
weaDat.datRea.y[20] = Modelica.Blocks.Tables.Internal.getTable1DValue(weaDat.datRea.tableID, 20, weaDat.conTim.calTim)
*/
void tmp_two_returns_res_eqFunction_1410(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1410};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[247]] /* weaDat.datRea.y[20] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[1]), ((modelica_integer) 20), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[225]] /* weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 1410;
}

/*
equation index: 1411
type: SIMPLE_ASSIGN
weaDat.datRea.y[21] = Modelica.Blocks.Tables.Internal.getTable1DValue(weaDat.datRea.tableID, 21, weaDat.conTim.calTim)
*/
void tmp_two_returns_res_eqFunction_1411(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1411};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[248]] /* weaDat.datRea.y[21] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[1]), ((modelica_integer) 21), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[225]] /* weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 1411;
}

/*
equation index: 1412
type: SIMPLE_ASSIGN
weaDat.datRea.y[22] = Modelica.Blocks.Tables.Internal.getTable1DValue(weaDat.datRea.tableID, 22, weaDat.conTim.calTim)
*/
void tmp_two_returns_res_eqFunction_1412(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1412};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[249]] /* weaDat.datRea.y[22] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[1]), ((modelica_integer) 22), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[225]] /* weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 1412;
}

/*
equation index: 1413
type: SIMPLE_ASSIGN
weaDat.datRea.y[23] = Modelica.Blocks.Tables.Internal.getTable1DValue(weaDat.datRea.tableID, 23, weaDat.conTim.calTim)
*/
void tmp_two_returns_res_eqFunction_1413(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1413};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[250]] /* weaDat.datRea.y[23] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[1]), ((modelica_integer) 23), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[225]] /* weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 1413;
}

/*
equation index: 1414
type: SIMPLE_ASSIGN
weaDat.datRea.y[24] = Modelica.Blocks.Tables.Internal.getTable1DValue(weaDat.datRea.tableID, 24, weaDat.conTim.calTim)
*/
void tmp_two_returns_res_eqFunction_1414(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1414};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[251]] /* weaDat.datRea.y[24] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[1]), ((modelica_integer) 24), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[225]] /* weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 1414;
}

/*
equation index: 1415
type: SIMPLE_ASSIGN
weaDat.datRea.y[25] = Modelica.Blocks.Tables.Internal.getTable1DValue(weaDat.datRea.tableID, 25, weaDat.conTim.calTim)
*/
void tmp_two_returns_res_eqFunction_1415(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1415};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[252]] /* weaDat.datRea.y[25] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[1]), ((modelica_integer) 25), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[225]] /* weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 1415;
}

/*
equation index: 1416
type: SIMPLE_ASSIGN
weaDat.datRea.y[26] = Modelica.Blocks.Tables.Internal.getTable1DValue(weaDat.datRea.tableID, 26, weaDat.conTim.calTim)
*/
void tmp_two_returns_res_eqFunction_1416(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1416};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[253]] /* weaDat.datRea.y[26] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[1]), ((modelica_integer) 26), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[225]] /* weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 1416;
}

/*
equation index: 1417
type: SIMPLE_ASSIGN
weaDat.weaBus.HHorIR = max(0.0, weaDat.datRea.y[26])
*/
void tmp_two_returns_res_eqFunction_1417(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1417};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[271]] /* weaDat.weaBus.HHorIR variable */) = fmax(0.0,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[253]] /* weaDat.datRea.y[26] variable */));
  threadData->lastEquationSolved = 1417;
}

/*
equation index: 1418
type: WHEN

when {$whenCondition1} then
  weaDat.conTimMin.tNext = if weaDat.conTimMin.canRepeatWeatherFile then weaDat.conTimMin.lenWea * (1.0 + (*Real*)(integer(weaDat.add30Min.y / weaDat.conTimMin.lenWea))) else time;
end when;
*/
void tmp_two_returns_res_eqFunction_1418(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1418};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[348]] /* weaDat.conTimMin.tNext DISCRETE */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[297]] /* weaDat.conTimMin.canRepeatWeatherFile PARAM */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1347]] /* weaDat.conTimMin.lenWea PARAM */)) * (1.0 + ((modelica_real)((modelica_integer)floor(DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[223]] /* weaDat.add30Min.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1347]] /* weaDat.conTimMin.lenWea PARAM */),"weaDat.conTimMin.lenWea",equationIndexes))))):data->localData[0]->timeValue);
  }
  threadData->lastEquationSolved = 1418;
}

/*
equation index: 1419
type: SIMPLE_ASSIGN
weaDat.conTimMin.calTim = if weaDat.conTimMin.canRepeatWeatherFile then weaDat.add30Min.y - weaDat.conTimMin.tNext + weaDat.conTimMin.lenWea else weaDat.add30Min.y
*/
void tmp_two_returns_res_eqFunction_1419(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1419};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[226]] /* weaDat.conTimMin.calTim variable */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[297]] /* weaDat.conTimMin.canRepeatWeatherFile PARAM */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[223]] /* weaDat.add30Min.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[348]] /* weaDat.conTimMin.tNext DISCRETE */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1347]] /* weaDat.conTimMin.lenWea PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[223]] /* weaDat.add30Min.y variable */));
  threadData->lastEquationSolved = 1419;
}

/*
equation index: 1420
type: SIMPLE_ASSIGN
weaDat.datRea30Min.y[1] = Modelica.Blocks.Tables.Internal.getTable1DValue(weaDat.datRea30Min.tableID, 1, weaDat.conTimMin.calTim)
*/
void tmp_two_returns_res_eqFunction_1420(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1420};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[254]] /* weaDat.datRea30Min.y[1] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[2]), ((modelica_integer) 1), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[226]] /* weaDat.conTimMin.calTim variable */));
  threadData->lastEquationSolved = 1420;
}

/*
equation index: 1421
type: SIMPLE_ASSIGN
weaDat.weaBus.HGloHor = max(0.0, weaDat.datRea30Min.y[1])
*/
void tmp_two_returns_res_eqFunction_1421(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1421};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[270]] /* weaDat.weaBus.HGloHor variable */) = fmax(0.0,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[254]] /* weaDat.datRea30Min.y[1] variable */));
  threadData->lastEquationSolved = 1421;
}

/*
equation index: 1422
type: SIMPLE_ASSIGN
weaDat.datRea30Min.y[2] = Modelica.Blocks.Tables.Internal.getTable1DValue(weaDat.datRea30Min.tableID, 2, weaDat.conTimMin.calTim)
*/
void tmp_two_returns_res_eqFunction_1422(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1422};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[255]] /* weaDat.datRea30Min.y[2] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[2]), ((modelica_integer) 2), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[226]] /* weaDat.conTimMin.calTim variable */));
  threadData->lastEquationSolved = 1422;
}

/*
equation index: 1423
type: SIMPLE_ASSIGN
weaDat.weaBus.HDirNor = max(0.0, weaDat.datRea30Min.y[2])
*/
void tmp_two_returns_res_eqFunction_1423(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1423};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[269]] /* weaDat.weaBus.HDirNor variable */) = fmax(0.0,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[255]] /* weaDat.datRea30Min.y[2] variable */));
  threadData->lastEquationSolved = 1423;
}

/*
equation index: 1424
type: SIMPLE_ASSIGN
weaDat.datRea30Min.y[3] = Modelica.Blocks.Tables.Internal.getTable1DValue(weaDat.datRea30Min.tableID, 3, weaDat.conTimMin.calTim)
*/
void tmp_two_returns_res_eqFunction_1424(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1424};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[256]] /* weaDat.datRea30Min.y[3] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[2]), ((modelica_integer) 3), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[226]] /* weaDat.conTimMin.calTim variable */));
  threadData->lastEquationSolved = 1424;
}

/*
equation index: 1425
type: SIMPLE_ASSIGN
weaDat.weaBus.HDifHor = max(0.0, weaDat.datRea30Min.y[3])
*/
void tmp_two_returns_res_eqFunction_1425(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1425};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[268]] /* weaDat.weaBus.HDifHor variable */) = fmax(0.0,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[256]] /* weaDat.datRea30Min.y[3] variable */));
  threadData->lastEquationSolved = 1425;
}

/*
equation index: 1434
type: ALGORITHM

  assert(weaDat.conTim.canRepeatWeatherFile or noEvent(time >= weaDat.conTim.weaDatStaTim), "In TmpTwoReturnsRes.weaDat.conTim: Insufficient weather data provided for the desired simulation period.
    The simulation time " + String(time, 6, 0, true) + " is less than the start time " + String(weaDat.conTim.weaDatStaTim, 6, 0, true) + " of the weather data file.");
*/
void tmp_two_returns_res_eqFunction_1434(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1434};
  modelica_boolean tmp57;
  static const MMC_DEFSTRINGLIT(tmp58,130,"In TmpTwoReturnsRes.weaDat.conTim: Insufficient weather data provided for the desired simulation period.\r\n    The simulation time ");
  modelica_string tmp59;
  modelica_metatype tmpMeta60;
  static const MMC_DEFSTRINGLIT(tmp61,29," is less than the start time ");
  modelica_metatype tmpMeta62;
  modelica_string tmp63;
  modelica_metatype tmpMeta64;
  static const MMC_DEFSTRINGLIT(tmp65,26," of the weather data file.");
  modelica_metatype tmpMeta66;
  static int tmp67 = 0;
  {
    tmp57 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1346]] /* weaDat.conTim.weaDatStaTim PARAM */));
    if(!((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[296]] /* weaDat.conTim.canRepeatWeatherFile PARAM */) || tmp57))
    {
      tmp59 = modelica_real_to_modelica_string(data->localData[0]->timeValue, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta60 = stringAppend(MMC_REFSTRINGLIT(tmp58),tmp59);
      tmpMeta62 = stringAppend(tmpMeta60,MMC_REFSTRINGLIT(tmp61));
      tmp63 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1346]] /* weaDat.conTim.weaDatStaTim PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta64 = stringAppend(tmpMeta62,tmp63);
      tmpMeta66 = stringAppend(tmpMeta64,MMC_REFSTRINGLIT(tmp65));
      {
        const char* assert_cond = "(weaDat.conTim.canRepeatWeatherFile or noEvent(time >= weaDat.conTim.weaDatStaTim))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/ConvertTime.mo",46,3,50,26,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta66));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/ConvertTime.mo",46,3,50,26,1};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta66));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1434;
}

/*
equation index: 1433
type: ALGORITHM

  assert(weaDat.conTim.canRepeatWeatherFile or noEvent(time - weaDat.conTim.weaDatEndTim < 1800.0), "In TmpTwoReturnsRes.weaDat.conTim: Insufficient weather data provided for the desired simulation period.
    The simulation time " + String(time, 6, 0, true) + " exceeds the end time " + String(weaDat.conTim.weaDatEndTim, 6, 0, true) + " of the weather data file.");
*/
void tmp_two_returns_res_eqFunction_1433(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1433};
  modelica_boolean tmp68;
  static const MMC_DEFSTRINGLIT(tmp69,130,"In TmpTwoReturnsRes.weaDat.conTim: Insufficient weather data provided for the desired simulation period.\r\n    The simulation time ");
  modelica_string tmp70;
  modelica_metatype tmpMeta71;
  static const MMC_DEFSTRINGLIT(tmp72,22," exceeds the end time ");
  modelica_metatype tmpMeta73;
  modelica_string tmp74;
  modelica_metatype tmpMeta75;
  static const MMC_DEFSTRINGLIT(tmp76,26," of the weather data file.");
  modelica_metatype tmpMeta77;
  static int tmp78 = 0;
  {
    tmp68 = Less(data->localData[0]->timeValue - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1345]] /* weaDat.conTim.weaDatEndTim PARAM */),1800.0);
    if(!((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[296]] /* weaDat.conTim.canRepeatWeatherFile PARAM */) || tmp68))
    {
      tmp70 = modelica_real_to_modelica_string(data->localData[0]->timeValue, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta71 = stringAppend(MMC_REFSTRINGLIT(tmp69),tmp70);
      tmpMeta73 = stringAppend(tmpMeta71,MMC_REFSTRINGLIT(tmp72));
      tmp74 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1345]] /* weaDat.conTim.weaDatEndTim PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta75 = stringAppend(tmpMeta73,tmp74);
      tmpMeta77 = stringAppend(tmpMeta75,MMC_REFSTRINGLIT(tmp76));
      {
        const char* assert_cond = "(weaDat.conTim.canRepeatWeatherFile or noEvent(time - weaDat.conTim.weaDatEndTim < 1800.0))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/ConvertTime.mo",40,3,44,26,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta77));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/ConvertTime.mo",40,3,44,26,1};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta77));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1433;
}

/*
equation index: 1432
type: ALGORITHM

  assert(weaDat.conTimMin.canRepeatWeatherFile or noEvent(time >= weaDat.conTimMin.weaDatStaTim), "In TmpTwoReturnsRes.weaDat.conTimMin: Insufficient weather data provided for the desired simulation period.
    The simulation time " + String(time, 6, 0, true) + " is less than the start time " + String(weaDat.conTimMin.weaDatStaTim, 6, 0, true) + " of the weather data file.");
*/
void tmp_two_returns_res_eqFunction_1432(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1432};
  modelica_boolean tmp79;
  static const MMC_DEFSTRINGLIT(tmp80,133,"In TmpTwoReturnsRes.weaDat.conTimMin: Insufficient weather data provided for the desired simulation period.\r\n    The simulation time ");
  modelica_string tmp81;
  modelica_metatype tmpMeta82;
  static const MMC_DEFSTRINGLIT(tmp83,29," is less than the start time ");
  modelica_metatype tmpMeta84;
  modelica_string tmp85;
  modelica_metatype tmpMeta86;
  static const MMC_DEFSTRINGLIT(tmp87,26," of the weather data file.");
  modelica_metatype tmpMeta88;
  static int tmp89 = 0;
  {
    tmp79 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1349]] /* weaDat.conTimMin.weaDatStaTim PARAM */));
    if(!((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[297]] /* weaDat.conTimMin.canRepeatWeatherFile PARAM */) || tmp79))
    {
      tmp81 = modelica_real_to_modelica_string(data->localData[0]->timeValue, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta82 = stringAppend(MMC_REFSTRINGLIT(tmp80),tmp81);
      tmpMeta84 = stringAppend(tmpMeta82,MMC_REFSTRINGLIT(tmp83));
      tmp85 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1349]] /* weaDat.conTimMin.weaDatStaTim PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta86 = stringAppend(tmpMeta84,tmp85);
      tmpMeta88 = stringAppend(tmpMeta86,MMC_REFSTRINGLIT(tmp87));
      {
        const char* assert_cond = "(weaDat.conTimMin.canRepeatWeatherFile or noEvent(time >= weaDat.conTimMin.weaDatStaTim))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/ConvertTime.mo",46,3,50,26,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta88));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/ConvertTime.mo",46,3,50,26,1};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta88));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1432;
}

/*
equation index: 1431
type: ALGORITHM

  assert(weaDat.conTimMin.canRepeatWeatherFile or noEvent(time - weaDat.conTimMin.weaDatEndTim < 1800.0), "In TmpTwoReturnsRes.weaDat.conTimMin: Insufficient weather data provided for the desired simulation period.
    The simulation time " + String(time, 6, 0, true) + " exceeds the end time " + String(weaDat.conTimMin.weaDatEndTim, 6, 0, true) + " of the weather data file.");
*/
void tmp_two_returns_res_eqFunction_1431(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1431};
  modelica_boolean tmp90;
  static const MMC_DEFSTRINGLIT(tmp91,133,"In TmpTwoReturnsRes.weaDat.conTimMin: Insufficient weather data provided for the desired simulation period.\r\n    The simulation time ");
  modelica_string tmp92;
  modelica_metatype tmpMeta93;
  static const MMC_DEFSTRINGLIT(tmp94,22," exceeds the end time ");
  modelica_metatype tmpMeta95;
  modelica_string tmp96;
  modelica_metatype tmpMeta97;
  static const MMC_DEFSTRINGLIT(tmp98,26," of the weather data file.");
  modelica_metatype tmpMeta99;
  static int tmp100 = 0;
  {
    tmp90 = Less(data->localData[0]->timeValue - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1348]] /* weaDat.conTimMin.weaDatEndTim PARAM */),1800.0);
    if(!((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[297]] /* weaDat.conTimMin.canRepeatWeatherFile PARAM */) || tmp90))
    {
      tmp92 = modelica_real_to_modelica_string(data->localData[0]->timeValue, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta93 = stringAppend(MMC_REFSTRINGLIT(tmp91),tmp92);
      tmpMeta95 = stringAppend(tmpMeta93,MMC_REFSTRINGLIT(tmp94));
      tmp96 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1348]] /* weaDat.conTimMin.weaDatEndTim PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta97 = stringAppend(tmpMeta95,tmp96);
      tmpMeta99 = stringAppend(tmpMeta97,MMC_REFSTRINGLIT(tmp98));
      {
        const char* assert_cond = "(weaDat.conTimMin.canRepeatWeatherFile or noEvent(time - weaDat.conTimMin.weaDatEndTim < 1800.0))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/ConvertTime.mo",40,3,44,26,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta99));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/ConvertTime.mo",40,3,44,26,1};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta99));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1431;
}

/*
equation index: 1430
type: ALGORITHM

  assert(noEvent(weaDat.pAtmSel.p > 3100.0) and noEvent(weaDat.pAtmSel.p < 1.2e5), "In TmpTwoReturnsRes.weaDat.chePre: Weather data atmospheric pressure out of bounds.
   PIn = " + String(weaDat.pAtmSel.p, 6, 0, true));
*/
void tmp_two_returns_res_eqFunction_1430(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1430};
  modelica_boolean tmp101;
  modelica_boolean tmp102;
  static const MMC_DEFSTRINGLIT(tmp103,93,"In TmpTwoReturnsRes.weaDat.chePre: Weather data atmospheric pressure out of bounds.\n   PIn = ");
  modelica_string tmp104;
  modelica_metatype tmpMeta105;
  static int tmp106 = 0;
  {
    tmp101 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1366]] /* weaDat.pAtmSel.p PARAM */),3100.0);
    tmp102 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1366]] /* weaDat.pAtmSel.p PARAM */),1.2e5);
    if(!(tmp101 && tmp102))
    {
      tmp104 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1366]] /* weaDat.pAtmSel.p PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta105 = stringAppend(MMC_REFSTRINGLIT(tmp103),tmp104);
      {
        const char* assert_cond = "(noEvent(weaDat.pAtmSel.p > 3100.0) and noEvent(weaDat.pAtmSel.p < 1.2e5))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckPressure.mo",17,3,18,88,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta105));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckPressure.mo",17,3,18,88,1};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta105));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1430;
}

/*
equation index: 1429
type: ALGORITHM

  assert(abs(1.0 - roo.irRadGai.fraConExt[1] - roo.irRadGai.fraConExtWinOpa[1] - roo.irRadGai.fraConExtWinGla[1] - roo.irRadGai.fraConExtWinFra[1] - roo.irRadGai.fraConPar_a[1] - roo.irRadGai.fraConPar_b[1] - roo.irRadGai.fraConBou[1] - (roo.irRadGai.fraSurBou[1] + roo.irRadGai.fraSurBou[2] + roo.irRadGai.fraSurBou[3] + roo.irRadGai.fraSurBou[4] + roo.irRadGai.fraSurBou[5] + roo.irRadGai.fraSurBou[6])) < 1e-5, "Programming error: Radiation balance is wrong. Check equations.");
*/
void tmp_two_returns_res_eqFunction_1429(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1429};
  modelica_boolean tmp107;
  static const MMC_DEFSTRINGLIT(tmp108,63,"Programming error: Radiation balance is wrong. Check equations.");
  static int tmp109 = 0;
  {
    tmp107 = Less(fabs(1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[163]] /* roo.irRadGai.fraConExt[1] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[166]] /* roo.irRadGai.fraConExtWinOpa[1] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[165]] /* roo.irRadGai.fraConExtWinGla[1] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[164]] /* roo.irRadGai.fraConExtWinFra[1] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[167]] /* roo.irRadGai.fraConPar_a[1] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[168]] /* roo.irRadGai.fraConPar_b[1] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[162]] /* roo.irRadGai.fraConBou[1] variable */) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[169]] /* roo.irRadGai.fraSurBou[1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* roo.irRadGai.fraSurBou[2] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[171]] /* roo.irRadGai.fraSurBou[3] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[172]] /* roo.irRadGai.fraSurBou[4] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[173]] /* roo.irRadGai.fraSurBou[5] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[174]] /* roo.irRadGai.fraSurBou[6] variable */))),1e-5);
    if(!tmp107)
    {
      {
        const char* assert_cond = "(abs(1.0 - roo.irRadGai.fraConExt[1] - roo.irRadGai.fraConExtWinOpa[1] - roo.irRadGai.fraConExtWinGla[1] - roo.irRadGai.fraConExtWinFra[1] - roo.irRadGai.fraConPar_a[1] - roo.irRadGai.fraConPar_b[1] - roo.irRadGai.fraConBou[1] - (roo.irRadGai.fraSurBou[1] + roo.irRadGai.fraSurBou[2] + roo.irRadGai.fraSurBou[3] + roo.irRadGai.fraSurBou[4] + roo.irRadGai.fraSurBou[5] + roo.irRadGai.fraSurBou[6])) < 1e-5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationGainDistribution.mo",122,3,125,78,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp108)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationGainDistribution.mo",122,3,125,78,1};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp108)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1429;
}

/*
equation index: 1428
type: ALGORITHM

  assert(noEvent(weaDat.weaBus.TBlaSky > weaDat.cheTemBlaSky.TMin) and noEvent(weaDat.weaBus.TBlaSky < weaDat.cheTemBlaSky.TMax), "In TmpTwoReturnsRes.weaDat.cheTemBlaSky: Weather data black-body sky temperature out of bounds.
   TIn = " + String(weaDat.weaBus.TBlaSky, 6, 0, true));
*/
void tmp_two_returns_res_eqFunction_1428(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1428};
  modelica_boolean tmp110;
  modelica_boolean tmp111;
  static const MMC_DEFSTRINGLIT(tmp112,105,"In TmpTwoReturnsRes.weaDat.cheTemBlaSky: Weather data black-body sky temperature out of bounds.\n   TIn = ");
  modelica_string tmp113;
  modelica_metatype tmpMeta114;
  static int tmp115 = 0;
  {
    tmp110 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[272]] /* weaDat.weaBus.TBlaSky variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1336]] /* weaDat.cheTemBlaSky.TMin PARAM */));
    tmp111 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[272]] /* weaDat.weaBus.TBlaSky variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1335]] /* weaDat.cheTemBlaSky.TMax PARAM */));
    if(!(tmp110 && tmp111))
    {
      tmp113 = modelica_real_to_modelica_string((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[272]] /* weaDat.weaBus.TBlaSky variable */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta114 = stringAppend(MMC_REFSTRINGLIT(tmp112),tmp113);
      {
        const char* assert_cond = "(noEvent(weaDat.weaBus.TBlaSky > weaDat.cheTemBlaSky.TMin) and noEvent(weaDat.weaBus.TBlaSky < weaDat.cheTemBlaSky.TMax))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckBlackBodySkyTemperature.mo",25,3,27,18,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta114));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckBlackBodySkyTemperature.mo",25,3,27,18,1};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta114));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1428;
}

/*
equation index: 1427
type: ALGORITHM

  assert(noEvent(weaDat.weaBus.TDewPoi > weaDat.cheTemDewPoi.TMin) and noEvent(weaDat.weaBus.TDewPoi < weaDat.cheTemDewPoi.TMax), "In TmpTwoReturnsRes.weaDat.cheTemDewPoi: Weather data dew point temperature out of bounds.
   TIn = " + String(weaDat.weaBus.TDewPoi, 6, 0, true));
*/
void tmp_two_returns_res_eqFunction_1427(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1427};
  modelica_boolean tmp116;
  modelica_boolean tmp117;
  static const MMC_DEFSTRINGLIT(tmp118,100,"In TmpTwoReturnsRes.weaDat.cheTemDewPoi: Weather data dew point temperature out of bounds.\n   TIn = ");
  modelica_string tmp119;
  modelica_metatype tmpMeta120;
  static int tmp121 = 0;
  {
    tmp116 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[273]] /* weaDat.weaBus.TDewPoi variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1338]] /* weaDat.cheTemDewPoi.TMin PARAM */));
    tmp117 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[273]] /* weaDat.weaBus.TDewPoi variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1337]] /* weaDat.cheTemDewPoi.TMax PARAM */));
    if(!(tmp116 && tmp117))
    {
      tmp119 = modelica_real_to_modelica_string((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[273]] /* weaDat.weaBus.TDewPoi variable */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta120 = stringAppend(MMC_REFSTRINGLIT(tmp118),tmp119);
      {
        const char* assert_cond = "(noEvent(weaDat.weaBus.TDewPoi > weaDat.cheTemDewPoi.TMin) and noEvent(weaDat.weaBus.TDewPoi < weaDat.cheTemDewPoi.TMax))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckDewPointTemperature.mo",23,3,25,10,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta120));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckDewPointTemperature.mo",23,3,25,10,1};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta120));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1427;
}

/*
equation index: 1426
type: ALGORITHM

  assert(noEvent(weaDat.weaBus.TDryBul > weaDat.cheTemDryBul.TMin) and noEvent(weaDat.weaBus.TDryBul < weaDat.cheTemDryBul.TMax), "In TmpTwoReturnsRes.weaDat.cheTemDryBul: Weather data dry bulb temperature out of bounds.
   TIn = " + String(weaDat.weaBus.TDryBul, 6, 0, true));
*/
void tmp_two_returns_res_eqFunction_1426(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1426};
  modelica_boolean tmp122;
  modelica_boolean tmp123;
  static const MMC_DEFSTRINGLIT(tmp124,99,"In TmpTwoReturnsRes.weaDat.cheTemDryBul: Weather data dry bulb temperature out of bounds.\n   TIn = ");
  modelica_string tmp125;
  modelica_metatype tmpMeta126;
  static int tmp127 = 0;
  {
    tmp122 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[274]] /* weaDat.weaBus.TDryBul variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1340]] /* weaDat.cheTemDryBul.TMin PARAM */));
    tmp123 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[274]] /* weaDat.weaBus.TDryBul variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1339]] /* weaDat.cheTemDryBul.TMax PARAM */));
    if(!(tmp122 && tmp123))
    {
      tmp125 = modelica_real_to_modelica_string((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[274]] /* weaDat.weaBus.TDryBul variable */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta126 = stringAppend(MMC_REFSTRINGLIT(tmp124),tmp125);
      {
        const char* assert_cond = "(noEvent(weaDat.weaBus.TDryBul > weaDat.cheTemDryBul.TMin) and noEvent(weaDat.weaBus.TDryBul < weaDat.cheTemDryBul.TMax))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckDryBulbTemperature.mo",23,3,25,10,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta126));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckDryBulbTemperature.mo",23,3,25,10,1};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta126));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1426;
}

OMC_DISABLE_OPT
int tmp_two_returns_res_functionDAE(DATA *data, threadData_t *threadData)
{
  int equationIndexes[1] = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  tmp_two_returns_res_functionLocalKnownVars(data, threadData);
  static void (*const eqFunctions[232])(DATA*, threadData_t*) = {
    tmp_two_returns_res_eqFunction_1168,
    tmp_two_returns_res_eqFunction_1169,
    tmp_two_returns_res_eqFunction_1170,
    tmp_two_returns_res_eqFunction_1171,
    tmp_two_returns_res_eqFunction_1172,
    tmp_two_returns_res_eqFunction_1173,
    tmp_two_returns_res_eqFunction_1174,
    tmp_two_returns_res_eqFunction_1175,
    tmp_two_returns_res_eqFunction_1176,
    tmp_two_returns_res_eqFunction_1177,
    tmp_two_returns_res_eqFunction_1178,
    tmp_two_returns_res_eqFunction_1179,
    tmp_two_returns_res_eqFunction_1180,
    tmp_two_returns_res_eqFunction_1181,
    tmp_two_returns_res_eqFunction_1182,
    tmp_two_returns_res_eqFunction_1183,
    tmp_two_returns_res_eqFunction_1184,
    tmp_two_returns_res_eqFunction_1185,
    tmp_two_returns_res_eqFunction_1186,
    tmp_two_returns_res_eqFunction_1187,
    tmp_two_returns_res_eqFunction_1188,
    tmp_two_returns_res_eqFunction_1189,
    tmp_two_returns_res_eqFunction_1190,
    tmp_two_returns_res_eqFunction_1191,
    tmp_two_returns_res_eqFunction_1192,
    tmp_two_returns_res_eqFunction_1193,
    tmp_two_returns_res_eqFunction_1194,
    tmp_two_returns_res_eqFunction_1195,
    tmp_two_returns_res_eqFunction_1196,
    tmp_two_returns_res_eqFunction_1197,
    tmp_two_returns_res_eqFunction_1198,
    tmp_two_returns_res_eqFunction_1199,
    tmp_two_returns_res_eqFunction_1200,
    tmp_two_returns_res_eqFunction_1201,
    tmp_two_returns_res_eqFunction_1202,
    tmp_two_returns_res_eqFunction_1203,
    tmp_two_returns_res_eqFunction_1204,
    tmp_two_returns_res_eqFunction_1205,
    tmp_two_returns_res_eqFunction_1206,
    tmp_two_returns_res_eqFunction_1207,
    tmp_two_returns_res_eqFunction_1208,
    tmp_two_returns_res_eqFunction_1209,
    tmp_two_returns_res_eqFunction_1210,
    tmp_two_returns_res_eqFunction_1211,
    tmp_two_returns_res_eqFunction_1212,
    tmp_two_returns_res_eqFunction_1213,
    tmp_two_returns_res_eqFunction_1214,
    tmp_two_returns_res_eqFunction_1215,
    tmp_two_returns_res_eqFunction_1216,
    tmp_two_returns_res_eqFunction_1217,
    tmp_two_returns_res_eqFunction_1218,
    tmp_two_returns_res_eqFunction_1219,
    tmp_two_returns_res_eqFunction_1220,
    tmp_two_returns_res_eqFunction_1221,
    tmp_two_returns_res_eqFunction_1222,
    tmp_two_returns_res_eqFunction_1223,
    tmp_two_returns_res_eqFunction_1224,
    tmp_two_returns_res_eqFunction_1225,
    tmp_two_returns_res_eqFunction_1226,
    tmp_two_returns_res_eqFunction_1227,
    tmp_two_returns_res_eqFunction_1228,
    tmp_two_returns_res_eqFunction_1229,
    tmp_two_returns_res_eqFunction_1230,
    tmp_two_returns_res_eqFunction_1231,
    tmp_two_returns_res_eqFunction_1232,
    tmp_two_returns_res_eqFunction_1233,
    tmp_two_returns_res_eqFunction_1234,
    tmp_two_returns_res_eqFunction_1235,
    tmp_two_returns_res_eqFunction_1236,
    tmp_two_returns_res_eqFunction_1237,
    tmp_two_returns_res_eqFunction_1238,
    tmp_two_returns_res_eqFunction_1239,
    tmp_two_returns_res_eqFunction_1240,
    tmp_two_returns_res_eqFunction_1241,
    tmp_two_returns_res_eqFunction_1242,
    tmp_two_returns_res_eqFunction_1267,
    tmp_two_returns_res_eqFunction_1268,
    tmp_two_returns_res_eqFunction_1269,
    tmp_two_returns_res_eqFunction_1270,
    tmp_two_returns_res_eqFunction_1271,
    tmp_two_returns_res_eqFunction_1272,
    tmp_two_returns_res_eqFunction_1273,
    tmp_two_returns_res_eqFunction_1274,
    tmp_two_returns_res_eqFunction_1275,
    tmp_two_returns_res_eqFunction_1276,
    tmp_two_returns_res_eqFunction_1277,
    tmp_two_returns_res_eqFunction_1278,
    tmp_two_returns_res_eqFunction_1279,
    tmp_two_returns_res_eqFunction_1280,
    tmp_two_returns_res_eqFunction_1281,
    tmp_two_returns_res_eqFunction_1282,
    tmp_two_returns_res_eqFunction_1283,
    tmp_two_returns_res_eqFunction_1284,
    tmp_two_returns_res_eqFunction_1285,
    tmp_two_returns_res_eqFunction_1286,
    tmp_two_returns_res_eqFunction_1287,
    tmp_two_returns_res_eqFunction_1288,
    tmp_two_returns_res_eqFunction_1289,
    tmp_two_returns_res_eqFunction_1290,
    tmp_two_returns_res_eqFunction_1291,
    tmp_two_returns_res_eqFunction_1292,
    tmp_two_returns_res_eqFunction_1293,
    tmp_two_returns_res_eqFunction_1294,
    tmp_two_returns_res_eqFunction_1295,
    tmp_two_returns_res_eqFunction_1296,
    tmp_two_returns_res_eqFunction_1297,
    tmp_two_returns_res_eqFunction_1298,
    tmp_two_returns_res_eqFunction_1299,
    tmp_two_returns_res_eqFunction_1300,
    tmp_two_returns_res_eqFunction_1301,
    tmp_two_returns_res_eqFunction_1302,
    tmp_two_returns_res_eqFunction_1303,
    tmp_two_returns_res_eqFunction_1304,
    tmp_two_returns_res_eqFunction_1305,
    tmp_two_returns_res_eqFunction_1306,
    tmp_two_returns_res_eqFunction_1307,
    tmp_two_returns_res_eqFunction_1308,
    tmp_two_returns_res_eqFunction_1309,
    tmp_two_returns_res_eqFunction_1310,
    tmp_two_returns_res_eqFunction_1311,
    tmp_two_returns_res_eqFunction_1312,
    tmp_two_returns_res_eqFunction_1313,
    tmp_two_returns_res_eqFunction_1314,
    tmp_two_returns_res_eqFunction_1315,
    tmp_two_returns_res_eqFunction_1317,
    tmp_two_returns_res_eqFunction_1318,
    tmp_two_returns_res_eqFunction_1319,
    tmp_two_returns_res_eqFunction_1320,
    tmp_two_returns_res_eqFunction_1322,
    tmp_two_returns_res_eqFunction_1323,
    tmp_two_returns_res_eqFunction_1324,
    tmp_two_returns_res_eqFunction_1325,
    tmp_two_returns_res_eqFunction_1326,
    tmp_two_returns_res_eqFunction_1327,
    tmp_two_returns_res_eqFunction_1328,
    tmp_two_returns_res_eqFunction_1329,
    tmp_two_returns_res_eqFunction_1330,
    tmp_two_returns_res_eqFunction_1331,
    tmp_two_returns_res_eqFunction_1332,
    tmp_two_returns_res_eqFunction_1333,
    tmp_two_returns_res_eqFunction_1334,
    tmp_two_returns_res_eqFunction_1335,
    tmp_two_returns_res_eqFunction_1336,
    tmp_two_returns_res_eqFunction_1337,
    tmp_two_returns_res_eqFunction_1338,
    tmp_two_returns_res_eqFunction_1339,
    tmp_two_returns_res_eqFunction_1340,
    tmp_two_returns_res_eqFunction_1341,
    tmp_two_returns_res_eqFunction_1342,
    tmp_two_returns_res_eqFunction_1343,
    tmp_two_returns_res_eqFunction_1344,
    tmp_two_returns_res_eqFunction_1345,
    tmp_two_returns_res_eqFunction_1346,
    tmp_two_returns_res_eqFunction_1347,
    tmp_two_returns_res_eqFunction_1348,
    tmp_two_returns_res_eqFunction_1349,
    tmp_two_returns_res_eqFunction_1350,
    tmp_two_returns_res_eqFunction_1351,
    tmp_two_returns_res_eqFunction_1352,
    tmp_two_returns_res_eqFunction_1353,
    tmp_two_returns_res_eqFunction_1354,
    tmp_two_returns_res_eqFunction_1355,
    tmp_two_returns_res_eqFunction_1356,
    tmp_two_returns_res_eqFunction_1357,
    tmp_two_returns_res_eqFunction_1358,
    tmp_two_returns_res_eqFunction_1359,
    tmp_two_returns_res_eqFunction_1360,
    tmp_two_returns_res_eqFunction_1361,
    tmp_two_returns_res_eqFunction_1362,
    tmp_two_returns_res_eqFunction_1363,
    tmp_two_returns_res_eqFunction_1364,
    tmp_two_returns_res_eqFunction_1365,
    tmp_two_returns_res_eqFunction_1366,
    tmp_two_returns_res_eqFunction_1367,
    tmp_two_returns_res_eqFunction_1368,
    tmp_two_returns_res_eqFunction_1369,
    tmp_two_returns_res_eqFunction_1379,
    tmp_two_returns_res_eqFunction_1380,
    tmp_two_returns_res_eqFunction_1381,
    tmp_two_returns_res_eqFunction_1382,
    tmp_two_returns_res_eqFunction_1383,
    tmp_two_returns_res_eqFunction_1384,
    tmp_two_returns_res_eqFunction_1385,
    tmp_two_returns_res_eqFunction_1386,
    tmp_two_returns_res_eqFunction_1387,
    tmp_two_returns_res_eqFunction_1388,
    tmp_two_returns_res_eqFunction_1389,
    tmp_two_returns_res_eqFunction_1390,
    tmp_two_returns_res_eqFunction_1391,
    tmp_two_returns_res_eqFunction_1392,
    tmp_two_returns_res_eqFunction_1393,
    tmp_two_returns_res_eqFunction_1394,
    tmp_two_returns_res_eqFunction_1395,
    tmp_two_returns_res_eqFunction_1396,
    tmp_two_returns_res_eqFunction_1397,
    tmp_two_returns_res_eqFunction_1398,
    tmp_two_returns_res_eqFunction_1399,
    tmp_two_returns_res_eqFunction_1400,
    tmp_two_returns_res_eqFunction_1401,
    tmp_two_returns_res_eqFunction_1402,
    tmp_two_returns_res_eqFunction_1403,
    tmp_two_returns_res_eqFunction_1404,
    tmp_two_returns_res_eqFunction_1405,
    tmp_two_returns_res_eqFunction_1406,
    tmp_two_returns_res_eqFunction_1407,
    tmp_two_returns_res_eqFunction_1408,
    tmp_two_returns_res_eqFunction_1409,
    tmp_two_returns_res_eqFunction_1410,
    tmp_two_returns_res_eqFunction_1411,
    tmp_two_returns_res_eqFunction_1412,
    tmp_two_returns_res_eqFunction_1413,
    tmp_two_returns_res_eqFunction_1414,
    tmp_two_returns_res_eqFunction_1415,
    tmp_two_returns_res_eqFunction_1416,
    tmp_two_returns_res_eqFunction_1417,
    tmp_two_returns_res_eqFunction_1418,
    tmp_two_returns_res_eqFunction_1419,
    tmp_two_returns_res_eqFunction_1420,
    tmp_two_returns_res_eqFunction_1421,
    tmp_two_returns_res_eqFunction_1422,
    tmp_two_returns_res_eqFunction_1423,
    tmp_two_returns_res_eqFunction_1424,
    tmp_two_returns_res_eqFunction_1425,
    tmp_two_returns_res_eqFunction_1434,
    tmp_two_returns_res_eqFunction_1433,
    tmp_two_returns_res_eqFunction_1432,
    tmp_two_returns_res_eqFunction_1431,
    tmp_two_returns_res_eqFunction_1430,
    tmp_two_returns_res_eqFunction_1429,
    tmp_two_returns_res_eqFunction_1428,
    tmp_two_returns_res_eqFunction_1427,
    tmp_two_returns_res_eqFunction_1426
  };
  
  for (int id = 0; id < 232; id++) {
    eqFunctions[id](data, threadData);
  }
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  return 0;
}


int tmp_two_returns_res_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  
  return 0;
}

/* forwarded equations */
extern void tmp_two_returns_res_eqFunction_1180(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1181(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1182(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1183(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1184(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1228(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1229(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1230(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1232(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1235(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1236(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1237(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1238(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1239(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1240(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1241(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1242(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1267(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1268(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1269(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1270(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1271(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1272(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1273(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1276(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1277(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1278(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1279(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1280(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1282(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1283(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1284(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1285(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1286(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1287(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1288(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1289(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1290(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1291(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1292(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1293(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1294(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1295(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1296(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1297(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1298(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1299(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1300(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1301(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1302(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1303(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1304(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1305(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1306(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1315(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1317(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1318(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1320(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1322(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1323(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1324(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1327(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1328(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1329(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1330(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1331(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1332(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1333(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1334(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1335(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1336(DATA* data, threadData_t *threadData);

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[71])(DATA*, threadData_t*) = {
    tmp_two_returns_res_eqFunction_1180,
    tmp_two_returns_res_eqFunction_1181,
    tmp_two_returns_res_eqFunction_1182,
    tmp_two_returns_res_eqFunction_1183,
    tmp_two_returns_res_eqFunction_1184,
    tmp_two_returns_res_eqFunction_1228,
    tmp_two_returns_res_eqFunction_1229,
    tmp_two_returns_res_eqFunction_1230,
    tmp_two_returns_res_eqFunction_1232,
    tmp_two_returns_res_eqFunction_1235,
    tmp_two_returns_res_eqFunction_1236,
    tmp_two_returns_res_eqFunction_1237,
    tmp_two_returns_res_eqFunction_1238,
    tmp_two_returns_res_eqFunction_1239,
    tmp_two_returns_res_eqFunction_1240,
    tmp_two_returns_res_eqFunction_1241,
    tmp_two_returns_res_eqFunction_1242,
    tmp_two_returns_res_eqFunction_1267,
    tmp_two_returns_res_eqFunction_1268,
    tmp_two_returns_res_eqFunction_1269,
    tmp_two_returns_res_eqFunction_1270,
    tmp_two_returns_res_eqFunction_1271,
    tmp_two_returns_res_eqFunction_1272,
    tmp_two_returns_res_eqFunction_1273,
    tmp_two_returns_res_eqFunction_1276,
    tmp_two_returns_res_eqFunction_1277,
    tmp_two_returns_res_eqFunction_1278,
    tmp_two_returns_res_eqFunction_1279,
    tmp_two_returns_res_eqFunction_1280,
    tmp_two_returns_res_eqFunction_1282,
    tmp_two_returns_res_eqFunction_1283,
    tmp_two_returns_res_eqFunction_1284,
    tmp_two_returns_res_eqFunction_1285,
    tmp_two_returns_res_eqFunction_1286,
    tmp_two_returns_res_eqFunction_1287,
    tmp_two_returns_res_eqFunction_1288,
    tmp_two_returns_res_eqFunction_1289,
    tmp_two_returns_res_eqFunction_1290,
    tmp_two_returns_res_eqFunction_1291,
    tmp_two_returns_res_eqFunction_1292,
    tmp_two_returns_res_eqFunction_1293,
    tmp_two_returns_res_eqFunction_1294,
    tmp_two_returns_res_eqFunction_1295,
    tmp_two_returns_res_eqFunction_1296,
    tmp_two_returns_res_eqFunction_1297,
    tmp_two_returns_res_eqFunction_1298,
    tmp_two_returns_res_eqFunction_1299,
    tmp_two_returns_res_eqFunction_1300,
    tmp_two_returns_res_eqFunction_1301,
    tmp_two_returns_res_eqFunction_1302,
    tmp_two_returns_res_eqFunction_1303,
    tmp_two_returns_res_eqFunction_1304,
    tmp_two_returns_res_eqFunction_1305,
    tmp_two_returns_res_eqFunction_1306,
    tmp_two_returns_res_eqFunction_1315,
    tmp_two_returns_res_eqFunction_1317,
    tmp_two_returns_res_eqFunction_1318,
    tmp_two_returns_res_eqFunction_1320,
    tmp_two_returns_res_eqFunction_1322,
    tmp_two_returns_res_eqFunction_1323,
    tmp_two_returns_res_eqFunction_1324,
    tmp_two_returns_res_eqFunction_1327,
    tmp_two_returns_res_eqFunction_1328,
    tmp_two_returns_res_eqFunction_1329,
    tmp_two_returns_res_eqFunction_1330,
    tmp_two_returns_res_eqFunction_1331,
    tmp_two_returns_res_eqFunction_1332,
    tmp_two_returns_res_eqFunction_1333,
    tmp_two_returns_res_eqFunction_1334,
    tmp_two_returns_res_eqFunction_1335,
    tmp_two_returns_res_eqFunction_1336
  };
  
  for (int id = 0; id < 71; id++) {
    eqFunctions[id](data, threadData);
  }
}

int tmp_two_returns_res_functionODE(DATA *data, threadData_t *threadData)
{
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  tmp_two_returns_res_functionLocalKnownVars(data, threadData);
  functionODE_system0(data, threadData);

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char **argv, DATA *data, threadData_t *threadData);
extern int _main_OptimizationRuntime(int argc, char **argv, DATA *data, threadData_t *threadData);

#include "tmp_two_returns_res_12jac.h"
#include "tmp_two_returns_res_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks tmp_two_returns_res_callback = {
  (int (*)(DATA *, threadData_t *, void *)) tmp_two_returns_res_performSimulation,    /* performSimulation */
  (int (*)(DATA *, threadData_t *, void *)) tmp_two_returns_res_performQSSSimulation,    /* performQSSSimulation */
  tmp_two_returns_res_updateContinuousSystem,    /* updateContinuousSystem */
  tmp_two_returns_res_callExternalObjectDestructors,    /* callExternalObjectDestructors */
  tmp_two_returns_res_initialNonLinearSystem,    /* initialNonLinearSystem */
  tmp_two_returns_res_initialLinearSystem,    /* initialLinearSystem */
  NULL,    /* initialMixedSystem */
  #if !defined(OMC_NO_STATESELECTION)
  tmp_two_returns_res_initializeStateSets,
  #else
  NULL,
  #endif    /* initializeStateSets */
  tmp_two_returns_res_initializeDAEmodeData,
  tmp_two_returns_res_functionODE,
  tmp_two_returns_res_functionAlgebraics,
  tmp_two_returns_res_functionDAE,
  tmp_two_returns_res_functionLocalKnownVars,
  tmp_two_returns_res_input_function,
  tmp_two_returns_res_input_function_init,
  tmp_two_returns_res_input_function_updateStartValues,
  tmp_two_returns_res_data_function,
  tmp_two_returns_res_output_function,
  tmp_two_returns_res_setc_function,
  tmp_two_returns_res_setb_function,
  tmp_two_returns_res_function_storeDelayed,
  tmp_two_returns_res_function_storeSpatialDistribution,
  tmp_two_returns_res_function_initSpatialDistribution,
  tmp_two_returns_res_updateBoundVariableAttributes,
  tmp_two_returns_res_functionInitialEquations,
  GLOBAL_EQUIDISTANT_HOMOTOPY,
  tmp_two_returns_res_functionInitialEquations_lambda0,
  tmp_two_returns_res_functionRemovedInitialEquations,
  tmp_two_returns_res_updateBoundParameters,
  tmp_two_returns_res_checkForAsserts,
  tmp_two_returns_res_function_ZeroCrossingsEquations,
  tmp_two_returns_res_function_ZeroCrossings,
  tmp_two_returns_res_function_updateRelations,
  tmp_two_returns_res_zeroCrossingDescription,
  tmp_two_returns_res_relationDescription,
  tmp_two_returns_res_function_initSample,
  tmp_two_returns_res_INDEX_JAC_A,
  tmp_two_returns_res_INDEX_JAC_B,
  tmp_two_returns_res_INDEX_JAC_C,
  tmp_two_returns_res_INDEX_JAC_D,
  tmp_two_returns_res_INDEX_JAC_F,
  tmp_two_returns_res_INDEX_JAC_H,
  tmp_two_returns_res_initialAnalyticJacobianA,
  tmp_two_returns_res_initialAnalyticJacobianB,
  tmp_two_returns_res_initialAnalyticJacobianC,
  tmp_two_returns_res_initialAnalyticJacobianD,
  tmp_two_returns_res_initialAnalyticJacobianF,
  tmp_two_returns_res_initialAnalyticJacobianH,
  tmp_two_returns_res_functionJacA_column,
  tmp_two_returns_res_functionJacB_column,
  tmp_two_returns_res_functionJacC_column,
  tmp_two_returns_res_functionJacD_column,
  tmp_two_returns_res_functionJacF_column,
  tmp_two_returns_res_functionJacH_column,
  tmp_two_returns_res_linear_model_frame,
  tmp_two_returns_res_linear_model_datarecovery_frame,
  tmp_two_returns_res_mayer,
  tmp_two_returns_res_lagrange,
  tmp_two_returns_res_getInputVarIndicesInOptimization,
  tmp_two_returns_res_pickUpBoundsForInputsInOptimization,
  tmp_two_returns_res_setInputData,
  tmp_two_returns_res_getTimeGrid,
  tmp_two_returns_res_symbolicInlineSystem,
  tmp_two_returns_res_function_initSynchronous,
  tmp_two_returns_res_function_updateSynchronous,
  tmp_two_returns_res_function_equationsSynchronous,
  tmp_two_returns_res_inputNames,
  tmp_two_returns_res_dataReconciliationInputNames,
  tmp_two_returns_res_dataReconciliationUnmeasuredVariables,
  NULL,
  NULL,
  NULL,
  NULL,
  -1,
  NULL,
  NULL,
  -1

};

#define _OMC_LIT_RESOURCE_0_name_data "Buildings"
#define _OMC_LIT_RESOURCE_0_dir_data "C:/OMLibs/modelica-buildings/Buildings"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_name,9,_OMC_LIT_RESOURCE_0_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir,38,_OMC_LIT_RESOURCE_0_dir_data);

#define _OMC_LIT_RESOURCE_1_name_data "Complex"
#define _OMC_LIT_RESOURCE_1_dir_data "C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Complex 4.1.0+maint.om"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_name,7,_OMC_LIT_RESOURCE_1_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir,92,_OMC_LIT_RESOURCE_1_dir_data);

#define _OMC_LIT_RESOURCE_2_name_data "Modelica"
#define _OMC_LIT_RESOURCE_2_dir_data "C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_name,8,_OMC_LIT_RESOURCE_2_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir,93,_OMC_LIT_RESOURCE_2_dir_data);

#define _OMC_LIT_RESOURCE_3_name_data "ModelicaServices"
#define _OMC_LIT_RESOURCE_3_dir_data "C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/ModelicaServices 4.1.0+maint.om"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_name,16,_OMC_LIT_RESOURCE_3_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir,101,_OMC_LIT_RESOURCE_3_dir_data);

#define _OMC_LIT_RESOURCE_4_name_data "TmpTwoReturnsRes"
#define _OMC_LIT_RESOURCE_4_dir_data "c:/Users/ZacharyCooper-Baldoc/Desktop/Repositories/CFD/output"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_name,16,_OMC_LIT_RESOURCE_4_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir,61,_OMC_LIT_RESOURCE_4_dir_data);

static const MMC_DEFSTRUCTLIT(_OMC_LIT_RESOURCES,10,MMC_ARRAY_TAG) {MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir)}};
void tmp_two_returns_res_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &tmp_two_returns_res_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "TmpTwoReturnsRes";
  data->modelData->modelFilePrefix = "tmp_two_returns_res";
  data->modelData->modelFileName = "tmp_two_returns_res.mo";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "c:/Users/ZacharyCooper-Baldoc/Desktop/Repositories/CFD/output";
  data->modelData->modelGUID = "{8daabb18-0143-47a8-b4fe-21ac65afb071}";
  #if defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME)
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  #else
  #if defined(_MSC_VER) /* handle joke compilers */
  {
  /* for MSVC we encode a string like char x[] = {'a', 'b', 'c', '\0'} */
  /* because the string constant limit is 65535 bytes */
  static const char contents_init[] =
    #include "tmp_two_returns_res_init.c"
    ;
  static const char contents_info[] =
    #include "tmp_two_returns_res_info.c"
    ;
    data->modelData->initXMLData = contents_init;
    data->modelData->modelDataXml.infoXMLData = contents_info;
  }
  #else /* handle real compilers */
  data->modelData->initXMLData =
  #include "tmp_two_returns_res_init.c"
    ;
  data->modelData->modelDataXml.infoXMLData =
  #include "tmp_two_returns_res_info.c"
    ;
  #endif /* defined(_MSC_VER) */
  #endif /* defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME) */
  data->modelData->modelDataXml.fileName = "tmp_two_returns_res_info.json";
  data->modelData->resourcesDir = NULL;
  data->modelData->runTestsuite = 0;
  data->modelData->nStatesArray = 22;
  data->modelData->nDiscreteReal = 61;
  data->modelData->nVariablesRealArray = 349;
  data->modelData->nVariablesIntegerArray = 1;
  data->modelData->nVariablesBooleanArray = 6;
  data->modelData->nVariablesStringArray = 0;
  data->modelData->nParametersRealArray = 1378;
  data->modelData->nParametersIntegerArray = 388;
  data->modelData->nParametersBooleanArray = 307;
  data->modelData->nParametersStringArray = 91;
  data->modelData->nParametersReal = 1378;
  data->modelData->nParametersInteger = 388;
  data->modelData->nParametersBoolean = 307;
  data->modelData->nParametersString = 91;
  data->modelData->nAliasRealArray = 389;
  data->modelData->nAliasIntegerArray = 0;
  data->modelData->nAliasBooleanArray = 0;
  data->modelData->nAliasStringArray = 0;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 0;
  data->modelData->nZeroCrossings = 2;
  data->modelData->nSamples = 1;
  data->modelData->nRelations = 2;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 3;
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 48;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 3738;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 3;
  data->modelData->nNonLinearSystems = 7;
  data->modelData->nStateSets = 0;
  data->modelData->nJacobians = 12;
  data->modelData->nOptimizeConstraints = 0;
  data->modelData->nOptimizeFinalConstraints = 0;
  data->modelData->nDelayExpressions = 0;
  data->modelData->nBaseClocks = 0;
  data->modelData->nSpatialDistributions = 0;
  data->modelData->nSensitivityVars = 0;
  data->modelData->nSensitivityParamVars = 0;
  data->modelData->nSetcVars = 0;
  data->modelData->ndataReconVars = 0;
  data->modelData->nSetbVars = 0;
  data->modelData->nRelatedBoundaryConditions = 0;
  data->modelData->linearizationDumpLanguage = OMC_LINEARIZE_DUMP_LANGUAGE_MODELICA;
}

static int rml_execution_failed()
{
  fflush(NULL);
  fprintf(stderr, "Execution failed!\n");
  fflush(NULL);
  return 1;
}


#if defined(__MINGW32__) || defined(_MSC_VER)

#if !defined(_UNICODE)
#define _UNICODE
#endif
#if !defined(UNICODE)
#define UNICODE
#endif

#include <windows.h>
char** omc_fixWindowsArgv(int argc, wchar_t **wargv)
{
  char** newargv;
  /* Support for non-ASCII characters
  * Read the unicode command line arguments and translate it to char*
  */
  newargv = (char**)malloc(argc*sizeof(char*));
  for (int i = 0; i < argc; i++) {
    newargv[i] = omc_wchar_to_multibyte_str(wargv[i]);
  }
  return newargv;
}

#define OMC_MAIN wmain
#define OMC_CHAR wchar_t
#define OMC_EXPORT __declspec(dllexport) extern

#else
#define omc_fixWindowsArgv(N, A) (A)
#define OMC_MAIN main
#define OMC_CHAR char
#define OMC_EXPORT extern
#endif

#if defined(threadData)
#undef threadData
#endif
/* call the simulation runtime main from our main! */
#if defined(OMC_DLL_MAIN_DEFINE)
OMC_EXPORT int omcDllMain(int argc, OMC_CHAR **argv)
#else
int OMC_MAIN(int argc, OMC_CHAR** argv)
#endif
{
  char** newargv = omc_fixWindowsArgv(argc, argv);
  /*
    Set the error functions to be used for simulation.
    The default value for them is 'functions' version. Change it here to 'simulation' versions
  */
  omc_assert = omc_assert_simulation;
  omc_assert_withEquationIndexes = omc_assert_simulation_withEquationIndexes;

  omc_assert_warning_withEquationIndexes = omc_assert_warning_simulation_withEquationIndexes;
  omc_assert_warning = omc_assert_warning_simulation;
  omc_terminate = omc_terminate_simulation;
  omc_throw = omc_throw_simulation;

  int res;
  DATA data;
  MODEL_DATA modelData;
  SIMULATION_INFO simInfo;
  data.modelData = &modelData;
  data.simulationInfo = &simInfo;
  measure_time_flag = 0;
  compiledInDAEMode = 0;
  compiledWithSymSolver = 0;
  MMC_INIT(0);
  omc_alloc_interface.init();
  {
    MMC_TRY_TOP()
  
    MMC_TRY_STACK()
  
    tmp_two_returns_res_setupDataStruc(&data, threadData);
    res = _main_initRuntimeAndSimulation(argc, newargv, &data, threadData);
    if(res == 0) {
      if (omc_flag[FLAG_MOO_OPTIMIZATION]) {
        res = _main_OptimizationRuntime(argc, newargv, &data, threadData);
      } else {
        res = _main_SimulationRuntime(argc, newargv, &data, threadData);
      }
    }
    
    MMC_ELSE()
    rml_execution_failed();
    fprintf(stderr, "Stack overflow detected and was not caught.\nSend us a bug report at https://trac.openmodelica.org/OpenModelica/newticket\n    Include the following trace:\n");
    printStacktraceMessages();
    fflush(NULL);
    return 1;
    MMC_CATCH_STACK()
    
    MMC_CATCH_TOP(return rml_execution_failed());
  }

  fflush(NULL);
  return res;
}

#ifdef __cplusplus
}
#endif


