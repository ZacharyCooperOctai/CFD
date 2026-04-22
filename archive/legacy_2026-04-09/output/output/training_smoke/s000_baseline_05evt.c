/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "s000_baseline_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void s000_baseline_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
  /* sample 1 */
  data->modelData->samplesInfo[i].index = 1;
  data->modelData->samplesInfo[i].start = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[195]] /* dc.roo.air.cfd.startTime PARAM */);
  data->modelData->samplesInfo[i].interval = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */) /* (max real for single time events) */;
  i++;
}

const char *s000_baseline_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  static const char *res[] = {"time >= pre(fanTable.nextTimeEvent)",
  "time >= pre(TsupTable.nextTimeEvent)",
  "dc.roo.air.cfd.u[10] > 0.0",
  "(-dc.roo.air.cfd.u[17]) > 0.0",
  "(-dc.roo.air.cfd.u[18]) > 0.0",
  "dc.roo.air.cfd.u[12] > 0.0",
  "(-dc.roo.air.cfd.u[16]) > 0.0",
  "dc.roo.air.cfd.u[13] > 0.0",
  "(-dc.roo.air.cfd.u[21]) > 0.0",
  "dc.roo.air.cfd.u[14] > 0.0",
  "dc.roo.air.cfd.u[15] > 0.0",
  "(-dc.roo.air.cfd.u[20]) > 0.0",
  "dc.roo.air.cfd.u[11] > 0.0",
  "(-dc.roo.air.cfd.u[19]) > 0.0",
  "dc.weaDat.conTimMin.canRepeatWeatherFile and dc.weaDat.add30Min.y > pre(dc.weaDat.conTimMin.tNext)",
  "dc.weaDat.conTim.canRepeatWeatherFile and dc.weaDat.weaBus.cloTim > pre(dc.weaDat.conTim.tNext)"};
  static const int occurEqs0[] = {1,1836};
  static const int occurEqs1[] = {1,2107};
  static const int occurEqs2[] = {1,2172};
  static const int occurEqs3[] = {1,2068};
  static const int occurEqs4[] = {1,2074};
  static const int occurEqs5[] = {1,2161};
  static const int occurEqs6[] = {1,2062};
  static const int occurEqs7[] = {1,2156};
  static const int occurEqs8[] = {1,2092};
  static const int occurEqs9[] = {1,2151};
  static const int occurEqs10[] = {1,2146};
  static const int occurEqs11[] = {1,2086};
  static const int occurEqs12[] = {1,2166};
  static const int occurEqs13[] = {1,2080};
  static const int occurEqs14[] = {1,2111};
  static const int occurEqs15[] = {1,2114};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3,occurEqs4,occurEqs5,occurEqs6,occurEqs7,occurEqs8,occurEqs9,occurEqs10,occurEqs11,occurEqs12,occurEqs13,occurEqs14,occurEqs15};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
extern void s000_baseline_eqFunction_2055(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2057(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2059(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2063(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2065(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2069(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2071(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2075(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2077(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2081(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2083(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2087(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2089(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2140(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2142(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2143(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2144(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2147(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2148(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2149(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2152(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2153(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2154(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2157(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2158(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2159(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2162(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2163(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2164(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2167(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2168(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2169(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2170(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2175(DATA* data, threadData_t *threadData);
extern void s000_baseline_eqFunction_2181(DATA* data, threadData_t *threadData);

int s000_baseline_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  static void (*const eqFunctions[35])(DATA*, threadData_t*) = {
    s000_baseline_eqFunction_2055,
    s000_baseline_eqFunction_2057,
    s000_baseline_eqFunction_2059,
    s000_baseline_eqFunction_2063,
    s000_baseline_eqFunction_2065,
    s000_baseline_eqFunction_2069,
    s000_baseline_eqFunction_2071,
    s000_baseline_eqFunction_2075,
    s000_baseline_eqFunction_2077,
    s000_baseline_eqFunction_2081,
    s000_baseline_eqFunction_2083,
    s000_baseline_eqFunction_2087,
    s000_baseline_eqFunction_2089,
    s000_baseline_eqFunction_2140,
    s000_baseline_eqFunction_2142,
    s000_baseline_eqFunction_2143,
    s000_baseline_eqFunction_2144,
    s000_baseline_eqFunction_2147,
    s000_baseline_eqFunction_2148,
    s000_baseline_eqFunction_2149,
    s000_baseline_eqFunction_2152,
    s000_baseline_eqFunction_2153,
    s000_baseline_eqFunction_2154,
    s000_baseline_eqFunction_2157,
    s000_baseline_eqFunction_2158,
    s000_baseline_eqFunction_2159,
    s000_baseline_eqFunction_2162,
    s000_baseline_eqFunction_2163,
    s000_baseline_eqFunction_2164,
    s000_baseline_eqFunction_2167,
    s000_baseline_eqFunction_2168,
    s000_baseline_eqFunction_2169,
    s000_baseline_eqFunction_2170,
    s000_baseline_eqFunction_2175,
    s000_baseline_eqFunction_2181
  };
  
  for (int id = 0; id < 35; id++) {
    eqFunctions[id](data, threadData);
  }
  
  return 0;
}

int s000_baseline_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
{
  const int *equationIndexes = NULL;

  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_boolean tmp12;
  modelica_boolean tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_boolean tmp16;
  modelica_boolean tmp17;
  modelica_real tmp18;
  modelica_real tmp19;
  modelica_boolean tmp20;
  modelica_real tmp21;
  modelica_real tmp22;
  modelica_boolean tmp23;
  modelica_boolean tmp24;
  modelica_real tmp25;
  modelica_real tmp26;
  modelica_boolean tmp27;
  modelica_real tmp28;
  modelica_real tmp29;
  modelica_boolean tmp30;
  modelica_boolean tmp31;
  modelica_real tmp32;
  modelica_real tmp33;
  modelica_boolean tmp34;
  modelica_real tmp35;
  modelica_real tmp36;
  modelica_boolean tmp37;
  modelica_real tmp38;
  modelica_real tmp39;
  modelica_boolean tmp40;
  modelica_boolean tmp41;
  modelica_real tmp42;
  modelica_real tmp43;
  modelica_boolean tmp44;
  modelica_real tmp45;
  modelica_real tmp46;
  modelica_boolean tmp47;
  modelica_boolean tmp48;
  modelica_real tmp49;
  modelica_real tmp50;
  modelica_boolean tmp51;
  modelica_real tmp52;
  modelica_real tmp53;
  modelica_integer current_index = 0;
  modelica_integer start_index;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ZC);
#endif
  data->simulationInfo->callStatistics.functionZeroCrossings++;

  start_index = current_index;
  tmp1 = 1.0;
  tmp2 = 1.0;
  tmp0 = GreaterEqZC(data->localData[0]->timeValue, (data->simulationInfo->realVarsPre[575] /* fanTable.nextTimeEvent DISCRETE */), tmp1, tmp2, data->simulationInfo->storedRelations[0]);
  gout[start_index] = (tmp0) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp4 = 1.0;
  tmp5 = 1.0;
  tmp3 = GreaterEqZC(data->localData[0]->timeValue, (data->simulationInfo->realVarsPre[448] /* TsupTable.nextTimeEvent DISCRETE */), tmp4, tmp5, data->simulationInfo->storedRelations[1]);
  gout[start_index] = (tmp3) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp7 = 1.0;
  tmp8 = 0.0;
  tmp6 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[169]] /* dc.roo.air.cfd.u[10] variable */), 0.0, tmp7, tmp8, data->simulationInfo->storedRelations[2]);
  gout[start_index] = (tmp6) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp12 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[97]] /* dc.retRes[2].m_flow_nominal_pos PARAM */),2.220446049250313e-16);
  tmp10 = fabs((tmp12?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[97]] /* dc.retRes[2].m_flow_nominal_pos PARAM */):1.0));
  tmp11 = 0.0;
  tmp9 = GreaterZC((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[176]] /* dc.roo.air.cfd.u[17] variable */)), 0.0, tmp10, tmp11, data->simulationInfo->storedRelations[3]);
  gout[start_index] = (tmp9) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp16 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[98]] /* dc.retRes[3].m_flow_nominal_pos PARAM */),2.220446049250313e-16);
  tmp14 = fabs((tmp16?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[98]] /* dc.retRes[3].m_flow_nominal_pos PARAM */):1.0));
  tmp15 = 0.0;
  tmp13 = GreaterZC((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[177]] /* dc.roo.air.cfd.u[18] variable */)), 0.0, tmp14, tmp15, data->simulationInfo->storedRelations[4]);
  gout[start_index] = (tmp13) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp18 = 1.0;
  tmp19 = 0.0;
  tmp17 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[171]] /* dc.roo.air.cfd.u[12] variable */), 0.0, tmp18, tmp19, data->simulationInfo->storedRelations[5]);
  gout[start_index] = (tmp17) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp23 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[96]] /* dc.retRes[1].m_flow_nominal_pos PARAM */),2.220446049250313e-16);
  tmp21 = fabs((tmp23?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[96]] /* dc.retRes[1].m_flow_nominal_pos PARAM */):1.0));
  tmp22 = 0.0;
  tmp20 = GreaterZC((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[175]] /* dc.roo.air.cfd.u[16] variable */)), 0.0, tmp21, tmp22, data->simulationInfo->storedRelations[6]);
  gout[start_index] = (tmp20) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp25 = 1.0;
  tmp26 = 0.0;
  tmp24 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[172]] /* dc.roo.air.cfd.u[13] variable */), 0.0, tmp25, tmp26, data->simulationInfo->storedRelations[7]);
  gout[start_index] = (tmp24) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp30 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[101]] /* dc.retRes[6].m_flow_nominal_pos PARAM */),2.220446049250313e-16);
  tmp28 = fabs((tmp30?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[101]] /* dc.retRes[6].m_flow_nominal_pos PARAM */):1.0));
  tmp29 = 0.0;
  tmp27 = GreaterZC((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[180]] /* dc.roo.air.cfd.u[21] variable */)), 0.0, tmp28, tmp29, data->simulationInfo->storedRelations[8]);
  gout[start_index] = (tmp27) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp32 = 1.0;
  tmp33 = 0.0;
  tmp31 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[173]] /* dc.roo.air.cfd.u[14] variable */), 0.0, tmp32, tmp33, data->simulationInfo->storedRelations[9]);
  gout[start_index] = (tmp31) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp35 = 1.0;
  tmp36 = 0.0;
  tmp34 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[174]] /* dc.roo.air.cfd.u[15] variable */), 0.0, tmp35, tmp36, data->simulationInfo->storedRelations[10]);
  gout[start_index] = (tmp34) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp40 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[100]] /* dc.retRes[5].m_flow_nominal_pos PARAM */),2.220446049250313e-16);
  tmp38 = fabs((tmp40?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[100]] /* dc.retRes[5].m_flow_nominal_pos PARAM */):1.0));
  tmp39 = 0.0;
  tmp37 = GreaterZC((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[179]] /* dc.roo.air.cfd.u[20] variable */)), 0.0, tmp38, tmp39, data->simulationInfo->storedRelations[11]);
  gout[start_index] = (tmp37) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp42 = 1.0;
  tmp43 = 0.0;
  tmp41 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* dc.roo.air.cfd.u[11] variable */), 0.0, tmp42, tmp43, data->simulationInfo->storedRelations[12]);
  gout[start_index] = (tmp41) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp47 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[99]] /* dc.retRes[4].m_flow_nominal_pos PARAM */),2.220446049250313e-16);
  tmp45 = fabs((tmp47?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[99]] /* dc.retRes[4].m_flow_nominal_pos PARAM */):1.0));
  tmp46 = 0.0;
  tmp44 = GreaterZC((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* dc.roo.air.cfd.u[19] variable */)), 0.0, tmp45, tmp46, data->simulationInfo->storedRelations[13]);
  gout[start_index] = (tmp44) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp49 = 1.0;
  tmp50 = 1.0;
  tmp48 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[376]] /* dc.weaDat.add30Min.y variable */), (data->simulationInfo->realVarsPre[574] /* dc.weaDat.conTimMin.tNext DISCRETE */), tmp49, tmp50, data->simulationInfo->storedRelations[14]);
  gout[start_index] = (((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[345]] /* dc.weaDat.conTimMin.canRepeatWeatherFile PARAM */) && tmp48)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp52 = 1.0;
  tmp53 = 1.0;
  tmp51 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[430]] /* dc.weaDat.weaBus.cloTim variable */), (data->simulationInfo->realVarsPre[573] /* dc.weaDat.conTim.tNext DISCRETE */), tmp52, tmp53, data->simulationInfo->storedRelations[15]);
  gout[start_index] = (((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[344]] /* dc.weaDat.conTim.canRepeatWeatherFile PARAM */) && tmp51)) ? 1 : -1;
  current_index++;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ZC);
#endif

  return 0;
}

const char *s000_baseline_relationDescription(int i)
{
  const char *res[] = {"time >= pre(fanTable.nextTimeEvent)",
  "time >= pre(TsupTable.nextTimeEvent)",
  "dc.roo.air.cfd.u[10] > 0.0",
  "(-dc.roo.air.cfd.u[17]) > 0.0",
  "(-dc.roo.air.cfd.u[18]) > 0.0",
  "dc.roo.air.cfd.u[12] > 0.0",
  "(-dc.roo.air.cfd.u[16]) > 0.0",
  "dc.roo.air.cfd.u[13] > 0.0",
  "(-dc.roo.air.cfd.u[21]) > 0.0",
  "dc.roo.air.cfd.u[14] > 0.0",
  "dc.roo.air.cfd.u[15] > 0.0",
  "(-dc.roo.air.cfd.u[20]) > 0.0",
  "dc.roo.air.cfd.u[11] > 0.0",
  "(-dc.roo.air.cfd.u[19]) > 0.0",
  "dc.weaDat.add30Min.y > pre(dc.weaDat.conTimMin.tNext)",
  "dc.weaDat.weaBus.cloTim > pre(dc.weaDat.conTim.tNext)"};
  return res[i];
}

int s000_baseline_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  const int *equationIndexes = NULL;

  modelica_boolean tmp54;
  modelica_real tmp55;
  modelica_real tmp56;
  modelica_boolean tmp57;
  modelica_real tmp58;
  modelica_real tmp59;
  modelica_boolean tmp60;
  modelica_real tmp61;
  modelica_real tmp62;
  modelica_boolean tmp63;
  modelica_real tmp64;
  modelica_real tmp65;
  modelica_boolean tmp66;
  modelica_boolean tmp67;
  modelica_real tmp68;
  modelica_real tmp69;
  modelica_boolean tmp70;
  modelica_boolean tmp71;
  modelica_real tmp72;
  modelica_real tmp73;
  modelica_boolean tmp74;
  modelica_real tmp75;
  modelica_real tmp76;
  modelica_boolean tmp77;
  modelica_boolean tmp78;
  modelica_real tmp79;
  modelica_real tmp80;
  modelica_boolean tmp81;
  modelica_real tmp82;
  modelica_real tmp83;
  modelica_boolean tmp84;
  modelica_boolean tmp85;
  modelica_real tmp86;
  modelica_real tmp87;
  modelica_boolean tmp88;
  modelica_real tmp89;
  modelica_real tmp90;
  modelica_boolean tmp91;
  modelica_real tmp92;
  modelica_real tmp93;
  modelica_boolean tmp94;
  modelica_boolean tmp95;
  modelica_real tmp96;
  modelica_real tmp97;
  modelica_boolean tmp98;
  modelica_real tmp99;
  modelica_real tmp100;
  modelica_boolean tmp101;
  modelica_boolean tmp102;
  modelica_real tmp103;
  modelica_real tmp104;
  modelica_boolean tmp105;
  modelica_real tmp106;
  modelica_real tmp107;
  modelica_integer current_index = 0;
  modelica_integer start_index;
  
  if(evalforZeroCross) {
    start_index = current_index;
    tmp55 = 1.0;
    tmp56 = 1.0;
    tmp54 = GreaterEqZC(data->localData[0]->timeValue, (data->simulationInfo->realVarsPre[575] /* fanTable.nextTimeEvent DISCRETE */), tmp55, tmp56, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[start_index] = tmp54;
    current_index++;

    start_index = current_index;
    tmp58 = 1.0;
    tmp59 = 1.0;
    tmp57 = GreaterEqZC(data->localData[0]->timeValue, (data->simulationInfo->realVarsPre[448] /* TsupTable.nextTimeEvent DISCRETE */), tmp58, tmp59, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[start_index] = tmp57;
    current_index++;

    start_index = current_index;
    tmp61 = 1.0;
    tmp62 = 0.0;
    tmp60 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[169]] /* dc.roo.air.cfd.u[10] variable */), 0.0, tmp61, tmp62, data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[start_index] = tmp60;
    current_index++;

    start_index = current_index;
    tmp66 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[97]] /* dc.retRes[2].m_flow_nominal_pos PARAM */),2.220446049250313e-16);
    tmp64 = fabs((tmp66?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[97]] /* dc.retRes[2].m_flow_nominal_pos PARAM */):1.0));
    tmp65 = 0.0;
    tmp63 = GreaterZC((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[176]] /* dc.roo.air.cfd.u[17] variable */)), 0.0, tmp64, tmp65, data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[start_index] = tmp63;
    current_index++;

    start_index = current_index;
    tmp70 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[98]] /* dc.retRes[3].m_flow_nominal_pos PARAM */),2.220446049250313e-16);
    tmp68 = fabs((tmp70?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[98]] /* dc.retRes[3].m_flow_nominal_pos PARAM */):1.0));
    tmp69 = 0.0;
    tmp67 = GreaterZC((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[177]] /* dc.roo.air.cfd.u[18] variable */)), 0.0, tmp68, tmp69, data->simulationInfo->storedRelations[4]);
    data->simulationInfo->relations[start_index] = tmp67;
    current_index++;

    start_index = current_index;
    tmp72 = 1.0;
    tmp73 = 0.0;
    tmp71 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[171]] /* dc.roo.air.cfd.u[12] variable */), 0.0, tmp72, tmp73, data->simulationInfo->storedRelations[5]);
    data->simulationInfo->relations[start_index] = tmp71;
    current_index++;

    start_index = current_index;
    tmp77 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[96]] /* dc.retRes[1].m_flow_nominal_pos PARAM */),2.220446049250313e-16);
    tmp75 = fabs((tmp77?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[96]] /* dc.retRes[1].m_flow_nominal_pos PARAM */):1.0));
    tmp76 = 0.0;
    tmp74 = GreaterZC((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[175]] /* dc.roo.air.cfd.u[16] variable */)), 0.0, tmp75, tmp76, data->simulationInfo->storedRelations[6]);
    data->simulationInfo->relations[start_index] = tmp74;
    current_index++;

    start_index = current_index;
    tmp79 = 1.0;
    tmp80 = 0.0;
    tmp78 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[172]] /* dc.roo.air.cfd.u[13] variable */), 0.0, tmp79, tmp80, data->simulationInfo->storedRelations[7]);
    data->simulationInfo->relations[start_index] = tmp78;
    current_index++;

    start_index = current_index;
    tmp84 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[101]] /* dc.retRes[6].m_flow_nominal_pos PARAM */),2.220446049250313e-16);
    tmp82 = fabs((tmp84?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[101]] /* dc.retRes[6].m_flow_nominal_pos PARAM */):1.0));
    tmp83 = 0.0;
    tmp81 = GreaterZC((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[180]] /* dc.roo.air.cfd.u[21] variable */)), 0.0, tmp82, tmp83, data->simulationInfo->storedRelations[8]);
    data->simulationInfo->relations[start_index] = tmp81;
    current_index++;

    start_index = current_index;
    tmp86 = 1.0;
    tmp87 = 0.0;
    tmp85 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[173]] /* dc.roo.air.cfd.u[14] variable */), 0.0, tmp86, tmp87, data->simulationInfo->storedRelations[9]);
    data->simulationInfo->relations[start_index] = tmp85;
    current_index++;

    start_index = current_index;
    tmp89 = 1.0;
    tmp90 = 0.0;
    tmp88 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[174]] /* dc.roo.air.cfd.u[15] variable */), 0.0, tmp89, tmp90, data->simulationInfo->storedRelations[10]);
    data->simulationInfo->relations[start_index] = tmp88;
    current_index++;

    start_index = current_index;
    tmp94 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[100]] /* dc.retRes[5].m_flow_nominal_pos PARAM */),2.220446049250313e-16);
    tmp92 = fabs((tmp94?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[100]] /* dc.retRes[5].m_flow_nominal_pos PARAM */):1.0));
    tmp93 = 0.0;
    tmp91 = GreaterZC((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[179]] /* dc.roo.air.cfd.u[20] variable */)), 0.0, tmp92, tmp93, data->simulationInfo->storedRelations[11]);
    data->simulationInfo->relations[start_index] = tmp91;
    current_index++;

    start_index = current_index;
    tmp96 = 1.0;
    tmp97 = 0.0;
    tmp95 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* dc.roo.air.cfd.u[11] variable */), 0.0, tmp96, tmp97, data->simulationInfo->storedRelations[12]);
    data->simulationInfo->relations[start_index] = tmp95;
    current_index++;

    start_index = current_index;
    tmp101 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[99]] /* dc.retRes[4].m_flow_nominal_pos PARAM */),2.220446049250313e-16);
    tmp99 = fabs((tmp101?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[99]] /* dc.retRes[4].m_flow_nominal_pos PARAM */):1.0));
    tmp100 = 0.0;
    tmp98 = GreaterZC((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* dc.roo.air.cfd.u[19] variable */)), 0.0, tmp99, tmp100, data->simulationInfo->storedRelations[13]);
    data->simulationInfo->relations[start_index] = tmp98;
    current_index++;

    start_index = current_index;
    tmp103 = 1.0;
    tmp104 = 1.0;
    tmp102 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[376]] /* dc.weaDat.add30Min.y variable */), (data->simulationInfo->realVarsPre[574] /* dc.weaDat.conTimMin.tNext DISCRETE */), tmp103, tmp104, data->simulationInfo->storedRelations[14]);
    data->simulationInfo->relations[start_index] = tmp102;
    current_index++;

    start_index = current_index;
    tmp106 = 1.0;
    tmp107 = 1.0;
    tmp105 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[430]] /* dc.weaDat.weaBus.cloTim variable */), (data->simulationInfo->realVarsPre[573] /* dc.weaDat.conTim.tNext DISCRETE */), tmp106, tmp107, data->simulationInfo->storedRelations[15]);
    data->simulationInfo->relations[start_index] = tmp105;
    current_index++;
  } else {
    start_index = current_index;
    data->simulationInfo->relations[start_index] = (data->localData[0]->timeValue >= (data->simulationInfo->realVarsPre[575] /* fanTable.nextTimeEvent DISCRETE */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (data->localData[0]->timeValue >= (data->simulationInfo->realVarsPre[448] /* TsupTable.nextTimeEvent DISCRETE */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[169]] /* dc.roo.air.cfd.u[10] variable */) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[176]] /* dc.roo.air.cfd.u[17] variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[177]] /* dc.roo.air.cfd.u[18] variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[171]] /* dc.roo.air.cfd.u[12] variable */) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[175]] /* dc.roo.air.cfd.u[16] variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[172]] /* dc.roo.air.cfd.u[13] variable */) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[180]] /* dc.roo.air.cfd.u[21] variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[173]] /* dc.roo.air.cfd.u[14] variable */) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[174]] /* dc.roo.air.cfd.u[15] variable */) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[179]] /* dc.roo.air.cfd.u[20] variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* dc.roo.air.cfd.u[11] variable */) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* dc.roo.air.cfd.u[19] variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[376]] /* dc.weaDat.add30Min.y variable */) > (data->simulationInfo->realVarsPre[574] /* dc.weaDat.conTimMin.tNext DISCRETE */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[430]] /* dc.weaDat.weaBus.cloTim variable */) > (data->simulationInfo->realVarsPre[573] /* dc.weaDat.conTim.tNext DISCRETE */));
    current_index++;
  }
  
  return 0;
}

#if defined(__cplusplus)
}
#endif
