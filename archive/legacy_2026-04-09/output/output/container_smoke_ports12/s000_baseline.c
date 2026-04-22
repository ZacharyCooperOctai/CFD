/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "s000_baseline_model.h"
#include "simulation/solver/events.h"
#include "util/real_array.h"

/* FIXME these defines are ugly and hard to read, why not use direct function pointers instead? */
#define prefixedName_performSimulation s000_baseline_performSimulation
#define prefixedName_updateContinuousSystem s000_baseline_updateContinuousSystem
#include <simulation/solver/perform_simulation.c.inc>

#define prefixedName_performQSSSimulation s000_baseline_performQSSSimulation
#include <simulation/solver/perform_qss_simulation.c.inc>


/* dummy VARINFO and FILEINFO */
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int s000_baseline_input_function(DATA *data, threadData_t *threadData)
{
  
  return 0;
}

int s000_baseline_input_function_init(DATA *data, threadData_t *threadData)
{
  
  return 0;
}

int s000_baseline_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  
  return 0;
}

int s000_baseline_inputNames(DATA *data, char ** names){
  
  return 0;
}

int s000_baseline_data_function(DATA *data, threadData_t *threadData)
{
  return 0;
}

int s000_baseline_dataReconciliationInputNames(DATA *data, char ** names){
  
  return 0;
}

int s000_baseline_dataReconciliationUnmeasuredVariables(DATA *data, char ** names)
{
  
  return 0;
}

int s000_baseline_output_function(DATA *data, threadData_t *threadData)
{
  
  return 0;
}

int s000_baseline_setc_function(DATA *data, threadData_t *threadData)
{
  
  return 0;
}

int s000_baseline_setb_function(DATA *data, threadData_t *threadData)
{
  
  return 0;
}


/*
equation index: 1828
type: SIMPLE_ASSIGN
dc.retSink.ports[6].h_outflow = 1006.0 * (-273.15 + dc.retSink.T) * (1.0 - dc.retSink.X[1]) + (2.5010145e6 + 1860.0 * (-273.15 + dc.retSink.T)) * dc.retSink.X[1]
*/
void s000_baseline_eqFunction_1828(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1828};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[158]] /* dc.retSink.ports[6].h_outflow variable */) = (1006.0) * ((-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[138]] /* dc.retSink.T PARAM */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[139]] /* dc.retSink.X[1] PARAM */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[138]] /* dc.retSink.T PARAM */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[139]] /* dc.retSink.X[1] PARAM */));
  threadData->lastEquationSolved = 1828;
}

/*
equation index: 1829
type: SIMPLE_ASSIGN
dc.retSink.X_in_internal[2] = dc.retSink.X[2]
*/
void s000_baseline_eqFunction_1829(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1829};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[156]] /* dc.retSink.X_in_internal[2] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[140]] /* dc.retSink.X[2] PARAM */);
  threadData->lastEquationSolved = 1829;
}

/*
equation index: 1830
type: SIMPLE_ASSIGN
dc.retSink.X_in_internal[1] = dc.retSink.X[1]
*/
void s000_baseline_eqFunction_1830(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1830};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[155]] /* dc.retSink.X_in_internal[1] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[139]] /* dc.retSink.X[1] PARAM */);
  threadData->lastEquationSolved = 1830;
}

/*
equation index: 1831
type: SIMPLE_ASSIGN
dc.retSink.p_in_internal = dc.retSink.p
*/
void s000_baseline_eqFunction_1831(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1831};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[157]] /* dc.retSink.p_in_internal variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[141]] /* dc.retSink.p PARAM */);
  threadData->lastEquationSolved = 1831;
}

/*
equation index: 1832
type: SIMPLE_ASSIGN
dc.sup[6].X_in_internal[2] = dc.sup[6].X[2]
*/
void s000_baseline_eqFunction_1832(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1832};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[366]] /* dc.sup[6].X_in_internal[2] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1472]] /* dc.sup[6].X[2] PARAM */);
  threadData->lastEquationSolved = 1832;
}

/*
equation index: 1833
type: SIMPLE_ASSIGN
dc.sup[6].X_in_internal[1] = dc.sup[6].X[1]
*/
void s000_baseline_eqFunction_1833(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1833};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[365]] /* dc.sup[6].X_in_internal[1] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1471]] /* dc.sup[6].X[1] PARAM */);
  threadData->lastEquationSolved = 1833;
}

/*
equation index: 1834
type: SIMPLE_ASSIGN
dc.sup[5].X_in_internal[2] = dc.sup[5].X[2]
*/
void s000_baseline_eqFunction_1834(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1834};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[364]] /* dc.sup[5].X_in_internal[2] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1470]] /* dc.sup[5].X[2] PARAM */);
  threadData->lastEquationSolved = 1834;
}

/*
equation index: 1835
type: SIMPLE_ASSIGN
dc.sup[5].X_in_internal[1] = dc.sup[5].X[1]
*/
void s000_baseline_eqFunction_1835(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1835};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[363]] /* dc.sup[5].X_in_internal[1] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1469]] /* dc.sup[5].X[1] PARAM */);
  threadData->lastEquationSolved = 1835;
}

/*
equation index: 1836
type: SIMPLE_ASSIGN
dc.sup[4].X_in_internal[2] = dc.sup[4].X[2]
*/
void s000_baseline_eqFunction_1836(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1836};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[362]] /* dc.sup[4].X_in_internal[2] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1468]] /* dc.sup[4].X[2] PARAM */);
  threadData->lastEquationSolved = 1836;
}

/*
equation index: 1837
type: SIMPLE_ASSIGN
dc.sup[4].X_in_internal[1] = dc.sup[4].X[1]
*/
void s000_baseline_eqFunction_1837(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1837};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[361]] /* dc.sup[4].X_in_internal[1] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1467]] /* dc.sup[4].X[1] PARAM */);
  threadData->lastEquationSolved = 1837;
}

/*
equation index: 1838
type: SIMPLE_ASSIGN
dc.sup[3].X_in_internal[2] = dc.sup[3].X[2]
*/
void s000_baseline_eqFunction_1838(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1838};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[360]] /* dc.sup[3].X_in_internal[2] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1466]] /* dc.sup[3].X[2] PARAM */);
  threadData->lastEquationSolved = 1838;
}

/*
equation index: 1839
type: SIMPLE_ASSIGN
dc.sup[3].X_in_internal[1] = dc.sup[3].X[1]
*/
void s000_baseline_eqFunction_1839(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1839};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[359]] /* dc.sup[3].X_in_internal[1] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1465]] /* dc.sup[3].X[1] PARAM */);
  threadData->lastEquationSolved = 1839;
}

/*
equation index: 1840
type: SIMPLE_ASSIGN
dc.sup[2].X_in_internal[2] = dc.sup[2].X[2]
*/
void s000_baseline_eqFunction_1840(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1840};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[358]] /* dc.sup[2].X_in_internal[2] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1464]] /* dc.sup[2].X[2] PARAM */);
  threadData->lastEquationSolved = 1840;
}

/*
equation index: 1841
type: SIMPLE_ASSIGN
dc.sup[2].X_in_internal[1] = dc.sup[2].X[1]
*/
void s000_baseline_eqFunction_1841(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1841};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[357]] /* dc.sup[2].X_in_internal[1] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1463]] /* dc.sup[2].X[1] PARAM */);
  threadData->lastEquationSolved = 1841;
}

/*
equation index: 1842
type: SIMPLE_ASSIGN
dc.sup[1].X_in_internal[2] = dc.sup[1].X[2]
*/
void s000_baseline_eqFunction_1842(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1842};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[356]] /* dc.sup[1].X_in_internal[2] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1462]] /* dc.sup[1].X[2] PARAM */);
  threadData->lastEquationSolved = 1842;
}

/*
equation index: 1843
type: SIMPLE_ASSIGN
dc.sup[1].X_in_internal[1] = dc.sup[1].X[1]
*/
void s000_baseline_eqFunction_1843(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1843};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[355]] /* dc.sup[1].X_in_internal[1] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1461]] /* dc.sup[1].X[1] PARAM */);
  threadData->lastEquationSolved = 1843;
}

/*
equation index: 1844
type: SIMPLE_ASSIGN
$DER.dc.roo.air.cfd.uInt[7] = dc.roo.air.cfd.u[7]
*/
void s000_baseline_eqFunction_1844(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1844};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[52]] /* der(dc.roo.air.cfd.uInt[7]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[166]] /* dc.roo.air.cfd.u[7] variable */);
  threadData->lastEquationSolved = 1844;
}

/*
equation index: 1845
type: SIMPLE_ASSIGN
$DER.dc.roo.air.cfd.uInt[8] = dc.roo.air.cfd.u[8]
*/
void s000_baseline_eqFunction_1845(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1845};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[53]] /* der(dc.roo.air.cfd.uInt[8]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[167]] /* dc.roo.air.cfd.u[8] variable */);
  threadData->lastEquationSolved = 1845;
}

/*
equation index: 1846
type: SIMPLE_ASSIGN
$whenCondition6 = sample(1, dc.roo.air.cfd.startTime, dc.roo.air.cfd.samplePeriod)
*/
void s000_baseline_eqFunction_1846(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1846};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) = data->simulationInfo->samples[0];
  threadData->lastEquationSolved = 1846;
}

/*
equation index: 1847
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.firstTrigger = time <= dc.roo.air.cfd.startTime + 0.5 * dc.roo.air.cfd.samplePeriod;
end when;
*/
void s000_baseline_eqFunction_1847(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1847};
  modelica_boolean tmp0;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    tmp0 = LessEq(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[195]] /* dc.roo.air.cfd.startTime PARAM */) + (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[6]] /* dc.roo.air.cfd.firstTrigger DISCRETE */) = tmp0;
  }
  threadData->lastEquationSolved = 1847;
}

/*
equation index: 1848
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uWri[1] = if time < dc.roo.air.cfd.startTime + 0.1 * dc.roo.air.cfd.samplePeriod then pre(dc.roo.air.cfd.u[1]) else (dc.roo.air.cfd.uInt[1] - pre(dc.roo.air.cfd.uIntPre[1])) / dc.roo.air.cfd.samplePeriod;
end when;
*/
void s000_baseline_eqFunction_1848(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1848};
  modelica_boolean tmp1;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    tmp1 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[195]] /* dc.roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[496]] /* dc.roo.air.cfd.uWri[1] DISCRETE */) = (tmp1?(data->simulationInfo->realVarsPre[160] /* dc.roo.air.cfd.u[1] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* dc.roo.air.cfd.uInt[1] STATE(1,dc.roo.air.cfd.u[1]) */) - (data->simulationInfo->realVarsPre[451] /* dc.roo.air.cfd.uIntPre[1] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */),"dc.roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1848;
}

/*
equation index: 1849
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uWri[2] = if time < dc.roo.air.cfd.startTime + 0.1 * dc.roo.air.cfd.samplePeriod then pre(dc.roo.air.cfd.u[2]) else (dc.roo.air.cfd.uInt[2] - pre(dc.roo.air.cfd.uIntPre[2])) / dc.roo.air.cfd.samplePeriod;
end when;
*/
void s000_baseline_eqFunction_1849(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1849};
  modelica_boolean tmp2;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    tmp2 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[195]] /* dc.roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[497]] /* dc.roo.air.cfd.uWri[2] DISCRETE */) = (tmp2?(data->simulationInfo->realVarsPre[161] /* dc.roo.air.cfd.u[2] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* dc.roo.air.cfd.uInt[2] STATE(1,dc.roo.air.cfd.u[2]) */) - (data->simulationInfo->realVarsPre[452] /* dc.roo.air.cfd.uIntPre[2] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */),"dc.roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1849;
}

/*
equation index: 1850
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uWri[3] = if time < dc.roo.air.cfd.startTime + 0.1 * dc.roo.air.cfd.samplePeriod then pre(dc.roo.air.cfd.u[3]) else (dc.roo.air.cfd.uInt[3] - pre(dc.roo.air.cfd.uIntPre[3])) / dc.roo.air.cfd.samplePeriod;
end when;
*/
void s000_baseline_eqFunction_1850(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1850};
  modelica_boolean tmp3;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    tmp3 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[195]] /* dc.roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[498]] /* dc.roo.air.cfd.uWri[3] DISCRETE */) = (tmp3?(data->simulationInfo->realVarsPre[162] /* dc.roo.air.cfd.u[3] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* dc.roo.air.cfd.uInt[3] STATE(1,dc.roo.air.cfd.u[3]) */) - (data->simulationInfo->realVarsPre[453] /* dc.roo.air.cfd.uIntPre[3] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */),"dc.roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1850;
}

/*
equation index: 1851
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uWri[4] = if time < dc.roo.air.cfd.startTime + 0.1 * dc.roo.air.cfd.samplePeriod then pre(dc.roo.air.cfd.u[4]) else (dc.roo.air.cfd.uInt[4] - pre(dc.roo.air.cfd.uIntPre[4])) / dc.roo.air.cfd.samplePeriod;
end when;
*/
void s000_baseline_eqFunction_1851(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1851};
  modelica_boolean tmp4;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    tmp4 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[195]] /* dc.roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[499]] /* dc.roo.air.cfd.uWri[4] DISCRETE */) = (tmp4?(data->simulationInfo->realVarsPre[163] /* dc.roo.air.cfd.u[4] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* dc.roo.air.cfd.uInt[4] STATE(1,dc.roo.air.cfd.u[4]) */) - (data->simulationInfo->realVarsPre[454] /* dc.roo.air.cfd.uIntPre[4] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */),"dc.roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1851;
}

/*
equation index: 1852
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uWri[5] = if time < dc.roo.air.cfd.startTime + 0.1 * dc.roo.air.cfd.samplePeriod then pre(dc.roo.air.cfd.u[5]) else (dc.roo.air.cfd.uInt[5] - pre(dc.roo.air.cfd.uIntPre[5])) / dc.roo.air.cfd.samplePeriod;
end when;
*/
void s000_baseline_eqFunction_1852(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1852};
  modelica_boolean tmp5;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    tmp5 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[195]] /* dc.roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[500]] /* dc.roo.air.cfd.uWri[5] DISCRETE */) = (tmp5?(data->simulationInfo->realVarsPre[164] /* dc.roo.air.cfd.u[5] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* dc.roo.air.cfd.uInt[5] STATE(1,dc.roo.air.cfd.u[5]) */) - (data->simulationInfo->realVarsPre[455] /* dc.roo.air.cfd.uIntPre[5] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */),"dc.roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1852;
}

/*
equation index: 1853
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uWri[6] = if time < dc.roo.air.cfd.startTime + 0.1 * dc.roo.air.cfd.samplePeriod then pre(dc.roo.air.cfd.u[6]) else (dc.roo.air.cfd.uInt[6] - pre(dc.roo.air.cfd.uIntPre[6])) / dc.roo.air.cfd.samplePeriod;
end when;
*/
void s000_baseline_eqFunction_1853(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1853};
  modelica_boolean tmp6;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    tmp6 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[195]] /* dc.roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[501]] /* dc.roo.air.cfd.uWri[6] DISCRETE */) = (tmp6?(data->simulationInfo->realVarsPre[165] /* dc.roo.air.cfd.u[6] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* dc.roo.air.cfd.uInt[6] STATE(1,dc.roo.air.cfd.u[6]) */) - (data->simulationInfo->realVarsPre[456] /* dc.roo.air.cfd.uIntPre[6] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */),"dc.roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1853;
}

/*
equation index: 1854
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uWri[7] = if time < dc.roo.air.cfd.startTime + 0.1 * dc.roo.air.cfd.samplePeriod then dc.roo.air.cfd.u[7] else (dc.roo.air.cfd.uInt[7] - pre(dc.roo.air.cfd.uIntPre[7])) / dc.roo.air.cfd.samplePeriod;
end when;
*/
void s000_baseline_eqFunction_1854(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1854};
  modelica_boolean tmp7;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    tmp7 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[195]] /* dc.roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[502]] /* dc.roo.air.cfd.uWri[7] DISCRETE */) = (tmp7?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[166]] /* dc.roo.air.cfd.u[7] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* dc.roo.air.cfd.uInt[7] STATE(1,dc.roo.air.cfd.u[7]) */) - (data->simulationInfo->realVarsPre[457] /* dc.roo.air.cfd.uIntPre[7] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */),"dc.roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1854;
}

/*
equation index: 1855
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uWri[8] = if time < dc.roo.air.cfd.startTime + 0.1 * dc.roo.air.cfd.samplePeriod then dc.roo.air.cfd.u[8] else (dc.roo.air.cfd.uInt[8] - pre(dc.roo.air.cfd.uIntPre[8])) / dc.roo.air.cfd.samplePeriod;
end when;
*/
void s000_baseline_eqFunction_1855(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1855};
  modelica_boolean tmp8;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    tmp8 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[195]] /* dc.roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[503]] /* dc.roo.air.cfd.uWri[8] DISCRETE */) = (tmp8?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[167]] /* dc.roo.air.cfd.u[8] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* dc.roo.air.cfd.uInt[8] STATE(1,dc.roo.air.cfd.u[8]) */) - (data->simulationInfo->realVarsPre[458] /* dc.roo.air.cfd.uIntPre[8] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */),"dc.roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1855;
}

/*
equation index: 1856
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uWri[9] = if time < dc.roo.air.cfd.startTime + 0.1 * dc.roo.air.cfd.samplePeriod then pre(dc.roo.air.cfd.u[9]) else (dc.roo.air.cfd.uInt[9] - pre(dc.roo.air.cfd.uIntPre[9])) / dc.roo.air.cfd.samplePeriod;
end when;
*/
void s000_baseline_eqFunction_1856(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1856};
  modelica_boolean tmp9;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    tmp9 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[195]] /* dc.roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[504]] /* dc.roo.air.cfd.uWri[9] DISCRETE */) = (tmp9?(data->simulationInfo->realVarsPre[168] /* dc.roo.air.cfd.u[9] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* dc.roo.air.cfd.uInt[9] STATE(1,dc.roo.air.cfd.u[9]) */) - (data->simulationInfo->realVarsPre[459] /* dc.roo.air.cfd.uIntPre[9] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */),"dc.roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1856;
}

/*
equation index: 1857
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uWri[10] = if time < dc.roo.air.cfd.startTime + 0.1 * dc.roo.air.cfd.samplePeriod then pre(dc.roo.air.cfd.u[10]) else (dc.roo.air.cfd.uInt[10] - pre(dc.roo.air.cfd.uIntPre[10])) / dc.roo.air.cfd.samplePeriod;
end when;
*/
void s000_baseline_eqFunction_1857(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1857};
  modelica_boolean tmp10;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    tmp10 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[195]] /* dc.roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[505]] /* dc.roo.air.cfd.uWri[10] DISCRETE */) = (tmp10?(data->simulationInfo->realVarsPre[169] /* dc.roo.air.cfd.u[10] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* dc.roo.air.cfd.uInt[10] STATE(1,dc.roo.air.cfd.u[10]) */) - (data->simulationInfo->realVarsPre[460] /* dc.roo.air.cfd.uIntPre[10] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */),"dc.roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1857;
}

/*
equation index: 1858
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uWri[11] = if time < dc.roo.air.cfd.startTime + 0.1 * dc.roo.air.cfd.samplePeriod then pre(dc.roo.air.cfd.u[11]) else (dc.roo.air.cfd.uInt[11] - pre(dc.roo.air.cfd.uIntPre[11])) / dc.roo.air.cfd.samplePeriod;
end when;
*/
void s000_baseline_eqFunction_1858(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1858};
  modelica_boolean tmp11;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    tmp11 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[195]] /* dc.roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[506]] /* dc.roo.air.cfd.uWri[11] DISCRETE */) = (tmp11?(data->simulationInfo->realVarsPre[170] /* dc.roo.air.cfd.u[11] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* dc.roo.air.cfd.uInt[11] STATE(1,dc.roo.air.cfd.u[11]) */) - (data->simulationInfo->realVarsPre[461] /* dc.roo.air.cfd.uIntPre[11] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */),"dc.roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1858;
}

/*
equation index: 1859
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uWri[12] = if time < dc.roo.air.cfd.startTime + 0.1 * dc.roo.air.cfd.samplePeriod then pre(dc.roo.air.cfd.u[12]) else (dc.roo.air.cfd.uInt[12] - pre(dc.roo.air.cfd.uIntPre[12])) / dc.roo.air.cfd.samplePeriod;
end when;
*/
void s000_baseline_eqFunction_1859(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1859};
  modelica_boolean tmp12;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    tmp12 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[195]] /* dc.roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[507]] /* dc.roo.air.cfd.uWri[12] DISCRETE */) = (tmp12?(data->simulationInfo->realVarsPre[171] /* dc.roo.air.cfd.u[12] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* dc.roo.air.cfd.uInt[12] STATE(1,dc.roo.air.cfd.u[12]) */) - (data->simulationInfo->realVarsPre[462] /* dc.roo.air.cfd.uIntPre[12] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */),"dc.roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1859;
}

/*
equation index: 1860
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uWri[13] = if time < dc.roo.air.cfd.startTime + 0.1 * dc.roo.air.cfd.samplePeriod then pre(dc.roo.air.cfd.u[13]) else (dc.roo.air.cfd.uInt[13] - pre(dc.roo.air.cfd.uIntPre[13])) / dc.roo.air.cfd.samplePeriod;
end when;
*/
void s000_baseline_eqFunction_1860(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1860};
  modelica_boolean tmp13;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    tmp13 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[195]] /* dc.roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[508]] /* dc.roo.air.cfd.uWri[13] DISCRETE */) = (tmp13?(data->simulationInfo->realVarsPre[172] /* dc.roo.air.cfd.u[13] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* dc.roo.air.cfd.uInt[13] STATE(1,dc.roo.air.cfd.u[13]) */) - (data->simulationInfo->realVarsPre[463] /* dc.roo.air.cfd.uIntPre[13] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */),"dc.roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1860;
}

/*
equation index: 1861
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uWri[14] = if time < dc.roo.air.cfd.startTime + 0.1 * dc.roo.air.cfd.samplePeriod then pre(dc.roo.air.cfd.u[14]) else (dc.roo.air.cfd.uInt[14] - pre(dc.roo.air.cfd.uIntPre[14])) / dc.roo.air.cfd.samplePeriod;
end when;
*/
void s000_baseline_eqFunction_1861(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1861};
  modelica_boolean tmp14;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    tmp14 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[195]] /* dc.roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[509]] /* dc.roo.air.cfd.uWri[14] DISCRETE */) = (tmp14?(data->simulationInfo->realVarsPre[173] /* dc.roo.air.cfd.u[14] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* dc.roo.air.cfd.uInt[14] STATE(1,dc.roo.air.cfd.u[14]) */) - (data->simulationInfo->realVarsPre[464] /* dc.roo.air.cfd.uIntPre[14] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */),"dc.roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1861;
}

/*
equation index: 1862
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uWri[15] = if time < dc.roo.air.cfd.startTime + 0.1 * dc.roo.air.cfd.samplePeriod then pre(dc.roo.air.cfd.u[15]) else (dc.roo.air.cfd.uInt[15] - pre(dc.roo.air.cfd.uIntPre[15])) / dc.roo.air.cfd.samplePeriod;
end when;
*/
void s000_baseline_eqFunction_1862(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1862};
  modelica_boolean tmp15;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    tmp15 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[195]] /* dc.roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[510]] /* dc.roo.air.cfd.uWri[15] DISCRETE */) = (tmp15?(data->simulationInfo->realVarsPre[174] /* dc.roo.air.cfd.u[15] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* dc.roo.air.cfd.uInt[15] STATE(1,dc.roo.air.cfd.u[15]) */) - (data->simulationInfo->realVarsPre[465] /* dc.roo.air.cfd.uIntPre[15] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */),"dc.roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1862;
}

/*
equation index: 1863
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uWri[16] = if time < dc.roo.air.cfd.startTime + 0.1 * dc.roo.air.cfd.samplePeriod then pre(dc.roo.air.cfd.u[16]) else (dc.roo.air.cfd.uInt[16] - pre(dc.roo.air.cfd.uIntPre[16])) / dc.roo.air.cfd.samplePeriod;
end when;
*/
void s000_baseline_eqFunction_1863(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1863};
  modelica_boolean tmp16;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    tmp16 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[195]] /* dc.roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[511]] /* dc.roo.air.cfd.uWri[16] DISCRETE */) = (tmp16?(data->simulationInfo->realVarsPre[175] /* dc.roo.air.cfd.u[16] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* dc.roo.air.cfd.uInt[16] STATE(1,dc.roo.air.cfd.u[16]) */) - (data->simulationInfo->realVarsPre[466] /* dc.roo.air.cfd.uIntPre[16] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */),"dc.roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1863;
}

/*
equation index: 1864
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uWri[17] = if time < dc.roo.air.cfd.startTime + 0.1 * dc.roo.air.cfd.samplePeriod then pre(dc.roo.air.cfd.u[17]) else (dc.roo.air.cfd.uInt[17] - pre(dc.roo.air.cfd.uIntPre[17])) / dc.roo.air.cfd.samplePeriod;
end when;
*/
void s000_baseline_eqFunction_1864(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1864};
  modelica_boolean tmp17;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    tmp17 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[195]] /* dc.roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[512]] /* dc.roo.air.cfd.uWri[17] DISCRETE */) = (tmp17?(data->simulationInfo->realVarsPre[176] /* dc.roo.air.cfd.u[17] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* dc.roo.air.cfd.uInt[17] STATE(1,dc.roo.air.cfd.u[17]) */) - (data->simulationInfo->realVarsPre[467] /* dc.roo.air.cfd.uIntPre[17] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */),"dc.roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1864;
}

/*
equation index: 1865
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uWri[18] = if time < dc.roo.air.cfd.startTime + 0.1 * dc.roo.air.cfd.samplePeriod then pre(dc.roo.air.cfd.u[18]) else (dc.roo.air.cfd.uInt[18] - pre(dc.roo.air.cfd.uIntPre[18])) / dc.roo.air.cfd.samplePeriod;
end when;
*/
void s000_baseline_eqFunction_1865(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1865};
  modelica_boolean tmp18;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    tmp18 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[195]] /* dc.roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[513]] /* dc.roo.air.cfd.uWri[18] DISCRETE */) = (tmp18?(data->simulationInfo->realVarsPre[177] /* dc.roo.air.cfd.u[18] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* dc.roo.air.cfd.uInt[18] STATE(1,dc.roo.air.cfd.u[18]) */) - (data->simulationInfo->realVarsPre[468] /* dc.roo.air.cfd.uIntPre[18] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */),"dc.roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1865;
}

/*
equation index: 1866
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uWri[19] = if time < dc.roo.air.cfd.startTime + 0.1 * dc.roo.air.cfd.samplePeriod then pre(dc.roo.air.cfd.u[19]) else (dc.roo.air.cfd.uInt[19] - pre(dc.roo.air.cfd.uIntPre[19])) / dc.roo.air.cfd.samplePeriod;
end when;
*/
void s000_baseline_eqFunction_1866(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1866};
  modelica_boolean tmp19;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    tmp19 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[195]] /* dc.roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[514]] /* dc.roo.air.cfd.uWri[19] DISCRETE */) = (tmp19?(data->simulationInfo->realVarsPre[178] /* dc.roo.air.cfd.u[19] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* dc.roo.air.cfd.uInt[19] STATE(1,dc.roo.air.cfd.u[19]) */) - (data->simulationInfo->realVarsPre[469] /* dc.roo.air.cfd.uIntPre[19] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */),"dc.roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1866;
}

/*
equation index: 1867
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uWri[20] = if time < dc.roo.air.cfd.startTime + 0.1 * dc.roo.air.cfd.samplePeriod then pre(dc.roo.air.cfd.u[20]) else (dc.roo.air.cfd.uInt[20] - pre(dc.roo.air.cfd.uIntPre[20])) / dc.roo.air.cfd.samplePeriod;
end when;
*/
void s000_baseline_eqFunction_1867(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1867};
  modelica_boolean tmp20;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    tmp20 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[195]] /* dc.roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[515]] /* dc.roo.air.cfd.uWri[20] DISCRETE */) = (tmp20?(data->simulationInfo->realVarsPre[179] /* dc.roo.air.cfd.u[20] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* dc.roo.air.cfd.uInt[20] STATE(1,dc.roo.air.cfd.u[20]) */) - (data->simulationInfo->realVarsPre[470] /* dc.roo.air.cfd.uIntPre[20] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */),"dc.roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1867;
}

/*
equation index: 1868
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uWri[21] = if time < dc.roo.air.cfd.startTime + 0.1 * dc.roo.air.cfd.samplePeriod then pre(dc.roo.air.cfd.u[21]) else (dc.roo.air.cfd.uInt[21] - pre(dc.roo.air.cfd.uIntPre[21])) / dc.roo.air.cfd.samplePeriod;
end when;
*/
void s000_baseline_eqFunction_1868(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1868};
  modelica_boolean tmp21;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    tmp21 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[195]] /* dc.roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[516]] /* dc.roo.air.cfd.uWri[21] DISCRETE */) = (tmp21?(data->simulationInfo->realVarsPre[180] /* dc.roo.air.cfd.u[21] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* dc.roo.air.cfd.uInt[21] STATE(1,dc.roo.air.cfd.u[21]) */) - (data->simulationInfo->realVarsPre[471] /* dc.roo.air.cfd.uIntPre[21] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */),"dc.roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1868;
}

/*
equation index: 1869
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uWri[22] = if time < dc.roo.air.cfd.startTime + 0.1 * dc.roo.air.cfd.samplePeriod then pre(dc.roo.air.cfd.u[22]) else (dc.roo.air.cfd.uInt[22] - pre(dc.roo.air.cfd.uIntPre[22])) / dc.roo.air.cfd.samplePeriod;
end when;
*/
void s000_baseline_eqFunction_1869(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1869};
  modelica_boolean tmp22;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    tmp22 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[195]] /* dc.roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[517]] /* dc.roo.air.cfd.uWri[22] DISCRETE */) = (tmp22?(data->simulationInfo->realVarsPre[181] /* dc.roo.air.cfd.u[22] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* dc.roo.air.cfd.uInt[22] STATE(1,dc.roo.air.cfd.u[22]) */) - (data->simulationInfo->realVarsPre[472] /* dc.roo.air.cfd.uIntPre[22] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */),"dc.roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1869;
}

/*
equation index: 1870
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uWri[23] = if time < dc.roo.air.cfd.startTime + 0.1 * dc.roo.air.cfd.samplePeriod then pre(dc.roo.air.cfd.u[23]) else (dc.roo.air.cfd.uInt[23] - pre(dc.roo.air.cfd.uIntPre[23])) / dc.roo.air.cfd.samplePeriod;
end when;
*/
void s000_baseline_eqFunction_1870(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1870};
  modelica_boolean tmp23;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    tmp23 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[195]] /* dc.roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[518]] /* dc.roo.air.cfd.uWri[23] DISCRETE */) = (tmp23?(data->simulationInfo->realVarsPre[182] /* dc.roo.air.cfd.u[23] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* dc.roo.air.cfd.uInt[23] STATE(1,dc.roo.air.cfd.u[23]) */) - (data->simulationInfo->realVarsPre[473] /* dc.roo.air.cfd.uIntPre[23] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */),"dc.roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1870;
}

/*
equation index: 1871
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uWri[24] = if time < dc.roo.air.cfd.startTime + 0.1 * dc.roo.air.cfd.samplePeriod then pre(dc.roo.air.cfd.u[24]) else (dc.roo.air.cfd.uInt[24] - pre(dc.roo.air.cfd.uIntPre[24])) / dc.roo.air.cfd.samplePeriod;
end when;
*/
void s000_baseline_eqFunction_1871(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1871};
  modelica_boolean tmp24;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    tmp24 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[195]] /* dc.roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[519]] /* dc.roo.air.cfd.uWri[24] DISCRETE */) = (tmp24?(data->simulationInfo->realVarsPre[183] /* dc.roo.air.cfd.u[24] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* dc.roo.air.cfd.uInt[24] STATE(1,dc.roo.air.cfd.u[24]) */) - (data->simulationInfo->realVarsPre[474] /* dc.roo.air.cfd.uIntPre[24] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */),"dc.roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1871;
}

/*
equation index: 1872
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uWri[25] = if time < dc.roo.air.cfd.startTime + 0.1 * dc.roo.air.cfd.samplePeriod then pre(dc.roo.air.cfd.u[25]) else (dc.roo.air.cfd.uInt[25] - pre(dc.roo.air.cfd.uIntPre[25])) / dc.roo.air.cfd.samplePeriod;
end when;
*/
void s000_baseline_eqFunction_1872(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1872};
  modelica_boolean tmp25;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    tmp25 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[195]] /* dc.roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[520]] /* dc.roo.air.cfd.uWri[25] DISCRETE */) = (tmp25?(data->simulationInfo->realVarsPre[184] /* dc.roo.air.cfd.u[25] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* dc.roo.air.cfd.uInt[25] STATE(1,dc.roo.air.cfd.u[25]) */) - (data->simulationInfo->realVarsPre[475] /* dc.roo.air.cfd.uIntPre[25] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */),"dc.roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1872;
}

/*
equation index: 1873
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uWri[26] = if time < dc.roo.air.cfd.startTime + 0.1 * dc.roo.air.cfd.samplePeriod then pre(dc.roo.air.cfd.u[26]) else (dc.roo.air.cfd.uInt[26] - pre(dc.roo.air.cfd.uIntPre[26])) / dc.roo.air.cfd.samplePeriod;
end when;
*/
void s000_baseline_eqFunction_1873(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1873};
  modelica_boolean tmp26;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    tmp26 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[195]] /* dc.roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[521]] /* dc.roo.air.cfd.uWri[26] DISCRETE */) = (tmp26?(data->simulationInfo->realVarsPre[185] /* dc.roo.air.cfd.u[26] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* dc.roo.air.cfd.uInt[26] STATE(1,dc.roo.air.cfd.u[26]) */) - (data->simulationInfo->realVarsPre[476] /* dc.roo.air.cfd.uIntPre[26] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */),"dc.roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1873;
}

/*
equation index: 1874
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uWri[27] = if time < dc.roo.air.cfd.startTime + 0.1 * dc.roo.air.cfd.samplePeriod then pre(dc.roo.air.cfd.u[27]) else (dc.roo.air.cfd.uInt[27] - pre(dc.roo.air.cfd.uIntPre[27])) / dc.roo.air.cfd.samplePeriod;
end when;
*/
void s000_baseline_eqFunction_1874(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1874};
  modelica_boolean tmp27;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    tmp27 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[195]] /* dc.roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[522]] /* dc.roo.air.cfd.uWri[27] DISCRETE */) = (tmp27?(data->simulationInfo->realVarsPre[186] /* dc.roo.air.cfd.u[27] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* dc.roo.air.cfd.uInt[27] STATE(1,dc.roo.air.cfd.u[27]) */) - (data->simulationInfo->realVarsPre[477] /* dc.roo.air.cfd.uIntPre[27] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */),"dc.roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1874;
}

/*
equation index: 1875
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uWri[28] = if time < dc.roo.air.cfd.startTime + 0.1 * dc.roo.air.cfd.samplePeriod then pre(dc.roo.air.cfd.u[28]) else (dc.roo.air.cfd.uInt[28] - pre(dc.roo.air.cfd.uIntPre[28])) / dc.roo.air.cfd.samplePeriod;
end when;
*/
void s000_baseline_eqFunction_1875(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1875};
  modelica_boolean tmp28;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    tmp28 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[195]] /* dc.roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[523]] /* dc.roo.air.cfd.uWri[28] DISCRETE */) = (tmp28?(data->simulationInfo->realVarsPre[187] /* dc.roo.air.cfd.u[28] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* dc.roo.air.cfd.uInt[28] STATE(1,dc.roo.air.cfd.u[28]) */) - (data->simulationInfo->realVarsPre[478] /* dc.roo.air.cfd.uIntPre[28] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */),"dc.roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1875;
}

/*
equation index: 1876
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uWri[29] = if time < dc.roo.air.cfd.startTime + 0.1 * dc.roo.air.cfd.samplePeriod then pre(dc.roo.air.cfd.u[29]) else (dc.roo.air.cfd.uInt[29] - pre(dc.roo.air.cfd.uIntPre[29])) / dc.roo.air.cfd.samplePeriod;
end when;
*/
void s000_baseline_eqFunction_1876(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1876};
  modelica_boolean tmp29;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    tmp29 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[195]] /* dc.roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[524]] /* dc.roo.air.cfd.uWri[29] DISCRETE */) = (tmp29?(data->simulationInfo->realVarsPre[188] /* dc.roo.air.cfd.u[29] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[28]] /* dc.roo.air.cfd.uInt[29] STATE(1,dc.roo.air.cfd.u[29]) */) - (data->simulationInfo->realVarsPre[479] /* dc.roo.air.cfd.uIntPre[29] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */),"dc.roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1876;
}

/*
equation index: 1877
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uWri[30] = if time < dc.roo.air.cfd.startTime + 0.1 * dc.roo.air.cfd.samplePeriod then pre(dc.roo.air.cfd.u[30]) else (dc.roo.air.cfd.uInt[30] - pre(dc.roo.air.cfd.uIntPre[30])) / dc.roo.air.cfd.samplePeriod;
end when;
*/
void s000_baseline_eqFunction_1877(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1877};
  modelica_boolean tmp30;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    tmp30 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[195]] /* dc.roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[525]] /* dc.roo.air.cfd.uWri[30] DISCRETE */) = (tmp30?(data->simulationInfo->realVarsPre[189] /* dc.roo.air.cfd.u[30] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[29]] /* dc.roo.air.cfd.uInt[30] STATE(1,dc.roo.air.cfd.u[30]) */) - (data->simulationInfo->realVarsPre[480] /* dc.roo.air.cfd.uIntPre[30] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */),"dc.roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1877;
}

/*
equation index: 1878
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uWri[31] = if time < dc.roo.air.cfd.startTime + 0.1 * dc.roo.air.cfd.samplePeriod then pre(dc.roo.air.cfd.u[31]) else (dc.roo.air.cfd.uInt[31] - pre(dc.roo.air.cfd.uIntPre[31])) / dc.roo.air.cfd.samplePeriod;
end when;
*/
void s000_baseline_eqFunction_1878(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1878};
  modelica_boolean tmp31;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    tmp31 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[195]] /* dc.roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[526]] /* dc.roo.air.cfd.uWri[31] DISCRETE */) = (tmp31?(data->simulationInfo->realVarsPre[190] /* dc.roo.air.cfd.u[31] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[30]] /* dc.roo.air.cfd.uInt[31] STATE(1,dc.roo.air.cfd.u[31]) */) - (data->simulationInfo->realVarsPre[481] /* dc.roo.air.cfd.uIntPre[31] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */),"dc.roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1878;
}

/*
equation index: 1879
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uWri[32] = if time < dc.roo.air.cfd.startTime + 0.1 * dc.roo.air.cfd.samplePeriod then pre(dc.roo.air.cfd.u[32]) else (dc.roo.air.cfd.uInt[32] - pre(dc.roo.air.cfd.uIntPre[32])) / dc.roo.air.cfd.samplePeriod;
end when;
*/
void s000_baseline_eqFunction_1879(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1879};
  modelica_boolean tmp32;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    tmp32 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[195]] /* dc.roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[527]] /* dc.roo.air.cfd.uWri[32] DISCRETE */) = (tmp32?(data->simulationInfo->realVarsPre[191] /* dc.roo.air.cfd.u[32] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* dc.roo.air.cfd.uInt[32] STATE(1,dc.roo.air.cfd.u[32]) */) - (data->simulationInfo->realVarsPre[482] /* dc.roo.air.cfd.uIntPre[32] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */),"dc.roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1879;
}

/*
equation index: 1880
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uWri[33] = if time < dc.roo.air.cfd.startTime + 0.1 * dc.roo.air.cfd.samplePeriod then pre(dc.roo.air.cfd.u[33]) else (dc.roo.air.cfd.uInt[33] - pre(dc.roo.air.cfd.uIntPre[33])) / dc.roo.air.cfd.samplePeriod;
end when;
*/
void s000_baseline_eqFunction_1880(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1880};
  modelica_boolean tmp33;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    tmp33 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[195]] /* dc.roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[528]] /* dc.roo.air.cfd.uWri[33] DISCRETE */) = (tmp33?(data->simulationInfo->realVarsPre[192] /* dc.roo.air.cfd.u[33] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[32]] /* dc.roo.air.cfd.uInt[33] STATE(1,dc.roo.air.cfd.u[33]) */) - (data->simulationInfo->realVarsPre[483] /* dc.roo.air.cfd.uIntPre[33] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */),"dc.roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1880;
}

/*
equation index: 1881
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uWri[34] = if time < dc.roo.air.cfd.startTime + 0.1 * dc.roo.air.cfd.samplePeriod then pre(dc.roo.air.cfd.u[34]) else (dc.roo.air.cfd.uInt[34] - pre(dc.roo.air.cfd.uIntPre[34])) / dc.roo.air.cfd.samplePeriod;
end when;
*/
void s000_baseline_eqFunction_1881(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1881};
  modelica_boolean tmp34;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    tmp34 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[195]] /* dc.roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[529]] /* dc.roo.air.cfd.uWri[34] DISCRETE */) = (tmp34?(data->simulationInfo->realVarsPre[193] /* dc.roo.air.cfd.u[34] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[33]] /* dc.roo.air.cfd.uInt[34] STATE(1,dc.roo.air.cfd.u[34]) */) - (data->simulationInfo->realVarsPre[484] /* dc.roo.air.cfd.uIntPre[34] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */),"dc.roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1881;
}

/*
equation index: 1882
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uWri[35] = if time < dc.roo.air.cfd.startTime + 0.1 * dc.roo.air.cfd.samplePeriod then pre(dc.roo.air.cfd.u[35]) else (dc.roo.air.cfd.uInt[35] - pre(dc.roo.air.cfd.uIntPre[35])) / dc.roo.air.cfd.samplePeriod;
end when;
*/
void s000_baseline_eqFunction_1882(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1882};
  modelica_boolean tmp35;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    tmp35 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[195]] /* dc.roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[530]] /* dc.roo.air.cfd.uWri[35] DISCRETE */) = (tmp35?(data->simulationInfo->realVarsPre[194] /* dc.roo.air.cfd.u[35] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[34]] /* dc.roo.air.cfd.uInt[35] STATE(1,dc.roo.air.cfd.u[35]) */) - (data->simulationInfo->realVarsPre[485] /* dc.roo.air.cfd.uIntPre[35] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */),"dc.roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1882;
}

/*
equation index: 1883
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uWri[36] = if time < dc.roo.air.cfd.startTime + 0.1 * dc.roo.air.cfd.samplePeriod then pre(dc.roo.air.cfd.u[36]) else (dc.roo.air.cfd.uInt[36] - pre(dc.roo.air.cfd.uIntPre[36])) / dc.roo.air.cfd.samplePeriod;
end when;
*/
void s000_baseline_eqFunction_1883(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1883};
  modelica_boolean tmp36;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    tmp36 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[195]] /* dc.roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[531]] /* dc.roo.air.cfd.uWri[36] DISCRETE */) = (tmp36?(data->simulationInfo->realVarsPre[195] /* dc.roo.air.cfd.u[36] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* dc.roo.air.cfd.uInt[36] STATE(1,dc.roo.air.cfd.u[36]) */) - (data->simulationInfo->realVarsPre[486] /* dc.roo.air.cfd.uIntPre[36] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */),"dc.roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1883;
}

/*
equation index: 1884
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uWri[37] = if time < dc.roo.air.cfd.startTime + 0.1 * dc.roo.air.cfd.samplePeriod then pre(dc.roo.air.cfd.u[37]) else (dc.roo.air.cfd.uInt[37] - pre(dc.roo.air.cfd.uIntPre[37])) / dc.roo.air.cfd.samplePeriod;
end when;
*/
void s000_baseline_eqFunction_1884(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1884};
  modelica_boolean tmp37;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    tmp37 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[195]] /* dc.roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[532]] /* dc.roo.air.cfd.uWri[37] DISCRETE */) = (tmp37?(data->simulationInfo->realVarsPre[196] /* dc.roo.air.cfd.u[37] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[36]] /* dc.roo.air.cfd.uInt[37] STATE(1,dc.roo.air.cfd.u[37]) */) - (data->simulationInfo->realVarsPre[487] /* dc.roo.air.cfd.uIntPre[37] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */),"dc.roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1884;
}

/*
equation index: 1885
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uWri[38] = if time < dc.roo.air.cfd.startTime + 0.1 * dc.roo.air.cfd.samplePeriod then pre(dc.roo.air.cfd.u[38]) else (dc.roo.air.cfd.uInt[38] - pre(dc.roo.air.cfd.uIntPre[38])) / dc.roo.air.cfd.samplePeriod;
end when;
*/
void s000_baseline_eqFunction_1885(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1885};
  modelica_boolean tmp38;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    tmp38 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[195]] /* dc.roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[533]] /* dc.roo.air.cfd.uWri[38] DISCRETE */) = (tmp38?(data->simulationInfo->realVarsPre[197] /* dc.roo.air.cfd.u[38] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[37]] /* dc.roo.air.cfd.uInt[38] STATE(1,dc.roo.air.cfd.u[38]) */) - (data->simulationInfo->realVarsPre[488] /* dc.roo.air.cfd.uIntPre[38] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */),"dc.roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1885;
}

/*
equation index: 1886
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uWri[39] = if time < dc.roo.air.cfd.startTime + 0.1 * dc.roo.air.cfd.samplePeriod then pre(dc.roo.air.cfd.u[39]) else (dc.roo.air.cfd.uInt[39] - pre(dc.roo.air.cfd.uIntPre[39])) / dc.roo.air.cfd.samplePeriod;
end when;
*/
void s000_baseline_eqFunction_1886(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1886};
  modelica_boolean tmp39;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    tmp39 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[195]] /* dc.roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[534]] /* dc.roo.air.cfd.uWri[39] DISCRETE */) = (tmp39?(data->simulationInfo->realVarsPre[198] /* dc.roo.air.cfd.u[39] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[38]] /* dc.roo.air.cfd.uInt[39] STATE(1,dc.roo.air.cfd.u[39]) */) - (data->simulationInfo->realVarsPre[489] /* dc.roo.air.cfd.uIntPre[39] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */),"dc.roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1886;
}

/*
equation index: 1887
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uWri[40] = if time < dc.roo.air.cfd.startTime + 0.1 * dc.roo.air.cfd.samplePeriod then pre(dc.roo.air.cfd.u[40]) else (dc.roo.air.cfd.uInt[40] - pre(dc.roo.air.cfd.uIntPre[40])) / dc.roo.air.cfd.samplePeriod;
end when;
*/
void s000_baseline_eqFunction_1887(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1887};
  modelica_boolean tmp40;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    tmp40 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[195]] /* dc.roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[535]] /* dc.roo.air.cfd.uWri[40] DISCRETE */) = (tmp40?(data->simulationInfo->realVarsPre[199] /* dc.roo.air.cfd.u[40] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[39]] /* dc.roo.air.cfd.uInt[40] STATE(1,dc.roo.air.cfd.u[40]) */) - (data->simulationInfo->realVarsPre[490] /* dc.roo.air.cfd.uIntPre[40] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */),"dc.roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1887;
}

/*
equation index: 1888
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uWri[41] = if time < dc.roo.air.cfd.startTime + 0.1 * dc.roo.air.cfd.samplePeriod then pre(dc.roo.air.cfd.u[41]) else (dc.roo.air.cfd.uInt[41] - pre(dc.roo.air.cfd.uIntPre[41])) / dc.roo.air.cfd.samplePeriod;
end when;
*/
void s000_baseline_eqFunction_1888(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1888};
  modelica_boolean tmp41;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    tmp41 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[195]] /* dc.roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[536]] /* dc.roo.air.cfd.uWri[41] DISCRETE */) = (tmp41?(data->simulationInfo->realVarsPre[200] /* dc.roo.air.cfd.u[41] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[40]] /* dc.roo.air.cfd.uInt[41] STATE(1,dc.roo.air.cfd.u[41]) */) - (data->simulationInfo->realVarsPre[491] /* dc.roo.air.cfd.uIntPre[41] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */),"dc.roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1888;
}

/*
equation index: 1889
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uWri[42] = if time < dc.roo.air.cfd.startTime + 0.1 * dc.roo.air.cfd.samplePeriod then pre(dc.roo.air.cfd.u[42]) else (dc.roo.air.cfd.uInt[42] - pre(dc.roo.air.cfd.uIntPre[42])) / dc.roo.air.cfd.samplePeriod;
end when;
*/
void s000_baseline_eqFunction_1889(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1889};
  modelica_boolean tmp42;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    tmp42 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[195]] /* dc.roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[537]] /* dc.roo.air.cfd.uWri[42] DISCRETE */) = (tmp42?(data->simulationInfo->realVarsPre[201] /* dc.roo.air.cfd.u[42] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[41]] /* dc.roo.air.cfd.uInt[42] STATE(1,dc.roo.air.cfd.u[42]) */) - (data->simulationInfo->realVarsPre[492] /* dc.roo.air.cfd.uIntPre[42] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */),"dc.roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1889;
}

/*
equation index: 1890
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uWri[43] = if time < dc.roo.air.cfd.startTime + 0.1 * dc.roo.air.cfd.samplePeriod then pre(dc.roo.air.cfd.u[43]) else (dc.roo.air.cfd.uInt[43] - pre(dc.roo.air.cfd.uIntPre[43])) / dc.roo.air.cfd.samplePeriod;
end when;
*/
void s000_baseline_eqFunction_1890(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1890};
  modelica_boolean tmp43;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    tmp43 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[195]] /* dc.roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[538]] /* dc.roo.air.cfd.uWri[43] DISCRETE */) = (tmp43?(data->simulationInfo->realVarsPre[202] /* dc.roo.air.cfd.u[43] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[42]] /* dc.roo.air.cfd.uInt[43] STATE(1,dc.roo.air.cfd.u[43]) */) - (data->simulationInfo->realVarsPre[493] /* dc.roo.air.cfd.uIntPre[43] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */),"dc.roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1890;
}

/*
equation index: 1891
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uWri[44] = if time < dc.roo.air.cfd.startTime + 0.1 * dc.roo.air.cfd.samplePeriod then pre(dc.roo.air.cfd.u[44]) else (dc.roo.air.cfd.uInt[44] - pre(dc.roo.air.cfd.uIntPre[44])) / dc.roo.air.cfd.samplePeriod;
end when;
*/
void s000_baseline_eqFunction_1891(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1891};
  modelica_boolean tmp44;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    tmp44 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[195]] /* dc.roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[539]] /* dc.roo.air.cfd.uWri[44] DISCRETE */) = (tmp44?(data->simulationInfo->realVarsPre[203] /* dc.roo.air.cfd.u[44] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[43]] /* dc.roo.air.cfd.uInt[44] STATE(1,dc.roo.air.cfd.u[44]) */) - (data->simulationInfo->realVarsPre[494] /* dc.roo.air.cfd.uIntPre[44] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */),"dc.roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1891;
}

/*
equation index: 1892
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uWri[45] = if time < dc.roo.air.cfd.startTime + 0.1 * dc.roo.air.cfd.samplePeriod then pre(dc.roo.air.cfd.u[45]) else (dc.roo.air.cfd.uInt[45] - pre(dc.roo.air.cfd.uIntPre[45])) / dc.roo.air.cfd.samplePeriod;
end when;
*/
void s000_baseline_eqFunction_1892(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1892};
  modelica_boolean tmp45;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    tmp45 = Less(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[195]] /* dc.roo.air.cfd.startTime PARAM */) + (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */)));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[540]] /* dc.roo.air.cfd.uWri[45] DISCRETE */) = (tmp45?(data->simulationInfo->realVarsPre[204] /* dc.roo.air.cfd.u[45] variable */):DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[44]] /* dc.roo.air.cfd.uInt[45] STATE(1,dc.roo.air.cfd.u[45]) */) - (data->simulationInfo->realVarsPre[495] /* dc.roo.air.cfd.uIntPre[45] DISCRETE */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */),"dc.roo.air.cfd.samplePeriod",equationIndexes));
  }
  threadData->lastEquationSolved = 1892;
}

/*
equation index: 1893
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uIntPre[1] = dc.roo.air.cfd.uInt[1];
end when;
*/
void s000_baseline_eqFunction_1893(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1893};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[451]] /* dc.roo.air.cfd.uIntPre[1] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* dc.roo.air.cfd.uInt[1] STATE(1,dc.roo.air.cfd.u[1]) */);
  }
  threadData->lastEquationSolved = 1893;
}

/*
equation index: 1894
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uIntPre[2] = dc.roo.air.cfd.uInt[2];
end when;
*/
void s000_baseline_eqFunction_1894(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1894};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[452]] /* dc.roo.air.cfd.uIntPre[2] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* dc.roo.air.cfd.uInt[2] STATE(1,dc.roo.air.cfd.u[2]) */);
  }
  threadData->lastEquationSolved = 1894;
}

/*
equation index: 1895
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uIntPre[3] = dc.roo.air.cfd.uInt[3];
end when;
*/
void s000_baseline_eqFunction_1895(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1895};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[453]] /* dc.roo.air.cfd.uIntPre[3] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* dc.roo.air.cfd.uInt[3] STATE(1,dc.roo.air.cfd.u[3]) */);
  }
  threadData->lastEquationSolved = 1895;
}

/*
equation index: 1896
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uIntPre[4] = dc.roo.air.cfd.uInt[4];
end when;
*/
void s000_baseline_eqFunction_1896(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1896};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[454]] /* dc.roo.air.cfd.uIntPre[4] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* dc.roo.air.cfd.uInt[4] STATE(1,dc.roo.air.cfd.u[4]) */);
  }
  threadData->lastEquationSolved = 1896;
}

/*
equation index: 1897
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uIntPre[5] = dc.roo.air.cfd.uInt[5];
end when;
*/
void s000_baseline_eqFunction_1897(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1897};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[455]] /* dc.roo.air.cfd.uIntPre[5] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* dc.roo.air.cfd.uInt[5] STATE(1,dc.roo.air.cfd.u[5]) */);
  }
  threadData->lastEquationSolved = 1897;
}

/*
equation index: 1898
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uIntPre[6] = dc.roo.air.cfd.uInt[6];
end when;
*/
void s000_baseline_eqFunction_1898(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1898};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[456]] /* dc.roo.air.cfd.uIntPre[6] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* dc.roo.air.cfd.uInt[6] STATE(1,dc.roo.air.cfd.u[6]) */);
  }
  threadData->lastEquationSolved = 1898;
}

/*
equation index: 1899
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uIntPre[7] = dc.roo.air.cfd.uInt[7];
end when;
*/
void s000_baseline_eqFunction_1899(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1899};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[457]] /* dc.roo.air.cfd.uIntPre[7] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* dc.roo.air.cfd.uInt[7] STATE(1,dc.roo.air.cfd.u[7]) */);
  }
  threadData->lastEquationSolved = 1899;
}

/*
equation index: 1900
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uIntPre[8] = dc.roo.air.cfd.uInt[8];
end when;
*/
void s000_baseline_eqFunction_1900(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1900};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[458]] /* dc.roo.air.cfd.uIntPre[8] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* dc.roo.air.cfd.uInt[8] STATE(1,dc.roo.air.cfd.u[8]) */);
  }
  threadData->lastEquationSolved = 1900;
}

/*
equation index: 1901
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uIntPre[9] = dc.roo.air.cfd.uInt[9];
end when;
*/
void s000_baseline_eqFunction_1901(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1901};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[459]] /* dc.roo.air.cfd.uIntPre[9] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* dc.roo.air.cfd.uInt[9] STATE(1,dc.roo.air.cfd.u[9]) */);
  }
  threadData->lastEquationSolved = 1901;
}

/*
equation index: 1902
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uIntPre[10] = dc.roo.air.cfd.uInt[10];
end when;
*/
void s000_baseline_eqFunction_1902(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1902};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[460]] /* dc.roo.air.cfd.uIntPre[10] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* dc.roo.air.cfd.uInt[10] STATE(1,dc.roo.air.cfd.u[10]) */);
  }
  threadData->lastEquationSolved = 1902;
}

/*
equation index: 1903
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uIntPre[11] = dc.roo.air.cfd.uInt[11];
end when;
*/
void s000_baseline_eqFunction_1903(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1903};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[461]] /* dc.roo.air.cfd.uIntPre[11] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* dc.roo.air.cfd.uInt[11] STATE(1,dc.roo.air.cfd.u[11]) */);
  }
  threadData->lastEquationSolved = 1903;
}

/*
equation index: 1904
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uIntPre[12] = dc.roo.air.cfd.uInt[12];
end when;
*/
void s000_baseline_eqFunction_1904(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1904};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[462]] /* dc.roo.air.cfd.uIntPre[12] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* dc.roo.air.cfd.uInt[12] STATE(1,dc.roo.air.cfd.u[12]) */);
  }
  threadData->lastEquationSolved = 1904;
}

/*
equation index: 1905
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uIntPre[13] = dc.roo.air.cfd.uInt[13];
end when;
*/
void s000_baseline_eqFunction_1905(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1905};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[463]] /* dc.roo.air.cfd.uIntPre[13] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* dc.roo.air.cfd.uInt[13] STATE(1,dc.roo.air.cfd.u[13]) */);
  }
  threadData->lastEquationSolved = 1905;
}

/*
equation index: 1906
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uIntPre[14] = dc.roo.air.cfd.uInt[14];
end when;
*/
void s000_baseline_eqFunction_1906(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1906};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[464]] /* dc.roo.air.cfd.uIntPre[14] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* dc.roo.air.cfd.uInt[14] STATE(1,dc.roo.air.cfd.u[14]) */);
  }
  threadData->lastEquationSolved = 1906;
}

/*
equation index: 1907
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uIntPre[15] = dc.roo.air.cfd.uInt[15];
end when;
*/
void s000_baseline_eqFunction_1907(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1907};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[465]] /* dc.roo.air.cfd.uIntPre[15] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* dc.roo.air.cfd.uInt[15] STATE(1,dc.roo.air.cfd.u[15]) */);
  }
  threadData->lastEquationSolved = 1907;
}

/*
equation index: 1908
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uIntPre[16] = dc.roo.air.cfd.uInt[16];
end when;
*/
void s000_baseline_eqFunction_1908(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1908};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[466]] /* dc.roo.air.cfd.uIntPre[16] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* dc.roo.air.cfd.uInt[16] STATE(1,dc.roo.air.cfd.u[16]) */);
  }
  threadData->lastEquationSolved = 1908;
}

/*
equation index: 1909
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uIntPre[17] = dc.roo.air.cfd.uInt[17];
end when;
*/
void s000_baseline_eqFunction_1909(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1909};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[467]] /* dc.roo.air.cfd.uIntPre[17] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* dc.roo.air.cfd.uInt[17] STATE(1,dc.roo.air.cfd.u[17]) */);
  }
  threadData->lastEquationSolved = 1909;
}

/*
equation index: 1910
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uIntPre[18] = dc.roo.air.cfd.uInt[18];
end when;
*/
void s000_baseline_eqFunction_1910(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1910};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[468]] /* dc.roo.air.cfd.uIntPre[18] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* dc.roo.air.cfd.uInt[18] STATE(1,dc.roo.air.cfd.u[18]) */);
  }
  threadData->lastEquationSolved = 1910;
}

/*
equation index: 1911
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uIntPre[19] = dc.roo.air.cfd.uInt[19];
end when;
*/
void s000_baseline_eqFunction_1911(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1911};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[469]] /* dc.roo.air.cfd.uIntPre[19] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* dc.roo.air.cfd.uInt[19] STATE(1,dc.roo.air.cfd.u[19]) */);
  }
  threadData->lastEquationSolved = 1911;
}

/*
equation index: 1912
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uIntPre[20] = dc.roo.air.cfd.uInt[20];
end when;
*/
void s000_baseline_eqFunction_1912(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1912};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[470]] /* dc.roo.air.cfd.uIntPre[20] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* dc.roo.air.cfd.uInt[20] STATE(1,dc.roo.air.cfd.u[20]) */);
  }
  threadData->lastEquationSolved = 1912;
}

/*
equation index: 1913
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uIntPre[21] = dc.roo.air.cfd.uInt[21];
end when;
*/
void s000_baseline_eqFunction_1913(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1913};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[471]] /* dc.roo.air.cfd.uIntPre[21] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* dc.roo.air.cfd.uInt[21] STATE(1,dc.roo.air.cfd.u[21]) */);
  }
  threadData->lastEquationSolved = 1913;
}

/*
equation index: 1914
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uIntPre[22] = dc.roo.air.cfd.uInt[22];
end when;
*/
void s000_baseline_eqFunction_1914(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1914};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[472]] /* dc.roo.air.cfd.uIntPre[22] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* dc.roo.air.cfd.uInt[22] STATE(1,dc.roo.air.cfd.u[22]) */);
  }
  threadData->lastEquationSolved = 1914;
}

/*
equation index: 1915
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uIntPre[23] = dc.roo.air.cfd.uInt[23];
end when;
*/
void s000_baseline_eqFunction_1915(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1915};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[473]] /* dc.roo.air.cfd.uIntPre[23] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* dc.roo.air.cfd.uInt[23] STATE(1,dc.roo.air.cfd.u[23]) */);
  }
  threadData->lastEquationSolved = 1915;
}

/*
equation index: 1916
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uIntPre[24] = dc.roo.air.cfd.uInt[24];
end when;
*/
void s000_baseline_eqFunction_1916(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1916};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[474]] /* dc.roo.air.cfd.uIntPre[24] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* dc.roo.air.cfd.uInt[24] STATE(1,dc.roo.air.cfd.u[24]) */);
  }
  threadData->lastEquationSolved = 1916;
}

/*
equation index: 1917
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uIntPre[25] = dc.roo.air.cfd.uInt[25];
end when;
*/
void s000_baseline_eqFunction_1917(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1917};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[475]] /* dc.roo.air.cfd.uIntPre[25] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* dc.roo.air.cfd.uInt[25] STATE(1,dc.roo.air.cfd.u[25]) */);
  }
  threadData->lastEquationSolved = 1917;
}

/*
equation index: 1918
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uIntPre[26] = dc.roo.air.cfd.uInt[26];
end when;
*/
void s000_baseline_eqFunction_1918(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1918};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[476]] /* dc.roo.air.cfd.uIntPre[26] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* dc.roo.air.cfd.uInt[26] STATE(1,dc.roo.air.cfd.u[26]) */);
  }
  threadData->lastEquationSolved = 1918;
}

/*
equation index: 1919
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uIntPre[27] = dc.roo.air.cfd.uInt[27];
end when;
*/
void s000_baseline_eqFunction_1919(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1919};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[477]] /* dc.roo.air.cfd.uIntPre[27] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* dc.roo.air.cfd.uInt[27] STATE(1,dc.roo.air.cfd.u[27]) */);
  }
  threadData->lastEquationSolved = 1919;
}

/*
equation index: 1920
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uIntPre[28] = dc.roo.air.cfd.uInt[28];
end when;
*/
void s000_baseline_eqFunction_1920(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1920};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[478]] /* dc.roo.air.cfd.uIntPre[28] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* dc.roo.air.cfd.uInt[28] STATE(1,dc.roo.air.cfd.u[28]) */);
  }
  threadData->lastEquationSolved = 1920;
}

/*
equation index: 1921
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uIntPre[29] = dc.roo.air.cfd.uInt[29];
end when;
*/
void s000_baseline_eqFunction_1921(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1921};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[479]] /* dc.roo.air.cfd.uIntPre[29] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[28]] /* dc.roo.air.cfd.uInt[29] STATE(1,dc.roo.air.cfd.u[29]) */);
  }
  threadData->lastEquationSolved = 1921;
}

/*
equation index: 1922
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uIntPre[30] = dc.roo.air.cfd.uInt[30];
end when;
*/
void s000_baseline_eqFunction_1922(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1922};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[480]] /* dc.roo.air.cfd.uIntPre[30] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[29]] /* dc.roo.air.cfd.uInt[30] STATE(1,dc.roo.air.cfd.u[30]) */);
  }
  threadData->lastEquationSolved = 1922;
}

/*
equation index: 1923
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uIntPre[31] = dc.roo.air.cfd.uInt[31];
end when;
*/
void s000_baseline_eqFunction_1923(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1923};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[481]] /* dc.roo.air.cfd.uIntPre[31] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[30]] /* dc.roo.air.cfd.uInt[31] STATE(1,dc.roo.air.cfd.u[31]) */);
  }
  threadData->lastEquationSolved = 1923;
}

/*
equation index: 1924
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uIntPre[32] = dc.roo.air.cfd.uInt[32];
end when;
*/
void s000_baseline_eqFunction_1924(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1924};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[482]] /* dc.roo.air.cfd.uIntPre[32] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* dc.roo.air.cfd.uInt[32] STATE(1,dc.roo.air.cfd.u[32]) */);
  }
  threadData->lastEquationSolved = 1924;
}

/*
equation index: 1925
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uIntPre[33] = dc.roo.air.cfd.uInt[33];
end when;
*/
void s000_baseline_eqFunction_1925(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1925};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[483]] /* dc.roo.air.cfd.uIntPre[33] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[32]] /* dc.roo.air.cfd.uInt[33] STATE(1,dc.roo.air.cfd.u[33]) */);
  }
  threadData->lastEquationSolved = 1925;
}

/*
equation index: 1926
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uIntPre[34] = dc.roo.air.cfd.uInt[34];
end when;
*/
void s000_baseline_eqFunction_1926(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1926};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[484]] /* dc.roo.air.cfd.uIntPre[34] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[33]] /* dc.roo.air.cfd.uInt[34] STATE(1,dc.roo.air.cfd.u[34]) */);
  }
  threadData->lastEquationSolved = 1926;
}

/*
equation index: 1927
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uIntPre[35] = dc.roo.air.cfd.uInt[35];
end when;
*/
void s000_baseline_eqFunction_1927(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1927};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[485]] /* dc.roo.air.cfd.uIntPre[35] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[34]] /* dc.roo.air.cfd.uInt[35] STATE(1,dc.roo.air.cfd.u[35]) */);
  }
  threadData->lastEquationSolved = 1927;
}

/*
equation index: 1928
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uIntPre[36] = dc.roo.air.cfd.uInt[36];
end when;
*/
void s000_baseline_eqFunction_1928(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1928};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[486]] /* dc.roo.air.cfd.uIntPre[36] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* dc.roo.air.cfd.uInt[36] STATE(1,dc.roo.air.cfd.u[36]) */);
  }
  threadData->lastEquationSolved = 1928;
}

/*
equation index: 1929
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uIntPre[37] = dc.roo.air.cfd.uInt[37];
end when;
*/
void s000_baseline_eqFunction_1929(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1929};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[487]] /* dc.roo.air.cfd.uIntPre[37] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[36]] /* dc.roo.air.cfd.uInt[37] STATE(1,dc.roo.air.cfd.u[37]) */);
  }
  threadData->lastEquationSolved = 1929;
}

/*
equation index: 1930
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uIntPre[38] = dc.roo.air.cfd.uInt[38];
end when;
*/
void s000_baseline_eqFunction_1930(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1930};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[488]] /* dc.roo.air.cfd.uIntPre[38] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[37]] /* dc.roo.air.cfd.uInt[38] STATE(1,dc.roo.air.cfd.u[38]) */);
  }
  threadData->lastEquationSolved = 1930;
}

/*
equation index: 1931
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uIntPre[39] = dc.roo.air.cfd.uInt[39];
end when;
*/
void s000_baseline_eqFunction_1931(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1931};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[489]] /* dc.roo.air.cfd.uIntPre[39] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[38]] /* dc.roo.air.cfd.uInt[39] STATE(1,dc.roo.air.cfd.u[39]) */);
  }
  threadData->lastEquationSolved = 1931;
}

/*
equation index: 1932
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uIntPre[40] = dc.roo.air.cfd.uInt[40];
end when;
*/
void s000_baseline_eqFunction_1932(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1932};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[490]] /* dc.roo.air.cfd.uIntPre[40] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[39]] /* dc.roo.air.cfd.uInt[40] STATE(1,dc.roo.air.cfd.u[40]) */);
  }
  threadData->lastEquationSolved = 1932;
}

/*
equation index: 1933
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uIntPre[41] = dc.roo.air.cfd.uInt[41];
end when;
*/
void s000_baseline_eqFunction_1933(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1933};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[491]] /* dc.roo.air.cfd.uIntPre[41] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[40]] /* dc.roo.air.cfd.uInt[41] STATE(1,dc.roo.air.cfd.u[41]) */);
  }
  threadData->lastEquationSolved = 1933;
}

/*
equation index: 1934
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uIntPre[42] = dc.roo.air.cfd.uInt[42];
end when;
*/
void s000_baseline_eqFunction_1934(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1934};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[492]] /* dc.roo.air.cfd.uIntPre[42] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[41]] /* dc.roo.air.cfd.uInt[42] STATE(1,dc.roo.air.cfd.u[42]) */);
  }
  threadData->lastEquationSolved = 1934;
}

/*
equation index: 1935
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uIntPre[43] = dc.roo.air.cfd.uInt[43];
end when;
*/
void s000_baseline_eqFunction_1935(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1935};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[493]] /* dc.roo.air.cfd.uIntPre[43] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[42]] /* dc.roo.air.cfd.uInt[43] STATE(1,dc.roo.air.cfd.u[43]) */);
  }
  threadData->lastEquationSolved = 1935;
}

/*
equation index: 1936
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uIntPre[44] = dc.roo.air.cfd.uInt[44];
end when;
*/
void s000_baseline_eqFunction_1936(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1936};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[494]] /* dc.roo.air.cfd.uIntPre[44] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[43]] /* dc.roo.air.cfd.uInt[44] STATE(1,dc.roo.air.cfd.u[44]) */);
  }
  threadData->lastEquationSolved = 1936;
}

/*
equation index: 1937
type: WHEN

when {$whenCondition6} then
  dc.roo.air.cfd.uIntPre[45] = dc.roo.air.cfd.uInt[45];
end when;
*/
void s000_baseline_eqFunction_1937(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1937};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[495]] /* dc.roo.air.cfd.uIntPre[45] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[44]] /* dc.roo.air.cfd.uInt[45] STATE(1,dc.roo.air.cfd.u[45]) */);
  }
  threadData->lastEquationSolved = 1937;
}

/*
equation index: 1938
type: ALGORITHM

  dc.roo.air.cfd.retVal := pre(dc.roo.air.cfd.retVal);
  dc.roo.air.cfd.y[31] := pre(dc.roo.air.cfd.y[31]);
  dc.roo.air.cfd.y[30] := pre(dc.roo.air.cfd.y[30]);
  dc.roo.air.cfd.y[29] := pre(dc.roo.air.cfd.y[29]);
  dc.roo.air.cfd.y[28] := pre(dc.roo.air.cfd.y[28]);
  dc.roo.air.cfd.y[27] := pre(dc.roo.air.cfd.y[27]);
  dc.roo.air.cfd.y[26] := pre(dc.roo.air.cfd.y[26]);
  dc.roo.air.cfd.y[25] := pre(dc.roo.air.cfd.y[25]);
  dc.roo.air.cfd.y[24] := pre(dc.roo.air.cfd.y[24]);
  dc.roo.air.cfd.y[23] := pre(dc.roo.air.cfd.y[23]);
  dc.roo.air.cfd.y[22] := pre(dc.roo.air.cfd.y[22]);
  dc.roo.air.cfd.y[21] := pre(dc.roo.air.cfd.y[21]);
  dc.roo.air.cfd.y[20] := pre(dc.roo.air.cfd.y[20]);
  dc.roo.air.cfd.y[19] := pre(dc.roo.air.cfd.y[19]);
  dc.roo.air.cfd.y[18] := pre(dc.roo.air.cfd.y[18]);
  dc.roo.air.cfd.y[17] := pre(dc.roo.air.cfd.y[17]);
  dc.roo.air.cfd.y[16] := pre(dc.roo.air.cfd.y[16]);
  dc.roo.air.cfd.y[15] := pre(dc.roo.air.cfd.y[15]);
  dc.roo.air.cfd.y[14] := pre(dc.roo.air.cfd.y[14]);
  dc.roo.air.cfd.y[13] := pre(dc.roo.air.cfd.y[13]);
  dc.roo.air.cfd.y[12] := pre(dc.roo.air.cfd.y[12]);
  dc.roo.air.cfd.y[11] := pre(dc.roo.air.cfd.y[11]);
  dc.roo.air.cfd.y[10] := pre(dc.roo.air.cfd.y[10]);
  dc.roo.air.cfd.y[9] := pre(dc.roo.air.cfd.y[9]);
  dc.roo.air.cfd.y[8] := pre(dc.roo.air.cfd.y[8]);
  dc.roo.air.cfd.y[7] := pre(dc.roo.air.cfd.y[7]);
  dc.roo.air.cfd.y[6] := pre(dc.roo.air.cfd.y[6]);
  dc.roo.air.cfd.y[5] := pre(dc.roo.air.cfd.y[5]);
  dc.roo.air.cfd.y[4] := pre(dc.roo.air.cfd.y[4]);
  dc.roo.air.cfd.y[3] := pre(dc.roo.air.cfd.y[3]);
  dc.roo.air.cfd.y[2] := pre(dc.roo.air.cfd.y[2]);
  dc.roo.air.cfd.y[1] := pre(dc.roo.air.cfd.y[1]);
  dc.roo.air.cfd.modTimRea := pre(dc.roo.air.cfd.modTimRea);
  $whenCondition3 := pre($whenCondition3);
  $whenCondition3 := $whenCondition6;
  when $whenCondition3 then
    (dc.roo.air.cfd.modTimRea, dc.roo.air.cfd.y, dc.roo.air.cfd.retVal) := Scenario_s000_baseline.dc.roo.air.cfd.exchange(0, time, dc.roo.air.cfd.samplePeriod, dc.roo.air.cfd.uWri, 45, dc.roo.air.cfd.yFixed, 31);
    assert(dc.roo.air.cfd.retVal >= 0, "Obtained negative return value during data transfer with CFD.
   Aborting simulation. Check CFD log file.
   Received: retVal = " + String(dc.roo.air.cfd.retVal, 0, true));
  end when;
*/
void s000_baseline_eqFunction_1938(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1938};
  real_array tmp46;
  real_array tmp47;
  real_array tmp48;
  modelica_boolean tmp49;
  static const MMC_DEFSTRINGLIT(tmp50,128,"Obtained negative return value during data transfer with CFD.\n   Aborting simulation. Check CFD log file.\n   Received: retVal = ");
  modelica_string tmp51;
  modelica_metatype tmpMeta52;
  static int tmp53 = 0;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[0]] /* dc.roo.air.cfd.retVal DISCRETE */) = (data->simulationInfo->integerVarsPre[0] /* dc.roo.air.cfd.retVal DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[571]] /* dc.roo.air.cfd.y[31] DISCRETE */) = (data->simulationInfo->realVarsPre[571] /* dc.roo.air.cfd.y[31] DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[570]] /* dc.roo.air.cfd.y[30] DISCRETE */) = (data->simulationInfo->realVarsPre[570] /* dc.roo.air.cfd.y[30] DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[569]] /* dc.roo.air.cfd.y[29] DISCRETE */) = (data->simulationInfo->realVarsPre[569] /* dc.roo.air.cfd.y[29] DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[568]] /* dc.roo.air.cfd.y[28] DISCRETE */) = (data->simulationInfo->realVarsPre[568] /* dc.roo.air.cfd.y[28] DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[567]] /* dc.roo.air.cfd.y[27] DISCRETE */) = (data->simulationInfo->realVarsPre[567] /* dc.roo.air.cfd.y[27] DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[566]] /* dc.roo.air.cfd.y[26] DISCRETE */) = (data->simulationInfo->realVarsPre[566] /* dc.roo.air.cfd.y[26] DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[565]] /* dc.roo.air.cfd.y[25] DISCRETE */) = (data->simulationInfo->realVarsPre[565] /* dc.roo.air.cfd.y[25] DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[564]] /* dc.roo.air.cfd.y[24] DISCRETE */) = (data->simulationInfo->realVarsPre[564] /* dc.roo.air.cfd.y[24] DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[563]] /* dc.roo.air.cfd.y[23] DISCRETE */) = (data->simulationInfo->realVarsPre[563] /* dc.roo.air.cfd.y[23] DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[562]] /* dc.roo.air.cfd.y[22] DISCRETE */) = (data->simulationInfo->realVarsPre[562] /* dc.roo.air.cfd.y[22] DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[561]] /* dc.roo.air.cfd.y[21] DISCRETE */) = (data->simulationInfo->realVarsPre[561] /* dc.roo.air.cfd.y[21] DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[560]] /* dc.roo.air.cfd.y[20] DISCRETE */) = (data->simulationInfo->realVarsPre[560] /* dc.roo.air.cfd.y[20] DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[559]] /* dc.roo.air.cfd.y[19] DISCRETE */) = (data->simulationInfo->realVarsPre[559] /* dc.roo.air.cfd.y[19] DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[558]] /* dc.roo.air.cfd.y[18] DISCRETE */) = (data->simulationInfo->realVarsPre[558] /* dc.roo.air.cfd.y[18] DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[557]] /* dc.roo.air.cfd.y[17] DISCRETE */) = (data->simulationInfo->realVarsPre[557] /* dc.roo.air.cfd.y[17] DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[556]] /* dc.roo.air.cfd.y[16] DISCRETE */) = (data->simulationInfo->realVarsPre[556] /* dc.roo.air.cfd.y[16] DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[555]] /* dc.roo.air.cfd.y[15] DISCRETE */) = (data->simulationInfo->realVarsPre[555] /* dc.roo.air.cfd.y[15] DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[554]] /* dc.roo.air.cfd.y[14] DISCRETE */) = (data->simulationInfo->realVarsPre[554] /* dc.roo.air.cfd.y[14] DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[553]] /* dc.roo.air.cfd.y[13] DISCRETE */) = (data->simulationInfo->realVarsPre[553] /* dc.roo.air.cfd.y[13] DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[552]] /* dc.roo.air.cfd.y[12] DISCRETE */) = (data->simulationInfo->realVarsPre[552] /* dc.roo.air.cfd.y[12] DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[551]] /* dc.roo.air.cfd.y[11] DISCRETE */) = (data->simulationInfo->realVarsPre[551] /* dc.roo.air.cfd.y[11] DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[550]] /* dc.roo.air.cfd.y[10] DISCRETE */) = (data->simulationInfo->realVarsPre[550] /* dc.roo.air.cfd.y[10] DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[549]] /* dc.roo.air.cfd.y[9] DISCRETE */) = (data->simulationInfo->realVarsPre[549] /* dc.roo.air.cfd.y[9] DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[548]] /* dc.roo.air.cfd.y[8] DISCRETE */) = (data->simulationInfo->realVarsPre[548] /* dc.roo.air.cfd.y[8] DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[547]] /* dc.roo.air.cfd.y[7] DISCRETE */) = (data->simulationInfo->realVarsPre[547] /* dc.roo.air.cfd.y[7] DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[546]] /* dc.roo.air.cfd.y[6] DISCRETE */) = (data->simulationInfo->realVarsPre[546] /* dc.roo.air.cfd.y[6] DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[545]] /* dc.roo.air.cfd.y[5] DISCRETE */) = (data->simulationInfo->realVarsPre[545] /* dc.roo.air.cfd.y[5] DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[544]] /* dc.roo.air.cfd.y[4] DISCRETE */) = (data->simulationInfo->realVarsPre[544] /* dc.roo.air.cfd.y[4] DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[543]] /* dc.roo.air.cfd.y[3] DISCRETE */) = (data->simulationInfo->realVarsPre[543] /* dc.roo.air.cfd.y[3] DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[542]] /* dc.roo.air.cfd.y[2] DISCRETE */) = (data->simulationInfo->realVarsPre[542] /* dc.roo.air.cfd.y[2] DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[541]] /* dc.roo.air.cfd.y[1] DISCRETE */) = (data->simulationInfo->realVarsPre[541] /* dc.roo.air.cfd.y[1] DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[450]] /* dc.roo.air.cfd.modTimRea DISCRETE */) = (data->simulationInfo->realVarsPre[450] /* dc.roo.air.cfd.modTimRea DISCRETE */);

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[2]] /* $whenCondition3 DISCRETE */) = (data->simulationInfo->booleanVarsPre[2] /* $whenCondition3 DISCRETE */);

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[2]] /* $whenCondition3 DISCRETE */) = (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */);

  if(data->simulationInfo->discreteCall == 1)
  {
    if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[2]] /* $whenCondition3 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[2] /* $whenCondition3 DISCRETE */) /* edge */))
    {
      real_array_create(&tmp46, ((modelica_real*)&((&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[541]] /* dc.roo.air.cfd.y[1] DISCRETE */))[((modelica_integer) 1) - 1])), 1, (_index_t)31);
      real_array_create(&tmp47, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[496]] /* dc.roo.air.cfd.uWri[1] DISCRETE */)[((modelica_integer) 1) - 1])), 1, (_index_t)45);
      real_array_create(&tmp48, ((modelica_real*)&((&data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[208]] /* dc.roo.air.cfd.yFixed[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)31);
      (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[450]] /* dc.roo.air.cfd.modTimRea DISCRETE */) = omc_Scenario__s000__baseline_dc_roo_air_cfd_exchange(threadData, ((modelica_integer) 0), data->localData[0]->timeValue, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */), tmp47, ((modelica_integer) 45), tmp48, ((modelica_integer) 31) ,&tmp46 ,&(data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[0]] /* dc.roo.air.cfd.retVal DISCRETE */));

      {
        tmp49 = GreaterEq((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[0]] /* dc.roo.air.cfd.retVal DISCRETE */),((modelica_integer) 0));
        if(!tmp49)
        {
          tmp51 = modelica_integer_to_modelica_string((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[0]] /* dc.roo.air.cfd.retVal DISCRETE */), ((modelica_integer) 0), 1 /* true */);
          tmpMeta52 = stringAppend(MMC_REFSTRINGLIT(tmp50),tmp51);
          {
            const char* assert_cond = "(dc.roo.air.cfd.retVal >= 0)";
            if (data->simulationInfo->noThrowAsserts) {
              FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",316,5,319,49,0};
              infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta52));
              data->simulationInfo->needToReThrow = 1;
            } else {
              FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",316,5,319,49,0};
              omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta52));
            }
          }
        }
      }
    }
  }
  threadData->lastEquationSolved = 1938;
}

/*
equation index: 1939
type: SIMPLE_ASSIGN
dc.roo.irRadExc.T4Opa[5] = -2.2155463946313015e10 - (-1.0076963532349998e8) * dc.roo.air.cfd.y[5]
*/
void s000_baseline_eqFunction_1939(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1939};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[265]] /* dc.roo.irRadExc.T4Opa[5] variable */) = -2.2155463946313015e10 - ((-1.0076963532349998e8) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[545]] /* dc.roo.air.cfd.y[5] DISCRETE */)));
  threadData->lastEquationSolved = 1939;
}

/*
equation index: 1940
type: SIMPLE_ASSIGN
dc.roo.irRadExc.T4Opa[6] = -2.2155463946313015e10 - (-1.0076963532349998e8) * dc.roo.air.cfd.y[6]
*/
void s000_baseline_eqFunction_1940(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1940};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[266]] /* dc.roo.irRadExc.T4Opa[6] variable */) = -2.2155463946313015e10 - ((-1.0076963532349998e8) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[546]] /* dc.roo.air.cfd.y[6] DISCRETE */)));
  threadData->lastEquationSolved = 1940;
}

/*
equation index: 1941
type: SIMPLE_ASSIGN
dc.roo.air.cfd.u[43] = dc.roo.air.cfd.y[29]
*/
void s000_baseline_eqFunction_1941(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1941};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[202]] /* dc.roo.air.cfd.u[43] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[569]] /* dc.roo.air.cfd.y[29] DISCRETE */);
  threadData->lastEquationSolved = 1941;
}

/*
equation index: 1942
type: SIMPLE_ASSIGN
$DER.dc.roo.air.cfd.uInt[43] = dc.roo.air.cfd.u[43]
*/
void s000_baseline_eqFunction_1942(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1942};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* der(dc.roo.air.cfd.uInt[43]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[202]] /* dc.roo.air.cfd.u[43] variable */);
  threadData->lastEquationSolved = 1942;
}

/*
equation index: 1943
type: SIMPLE_ASSIGN
dc.roo.irRadExc.T4Opa[2] = -2.2155463946313015e10 - (-1.0076963532349998e8) * dc.roo.air.cfd.y[2]
*/
void s000_baseline_eqFunction_1943(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1943};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[262]] /* dc.roo.irRadExc.T4Opa[2] variable */) = -2.2155463946313015e10 - ((-1.0076963532349998e8) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[542]] /* dc.roo.air.cfd.y[2] DISCRETE */)));
  threadData->lastEquationSolved = 1943;
}

/*
equation index: 1944
type: SIMPLE_ASSIGN
dc.roo.air.cfd.u[41] = dc.roo.air.cfd.y[27]
*/
void s000_baseline_eqFunction_1944(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1944};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[200]] /* dc.roo.air.cfd.u[41] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[567]] /* dc.roo.air.cfd.y[27] DISCRETE */);
  threadData->lastEquationSolved = 1944;
}

/*
equation index: 1945
type: SIMPLE_ASSIGN
$DER.dc.roo.air.cfd.uInt[41] = dc.roo.air.cfd.u[41]
*/
void s000_baseline_eqFunction_1945(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1945};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[86]] /* der(dc.roo.air.cfd.uInt[41]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[200]] /* dc.roo.air.cfd.u[41] variable */);
  threadData->lastEquationSolved = 1945;
}

/*
equation index: 1946
type: SIMPLE_ASSIGN
dc.roo.air.cfd.u[42] = dc.roo.air.cfd.y[28]
*/
void s000_baseline_eqFunction_1946(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1946};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[201]] /* dc.roo.air.cfd.u[42] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[568]] /* dc.roo.air.cfd.y[28] DISCRETE */);
  threadData->lastEquationSolved = 1946;
}

/*
equation index: 1947
type: SIMPLE_ASSIGN
$DER.dc.roo.air.cfd.uInt[42] = dc.roo.air.cfd.u[42]
*/
void s000_baseline_eqFunction_1947(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1947};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[87]] /* der(dc.roo.air.cfd.uInt[42]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[201]] /* dc.roo.air.cfd.u[42] variable */);
  threadData->lastEquationSolved = 1947;
}

/*
equation index: 1948
type: SIMPLE_ASSIGN
dc.roo.air.cfd.u[45] = dc.roo.air.cfd.y[31]
*/
void s000_baseline_eqFunction_1948(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1948};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[204]] /* dc.roo.air.cfd.u[45] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[571]] /* dc.roo.air.cfd.y[31] DISCRETE */);
  threadData->lastEquationSolved = 1948;
}

/*
equation index: 1949
type: SIMPLE_ASSIGN
$DER.dc.roo.air.cfd.uInt[45] = dc.roo.air.cfd.u[45]
*/
void s000_baseline_eqFunction_1949(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1949};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[90]] /* der(dc.roo.air.cfd.uInt[45]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[204]] /* dc.roo.air.cfd.u[45] variable */);
  threadData->lastEquationSolved = 1949;
}

/*
equation index: 1950
type: SIMPLE_ASSIGN
dc.retRes[6].port_b.h_outflow = 1006.0 * (-273.15 + dc.roo.air.cfd.y[19]) * (1.0 - dc.roo.air.cfd.u[45]) + (2.5010145e6 + 1860.0 * (-273.15 + dc.roo.air.cfd.y[19])) * dc.roo.air.cfd.u[45]
*/
void s000_baseline_eqFunction_1950(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1950};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[154]] /* dc.retRes[6].port_b.h_outflow variable */) = (1006.0) * ((-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[559]] /* dc.roo.air.cfd.y[19] DISCRETE */)) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[204]] /* dc.roo.air.cfd.u[45] variable */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[559]] /* dc.roo.air.cfd.y[19] DISCRETE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[204]] /* dc.roo.air.cfd.u[45] variable */));
  threadData->lastEquationSolved = 1950;
}

/*
equation index: 1951
type: SIMPLE_ASSIGN
dc.roo.air.cfd.u[33] = 273.15 + (dc.retRes[6].port_b.h_outflow + (-2.5010145e6) * dc.roo.air.cfd.u[45]) / (1006.0 * (1.0 - dc.roo.air.cfd.u[45]) + 1860.0 * dc.roo.air.cfd.u[45])
*/
void s000_baseline_eqFunction_1951(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1951};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[192]] /* dc.roo.air.cfd.u[33] variable */) = 273.15 + DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[154]] /* dc.retRes[6].port_b.h_outflow variable */) + (-2.5010145e6) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[204]] /* dc.roo.air.cfd.u[45] variable */)),(1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[204]] /* dc.roo.air.cfd.u[45] variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[204]] /* dc.roo.air.cfd.u[45] variable */)),"1006.0 * (1.0 - dc.roo.air.cfd.u[45]) + 1860.0 * dc.roo.air.cfd.u[45]",equationIndexes);
  threadData->lastEquationSolved = 1951;
}

/*
equation index: 1952
type: SIMPLE_ASSIGN
$DER.dc.roo.air.cfd.uInt[33] = dc.roo.air.cfd.u[33]
*/
void s000_baseline_eqFunction_1952(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1952};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[78]] /* der(dc.roo.air.cfd.uInt[33]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[192]] /* dc.roo.air.cfd.u[33] variable */);
  threadData->lastEquationSolved = 1952;
}

/*
equation index: 1953
type: SIMPLE_ASSIGN
dc.roo.irRadExc.T4Opa[1] = -2.2155463946313015e10 - (-1.0076963532349998e8) * dc.roo.air.cfd.y[1]
*/
void s000_baseline_eqFunction_1953(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1953};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[261]] /* dc.roo.irRadExc.T4Opa[1] variable */) = -2.2155463946313015e10 - ((-1.0076963532349998e8) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[541]] /* dc.roo.air.cfd.y[1] DISCRETE */)));
  threadData->lastEquationSolved = 1953;
}

/*
equation index: 1954
type: SIMPLE_ASSIGN
dc.retRes[2].port_b.h_outflow = 1006.0 * (-273.15 + dc.roo.air.cfd.y[15]) * (1.0 - dc.roo.air.cfd.u[41]) + (2.5010145e6 + 1860.0 * (-273.15 + dc.roo.air.cfd.y[15])) * dc.roo.air.cfd.u[41]
*/
void s000_baseline_eqFunction_1954(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1954};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[150]] /* dc.retRes[2].port_b.h_outflow variable */) = (1006.0) * ((-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[555]] /* dc.roo.air.cfd.y[15] DISCRETE */)) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[200]] /* dc.roo.air.cfd.u[41] variable */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[555]] /* dc.roo.air.cfd.y[15] DISCRETE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[200]] /* dc.roo.air.cfd.u[41] variable */));
  threadData->lastEquationSolved = 1954;
}

/*
equation index: 1955
type: SIMPLE_ASSIGN
dc.roo.air.cfd.u[29] = 273.15 + (dc.retRes[2].port_b.h_outflow + (-2.5010145e6) * dc.roo.air.cfd.u[41]) / (1006.0 * (1.0 - dc.roo.air.cfd.u[41]) + 1860.0 * dc.roo.air.cfd.u[41])
*/
void s000_baseline_eqFunction_1955(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1955};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[188]] /* dc.roo.air.cfd.u[29] variable */) = 273.15 + DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[150]] /* dc.retRes[2].port_b.h_outflow variable */) + (-2.5010145e6) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[200]] /* dc.roo.air.cfd.u[41] variable */)),(1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[200]] /* dc.roo.air.cfd.u[41] variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[200]] /* dc.roo.air.cfd.u[41] variable */)),"1006.0 * (1.0 - dc.roo.air.cfd.u[41]) + 1860.0 * dc.roo.air.cfd.u[41]",equationIndexes);
  threadData->lastEquationSolved = 1955;
}

/*
equation index: 1956
type: SIMPLE_ASSIGN
$DER.dc.roo.air.cfd.uInt[29] = dc.roo.air.cfd.u[29]
*/
void s000_baseline_eqFunction_1956(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1956};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[74]] /* der(dc.roo.air.cfd.uInt[29]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[188]] /* dc.roo.air.cfd.u[29] variable */);
  threadData->lastEquationSolved = 1956;
}

/*
equation index: 1957
type: SIMPLE_ASSIGN
dc.roo.irRadExc.T4Opa[4] = -2.2155463946313015e10 - (-1.0076963532349998e8) * dc.roo.air.cfd.y[4]
*/
void s000_baseline_eqFunction_1957(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1957};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[264]] /* dc.roo.irRadExc.T4Opa[4] variable */) = -2.2155463946313015e10 - ((-1.0076963532349998e8) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[544]] /* dc.roo.air.cfd.y[4] DISCRETE */)));
  threadData->lastEquationSolved = 1957;
}

/*
equation index: 1958
type: SIMPLE_ASSIGN
dc.roo.ports[5].h_outflow = 1006.0 * (-273.15 + dc.roo.air.cfd.y[12]) * (1.0 - dc.roo.air.cfd.y[24]) + (2.5010145e6 + 1860.0 * (-273.15 + dc.roo.air.cfd.y[12])) * dc.roo.air.cfd.y[24]
*/
void s000_baseline_eqFunction_1958(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1958};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[322]] /* dc.roo.ports[5].h_outflow variable */) = (1006.0) * ((-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[552]] /* dc.roo.air.cfd.y[12] DISCRETE */)) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[564]] /* dc.roo.air.cfd.y[24] DISCRETE */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[552]] /* dc.roo.air.cfd.y[12] DISCRETE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[564]] /* dc.roo.air.cfd.y[24] DISCRETE */));
  threadData->lastEquationSolved = 1958;
}

/*
equation index: 1959
type: SIMPLE_ASSIGN
dc.roo.ports[3].h_outflow = 1006.0 * (-273.15 + dc.roo.air.cfd.y[10]) * (1.0 - dc.roo.air.cfd.y[22]) + (2.5010145e6 + 1860.0 * (-273.15 + dc.roo.air.cfd.y[10])) * dc.roo.air.cfd.y[22]
*/
void s000_baseline_eqFunction_1959(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1959};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[320]] /* dc.roo.ports[3].h_outflow variable */) = (1006.0) * ((-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[550]] /* dc.roo.air.cfd.y[10] DISCRETE */)) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[562]] /* dc.roo.air.cfd.y[22] DISCRETE */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[550]] /* dc.roo.air.cfd.y[10] DISCRETE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[562]] /* dc.roo.air.cfd.y[22] DISCRETE */));
  threadData->lastEquationSolved = 1959;
}

/*
equation index: 1960
type: SIMPLE_ASSIGN
dc.retRes[3].port_b.h_outflow = 1006.0 * (-273.15 + dc.roo.air.cfd.y[16]) * (1.0 - dc.roo.air.cfd.u[42]) + (2.5010145e6 + 1860.0 * (-273.15 + dc.roo.air.cfd.y[16])) * dc.roo.air.cfd.u[42]
*/
void s000_baseline_eqFunction_1960(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1960};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[151]] /* dc.retRes[3].port_b.h_outflow variable */) = (1006.0) * ((-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[556]] /* dc.roo.air.cfd.y[16] DISCRETE */)) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[201]] /* dc.roo.air.cfd.u[42] variable */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[556]] /* dc.roo.air.cfd.y[16] DISCRETE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[201]] /* dc.roo.air.cfd.u[42] variable */));
  threadData->lastEquationSolved = 1960;
}

/*
equation index: 1961
type: SIMPLE_ASSIGN
dc.roo.air.cfd.u[30] = 273.15 + (dc.retRes[3].port_b.h_outflow + (-2.5010145e6) * dc.roo.air.cfd.u[42]) / (1006.0 * (1.0 - dc.roo.air.cfd.u[42]) + 1860.0 * dc.roo.air.cfd.u[42])
*/
void s000_baseline_eqFunction_1961(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1961};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[189]] /* dc.roo.air.cfd.u[30] variable */) = 273.15 + DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[151]] /* dc.retRes[3].port_b.h_outflow variable */) + (-2.5010145e6) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[201]] /* dc.roo.air.cfd.u[42] variable */)),(1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[201]] /* dc.roo.air.cfd.u[42] variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[201]] /* dc.roo.air.cfd.u[42] variable */)),"1006.0 * (1.0 - dc.roo.air.cfd.u[42]) + 1860.0 * dc.roo.air.cfd.u[42]",equationIndexes);
  threadData->lastEquationSolved = 1961;
}

/*
equation index: 1962
type: SIMPLE_ASSIGN
$DER.dc.roo.air.cfd.uInt[30] = dc.roo.air.cfd.u[30]
*/
void s000_baseline_eqFunction_1962(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1962};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[75]] /* der(dc.roo.air.cfd.uInt[30]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[189]] /* dc.roo.air.cfd.u[30] variable */);
  threadData->lastEquationSolved = 1962;
}

/*
equation index: 1963
type: SIMPLE_ASSIGN
dc.roo.air.cfd.u[40] = dc.roo.air.cfd.y[26]
*/
void s000_baseline_eqFunction_1963(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1963};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[199]] /* dc.roo.air.cfd.u[40] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[566]] /* dc.roo.air.cfd.y[26] DISCRETE */);
  threadData->lastEquationSolved = 1963;
}

/*
equation index: 1964
type: SIMPLE_ASSIGN
$DER.dc.roo.air.cfd.uInt[40] = dc.roo.air.cfd.u[40]
*/
void s000_baseline_eqFunction_1964(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1964};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[85]] /* der(dc.roo.air.cfd.uInt[40]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[199]] /* dc.roo.air.cfd.u[40] variable */);
  threadData->lastEquationSolved = 1964;
}

/*
equation index: 1965
type: SIMPLE_ASSIGN
dc.roo.air.cfd.u[44] = dc.roo.air.cfd.y[30]
*/
void s000_baseline_eqFunction_1965(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1965};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[203]] /* dc.roo.air.cfd.u[44] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[570]] /* dc.roo.air.cfd.y[30] DISCRETE */);
  threadData->lastEquationSolved = 1965;
}

/*
equation index: 1966
type: SIMPLE_ASSIGN
$DER.dc.roo.air.cfd.uInt[44] = dc.roo.air.cfd.u[44]
*/
void s000_baseline_eqFunction_1966(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1966};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[89]] /* der(dc.roo.air.cfd.uInt[44]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[203]] /* dc.roo.air.cfd.u[44] variable */);
  threadData->lastEquationSolved = 1966;
}

/*
equation index: 1967
type: SIMPLE_ASSIGN
dc.retRes[5].port_b.h_outflow = 1006.0 * (-273.15 + dc.roo.air.cfd.y[18]) * (1.0 - dc.roo.air.cfd.u[44]) + (2.5010145e6 + 1860.0 * (-273.15 + dc.roo.air.cfd.y[18])) * dc.roo.air.cfd.u[44]
*/
void s000_baseline_eqFunction_1967(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1967};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[153]] /* dc.retRes[5].port_b.h_outflow variable */) = (1006.0) * ((-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[558]] /* dc.roo.air.cfd.y[18] DISCRETE */)) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[203]] /* dc.roo.air.cfd.u[44] variable */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[558]] /* dc.roo.air.cfd.y[18] DISCRETE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[203]] /* dc.roo.air.cfd.u[44] variable */));
  threadData->lastEquationSolved = 1967;
}

/*
equation index: 1968
type: SIMPLE_ASSIGN
dc.roo.air.cfd.u[32] = 273.15 + (dc.retRes[5].port_b.h_outflow + (-2.5010145e6) * dc.roo.air.cfd.u[44]) / (1006.0 * (1.0 - dc.roo.air.cfd.u[44]) + 1860.0 * dc.roo.air.cfd.u[44])
*/
void s000_baseline_eqFunction_1968(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1968};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[191]] /* dc.roo.air.cfd.u[32] variable */) = 273.15 + DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[153]] /* dc.retRes[5].port_b.h_outflow variable */) + (-2.5010145e6) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[203]] /* dc.roo.air.cfd.u[44] variable */)),(1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[203]] /* dc.roo.air.cfd.u[44] variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[203]] /* dc.roo.air.cfd.u[44] variable */)),"1006.0 * (1.0 - dc.roo.air.cfd.u[44]) + 1860.0 * dc.roo.air.cfd.u[44]",equationIndexes);
  threadData->lastEquationSolved = 1968;
}

/*
equation index: 1969
type: SIMPLE_ASSIGN
$DER.dc.roo.air.cfd.uInt[32] = dc.roo.air.cfd.u[32]
*/
void s000_baseline_eqFunction_1969(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1969};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[77]] /* der(dc.roo.air.cfd.uInt[32]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[191]] /* dc.roo.air.cfd.u[32] variable */);
  threadData->lastEquationSolved = 1969;
}

/*
equation index: 1970
type: SIMPLE_ASSIGN
dc.roo.ports[4].h_outflow = 1006.0 * (-273.15 + dc.roo.air.cfd.y[11]) * (1.0 - dc.roo.air.cfd.y[23]) + (2.5010145e6 + 1860.0 * (-273.15 + dc.roo.air.cfd.y[11])) * dc.roo.air.cfd.y[23]
*/
void s000_baseline_eqFunction_1970(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1970};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[321]] /* dc.roo.ports[4].h_outflow variable */) = (1006.0) * ((-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[551]] /* dc.roo.air.cfd.y[11] DISCRETE */)) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[563]] /* dc.roo.air.cfd.y[23] DISCRETE */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[551]] /* dc.roo.air.cfd.y[11] DISCRETE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[563]] /* dc.roo.air.cfd.y[23] DISCRETE */));
  threadData->lastEquationSolved = 1970;
}

/*
equation index: 1971
type: SIMPLE_ASSIGN
dc.roo.irRadExc.T4Opa[3] = -2.2155463946313015e10 - (-1.0076963532349998e8) * dc.roo.air.cfd.y[3]
*/
void s000_baseline_eqFunction_1971(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1971};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[263]] /* dc.roo.irRadExc.T4Opa[3] variable */) = -2.2155463946313015e10 - ((-1.0076963532349998e8) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[543]] /* dc.roo.air.cfd.y[3] DISCRETE */)));
  threadData->lastEquationSolved = 1971;
}

/*
equation index: 1996
type: LINEAR

<var>dc.roo.irRadExc.J[2]</var>
<var>dc.roo.irRadExc.J[5]</var>
<var>dc.roo.irRadExc.J[4]</var>
<var>dc.roo.irRadExc.J[1]</var>
<var>dc.roo.irRadExc.J[6]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void s000_baseline_eqFunction_1996(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1996};
  /* Linear equation system */
  int retValue;
  double aux_x[5] = { (data->localData[1]->realVars[data->simulationInfo->realVarsIndex[254]] /* dc.roo.irRadExc.J[2] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[257]] /* dc.roo.irRadExc.J[5] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[256]] /* dc.roo.irRadExc.J[4] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[253]] /* dc.roo.irRadExc.J[1] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[258]] /* dc.roo.irRadExc.J[6] variable */) };
  infoStreamPrint(OMC_LOG_DT, 0, "Solving linear system 1996 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);

  retValue = solve_linear_system(data, threadData, 2, &aux_x[0]);

  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1996};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving linear system 1996 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[254]] /* dc.roo.irRadExc.J[2] variable */) = aux_x[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[257]] /* dc.roo.irRadExc.J[5] variable */) = aux_x[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[256]] /* dc.roo.irRadExc.J[4] variable */) = aux_x[2];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[253]] /* dc.roo.irRadExc.J[1] variable */) = aux_x[3];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* dc.roo.irRadExc.J[6] variable */) = aux_x[4];

  threadData->lastEquationSolved = 1996;
}

/*
equation index: 1997
type: SIMPLE_ASSIGN
dc.roo.irRadExc.conSurBou[2].Q_flow = (-dc.roo.irRadExc.J[2]) - dc.roo.irRadExc.G[2]
*/
void s000_baseline_eqFunction_1997(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1997};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[274]] /* dc.roo.irRadExc.conSurBou[2].Q_flow variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[254]] /* dc.roo.irRadExc.J[2] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[248]] /* dc.roo.irRadExc.G[2] variable */);
  threadData->lastEquationSolved = 1997;
}

/*
equation index: 1998
type: SIMPLE_ASSIGN
dc.roo.irRadExc.conSurBou[5].Q_flow = (-dc.roo.irRadExc.J[5]) - dc.roo.irRadExc.G[5]
*/
void s000_baseline_eqFunction_1998(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1998};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[277]] /* dc.roo.irRadExc.conSurBou[5].Q_flow variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[257]] /* dc.roo.irRadExc.J[5] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[251]] /* dc.roo.irRadExc.G[5] variable */);
  threadData->lastEquationSolved = 1998;
}

/*
equation index: 1999
type: SIMPLE_ASSIGN
dc.roo.irRadExc.conSurBou[4].Q_flow = (-dc.roo.irRadExc.J[4]) - dc.roo.irRadExc.G[4]
*/
void s000_baseline_eqFunction_1999(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1999};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[276]] /* dc.roo.irRadExc.conSurBou[4].Q_flow variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[256]] /* dc.roo.irRadExc.J[4] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[250]] /* dc.roo.irRadExc.G[4] variable */);
  threadData->lastEquationSolved = 1999;
}

/*
equation index: 2000
type: SIMPLE_ASSIGN
dc.roo.irRadExc.conSurBou[1].Q_flow = (-dc.roo.irRadExc.J[1]) - dc.roo.irRadExc.G[1]
*/
void s000_baseline_eqFunction_2000(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2000};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[273]] /* dc.roo.irRadExc.conSurBou[1].Q_flow variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[253]] /* dc.roo.irRadExc.J[1] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[247]] /* dc.roo.irRadExc.G[1] variable */);
  threadData->lastEquationSolved = 2000;
}

/*
equation index: 2001
type: SIMPLE_ASSIGN
dc.roo.irRadExc.conSurBou[6].Q_flow = (-dc.roo.irRadExc.J[6]) - dc.roo.irRadExc.G[6]
*/
void s000_baseline_eqFunction_2001(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2001};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[278]] /* dc.roo.irRadExc.conSurBou[6].Q_flow variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* dc.roo.irRadExc.J[6] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[252]] /* dc.roo.irRadExc.G[6] variable */);
  threadData->lastEquationSolved = 2001;
}

/*
equation index: 2002
type: SIMPLE_ASSIGN
dc.roo.irRadExc.conSurBou[3].Q_flow = (-dc.roo.irRadExc.J[3]) - dc.roo.irRadExc.G[3]
*/
void s000_baseline_eqFunction_2002(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2002};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[275]] /* dc.roo.irRadExc.conSurBou[3].Q_flow variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[255]] /* dc.roo.irRadExc.J[3] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[249]] /* dc.roo.irRadExc.G[3] variable */);
  threadData->lastEquationSolved = 2002;
}

/*
equation index: 2003
type: SIMPLE_ASSIGN
dc.roo.heaPorRad.T = (293.15 * dc.roo.radTem.epsAOpa[1] + 293.15 * dc.roo.radTem.epsAOpa[2] + 293.15 * dc.roo.radTem.epsAOpa[3] + 293.15 * dc.roo.radTem.epsAOpa[4] + dc.roo.radTem.epsAOpa[5] * dc.roo.air.cfd.y[1] + dc.roo.radTem.epsAOpa[6] * dc.roo.air.cfd.y[2] + dc.roo.radTem.epsAOpa[7] * dc.roo.air.cfd.y[3] + dc.roo.radTem.epsAOpa[8] * dc.roo.air.cfd.y[4] + dc.roo.radTem.epsAOpa[9] * dc.roo.air.cfd.y[5] + dc.roo.radTem.epsAOpa[10] * dc.roo.air.cfd.y[6] + 293.15 * (dc.roo.radTem.epsAOpa[11] + dc.roo.radTem.epsAOpa[12] + dc.roo.radTem.epsAGla[1])) / (dc.roo.radTem.epsAOpa[1] + dc.roo.radTem.epsAOpa[2] + dc.roo.radTem.epsAOpa[3] + dc.roo.radTem.epsAOpa[4] + dc.roo.radTem.epsAOpa[5] + dc.roo.radTem.epsAOpa[6] + dc.roo.radTem.epsAOpa[7] + dc.roo.radTem.epsAOpa[8] + dc.roo.radTem.epsAOpa[9] + dc.roo.radTem.epsAOpa[10] + dc.roo.radTem.epsAOpa[11] + dc.roo.radTem.epsAOpa[12] + dc.roo.radTem.epsAGla[1])
*/
void s000_baseline_eqFunction_2003(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2003};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[246]] /* dc.roo.heaPorRad.T variable */) = DIVISION_SIM((293.15) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1372]] /* dc.roo.radTem.epsAOpa[1] PARAM */)) + (293.15) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1373]] /* dc.roo.radTem.epsAOpa[2] PARAM */)) + (293.15) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1374]] /* dc.roo.radTem.epsAOpa[3] PARAM */)) + (293.15) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1375]] /* dc.roo.radTem.epsAOpa[4] PARAM */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1376]] /* dc.roo.radTem.epsAOpa[5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[541]] /* dc.roo.air.cfd.y[1] DISCRETE */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1377]] /* dc.roo.radTem.epsAOpa[6] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[542]] /* dc.roo.air.cfd.y[2] DISCRETE */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1378]] /* dc.roo.radTem.epsAOpa[7] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[543]] /* dc.roo.air.cfd.y[3] DISCRETE */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1379]] /* dc.roo.radTem.epsAOpa[8] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[544]] /* dc.roo.air.cfd.y[4] DISCRETE */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1380]] /* dc.roo.radTem.epsAOpa[9] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[545]] /* dc.roo.air.cfd.y[5] DISCRETE */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1381]] /* dc.roo.radTem.epsAOpa[10] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[546]] /* dc.roo.air.cfd.y[6] DISCRETE */)) + (293.15) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1382]] /* dc.roo.radTem.epsAOpa[11] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1383]] /* dc.roo.radTem.epsAOpa[12] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1371]] /* dc.roo.radTem.epsAGla[1] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1372]] /* dc.roo.radTem.epsAOpa[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1373]] /* dc.roo.radTem.epsAOpa[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1374]] /* dc.roo.radTem.epsAOpa[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1375]] /* dc.roo.radTem.epsAOpa[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1376]] /* dc.roo.radTem.epsAOpa[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1377]] /* dc.roo.radTem.epsAOpa[6] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1378]] /* dc.roo.radTem.epsAOpa[7] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1379]] /* dc.roo.radTem.epsAOpa[8] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1380]] /* dc.roo.radTem.epsAOpa[9] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1381]] /* dc.roo.radTem.epsAOpa[10] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1382]] /* dc.roo.radTem.epsAOpa[11] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1383]] /* dc.roo.radTem.epsAOpa[12] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1371]] /* dc.roo.radTem.epsAGla[1] PARAM */),"dc.roo.radTem.epsAOpa[1] + dc.roo.radTem.epsAOpa[2] + dc.roo.radTem.epsAOpa[3] + dc.roo.radTem.epsAOpa[4] + dc.roo.radTem.epsAOpa[5] + dc.roo.radTem.epsAOpa[6] + dc.roo.radTem.epsAOpa[7] + dc.roo.radTem.epsAOpa[8] + dc.roo.radTem.epsAOpa[9] + dc.roo.radTem.epsAOpa[10] + dc.roo.radTem.epsAOpa[11] + dc.roo.radTem.epsAOpa[12] + dc.roo.radTem.epsAGla[1]",equationIndexes);
  threadData->lastEquationSolved = 2003;
}

/*
equation index: 2004
type: SIMPLE_ASSIGN
dc.retRes[4].port_b.h_outflow = 1006.0 * (-273.15 + dc.roo.air.cfd.y[17]) * (1.0 - dc.roo.air.cfd.u[43]) + (2.5010145e6 + 1860.0 * (-273.15 + dc.roo.air.cfd.y[17])) * dc.roo.air.cfd.u[43]
*/
void s000_baseline_eqFunction_2004(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2004};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[152]] /* dc.retRes[4].port_b.h_outflow variable */) = (1006.0) * ((-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[557]] /* dc.roo.air.cfd.y[17] DISCRETE */)) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[202]] /* dc.roo.air.cfd.u[43] variable */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[557]] /* dc.roo.air.cfd.y[17] DISCRETE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[202]] /* dc.roo.air.cfd.u[43] variable */));
  threadData->lastEquationSolved = 2004;
}

/*
equation index: 2005
type: SIMPLE_ASSIGN
dc.roo.air.cfd.u[31] = 273.15 + (dc.retRes[4].port_b.h_outflow + (-2.5010145e6) * dc.roo.air.cfd.u[43]) / (1006.0 * (1.0 - dc.roo.air.cfd.u[43]) + 1860.0 * dc.roo.air.cfd.u[43])
*/
void s000_baseline_eqFunction_2005(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2005};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[190]] /* dc.roo.air.cfd.u[31] variable */) = 273.15 + DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[152]] /* dc.retRes[4].port_b.h_outflow variable */) + (-2.5010145e6) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[202]] /* dc.roo.air.cfd.u[43] variable */)),(1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[202]] /* dc.roo.air.cfd.u[43] variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[202]] /* dc.roo.air.cfd.u[43] variable */)),"1006.0 * (1.0 - dc.roo.air.cfd.u[43]) + 1860.0 * dc.roo.air.cfd.u[43]",equationIndexes);
  threadData->lastEquationSolved = 2005;
}

/*
equation index: 2006
type: SIMPLE_ASSIGN
$DER.dc.roo.air.cfd.uInt[31] = dc.roo.air.cfd.u[31]
*/
void s000_baseline_eqFunction_2006(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2006};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[76]] /* der(dc.roo.air.cfd.uInt[31]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[190]] /* dc.roo.air.cfd.u[31] variable */);
  threadData->lastEquationSolved = 2006;
}

/*
equation index: 2007
type: SIMPLE_ASSIGN
dc.roo.ports[1].h_outflow = 1006.0 * (-273.15 + dc.roo.air.cfd.y[8]) * (1.0 - dc.roo.air.cfd.y[20]) + (2.5010145e6 + 1860.0 * (-273.15 + dc.roo.air.cfd.y[8])) * dc.roo.air.cfd.y[20]
*/
void s000_baseline_eqFunction_2007(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2007};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[318]] /* dc.roo.ports[1].h_outflow variable */) = (1006.0) * ((-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[548]] /* dc.roo.air.cfd.y[8] DISCRETE */)) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[560]] /* dc.roo.air.cfd.y[20] DISCRETE */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[548]] /* dc.roo.air.cfd.y[8] DISCRETE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[560]] /* dc.roo.air.cfd.y[20] DISCRETE */));
  threadData->lastEquationSolved = 2007;
}

/*
equation index: 2008
type: SIMPLE_ASSIGN
dc.roo.ports[2].h_outflow = 1006.0 * (-273.15 + dc.roo.air.cfd.y[9]) * (1.0 - dc.roo.air.cfd.y[21]) + (2.5010145e6 + 1860.0 * (-273.15 + dc.roo.air.cfd.y[9])) * dc.roo.air.cfd.y[21]
*/
void s000_baseline_eqFunction_2008(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2008};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[319]] /* dc.roo.ports[2].h_outflow variable */) = (1006.0) * ((-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[549]] /* dc.roo.air.cfd.y[9] DISCRETE */)) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[561]] /* dc.roo.air.cfd.y[21] DISCRETE */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[549]] /* dc.roo.air.cfd.y[9] DISCRETE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[561]] /* dc.roo.air.cfd.y[21] DISCRETE */));
  threadData->lastEquationSolved = 2008;
}

/*
equation index: 2009
type: SIMPLE_ASSIGN
dc.roo.ports[6].h_outflow = 1006.0 * (-273.15 + dc.roo.air.cfd.y[13]) * (1.0 - dc.roo.air.cfd.y[25]) + (2.5010145e6 + 1860.0 * (-273.15 + dc.roo.air.cfd.y[13])) * dc.roo.air.cfd.y[25]
*/
void s000_baseline_eqFunction_2009(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2009};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[323]] /* dc.roo.ports[6].h_outflow variable */) = (1006.0) * ((-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[553]] /* dc.roo.air.cfd.y[13] DISCRETE */)) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[565]] /* dc.roo.air.cfd.y[25] DISCRETE */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[553]] /* dc.roo.air.cfd.y[13] DISCRETE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[565]] /* dc.roo.air.cfd.y[25] DISCRETE */));
  threadData->lastEquationSolved = 2009;
}

/*
equation index: 2010
type: SIMPLE_ASSIGN
dc.retRes[1].port_b.h_outflow = 1006.0 * (-273.15 + dc.roo.air.cfd.y[14]) * (1.0 - dc.roo.air.cfd.u[40]) + (2.5010145e6 + 1860.0 * (-273.15 + dc.roo.air.cfd.y[14])) * dc.roo.air.cfd.u[40]
*/
void s000_baseline_eqFunction_2010(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2010};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[149]] /* dc.retRes[1].port_b.h_outflow variable */) = (1006.0) * ((-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[554]] /* dc.roo.air.cfd.y[14] DISCRETE */)) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[199]] /* dc.roo.air.cfd.u[40] variable */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[554]] /* dc.roo.air.cfd.y[14] DISCRETE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[199]] /* dc.roo.air.cfd.u[40] variable */));
  threadData->lastEquationSolved = 2010;
}

/*
equation index: 2011
type: SIMPLE_ASSIGN
dc.roo.air.cfd.u[28] = 273.15 + (dc.retRes[1].port_b.h_outflow + (-2.5010145e6) * dc.roo.air.cfd.u[40]) / (1006.0 * (1.0 - dc.roo.air.cfd.u[40]) + 1860.0 * dc.roo.air.cfd.u[40])
*/
void s000_baseline_eqFunction_2011(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2011};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[187]] /* dc.roo.air.cfd.u[28] variable */) = 273.15 + DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[149]] /* dc.retRes[1].port_b.h_outflow variable */) + (-2.5010145e6) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[199]] /* dc.roo.air.cfd.u[40] variable */)),(1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[199]] /* dc.roo.air.cfd.u[40] variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[199]] /* dc.roo.air.cfd.u[40] variable */)),"1006.0 * (1.0 - dc.roo.air.cfd.u[40]) + 1860.0 * dc.roo.air.cfd.u[40]",equationIndexes);
  threadData->lastEquationSolved = 2011;
}

/*
equation index: 2012
type: SIMPLE_ASSIGN
$DER.dc.roo.air.cfd.uInt[28] = dc.roo.air.cfd.u[28]
*/
void s000_baseline_eqFunction_2012(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2012};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[73]] /* der(dc.roo.air.cfd.uInt[28]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[187]] /* dc.roo.air.cfd.u[28] variable */);
  threadData->lastEquationSolved = 2012;
}

/*
equation index: 2013
type: SIMPLE_ASSIGN
dc.roo.air.cfd.sampleTrigger = $whenCondition6
*/
void s000_baseline_eqFunction_2013(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2013};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[7]] /* dc.roo.air.cfd.sampleTrigger DISCRETE */) = (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */);
  threadData->lastEquationSolved = 2013;
}

/*
equation index: 2014
type: SIMPLE_ASSIGN
dc.roo.irRadGai.sumAEpsInv = 1.0 / (dc.roo.irRadGai.sumAEpsNoWin + dc.roo.irRadGai.AEpsConExtWinUns[1])
*/
void s000_baseline_eqFunction_2014(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2014};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[317]] /* dc.roo.irRadGai.sumAEpsInv variable */) = DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1161]] /* dc.roo.irRadGai.sumAEpsNoWin PARAM */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[280]] /* dc.roo.irRadGai.AEpsConExtWinUns[1] variable */),"dc.roo.irRadGai.sumAEpsNoWin + dc.roo.irRadGai.AEpsConExtWinUns[1]",equationIndexes);
  threadData->lastEquationSolved = 2014;
}

/*
equation index: 2015
type: SIMPLE_ASSIGN
dc.roo.irRadGai.fraSurBou[6] = dc.roo.irRadGai.AEpsSurBou[6] * dc.roo.irRadGai.sumAEpsInv
*/
void s000_baseline_eqFunction_2015(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2015};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[313]] /* dc.roo.irRadGai.fraSurBou[6] variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[970]] /* dc.roo.irRadGai.AEpsSurBou[6] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[317]] /* dc.roo.irRadGai.sumAEpsInv variable */));
  threadData->lastEquationSolved = 2015;
}

/*
equation index: 2016
type: SIMPLE_ASSIGN
dc.roo.irRadGai.conSurBou[6].Q_flow = (-dc.roo.irRadGai.fraSurBou[6]) * dc.roo.irRadGai.Q_flow
*/
void s000_baseline_eqFunction_2016(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2016};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[300]] /* dc.roo.irRadGai.conSurBou[6].Q_flow variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[313]] /* dc.roo.irRadGai.fraSurBou[6] variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[282]] /* dc.roo.irRadGai.Q_flow variable */));
  threadData->lastEquationSolved = 2016;
}

/*
equation index: 2017
type: SIMPLE_ASSIGN
dc.roo.air.cfd.u[6] = (-dc.roo.irRadExc.conSurBou[6].Q_flow) - dc.roo.irRadGai.conSurBou[6].Q_flow
*/
void s000_baseline_eqFunction_2017(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2017};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[165]] /* dc.roo.air.cfd.u[6] variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[278]] /* dc.roo.irRadExc.conSurBou[6].Q_flow variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[300]] /* dc.roo.irRadGai.conSurBou[6].Q_flow variable */);
  threadData->lastEquationSolved = 2017;
}

/*
equation index: 2018
type: SIMPLE_ASSIGN
$DER.dc.roo.air.cfd.uInt[6] = dc.roo.air.cfd.u[6]
*/
void s000_baseline_eqFunction_2018(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2018};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[51]] /* der(dc.roo.air.cfd.uInt[6]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[165]] /* dc.roo.air.cfd.u[6] variable */);
  threadData->lastEquationSolved = 2018;
}

/*
equation index: 2019
type: SIMPLE_ASSIGN
dc.roo.irRadGai.fraSurBou[5] = dc.roo.irRadGai.AEpsSurBou[5] * dc.roo.irRadGai.sumAEpsInv
*/
void s000_baseline_eqFunction_2019(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2019};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* dc.roo.irRadGai.fraSurBou[5] variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[969]] /* dc.roo.irRadGai.AEpsSurBou[5] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[317]] /* dc.roo.irRadGai.sumAEpsInv variable */));
  threadData->lastEquationSolved = 2019;
}

/*
equation index: 2020
type: SIMPLE_ASSIGN
dc.roo.irRadGai.conSurBou[5].Q_flow = (-dc.roo.irRadGai.fraSurBou[5]) * dc.roo.irRadGai.Q_flow
*/
void s000_baseline_eqFunction_2020(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2020};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[299]] /* dc.roo.irRadGai.conSurBou[5].Q_flow variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* dc.roo.irRadGai.fraSurBou[5] variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[282]] /* dc.roo.irRadGai.Q_flow variable */));
  threadData->lastEquationSolved = 2020;
}

/*
equation index: 2021
type: SIMPLE_ASSIGN
dc.roo.air.cfd.u[5] = (-dc.roo.irRadExc.conSurBou[5].Q_flow) - dc.roo.irRadGai.conSurBou[5].Q_flow
*/
void s000_baseline_eqFunction_2021(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2021};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[164]] /* dc.roo.air.cfd.u[5] variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[277]] /* dc.roo.irRadExc.conSurBou[5].Q_flow variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[299]] /* dc.roo.irRadGai.conSurBou[5].Q_flow variable */);
  threadData->lastEquationSolved = 2021;
}

/*
equation index: 2022
type: SIMPLE_ASSIGN
$DER.dc.roo.air.cfd.uInt[5] = dc.roo.air.cfd.u[5]
*/
void s000_baseline_eqFunction_2022(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2022};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[50]] /* der(dc.roo.air.cfd.uInt[5]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[164]] /* dc.roo.air.cfd.u[5] variable */);
  threadData->lastEquationSolved = 2022;
}

/*
equation index: 2023
type: SIMPLE_ASSIGN
dc.roo.irRadGai.fraSurBou[4] = dc.roo.irRadGai.AEpsSurBou[4] * dc.roo.irRadGai.sumAEpsInv
*/
void s000_baseline_eqFunction_2023(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2023};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[311]] /* dc.roo.irRadGai.fraSurBou[4] variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[968]] /* dc.roo.irRadGai.AEpsSurBou[4] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[317]] /* dc.roo.irRadGai.sumAEpsInv variable */));
  threadData->lastEquationSolved = 2023;
}

/*
equation index: 2024
type: SIMPLE_ASSIGN
dc.roo.irRadGai.conSurBou[4].Q_flow = (-dc.roo.irRadGai.fraSurBou[4]) * dc.roo.irRadGai.Q_flow
*/
void s000_baseline_eqFunction_2024(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2024};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[298]] /* dc.roo.irRadGai.conSurBou[4].Q_flow variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[311]] /* dc.roo.irRadGai.fraSurBou[4] variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[282]] /* dc.roo.irRadGai.Q_flow variable */));
  threadData->lastEquationSolved = 2024;
}

/*
equation index: 2025
type: SIMPLE_ASSIGN
dc.roo.air.cfd.u[4] = (-dc.roo.irRadExc.conSurBou[4].Q_flow) - dc.roo.irRadGai.conSurBou[4].Q_flow
*/
void s000_baseline_eqFunction_2025(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2025};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[163]] /* dc.roo.air.cfd.u[4] variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[276]] /* dc.roo.irRadExc.conSurBou[4].Q_flow variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[298]] /* dc.roo.irRadGai.conSurBou[4].Q_flow variable */);
  threadData->lastEquationSolved = 2025;
}

/*
equation index: 2026
type: SIMPLE_ASSIGN
$DER.dc.roo.air.cfd.uInt[4] = dc.roo.air.cfd.u[4]
*/
void s000_baseline_eqFunction_2026(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2026};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[49]] /* der(dc.roo.air.cfd.uInt[4]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[163]] /* dc.roo.air.cfd.u[4] variable */);
  threadData->lastEquationSolved = 2026;
}

/*
equation index: 2027
type: SIMPLE_ASSIGN
dc.roo.irRadGai.fraSurBou[3] = dc.roo.irRadGai.AEpsSurBou[3] * dc.roo.irRadGai.sumAEpsInv
*/
void s000_baseline_eqFunction_2027(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2027};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[310]] /* dc.roo.irRadGai.fraSurBou[3] variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[967]] /* dc.roo.irRadGai.AEpsSurBou[3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[317]] /* dc.roo.irRadGai.sumAEpsInv variable */));
  threadData->lastEquationSolved = 2027;
}

/*
equation index: 2028
type: SIMPLE_ASSIGN
dc.roo.irRadGai.conSurBou[3].Q_flow = (-dc.roo.irRadGai.fraSurBou[3]) * dc.roo.irRadGai.Q_flow
*/
void s000_baseline_eqFunction_2028(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2028};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[297]] /* dc.roo.irRadGai.conSurBou[3].Q_flow variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[310]] /* dc.roo.irRadGai.fraSurBou[3] variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[282]] /* dc.roo.irRadGai.Q_flow variable */));
  threadData->lastEquationSolved = 2028;
}

/*
equation index: 2029
type: SIMPLE_ASSIGN
dc.roo.air.cfd.u[3] = (-dc.roo.irRadExc.conSurBou[3].Q_flow) - dc.roo.irRadGai.conSurBou[3].Q_flow
*/
void s000_baseline_eqFunction_2029(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2029};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[162]] /* dc.roo.air.cfd.u[3] variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[275]] /* dc.roo.irRadExc.conSurBou[3].Q_flow variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[297]] /* dc.roo.irRadGai.conSurBou[3].Q_flow variable */);
  threadData->lastEquationSolved = 2029;
}

/*
equation index: 2030
type: SIMPLE_ASSIGN
$DER.dc.roo.air.cfd.uInt[3] = dc.roo.air.cfd.u[3]
*/
void s000_baseline_eqFunction_2030(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2030};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[48]] /* der(dc.roo.air.cfd.uInt[3]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[162]] /* dc.roo.air.cfd.u[3] variable */);
  threadData->lastEquationSolved = 2030;
}

/*
equation index: 2031
type: SIMPLE_ASSIGN
dc.roo.irRadGai.fraSurBou[2] = dc.roo.irRadGai.AEpsSurBou[2] * dc.roo.irRadGai.sumAEpsInv
*/
void s000_baseline_eqFunction_2031(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2031};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[309]] /* dc.roo.irRadGai.fraSurBou[2] variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[966]] /* dc.roo.irRadGai.AEpsSurBou[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[317]] /* dc.roo.irRadGai.sumAEpsInv variable */));
  threadData->lastEquationSolved = 2031;
}

/*
equation index: 2032
type: SIMPLE_ASSIGN
dc.roo.irRadGai.conSurBou[2].Q_flow = (-dc.roo.irRadGai.fraSurBou[2]) * dc.roo.irRadGai.Q_flow
*/
void s000_baseline_eqFunction_2032(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2032};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[296]] /* dc.roo.irRadGai.conSurBou[2].Q_flow variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[309]] /* dc.roo.irRadGai.fraSurBou[2] variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[282]] /* dc.roo.irRadGai.Q_flow variable */));
  threadData->lastEquationSolved = 2032;
}

/*
equation index: 2033
type: SIMPLE_ASSIGN
dc.roo.air.cfd.u[2] = (-dc.roo.irRadExc.conSurBou[2].Q_flow) - dc.roo.irRadGai.conSurBou[2].Q_flow
*/
void s000_baseline_eqFunction_2033(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2033};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[161]] /* dc.roo.air.cfd.u[2] variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[274]] /* dc.roo.irRadExc.conSurBou[2].Q_flow variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[296]] /* dc.roo.irRadGai.conSurBou[2].Q_flow variable */);
  threadData->lastEquationSolved = 2033;
}

/*
equation index: 2034
type: SIMPLE_ASSIGN
$DER.dc.roo.air.cfd.uInt[2] = dc.roo.air.cfd.u[2]
*/
void s000_baseline_eqFunction_2034(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2034};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[47]] /* der(dc.roo.air.cfd.uInt[2]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[161]] /* dc.roo.air.cfd.u[2] variable */);
  threadData->lastEquationSolved = 2034;
}

/*
equation index: 2035
type: SIMPLE_ASSIGN
dc.roo.irRadGai.fraSurBou[1] = dc.roo.irRadGai.AEpsSurBou[1] * dc.roo.irRadGai.sumAEpsInv
*/
void s000_baseline_eqFunction_2035(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2035};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* dc.roo.irRadGai.fraSurBou[1] variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[965]] /* dc.roo.irRadGai.AEpsSurBou[1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[317]] /* dc.roo.irRadGai.sumAEpsInv variable */));
  threadData->lastEquationSolved = 2035;
}

/*
equation index: 2036
type: SIMPLE_ASSIGN
dc.roo.irRadGai.conSurBou[1].Q_flow = (-dc.roo.irRadGai.fraSurBou[1]) * dc.roo.irRadGai.Q_flow
*/
void s000_baseline_eqFunction_2036(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2036};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[295]] /* dc.roo.irRadGai.conSurBou[1].Q_flow variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* dc.roo.irRadGai.fraSurBou[1] variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[282]] /* dc.roo.irRadGai.Q_flow variable */));
  threadData->lastEquationSolved = 2036;
}

/*
equation index: 2037
type: SIMPLE_ASSIGN
dc.roo.air.cfd.u[1] = (-dc.roo.irRadExc.conSurBou[1].Q_flow) - dc.roo.irRadGai.conSurBou[1].Q_flow
*/
void s000_baseline_eqFunction_2037(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2037};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[160]] /* dc.roo.air.cfd.u[1] variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[273]] /* dc.roo.irRadExc.conSurBou[1].Q_flow variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[295]] /* dc.roo.irRadGai.conSurBou[1].Q_flow variable */);
  threadData->lastEquationSolved = 2037;
}

/*
equation index: 2038
type: SIMPLE_ASSIGN
$DER.dc.roo.air.cfd.uInt[1] = dc.roo.air.cfd.u[1]
*/
void s000_baseline_eqFunction_2038(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2038};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[46]] /* der(dc.roo.air.cfd.uInt[1]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[160]] /* dc.roo.air.cfd.u[1] variable */);
  threadData->lastEquationSolved = 2038;
}

/*
equation index: 2039
type: SIMPLE_ASSIGN
dc.roo.irRadGai.fraConBou[1] = dc.roo.irRadGai.AEpsConBou[1] * dc.roo.irRadGai.sumAEpsInv
*/
void s000_baseline_eqFunction_2039(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2039};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[301]] /* dc.roo.irRadGai.fraConBou[1] variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[959]] /* dc.roo.irRadGai.AEpsConBou[1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[317]] /* dc.roo.irRadGai.sumAEpsInv variable */));
  threadData->lastEquationSolved = 2039;
}

/*
equation index: 2040
type: SIMPLE_ASSIGN
dc.roo.irRadGai.fraConPar_b[1] = dc.roo.irRadGai.AEpsConPar_b[1] * dc.roo.irRadGai.sumAEpsInv
*/
void s000_baseline_eqFunction_2040(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2040};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[307]] /* dc.roo.irRadGai.fraConPar_b[1] variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[964]] /* dc.roo.irRadGai.AEpsConPar_b[1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[317]] /* dc.roo.irRadGai.sumAEpsInv variable */));
  threadData->lastEquationSolved = 2040;
}

/*
equation index: 2041
type: SIMPLE_ASSIGN
dc.roo.irRadGai.fraConPar_a[1] = dc.roo.irRadGai.AEpsConPar_a[1] * dc.roo.irRadGai.sumAEpsInv
*/
void s000_baseline_eqFunction_2041(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2041};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[306]] /* dc.roo.irRadGai.fraConPar_a[1] variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[963]] /* dc.roo.irRadGai.AEpsConPar_a[1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[317]] /* dc.roo.irRadGai.sumAEpsInv variable */));
  threadData->lastEquationSolved = 2041;
}

/*
equation index: 2042
type: SIMPLE_ASSIGN
dc.roo.irRadGai.fraConExtWinFra[1] = dc.roo.irRadGai.AEpsConExtWinFra[1] * dc.roo.irRadGai.sumAEpsInv
*/
void s000_baseline_eqFunction_2042(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2042};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[303]] /* dc.roo.irRadGai.fraConExtWinFra[1] variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[961]] /* dc.roo.irRadGai.AEpsConExtWinFra[1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[317]] /* dc.roo.irRadGai.sumAEpsInv variable */));
  threadData->lastEquationSolved = 2042;
}

/*
equation index: 2043
type: SIMPLE_ASSIGN
dc.roo.irRadGai.fraConExtWinGla[1] = dc.roo.irRadGai.AEpsConExtWinUns[1] * dc.roo.irRadGai.sumAEpsInv
*/
void s000_baseline_eqFunction_2043(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2043};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[304]] /* dc.roo.irRadGai.fraConExtWinGla[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[280]] /* dc.roo.irRadGai.AEpsConExtWinUns[1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[317]] /* dc.roo.irRadGai.sumAEpsInv variable */));
  threadData->lastEquationSolved = 2043;
}

/*
equation index: 2044
type: SIMPLE_ASSIGN
dc.roo.irRadGai.JOutConExtWin[1] = dc.roo.irRadGai.fraConExtWinGla[1] * dc.roo.irRadGai.Q_flow
*/
void s000_baseline_eqFunction_2044(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2044};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[281]] /* dc.roo.irRadGai.JOutConExtWin[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[304]] /* dc.roo.irRadGai.fraConExtWinGla[1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[282]] /* dc.roo.irRadGai.Q_flow variable */));
  threadData->lastEquationSolved = 2044;
}

/*
equation index: 2045
type: SIMPLE_ASSIGN
dc.roo.irRadGai.fraConExtWinOpa[1] = dc.roo.irRadGai.AEpsConExtWinOpa[1] * dc.roo.irRadGai.sumAEpsInv
*/
void s000_baseline_eqFunction_2045(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2045};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[305]] /* dc.roo.irRadGai.fraConExtWinOpa[1] variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[962]] /* dc.roo.irRadGai.AEpsConExtWinOpa[1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[317]] /* dc.roo.irRadGai.sumAEpsInv variable */));
  threadData->lastEquationSolved = 2045;
}

/*
equation index: 2046
type: SIMPLE_ASSIGN
dc.roo.irRadGai.fraConExt[1] = dc.roo.irRadGai.AEpsConExt[1] * dc.roo.irRadGai.sumAEpsInv
*/
void s000_baseline_eqFunction_2046(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2046};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[302]] /* dc.roo.irRadGai.fraConExt[1] variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[960]] /* dc.roo.irRadGai.AEpsConExt[1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[317]] /* dc.roo.irRadGai.sumAEpsInv variable */));
  threadData->lastEquationSolved = 2046;
}

/*
equation index: 2047
type: SIMPLE_ASSIGN
fanTable.timeScaled = time
*/
void s000_baseline_eqFunction_2047(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2047};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[441]] /* fanTable.timeScaled variable */) = data->localData[0]->timeValue;
  threadData->lastEquationSolved = 2047;
}

/*
equation index: 2048
type: SIMPLE_ASSIGN
TsupTable.timeScaled = time
*/
void s000_baseline_eqFunction_2048(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2048};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[118]] /* TsupTable.timeScaled variable */) = data->localData[0]->timeValue;
  threadData->lastEquationSolved = 2048;
}

/*
equation index: 2049
type: SIMPLE_ASSIGN
dc.retRes[1].dp = dc.roo.air.fluInt.p - dc.retSink.p
*/
void s000_baseline_eqFunction_2049(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2049};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[131]] /* dc.retRes[1].dp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[45]] /* dc.roo.air.fluInt.p STATE(1) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[141]] /* dc.retSink.p PARAM */);
  threadData->lastEquationSolved = 2049;
}

void s000_baseline_eqFunction_2050(DATA*, threadData_t*);
/*
equation index: 2051
indexNonlinear: 8
type: NONLINEAR

vars: {dc.roo.air.cfd.u[16]}
eqns: {2050}
*/
void s000_baseline_eqFunction_2051(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2051};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 2051 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[8].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[175]] /* dc.roo.air.cfd.u[16] variable */);
  retValue = solve_nonlinear_system(data, threadData, 8);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2051};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 2051 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[175]] /* dc.roo.air.cfd.u[16] variable */) = data->simulationInfo->nonlinearSystemData[8].nlsx[0];
  threadData->lastEquationSolved = 2051;
}

/*
equation index: 2052
type: SIMPLE_ASSIGN
$DER.dc.roo.air.cfd.uInt[16] = dc.roo.air.cfd.u[16]
*/
void s000_baseline_eqFunction_2052(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2052};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[61]] /* der(dc.roo.air.cfd.uInt[16]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[175]] /* dc.roo.air.cfd.u[16] variable */);
  threadData->lastEquationSolved = 2052;
}

/*
equation index: 2053
type: SIMPLE_ASSIGN
dc.roo.air.fluInt.ports_mXi_flow[7,1] = dc.roo.air.cfd.u[16] * dc.roo.air.cfd.u[40]
*/
void s000_baseline_eqFunction_2053(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2053};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[236]] /* dc.roo.air.fluInt.ports_mXi_flow[7,1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[175]] /* dc.roo.air.cfd.u[16] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[199]] /* dc.roo.air.cfd.u[40] variable */));
  threadData->lastEquationSolved = 2053;
}

/*
equation index: 2054
type: SIMPLE_ASSIGN
dc.T_ret_out[1] = 273.15 + ((if (-dc.roo.air.cfd.u[16]) > 0.0 then dc.retRes[1].port_b.h_outflow else dc.retSink.ports[6].h_outflow) + (-2.5010145e6) * (if (-dc.roo.air.cfd.u[16]) > 0.0 then dc.roo.air.cfd.u[40] else dc.retSink.X[1])) / (1006.0 * (1.0 - (if (-dc.roo.air.cfd.u[16]) > 0.0 then dc.roo.air.cfd.u[40] else dc.retSink.X[1])) + 1860.0 * (if (-dc.roo.air.cfd.u[16]) > 0.0 then dc.roo.air.cfd.u[40] else dc.retSink.X[1]))
*/
void s000_baseline_eqFunction_2054(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2054};
  modelica_boolean tmp54;
  modelica_real tmp55;
  modelica_real tmp56;
  modelica_boolean tmp57;
  modelica_boolean tmp58;
  modelica_real tmp59;
  modelica_real tmp60;
  modelica_boolean tmp61;
  modelica_boolean tmp62;
  modelica_real tmp63;
  modelica_real tmp64;
  modelica_boolean tmp65;
  modelica_boolean tmp66;
  modelica_real tmp67;
  modelica_real tmp68;
  modelica_boolean tmp69;
  tmp57 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[96]] /* dc.retRes[1].m_flow_nominal_pos PARAM */),1e-15);
  tmp55 = fabs((tmp57?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[96]] /* dc.retRes[1].m_flow_nominal_pos PARAM */):1.0));
  tmp56 = 0.0;
  relationhysteresis(data, &tmp54, (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[175]] /* dc.roo.air.cfd.u[16] variable */)), 0.0, tmp55, tmp56, 5, Greater, GreaterZC);
  tmp61 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[96]] /* dc.retRes[1].m_flow_nominal_pos PARAM */),1e-15);
  tmp59 = fabs((tmp61?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[96]] /* dc.retRes[1].m_flow_nominal_pos PARAM */):1.0));
  tmp60 = 0.0;
  relationhysteresis(data, &tmp58, (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[175]] /* dc.roo.air.cfd.u[16] variable */)), 0.0, tmp59, tmp60, 5, Greater, GreaterZC);
  tmp65 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[96]] /* dc.retRes[1].m_flow_nominal_pos PARAM */),1e-15);
  tmp63 = fabs((tmp65?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[96]] /* dc.retRes[1].m_flow_nominal_pos PARAM */):1.0));
  tmp64 = 0.0;
  relationhysteresis(data, &tmp62, (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[175]] /* dc.roo.air.cfd.u[16] variable */)), 0.0, tmp63, tmp64, 5, Greater, GreaterZC);
  tmp69 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[96]] /* dc.retRes[1].m_flow_nominal_pos PARAM */),1e-15);
  tmp67 = fabs((tmp69?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[96]] /* dc.retRes[1].m_flow_nominal_pos PARAM */):1.0));
  tmp68 = 0.0;
  relationhysteresis(data, &tmp66, (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[175]] /* dc.roo.air.cfd.u[16] variable */)), 0.0, tmp67, tmp68, 5, Greater, GreaterZC);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[119]] /* dc.T_ret_out[1] variable */) = 273.15 + DIVISION_SIM((tmp54?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[149]] /* dc.retRes[1].port_b.h_outflow variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[158]] /* dc.retSink.ports[6].h_outflow variable */)) + (-2.5010145e6) * ((tmp58?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[199]] /* dc.roo.air.cfd.u[40] variable */):(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[139]] /* dc.retSink.X[1] PARAM */))),(1006.0) * (1.0 - ((tmp62?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[199]] /* dc.roo.air.cfd.u[40] variable */):(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[139]] /* dc.retSink.X[1] PARAM */)))) + (1860.0) * ((tmp66?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[199]] /* dc.roo.air.cfd.u[40] variable */):(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[139]] /* dc.retSink.X[1] PARAM */))),"1006.0 * (1.0 - (if (-dc.roo.air.cfd.u[16]) > 0.0 then dc.roo.air.cfd.u[40] else dc.retSink.X[1])) + 1860.0 * (if (-dc.roo.air.cfd.u[16]) > 0.0 then dc.roo.air.cfd.u[40] else dc.retSink.X[1])",equationIndexes);
  threadData->lastEquationSolved = 2054;
}

/*
equation index: 2055
type: SIMPLE_ASSIGN
dc.retRes[2].dp = dc.roo.air.fluInt.p - dc.retSink.p
*/
void s000_baseline_eqFunction_2055(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2055};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[132]] /* dc.retRes[2].dp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[45]] /* dc.roo.air.fluInt.p STATE(1) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[141]] /* dc.retSink.p PARAM */);
  threadData->lastEquationSolved = 2055;
}

void s000_baseline_eqFunction_2056(DATA*, threadData_t*);
/*
equation index: 2057
indexNonlinear: 9
type: NONLINEAR

vars: {dc.roo.air.cfd.u[17]}
eqns: {2056}
*/
void s000_baseline_eqFunction_2057(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2057};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 2057 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[9].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[176]] /* dc.roo.air.cfd.u[17] variable */);
  retValue = solve_nonlinear_system(data, threadData, 9);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2057};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 2057 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[176]] /* dc.roo.air.cfd.u[17] variable */) = data->simulationInfo->nonlinearSystemData[9].nlsx[0];
  threadData->lastEquationSolved = 2057;
}

/*
equation index: 2058
type: SIMPLE_ASSIGN
$DER.dc.roo.air.cfd.uInt[17] = dc.roo.air.cfd.u[17]
*/
void s000_baseline_eqFunction_2058(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2058};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[62]] /* der(dc.roo.air.cfd.uInt[17]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[176]] /* dc.roo.air.cfd.u[17] variable */);
  threadData->lastEquationSolved = 2058;
}

/*
equation index: 2059
type: SIMPLE_ASSIGN
dc.roo.air.fluInt.ports_mXi_flow[8,1] = dc.roo.air.cfd.u[17] * dc.roo.air.cfd.u[41]
*/
void s000_baseline_eqFunction_2059(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2059};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[237]] /* dc.roo.air.fluInt.ports_mXi_flow[8,1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[176]] /* dc.roo.air.cfd.u[17] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[200]] /* dc.roo.air.cfd.u[41] variable */));
  threadData->lastEquationSolved = 2059;
}

/*
equation index: 2060
type: SIMPLE_ASSIGN
dc.T_ret_out[2] = 273.15 + ((if (-dc.roo.air.cfd.u[17]) > 0.0 then dc.retRes[2].port_b.h_outflow else dc.retSink.ports[6].h_outflow) + (-2.5010145e6) * (if (-dc.roo.air.cfd.u[17]) > 0.0 then dc.roo.air.cfd.u[41] else dc.retSink.X[1])) / (1006.0 * (1.0 - (if (-dc.roo.air.cfd.u[17]) > 0.0 then dc.roo.air.cfd.u[41] else dc.retSink.X[1])) + 1860.0 * (if (-dc.roo.air.cfd.u[17]) > 0.0 then dc.roo.air.cfd.u[41] else dc.retSink.X[1]))
*/
void s000_baseline_eqFunction_2060(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2060};
  modelica_boolean tmp70;
  modelica_real tmp71;
  modelica_real tmp72;
  modelica_boolean tmp73;
  modelica_boolean tmp74;
  modelica_real tmp75;
  modelica_real tmp76;
  modelica_boolean tmp77;
  modelica_boolean tmp78;
  modelica_real tmp79;
  modelica_real tmp80;
  modelica_boolean tmp81;
  modelica_boolean tmp82;
  modelica_real tmp83;
  modelica_real tmp84;
  modelica_boolean tmp85;
  tmp73 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[97]] /* dc.retRes[2].m_flow_nominal_pos PARAM */),1e-15);
  tmp71 = fabs((tmp73?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[97]] /* dc.retRes[2].m_flow_nominal_pos PARAM */):1.0));
  tmp72 = 0.0;
  relationhysteresis(data, &tmp70, (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[176]] /* dc.roo.air.cfd.u[17] variable */)), 0.0, tmp71, tmp72, 12, Greater, GreaterZC);
  tmp77 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[97]] /* dc.retRes[2].m_flow_nominal_pos PARAM */),1e-15);
  tmp75 = fabs((tmp77?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[97]] /* dc.retRes[2].m_flow_nominal_pos PARAM */):1.0));
  tmp76 = 0.0;
  relationhysteresis(data, &tmp74, (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[176]] /* dc.roo.air.cfd.u[17] variable */)), 0.0, tmp75, tmp76, 12, Greater, GreaterZC);
  tmp81 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[97]] /* dc.retRes[2].m_flow_nominal_pos PARAM */),1e-15);
  tmp79 = fabs((tmp81?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[97]] /* dc.retRes[2].m_flow_nominal_pos PARAM */):1.0));
  tmp80 = 0.0;
  relationhysteresis(data, &tmp78, (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[176]] /* dc.roo.air.cfd.u[17] variable */)), 0.0, tmp79, tmp80, 12, Greater, GreaterZC);
  tmp85 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[97]] /* dc.retRes[2].m_flow_nominal_pos PARAM */),1e-15);
  tmp83 = fabs((tmp85?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[97]] /* dc.retRes[2].m_flow_nominal_pos PARAM */):1.0));
  tmp84 = 0.0;
  relationhysteresis(data, &tmp82, (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[176]] /* dc.roo.air.cfd.u[17] variable */)), 0.0, tmp83, tmp84, 12, Greater, GreaterZC);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[120]] /* dc.T_ret_out[2] variable */) = 273.15 + DIVISION_SIM((tmp70?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[150]] /* dc.retRes[2].port_b.h_outflow variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[158]] /* dc.retSink.ports[6].h_outflow variable */)) + (-2.5010145e6) * ((tmp74?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[200]] /* dc.roo.air.cfd.u[41] variable */):(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[139]] /* dc.retSink.X[1] PARAM */))),(1006.0) * (1.0 - ((tmp78?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[200]] /* dc.roo.air.cfd.u[41] variable */):(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[139]] /* dc.retSink.X[1] PARAM */)))) + (1860.0) * ((tmp82?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[200]] /* dc.roo.air.cfd.u[41] variable */):(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[139]] /* dc.retSink.X[1] PARAM */))),"1006.0 * (1.0 - (if (-dc.roo.air.cfd.u[17]) > 0.0 then dc.roo.air.cfd.u[41] else dc.retSink.X[1])) + 1860.0 * (if (-dc.roo.air.cfd.u[17]) > 0.0 then dc.roo.air.cfd.u[41] else dc.retSink.X[1])",equationIndexes);
  threadData->lastEquationSolved = 2060;
}

/*
equation index: 2061
type: SIMPLE_ASSIGN
dc.retRes[3].dp = dc.roo.air.fluInt.p - dc.retSink.p
*/
void s000_baseline_eqFunction_2061(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2061};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[133]] /* dc.retRes[3].dp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[45]] /* dc.roo.air.fluInt.p STATE(1) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[141]] /* dc.retSink.p PARAM */);
  threadData->lastEquationSolved = 2061;
}

void s000_baseline_eqFunction_2062(DATA*, threadData_t*);
/*
equation index: 2063
indexNonlinear: 10
type: NONLINEAR

vars: {dc.roo.air.cfd.u[18]}
eqns: {2062}
*/
void s000_baseline_eqFunction_2063(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2063};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 2063 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[10].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[177]] /* dc.roo.air.cfd.u[18] variable */);
  retValue = solve_nonlinear_system(data, threadData, 10);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2063};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 2063 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[177]] /* dc.roo.air.cfd.u[18] variable */) = data->simulationInfo->nonlinearSystemData[10].nlsx[0];
  threadData->lastEquationSolved = 2063;
}

/*
equation index: 2064
type: SIMPLE_ASSIGN
$DER.dc.roo.air.cfd.uInt[18] = dc.roo.air.cfd.u[18]
*/
void s000_baseline_eqFunction_2064(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2064};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[63]] /* der(dc.roo.air.cfd.uInt[18]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[177]] /* dc.roo.air.cfd.u[18] variable */);
  threadData->lastEquationSolved = 2064;
}

/*
equation index: 2065
type: SIMPLE_ASSIGN
dc.roo.air.fluInt.ports_mXi_flow[9,1] = dc.roo.air.cfd.u[18] * dc.roo.air.cfd.u[42]
*/
void s000_baseline_eqFunction_2065(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2065};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[238]] /* dc.roo.air.fluInt.ports_mXi_flow[9,1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[177]] /* dc.roo.air.cfd.u[18] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[201]] /* dc.roo.air.cfd.u[42] variable */));
  threadData->lastEquationSolved = 2065;
}

/*
equation index: 2066
type: SIMPLE_ASSIGN
dc.T_ret_out[3] = 273.15 + ((if (-dc.roo.air.cfd.u[18]) > 0.0 then dc.retRes[3].port_b.h_outflow else dc.retSink.ports[6].h_outflow) + (-2.5010145e6) * (if (-dc.roo.air.cfd.u[18]) > 0.0 then dc.roo.air.cfd.u[42] else dc.retSink.X[1])) / (1006.0 * (1.0 - (if (-dc.roo.air.cfd.u[18]) > 0.0 then dc.roo.air.cfd.u[42] else dc.retSink.X[1])) + 1860.0 * (if (-dc.roo.air.cfd.u[18]) > 0.0 then dc.roo.air.cfd.u[42] else dc.retSink.X[1]))
*/
void s000_baseline_eqFunction_2066(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2066};
  modelica_boolean tmp86;
  modelica_real tmp87;
  modelica_real tmp88;
  modelica_boolean tmp89;
  modelica_boolean tmp90;
  modelica_real tmp91;
  modelica_real tmp92;
  modelica_boolean tmp93;
  modelica_boolean tmp94;
  modelica_real tmp95;
  modelica_real tmp96;
  modelica_boolean tmp97;
  modelica_boolean tmp98;
  modelica_real tmp99;
  modelica_real tmp100;
  modelica_boolean tmp101;
  tmp89 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[98]] /* dc.retRes[3].m_flow_nominal_pos PARAM */),1e-15);
  tmp87 = fabs((tmp89?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[98]] /* dc.retRes[3].m_flow_nominal_pos PARAM */):1.0));
  tmp88 = 0.0;
  relationhysteresis(data, &tmp86, (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[177]] /* dc.roo.air.cfd.u[18] variable */)), 0.0, tmp87, tmp88, 9, Greater, GreaterZC);
  tmp93 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[98]] /* dc.retRes[3].m_flow_nominal_pos PARAM */),1e-15);
  tmp91 = fabs((tmp93?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[98]] /* dc.retRes[3].m_flow_nominal_pos PARAM */):1.0));
  tmp92 = 0.0;
  relationhysteresis(data, &tmp90, (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[177]] /* dc.roo.air.cfd.u[18] variable */)), 0.0, tmp91, tmp92, 9, Greater, GreaterZC);
  tmp97 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[98]] /* dc.retRes[3].m_flow_nominal_pos PARAM */),1e-15);
  tmp95 = fabs((tmp97?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[98]] /* dc.retRes[3].m_flow_nominal_pos PARAM */):1.0));
  tmp96 = 0.0;
  relationhysteresis(data, &tmp94, (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[177]] /* dc.roo.air.cfd.u[18] variable */)), 0.0, tmp95, tmp96, 9, Greater, GreaterZC);
  tmp101 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[98]] /* dc.retRes[3].m_flow_nominal_pos PARAM */),1e-15);
  tmp99 = fabs((tmp101?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[98]] /* dc.retRes[3].m_flow_nominal_pos PARAM */):1.0));
  tmp100 = 0.0;
  relationhysteresis(data, &tmp98, (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[177]] /* dc.roo.air.cfd.u[18] variable */)), 0.0, tmp99, tmp100, 9, Greater, GreaterZC);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[121]] /* dc.T_ret_out[3] variable */) = 273.15 + DIVISION_SIM((tmp86?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[151]] /* dc.retRes[3].port_b.h_outflow variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[158]] /* dc.retSink.ports[6].h_outflow variable */)) + (-2.5010145e6) * ((tmp90?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[201]] /* dc.roo.air.cfd.u[42] variable */):(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[139]] /* dc.retSink.X[1] PARAM */))),(1006.0) * (1.0 - ((tmp94?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[201]] /* dc.roo.air.cfd.u[42] variable */):(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[139]] /* dc.retSink.X[1] PARAM */)))) + (1860.0) * ((tmp98?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[201]] /* dc.roo.air.cfd.u[42] variable */):(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[139]] /* dc.retSink.X[1] PARAM */))),"1006.0 * (1.0 - (if (-dc.roo.air.cfd.u[18]) > 0.0 then dc.roo.air.cfd.u[42] else dc.retSink.X[1])) + 1860.0 * (if (-dc.roo.air.cfd.u[18]) > 0.0 then dc.roo.air.cfd.u[42] else dc.retSink.X[1])",equationIndexes);
  threadData->lastEquationSolved = 2066;
}

/*
equation index: 2067
type: SIMPLE_ASSIGN
dc.retRes[4].dp = dc.roo.air.fluInt.p - dc.retSink.p
*/
void s000_baseline_eqFunction_2067(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2067};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[134]] /* dc.retRes[4].dp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[45]] /* dc.roo.air.fluInt.p STATE(1) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[141]] /* dc.retSink.p PARAM */);
  threadData->lastEquationSolved = 2067;
}

void s000_baseline_eqFunction_2068(DATA*, threadData_t*);
/*
equation index: 2069
indexNonlinear: 11
type: NONLINEAR

vars: {dc.roo.air.cfd.u[19]}
eqns: {2068}
*/
void s000_baseline_eqFunction_2069(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2069};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 2069 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[11].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* dc.roo.air.cfd.u[19] variable */);
  retValue = solve_nonlinear_system(data, threadData, 11);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2069};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 2069 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* dc.roo.air.cfd.u[19] variable */) = data->simulationInfo->nonlinearSystemData[11].nlsx[0];
  threadData->lastEquationSolved = 2069;
}

/*
equation index: 2070
type: SIMPLE_ASSIGN
$DER.dc.roo.air.cfd.uInt[19] = dc.roo.air.cfd.u[19]
*/
void s000_baseline_eqFunction_2070(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2070};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[64]] /* der(dc.roo.air.cfd.uInt[19]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* dc.roo.air.cfd.u[19] variable */);
  threadData->lastEquationSolved = 2070;
}

/*
equation index: 2071
type: SIMPLE_ASSIGN
dc.roo.air.fluInt.ports_mXi_flow[10,1] = dc.roo.air.cfd.u[19] * dc.roo.air.cfd.u[43]
*/
void s000_baseline_eqFunction_2071(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2071};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[239]] /* dc.roo.air.fluInt.ports_mXi_flow[10,1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* dc.roo.air.cfd.u[19] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[202]] /* dc.roo.air.cfd.u[43] variable */));
  threadData->lastEquationSolved = 2071;
}

/*
equation index: 2072
type: SIMPLE_ASSIGN
dc.T_ret_out[4] = 273.15 + ((if (-dc.roo.air.cfd.u[19]) > 0.0 then dc.retRes[4].port_b.h_outflow else dc.retSink.ports[6].h_outflow) + (-2.5010145e6) * (if (-dc.roo.air.cfd.u[19]) > 0.0 then dc.roo.air.cfd.u[43] else dc.retSink.X[1])) / (1006.0 * (1.0 - (if (-dc.roo.air.cfd.u[19]) > 0.0 then dc.roo.air.cfd.u[43] else dc.retSink.X[1])) + 1860.0 * (if (-dc.roo.air.cfd.u[19]) > 0.0 then dc.roo.air.cfd.u[43] else dc.retSink.X[1]))
*/
void s000_baseline_eqFunction_2072(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2072};
  modelica_boolean tmp102;
  modelica_real tmp103;
  modelica_real tmp104;
  modelica_boolean tmp105;
  modelica_boolean tmp106;
  modelica_real tmp107;
  modelica_real tmp108;
  modelica_boolean tmp109;
  modelica_boolean tmp110;
  modelica_real tmp111;
  modelica_real tmp112;
  modelica_boolean tmp113;
  modelica_boolean tmp114;
  modelica_real tmp115;
  modelica_real tmp116;
  modelica_boolean tmp117;
  tmp105 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[99]] /* dc.retRes[4].m_flow_nominal_pos PARAM */),1e-15);
  tmp103 = fabs((tmp105?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[99]] /* dc.retRes[4].m_flow_nominal_pos PARAM */):1.0));
  tmp104 = 0.0;
  relationhysteresis(data, &tmp102, (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* dc.roo.air.cfd.u[19] variable */)), 0.0, tmp103, tmp104, 13, Greater, GreaterZC);
  tmp109 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[99]] /* dc.retRes[4].m_flow_nominal_pos PARAM */),1e-15);
  tmp107 = fabs((tmp109?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[99]] /* dc.retRes[4].m_flow_nominal_pos PARAM */):1.0));
  tmp108 = 0.0;
  relationhysteresis(data, &tmp106, (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* dc.roo.air.cfd.u[19] variable */)), 0.0, tmp107, tmp108, 13, Greater, GreaterZC);
  tmp113 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[99]] /* dc.retRes[4].m_flow_nominal_pos PARAM */),1e-15);
  tmp111 = fabs((tmp113?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[99]] /* dc.retRes[4].m_flow_nominal_pos PARAM */):1.0));
  tmp112 = 0.0;
  relationhysteresis(data, &tmp110, (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* dc.roo.air.cfd.u[19] variable */)), 0.0, tmp111, tmp112, 13, Greater, GreaterZC);
  tmp117 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[99]] /* dc.retRes[4].m_flow_nominal_pos PARAM */),1e-15);
  tmp115 = fabs((tmp117?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[99]] /* dc.retRes[4].m_flow_nominal_pos PARAM */):1.0));
  tmp116 = 0.0;
  relationhysteresis(data, &tmp114, (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* dc.roo.air.cfd.u[19] variable */)), 0.0, tmp115, tmp116, 13, Greater, GreaterZC);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[122]] /* dc.T_ret_out[4] variable */) = 273.15 + DIVISION_SIM((tmp102?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[152]] /* dc.retRes[4].port_b.h_outflow variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[158]] /* dc.retSink.ports[6].h_outflow variable */)) + (-2.5010145e6) * ((tmp106?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[202]] /* dc.roo.air.cfd.u[43] variable */):(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[139]] /* dc.retSink.X[1] PARAM */))),(1006.0) * (1.0 - ((tmp110?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[202]] /* dc.roo.air.cfd.u[43] variable */):(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[139]] /* dc.retSink.X[1] PARAM */)))) + (1860.0) * ((tmp114?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[202]] /* dc.roo.air.cfd.u[43] variable */):(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[139]] /* dc.retSink.X[1] PARAM */))),"1006.0 * (1.0 - (if (-dc.roo.air.cfd.u[19]) > 0.0 then dc.roo.air.cfd.u[43] else dc.retSink.X[1])) + 1860.0 * (if (-dc.roo.air.cfd.u[19]) > 0.0 then dc.roo.air.cfd.u[43] else dc.retSink.X[1])",equationIndexes);
  threadData->lastEquationSolved = 2072;
}

/*
equation index: 2073
type: SIMPLE_ASSIGN
dc.retRes[5].dp = dc.roo.air.fluInt.p - dc.retSink.p
*/
void s000_baseline_eqFunction_2073(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2073};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[135]] /* dc.retRes[5].dp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[45]] /* dc.roo.air.fluInt.p STATE(1) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[141]] /* dc.retSink.p PARAM */);
  threadData->lastEquationSolved = 2073;
}

void s000_baseline_eqFunction_2074(DATA*, threadData_t*);
/*
equation index: 2075
indexNonlinear: 12
type: NONLINEAR

vars: {dc.roo.air.cfd.u[20]}
eqns: {2074}
*/
void s000_baseline_eqFunction_2075(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2075};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 2075 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[12].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[179]] /* dc.roo.air.cfd.u[20] variable */);
  retValue = solve_nonlinear_system(data, threadData, 12);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2075};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 2075 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[179]] /* dc.roo.air.cfd.u[20] variable */) = data->simulationInfo->nonlinearSystemData[12].nlsx[0];
  threadData->lastEquationSolved = 2075;
}

/*
equation index: 2076
type: SIMPLE_ASSIGN
$DER.dc.roo.air.cfd.uInt[20] = dc.roo.air.cfd.u[20]
*/
void s000_baseline_eqFunction_2076(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2076};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[65]] /* der(dc.roo.air.cfd.uInt[20]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[179]] /* dc.roo.air.cfd.u[20] variable */);
  threadData->lastEquationSolved = 2076;
}

/*
equation index: 2077
type: SIMPLE_ASSIGN
dc.roo.air.fluInt.ports_mXi_flow[11,1] = dc.roo.air.cfd.u[20] * dc.roo.air.cfd.u[44]
*/
void s000_baseline_eqFunction_2077(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2077};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[240]] /* dc.roo.air.fluInt.ports_mXi_flow[11,1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[179]] /* dc.roo.air.cfd.u[20] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[203]] /* dc.roo.air.cfd.u[44] variable */));
  threadData->lastEquationSolved = 2077;
}

/*
equation index: 2078
type: SIMPLE_ASSIGN
dc.T_ret_out[5] = 273.15 + ((if (-dc.roo.air.cfd.u[20]) > 0.0 then dc.retRes[5].port_b.h_outflow else dc.retSink.ports[6].h_outflow) + (-2.5010145e6) * (if (-dc.roo.air.cfd.u[20]) > 0.0 then dc.roo.air.cfd.u[44] else dc.retSink.X[1])) / (1006.0 * (1.0 - (if (-dc.roo.air.cfd.u[20]) > 0.0 then dc.roo.air.cfd.u[44] else dc.retSink.X[1])) + 1860.0 * (if (-dc.roo.air.cfd.u[20]) > 0.0 then dc.roo.air.cfd.u[44] else dc.retSink.X[1]))
*/
void s000_baseline_eqFunction_2078(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2078};
  modelica_boolean tmp118;
  modelica_real tmp119;
  modelica_real tmp120;
  modelica_boolean tmp121;
  modelica_boolean tmp122;
  modelica_real tmp123;
  modelica_real tmp124;
  modelica_boolean tmp125;
  modelica_boolean tmp126;
  modelica_real tmp127;
  modelica_real tmp128;
  modelica_boolean tmp129;
  modelica_boolean tmp130;
  modelica_real tmp131;
  modelica_real tmp132;
  modelica_boolean tmp133;
  tmp121 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[100]] /* dc.retRes[5].m_flow_nominal_pos PARAM */),1e-15);
  tmp119 = fabs((tmp121?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[100]] /* dc.retRes[5].m_flow_nominal_pos PARAM */):1.0));
  tmp120 = 0.0;
  relationhysteresis(data, &tmp118, (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[179]] /* dc.roo.air.cfd.u[20] variable */)), 0.0, tmp119, tmp120, 4, Greater, GreaterZC);
  tmp125 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[100]] /* dc.retRes[5].m_flow_nominal_pos PARAM */),1e-15);
  tmp123 = fabs((tmp125?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[100]] /* dc.retRes[5].m_flow_nominal_pos PARAM */):1.0));
  tmp124 = 0.0;
  relationhysteresis(data, &tmp122, (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[179]] /* dc.roo.air.cfd.u[20] variable */)), 0.0, tmp123, tmp124, 4, Greater, GreaterZC);
  tmp129 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[100]] /* dc.retRes[5].m_flow_nominal_pos PARAM */),1e-15);
  tmp127 = fabs((tmp129?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[100]] /* dc.retRes[5].m_flow_nominal_pos PARAM */):1.0));
  tmp128 = 0.0;
  relationhysteresis(data, &tmp126, (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[179]] /* dc.roo.air.cfd.u[20] variable */)), 0.0, tmp127, tmp128, 4, Greater, GreaterZC);
  tmp133 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[100]] /* dc.retRes[5].m_flow_nominal_pos PARAM */),1e-15);
  tmp131 = fabs((tmp133?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[100]] /* dc.retRes[5].m_flow_nominal_pos PARAM */):1.0));
  tmp132 = 0.0;
  relationhysteresis(data, &tmp130, (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[179]] /* dc.roo.air.cfd.u[20] variable */)), 0.0, tmp131, tmp132, 4, Greater, GreaterZC);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[123]] /* dc.T_ret_out[5] variable */) = 273.15 + DIVISION_SIM((tmp118?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[153]] /* dc.retRes[5].port_b.h_outflow variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[158]] /* dc.retSink.ports[6].h_outflow variable */)) + (-2.5010145e6) * ((tmp122?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[203]] /* dc.roo.air.cfd.u[44] variable */):(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[139]] /* dc.retSink.X[1] PARAM */))),(1006.0) * (1.0 - ((tmp126?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[203]] /* dc.roo.air.cfd.u[44] variable */):(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[139]] /* dc.retSink.X[1] PARAM */)))) + (1860.0) * ((tmp130?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[203]] /* dc.roo.air.cfd.u[44] variable */):(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[139]] /* dc.retSink.X[1] PARAM */))),"1006.0 * (1.0 - (if (-dc.roo.air.cfd.u[20]) > 0.0 then dc.roo.air.cfd.u[44] else dc.retSink.X[1])) + 1860.0 * (if (-dc.roo.air.cfd.u[20]) > 0.0 then dc.roo.air.cfd.u[44] else dc.retSink.X[1])",equationIndexes);
  threadData->lastEquationSolved = 2078;
}

/*
equation index: 2079
type: SIMPLE_ASSIGN
dc.retRes[6].dp = dc.roo.air.fluInt.p - dc.retSink.p
*/
void s000_baseline_eqFunction_2079(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2079};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[136]] /* dc.retRes[6].dp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[45]] /* dc.roo.air.fluInt.p STATE(1) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[141]] /* dc.retSink.p PARAM */);
  threadData->lastEquationSolved = 2079;
}

void s000_baseline_eqFunction_2080(DATA*, threadData_t*);
/*
equation index: 2081
indexNonlinear: 13
type: NONLINEAR

vars: {dc.roo.air.cfd.u[21]}
eqns: {2080}
*/
void s000_baseline_eqFunction_2081(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2081};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 2081 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[13].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[180]] /* dc.roo.air.cfd.u[21] variable */);
  retValue = solve_nonlinear_system(data, threadData, 13);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2081};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 2081 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[180]] /* dc.roo.air.cfd.u[21] variable */) = data->simulationInfo->nonlinearSystemData[13].nlsx[0];
  threadData->lastEquationSolved = 2081;
}

/*
equation index: 2082
type: SIMPLE_ASSIGN
$DER.dc.roo.air.cfd.uInt[21] = dc.roo.air.cfd.u[21]
*/
void s000_baseline_eqFunction_2082(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2082};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[66]] /* der(dc.roo.air.cfd.uInt[21]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[180]] /* dc.roo.air.cfd.u[21] variable */);
  threadData->lastEquationSolved = 2082;
}

/*
equation index: 2083
type: SIMPLE_ASSIGN
dc.roo.air.fluInt.ports_mXi_flow[12,1] = dc.roo.air.cfd.u[21] * dc.roo.air.cfd.u[45]
*/
void s000_baseline_eqFunction_2083(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2083};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[241]] /* dc.roo.air.fluInt.ports_mXi_flow[12,1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[180]] /* dc.roo.air.cfd.u[21] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[204]] /* dc.roo.air.cfd.u[45] variable */));
  threadData->lastEquationSolved = 2083;
}

/*
equation index: 2084
type: SIMPLE_ASSIGN
dc.T_ret_out[6] = 273.15 + ((if (-dc.roo.air.cfd.u[21]) > 0.0 then dc.retRes[6].port_b.h_outflow else dc.retSink.ports[6].h_outflow) + (-2.5010145e6) * (if (-dc.roo.air.cfd.u[21]) > 0.0 then dc.roo.air.cfd.u[45] else dc.retSink.X[1])) / (1006.0 * (1.0 - (if (-dc.roo.air.cfd.u[21]) > 0.0 then dc.roo.air.cfd.u[45] else dc.retSink.X[1])) + 1860.0 * (if (-dc.roo.air.cfd.u[21]) > 0.0 then dc.roo.air.cfd.u[45] else dc.retSink.X[1]))
*/
void s000_baseline_eqFunction_2084(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2084};
  modelica_boolean tmp134;
  modelica_real tmp135;
  modelica_real tmp136;
  modelica_boolean tmp137;
  modelica_boolean tmp138;
  modelica_real tmp139;
  modelica_real tmp140;
  modelica_boolean tmp141;
  modelica_boolean tmp142;
  modelica_real tmp143;
  modelica_real tmp144;
  modelica_boolean tmp145;
  modelica_boolean tmp146;
  modelica_real tmp147;
  modelica_real tmp148;
  modelica_boolean tmp149;
  tmp137 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[101]] /* dc.retRes[6].m_flow_nominal_pos PARAM */),1e-15);
  tmp135 = fabs((tmp137?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[101]] /* dc.retRes[6].m_flow_nominal_pos PARAM */):1.0));
  tmp136 = 0.0;
  relationhysteresis(data, &tmp134, (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[180]] /* dc.roo.air.cfd.u[21] variable */)), 0.0, tmp135, tmp136, 7, Greater, GreaterZC);
  tmp141 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[101]] /* dc.retRes[6].m_flow_nominal_pos PARAM */),1e-15);
  tmp139 = fabs((tmp141?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[101]] /* dc.retRes[6].m_flow_nominal_pos PARAM */):1.0));
  tmp140 = 0.0;
  relationhysteresis(data, &tmp138, (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[180]] /* dc.roo.air.cfd.u[21] variable */)), 0.0, tmp139, tmp140, 7, Greater, GreaterZC);
  tmp145 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[101]] /* dc.retRes[6].m_flow_nominal_pos PARAM */),1e-15);
  tmp143 = fabs((tmp145?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[101]] /* dc.retRes[6].m_flow_nominal_pos PARAM */):1.0));
  tmp144 = 0.0;
  relationhysteresis(data, &tmp142, (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[180]] /* dc.roo.air.cfd.u[21] variable */)), 0.0, tmp143, tmp144, 7, Greater, GreaterZC);
  tmp149 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[101]] /* dc.retRes[6].m_flow_nominal_pos PARAM */),1e-15);
  tmp147 = fabs((tmp149?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[101]] /* dc.retRes[6].m_flow_nominal_pos PARAM */):1.0));
  tmp148 = 0.0;
  relationhysteresis(data, &tmp146, (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[180]] /* dc.roo.air.cfd.u[21] variable */)), 0.0, tmp147, tmp148, 7, Greater, GreaterZC);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[124]] /* dc.T_ret_out[6] variable */) = 273.15 + DIVISION_SIM((tmp134?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[154]] /* dc.retRes[6].port_b.h_outflow variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[158]] /* dc.retSink.ports[6].h_outflow variable */)) + (-2.5010145e6) * ((tmp138?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[204]] /* dc.roo.air.cfd.u[45] variable */):(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[139]] /* dc.retSink.X[1] PARAM */))),(1006.0) * (1.0 - ((tmp142?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[204]] /* dc.roo.air.cfd.u[45] variable */):(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[139]] /* dc.retSink.X[1] PARAM */)))) + (1860.0) * ((tmp146?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[204]] /* dc.roo.air.cfd.u[45] variable */):(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[139]] /* dc.retSink.X[1] PARAM */))),"1006.0 * (1.0 - (if (-dc.roo.air.cfd.u[21]) > 0.0 then dc.roo.air.cfd.u[45] else dc.retSink.X[1])) + 1860.0 * (if (-dc.roo.air.cfd.u[21]) > 0.0 then dc.roo.air.cfd.u[45] else dc.retSink.X[1])",equationIndexes);
  threadData->lastEquationSolved = 2084;
}

/*
equation index: 2085
type: SIMPLE_ASSIGN
dc.roo.air.cfd.u[39] = dc.sup[6].X[1]
*/
void s000_baseline_eqFunction_2085(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2085};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[198]] /* dc.roo.air.cfd.u[39] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1471]] /* dc.sup[6].X[1] PARAM */);
  threadData->lastEquationSolved = 2085;
}

/*
equation index: 2086
type: SIMPLE_ASSIGN
$DER.dc.roo.air.cfd.uInt[39] = dc.roo.air.cfd.u[39]
*/
void s000_baseline_eqFunction_2086(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2086};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[84]] /* der(dc.roo.air.cfd.uInt[39]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[198]] /* dc.roo.air.cfd.u[39] variable */);
  threadData->lastEquationSolved = 2086;
}

/*
equation index: 2087
type: SIMPLE_ASSIGN
dc.roo.air.cfd.u[9] = dc.roo.air.fluInt.p
*/
void s000_baseline_eqFunction_2087(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2087};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[168]] /* dc.roo.air.cfd.u[9] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[45]] /* dc.roo.air.fluInt.p STATE(1) */);
  threadData->lastEquationSolved = 2087;
}

/*
equation index: 2088
type: SIMPLE_ASSIGN
$DER.dc.roo.air.cfd.uInt[9] = dc.roo.air.cfd.u[9]
*/
void s000_baseline_eqFunction_2088(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2088};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[54]] /* der(dc.roo.air.cfd.uInt[9]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[168]] /* dc.roo.air.cfd.u[9] variable */);
  threadData->lastEquationSolved = 2088;
}

/*
equation index: 2089
type: SIMPLE_ASSIGN
dc.roo.air.cfd.u[38] = dc.sup[5].X[1]
*/
void s000_baseline_eqFunction_2089(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2089};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[197]] /* dc.roo.air.cfd.u[38] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1469]] /* dc.sup[5].X[1] PARAM */);
  threadData->lastEquationSolved = 2089;
}

/*
equation index: 2090
type: SIMPLE_ASSIGN
$DER.dc.roo.air.cfd.uInt[38] = dc.roo.air.cfd.u[38]
*/
void s000_baseline_eqFunction_2090(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2090};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[83]] /* der(dc.roo.air.cfd.uInt[38]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[197]] /* dc.roo.air.cfd.u[38] variable */);
  threadData->lastEquationSolved = 2090;
}

/*
equation index: 2091
type: SIMPLE_ASSIGN
dc.roo.air.cfd.u[37] = dc.sup[4].X[1]
*/
void s000_baseline_eqFunction_2091(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2091};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[196]] /* dc.roo.air.cfd.u[37] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1467]] /* dc.sup[4].X[1] PARAM */);
  threadData->lastEquationSolved = 2091;
}

/*
equation index: 2092
type: SIMPLE_ASSIGN
$DER.dc.roo.air.cfd.uInt[37] = dc.roo.air.cfd.u[37]
*/
void s000_baseline_eqFunction_2092(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2092};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[82]] /* der(dc.roo.air.cfd.uInt[37]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[196]] /* dc.roo.air.cfd.u[37] variable */);
  threadData->lastEquationSolved = 2092;
}

/*
equation index: 2093
type: SIMPLE_ASSIGN
dc.roo.air.cfd.u[36] = dc.sup[3].X[1]
*/
void s000_baseline_eqFunction_2093(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2093};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[195]] /* dc.roo.air.cfd.u[36] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1465]] /* dc.sup[3].X[1] PARAM */);
  threadData->lastEquationSolved = 2093;
}

/*
equation index: 2094
type: SIMPLE_ASSIGN
$DER.dc.roo.air.cfd.uInt[36] = dc.roo.air.cfd.u[36]
*/
void s000_baseline_eqFunction_2094(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2094};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[81]] /* der(dc.roo.air.cfd.uInt[36]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[195]] /* dc.roo.air.cfd.u[36] variable */);
  threadData->lastEquationSolved = 2094;
}

/*
equation index: 2095
type: SIMPLE_ASSIGN
dc.roo.air.cfd.u[35] = dc.sup[2].X[1]
*/
void s000_baseline_eqFunction_2095(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2095};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[194]] /* dc.roo.air.cfd.u[35] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1463]] /* dc.sup[2].X[1] PARAM */);
  threadData->lastEquationSolved = 2095;
}

/*
equation index: 2096
type: SIMPLE_ASSIGN
$DER.dc.roo.air.cfd.uInt[35] = dc.roo.air.cfd.u[35]
*/
void s000_baseline_eqFunction_2096(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2096};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[80]] /* der(dc.roo.air.cfd.uInt[35]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[194]] /* dc.roo.air.cfd.u[35] variable */);
  threadData->lastEquationSolved = 2096;
}

/*
equation index: 2097
type: SIMPLE_ASSIGN
dc.roo.air.cfd.u[34] = dc.sup[1].X[1]
*/
void s000_baseline_eqFunction_2097(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2097};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[193]] /* dc.roo.air.cfd.u[34] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1461]] /* dc.sup[1].X[1] PARAM */);
  threadData->lastEquationSolved = 2097;
}

/*
equation index: 2098
type: SIMPLE_ASSIGN
$DER.dc.roo.air.cfd.uInt[34] = dc.roo.air.cfd.u[34]
*/
void s000_baseline_eqFunction_2098(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2098};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[79]] /* der(dc.roo.air.cfd.uInt[34]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[193]] /* dc.roo.air.cfd.u[34] variable */);
  threadData->lastEquationSolved = 2098;
}

/*
equation index: 2099
type: SIMPLE_ASSIGN
$whenCondition4 = time >= pre(TsupTable.nextTimeEvent)
*/
void s000_baseline_eqFunction_2099(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2099};
  modelica_boolean tmp150;
  modelica_real tmp151;
  modelica_real tmp152;
  tmp151 = 1.0;
  tmp152 = 1.0;
  relationhysteresis(data, &tmp150, data->localData[0]->timeValue, (data->simulationInfo->realVarsPre[448] /* TsupTable.nextTimeEvent DISCRETE */), tmp151, tmp152, 1, GreaterEq, GreaterEqZC);
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) = tmp150;
  threadData->lastEquationSolved = 2099;
}

/*
equation index: 2100
type: WHEN

when {$whenCondition4} then
  TsupTable.nextTimeEventScaled = Modelica.Blocks.Tables.Internal.getNextTimeEvent(TsupTable.tableID, TsupTable.timeScaled);
end when;
*/
void s000_baseline_eqFunction_2100(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2100};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[449]] /* TsupTable.nextTimeEventScaled DISCRETE */) = omc_Modelica_Blocks_Tables_Internal_getNextTimeEvent(threadData, (data->simulationInfo->extObjs[0]), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[118]] /* TsupTable.timeScaled variable */));
  }
  threadData->lastEquationSolved = 2100;
}

/*
equation index: 2101
type: SIMPLE_ASSIGN
$cse14 = Modelica.Blocks.Tables.Internal.getTimeTableValueNoDer(TsupTable.tableID, 6, TsupTable.timeScaled, TsupTable.nextTimeEventScaled, pre(TsupTable.nextTimeEventScaled))
*/
void s000_baseline_eqFunction_2101(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2101};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[96]] /* $cse14 variable */) = omc_Modelica_Blocks_Tables_Internal_getTimeTableValueNoDer(threadData, (data->simulationInfo->extObjs[0]), ((modelica_integer) 6), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[118]] /* TsupTable.timeScaled variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[449]] /* TsupTable.nextTimeEventScaled DISCRETE */), (data->simulationInfo->realVarsPre[449] /* TsupTable.nextTimeEventScaled DISCRETE */));
  threadData->lastEquationSolved = 2101;
}

/*
equation index: 2102
type: SIMPLE_ASSIGN
dc.T_sup_out[6] = TsupTable.p_offset[6] + $cse14
*/
void s000_baseline_eqFunction_2102(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2102};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[130]] /* dc.T_sup_out[6] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[8]] /* TsupTable.p_offset[6] PARAM */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[96]] /* $cse14 variable */);
  threadData->lastEquationSolved = 2102;
}

/*
equation index: 2103
type: SIMPLE_ASSIGN
dc.sup[6].ports[1].h_outflow = 1006.0 * (-273.15 + dc.T_sup_out[6]) * (1.0 - dc.sup[6].X[1]) + (2.5010145e6 + 1860.0 * (-273.15 + dc.T_sup_out[6])) * dc.sup[6].X[1]
*/
void s000_baseline_eqFunction_2103(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2103};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[372]] /* dc.sup[6].ports[1].h_outflow variable */) = (1006.0) * ((-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[130]] /* dc.T_sup_out[6] variable */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1471]] /* dc.sup[6].X[1] PARAM */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[130]] /* dc.T_sup_out[6] variable */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1471]] /* dc.sup[6].X[1] PARAM */));
  threadData->lastEquationSolved = 2103;
}

/*
equation index: 2104
type: SIMPLE_ASSIGN
dc.roo.air.cfd.u[27] = 273.15 + (dc.sup[6].ports[1].h_outflow + (-2.5010145e6) * dc.sup[6].X[1]) / (1006.0 * (1.0 - dc.sup[6].X[1]) + 1860.0 * dc.sup[6].X[1])
*/
void s000_baseline_eqFunction_2104(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2104};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[186]] /* dc.roo.air.cfd.u[27] variable */) = 273.15 + DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[372]] /* dc.sup[6].ports[1].h_outflow variable */) + (-2.5010145e6) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1471]] /* dc.sup[6].X[1] PARAM */)),(1006.0) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1471]] /* dc.sup[6].X[1] PARAM */)) + (1860.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1471]] /* dc.sup[6].X[1] PARAM */)),"1006.0 * (1.0 - dc.sup[6].X[1]) + 1860.0 * dc.sup[6].X[1]",equationIndexes);
  threadData->lastEquationSolved = 2104;
}

/*
equation index: 2105
type: SIMPLE_ASSIGN
$DER.dc.roo.air.cfd.uInt[27] = dc.roo.air.cfd.u[27]
*/
void s000_baseline_eqFunction_2105(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2105};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[72]] /* der(dc.roo.air.cfd.uInt[27]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[186]] /* dc.roo.air.cfd.u[27] variable */);
  threadData->lastEquationSolved = 2105;
}

/*
equation index: 2106
type: SIMPLE_ASSIGN
$cse13 = Modelica.Blocks.Tables.Internal.getTimeTableValueNoDer(TsupTable.tableID, 5, TsupTable.timeScaled, TsupTable.nextTimeEventScaled, pre(TsupTable.nextTimeEventScaled))
*/
void s000_baseline_eqFunction_2106(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2106};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[95]] /* $cse13 variable */) = omc_Modelica_Blocks_Tables_Internal_getTimeTableValueNoDer(threadData, (data->simulationInfo->extObjs[0]), ((modelica_integer) 5), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[118]] /* TsupTable.timeScaled variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[449]] /* TsupTable.nextTimeEventScaled DISCRETE */), (data->simulationInfo->realVarsPre[449] /* TsupTable.nextTimeEventScaled DISCRETE */));
  threadData->lastEquationSolved = 2106;
}

/*
equation index: 2107
type: SIMPLE_ASSIGN
dc.T_sup_out[5] = TsupTable.p_offset[5] + $cse13
*/
void s000_baseline_eqFunction_2107(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2107};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[129]] /* dc.T_sup_out[5] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[7]] /* TsupTable.p_offset[5] PARAM */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[95]] /* $cse13 variable */);
  threadData->lastEquationSolved = 2107;
}

/*
equation index: 2108
type: SIMPLE_ASSIGN
dc.sup[5].ports[1].h_outflow = 1006.0 * (-273.15 + dc.T_sup_out[5]) * (1.0 - dc.sup[5].X[1]) + (2.5010145e6 + 1860.0 * (-273.15 + dc.T_sup_out[5])) * dc.sup[5].X[1]
*/
void s000_baseline_eqFunction_2108(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2108};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[371]] /* dc.sup[5].ports[1].h_outflow variable */) = (1006.0) * ((-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[129]] /* dc.T_sup_out[5] variable */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1469]] /* dc.sup[5].X[1] PARAM */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[129]] /* dc.T_sup_out[5] variable */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1469]] /* dc.sup[5].X[1] PARAM */));
  threadData->lastEquationSolved = 2108;
}

/*
equation index: 2109
type: SIMPLE_ASSIGN
dc.roo.air.cfd.u[26] = 273.15 + (dc.sup[5].ports[1].h_outflow + (-2.5010145e6) * dc.sup[5].X[1]) / (1006.0 * (1.0 - dc.sup[5].X[1]) + 1860.0 * dc.sup[5].X[1])
*/
void s000_baseline_eqFunction_2109(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2109};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[185]] /* dc.roo.air.cfd.u[26] variable */) = 273.15 + DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[371]] /* dc.sup[5].ports[1].h_outflow variable */) + (-2.5010145e6) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1469]] /* dc.sup[5].X[1] PARAM */)),(1006.0) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1469]] /* dc.sup[5].X[1] PARAM */)) + (1860.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1469]] /* dc.sup[5].X[1] PARAM */)),"1006.0 * (1.0 - dc.sup[5].X[1]) + 1860.0 * dc.sup[5].X[1]",equationIndexes);
  threadData->lastEquationSolved = 2109;
}

/*
equation index: 2110
type: SIMPLE_ASSIGN
$DER.dc.roo.air.cfd.uInt[26] = dc.roo.air.cfd.u[26]
*/
void s000_baseline_eqFunction_2110(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2110};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[71]] /* der(dc.roo.air.cfd.uInt[26]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[185]] /* dc.roo.air.cfd.u[26] variable */);
  threadData->lastEquationSolved = 2110;
}

/*
equation index: 2111
type: SIMPLE_ASSIGN
$cse12 = Modelica.Blocks.Tables.Internal.getTimeTableValueNoDer(TsupTable.tableID, 4, TsupTable.timeScaled, TsupTable.nextTimeEventScaled, pre(TsupTable.nextTimeEventScaled))
*/
void s000_baseline_eqFunction_2111(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2111};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[94]] /* $cse12 variable */) = omc_Modelica_Blocks_Tables_Internal_getTimeTableValueNoDer(threadData, (data->simulationInfo->extObjs[0]), ((modelica_integer) 4), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[118]] /* TsupTable.timeScaled variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[449]] /* TsupTable.nextTimeEventScaled DISCRETE */), (data->simulationInfo->realVarsPre[449] /* TsupTable.nextTimeEventScaled DISCRETE */));
  threadData->lastEquationSolved = 2111;
}

/*
equation index: 2112
type: SIMPLE_ASSIGN
dc.T_sup_out[4] = TsupTable.p_offset[4] + $cse12
*/
void s000_baseline_eqFunction_2112(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2112};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[128]] /* dc.T_sup_out[4] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[6]] /* TsupTable.p_offset[4] PARAM */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[94]] /* $cse12 variable */);
  threadData->lastEquationSolved = 2112;
}

/*
equation index: 2113
type: SIMPLE_ASSIGN
dc.sup[4].ports[1].h_outflow = 1006.0 * (-273.15 + dc.T_sup_out[4]) * (1.0 - dc.sup[4].X[1]) + (2.5010145e6 + 1860.0 * (-273.15 + dc.T_sup_out[4])) * dc.sup[4].X[1]
*/
void s000_baseline_eqFunction_2113(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2113};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[370]] /* dc.sup[4].ports[1].h_outflow variable */) = (1006.0) * ((-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[128]] /* dc.T_sup_out[4] variable */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1467]] /* dc.sup[4].X[1] PARAM */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[128]] /* dc.T_sup_out[4] variable */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1467]] /* dc.sup[4].X[1] PARAM */));
  threadData->lastEquationSolved = 2113;
}

/*
equation index: 2114
type: SIMPLE_ASSIGN
dc.roo.air.cfd.u[25] = 273.15 + (dc.sup[4].ports[1].h_outflow + (-2.5010145e6) * dc.sup[4].X[1]) / (1006.0 * (1.0 - dc.sup[4].X[1]) + 1860.0 * dc.sup[4].X[1])
*/
void s000_baseline_eqFunction_2114(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2114};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[184]] /* dc.roo.air.cfd.u[25] variable */) = 273.15 + DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[370]] /* dc.sup[4].ports[1].h_outflow variable */) + (-2.5010145e6) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1467]] /* dc.sup[4].X[1] PARAM */)),(1006.0) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1467]] /* dc.sup[4].X[1] PARAM */)) + (1860.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1467]] /* dc.sup[4].X[1] PARAM */)),"1006.0 * (1.0 - dc.sup[4].X[1]) + 1860.0 * dc.sup[4].X[1]",equationIndexes);
  threadData->lastEquationSolved = 2114;
}

/*
equation index: 2115
type: SIMPLE_ASSIGN
$DER.dc.roo.air.cfd.uInt[25] = dc.roo.air.cfd.u[25]
*/
void s000_baseline_eqFunction_2115(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2115};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[70]] /* der(dc.roo.air.cfd.uInt[25]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[184]] /* dc.roo.air.cfd.u[25] variable */);
  threadData->lastEquationSolved = 2115;
}

/*
equation index: 2116
type: SIMPLE_ASSIGN
$cse11 = Modelica.Blocks.Tables.Internal.getTimeTableValueNoDer(TsupTable.tableID, 3, TsupTable.timeScaled, TsupTable.nextTimeEventScaled, pre(TsupTable.nextTimeEventScaled))
*/
void s000_baseline_eqFunction_2116(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2116};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[93]] /* $cse11 variable */) = omc_Modelica_Blocks_Tables_Internal_getTimeTableValueNoDer(threadData, (data->simulationInfo->extObjs[0]), ((modelica_integer) 3), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[118]] /* TsupTable.timeScaled variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[449]] /* TsupTable.nextTimeEventScaled DISCRETE */), (data->simulationInfo->realVarsPre[449] /* TsupTable.nextTimeEventScaled DISCRETE */));
  threadData->lastEquationSolved = 2116;
}

/*
equation index: 2117
type: SIMPLE_ASSIGN
dc.T_sup_out[3] = TsupTable.p_offset[3] + $cse11
*/
void s000_baseline_eqFunction_2117(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2117};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[127]] /* dc.T_sup_out[3] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5]] /* TsupTable.p_offset[3] PARAM */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[93]] /* $cse11 variable */);
  threadData->lastEquationSolved = 2117;
}

/*
equation index: 2118
type: SIMPLE_ASSIGN
dc.sup[3].ports[1].h_outflow = 1006.0 * (-273.15 + dc.T_sup_out[3]) * (1.0 - dc.sup[3].X[1]) + (2.5010145e6 + 1860.0 * (-273.15 + dc.T_sup_out[3])) * dc.sup[3].X[1]
*/
void s000_baseline_eqFunction_2118(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2118};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[369]] /* dc.sup[3].ports[1].h_outflow variable */) = (1006.0) * ((-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[127]] /* dc.T_sup_out[3] variable */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1465]] /* dc.sup[3].X[1] PARAM */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[127]] /* dc.T_sup_out[3] variable */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1465]] /* dc.sup[3].X[1] PARAM */));
  threadData->lastEquationSolved = 2118;
}

/*
equation index: 2119
type: SIMPLE_ASSIGN
dc.roo.air.cfd.u[24] = 273.15 + (dc.sup[3].ports[1].h_outflow + (-2.5010145e6) * dc.sup[3].X[1]) / (1006.0 * (1.0 - dc.sup[3].X[1]) + 1860.0 * dc.sup[3].X[1])
*/
void s000_baseline_eqFunction_2119(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2119};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[183]] /* dc.roo.air.cfd.u[24] variable */) = 273.15 + DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[369]] /* dc.sup[3].ports[1].h_outflow variable */) + (-2.5010145e6) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1465]] /* dc.sup[3].X[1] PARAM */)),(1006.0) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1465]] /* dc.sup[3].X[1] PARAM */)) + (1860.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1465]] /* dc.sup[3].X[1] PARAM */)),"1006.0 * (1.0 - dc.sup[3].X[1]) + 1860.0 * dc.sup[3].X[1]",equationIndexes);
  threadData->lastEquationSolved = 2119;
}

/*
equation index: 2120
type: SIMPLE_ASSIGN
$DER.dc.roo.air.cfd.uInt[24] = dc.roo.air.cfd.u[24]
*/
void s000_baseline_eqFunction_2120(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2120};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[69]] /* der(dc.roo.air.cfd.uInt[24]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[183]] /* dc.roo.air.cfd.u[24] variable */);
  threadData->lastEquationSolved = 2120;
}

/*
equation index: 2121
type: SIMPLE_ASSIGN
$cse10 = Modelica.Blocks.Tables.Internal.getTimeTableValueNoDer(TsupTable.tableID, 2, TsupTable.timeScaled, TsupTable.nextTimeEventScaled, pre(TsupTable.nextTimeEventScaled))
*/
void s000_baseline_eqFunction_2121(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2121};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[92]] /* $cse10 variable */) = omc_Modelica_Blocks_Tables_Internal_getTimeTableValueNoDer(threadData, (data->simulationInfo->extObjs[0]), ((modelica_integer) 2), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[118]] /* TsupTable.timeScaled variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[449]] /* TsupTable.nextTimeEventScaled DISCRETE */), (data->simulationInfo->realVarsPre[449] /* TsupTable.nextTimeEventScaled DISCRETE */));
  threadData->lastEquationSolved = 2121;
}

/*
equation index: 2122
type: SIMPLE_ASSIGN
dc.T_sup_out[2] = TsupTable.p_offset[2] + $cse10
*/
void s000_baseline_eqFunction_2122(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2122};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[126]] /* dc.T_sup_out[2] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4]] /* TsupTable.p_offset[2] PARAM */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[92]] /* $cse10 variable */);
  threadData->lastEquationSolved = 2122;
}

/*
equation index: 2123
type: SIMPLE_ASSIGN
dc.sup[2].ports[1].h_outflow = 1006.0 * (-273.15 + dc.T_sup_out[2]) * (1.0 - dc.sup[2].X[1]) + (2.5010145e6 + 1860.0 * (-273.15 + dc.T_sup_out[2])) * dc.sup[2].X[1]
*/
void s000_baseline_eqFunction_2123(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2123};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[368]] /* dc.sup[2].ports[1].h_outflow variable */) = (1006.0) * ((-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[126]] /* dc.T_sup_out[2] variable */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1463]] /* dc.sup[2].X[1] PARAM */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[126]] /* dc.T_sup_out[2] variable */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1463]] /* dc.sup[2].X[1] PARAM */));
  threadData->lastEquationSolved = 2123;
}

/*
equation index: 2124
type: SIMPLE_ASSIGN
dc.roo.air.cfd.u[23] = 273.15 + (dc.sup[2].ports[1].h_outflow + (-2.5010145e6) * dc.sup[2].X[1]) / (1006.0 * (1.0 - dc.sup[2].X[1]) + 1860.0 * dc.sup[2].X[1])
*/
void s000_baseline_eqFunction_2124(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2124};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[182]] /* dc.roo.air.cfd.u[23] variable */) = 273.15 + DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[368]] /* dc.sup[2].ports[1].h_outflow variable */) + (-2.5010145e6) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1463]] /* dc.sup[2].X[1] PARAM */)),(1006.0) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1463]] /* dc.sup[2].X[1] PARAM */)) + (1860.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1463]] /* dc.sup[2].X[1] PARAM */)),"1006.0 * (1.0 - dc.sup[2].X[1]) + 1860.0 * dc.sup[2].X[1]",equationIndexes);
  threadData->lastEquationSolved = 2124;
}

/*
equation index: 2125
type: SIMPLE_ASSIGN
$DER.dc.roo.air.cfd.uInt[23] = dc.roo.air.cfd.u[23]
*/
void s000_baseline_eqFunction_2125(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2125};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[68]] /* der(dc.roo.air.cfd.uInt[23]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[182]] /* dc.roo.air.cfd.u[23] variable */);
  threadData->lastEquationSolved = 2125;
}

/*
equation index: 2126
type: SIMPLE_ASSIGN
$cse9 = Modelica.Blocks.Tables.Internal.getTimeTableValueNoDer(TsupTable.tableID, 1, TsupTable.timeScaled, TsupTable.nextTimeEventScaled, pre(TsupTable.nextTimeEventScaled))
*/
void s000_baseline_eqFunction_2126(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2126};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[117]] /* $cse9 variable */) = omc_Modelica_Blocks_Tables_Internal_getTimeTableValueNoDer(threadData, (data->simulationInfo->extObjs[0]), ((modelica_integer) 1), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[118]] /* TsupTable.timeScaled variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[449]] /* TsupTable.nextTimeEventScaled DISCRETE */), (data->simulationInfo->realVarsPre[449] /* TsupTable.nextTimeEventScaled DISCRETE */));
  threadData->lastEquationSolved = 2126;
}

/*
equation index: 2127
type: SIMPLE_ASSIGN
dc.T_sup_out[1] = TsupTable.p_offset[1] + $cse9
*/
void s000_baseline_eqFunction_2127(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2127};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[125]] /* dc.T_sup_out[1] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3]] /* TsupTable.p_offset[1] PARAM */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[117]] /* $cse9 variable */);
  threadData->lastEquationSolved = 2127;
}

/*
equation index: 2128
type: SIMPLE_ASSIGN
dc.sup[1].ports[1].h_outflow = 1006.0 * (-273.15 + dc.T_sup_out[1]) * (1.0 - dc.sup[1].X[1]) + (2.5010145e6 + 1860.0 * (-273.15 + dc.T_sup_out[1])) * dc.sup[1].X[1]
*/
void s000_baseline_eqFunction_2128(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2128};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[367]] /* dc.sup[1].ports[1].h_outflow variable */) = (1006.0) * ((-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[125]] /* dc.T_sup_out[1] variable */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1461]] /* dc.sup[1].X[1] PARAM */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[125]] /* dc.T_sup_out[1] variable */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1461]] /* dc.sup[1].X[1] PARAM */));
  threadData->lastEquationSolved = 2128;
}

/*
equation index: 2129
type: SIMPLE_ASSIGN
dc.roo.air.cfd.u[22] = 273.15 + (dc.sup[1].ports[1].h_outflow + (-2.5010145e6) * dc.sup[1].X[1]) / (1006.0 * (1.0 - dc.sup[1].X[1]) + 1860.0 * dc.sup[1].X[1])
*/
void s000_baseline_eqFunction_2129(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2129};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[181]] /* dc.roo.air.cfd.u[22] variable */) = 273.15 + DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[367]] /* dc.sup[1].ports[1].h_outflow variable */) + (-2.5010145e6) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1461]] /* dc.sup[1].X[1] PARAM */)),(1006.0) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1461]] /* dc.sup[1].X[1] PARAM */)) + (1860.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1461]] /* dc.sup[1].X[1] PARAM */)),"1006.0 * (1.0 - dc.sup[1].X[1]) + 1860.0 * dc.sup[1].X[1]",equationIndexes);
  threadData->lastEquationSolved = 2129;
}

/*
equation index: 2130
type: SIMPLE_ASSIGN
$DER.dc.roo.air.cfd.uInt[22] = dc.roo.air.cfd.u[22]
*/
void s000_baseline_eqFunction_2130(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2130};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[67]] /* der(dc.roo.air.cfd.uInt[22]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[181]] /* dc.roo.air.cfd.u[22] variable */);
  threadData->lastEquationSolved = 2130;
}

/*
equation index: 2131
type: WHEN

when {$whenCondition4} then
  TsupTable.nextTimeEvent = if TsupTable.nextTimeEventScaled < 1e60 then TsupTable.nextTimeEventScaled else 1e60;
end when;
*/
void s000_baseline_eqFunction_2131(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2131};
  modelica_boolean tmp153;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    tmp153 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[449]] /* TsupTable.nextTimeEventScaled DISCRETE */),1e60);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[448]] /* TsupTable.nextTimeEvent DISCRETE */) = (tmp153?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[449]] /* TsupTable.nextTimeEventScaled DISCRETE */):1e60);
  }
  threadData->lastEquationSolved = 2131;
}

/*
equation index: 2132
type: SIMPLE_ASSIGN
$whenCondition5 = time >= pre(fanTable.nextTimeEvent)
*/
void s000_baseline_eqFunction_2132(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2132};
  modelica_boolean tmp154;
  modelica_real tmp155;
  modelica_real tmp156;
  tmp155 = 1.0;
  tmp156 = 1.0;
  relationhysteresis(data, &tmp154, data->localData[0]->timeValue, (data->simulationInfo->realVarsPre[574] /* fanTable.nextTimeEvent DISCRETE */), tmp155, tmp156, 0, GreaterEq, GreaterEqZC);
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[4]] /* $whenCondition5 DISCRETE */) = tmp154;
  threadData->lastEquationSolved = 2132;
}

/*
equation index: 2133
type: WHEN

when {$whenCondition5} then
  fanTable.nextTimeEventScaled = Modelica.Blocks.Tables.Internal.getNextTimeEvent(fanTable.tableID, fanTable.timeScaled);
end when;
*/
void s000_baseline_eqFunction_2133(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2133};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[4]] /* $whenCondition5 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[4] /* $whenCondition5 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[575]] /* fanTable.nextTimeEventScaled DISCRETE */) = omc_Modelica_Blocks_Tables_Internal_getNextTimeEvent(threadData, (data->simulationInfo->extObjs[4]), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[441]] /* fanTable.timeScaled variable */));
  }
  threadData->lastEquationSolved = 2133;
}

/*
equation index: 2134
type: SIMPLE_ASSIGN
$cse8 = Modelica.Blocks.Tables.Internal.getTimeTableValueNoDer(fanTable.tableID, 6, fanTable.timeScaled, fanTable.nextTimeEventScaled, pre(fanTable.nextTimeEventScaled))
*/
void s000_baseline_eqFunction_2134(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2134};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[116]] /* $cse8 variable */) = omc_Modelica_Blocks_Tables_Internal_getTimeTableValueNoDer(threadData, (data->simulationInfo->extObjs[4]), ((modelica_integer) 6), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[441]] /* fanTable.timeScaled variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[575]] /* fanTable.nextTimeEventScaled DISCRETE */), (data->simulationInfo->realVarsPre[575] /* fanTable.nextTimeEventScaled DISCRETE */));
  threadData->lastEquationSolved = 2134;
}

/*
equation index: 2135
type: SIMPLE_ASSIGN
fanTable.y[6] = fanTable.p_offset[6] + $cse8
*/
void s000_baseline_eqFunction_2135(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2135};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[447]] /* fanTable.y[6] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1541]] /* fanTable.p_offset[6] PARAM */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[116]] /* $cse8 variable */);
  threadData->lastEquationSolved = 2135;
}

/*
equation index: 2136
type: SIMPLE_ASSIGN
dc.roo.air.cfd.u[15] = fanTable.y[6] * dc.mFlowRated[6].k
*/
void s000_baseline_eqFunction_2136(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2136};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[174]] /* dc.roo.air.cfd.u[15] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[447]] /* fanTable.y[6] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[37]] /* dc.mFlowRated[6].k PARAM */));
  threadData->lastEquationSolved = 2136;
}

/*
equation index: 2137
type: SIMPLE_ASSIGN
$DER.dc.roo.air.cfd.uInt[15] = dc.roo.air.cfd.u[15]
*/
void s000_baseline_eqFunction_2137(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2137};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[60]] /* der(dc.roo.air.cfd.uInt[15]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[174]] /* dc.roo.air.cfd.u[15] variable */);
  threadData->lastEquationSolved = 2137;
}

/*
equation index: 2138
type: SIMPLE_ASSIGN
dc.roo.air.fluInt.ports_mXi_flow[6,1] = dc.roo.air.cfd.u[15] * (if dc.roo.air.cfd.u[15] > 0.0 then dc.sup[6].X[1] else dc.roo.air.cfd.y[25])
*/
void s000_baseline_eqFunction_2138(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2138};
  modelica_boolean tmp157;
  modelica_real tmp158;
  modelica_real tmp159;
  tmp158 = 1.0;
  tmp159 = 0.0;
  relationhysteresis(data, &tmp157, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[174]] /* dc.roo.air.cfd.u[15] variable */), 0.0, tmp158, tmp159, 2, Greater, GreaterZC);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[235]] /* dc.roo.air.fluInt.ports_mXi_flow[6,1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[174]] /* dc.roo.air.cfd.u[15] variable */)) * ((tmp157?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1471]] /* dc.sup[6].X[1] PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[565]] /* dc.roo.air.cfd.y[25] DISCRETE */)));
  threadData->lastEquationSolved = 2138;
}

/*
equation index: 2139
type: SIMPLE_ASSIGN
$cse7 = Modelica.Blocks.Tables.Internal.getTimeTableValueNoDer(fanTable.tableID, 5, fanTable.timeScaled, fanTable.nextTimeEventScaled, pre(fanTable.nextTimeEventScaled))
*/
void s000_baseline_eqFunction_2139(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2139};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[115]] /* $cse7 variable */) = omc_Modelica_Blocks_Tables_Internal_getTimeTableValueNoDer(threadData, (data->simulationInfo->extObjs[4]), ((modelica_integer) 5), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[441]] /* fanTable.timeScaled variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[575]] /* fanTable.nextTimeEventScaled DISCRETE */), (data->simulationInfo->realVarsPre[575] /* fanTable.nextTimeEventScaled DISCRETE */));
  threadData->lastEquationSolved = 2139;
}

/*
equation index: 2140
type: SIMPLE_ASSIGN
fanTable.y[5] = fanTable.p_offset[5] + $cse7
*/
void s000_baseline_eqFunction_2140(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2140};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[446]] /* fanTable.y[5] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1540]] /* fanTable.p_offset[5] PARAM */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[115]] /* $cse7 variable */);
  threadData->lastEquationSolved = 2140;
}

/*
equation index: 2141
type: SIMPLE_ASSIGN
dc.roo.air.cfd.u[14] = fanTable.y[5] * dc.mFlowRated[5].k
*/
void s000_baseline_eqFunction_2141(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2141};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[173]] /* dc.roo.air.cfd.u[14] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[446]] /* fanTable.y[5] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[36]] /* dc.mFlowRated[5].k PARAM */));
  threadData->lastEquationSolved = 2141;
}

/*
equation index: 2142
type: SIMPLE_ASSIGN
$DER.dc.roo.air.cfd.uInt[14] = dc.roo.air.cfd.u[14]
*/
void s000_baseline_eqFunction_2142(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2142};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[59]] /* der(dc.roo.air.cfd.uInt[14]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[173]] /* dc.roo.air.cfd.u[14] variable */);
  threadData->lastEquationSolved = 2142;
}

/*
equation index: 2143
type: SIMPLE_ASSIGN
dc.roo.air.fluInt.ports_mXi_flow[5,1] = dc.roo.air.cfd.u[14] * (if dc.roo.air.cfd.u[14] > 0.0 then dc.sup[5].X[1] else dc.roo.air.cfd.y[24])
*/
void s000_baseline_eqFunction_2143(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2143};
  modelica_boolean tmp160;
  modelica_real tmp161;
  modelica_real tmp162;
  tmp161 = 1.0;
  tmp162 = 0.0;
  relationhysteresis(data, &tmp160, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[173]] /* dc.roo.air.cfd.u[14] variable */), 0.0, tmp161, tmp162, 6, Greater, GreaterZC);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[234]] /* dc.roo.air.fluInt.ports_mXi_flow[5,1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[173]] /* dc.roo.air.cfd.u[14] variable */)) * ((tmp160?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1469]] /* dc.sup[5].X[1] PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[564]] /* dc.roo.air.cfd.y[24] DISCRETE */)));
  threadData->lastEquationSolved = 2143;
}

/*
equation index: 2144
type: SIMPLE_ASSIGN
$cse6 = Modelica.Blocks.Tables.Internal.getTimeTableValueNoDer(fanTable.tableID, 4, fanTable.timeScaled, fanTable.nextTimeEventScaled, pre(fanTable.nextTimeEventScaled))
*/
void s000_baseline_eqFunction_2144(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2144};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[114]] /* $cse6 variable */) = omc_Modelica_Blocks_Tables_Internal_getTimeTableValueNoDer(threadData, (data->simulationInfo->extObjs[4]), ((modelica_integer) 4), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[441]] /* fanTable.timeScaled variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[575]] /* fanTable.nextTimeEventScaled DISCRETE */), (data->simulationInfo->realVarsPre[575] /* fanTable.nextTimeEventScaled DISCRETE */));
  threadData->lastEquationSolved = 2144;
}

/*
equation index: 2145
type: SIMPLE_ASSIGN
fanTable.y[4] = fanTable.p_offset[4] + $cse6
*/
void s000_baseline_eqFunction_2145(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2145};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[445]] /* fanTable.y[4] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1539]] /* fanTable.p_offset[4] PARAM */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[114]] /* $cse6 variable */);
  threadData->lastEquationSolved = 2145;
}

/*
equation index: 2146
type: SIMPLE_ASSIGN
dc.roo.air.cfd.u[13] = fanTable.y[4] * dc.mFlowRated[4].k
*/
void s000_baseline_eqFunction_2146(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2146};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[172]] /* dc.roo.air.cfd.u[13] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[445]] /* fanTable.y[4] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[35]] /* dc.mFlowRated[4].k PARAM */));
  threadData->lastEquationSolved = 2146;
}

/*
equation index: 2147
type: SIMPLE_ASSIGN
$DER.dc.roo.air.cfd.uInt[13] = dc.roo.air.cfd.u[13]
*/
void s000_baseline_eqFunction_2147(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2147};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[58]] /* der(dc.roo.air.cfd.uInt[13]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[172]] /* dc.roo.air.cfd.u[13] variable */);
  threadData->lastEquationSolved = 2147;
}

/*
equation index: 2148
type: SIMPLE_ASSIGN
dc.roo.air.fluInt.ports_mXi_flow[4,1] = dc.roo.air.cfd.u[13] * (if dc.roo.air.cfd.u[13] > 0.0 then dc.sup[4].X[1] else dc.roo.air.cfd.y[23])
*/
void s000_baseline_eqFunction_2148(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2148};
  modelica_boolean tmp163;
  modelica_real tmp164;
  modelica_real tmp165;
  tmp164 = 1.0;
  tmp165 = 0.0;
  relationhysteresis(data, &tmp163, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[172]] /* dc.roo.air.cfd.u[13] variable */), 0.0, tmp164, tmp165, 10, Greater, GreaterZC);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[233]] /* dc.roo.air.fluInt.ports_mXi_flow[4,1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[172]] /* dc.roo.air.cfd.u[13] variable */)) * ((tmp163?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1467]] /* dc.sup[4].X[1] PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[563]] /* dc.roo.air.cfd.y[23] DISCRETE */)));
  threadData->lastEquationSolved = 2148;
}

/*
equation index: 2149
type: SIMPLE_ASSIGN
$cse5 = Modelica.Blocks.Tables.Internal.getTimeTableValueNoDer(fanTable.tableID, 3, fanTable.timeScaled, fanTable.nextTimeEventScaled, pre(fanTable.nextTimeEventScaled))
*/
void s000_baseline_eqFunction_2149(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2149};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[113]] /* $cse5 variable */) = omc_Modelica_Blocks_Tables_Internal_getTimeTableValueNoDer(threadData, (data->simulationInfo->extObjs[4]), ((modelica_integer) 3), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[441]] /* fanTable.timeScaled variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[575]] /* fanTable.nextTimeEventScaled DISCRETE */), (data->simulationInfo->realVarsPre[575] /* fanTable.nextTimeEventScaled DISCRETE */));
  threadData->lastEquationSolved = 2149;
}

/*
equation index: 2150
type: SIMPLE_ASSIGN
fanTable.y[3] = fanTable.p_offset[3] + $cse5
*/
void s000_baseline_eqFunction_2150(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2150};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[444]] /* fanTable.y[3] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1538]] /* fanTable.p_offset[3] PARAM */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[113]] /* $cse5 variable */);
  threadData->lastEquationSolved = 2150;
}

/*
equation index: 2151
type: SIMPLE_ASSIGN
dc.roo.air.cfd.u[12] = fanTable.y[3] * dc.mFlowRated[3].k
*/
void s000_baseline_eqFunction_2151(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2151};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[171]] /* dc.roo.air.cfd.u[12] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[444]] /* fanTable.y[3] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[34]] /* dc.mFlowRated[3].k PARAM */));
  threadData->lastEquationSolved = 2151;
}

/*
equation index: 2152
type: SIMPLE_ASSIGN
$DER.dc.roo.air.cfd.uInt[12] = dc.roo.air.cfd.u[12]
*/
void s000_baseline_eqFunction_2152(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2152};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[57]] /* der(dc.roo.air.cfd.uInt[12]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[171]] /* dc.roo.air.cfd.u[12] variable */);
  threadData->lastEquationSolved = 2152;
}

/*
equation index: 2153
type: SIMPLE_ASSIGN
dc.roo.air.fluInt.ports_mXi_flow[3,1] = dc.roo.air.cfd.u[12] * (if dc.roo.air.cfd.u[12] > 0.0 then dc.sup[3].X[1] else dc.roo.air.cfd.y[22])
*/
void s000_baseline_eqFunction_2153(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2153};
  modelica_boolean tmp166;
  modelica_real tmp167;
  modelica_real tmp168;
  tmp167 = 1.0;
  tmp168 = 0.0;
  relationhysteresis(data, &tmp166, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[171]] /* dc.roo.air.cfd.u[12] variable */), 0.0, tmp167, tmp168, 8, Greater, GreaterZC);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[232]] /* dc.roo.air.fluInt.ports_mXi_flow[3,1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[171]] /* dc.roo.air.cfd.u[12] variable */)) * ((tmp166?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1465]] /* dc.sup[3].X[1] PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[562]] /* dc.roo.air.cfd.y[22] DISCRETE */)));
  threadData->lastEquationSolved = 2153;
}

/*
equation index: 2154
type: SIMPLE_ASSIGN
$cse4 = Modelica.Blocks.Tables.Internal.getTimeTableValueNoDer(fanTable.tableID, 2, fanTable.timeScaled, fanTable.nextTimeEventScaled, pre(fanTable.nextTimeEventScaled))
*/
void s000_baseline_eqFunction_2154(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2154};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[112]] /* $cse4 variable */) = omc_Modelica_Blocks_Tables_Internal_getTimeTableValueNoDer(threadData, (data->simulationInfo->extObjs[4]), ((modelica_integer) 2), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[441]] /* fanTable.timeScaled variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[575]] /* fanTable.nextTimeEventScaled DISCRETE */), (data->simulationInfo->realVarsPre[575] /* fanTable.nextTimeEventScaled DISCRETE */));
  threadData->lastEquationSolved = 2154;
}

/*
equation index: 2155
type: SIMPLE_ASSIGN
fanTable.y[2] = fanTable.p_offset[2] + $cse4
*/
void s000_baseline_eqFunction_2155(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2155};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[443]] /* fanTable.y[2] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1537]] /* fanTable.p_offset[2] PARAM */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[112]] /* $cse4 variable */);
  threadData->lastEquationSolved = 2155;
}

/*
equation index: 2156
type: SIMPLE_ASSIGN
dc.roo.air.cfd.u[11] = fanTable.y[2] * dc.mFlowRated[2].k
*/
void s000_baseline_eqFunction_2156(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2156};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* dc.roo.air.cfd.u[11] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[443]] /* fanTable.y[2] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[33]] /* dc.mFlowRated[2].k PARAM */));
  threadData->lastEquationSolved = 2156;
}

/*
equation index: 2157
type: SIMPLE_ASSIGN
$DER.dc.roo.air.cfd.uInt[11] = dc.roo.air.cfd.u[11]
*/
void s000_baseline_eqFunction_2157(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2157};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[56]] /* der(dc.roo.air.cfd.uInt[11]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* dc.roo.air.cfd.u[11] variable */);
  threadData->lastEquationSolved = 2157;
}

/*
equation index: 2158
type: SIMPLE_ASSIGN
dc.roo.air.fluInt.ports_mXi_flow[2,1] = dc.roo.air.cfd.u[11] * (if dc.roo.air.cfd.u[11] > 0.0 then dc.sup[2].X[1] else dc.roo.air.cfd.y[21])
*/
void s000_baseline_eqFunction_2158(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2158};
  modelica_boolean tmp169;
  modelica_real tmp170;
  modelica_real tmp171;
  tmp170 = 1.0;
  tmp171 = 0.0;
  relationhysteresis(data, &tmp169, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* dc.roo.air.cfd.u[11] variable */), 0.0, tmp170, tmp171, 3, Greater, GreaterZC);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[231]] /* dc.roo.air.fluInt.ports_mXi_flow[2,1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* dc.roo.air.cfd.u[11] variable */)) * ((tmp169?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1463]] /* dc.sup[2].X[1] PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[561]] /* dc.roo.air.cfd.y[21] DISCRETE */)));
  threadData->lastEquationSolved = 2158;
}

/*
equation index: 2159
type: SIMPLE_ASSIGN
$cse3 = Modelica.Blocks.Tables.Internal.getTimeTableValueNoDer(fanTable.tableID, 1, fanTable.timeScaled, fanTable.nextTimeEventScaled, pre(fanTable.nextTimeEventScaled))
*/
void s000_baseline_eqFunction_2159(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2159};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[110]] /* $cse3 variable */) = omc_Modelica_Blocks_Tables_Internal_getTimeTableValueNoDer(threadData, (data->simulationInfo->extObjs[4]), ((modelica_integer) 1), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[441]] /* fanTable.timeScaled variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[575]] /* fanTable.nextTimeEventScaled DISCRETE */), (data->simulationInfo->realVarsPre[575] /* fanTable.nextTimeEventScaled DISCRETE */));
  threadData->lastEquationSolved = 2159;
}

/*
equation index: 2160
type: SIMPLE_ASSIGN
fanTable.y[1] = fanTable.p_offset[1] + $cse3
*/
void s000_baseline_eqFunction_2160(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2160};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[442]] /* fanTable.y[1] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1536]] /* fanTable.p_offset[1] PARAM */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[110]] /* $cse3 variable */);
  threadData->lastEquationSolved = 2160;
}

/*
equation index: 2161
type: SIMPLE_ASSIGN
dc.roo.air.cfd.u[10] = fanTable.y[1] * dc.mFlowRated[1].k
*/
void s000_baseline_eqFunction_2161(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2161};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[169]] /* dc.roo.air.cfd.u[10] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[442]] /* fanTable.y[1] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[32]] /* dc.mFlowRated[1].k PARAM */));
  threadData->lastEquationSolved = 2161;
}

/*
equation index: 2162
type: SIMPLE_ASSIGN
$DER.dc.roo.air.fluInt.p = dc.roo.air.fluInt.p_start * (dc.roo.air.cfd.u[10] + dc.roo.air.cfd.u[11] + dc.roo.air.cfd.u[12] + dc.roo.air.cfd.u[13] + dc.roo.air.cfd.u[14] + dc.roo.air.cfd.u[15] + dc.roo.air.cfd.u[16] + dc.roo.air.cfd.u[17] + dc.roo.air.cfd.u[18] + dc.roo.air.cfd.u[19] + dc.roo.air.cfd.u[20] + dc.roo.air.cfd.u[21]) / dc.roo.air.fluInt.m_start
*/
void s000_baseline_eqFunction_2162(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2162};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[91]] /* der(dc.roo.air.fluInt.p) STATE_DER */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[411]] /* dc.roo.air.fluInt.p_start PARAM */)) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[169]] /* dc.roo.air.cfd.u[10] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* dc.roo.air.cfd.u[11] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[171]] /* dc.roo.air.cfd.u[12] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[172]] /* dc.roo.air.cfd.u[13] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[173]] /* dc.roo.air.cfd.u[14] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[174]] /* dc.roo.air.cfd.u[15] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[175]] /* dc.roo.air.cfd.u[16] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[176]] /* dc.roo.air.cfd.u[17] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[177]] /* dc.roo.air.cfd.u[18] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* dc.roo.air.cfd.u[19] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[179]] /* dc.roo.air.cfd.u[20] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[180]] /* dc.roo.air.cfd.u[21] variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[410]] /* dc.roo.air.fluInt.m_start PARAM */),"dc.roo.air.fluInt.m_start",equationIndexes));
  threadData->lastEquationSolved = 2162;
}

/*
equation index: 2163
type: SIMPLE_ASSIGN
$DER.dc.roo.air.cfd.uInt[10] = dc.roo.air.cfd.u[10]
*/
void s000_baseline_eqFunction_2163(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2163};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[55]] /* der(dc.roo.air.cfd.uInt[10]) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[169]] /* dc.roo.air.cfd.u[10] variable */);
  threadData->lastEquationSolved = 2163;
}

/*
equation index: 2164
type: SIMPLE_ASSIGN
dc.roo.air.fluInt.ports_mXi_flow[1,1] = dc.roo.air.cfd.u[10] * (if dc.roo.air.cfd.u[10] > 0.0 then dc.sup[1].X[1] else dc.roo.air.cfd.y[20])
*/
void s000_baseline_eqFunction_2164(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2164};
  modelica_boolean tmp172;
  modelica_real tmp173;
  modelica_real tmp174;
  tmp173 = 1.0;
  tmp174 = 0.0;
  relationhysteresis(data, &tmp172, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[169]] /* dc.roo.air.cfd.u[10] variable */), 0.0, tmp173, tmp174, 11, Greater, GreaterZC);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[230]] /* dc.roo.air.fluInt.ports_mXi_flow[1,1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[169]] /* dc.roo.air.cfd.u[10] variable */)) * ((tmp172?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1461]] /* dc.sup[1].X[1] PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[560]] /* dc.roo.air.cfd.y[20] DISCRETE */)));
  threadData->lastEquationSolved = 2164;
}

/*
equation index: 2165
type: SIMPLE_ASSIGN
dc.roo.air.fluInt.mbXi_flow[1] = dc.roo.air.fluInt.ports_mXi_flow[1,1] + dc.roo.air.fluInt.ports_mXi_flow[2,1] + dc.roo.air.fluInt.ports_mXi_flow[3,1] + dc.roo.air.fluInt.ports_mXi_flow[4,1] + dc.roo.air.fluInt.ports_mXi_flow[5,1] + dc.roo.air.fluInt.ports_mXi_flow[6,1] + dc.roo.air.fluInt.ports_mXi_flow[7,1] + dc.roo.air.fluInt.ports_mXi_flow[8,1] + dc.roo.air.fluInt.ports_mXi_flow[9,1] + dc.roo.air.fluInt.ports_mXi_flow[10,1] + dc.roo.air.fluInt.ports_mXi_flow[11,1] + dc.roo.air.fluInt.ports_mXi_flow[12,1]
*/
void s000_baseline_eqFunction_2165(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2165};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[229]] /* dc.roo.air.fluInt.mbXi_flow[1] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[230]] /* dc.roo.air.fluInt.ports_mXi_flow[1,1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[231]] /* dc.roo.air.fluInt.ports_mXi_flow[2,1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[232]] /* dc.roo.air.fluInt.ports_mXi_flow[3,1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[233]] /* dc.roo.air.fluInt.ports_mXi_flow[4,1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[234]] /* dc.roo.air.fluInt.ports_mXi_flow[5,1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[235]] /* dc.roo.air.fluInt.ports_mXi_flow[6,1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[236]] /* dc.roo.air.fluInt.ports_mXi_flow[7,1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[237]] /* dc.roo.air.fluInt.ports_mXi_flow[8,1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[238]] /* dc.roo.air.fluInt.ports_mXi_flow[9,1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[239]] /* dc.roo.air.fluInt.ports_mXi_flow[10,1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[240]] /* dc.roo.air.fluInt.ports_mXi_flow[11,1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[241]] /* dc.roo.air.fluInt.ports_mXi_flow[12,1] variable */);
  threadData->lastEquationSolved = 2165;
}

/*
equation index: 2166
type: WHEN

when {$whenCondition5} then
  fanTable.nextTimeEvent = if fanTable.nextTimeEventScaled < 1e60 then fanTable.nextTimeEventScaled else 1e60;
end when;
*/
void s000_baseline_eqFunction_2166(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2166};
  modelica_boolean tmp175;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[4]] /* $whenCondition5 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[4] /* $whenCondition5 DISCRETE */) /* edge */))
  {
    tmp175 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[575]] /* fanTable.nextTimeEventScaled DISCRETE */),1e60);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[574]] /* fanTable.nextTimeEvent DISCRETE */) = (tmp175?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[575]] /* fanTable.nextTimeEventScaled DISCRETE */):1e60);
  }
  threadData->lastEquationSolved = 2166;
}

/*
equation index: 2167
type: SIMPLE_ASSIGN
dc.weaDat.weaBus.cloTim = time
*/
void s000_baseline_eqFunction_2167(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2167};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[430]] /* dc.weaDat.weaBus.cloTim variable */) = data->localData[0]->timeValue;
  threadData->lastEquationSolved = 2167;
}

/*
equation index: 2168
type: SIMPLE_ASSIGN
$whenCondition2 = dc.weaDat.conTim.canRepeatWeatherFile and dc.weaDat.weaBus.cloTim > pre(dc.weaDat.conTim.tNext)
*/
void s000_baseline_eqFunction_2168(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2168};
  modelica_boolean tmp176;
  modelica_real tmp177;
  modelica_real tmp178;
  tmp177 = 1.0;
  tmp178 = 1.0;
  relationhysteresis(data, &tmp176, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[430]] /* dc.weaDat.weaBus.cloTim variable */), (data->simulationInfo->realVarsPre[572] /* dc.weaDat.conTim.tNext DISCRETE */), tmp177, tmp178, 15, Greater, GreaterZC);
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1]] /* $whenCondition2 DISCRETE */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[343]] /* dc.weaDat.conTim.canRepeatWeatherFile PARAM */) && tmp176);
  threadData->lastEquationSolved = 2168;
}

/*
equation index: 2169
type: SIMPLE_ASSIGN
$cse17 = cos((dc.weaDat.weaBus.cloTim / 86400.0 + 10.0) * 0.017202423838958484)
*/
void s000_baseline_eqFunction_2169(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2169};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[99]] /* $cse17 variable */) = cos((DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[430]] /* dc.weaDat.weaBus.cloTim variable */),86400.0,"86400.0",equationIndexes) + 10.0) * (0.017202423838958484));
  threadData->lastEquationSolved = 2169;
}

/*
equation index: 2170
type: SIMPLE_ASSIGN
dc.weaDat.weaBus.solDec = asin((-0.3979486313076103) * $cse17)
*/
void s000_baseline_eqFunction_2170(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2170};
  modelica_real tmp179;
  tmp179 = (-0.3979486313076103) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[99]] /* $cse17 variable */));
  if(!(tmp179 >= -1.0 && tmp179 <= 1.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of asin((-0.3979486313076103) * $cse17) outside the domain -1.0 <= %g <= 1.0", tmp179);
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[435]] /* dc.weaDat.weaBus.solDec variable */) = asin(tmp179);
  threadData->lastEquationSolved = 2170;
}

/*
equation index: 2171
type: SIMPLE_ASSIGN
$cse22 = sin(dc.weaDat.weaBus.solDec)
*/
void s000_baseline_eqFunction_2171(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2171};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[102]] /* $cse22 variable */) = sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[435]] /* dc.weaDat.weaBus.solDec variable */));
  threadData->lastEquationSolved = 2171;
}

/*
equation index: 2172
type: SIMPLE_ASSIGN
$cse19 = cos(dc.weaDat.weaBus.solDec)
*/
void s000_baseline_eqFunction_2172(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2172};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[100]] /* $cse19 variable */) = cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[435]] /* dc.weaDat.weaBus.solDec variable */));
  threadData->lastEquationSolved = 2172;
}

/*
equation index: 2173
type: SIMPLE_ASSIGN
dc.weaDat.add30Min.y = 1800.0 * dc.weaDat.add30Min.k1 + dc.weaDat.add30Min.k2 * dc.weaDat.weaBus.cloTim
*/
void s000_baseline_eqFunction_2173(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2173};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[376]] /* dc.weaDat.add30Min.y variable */) = (1800.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1486]] /* dc.weaDat.add30Min.k1 PARAM */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1487]] /* dc.weaDat.add30Min.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[430]] /* dc.weaDat.weaBus.cloTim variable */));
  threadData->lastEquationSolved = 2173;
}

/*
equation index: 2174
type: SIMPLE_ASSIGN
$whenCondition1 = dc.weaDat.conTimMin.canRepeatWeatherFile and dc.weaDat.add30Min.y > pre(dc.weaDat.conTimMin.tNext)
*/
void s000_baseline_eqFunction_2174(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2174};
  modelica_boolean tmp180;
  modelica_real tmp181;
  modelica_real tmp182;
  tmp181 = 1.0;
  tmp182 = 1.0;
  relationhysteresis(data, &tmp180, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[376]] /* dc.weaDat.add30Min.y variable */), (data->simulationInfo->realVarsPre[573] /* dc.weaDat.conTimMin.tNext DISCRETE */), tmp181, tmp182, 14, Greater, GreaterZC);
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[344]] /* dc.weaDat.conTimMin.canRepeatWeatherFile PARAM */) && tmp180);
  threadData->lastEquationSolved = 2174;
}

/*
equation index: 2175
type: SIMPLE_ASSIGN
dc.weaDat.locTim.locTim = dc.weaDat.weaBus.cloTim + dc.weaDat.locTim.diff
*/
void s000_baseline_eqFunction_2175(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2175};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[412]] /* dc.weaDat.locTim.locTim variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[430]] /* dc.weaDat.weaBus.cloTim variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1515]] /* dc.weaDat.locTim.diff PARAM */);
  threadData->lastEquationSolved = 2175;
}

/*
equation index: 2176
type: SIMPLE_ASSIGN
dc.weaDat.eqnTim.Bt = 0.017261498096647215 * (-80.0 + 1.1574074074074073e-5 * dc.weaDat.weaBus.cloTim)
*/
void s000_baseline_eqFunction_2176(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2176};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[410]] /* dc.weaDat.eqnTim.Bt variable */) = (0.017261498096647215) * (-80.0 + (1.1574074074074073e-5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[430]] /* dc.weaDat.weaBus.cloTim variable */)));
  threadData->lastEquationSolved = 2176;
}

/*
equation index: 2177
type: SIMPLE_ASSIGN
$cse25 = sin(dc.weaDat.eqnTim.Bt)
*/
void s000_baseline_eqFunction_2177(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2177};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[105]] /* $cse25 variable */) = sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[410]] /* dc.weaDat.eqnTim.Bt variable */));
  threadData->lastEquationSolved = 2177;
}

/*
equation index: 2178
type: SIMPLE_ASSIGN
$cse24 = cos(dc.weaDat.eqnTim.Bt)
*/
void s000_baseline_eqFunction_2178(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2178};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[104]] /* $cse24 variable */) = cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[410]] /* dc.weaDat.eqnTim.Bt variable */));
  threadData->lastEquationSolved = 2178;
}

/*
equation index: 2179
type: SIMPLE_ASSIGN
$cse23 = sin(2.0 * dc.weaDat.eqnTim.Bt)
*/
void s000_baseline_eqFunction_2179(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2179};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[103]] /* $cse23 variable */) = sin((2.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[410]] /* dc.weaDat.eqnTim.Bt variable */)));
  threadData->lastEquationSolved = 2179;
}

/*
equation index: 2180
type: SIMPLE_ASSIGN
dc.weaDat.eqnTim.eqnTim = 60.0 * (9.87 * $cse23 + (-7.53) * $cse24 + (-1.5) * $cse25)
*/
void s000_baseline_eqFunction_2180(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2180};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[411]] /* dc.weaDat.eqnTim.eqnTim variable */) = (60.0) * ((9.87) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[103]] /* $cse23 variable */)) + (-7.53) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[104]] /* $cse24 variable */)) + (-1.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[105]] /* $cse25 variable */)));
  threadData->lastEquationSolved = 2180;
}

/*
equation index: 2181
type: SIMPLE_ASSIGN
dc.weaDat.weaBus.solTim = dc.weaDat.locTim.locTim + dc.weaDat.eqnTim.eqnTim
*/
void s000_baseline_eqFunction_2181(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2181};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[437]] /* dc.weaDat.weaBus.solTim variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[412]] /* dc.weaDat.locTim.locTim variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[411]] /* dc.weaDat.eqnTim.eqnTim variable */);
  threadData->lastEquationSolved = 2181;
}

/*
equation index: 2182
type: SIMPLE_ASSIGN
dc.weaDat.weaBus.solHouAng = 0.2617993877991494 * (-12.0 + 2.777777777777778e-4 * dc.weaDat.weaBus.solTim)
*/
void s000_baseline_eqFunction_2182(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2182};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[436]] /* dc.weaDat.weaBus.solHouAng variable */) = (0.2617993877991494) * (-12.0 + (2.777777777777778e-4) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[437]] /* dc.weaDat.weaBus.solTim variable */)));
  threadData->lastEquationSolved = 2182;
}

/*
equation index: 2183
type: SIMPLE_ASSIGN
$cse20 = cos(dc.weaDat.weaBus.solHouAng)
*/
void s000_baseline_eqFunction_2183(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2183};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[101]] /* $cse20 variable */) = cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[436]] /* dc.weaDat.weaBus.solHouAng variable */));
  threadData->lastEquationSolved = 2183;
}

/*
equation index: 2184
type: SIMPLE_ASSIGN
dc.weaDat.weaBus.solZen = acos($cse18 * $cse19 * $cse20 + $cse21 * $cse22)
*/
void s000_baseline_eqFunction_2184(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2184};
  modelica_real tmp183;
  tmp183 = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[0]] /* $cse18 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[100]] /* $cse19 variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[101]] /* $cse20 variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1]] /* $cse21 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[102]] /* $cse22 variable */));
  if(!(tmp183 >= -1.0 && tmp183 <= 1.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of acos($cse18 * $cse19 * $cse20 + $cse21 * $cse22) outside the domain -1.0 <= %g <= 1.0", tmp183);
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[438]] /* dc.weaDat.weaBus.solZen variable */) = acos(tmp183);
  threadData->lastEquationSolved = 2184;
}

/*
equation index: 2185
type: SIMPLE_ASSIGN
dc.weaDat.weaBus.solAlt = 1.5707963267948966 - dc.weaDat.weaBus.solZen
*/
void s000_baseline_eqFunction_2185(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2185};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[434]] /* dc.weaDat.weaBus.solAlt variable */) = 1.5707963267948966 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[438]] /* dc.weaDat.weaBus.solZen variable */);
  threadData->lastEquationSolved = 2185;
}

/*
equation index: 2186
type: WHEN

when {$whenCondition2} then
  dc.weaDat.conTim.tNext = if dc.weaDat.conTim.canRepeatWeatherFile then dc.weaDat.conTim.lenWea * (1.0 + (*Real*)(integer(dc.weaDat.weaBus.cloTim / dc.weaDat.conTim.lenWea))) else time;
end when;
*/
void s000_baseline_eqFunction_2186(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2186};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1]] /* $whenCondition2 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[1] /* $whenCondition2 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[572]] /* dc.weaDat.conTim.tNext DISCRETE */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[343]] /* dc.weaDat.conTim.canRepeatWeatherFile PARAM */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1501]] /* dc.weaDat.conTim.lenWea PARAM */)) * (1.0 + ((modelica_real)((modelica_integer)floor(DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[430]] /* dc.weaDat.weaBus.cloTim variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1501]] /* dc.weaDat.conTim.lenWea PARAM */),"dc.weaDat.conTim.lenWea",equationIndexes))))):data->localData[0]->timeValue);
  }
  threadData->lastEquationSolved = 2186;
}

/*
equation index: 2187
type: SIMPLE_ASSIGN
dc.weaDat.conTim.calTim = if dc.weaDat.conTim.canRepeatWeatherFile then dc.weaDat.weaBus.cloTim - dc.weaDat.conTim.tNext + dc.weaDat.conTim.lenWea else dc.weaDat.weaBus.cloTim
*/
void s000_baseline_eqFunction_2187(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2187};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[378]] /* dc.weaDat.conTim.calTim variable */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[343]] /* dc.weaDat.conTim.canRepeatWeatherFile PARAM */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[430]] /* dc.weaDat.weaBus.cloTim variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[572]] /* dc.weaDat.conTim.tNext DISCRETE */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1501]] /* dc.weaDat.conTim.lenWea PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[430]] /* dc.weaDat.weaBus.cloTim variable */));
  threadData->lastEquationSolved = 2187;
}

/*
equation index: 2188
type: SIMPLE_ASSIGN
dc.weaDat.datRea.y[1] = Modelica.Blocks.Tables.Internal.getTable1DValue(dc.weaDat.datRea.tableID, 1, dc.weaDat.conTim.calTim)
*/
void s000_baseline_eqFunction_2188(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2188};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[381]] /* dc.weaDat.datRea.y[1] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[2]), ((modelica_integer) 1), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[378]] /* dc.weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 2188;
}

/*
equation index: 2189
type: SIMPLE_ASSIGN
dc.weaDat.weaBus.TDryBul = 273.15 + dc.weaDat.datRea.y[1]
*/
void s000_baseline_eqFunction_2189(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2189};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[427]] /* dc.weaDat.weaBus.TDryBul variable */) = 273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[381]] /* dc.weaDat.datRea.y[1] variable */);
  threadData->lastEquationSolved = 2189;
}

/*
equation index: 2190
type: SIMPLE_ASSIGN
$cse15 = exp(4102.99 / (dc.weaDat.weaBus.TDryBul - 35.719) - 17.2799)
*/
void s000_baseline_eqFunction_2190(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2190};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[97]] /* $cse15 variable */) = exp(DIVISION_SIM(4102.99,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[427]] /* dc.weaDat.weaBus.TDryBul variable */) - 35.719,"dc.weaDat.weaBus.TDryBul - 35.719",equationIndexes) - 17.2799);
  threadData->lastEquationSolved = 2190;
}

/*
equation index: 2191
type: SIMPLE_ASSIGN
dc.weaDat.datRea.y[2] = Modelica.Blocks.Tables.Internal.getTable1DValue(dc.weaDat.datRea.tableID, 2, dc.weaDat.conTim.calTim)
*/
void s000_baseline_eqFunction_2191(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2191};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[382]] /* dc.weaDat.datRea.y[2] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[2]), ((modelica_integer) 2), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[378]] /* dc.weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 2191;
}

/*
equation index: 2192
type: SIMPLE_ASSIGN
dc.weaDat.weaBus.TDewPoi = 273.15 + dc.weaDat.datRea.y[2]
*/
void s000_baseline_eqFunction_2192(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2192};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[426]] /* dc.weaDat.weaBus.TDewPoi variable */) = 273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[382]] /* dc.weaDat.datRea.y[2] variable */);
  threadData->lastEquationSolved = 2192;
}

/*
equation index: 2193
type: SIMPLE_ASSIGN
dc.weaDat.TBlaSkyCom.TDewPoiK = smooth(1, if noEvent(dc.weaDat.weaBus.TDewPoi - dc.weaDat.weaBus.TDryBul > 0.1) then dc.weaDat.weaBus.TDryBul else if noEvent(dc.weaDat.weaBus.TDewPoi - dc.weaDat.weaBus.TDryBul < -0.1) then dc.weaDat.weaBus.TDewPoi else 0.25 * 10.0 * (dc.weaDat.weaBus.TDewPoi - dc.weaDat.weaBus.TDryBul) * ((10.0 * (dc.weaDat.weaBus.TDewPoi - dc.weaDat.weaBus.TDryBul)) ^ 2.0 - 3.0) * (dc.weaDat.weaBus.TDewPoi - dc.weaDat.weaBus.TDryBul) + 0.5 * (dc.weaDat.weaBus.TDryBul + dc.weaDat.weaBus.TDewPoi))
*/
void s000_baseline_eqFunction_2193(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2193};
  modelica_boolean tmp184;
  modelica_boolean tmp185;
  modelica_real tmp186;
  modelica_boolean tmp187;
  modelica_real tmp188;
  modelica_boolean tmp189;
  modelica_real tmp190;
  tmp184 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[426]] /* dc.weaDat.weaBus.TDewPoi variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[427]] /* dc.weaDat.weaBus.TDryBul variable */),0.1);
  tmp189 = (modelica_boolean)tmp184;
  if(tmp189)
  {
    tmp190 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[427]] /* dc.weaDat.weaBus.TDryBul variable */);
  }
  else
  {
    tmp185 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[426]] /* dc.weaDat.weaBus.TDewPoi variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[427]] /* dc.weaDat.weaBus.TDryBul variable */),-0.1);
    tmp187 = (modelica_boolean)tmp185;
    if(tmp187)
    {
      tmp188 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[426]] /* dc.weaDat.weaBus.TDewPoi variable */);
    }
    else
    {
      tmp186 = (10.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[426]] /* dc.weaDat.weaBus.TDewPoi variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[427]] /* dc.weaDat.weaBus.TDryBul variable */));
      tmp188 = (0.25) * ((((10.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[426]] /* dc.weaDat.weaBus.TDewPoi variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[427]] /* dc.weaDat.weaBus.TDryBul variable */))) * ((tmp186 * tmp186) - 3.0)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[426]] /* dc.weaDat.weaBus.TDewPoi variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[427]] /* dc.weaDat.weaBus.TDryBul variable */))) + (0.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[427]] /* dc.weaDat.weaBus.TDryBul variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[426]] /* dc.weaDat.weaBus.TDewPoi variable */));
    }
    tmp190 = tmp188;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[373]] /* dc.weaDat.TBlaSkyCom.TDewPoiK variable */) = tmp190;
  threadData->lastEquationSolved = 2193;
}

/*
equation index: 2194
type: SIMPLE_ASSIGN
$cse26 = log((-dc.weaDat.TBlaSkyCom.TDewPoiK) / (-273.15))
*/
void s000_baseline_eqFunction_2194(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2194};
  modelica_real tmp191;
  tmp191 = DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[373]] /* dc.weaDat.TBlaSkyCom.TDewPoiK variable */)),-273.15,"-273.15",equationIndexes);
  if(!(tmp191 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of log((-dc.weaDat.TBlaSkyCom.TDewPoiK) / (-273.15)) was %g should be > 0", tmp191);
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[106]] /* $cse26 variable */) = log(tmp191);
  threadData->lastEquationSolved = 2194;
}

/*
equation index: 2195
type: SIMPLE_ASSIGN
dc.weaDat.datRea.y[3] = Modelica.Blocks.Tables.Internal.getTable1DValue(dc.weaDat.datRea.tableID, 3, dc.weaDat.conTim.calTim)
*/
void s000_baseline_eqFunction_2195(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2195};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[383]] /* dc.weaDat.datRea.y[3] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[2]), ((modelica_integer) 3), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[378]] /* dc.weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 2195;
}

/*
equation index: 2196
type: SIMPLE_ASSIGN
dc.weaDat.relHumSel.uFil = 0.01 * dc.weaDat.datRea.y[3]
*/
void s000_baseline_eqFunction_2196(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2196};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[414]] /* dc.weaDat.relHumSel.uFil variable */) = (0.01) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[383]] /* dc.weaDat.datRea.y[3] variable */));
  threadData->lastEquationSolved = 2196;
}

/*
equation index: 2197
type: SIMPLE_ASSIGN
$cse30 = max(0.0, dc.weaDat.relHumSel.uFil)
*/
void s000_baseline_eqFunction_2197(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2197};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[111]] /* $cse30 variable */) = fmax(0.0,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[414]] /* dc.weaDat.relHumSel.uFil variable */));
  threadData->lastEquationSolved = 2197;
}

/*
equation index: 2198
type: SIMPLE_ASSIGN
dc.weaDat.weaBus.relHum = min(1.0, $cse30)
*/
void s000_baseline_eqFunction_2198(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2198};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[433]] /* dc.weaDat.weaBus.relHum variable */) = fmin(1.0,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[111]] /* $cse30 variable */));
  threadData->lastEquationSolved = 2198;
}

/*
equation index: 2199
type: SIMPLE_ASSIGN
dc.weaDat.tWetBul_TDryBulXi.XiDryBul = 0.621964713077499 * dc.weaDat.weaBus.relHum / ((-0.378035286922501) * dc.weaDat.weaBus.relHum + 0.0016349032219037793 * dc.weaDat.pAtmSel.p * $cse15)
*/
void s000_baseline_eqFunction_2199(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2199};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[416]] /* dc.weaDat.tWetBul_TDryBulXi.XiDryBul variable */) = (0.621964713077499) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[433]] /* dc.weaDat.weaBus.relHum variable */),(-0.378035286922501) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[433]] /* dc.weaDat.weaBus.relHum variable */)) + (0.0016349032219037793) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1523]] /* dc.weaDat.pAtmSel.p PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[97]] /* $cse15 variable */))),"(-0.378035286922501) * dc.weaDat.weaBus.relHum + 0.0016349032219037793 * dc.weaDat.pAtmSel.p * $cse15",equationIndexes));
  threadData->lastEquationSolved = 2199;
}

void s000_baseline_eqFunction_2200(DATA*, threadData_t*);
void s000_baseline_eqFunction_2201(DATA*, threadData_t*);
void s000_baseline_eqFunction_2202(DATA*, threadData_t*);
void s000_baseline_eqFunction_2203(DATA*, threadData_t*);
/*
equation index: 2209
indexNonlinear: 14
type: NONLINEAR

vars: {dc.weaDat.weaBus.TWetBul}
eqns: {2200, 2201, 2202, 2203}
*/
void s000_baseline_eqFunction_2209(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2209};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 2209 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[14].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[428]] /* dc.weaDat.weaBus.TWetBul variable */);
  retValue = solve_nonlinear_system(data, threadData, 14);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2209};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 2209 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[428]] /* dc.weaDat.weaBus.TWetBul variable */) = data->simulationInfo->nonlinearSystemData[14].nlsx[0];
  threadData->lastEquationSolved = 2209;
}

/*
equation index: 2210
type: SIMPLE_ASSIGN
dc.weaDat.datRea.y[4] = Modelica.Blocks.Tables.Internal.getTable1DValue(dc.weaDat.datRea.tableID, 4, dc.weaDat.conTim.calTim)
*/
void s000_baseline_eqFunction_2210(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2210};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[384]] /* dc.weaDat.datRea.y[4] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[2]), ((modelica_integer) 4), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[378]] /* dc.weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 2210;
}

/*
equation index: 2211
type: SIMPLE_ASSIGN
dc.weaDat.datRea.y[5] = Modelica.Blocks.Tables.Internal.getTable1DValue(dc.weaDat.datRea.tableID, 5, dc.weaDat.conTim.calTim)
*/
void s000_baseline_eqFunction_2211(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2211};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[385]] /* dc.weaDat.datRea.y[5] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[2]), ((modelica_integer) 5), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[378]] /* dc.weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 2211;
}

/*
equation index: 2212
type: SIMPLE_ASSIGN
dc.weaDat.datRea.y[6] = Modelica.Blocks.Tables.Internal.getTable1DValue(dc.weaDat.datRea.tableID, 6, dc.weaDat.conTim.calTim)
*/
void s000_baseline_eqFunction_2212(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2212};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[386]] /* dc.weaDat.datRea.y[6] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[2]), ((modelica_integer) 6), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[378]] /* dc.weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 2212;
}

/*
equation index: 2213
type: SIMPLE_ASSIGN
dc.weaDat.datRea.y[7] = Modelica.Blocks.Tables.Internal.getTable1DValue(dc.weaDat.datRea.tableID, 7, dc.weaDat.conTim.calTim)
*/
void s000_baseline_eqFunction_2213(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2213};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[387]] /* dc.weaDat.datRea.y[7] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[2]), ((modelica_integer) 7), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[378]] /* dc.weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 2213;
}

/*
equation index: 2214
type: SIMPLE_ASSIGN
dc.weaDat.datRea.y[8] = Modelica.Blocks.Tables.Internal.getTable1DValue(dc.weaDat.datRea.tableID, 8, dc.weaDat.conTim.calTim)
*/
void s000_baseline_eqFunction_2214(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2214};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[388]] /* dc.weaDat.datRea.y[8] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[2]), ((modelica_integer) 8), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[378]] /* dc.weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 2214;
}

/*
equation index: 2215
type: SIMPLE_ASSIGN
dc.weaDat.datRea.y[9] = Modelica.Blocks.Tables.Internal.getTable1DValue(dc.weaDat.datRea.tableID, 9, dc.weaDat.conTim.calTim)
*/
void s000_baseline_eqFunction_2215(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2215};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[389]] /* dc.weaDat.datRea.y[9] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[2]), ((modelica_integer) 9), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[378]] /* dc.weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 2215;
}

/*
equation index: 2216
type: SIMPLE_ASSIGN
dc.weaDat.datRea.y[10] = Modelica.Blocks.Tables.Internal.getTable1DValue(dc.weaDat.datRea.tableID, 10, dc.weaDat.conTim.calTim)
*/
void s000_baseline_eqFunction_2216(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2216};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[390]] /* dc.weaDat.datRea.y[10] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[2]), ((modelica_integer) 10), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[378]] /* dc.weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 2216;
}

/*
equation index: 2217
type: SIMPLE_ASSIGN
dc.weaDat.datRea.y[11] = Modelica.Blocks.Tables.Internal.getTable1DValue(dc.weaDat.datRea.tableID, 11, dc.weaDat.conTim.calTim)
*/
void s000_baseline_eqFunction_2217(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2217};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[391]] /* dc.weaDat.datRea.y[11] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[2]), ((modelica_integer) 11), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[378]] /* dc.weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 2217;
}

/*
equation index: 2218
type: SIMPLE_ASSIGN
dc.weaDat.conWinDir.y = 0.017453292519943295 * dc.weaDat.datRea.y[11]
*/
void s000_baseline_eqFunction_2218(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2218};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[380]] /* dc.weaDat.conWinDir.y variable */) = (0.017453292519943295) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[391]] /* dc.weaDat.datRea.y[11] variable */));
  threadData->lastEquationSolved = 2218;
}

/*
equation index: 2219
type: SIMPLE_ASSIGN
$cse27 = max(0.0, dc.weaDat.conWinDir.y)
*/
void s000_baseline_eqFunction_2219(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2219};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[107]] /* $cse27 variable */) = fmax(0.0,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[380]] /* dc.weaDat.conWinDir.y variable */));
  threadData->lastEquationSolved = 2219;
}

/*
equation index: 2220
type: SIMPLE_ASSIGN
dc.weaDat.weaBus.winDir = min(6.283185307179586, $cse27)
*/
void s000_baseline_eqFunction_2220(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2220};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[439]] /* dc.weaDat.weaBus.winDir variable */) = fmin(6.283185307179586,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[107]] /* $cse27 variable */));
  threadData->lastEquationSolved = 2220;
}

/*
equation index: 2221
type: SIMPLE_ASSIGN
dc.weaDat.datRea.y[12] = Modelica.Blocks.Tables.Internal.getTable1DValue(dc.weaDat.datRea.tableID, 12, dc.weaDat.conTim.calTim)
*/
void s000_baseline_eqFunction_2221(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2221};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[392]] /* dc.weaDat.datRea.y[12] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[2]), ((modelica_integer) 12), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[378]] /* dc.weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 2221;
}

/*
equation index: 2222
type: SIMPLE_ASSIGN
dc.weaDat.weaBus.winSpe = max(0.0, dc.weaDat.datRea.y[12])
*/
void s000_baseline_eqFunction_2222(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2222};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[440]] /* dc.weaDat.weaBus.winSpe variable */) = fmax(0.0,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[392]] /* dc.weaDat.datRea.y[12] variable */));
  threadData->lastEquationSolved = 2222;
}

/*
equation index: 2223
type: SIMPLE_ASSIGN
dc.weaDat.datRea.y[13] = Modelica.Blocks.Tables.Internal.getTable1DValue(dc.weaDat.datRea.tableID, 13, dc.weaDat.conTim.calTim)
*/
void s000_baseline_eqFunction_2223(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2223};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[393]] /* dc.weaDat.datRea.y[13] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[2]), ((modelica_integer) 13), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[378]] /* dc.weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 2223;
}

/*
equation index: 2224
type: SIMPLE_ASSIGN
dc.weaDat.totSkyCovSel.y = 0.1 * dc.weaDat.datRea.y[13]
*/
void s000_baseline_eqFunction_2224(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2224};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[420]] /* dc.weaDat.totSkyCovSel.y variable */) = (0.1) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[393]] /* dc.weaDat.datRea.y[13] variable */));
  threadData->lastEquationSolved = 2224;
}

/*
equation index: 2225
type: SIMPLE_ASSIGN
$cse29 = max(0.0, dc.weaDat.totSkyCovSel.y)
*/
void s000_baseline_eqFunction_2225(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2225};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[109]] /* $cse29 variable */) = fmax(0.0,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[420]] /* dc.weaDat.totSkyCovSel.y variable */));
  threadData->lastEquationSolved = 2225;
}

/*
equation index: 2226
type: SIMPLE_ASSIGN
dc.weaDat.weaBus.nTot = min(1.0, $cse29)
*/
void s000_baseline_eqFunction_2226(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2226};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[432]] /* dc.weaDat.weaBus.nTot variable */) = fmin(1.0,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[109]] /* $cse29 variable */));
  threadData->lastEquationSolved = 2226;
}

/*
equation index: 2227
type: SIMPLE_ASSIGN
dc.weaDat.datRea.y[14] = Modelica.Blocks.Tables.Internal.getTable1DValue(dc.weaDat.datRea.tableID, 14, dc.weaDat.conTim.calTim)
*/
void s000_baseline_eqFunction_2227(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2227};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[394]] /* dc.weaDat.datRea.y[14] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[2]), ((modelica_integer) 14), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[378]] /* dc.weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 2227;
}

/*
equation index: 2228
type: SIMPLE_ASSIGN
dc.weaDat.opaSkyCovSel.y = 0.1 * dc.weaDat.datRea.y[14]
*/
void s000_baseline_eqFunction_2228(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2228};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[413]] /* dc.weaDat.opaSkyCovSel.y variable */) = (0.1) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[394]] /* dc.weaDat.datRea.y[14] variable */));
  threadData->lastEquationSolved = 2228;
}

/*
equation index: 2229
type: SIMPLE_ASSIGN
$cse28 = max(0.0, dc.weaDat.opaSkyCovSel.y)
*/
void s000_baseline_eqFunction_2229(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2229};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[108]] /* $cse28 variable */) = fmax(0.0,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[413]] /* dc.weaDat.opaSkyCovSel.y variable */));
  threadData->lastEquationSolved = 2229;
}

/*
equation index: 2230
type: SIMPLE_ASSIGN
dc.weaDat.weaBus.nOpa = min(1.0, $cse28)
*/
void s000_baseline_eqFunction_2230(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2230};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[431]] /* dc.weaDat.weaBus.nOpa variable */) = fmin(1.0,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[108]] /* $cse28 variable */));
  threadData->lastEquationSolved = 2230;
}

/*
equation index: 2231
type: SIMPLE_ASSIGN
dc.weaDat.TBlaSkyCom.nOpa10 = 10.0 * dc.weaDat.weaBus.nOpa
*/
void s000_baseline_eqFunction_2231(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2231};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[375]] /* dc.weaDat.TBlaSkyCom.nOpa10 variable */) = (10.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[431]] /* dc.weaDat.weaBus.nOpa variable */));
  threadData->lastEquationSolved = 2231;
}

/*
equation index: 2232
type: SIMPLE_ASSIGN
dc.weaDat.TBlaSkyCom.epsSky = (0.787 + 0.764 * $cse26) * (1.0 + 0.0224 * dc.weaDat.TBlaSkyCom.nOpa10 + (-0.0035) * dc.weaDat.TBlaSkyCom.nOpa10 ^ 2.0 + 2.8e-4 * dc.weaDat.TBlaSkyCom.nOpa10 ^ 3.0)
*/
void s000_baseline_eqFunction_2232(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2232};
  modelica_real tmp192;
  modelica_real tmp193;
  tmp192 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[375]] /* dc.weaDat.TBlaSkyCom.nOpa10 variable */);
  tmp193 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[375]] /* dc.weaDat.TBlaSkyCom.nOpa10 variable */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[374]] /* dc.weaDat.TBlaSkyCom.epsSky variable */) = (0.787 + (0.764) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[106]] /* $cse26 variable */))) * (1.0 + (0.0224) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[375]] /* dc.weaDat.TBlaSkyCom.nOpa10 variable */)) + (-0.0035) * ((tmp192 * tmp192)) + (2.8e-4) * ((tmp193 * tmp193 * tmp193)));
  threadData->lastEquationSolved = 2232;
}

/*
equation index: 2233
type: SIMPLE_ASSIGN
dc.weaDat.weaBus.TBlaSky = dc.weaDat.weaBus.TDryBul * dc.weaDat.TBlaSkyCom.epsSky ^ 0.25
*/
void s000_baseline_eqFunction_2233(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2233};
  modelica_real tmp194;
  modelica_real tmp195;
  modelica_real tmp196;
  modelica_real tmp197;
  modelica_real tmp198;
  modelica_real tmp199;
  modelica_real tmp200;
  tmp194 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[374]] /* dc.weaDat.TBlaSkyCom.epsSky variable */);
  tmp195 = 0.25;
  if(tmp194 < 0.0 && tmp195 != 0.0)
  {
    tmp197 = modf(tmp195, &tmp198);
    
    if(tmp197 > 0.5)
    {
      tmp197 -= 1.0;
      tmp198 += 1.0;
    }
    else if(tmp197 < -0.5)
    {
      tmp197 += 1.0;
      tmp198 -= 1.0;
    }
    
    if(fabs(tmp197) < 1e-10)
      tmp196 = pow(tmp194, tmp198);
    else
    {
      tmp200 = modf(1.0/tmp195, &tmp199);
      if(tmp200 > 0.5)
      {
        tmp200 -= 1.0;
        tmp199 += 1.0;
      }
      else if(tmp200 < -0.5)
      {
        tmp200 += 1.0;
        tmp199 -= 1.0;
      }
      if(fabs(tmp200) < 1e-10 && ((unsigned long)tmp199 & 1))
      {
        tmp196 = -pow(-tmp194, tmp197)*pow(tmp194, tmp198);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp194, tmp195);
      }
    }
  }
  else
  {
    tmp196 = pow(tmp194, tmp195);
  }
  if(isnan(tmp196) || isinf(tmp196))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp194, tmp195);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[425]] /* dc.weaDat.weaBus.TBlaSky variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[427]] /* dc.weaDat.weaBus.TDryBul variable */)) * (tmp196);
  threadData->lastEquationSolved = 2233;
}

/*
equation index: 2234
type: SIMPLE_ASSIGN
dc.weaDat.datRea.y[15] = Modelica.Blocks.Tables.Internal.getTable1DValue(dc.weaDat.datRea.tableID, 15, dc.weaDat.conTim.calTim)
*/
void s000_baseline_eqFunction_2234(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2234};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[395]] /* dc.weaDat.datRea.y[15] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[2]), ((modelica_integer) 15), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[378]] /* dc.weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 2234;
}

/*
equation index: 2235
type: SIMPLE_ASSIGN
dc.weaDat.datRea.y[16] = Modelica.Blocks.Tables.Internal.getTable1DValue(dc.weaDat.datRea.tableID, 16, dc.weaDat.conTim.calTim)
*/
void s000_baseline_eqFunction_2235(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2235};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[396]] /* dc.weaDat.datRea.y[16] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[2]), ((modelica_integer) 16), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[378]] /* dc.weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 2235;
}

/*
equation index: 2236
type: SIMPLE_ASSIGN
dc.weaDat.weaBus.ceiHei = max(0.0, dc.weaDat.datRea.y[16])
*/
void s000_baseline_eqFunction_2236(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2236};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[429]] /* dc.weaDat.weaBus.ceiHei variable */) = fmax(0.0,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[396]] /* dc.weaDat.datRea.y[16] variable */));
  threadData->lastEquationSolved = 2236;
}

/*
equation index: 2237
type: SIMPLE_ASSIGN
dc.weaDat.datRea.y[17] = Modelica.Blocks.Tables.Internal.getTable1DValue(dc.weaDat.datRea.tableID, 17, dc.weaDat.conTim.calTim)
*/
void s000_baseline_eqFunction_2237(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2237};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[397]] /* dc.weaDat.datRea.y[17] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[2]), ((modelica_integer) 17), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[378]] /* dc.weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 2237;
}

/*
equation index: 2238
type: SIMPLE_ASSIGN
dc.weaDat.datRea.y[18] = Modelica.Blocks.Tables.Internal.getTable1DValue(dc.weaDat.datRea.tableID, 18, dc.weaDat.conTim.calTim)
*/
void s000_baseline_eqFunction_2238(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2238};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[398]] /* dc.weaDat.datRea.y[18] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[2]), ((modelica_integer) 18), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[378]] /* dc.weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 2238;
}

/*
equation index: 2239
type: SIMPLE_ASSIGN
dc.weaDat.datRea.y[19] = Modelica.Blocks.Tables.Internal.getTable1DValue(dc.weaDat.datRea.tableID, 19, dc.weaDat.conTim.calTim)
*/
void s000_baseline_eqFunction_2239(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2239};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[399]] /* dc.weaDat.datRea.y[19] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[2]), ((modelica_integer) 19), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[378]] /* dc.weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 2239;
}

/*
equation index: 2240
type: SIMPLE_ASSIGN
dc.weaDat.datRea.y[20] = Modelica.Blocks.Tables.Internal.getTable1DValue(dc.weaDat.datRea.tableID, 20, dc.weaDat.conTim.calTim)
*/
void s000_baseline_eqFunction_2240(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2240};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[400]] /* dc.weaDat.datRea.y[20] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[2]), ((modelica_integer) 20), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[378]] /* dc.weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 2240;
}

/*
equation index: 2241
type: SIMPLE_ASSIGN
dc.weaDat.datRea.y[21] = Modelica.Blocks.Tables.Internal.getTable1DValue(dc.weaDat.datRea.tableID, 21, dc.weaDat.conTim.calTim)
*/
void s000_baseline_eqFunction_2241(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2241};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[401]] /* dc.weaDat.datRea.y[21] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[2]), ((modelica_integer) 21), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[378]] /* dc.weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 2241;
}

/*
equation index: 2242
type: SIMPLE_ASSIGN
dc.weaDat.datRea.y[22] = Modelica.Blocks.Tables.Internal.getTable1DValue(dc.weaDat.datRea.tableID, 22, dc.weaDat.conTim.calTim)
*/
void s000_baseline_eqFunction_2242(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2242};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[402]] /* dc.weaDat.datRea.y[22] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[2]), ((modelica_integer) 22), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[378]] /* dc.weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 2242;
}

/*
equation index: 2243
type: SIMPLE_ASSIGN
dc.weaDat.datRea.y[23] = Modelica.Blocks.Tables.Internal.getTable1DValue(dc.weaDat.datRea.tableID, 23, dc.weaDat.conTim.calTim)
*/
void s000_baseline_eqFunction_2243(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2243};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[403]] /* dc.weaDat.datRea.y[23] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[2]), ((modelica_integer) 23), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[378]] /* dc.weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 2243;
}

/*
equation index: 2244
type: SIMPLE_ASSIGN
dc.weaDat.datRea.y[24] = Modelica.Blocks.Tables.Internal.getTable1DValue(dc.weaDat.datRea.tableID, 24, dc.weaDat.conTim.calTim)
*/
void s000_baseline_eqFunction_2244(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2244};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[404]] /* dc.weaDat.datRea.y[24] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[2]), ((modelica_integer) 24), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[378]] /* dc.weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 2244;
}

/*
equation index: 2245
type: SIMPLE_ASSIGN
dc.weaDat.datRea.y[25] = Modelica.Blocks.Tables.Internal.getTable1DValue(dc.weaDat.datRea.tableID, 25, dc.weaDat.conTim.calTim)
*/
void s000_baseline_eqFunction_2245(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2245};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[405]] /* dc.weaDat.datRea.y[25] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[2]), ((modelica_integer) 25), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[378]] /* dc.weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 2245;
}

/*
equation index: 2246
type: SIMPLE_ASSIGN
dc.weaDat.datRea.y[26] = Modelica.Blocks.Tables.Internal.getTable1DValue(dc.weaDat.datRea.tableID, 26, dc.weaDat.conTim.calTim)
*/
void s000_baseline_eqFunction_2246(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2246};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[406]] /* dc.weaDat.datRea.y[26] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[2]), ((modelica_integer) 26), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[378]] /* dc.weaDat.conTim.calTim variable */));
  threadData->lastEquationSolved = 2246;
}

/*
equation index: 2247
type: SIMPLE_ASSIGN
dc.weaDat.weaBus.HHorIR = max(0.0, dc.weaDat.datRea.y[26])
*/
void s000_baseline_eqFunction_2247(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2247};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[424]] /* dc.weaDat.weaBus.HHorIR variable */) = fmax(0.0,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[406]] /* dc.weaDat.datRea.y[26] variable */));
  threadData->lastEquationSolved = 2247;
}

/*
equation index: 2248
type: WHEN

when {$whenCondition1} then
  dc.weaDat.conTimMin.tNext = if dc.weaDat.conTimMin.canRepeatWeatherFile then dc.weaDat.conTimMin.lenWea * (1.0 + (*Real*)(integer(dc.weaDat.add30Min.y / dc.weaDat.conTimMin.lenWea))) else time;
end when;
*/
void s000_baseline_eqFunction_2248(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2248};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[573]] /* dc.weaDat.conTimMin.tNext DISCRETE */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[344]] /* dc.weaDat.conTimMin.canRepeatWeatherFile PARAM */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1504]] /* dc.weaDat.conTimMin.lenWea PARAM */)) * (1.0 + ((modelica_real)((modelica_integer)floor(DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[376]] /* dc.weaDat.add30Min.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1504]] /* dc.weaDat.conTimMin.lenWea PARAM */),"dc.weaDat.conTimMin.lenWea",equationIndexes))))):data->localData[0]->timeValue);
  }
  threadData->lastEquationSolved = 2248;
}

/*
equation index: 2249
type: SIMPLE_ASSIGN
dc.weaDat.conTimMin.calTim = if dc.weaDat.conTimMin.canRepeatWeatherFile then dc.weaDat.add30Min.y - dc.weaDat.conTimMin.tNext + dc.weaDat.conTimMin.lenWea else dc.weaDat.add30Min.y
*/
void s000_baseline_eqFunction_2249(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2249};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[379]] /* dc.weaDat.conTimMin.calTim variable */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[344]] /* dc.weaDat.conTimMin.canRepeatWeatherFile PARAM */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[376]] /* dc.weaDat.add30Min.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[573]] /* dc.weaDat.conTimMin.tNext DISCRETE */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1504]] /* dc.weaDat.conTimMin.lenWea PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[376]] /* dc.weaDat.add30Min.y variable */));
  threadData->lastEquationSolved = 2249;
}

/*
equation index: 2250
type: SIMPLE_ASSIGN
dc.weaDat.datRea30Min.y[1] = Modelica.Blocks.Tables.Internal.getTable1DValue(dc.weaDat.datRea30Min.tableID, 1, dc.weaDat.conTimMin.calTim)
*/
void s000_baseline_eqFunction_2250(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2250};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[407]] /* dc.weaDat.datRea30Min.y[1] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[3]), ((modelica_integer) 1), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[379]] /* dc.weaDat.conTimMin.calTim variable */));
  threadData->lastEquationSolved = 2250;
}

/*
equation index: 2251
type: SIMPLE_ASSIGN
dc.weaDat.weaBus.HGloHor = max(0.0, dc.weaDat.datRea30Min.y[1])
*/
void s000_baseline_eqFunction_2251(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2251};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[423]] /* dc.weaDat.weaBus.HGloHor variable */) = fmax(0.0,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[407]] /* dc.weaDat.datRea30Min.y[1] variable */));
  threadData->lastEquationSolved = 2251;
}

/*
equation index: 2252
type: SIMPLE_ASSIGN
dc.weaDat.datRea30Min.y[2] = Modelica.Blocks.Tables.Internal.getTable1DValue(dc.weaDat.datRea30Min.tableID, 2, dc.weaDat.conTimMin.calTim)
*/
void s000_baseline_eqFunction_2252(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2252};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[408]] /* dc.weaDat.datRea30Min.y[2] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[3]), ((modelica_integer) 2), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[379]] /* dc.weaDat.conTimMin.calTim variable */));
  threadData->lastEquationSolved = 2252;
}

/*
equation index: 2253
type: SIMPLE_ASSIGN
dc.weaDat.weaBus.HDirNor = max(0.0, dc.weaDat.datRea30Min.y[2])
*/
void s000_baseline_eqFunction_2253(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2253};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[422]] /* dc.weaDat.weaBus.HDirNor variable */) = fmax(0.0,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[408]] /* dc.weaDat.datRea30Min.y[2] variable */));
  threadData->lastEquationSolved = 2253;
}

/*
equation index: 2254
type: SIMPLE_ASSIGN
dc.weaDat.datRea30Min.y[3] = Modelica.Blocks.Tables.Internal.getTable1DValue(dc.weaDat.datRea30Min.tableID, 3, dc.weaDat.conTimMin.calTim)
*/
void s000_baseline_eqFunction_2254(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2254};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[409]] /* dc.weaDat.datRea30Min.y[3] variable */) = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, (data->simulationInfo->extObjs[3]), ((modelica_integer) 3), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[379]] /* dc.weaDat.conTimMin.calTim variable */));
  threadData->lastEquationSolved = 2254;
}

/*
equation index: 2255
type: SIMPLE_ASSIGN
dc.weaDat.weaBus.HDifHor = max(0.0, dc.weaDat.datRea30Min.y[3])
*/
void s000_baseline_eqFunction_2255(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2255};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[421]] /* dc.weaDat.weaBus.HDifHor variable */) = fmax(0.0,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[409]] /* dc.weaDat.datRea30Min.y[3] variable */));
  threadData->lastEquationSolved = 2255;
}

/*
equation index: 2264
type: ALGORITHM

  assert(dc.weaDat.conTim.canRepeatWeatherFile or noEvent(time >= dc.weaDat.conTim.weaDatStaTim), "In Scenario_s000_baseline.dc.weaDat.conTim: Insufficient weather data provided for the desired simulation period.
    The simulation time " + String(time, 6, 0, true) + " is less than the start time " + String(dc.weaDat.conTim.weaDatStaTim, 6, 0, true) + " of the weather data file.");
*/
void s000_baseline_eqFunction_2264(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2264};
  modelica_boolean tmp201;
  static const MMC_DEFSTRINGLIT(tmp202,139,"In Scenario_s000_baseline.dc.weaDat.conTim: Insufficient weather data provided for the desired simulation period.\r\n    The simulation time ");
  modelica_string tmp203;
  modelica_metatype tmpMeta204;
  static const MMC_DEFSTRINGLIT(tmp205,29," is less than the start time ");
  modelica_metatype tmpMeta206;
  modelica_string tmp207;
  modelica_metatype tmpMeta208;
  static const MMC_DEFSTRINGLIT(tmp209,26," of the weather data file.");
  modelica_metatype tmpMeta210;
  static int tmp211 = 0;
  {
    tmp201 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1503]] /* dc.weaDat.conTim.weaDatStaTim PARAM */));
    if(!((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[343]] /* dc.weaDat.conTim.canRepeatWeatherFile PARAM */) || tmp201))
    {
      tmp203 = modelica_real_to_modelica_string(data->localData[0]->timeValue, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta204 = stringAppend(MMC_REFSTRINGLIT(tmp202),tmp203);
      tmpMeta206 = stringAppend(tmpMeta204,MMC_REFSTRINGLIT(tmp205));
      tmp207 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1503]] /* dc.weaDat.conTim.weaDatStaTim PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta208 = stringAppend(tmpMeta206,tmp207);
      tmpMeta210 = stringAppend(tmpMeta208,MMC_REFSTRINGLIT(tmp209));
      {
        const char* assert_cond = "(dc.weaDat.conTim.canRepeatWeatherFile or noEvent(time >= dc.weaDat.conTim.weaDatStaTim))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/ConvertTime.mo",46,3,50,26,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta210));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/ConvertTime.mo",46,3,50,26,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta210));
        }
      }
    }
  }
  threadData->lastEquationSolved = 2264;
}

/*
equation index: 2263
type: ALGORITHM

  assert(dc.weaDat.conTim.canRepeatWeatherFile or noEvent(time - dc.weaDat.conTim.weaDatEndTim < 1800.0), "In Scenario_s000_baseline.dc.weaDat.conTim: Insufficient weather data provided for the desired simulation period.
    The simulation time " + String(time, 6, 0, true) + " exceeds the end time " + String(dc.weaDat.conTim.weaDatEndTim, 6, 0, true) + " of the weather data file.");
*/
void s000_baseline_eqFunction_2263(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2263};
  modelica_boolean tmp212;
  static const MMC_DEFSTRINGLIT(tmp213,139,"In Scenario_s000_baseline.dc.weaDat.conTim: Insufficient weather data provided for the desired simulation period.\r\n    The simulation time ");
  modelica_string tmp214;
  modelica_metatype tmpMeta215;
  static const MMC_DEFSTRINGLIT(tmp216,22," exceeds the end time ");
  modelica_metatype tmpMeta217;
  modelica_string tmp218;
  modelica_metatype tmpMeta219;
  static const MMC_DEFSTRINGLIT(tmp220,26," of the weather data file.");
  modelica_metatype tmpMeta221;
  static int tmp222 = 0;
  {
    tmp212 = Less(data->localData[0]->timeValue - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1502]] /* dc.weaDat.conTim.weaDatEndTim PARAM */),1800.0);
    if(!((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[343]] /* dc.weaDat.conTim.canRepeatWeatherFile PARAM */) || tmp212))
    {
      tmp214 = modelica_real_to_modelica_string(data->localData[0]->timeValue, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta215 = stringAppend(MMC_REFSTRINGLIT(tmp213),tmp214);
      tmpMeta217 = stringAppend(tmpMeta215,MMC_REFSTRINGLIT(tmp216));
      tmp218 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1502]] /* dc.weaDat.conTim.weaDatEndTim PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta219 = stringAppend(tmpMeta217,tmp218);
      tmpMeta221 = stringAppend(tmpMeta219,MMC_REFSTRINGLIT(tmp220));
      {
        const char* assert_cond = "(dc.weaDat.conTim.canRepeatWeatherFile or noEvent(time - dc.weaDat.conTim.weaDatEndTim < 1800.0))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/ConvertTime.mo",40,3,44,26,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta221));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/ConvertTime.mo",40,3,44,26,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta221));
        }
      }
    }
  }
  threadData->lastEquationSolved = 2263;
}

/*
equation index: 2262
type: ALGORITHM

  assert(dc.weaDat.conTimMin.canRepeatWeatherFile or noEvent(time >= dc.weaDat.conTimMin.weaDatStaTim), "In Scenario_s000_baseline.dc.weaDat.conTimMin: Insufficient weather data provided for the desired simulation period.
    The simulation time " + String(time, 6, 0, true) + " is less than the start time " + String(dc.weaDat.conTimMin.weaDatStaTim, 6, 0, true) + " of the weather data file.");
*/
void s000_baseline_eqFunction_2262(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2262};
  modelica_boolean tmp223;
  static const MMC_DEFSTRINGLIT(tmp224,142,"In Scenario_s000_baseline.dc.weaDat.conTimMin: Insufficient weather data provided for the desired simulation period.\r\n    The simulation time ");
  modelica_string tmp225;
  modelica_metatype tmpMeta226;
  static const MMC_DEFSTRINGLIT(tmp227,29," is less than the start time ");
  modelica_metatype tmpMeta228;
  modelica_string tmp229;
  modelica_metatype tmpMeta230;
  static const MMC_DEFSTRINGLIT(tmp231,26," of the weather data file.");
  modelica_metatype tmpMeta232;
  static int tmp233 = 0;
  {
    tmp223 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1506]] /* dc.weaDat.conTimMin.weaDatStaTim PARAM */));
    if(!((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[344]] /* dc.weaDat.conTimMin.canRepeatWeatherFile PARAM */) || tmp223))
    {
      tmp225 = modelica_real_to_modelica_string(data->localData[0]->timeValue, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta226 = stringAppend(MMC_REFSTRINGLIT(tmp224),tmp225);
      tmpMeta228 = stringAppend(tmpMeta226,MMC_REFSTRINGLIT(tmp227));
      tmp229 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1506]] /* dc.weaDat.conTimMin.weaDatStaTim PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta230 = stringAppend(tmpMeta228,tmp229);
      tmpMeta232 = stringAppend(tmpMeta230,MMC_REFSTRINGLIT(tmp231));
      {
        const char* assert_cond = "(dc.weaDat.conTimMin.canRepeatWeatherFile or noEvent(time >= dc.weaDat.conTimMin.weaDatStaTim))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/ConvertTime.mo",46,3,50,26,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta232));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/ConvertTime.mo",46,3,50,26,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta232));
        }
      }
    }
  }
  threadData->lastEquationSolved = 2262;
}

/*
equation index: 2261
type: ALGORITHM

  assert(dc.weaDat.conTimMin.canRepeatWeatherFile or noEvent(time - dc.weaDat.conTimMin.weaDatEndTim < 1800.0), "In Scenario_s000_baseline.dc.weaDat.conTimMin: Insufficient weather data provided for the desired simulation period.
    The simulation time " + String(time, 6, 0, true) + " exceeds the end time " + String(dc.weaDat.conTimMin.weaDatEndTim, 6, 0, true) + " of the weather data file.");
*/
void s000_baseline_eqFunction_2261(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2261};
  modelica_boolean tmp234;
  static const MMC_DEFSTRINGLIT(tmp235,142,"In Scenario_s000_baseline.dc.weaDat.conTimMin: Insufficient weather data provided for the desired simulation period.\r\n    The simulation time ");
  modelica_string tmp236;
  modelica_metatype tmpMeta237;
  static const MMC_DEFSTRINGLIT(tmp238,22," exceeds the end time ");
  modelica_metatype tmpMeta239;
  modelica_string tmp240;
  modelica_metatype tmpMeta241;
  static const MMC_DEFSTRINGLIT(tmp242,26," of the weather data file.");
  modelica_metatype tmpMeta243;
  static int tmp244 = 0;
  {
    tmp234 = Less(data->localData[0]->timeValue - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1505]] /* dc.weaDat.conTimMin.weaDatEndTim PARAM */),1800.0);
    if(!((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[344]] /* dc.weaDat.conTimMin.canRepeatWeatherFile PARAM */) || tmp234))
    {
      tmp236 = modelica_real_to_modelica_string(data->localData[0]->timeValue, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta237 = stringAppend(MMC_REFSTRINGLIT(tmp235),tmp236);
      tmpMeta239 = stringAppend(tmpMeta237,MMC_REFSTRINGLIT(tmp238));
      tmp240 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1505]] /* dc.weaDat.conTimMin.weaDatEndTim PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta241 = stringAppend(tmpMeta239,tmp240);
      tmpMeta243 = stringAppend(tmpMeta241,MMC_REFSTRINGLIT(tmp242));
      {
        const char* assert_cond = "(dc.weaDat.conTimMin.canRepeatWeatherFile or noEvent(time - dc.weaDat.conTimMin.weaDatEndTim < 1800.0))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/ConvertTime.mo",40,3,44,26,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta243));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/ConvertTime.mo",40,3,44,26,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta243));
        }
      }
    }
  }
  threadData->lastEquationSolved = 2261;
}

/*
equation index: 2260
type: ALGORITHM

  assert(noEvent(dc.weaDat.pAtmSel.p > 3100.0) and noEvent(dc.weaDat.pAtmSel.p < 1.2e5), "In Scenario_s000_baseline.dc.weaDat.chePre: Weather data atmospheric pressure out of bounds.
   PIn = " + String(dc.weaDat.pAtmSel.p, 6, 0, true));
*/
void s000_baseline_eqFunction_2260(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2260};
  modelica_boolean tmp245;
  modelica_boolean tmp246;
  static const MMC_DEFSTRINGLIT(tmp247,102,"In Scenario_s000_baseline.dc.weaDat.chePre: Weather data atmospheric pressure out of bounds.\n   PIn = ");
  modelica_string tmp248;
  modelica_metatype tmpMeta249;
  static int tmp250 = 0;
  {
    tmp245 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1523]] /* dc.weaDat.pAtmSel.p PARAM */),3100.0);
    tmp246 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1523]] /* dc.weaDat.pAtmSel.p PARAM */),1.2e5);
    if(!(tmp245 && tmp246))
    {
      tmp248 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1523]] /* dc.weaDat.pAtmSel.p PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta249 = stringAppend(MMC_REFSTRINGLIT(tmp247),tmp248);
      {
        const char* assert_cond = "(noEvent(dc.weaDat.pAtmSel.p > 3100.0) and noEvent(dc.weaDat.pAtmSel.p < 1.2e5))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckPressure.mo",17,3,18,88,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta249));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckPressure.mo",17,3,18,88,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta249));
        }
      }
    }
  }
  threadData->lastEquationSolved = 2260;
}

/*
equation index: 2259
type: ALGORITHM

  assert(abs(1.0 - dc.roo.irRadGai.fraConExt[1] - dc.roo.irRadGai.fraConExtWinOpa[1] - dc.roo.irRadGai.fraConExtWinGla[1] - dc.roo.irRadGai.fraConExtWinFra[1] - dc.roo.irRadGai.fraConPar_a[1] - dc.roo.irRadGai.fraConPar_b[1] - dc.roo.irRadGai.fraConBou[1] - (dc.roo.irRadGai.fraSurBou[1] + dc.roo.irRadGai.fraSurBou[2] + dc.roo.irRadGai.fraSurBou[3] + dc.roo.irRadGai.fraSurBou[4] + dc.roo.irRadGai.fraSurBou[5] + dc.roo.irRadGai.fraSurBou[6])) < 1e-5, "Programming error: Radiation balance is wrong. Check equations.");
*/
void s000_baseline_eqFunction_2259(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2259};
  modelica_boolean tmp251;
  static const MMC_DEFSTRINGLIT(tmp252,63,"Programming error: Radiation balance is wrong. Check equations.");
  static int tmp253 = 0;
  {
    tmp251 = Less(fabs(1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[302]] /* dc.roo.irRadGai.fraConExt[1] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[305]] /* dc.roo.irRadGai.fraConExtWinOpa[1] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[304]] /* dc.roo.irRadGai.fraConExtWinGla[1] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[303]] /* dc.roo.irRadGai.fraConExtWinFra[1] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[306]] /* dc.roo.irRadGai.fraConPar_a[1] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[307]] /* dc.roo.irRadGai.fraConPar_b[1] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[301]] /* dc.roo.irRadGai.fraConBou[1] variable */) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* dc.roo.irRadGai.fraSurBou[1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[309]] /* dc.roo.irRadGai.fraSurBou[2] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[310]] /* dc.roo.irRadGai.fraSurBou[3] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[311]] /* dc.roo.irRadGai.fraSurBou[4] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* dc.roo.irRadGai.fraSurBou[5] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[313]] /* dc.roo.irRadGai.fraSurBou[6] variable */))),1e-5);
    if(!tmp251)
    {
      {
        const char* assert_cond = "(abs(1.0 - dc.roo.irRadGai.fraConExt[1] - dc.roo.irRadGai.fraConExtWinOpa[1] - dc.roo.irRadGai.fraConExtWinGla[1] - dc.roo.irRadGai.fraConExtWinFra[1] - dc.roo.irRadGai.fraConPar_a[1] - dc.roo.irRadGai.fraConPar_b[1] - dc.roo.irRadGai.fraConBou[1] - (dc.roo.irRadGai.fraSurBou[1] + dc.roo.irRadGai.fraSurBou[2] + dc.roo.irRadGai.fraSurBou[3] + dc.roo.irRadGai.fraSurBou[4] + dc.roo.irRadGai.fraSurBou[5] + dc.roo.irRadGai.fraSurBou[6])) < 1e-5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationGainDistribution.mo",122,3,125,78,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp252)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationGainDistribution.mo",122,3,125,78,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp252)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 2259;
}

/*
equation index: 2258
type: ALGORITHM

  assert(noEvent(dc.weaDat.weaBus.TBlaSky > dc.weaDat.cheTemBlaSky.TMin) and noEvent(dc.weaDat.weaBus.TBlaSky < dc.weaDat.cheTemBlaSky.TMax), "In Scenario_s000_baseline.dc.weaDat.cheTemBlaSky: Weather data black-body sky temperature out of bounds.
   TIn = " + String(dc.weaDat.weaBus.TBlaSky, 6, 0, true));
*/
void s000_baseline_eqFunction_2258(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2258};
  modelica_boolean tmp254;
  modelica_boolean tmp255;
  static const MMC_DEFSTRINGLIT(tmp256,114,"In Scenario_s000_baseline.dc.weaDat.cheTemBlaSky: Weather data black-body sky temperature out of bounds.\n   TIn = ");
  modelica_string tmp257;
  modelica_metatype tmpMeta258;
  static int tmp259 = 0;
  {
    tmp254 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[425]] /* dc.weaDat.weaBus.TBlaSky variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1493]] /* dc.weaDat.cheTemBlaSky.TMin PARAM */));
    tmp255 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[425]] /* dc.weaDat.weaBus.TBlaSky variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1492]] /* dc.weaDat.cheTemBlaSky.TMax PARAM */));
    if(!(tmp254 && tmp255))
    {
      tmp257 = modelica_real_to_modelica_string((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[425]] /* dc.weaDat.weaBus.TBlaSky variable */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta258 = stringAppend(MMC_REFSTRINGLIT(tmp256),tmp257);
      {
        const char* assert_cond = "(noEvent(dc.weaDat.weaBus.TBlaSky > dc.weaDat.cheTemBlaSky.TMin) and noEvent(dc.weaDat.weaBus.TBlaSky < dc.weaDat.cheTemBlaSky.TMax))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckBlackBodySkyTemperature.mo",25,3,27,18,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta258));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckBlackBodySkyTemperature.mo",25,3,27,18,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta258));
        }
      }
    }
  }
  threadData->lastEquationSolved = 2258;
}

/*
equation index: 2257
type: ALGORITHM

  assert(noEvent(dc.weaDat.weaBus.TDewPoi > dc.weaDat.cheTemDewPoi.TMin) and noEvent(dc.weaDat.weaBus.TDewPoi < dc.weaDat.cheTemDewPoi.TMax), "In Scenario_s000_baseline.dc.weaDat.cheTemDewPoi: Weather data dew point temperature out of bounds.
   TIn = " + String(dc.weaDat.weaBus.TDewPoi, 6, 0, true));
*/
void s000_baseline_eqFunction_2257(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2257};
  modelica_boolean tmp260;
  modelica_boolean tmp261;
  static const MMC_DEFSTRINGLIT(tmp262,109,"In Scenario_s000_baseline.dc.weaDat.cheTemDewPoi: Weather data dew point temperature out of bounds.\n   TIn = ");
  modelica_string tmp263;
  modelica_metatype tmpMeta264;
  static int tmp265 = 0;
  {
    tmp260 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[426]] /* dc.weaDat.weaBus.TDewPoi variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1495]] /* dc.weaDat.cheTemDewPoi.TMin PARAM */));
    tmp261 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[426]] /* dc.weaDat.weaBus.TDewPoi variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1494]] /* dc.weaDat.cheTemDewPoi.TMax PARAM */));
    if(!(tmp260 && tmp261))
    {
      tmp263 = modelica_real_to_modelica_string((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[426]] /* dc.weaDat.weaBus.TDewPoi variable */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta264 = stringAppend(MMC_REFSTRINGLIT(tmp262),tmp263);
      {
        const char* assert_cond = "(noEvent(dc.weaDat.weaBus.TDewPoi > dc.weaDat.cheTemDewPoi.TMin) and noEvent(dc.weaDat.weaBus.TDewPoi < dc.weaDat.cheTemDewPoi.TMax))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckDewPointTemperature.mo",23,3,25,10,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta264));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckDewPointTemperature.mo",23,3,25,10,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta264));
        }
      }
    }
  }
  threadData->lastEquationSolved = 2257;
}

/*
equation index: 2256
type: ALGORITHM

  assert(noEvent(dc.weaDat.weaBus.TDryBul > dc.weaDat.cheTemDryBul.TMin) and noEvent(dc.weaDat.weaBus.TDryBul < dc.weaDat.cheTemDryBul.TMax), "In Scenario_s000_baseline.dc.weaDat.cheTemDryBul: Weather data dry bulb temperature out of bounds.
   TIn = " + String(dc.weaDat.weaBus.TDryBul, 6, 0, true));
*/
void s000_baseline_eqFunction_2256(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2256};
  modelica_boolean tmp266;
  modelica_boolean tmp267;
  static const MMC_DEFSTRINGLIT(tmp268,108,"In Scenario_s000_baseline.dc.weaDat.cheTemDryBul: Weather data dry bulb temperature out of bounds.\n   TIn = ");
  modelica_string tmp269;
  modelica_metatype tmpMeta270;
  static int tmp271 = 0;
  {
    tmp266 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[427]] /* dc.weaDat.weaBus.TDryBul variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1497]] /* dc.weaDat.cheTemDryBul.TMin PARAM */));
    tmp267 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[427]] /* dc.weaDat.weaBus.TDryBul variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1496]] /* dc.weaDat.cheTemDryBul.TMax PARAM */));
    if(!(tmp266 && tmp267))
    {
      tmp269 = modelica_real_to_modelica_string((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[427]] /* dc.weaDat.weaBus.TDryBul variable */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta270 = stringAppend(MMC_REFSTRINGLIT(tmp268),tmp269);
      {
        const char* assert_cond = "(noEvent(dc.weaDat.weaBus.TDryBul > dc.weaDat.cheTemDryBul.TMin) and noEvent(dc.weaDat.weaBus.TDryBul < dc.weaDat.cheTemDryBul.TMax))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckDryBulbTemperature.mo",23,3,25,10,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta270));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckDryBulbTemperature.mo",23,3,25,10,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta270));
        }
      }
    }
  }
  threadData->lastEquationSolved = 2256;
}

OMC_DISABLE_OPT
int s000_baseline_functionDAE(DATA *data, threadData_t *threadData)
{
  int equationIndexes[1] = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  s000_baseline_functionLocalKnownVars(data, threadData);
  static void (*const eqFunctions[398])(DATA*, threadData_t*) = {
    s000_baseline_eqFunction_1828,
    s000_baseline_eqFunction_1829,
    s000_baseline_eqFunction_1830,
    s000_baseline_eqFunction_1831,
    s000_baseline_eqFunction_1832,
    s000_baseline_eqFunction_1833,
    s000_baseline_eqFunction_1834,
    s000_baseline_eqFunction_1835,
    s000_baseline_eqFunction_1836,
    s000_baseline_eqFunction_1837,
    s000_baseline_eqFunction_1838,
    s000_baseline_eqFunction_1839,
    s000_baseline_eqFunction_1840,
    s000_baseline_eqFunction_1841,
    s000_baseline_eqFunction_1842,
    s000_baseline_eqFunction_1843,
    s000_baseline_eqFunction_1844,
    s000_baseline_eqFunction_1845,
    s000_baseline_eqFunction_1846,
    s000_baseline_eqFunction_1847,
    s000_baseline_eqFunction_1848,
    s000_baseline_eqFunction_1849,
    s000_baseline_eqFunction_1850,
    s000_baseline_eqFunction_1851,
    s000_baseline_eqFunction_1852,
    s000_baseline_eqFunction_1853,
    s000_baseline_eqFunction_1854,
    s000_baseline_eqFunction_1855,
    s000_baseline_eqFunction_1856,
    s000_baseline_eqFunction_1857,
    s000_baseline_eqFunction_1858,
    s000_baseline_eqFunction_1859,
    s000_baseline_eqFunction_1860,
    s000_baseline_eqFunction_1861,
    s000_baseline_eqFunction_1862,
    s000_baseline_eqFunction_1863,
    s000_baseline_eqFunction_1864,
    s000_baseline_eqFunction_1865,
    s000_baseline_eqFunction_1866,
    s000_baseline_eqFunction_1867,
    s000_baseline_eqFunction_1868,
    s000_baseline_eqFunction_1869,
    s000_baseline_eqFunction_1870,
    s000_baseline_eqFunction_1871,
    s000_baseline_eqFunction_1872,
    s000_baseline_eqFunction_1873,
    s000_baseline_eqFunction_1874,
    s000_baseline_eqFunction_1875,
    s000_baseline_eqFunction_1876,
    s000_baseline_eqFunction_1877,
    s000_baseline_eqFunction_1878,
    s000_baseline_eqFunction_1879,
    s000_baseline_eqFunction_1880,
    s000_baseline_eqFunction_1881,
    s000_baseline_eqFunction_1882,
    s000_baseline_eqFunction_1883,
    s000_baseline_eqFunction_1884,
    s000_baseline_eqFunction_1885,
    s000_baseline_eqFunction_1886,
    s000_baseline_eqFunction_1887,
    s000_baseline_eqFunction_1888,
    s000_baseline_eqFunction_1889,
    s000_baseline_eqFunction_1890,
    s000_baseline_eqFunction_1891,
    s000_baseline_eqFunction_1892,
    s000_baseline_eqFunction_1893,
    s000_baseline_eqFunction_1894,
    s000_baseline_eqFunction_1895,
    s000_baseline_eqFunction_1896,
    s000_baseline_eqFunction_1897,
    s000_baseline_eqFunction_1898,
    s000_baseline_eqFunction_1899,
    s000_baseline_eqFunction_1900,
    s000_baseline_eqFunction_1901,
    s000_baseline_eqFunction_1902,
    s000_baseline_eqFunction_1903,
    s000_baseline_eqFunction_1904,
    s000_baseline_eqFunction_1905,
    s000_baseline_eqFunction_1906,
    s000_baseline_eqFunction_1907,
    s000_baseline_eqFunction_1908,
    s000_baseline_eqFunction_1909,
    s000_baseline_eqFunction_1910,
    s000_baseline_eqFunction_1911,
    s000_baseline_eqFunction_1912,
    s000_baseline_eqFunction_1913,
    s000_baseline_eqFunction_1914,
    s000_baseline_eqFunction_1915,
    s000_baseline_eqFunction_1916,
    s000_baseline_eqFunction_1917,
    s000_baseline_eqFunction_1918,
    s000_baseline_eqFunction_1919,
    s000_baseline_eqFunction_1920,
    s000_baseline_eqFunction_1921,
    s000_baseline_eqFunction_1922,
    s000_baseline_eqFunction_1923,
    s000_baseline_eqFunction_1924,
    s000_baseline_eqFunction_1925,
    s000_baseline_eqFunction_1926,
    s000_baseline_eqFunction_1927,
    s000_baseline_eqFunction_1928,
    s000_baseline_eqFunction_1929,
    s000_baseline_eqFunction_1930,
    s000_baseline_eqFunction_1931,
    s000_baseline_eqFunction_1932,
    s000_baseline_eqFunction_1933,
    s000_baseline_eqFunction_1934,
    s000_baseline_eqFunction_1935,
    s000_baseline_eqFunction_1936,
    s000_baseline_eqFunction_1937,
    s000_baseline_eqFunction_1938,
    s000_baseline_eqFunction_1939,
    s000_baseline_eqFunction_1940,
    s000_baseline_eqFunction_1941,
    s000_baseline_eqFunction_1942,
    s000_baseline_eqFunction_1943,
    s000_baseline_eqFunction_1944,
    s000_baseline_eqFunction_1945,
    s000_baseline_eqFunction_1946,
    s000_baseline_eqFunction_1947,
    s000_baseline_eqFunction_1948,
    s000_baseline_eqFunction_1949,
    s000_baseline_eqFunction_1950,
    s000_baseline_eqFunction_1951,
    s000_baseline_eqFunction_1952,
    s000_baseline_eqFunction_1953,
    s000_baseline_eqFunction_1954,
    s000_baseline_eqFunction_1955,
    s000_baseline_eqFunction_1956,
    s000_baseline_eqFunction_1957,
    s000_baseline_eqFunction_1958,
    s000_baseline_eqFunction_1959,
    s000_baseline_eqFunction_1960,
    s000_baseline_eqFunction_1961,
    s000_baseline_eqFunction_1962,
    s000_baseline_eqFunction_1963,
    s000_baseline_eqFunction_1964,
    s000_baseline_eqFunction_1965,
    s000_baseline_eqFunction_1966,
    s000_baseline_eqFunction_1967,
    s000_baseline_eqFunction_1968,
    s000_baseline_eqFunction_1969,
    s000_baseline_eqFunction_1970,
    s000_baseline_eqFunction_1971,
    s000_baseline_eqFunction_1996,
    s000_baseline_eqFunction_1997,
    s000_baseline_eqFunction_1998,
    s000_baseline_eqFunction_1999,
    s000_baseline_eqFunction_2000,
    s000_baseline_eqFunction_2001,
    s000_baseline_eqFunction_2002,
    s000_baseline_eqFunction_2003,
    s000_baseline_eqFunction_2004,
    s000_baseline_eqFunction_2005,
    s000_baseline_eqFunction_2006,
    s000_baseline_eqFunction_2007,
    s000_baseline_eqFunction_2008,
    s000_baseline_eqFunction_2009,
    s000_baseline_eqFunction_2010,
    s000_baseline_eqFunction_2011,
    s000_baseline_eqFunction_2012,
    s000_baseline_eqFunction_2013,
    s000_baseline_eqFunction_2014,
    s000_baseline_eqFunction_2015,
    s000_baseline_eqFunction_2016,
    s000_baseline_eqFunction_2017,
    s000_baseline_eqFunction_2018,
    s000_baseline_eqFunction_2019,
    s000_baseline_eqFunction_2020,
    s000_baseline_eqFunction_2021,
    s000_baseline_eqFunction_2022,
    s000_baseline_eqFunction_2023,
    s000_baseline_eqFunction_2024,
    s000_baseline_eqFunction_2025,
    s000_baseline_eqFunction_2026,
    s000_baseline_eqFunction_2027,
    s000_baseline_eqFunction_2028,
    s000_baseline_eqFunction_2029,
    s000_baseline_eqFunction_2030,
    s000_baseline_eqFunction_2031,
    s000_baseline_eqFunction_2032,
    s000_baseline_eqFunction_2033,
    s000_baseline_eqFunction_2034,
    s000_baseline_eqFunction_2035,
    s000_baseline_eqFunction_2036,
    s000_baseline_eqFunction_2037,
    s000_baseline_eqFunction_2038,
    s000_baseline_eqFunction_2039,
    s000_baseline_eqFunction_2040,
    s000_baseline_eqFunction_2041,
    s000_baseline_eqFunction_2042,
    s000_baseline_eqFunction_2043,
    s000_baseline_eqFunction_2044,
    s000_baseline_eqFunction_2045,
    s000_baseline_eqFunction_2046,
    s000_baseline_eqFunction_2047,
    s000_baseline_eqFunction_2048,
    s000_baseline_eqFunction_2049,
    s000_baseline_eqFunction_2051,
    s000_baseline_eqFunction_2052,
    s000_baseline_eqFunction_2053,
    s000_baseline_eqFunction_2054,
    s000_baseline_eqFunction_2055,
    s000_baseline_eqFunction_2057,
    s000_baseline_eqFunction_2058,
    s000_baseline_eqFunction_2059,
    s000_baseline_eqFunction_2060,
    s000_baseline_eqFunction_2061,
    s000_baseline_eqFunction_2063,
    s000_baseline_eqFunction_2064,
    s000_baseline_eqFunction_2065,
    s000_baseline_eqFunction_2066,
    s000_baseline_eqFunction_2067,
    s000_baseline_eqFunction_2069,
    s000_baseline_eqFunction_2070,
    s000_baseline_eqFunction_2071,
    s000_baseline_eqFunction_2072,
    s000_baseline_eqFunction_2073,
    s000_baseline_eqFunction_2075,
    s000_baseline_eqFunction_2076,
    s000_baseline_eqFunction_2077,
    s000_baseline_eqFunction_2078,
    s000_baseline_eqFunction_2079,
    s000_baseline_eqFunction_2081,
    s000_baseline_eqFunction_2082,
    s000_baseline_eqFunction_2083,
    s000_baseline_eqFunction_2084,
    s000_baseline_eqFunction_2085,
    s000_baseline_eqFunction_2086,
    s000_baseline_eqFunction_2087,
    s000_baseline_eqFunction_2088,
    s000_baseline_eqFunction_2089,
    s000_baseline_eqFunction_2090,
    s000_baseline_eqFunction_2091,
    s000_baseline_eqFunction_2092,
    s000_baseline_eqFunction_2093,
    s000_baseline_eqFunction_2094,
    s000_baseline_eqFunction_2095,
    s000_baseline_eqFunction_2096,
    s000_baseline_eqFunction_2097,
    s000_baseline_eqFunction_2098,
    s000_baseline_eqFunction_2099,
    s000_baseline_eqFunction_2100,
    s000_baseline_eqFunction_2101,
    s000_baseline_eqFunction_2102,
    s000_baseline_eqFunction_2103,
    s000_baseline_eqFunction_2104,
    s000_baseline_eqFunction_2105,
    s000_baseline_eqFunction_2106,
    s000_baseline_eqFunction_2107,
    s000_baseline_eqFunction_2108,
    s000_baseline_eqFunction_2109,
    s000_baseline_eqFunction_2110,
    s000_baseline_eqFunction_2111,
    s000_baseline_eqFunction_2112,
    s000_baseline_eqFunction_2113,
    s000_baseline_eqFunction_2114,
    s000_baseline_eqFunction_2115,
    s000_baseline_eqFunction_2116,
    s000_baseline_eqFunction_2117,
    s000_baseline_eqFunction_2118,
    s000_baseline_eqFunction_2119,
    s000_baseline_eqFunction_2120,
    s000_baseline_eqFunction_2121,
    s000_baseline_eqFunction_2122,
    s000_baseline_eqFunction_2123,
    s000_baseline_eqFunction_2124,
    s000_baseline_eqFunction_2125,
    s000_baseline_eqFunction_2126,
    s000_baseline_eqFunction_2127,
    s000_baseline_eqFunction_2128,
    s000_baseline_eqFunction_2129,
    s000_baseline_eqFunction_2130,
    s000_baseline_eqFunction_2131,
    s000_baseline_eqFunction_2132,
    s000_baseline_eqFunction_2133,
    s000_baseline_eqFunction_2134,
    s000_baseline_eqFunction_2135,
    s000_baseline_eqFunction_2136,
    s000_baseline_eqFunction_2137,
    s000_baseline_eqFunction_2138,
    s000_baseline_eqFunction_2139,
    s000_baseline_eqFunction_2140,
    s000_baseline_eqFunction_2141,
    s000_baseline_eqFunction_2142,
    s000_baseline_eqFunction_2143,
    s000_baseline_eqFunction_2144,
    s000_baseline_eqFunction_2145,
    s000_baseline_eqFunction_2146,
    s000_baseline_eqFunction_2147,
    s000_baseline_eqFunction_2148,
    s000_baseline_eqFunction_2149,
    s000_baseline_eqFunction_2150,
    s000_baseline_eqFunction_2151,
    s000_baseline_eqFunction_2152,
    s000_baseline_eqFunction_2153,
    s000_baseline_eqFunction_2154,
    s000_baseline_eqFunction_2155,
    s000_baseline_eqFunction_2156,
    s000_baseline_eqFunction_2157,
    s000_baseline_eqFunction_2158,
    s000_baseline_eqFunction_2159,
    s000_baseline_eqFunction_2160,
    s000_baseline_eqFunction_2161,
    s000_baseline_eqFunction_2162,
    s000_baseline_eqFunction_2163,
    s000_baseline_eqFunction_2164,
    s000_baseline_eqFunction_2165,
    s000_baseline_eqFunction_2166,
    s000_baseline_eqFunction_2167,
    s000_baseline_eqFunction_2168,
    s000_baseline_eqFunction_2169,
    s000_baseline_eqFunction_2170,
    s000_baseline_eqFunction_2171,
    s000_baseline_eqFunction_2172,
    s000_baseline_eqFunction_2173,
    s000_baseline_eqFunction_2174,
    s000_baseline_eqFunction_2175,
    s000_baseline_eqFunction_2176,
    s000_baseline_eqFunction_2177,
    s000_baseline_eqFunction_2178,
    s000_baseline_eqFunction_2179,
    s000_baseline_eqFunction_2180,
    s000_baseline_eqFunction_2181,
    s000_baseline_eqFunction_2182,
    s000_baseline_eqFunction_2183,
    s000_baseline_eqFunction_2184,
    s000_baseline_eqFunction_2185,
    s000_baseline_eqFunction_2186,
    s000_baseline_eqFunction_2187,
    s000_baseline_eqFunction_2188,
    s000_baseline_eqFunction_2189,
    s000_baseline_eqFunction_2190,
    s000_baseline_eqFunction_2191,
    s000_baseline_eqFunction_2192,
    s000_baseline_eqFunction_2193,
    s000_baseline_eqFunction_2194,
    s000_baseline_eqFunction_2195,
    s000_baseline_eqFunction_2196,
    s000_baseline_eqFunction_2197,
    s000_baseline_eqFunction_2198,
    s000_baseline_eqFunction_2199,
    s000_baseline_eqFunction_2209,
    s000_baseline_eqFunction_2210,
    s000_baseline_eqFunction_2211,
    s000_baseline_eqFunction_2212,
    s000_baseline_eqFunction_2213,
    s000_baseline_eqFunction_2214,
    s000_baseline_eqFunction_2215,
    s000_baseline_eqFunction_2216,
    s000_baseline_eqFunction_2217,
    s000_baseline_eqFunction_2218,
    s000_baseline_eqFunction_2219,
    s000_baseline_eqFunction_2220,
    s000_baseline_eqFunction_2221,
    s000_baseline_eqFunction_2222,
    s000_baseline_eqFunction_2223,
    s000_baseline_eqFunction_2224,
    s000_baseline_eqFunction_2225,
    s000_baseline_eqFunction_2226,
    s000_baseline_eqFunction_2227,
    s000_baseline_eqFunction_2228,
    s000_baseline_eqFunction_2229,
    s000_baseline_eqFunction_2230,
    s000_baseline_eqFunction_2231,
    s000_baseline_eqFunction_2232,
    s000_baseline_eqFunction_2233,
    s000_baseline_eqFunction_2234,
    s000_baseline_eqFunction_2235,
    s000_baseline_eqFunction_2236,
    s000_baseline_eqFunction_2237,
    s000_baseline_eqFunction_2238,
    s000_baseline_eqFunction_2239,
    s000_baseline_eqFunction_2240,
    s000_baseline_eqFunction_2241,
    s000_baseline_eqFunction_2242,
    s000_baseline_eqFunction_2243,
    s000_baseline_eqFunction_2244,
    s000_baseline_eqFunction_2245,
    s000_baseline_eqFunction_2246,
    s000_baseline_eqFunction_2247,
    s000_baseline_eqFunction_2248,
    s000_baseline_eqFunction_2249,
    s000_baseline_eqFunction_2250,
    s000_baseline_eqFunction_2251,
    s000_baseline_eqFunction_2252,
    s000_baseline_eqFunction_2253,
    s000_baseline_eqFunction_2254,
    s000_baseline_eqFunction_2255,
    s000_baseline_eqFunction_2264,
    s000_baseline_eqFunction_2263,
    s000_baseline_eqFunction_2262,
    s000_baseline_eqFunction_2261,
    s000_baseline_eqFunction_2260,
    s000_baseline_eqFunction_2259,
    s000_baseline_eqFunction_2258,
    s000_baseline_eqFunction_2257,
    s000_baseline_eqFunction_2256
  };
  
  for (int id = 0; id < 398; id++) {
    eqFunctions[id](data, threadData);
  }
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  return 0;
}


int s000_baseline_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  
  return 0;
}

/* forwarded equations */
extern void s000_baseline_eqFunction_1844(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_1845(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_1846(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_1938(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_1939(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_1940(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_1941(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_1942(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_1943(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_1944(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_1945(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_1946(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_1947(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_1948(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_1949(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_1950(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_1951(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_1952(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_1953(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_1954(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_1955(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_1956(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_1957(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_1960(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_1961(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_1962(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_1963(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_1964(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_1965(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_1966(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_1967(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_1968(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_1969(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_1971(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_1996(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_1997(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_1998(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_1999(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2000(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2001(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2002(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2004(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2005(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2006(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2010(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2011(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2012(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2014(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2015(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2016(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2017(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2018(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2019(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2020(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2021(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2022(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2023(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2024(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2025(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2026(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2027(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2028(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2029(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2030(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2031(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2032(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2033(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2034(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2035(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2036(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2037(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2038(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2047(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2048(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2049(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2051(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2052(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2055(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2057(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2058(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2061(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2063(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2064(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2067(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2069(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2070(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2073(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2075(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2076(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2079(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2081(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2082(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2085(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2086(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2087(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2088(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2089(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2090(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2091(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2092(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2093(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2094(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2095(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2096(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2097(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2098(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2099(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2101(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2102(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2103(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2104(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2105(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2106(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2107(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2108(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2109(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2110(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2111(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2112(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2113(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2114(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2115(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2116(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2117(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2118(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2119(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2120(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2121(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2122(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2123(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2124(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2125(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2126(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2127(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2128(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2129(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2130(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2132(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2134(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2135(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2136(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2137(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2139(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2140(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2141(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2142(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2144(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2145(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2146(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2147(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2149(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2150(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2151(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2152(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2154(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2155(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2156(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2157(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2159(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2160(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2161(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2162(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2163(DATA* data, threadData_t *threadData);

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[163])(DATA*, threadData_t*) = {
    s000_baseline_eqFunction_1844,
    s000_baseline_eqFunction_1845,
    s000_baseline_eqFunction_1846,
    s000_baseline_eqFunction_1938,
    s000_baseline_eqFunction_1939,
    s000_baseline_eqFunction_1940,
    s000_baseline_eqFunction_1941,
    s000_baseline_eqFunction_1942,
    s000_baseline_eqFunction_1943,
    s000_baseline_eqFunction_1944,
    s000_baseline_eqFunction_1945,
    s000_baseline_eqFunction_1946,
    s000_baseline_eqFunction_1947,
    s000_baseline_eqFunction_1948,
    s000_baseline_eqFunction_1949,
    s000_baseline_eqFunction_1950,
    s000_baseline_eqFunction_1951,
    s000_baseline_eqFunction_1952,
    s000_baseline_eqFunction_1953,
    s000_baseline_eqFunction_1954,
    s000_baseline_eqFunction_1955,
    s000_baseline_eqFunction_1956,
    s000_baseline_eqFunction_1957,
    s000_baseline_eqFunction_1960,
    s000_baseline_eqFunction_1961,
    s000_baseline_eqFunction_1962,
    s000_baseline_eqFunction_1963,
    s000_baseline_eqFunction_1964,
    s000_baseline_eqFunction_1965,
    s000_baseline_eqFunction_1966,
    s000_baseline_eqFunction_1967,
    s000_baseline_eqFunction_1968,
    s000_baseline_eqFunction_1969,
    s000_baseline_eqFunction_1971,
    s000_baseline_eqFunction_1996,
    s000_baseline_eqFunction_1997,
    s000_baseline_eqFunction_1998,
    s000_baseline_eqFunction_1999,
    s000_baseline_eqFunction_2000,
    s000_baseline_eqFunction_2001,
    s000_baseline_eqFunction_2002,
    s000_baseline_eqFunction_2004,
    s000_baseline_eqFunction_2005,
    s000_baseline_eqFunction_2006,
    s000_baseline_eqFunction_2010,
    s000_baseline_eqFunction_2011,
    s000_baseline_eqFunction_2012,
    s000_baseline_eqFunction_2014,
    s000_baseline_eqFunction_2015,
    s000_baseline_eqFunction_2016,
    s000_baseline_eqFunction_2017,
    s000_baseline_eqFunction_2018,
    s000_baseline_eqFunction_2019,
    s000_baseline_eqFunction_2020,
    s000_baseline_eqFunction_2021,
    s000_baseline_eqFunction_2022,
    s000_baseline_eqFunction_2023,
    s000_baseline_eqFunction_2024,
    s000_baseline_eqFunction_2025,
    s000_baseline_eqFunction_2026,
    s000_baseline_eqFunction_2027,
    s000_baseline_eqFunction_2028,
    s000_baseline_eqFunction_2029,
    s000_baseline_eqFunction_2030,
    s000_baseline_eqFunction_2031,
    s000_baseline_eqFunction_2032,
    s000_baseline_eqFunction_2033,
    s000_baseline_eqFunction_2034,
    s000_baseline_eqFunction_2035,
    s000_baseline_eqFunction_2036,
    s000_baseline_eqFunction_2037,
    s000_baseline_eqFunction_2038,
    s000_baseline_eqFunction_2047,
    s000_baseline_eqFunction_2048,
    s000_baseline_eqFunction_2049,
    s000_baseline_eqFunction_2051,
    s000_baseline_eqFunction_2052,
    s000_baseline_eqFunction_2055,
    s000_baseline_eqFunction_2057,
    s000_baseline_eqFunction_2058,
    s000_baseline_eqFunction_2061,
    s000_baseline_eqFunction_2063,
    s000_baseline_eqFunction_2064,
    s000_baseline_eqFunction_2067,
    s000_baseline_eqFunction_2069,
    s000_baseline_eqFunction_2070,
    s000_baseline_eqFunction_2073,
    s000_baseline_eqFunction_2075,
    s000_baseline_eqFunction_2076,
    s000_baseline_eqFunction_2079,
    s000_baseline_eqFunction_2081,
    s000_baseline_eqFunction_2082,
    s000_baseline_eqFunction_2085,
    s000_baseline_eqFunction_2086,
    s000_baseline_eqFunction_2087,
    s000_baseline_eqFunction_2088,
    s000_baseline_eqFunction_2089,
    s000_baseline_eqFunction_2090,
    s000_baseline_eqFunction_2091,
    s000_baseline_eqFunction_2092,
    s000_baseline_eqFunction_2093,
    s000_baseline_eqFunction_2094,
    s000_baseline_eqFunction_2095,
    s000_baseline_eqFunction_2096,
    s000_baseline_eqFunction_2097,
    s000_baseline_eqFunction_2098,
    s000_baseline_eqFunction_2099,
    s000_baseline_eqFunction_2101,
    s000_baseline_eqFunction_2102,
    s000_baseline_eqFunction_2103,
    s000_baseline_eqFunction_2104,
    s000_baseline_eqFunction_2105,
    s000_baseline_eqFunction_2106,
    s000_baseline_eqFunction_2107,
    s000_baseline_eqFunction_2108,
    s000_baseline_eqFunction_2109,
    s000_baseline_eqFunction_2110,
    s000_baseline_eqFunction_2111,
    s000_baseline_eqFunction_2112,
    s000_baseline_eqFunction_2113,
    s000_baseline_eqFunction_2114,
    s000_baseline_eqFunction_2115,
    s000_baseline_eqFunction_2116,
    s000_baseline_eqFunction_2117,
    s000_baseline_eqFunction_2118,
    s000_baseline_eqFunction_2119,
    s000_baseline_eqFunction_2120,
    s000_baseline_eqFunction_2121,
    s000_baseline_eqFunction_2122,
    s000_baseline_eqFunction_2123,
    s000_baseline_eqFunction_2124,
    s000_baseline_eqFunction_2125,
    s000_baseline_eqFunction_2126,
    s000_baseline_eqFunction_2127,
    s000_baseline_eqFunction_2128,
    s000_baseline_eqFunction_2129,
    s000_baseline_eqFunction_2130,
    s000_baseline_eqFunction_2132,
    s000_baseline_eqFunction_2134,
    s000_baseline_eqFunction_2135,
    s000_baseline_eqFunction_2136,
    s000_baseline_eqFunction_2137,
    s000_baseline_eqFunction_2139,
    s000_baseline_eqFunction_2140,
    s000_baseline_eqFunction_2141,
    s000_baseline_eqFunction_2142,
    s000_baseline_eqFunction_2144,
    s000_baseline_eqFunction_2145,
    s000_baseline_eqFunction_2146,
    s000_baseline_eqFunction_2147,
    s000_baseline_eqFunction_2149,
    s000_baseline_eqFunction_2150,
    s000_baseline_eqFunction_2151,
    s000_baseline_eqFunction_2152,
    s000_baseline_eqFunction_2154,
    s000_baseline_eqFunction_2155,
    s000_baseline_eqFunction_2156,
    s000_baseline_eqFunction_2157,
    s000_baseline_eqFunction_2159,
    s000_baseline_eqFunction_2160,
    s000_baseline_eqFunction_2161,
    s000_baseline_eqFunction_2162,
    s000_baseline_eqFunction_2163
  };
  
  for (int id = 0; id < 163; id++) {
    eqFunctions[id](data, threadData);
  }
}

int s000_baseline_functionODE(DATA *data, threadData_t *threadData)
{
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  s000_baseline_functionLocalKnownVars(data, threadData);
  functionODE_system0(data, threadData);

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char **argv, DATA *data, threadData_t *threadData);
extern int _main_OptimizationRuntime(int argc, char **argv, DATA *data, threadData_t *threadData);

#include "s000_baseline_12jac.h"
#include "s000_baseline_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks s000_baseline_callback = {
  (int (*)(DATA *, threadData_t *, void *)) s000_baseline_performSimulation,    /* performSimulation */
  (int (*)(DATA *, threadData_t *, void *)) s000_baseline_performQSSSimulation,    /* performQSSSimulation */
  s000_baseline_updateContinuousSystem,    /* updateContinuousSystem */
  s000_baseline_callExternalObjectDestructors,    /* callExternalObjectDestructors */
  s000_baseline_initialNonLinearSystem,    /* initialNonLinearSystem */
  s000_baseline_initialLinearSystem,    /* initialLinearSystem */
  NULL,    /* initialMixedSystem */
  #if !defined(OMC_NO_STATESELECTION)
  s000_baseline_initializeStateSets,
  #else
  NULL,
  #endif    /* initializeStateSets */
  s000_baseline_initializeDAEmodeData,
  s000_baseline_functionODE,
  s000_baseline_functionAlgebraics,
  s000_baseline_functionDAE,
  s000_baseline_functionLocalKnownVars,
  s000_baseline_input_function,
  s000_baseline_input_function_init,
  s000_baseline_input_function_updateStartValues,
  s000_baseline_data_function,
  s000_baseline_output_function,
  s000_baseline_setc_function,
  s000_baseline_setb_function,
  s000_baseline_function_storeDelayed,
  s000_baseline_function_storeSpatialDistribution,
  s000_baseline_function_initSpatialDistribution,
  s000_baseline_updateBoundVariableAttributes,
  s000_baseline_functionInitialEquations,
  GLOBAL_EQUIDISTANT_HOMOTOPY,
  s000_baseline_functionInitialEquations_lambda0,
  s000_baseline_functionRemovedInitialEquations,
  s000_baseline_updateBoundParameters,
  s000_baseline_checkForAsserts,
  s000_baseline_function_ZeroCrossingsEquations,
  s000_baseline_function_ZeroCrossings,
  s000_baseline_function_updateRelations,
  s000_baseline_zeroCrossingDescription,
  s000_baseline_relationDescription,
  s000_baseline_function_initSample,
  s000_baseline_INDEX_JAC_A,
  s000_baseline_INDEX_JAC_B,
  s000_baseline_INDEX_JAC_C,
  s000_baseline_INDEX_JAC_D,
  s000_baseline_INDEX_JAC_F,
  s000_baseline_INDEX_JAC_H,
  s000_baseline_initialAnalyticJacobianA,
  s000_baseline_initialAnalyticJacobianB,
  s000_baseline_initialAnalyticJacobianC,
  s000_baseline_initialAnalyticJacobianD,
  s000_baseline_initialAnalyticJacobianF,
  s000_baseline_initialAnalyticJacobianH,
  s000_baseline_functionJacA_column,
  s000_baseline_functionJacB_column,
  s000_baseline_functionJacC_column,
  s000_baseline_functionJacD_column,
  s000_baseline_functionJacF_column,
  s000_baseline_functionJacH_column,
  s000_baseline_linear_model_frame,
  s000_baseline_linear_model_datarecovery_frame,
  s000_baseline_mayer,
  s000_baseline_lagrange,
  s000_baseline_getInputVarIndicesInOptimization,
  s000_baseline_pickUpBoundsForInputsInOptimization,
  s000_baseline_setInputData,
  s000_baseline_getTimeGrid,
  s000_baseline_symbolicInlineSystem,
  s000_baseline_function_initSynchronous,
  s000_baseline_function_updateSynchronous,
  s000_baseline_function_equationsSynchronous,
  s000_baseline_inputNames,
  s000_baseline_dataReconciliationInputNames,
  s000_baseline_dataReconciliationUnmeasuredVariables,
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
#define _OMC_LIT_RESOURCE_0_dir_data "/workspace/external/modelica-buildings/Buildings"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_name,9,_OMC_LIT_RESOURCE_0_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir,48,_OMC_LIT_RESOURCE_0_dir_data);

#define _OMC_LIT_RESOURCE_1_name_data "Complex"
#define _OMC_LIT_RESOURCE_1_dir_data "/home/cfd/.openmodelica/libraries/Complex 4.0.0+maint.om"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_name,7,_OMC_LIT_RESOURCE_1_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir,56,_OMC_LIT_RESOURCE_1_dir_data);

#define _OMC_LIT_RESOURCE_2_name_data "DataCentreFFD"
#define _OMC_LIT_RESOURCE_2_dir_data "/workspace"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_name,13,_OMC_LIT_RESOURCE_2_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir,10,_OMC_LIT_RESOURCE_2_dir_data);

#define _OMC_LIT_RESOURCE_3_name_data "Modelica"
#define _OMC_LIT_RESOURCE_3_dir_data "/home/cfd/.openmodelica/libraries/Modelica 4.0.0+maint.om"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_name,8,_OMC_LIT_RESOURCE_3_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir,57,_OMC_LIT_RESOURCE_3_dir_data);

#define _OMC_LIT_RESOURCE_4_name_data "ModelicaServices"
#define _OMC_LIT_RESOURCE_4_dir_data "/home/cfd/.openmodelica/libraries/ModelicaServices 4.0.0+maint.om"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_name,16,_OMC_LIT_RESOURCE_4_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir,65,_OMC_LIT_RESOURCE_4_dir_data);

#define _OMC_LIT_RESOURCE_5_name_data "Scenario_s000_baseline"
#define _OMC_LIT_RESOURCE_5_dir_data "/workspace/scenarios"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_5_name,22,_OMC_LIT_RESOURCE_5_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_5_dir,20,_OMC_LIT_RESOURCE_5_dir_data);

static const MMC_DEFSTRUCTLIT(_OMC_LIT_RESOURCES,12,MMC_ARRAY_TAG) {MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_5_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_5_dir)}};
void s000_baseline_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &s000_baseline_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "Scenario_s000_baseline";
  data->modelData->modelFilePrefix = "s000_baseline";
  data->modelData->modelFileName = "s000_baseline.mo";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "/workspace/scenarios";
  data->modelData->modelGUID = "{1caeb2c3-8bf4-4bd8-81cd-b155f7fca4d6}";
  #if defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME)
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  #else
  #if defined(_MSC_VER) /* handle joke compilers */
  {
  /* for MSVC we encode a string like char x[] = {'a', 'b', 'c', '\0'} */
  /* because the string constant limit is 65535 bytes */
  static const char contents_init[] =
    #include "s000_baseline_init.c"
    ;
  static const char contents_info[] =
    #include "s000_baseline_info.c"
    ;
    data->modelData->initXMLData = contents_init;
    data->modelData->modelDataXml.infoXMLData = contents_info;
  }
  #else /* handle real compilers */
  data->modelData->initXMLData =
  #include "s000_baseline_init.c"
    ;
  data->modelData->modelDataXml.infoXMLData =
  #include "s000_baseline_info.c"
    ;
  #endif /* defined(_MSC_VER) */
  #endif /* defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME) */
  data->modelData->modelDataXml.fileName = "s000_baseline_info.json";
  data->modelData->resourcesDir = NULL;
  data->modelData->runTestsuite = 0;
  data->modelData->nStatesArray = 46;
  data->modelData->nDiscreteReal = 128;
  data->modelData->nVariablesRealArray = 576;
  data->modelData->nVariablesIntegerArray = 1;
  data->modelData->nVariablesBooleanArray = 8;
  data->modelData->nVariablesStringArray = 0;
  data->modelData->nParametersRealArray = 1563;
  data->modelData->nParametersIntegerArray = 439;
  data->modelData->nParametersBooleanArray = 355;
  data->modelData->nParametersStringArray = 114;
  data->modelData->nParametersReal = 1563;
  data->modelData->nParametersInteger = 439;
  data->modelData->nParametersBoolean = 355;
  data->modelData->nParametersString = 114;
  data->modelData->nAliasRealArray = 655;
  data->modelData->nAliasIntegerArray = 0;
  data->modelData->nAliasBooleanArray = 0;
  data->modelData->nAliasStringArray = 0;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 0;
  data->modelData->nZeroCrossings = 16;
  data->modelData->nSamples = 1;
  data->modelData->nRelations = 16;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 5;
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 53;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 4919;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 3;
  data->modelData->nNonLinearSystems = 15;
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
  
    s000_baseline_setupDataStruc(&data, threadData);
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


