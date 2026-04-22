/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "tmp_two_returns_res_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void tmp_two_returns_res_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
  /* sample 1 */
  data->modelData->samplesInfo[i].index = 1;
  data->modelData->samplesInfo[i].start = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[84]] /* roo.air.cfd.startTime PARAM */);
  data->modelData->samplesInfo[i].interval = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* roo.air.cfd.samplePeriod PARAM */) /* (max real for single time events) */;
  i++;
}

const char *tmp_two_returns_res_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  static const char *res[] = {"weaDat.conTimMin.canRepeatWeatherFile and weaDat.add30Min.y > pre(weaDat.conTimMin.tNext)",
  "weaDat.conTim.canRepeatWeatherFile and weaDat.weaBus.cloTim > pre(weaDat.conTim.tNext)"};
  static const int occurEqs0[] = {1,1311};
  static const int occurEqs1[] = {1,1312};
  static const int *occurEqs[] = {occurEqs0,occurEqs1};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
extern void tmp_two_returns_res_eqFunction_1337(DATA* data, threadData_t *threadData);
extern void tmp_two_returns_res_eqFunction_1343(DATA* data, threadData_t *threadData);

int tmp_two_returns_res_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  static void (*const eqFunctions[2])(DATA*, threadData_t*) = {
    tmp_two_returns_res_eqFunction_1337,
    tmp_two_returns_res_eqFunction_1343
  };
  
  for (int id = 0; id < 2; id++) {
    eqFunctions[id](data, threadData);
  }
  
  return 0;
}

int tmp_two_returns_res_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
{
  const int *equationIndexes = NULL;

  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_integer current_index = 0;
  modelica_integer start_index;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ZC);
#endif
  data->simulationInfo->callStatistics.functionZeroCrossings++;

  start_index = current_index;
  tmp1 = 1.0;
  tmp2 = 1.0;
  tmp0 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[223]] /* weaDat.add30Min.y variable */), (data->simulationInfo->realVarsPre[348] /* weaDat.conTimMin.tNext DISCRETE */), tmp1, tmp2, data->simulationInfo->storedRelations[0]);
  gout[start_index] = (((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[297]] /* weaDat.conTimMin.canRepeatWeatherFile PARAM */) && tmp0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp4 = 1.0;
  tmp5 = 1.0;
  tmp3 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[277]] /* weaDat.weaBus.cloTim variable */), (data->simulationInfo->realVarsPre[347] /* weaDat.conTim.tNext DISCRETE */), tmp4, tmp5, data->simulationInfo->storedRelations[1]);
  gout[start_index] = (((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[296]] /* weaDat.conTim.canRepeatWeatherFile PARAM */) && tmp3)) ? 1 : -1;
  current_index++;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ZC);
#endif

  return 0;
}

const char *tmp_two_returns_res_relationDescription(int i)
{
  const char *res[] = {"weaDat.add30Min.y > pre(weaDat.conTimMin.tNext)",
  "weaDat.weaBus.cloTim > pre(weaDat.conTim.tNext)"};
  return res[i];
}

int tmp_two_returns_res_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  const int *equationIndexes = NULL;

  modelica_boolean tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_integer current_index = 0;
  modelica_integer start_index;
  
  if(evalforZeroCross) {
    start_index = current_index;
    tmp7 = 1.0;
    tmp8 = 1.0;
    tmp6 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[223]] /* weaDat.add30Min.y variable */), (data->simulationInfo->realVarsPre[348] /* weaDat.conTimMin.tNext DISCRETE */), tmp7, tmp8, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[start_index] = tmp6;
    current_index++;

    start_index = current_index;
    tmp10 = 1.0;
    tmp11 = 1.0;
    tmp9 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[277]] /* weaDat.weaBus.cloTim variable */), (data->simulationInfo->realVarsPre[347] /* weaDat.conTim.tNext DISCRETE */), tmp10, tmp11, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[start_index] = tmp9;
    current_index++;
  } else {
    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[223]] /* weaDat.add30Min.y variable */) > (data->simulationInfo->realVarsPre[348] /* weaDat.conTimMin.tNext DISCRETE */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[277]] /* weaDat.weaBus.cloTim variable */) > (data->simulationInfo->realVarsPre[347] /* weaDat.conTim.tNext DISCRETE */));
    current_index++;
  }
  
  return 0;
}

#if defined(__cplusplus)
}
#endif
