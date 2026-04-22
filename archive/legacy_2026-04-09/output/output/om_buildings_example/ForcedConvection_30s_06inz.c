/* Initialization */
#include "ForcedConvection_30s_model.h"
#include "ForcedConvection_30s_11mix.h"
#include "ForcedConvection_30s_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void ForcedConvection_30s_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
roo.irRadGai.conExt[1].Q_flow = 0.0
*/
void ForcedConvection_30s_eqFunction_1(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[123]] /* roo.irRadGai.conExt[1].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1;
}

/*
equation index: 2
type: SIMPLE_ASSIGN
roo.irRadGai.conExtWin[1].Q_flow = 0.0
*/
void ForcedConvection_30s_eqFunction_2(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[125]] /* roo.irRadGai.conExtWin[1].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 2;
}

/*
equation index: 3
type: SIMPLE_ASSIGN
roo.irRadGai.conExtWinFra[1].Q_flow = 0.0
*/
void ForcedConvection_30s_eqFunction_3(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[127]] /* roo.irRadGai.conExtWinFra[1].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 3;
}

/*
equation index: 4
type: SIMPLE_ASSIGN
roo.irRadGai.conPar_a[1].Q_flow = 0.0
*/
void ForcedConvection_30s_eqFunction_4(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[129]] /* roo.irRadGai.conPar_a[1].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 4;
}

/*
equation index: 5
type: SIMPLE_ASSIGN
roo.irRadGai.conPar_b[1].Q_flow = 0.0
*/
void ForcedConvection_30s_eqFunction_5(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[131]] /* roo.irRadGai.conPar_b[1].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 5;
}

/*
equation index: 6
type: SIMPLE_ASSIGN
roo.irRadGai.conBou[1].Q_flow = 0.0
*/
void ForcedConvection_30s_eqFunction_6(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[121]] /* roo.irRadGai.conBou[1].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 6;
}

/*
equation index: 7
type: SIMPLE_ASSIGN
roo.irRadExc.conExt[1].Q_flow = 0.0
*/
void ForcedConvection_30s_eqFunction_7(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[106]] /* roo.irRadExc.conExt[1].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 7;
}

/*
equation index: 8
type: SIMPLE_ASSIGN
roo.irRadExc.conExtWin[1].Q_flow = 0.0
*/
void ForcedConvection_30s_eqFunction_8(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[107]] /* roo.irRadExc.conExtWin[1].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 8;
}

/*
equation index: 9
type: SIMPLE_ASSIGN
roo.irRadExc.conExtWinFra[1].Q_flow = 0.0
*/
void ForcedConvection_30s_eqFunction_9(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[108]] /* roo.irRadExc.conExtWinFra[1].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 9;
}

/*
equation index: 10
type: SIMPLE_ASSIGN
roo.irRadExc.conPar_a[1].Q_flow = 0.0
*/
void ForcedConvection_30s_eqFunction_10(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[109]] /* roo.irRadExc.conPar_a[1].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 10;
}

/*
equation index: 11
type: SIMPLE_ASSIGN
roo.irRadExc.conPar_b[1].Q_flow = 0.0
*/
void ForcedConvection_30s_eqFunction_11(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[110]] /* roo.irRadExc.conPar_b[1].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 11;
}

/*
equation index: 12
type: SIMPLE_ASSIGN
roo.irRadExc.conBou[1].Q_flow = 0.0
*/
void ForcedConvection_30s_eqFunction_12(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[105]] /* roo.irRadExc.conBou[1].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 12;
}

/*
equation index: 13
type: SIMPLE_ASSIGN
roo.radTem.conExt[1].Q_flow = 0.0
*/
void ForcedConvection_30s_eqFunction_13(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[160]] /* roo.radTem.conExt[1].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 13;
}

/*
equation index: 14
type: SIMPLE_ASSIGN
roo.radTem.conExtWin[1].Q_flow = 0.0
*/
void ForcedConvection_30s_eqFunction_14(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[162]] /* roo.radTem.conExtWin[1].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 14;
}

/*
equation index: 15
type: SIMPLE_ASSIGN
roo.radTem.conExtWinFra[1].Q_flow = 0.0
*/
void ForcedConvection_30s_eqFunction_15(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[164]] /* roo.radTem.conExtWinFra[1].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 15;
}

/*
equation index: 16
type: SIMPLE_ASSIGN
roo.radTem.conPar_a[1].Q_flow = 0.0
*/
void ForcedConvection_30s_eqFunction_16(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[166]] /* roo.radTem.conPar_a[1].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 16;
}

/*
equation index: 17
type: SIMPLE_ASSIGN
roo.radTem.conPar_b[1].Q_flow = 0.0
*/
void ForcedConvection_30s_eqFunction_17(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[168]] /* roo.radTem.conPar_b[1].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 17;
}

/*
equation index: 18
type: SIMPLE_ASSIGN
roo.radTem.conBou[1].Q_flow = 0.0
*/
void ForcedConvection_30s_eqFunction_18(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[158]] /* roo.radTem.conBou[1].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 18;
}

/*
equation index: 19
type: SIMPLE_ASSIGN
roo.radTem.glaUns_internal[1].Q_flow = 0.0
*/
void ForcedConvection_30s_eqFunction_19(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,19};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* roo.radTem.glaUns_internal[1].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 19;
}

/*
equation index: 20
type: SIMPLE_ASSIGN
roo.radTem.glaSha_internal[1].Q_flow = 0.0
*/
void ForcedConvection_30s_eqFunction_20(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,20};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[176]] /* roo.radTem.glaSha_internal[1].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 20;
}

/*
equation index: 21
type: SIMPLE_ASSIGN
roo.radTem.sha_internal[1].Q_flow = 0.0
*/
void ForcedConvection_30s_eqFunction_21(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,21};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[180]] /* roo.radTem.sha_internal[1].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 21;
}

/*
equation index: 22
type: SIMPLE_ASSIGN
roo.air.fluInt.C_inflow_internal[1] = 0.0
*/
void ForcedConvection_30s_eqFunction_22(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,22};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[73]] /* roo.air.fluInt.C_inflow_internal[1] variable */) = 0.0;
  threadData->lastEquationSolved = 22;
}

/*
equation index: 23
type: SIMPLE_ASSIGN
roo.air.fluInt.C_inflow_internal[2] = 0.0
*/
void ForcedConvection_30s_eqFunction_23(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,23};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[74]] /* roo.air.fluInt.C_inflow_internal[2] variable */) = 0.0;
  threadData->lastEquationSolved = 23;
}

/*
equation index: 24
type: SIMPLE_ASSIGN
roo.air.fluInt.C_outflow_internal[1] = 0.0
*/
void ForcedConvection_30s_eqFunction_24(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,24};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[75]] /* roo.air.fluInt.C_outflow_internal[1] variable */) = 0.0;
  threadData->lastEquationSolved = 24;
}

/*
equation index: 25
type: SIMPLE_ASSIGN
roo.air.fluInt.C_outflow_internal[2] = 0.0
*/
void ForcedConvection_30s_eqFunction_25(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,25};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[76]] /* roo.air.fluInt.C_outflow_internal[2] variable */) = 0.0;
  threadData->lastEquationSolved = 25;
}

/*
equation index: 26
type: SIMPLE_ASSIGN
roo.irRadGai.shaSig[1].u_in_internal = 0.0
*/
void ForcedConvection_30s_eqFunction_26(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,26};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[152]] /* roo.irRadGai.shaSig[1].u_in_internal variable */) = 0.0;
  threadData->lastEquationSolved = 26;
}

/*
equation index: 27
type: SIMPLE_ASSIGN
roo.irRadGai.conExt[1].T = 293.15
*/
void ForcedConvection_30s_eqFunction_27(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,27};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[124]] /* roo.irRadGai.conExt[1].T variable */) = 293.15;
  threadData->lastEquationSolved = 27;
}

/*
equation index: 28
type: SIMPLE_ASSIGN
roo.irRadGai.conExtWin[1].T = 293.15
*/
void ForcedConvection_30s_eqFunction_28(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,28};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[126]] /* roo.irRadGai.conExtWin[1].T variable */) = 293.15;
  threadData->lastEquationSolved = 28;
}

/*
equation index: 29
type: SIMPLE_ASSIGN
roo.irRadGai.conPar_a[1].T = 293.15
*/
void ForcedConvection_30s_eqFunction_29(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,29};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[130]] /* roo.irRadGai.conPar_a[1].T variable */) = 293.15;
  threadData->lastEquationSolved = 29;
}

/*
equation index: 30
type: SIMPLE_ASSIGN
roo.irRadGai.conPar_b[1].T = 293.15
*/
void ForcedConvection_30s_eqFunction_30(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,30};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[132]] /* roo.irRadGai.conPar_b[1].T variable */) = 293.15;
  threadData->lastEquationSolved = 30;
}

/*
equation index: 31
type: SIMPLE_ASSIGN
roo.irRadGai.conBou[1].T = 293.15
*/
void ForcedConvection_30s_eqFunction_31(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,31};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[122]] /* roo.irRadGai.conBou[1].T variable */) = 293.15;
  threadData->lastEquationSolved = 31;
}

/*
equation index: 32
type: SIMPLE_ASSIGN
roo.irRadGai.conExtWinFra[1].T = 293.15
*/
void ForcedConvection_30s_eqFunction_32(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,32};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[128]] /* roo.irRadGai.conExtWinFra[1].T variable */) = 293.15;
  threadData->lastEquationSolved = 32;
}

/*
equation index: 33
type: SIMPLE_ASSIGN
roo.irRadExc.JInConExtWin_internal[1] = 0.0
*/
void ForcedConvection_30s_eqFunction_33(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,33};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[97]] /* roo.irRadExc.JInConExtWin_internal[1] variable */) = 0.0;
  threadData->lastEquationSolved = 33;
}

/*
equation index: 34
type: SIMPLE_ASSIGN
roo.irRadExc.JOutConExtWin[1] = 0.0
*/
void ForcedConvection_30s_eqFunction_34(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,34};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[98]] /* roo.irRadExc.JOutConExtWin[1] variable */) = 0.0;
  threadData->lastEquationSolved = 34;
}

/*
equation index: 35
type: SIMPLE_ASSIGN
roo.radTem.uSha_internal[1] = 0.0
*/
void ForcedConvection_30s_eqFunction_35(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,35};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[182]] /* roo.radTem.uSha_internal[1] variable */) = 0.0;
  threadData->lastEquationSolved = 35;
}

/*
equation index: 36
type: SIMPLE_ASSIGN
roo.radTem.glaSha_internal[1].T = 293.15
*/
void ForcedConvection_30s_eqFunction_36(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,36};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[177]] /* roo.radTem.glaSha_internal[1].T variable */) = 293.15;
  threadData->lastEquationSolved = 36;
}

/*
equation index: 37
type: SIMPLE_ASSIGN
roo.radTem.sha_internal[1].T = 293.15
*/
void ForcedConvection_30s_eqFunction_37(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,37};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[181]] /* roo.radTem.sha_internal[1].T variable */) = 293.15;
  threadData->lastEquationSolved = 37;
}

/*
equation index: 38
type: SIMPLE_ASSIGN
weaDat.tWetBul_TDryBulXi.TDryBul_degC = 0.0
*/
void ForcedConvection_30s_eqFunction_38(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,38};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[225]] /* weaDat.tWetBul_TDryBulXi.TDryBul_degC variable */) = 0.0;
  threadData->lastEquationSolved = 38;
}

/*
equation index: 39
type: SIMPLE_ASSIGN
weaDat.tWetBul_TDryBulXi.rh_per = 0.0
*/
void ForcedConvection_30s_eqFunction_39(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,39};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[229]] /* weaDat.tWetBul_TDryBulXi.rh_per variable */) = 0.0;
  threadData->lastEquationSolved = 39;
}

/*
equation index: 40
type: SIMPLE_ASSIGN
weaDat.con30Min.y = 1800.0
*/
void ForcedConvection_30s_eqFunction_40(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,40};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[187]] /* weaDat.con30Min.y variable */) = 1800.0;
  threadData->lastEquationSolved = 40;
}

/*
equation index: 41
type: SIMPLE_ASSIGN
roo.air.QCon_flow = roo.heaGai.AFlo * qConGai_flow.k
*/
void ForcedConvection_30s_eqFunction_41(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,41};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[57]] /* roo.air.QCon_flow variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[478]] /* roo.heaGai.AFlo PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[16]] /* qConGai_flow.k PARAM */));
  threadData->lastEquationSolved = 41;
}

/*
equation index: 42
type: SIMPLE_ASSIGN
roo.air.cfd.u[7] = roo.air.QTotCon_flow.k2 * roo.air.QCon_flow
*/
void ForcedConvection_30s_eqFunction_42(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,42};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[64]] /* roo.air.cfd.u[7] variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[36]] /* roo.air.QTotCon_flow.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[57]] /* roo.air.QCon_flow variable */));
  threadData->lastEquationSolved = 42;
}
extern void ForcedConvection_30s_eqFunction_526(DATA *data, threadData_t *threadData);


/*
equation index: 44
type: SIMPLE_ASSIGN
roo.air.cfd.uWri[7] = roo.air.cfd.u[7]
*/
void ForcedConvection_30s_eqFunction_44(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,44};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[273]] /* roo.air.cfd.uWri[7] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[64]] /* roo.air.cfd.u[7] variable */);
  threadData->lastEquationSolved = 44;
}

/*
equation index: 45
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uWri[7] = roo.air.cfd.uWri[7]
*/
void ForcedConvection_30s_eqFunction_45(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,45};
  (data->simulationInfo->realVarsPre[273] /* roo.air.cfd.uWri[7] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[273]] /* roo.air.cfd.uWri[7] DISCRETE */);
  threadData->lastEquationSolved = 45;
}

/*
equation index: 46
type: SIMPLE_ASSIGN
roo.heaGai.QRad_flow = roo.heaGai.AFlo * qRadGai_flow.k
*/
void ForcedConvection_30s_eqFunction_46(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,46};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[81]] /* roo.heaGai.QRad_flow variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[478]] /* roo.heaGai.AFlo PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[18]] /* qRadGai_flow.k PARAM */));
  threadData->lastEquationSolved = 46;
}

/*
equation index: 47
type: SIMPLE_ASSIGN
roo.irRadGai.Q_flow = roo.add.k2 * roo.heaGai.QRad_flow
*/
void ForcedConvection_30s_eqFunction_47(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,47};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[120]] /* roo.irRadGai.Q_flow variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[22]] /* roo.add.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[81]] /* roo.heaGai.QRad_flow variable */));
  threadData->lastEquationSolved = 47;
}

/*
equation index: 48
type: SIMPLE_ASSIGN
roo.irRadExc.T4Opa[6] = -2.2155463946313015e10 - (-1.0076963532349998e8) * TWal[6].T
*/
void ForcedConvection_30s_eqFunction_48(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,48};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[104]] /* roo.irRadExc.T4Opa[6] variable */) = -2.2155463946313015e10 - ((-1.0076963532349998e8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[7]] /* TWal[6].T PARAM */)));
  threadData->lastEquationSolved = 48;
}

/*
equation index: 49
type: SIMPLE_ASSIGN
roo.irRadExc.T4Opa[5] = -2.2155463946313015e10 - (-1.0076963532349998e8) * TWal[5].T
*/
void ForcedConvection_30s_eqFunction_49(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,49};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[103]] /* roo.irRadExc.T4Opa[5] variable */) = -2.2155463946313015e10 - ((-1.0076963532349998e8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[6]] /* TWal[5].T PARAM */)));
  threadData->lastEquationSolved = 49;
}

/*
equation index: 50
type: SIMPLE_ASSIGN
roo.irRadExc.T4Opa[4] = -2.2155463946313015e10 - (-1.0076963532349998e8) * TWal[4].T
*/
void ForcedConvection_30s_eqFunction_50(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,50};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[102]] /* roo.irRadExc.T4Opa[4] variable */) = -2.2155463946313015e10 - ((-1.0076963532349998e8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5]] /* TWal[4].T PARAM */)));
  threadData->lastEquationSolved = 50;
}

/*
equation index: 51
type: SIMPLE_ASSIGN
roo.irRadExc.T4Opa[3] = -2.2155463946313015e10 - (-1.0076963532349998e8) * TWal[3].T
*/
void ForcedConvection_30s_eqFunction_51(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,51};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[101]] /* roo.irRadExc.T4Opa[3] variable */) = -2.2155463946313015e10 - ((-1.0076963532349998e8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4]] /* TWal[3].T PARAM */)));
  threadData->lastEquationSolved = 51;
}

/*
equation index: 52
type: SIMPLE_ASSIGN
roo.irRadExc.T4Opa[2] = -2.2155463946313015e10 - (-1.0076963532349998e8) * TWal[2].T
*/
void ForcedConvection_30s_eqFunction_52(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,52};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[100]] /* roo.irRadExc.T4Opa[2] variable */) = -2.2155463946313015e10 - ((-1.0076963532349998e8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3]] /* TWal[2].T PARAM */)));
  threadData->lastEquationSolved = 52;
}

/*
equation index: 53
type: SIMPLE_ASSIGN
roo.irRadExc.T4Opa[1] = -2.2155463946313015e10 - (-1.0076963532349998e8) * TWal[1].T
*/
void ForcedConvection_30s_eqFunction_53(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,53};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[99]] /* roo.irRadExc.T4Opa[1] variable */) = -2.2155463946313015e10 - ((-1.0076963532349998e8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2]] /* TWal[1].T PARAM */)));
  threadData->lastEquationSolved = 53;
}

/*
equation index: 54
type: SIMPLE_ASSIGN
roo.irRadGai.AEpsConExtWinUns[1] = roo.irRadGai.AConExtWinGla[1] * roo.irRadGai.epsConExtWinUns[1]
*/
void ForcedConvection_30s_eqFunction_54(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,54};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[118]] /* roo.irRadGai.AEpsConExtWinUns[1] variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[777]] /* roo.irRadGai.AConExtWinGla[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[973]] /* roo.irRadGai.epsConExtWinUns[1] PARAM */));
  threadData->lastEquationSolved = 54;
}

/*
equation index: 55
type: SIMPLE_ASSIGN
roo.irRadExc.AOpa[6] = roo.irRadExc.ASurBou[6]
*/
void ForcedConvection_30s_eqFunction_55(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,55};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[496]] /* roo.irRadExc.AOpa[6] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[502]] /* roo.irRadExc.ASurBou[6] PARAM */);
  threadData->lastEquationSolved = 55;
}

/*
equation index: 56
type: SIMPLE_ASSIGN
roo.irRadExc.kOpa[6] = 5.6703744191844314e-8 * roo.irRadExc.epsSurBou[6] * roo.irRadExc.AOpa[6]
*/
void ForcedConvection_30s_eqFunction_56(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,56};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[736]] /* roo.irRadExc.kOpa[6] PARAM */) = (5.6703744191844314e-8) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[730]] /* roo.irRadExc.epsSurBou[6] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[496]] /* roo.irRadExc.AOpa[6] PARAM */)));
  threadData->lastEquationSolved = 56;
}

/*
equation index: 57
type: SIMPLE_ASSIGN
roo.irRadExc.kOpaInv[6] = 1.0 / roo.irRadExc.kOpa[6]
*/
void ForcedConvection_30s_eqFunction_57(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,57};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[742]] /* roo.irRadExc.kOpaInv[6] PARAM */) = DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[736]] /* roo.irRadExc.kOpa[6] PARAM */),"roo.irRadExc.kOpa[6]",equationIndexes);
  threadData->lastEquationSolved = 57;
}

/*
equation index: 58
type: SIMPLE_ASSIGN
roo.irRadExc.A[6] = roo.irRadExc.AOpa[6]
*/
void ForcedConvection_30s_eqFunction_58(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,58};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[484]] /* roo.irRadExc.A[6] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[496]] /* roo.irRadExc.AOpa[6] PARAM */);
  threadData->lastEquationSolved = 58;
}

/*
equation index: 59
type: SIMPLE_ASSIGN
$START.roo.irRadExc.G[6] = 335.01273601689667 * roo.irRadExc.A[6]
*/
void ForcedConvection_30s_eqFunction_59(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,59};
  ((modelica_real *)((data->modelData->realVarsData[90] /* roo.irRadExc.G[6] variable */).attribute .start.data))[0] = (335.01273601689667) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[484]] /* roo.irRadExc.A[6] PARAM */));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[90]] /* roo.irRadExc.G[6] variable */) = ((modelica_real *)((data->modelData->realVarsData[90] /* roo.irRadExc.G[6] variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[90].info /* roo.irRadExc.G[6] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[90]] /* roo.irRadExc.G[6] variable */));
  threadData->lastEquationSolved = 59;
}

/*
equation index: 60
type: SIMPLE_ASSIGN
$START.roo.irRadExc.J[6] = (-335.01273601689667) * roo.irRadExc.A[6]
*/
void ForcedConvection_30s_eqFunction_60(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,60};
  ((modelica_real *)((data->modelData->realVarsData[96] /* roo.irRadExc.J[6] variable */).attribute .start.data))[0] = (-335.01273601689667) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[484]] /* roo.irRadExc.A[6] PARAM */));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[96]] /* roo.irRadExc.J[6] variable */) = ((modelica_real *)((data->modelData->realVarsData[96] /* roo.irRadExc.J[6] variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[96].info /* roo.irRadExc.J[6] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[96]] /* roo.irRadExc.J[6] variable */));
  threadData->lastEquationSolved = 60;
}

/*
equation index: 61
type: SIMPLE_ASSIGN
roo.irRadExc.epsOpa[6] = roo.irRadExc.epsSurBou[6]
*/
void ForcedConvection_30s_eqFunction_61(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,61};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[724]] /* roo.irRadExc.epsOpa[6] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[730]] /* roo.irRadExc.epsSurBou[6] PARAM */);
  threadData->lastEquationSolved = 61;
}

/*
equation index: 62
type: SIMPLE_ASSIGN
roo.irRadExc.rhoOpa[6] = 1.0 - roo.irRadExc.epsOpa[6]
*/
void ForcedConvection_30s_eqFunction_62(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,62};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[748]] /* roo.irRadExc.rhoOpa[6] PARAM */) = 1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[724]] /* roo.irRadExc.epsOpa[6] PARAM */);
  threadData->lastEquationSolved = 62;
}

/*
equation index: 63
type: SIMPLE_ASSIGN
roo.irRadExc.AOpa[5] = roo.irRadExc.ASurBou[5]
*/
void ForcedConvection_30s_eqFunction_63(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,63};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[495]] /* roo.irRadExc.AOpa[5] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[501]] /* roo.irRadExc.ASurBou[5] PARAM */);
  threadData->lastEquationSolved = 63;
}

/*
equation index: 64
type: SIMPLE_ASSIGN
roo.irRadExc.kOpa[5] = 5.6703744191844314e-8 * roo.irRadExc.epsSurBou[5] * roo.irRadExc.AOpa[5]
*/
void ForcedConvection_30s_eqFunction_64(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,64};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[735]] /* roo.irRadExc.kOpa[5] PARAM */) = (5.6703744191844314e-8) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[729]] /* roo.irRadExc.epsSurBou[5] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[495]] /* roo.irRadExc.AOpa[5] PARAM */)));
  threadData->lastEquationSolved = 64;
}

/*
equation index: 65
type: SIMPLE_ASSIGN
roo.irRadExc.kOpaInv[5] = 1.0 / roo.irRadExc.kOpa[5]
*/
void ForcedConvection_30s_eqFunction_65(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,65};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[741]] /* roo.irRadExc.kOpaInv[5] PARAM */) = DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[735]] /* roo.irRadExc.kOpa[5] PARAM */),"roo.irRadExc.kOpa[5]",equationIndexes);
  threadData->lastEquationSolved = 65;
}

/*
equation index: 66
type: SIMPLE_ASSIGN
roo.irRadExc.A[5] = roo.irRadExc.AOpa[5]
*/
void ForcedConvection_30s_eqFunction_66(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,66};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[483]] /* roo.irRadExc.A[5] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[495]] /* roo.irRadExc.AOpa[5] PARAM */);
  threadData->lastEquationSolved = 66;
}

/*
equation index: 67
type: SIMPLE_ASSIGN
$START.roo.irRadExc.G[5] = 335.01273601689667 * roo.irRadExc.A[5]
*/
void ForcedConvection_30s_eqFunction_67(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,67};
  ((modelica_real *)((data->modelData->realVarsData[89] /* roo.irRadExc.G[5] variable */).attribute .start.data))[0] = (335.01273601689667) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[483]] /* roo.irRadExc.A[5] PARAM */));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[89]] /* roo.irRadExc.G[5] variable */) = ((modelica_real *)((data->modelData->realVarsData[89] /* roo.irRadExc.G[5] variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[89].info /* roo.irRadExc.G[5] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[89]] /* roo.irRadExc.G[5] variable */));
  threadData->lastEquationSolved = 67;
}

/*
equation index: 68
type: SIMPLE_ASSIGN
$START.roo.irRadExc.J[5] = (-335.01273601689667) * roo.irRadExc.A[5]
*/
void ForcedConvection_30s_eqFunction_68(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,68};
  ((modelica_real *)((data->modelData->realVarsData[95] /* roo.irRadExc.J[5] variable */).attribute .start.data))[0] = (-335.01273601689667) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[483]] /* roo.irRadExc.A[5] PARAM */));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[95]] /* roo.irRadExc.J[5] variable */) = ((modelica_real *)((data->modelData->realVarsData[95] /* roo.irRadExc.J[5] variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[95].info /* roo.irRadExc.J[5] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[95]] /* roo.irRadExc.J[5] variable */));
  threadData->lastEquationSolved = 68;
}

/*
equation index: 69
type: SIMPLE_ASSIGN
roo.irRadExc.epsOpa[5] = roo.irRadExc.epsSurBou[5]
*/
void ForcedConvection_30s_eqFunction_69(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,69};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[723]] /* roo.irRadExc.epsOpa[5] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[729]] /* roo.irRadExc.epsSurBou[5] PARAM */);
  threadData->lastEquationSolved = 69;
}

/*
equation index: 70
type: SIMPLE_ASSIGN
roo.irRadExc.rhoOpa[5] = 1.0 - roo.irRadExc.epsOpa[5]
*/
void ForcedConvection_30s_eqFunction_70(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,70};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[747]] /* roo.irRadExc.rhoOpa[5] PARAM */) = 1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[723]] /* roo.irRadExc.epsOpa[5] PARAM */);
  threadData->lastEquationSolved = 70;
}

/*
equation index: 71
type: SIMPLE_ASSIGN
roo.irRadExc.AOpa[4] = roo.irRadExc.ASurBou[4]
*/
void ForcedConvection_30s_eqFunction_71(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,71};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[494]] /* roo.irRadExc.AOpa[4] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[500]] /* roo.irRadExc.ASurBou[4] PARAM */);
  threadData->lastEquationSolved = 71;
}

/*
equation index: 72
type: SIMPLE_ASSIGN
roo.irRadExc.kOpa[4] = 5.6703744191844314e-8 * roo.irRadExc.epsSurBou[4] * roo.irRadExc.AOpa[4]
*/
void ForcedConvection_30s_eqFunction_72(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,72};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[734]] /* roo.irRadExc.kOpa[4] PARAM */) = (5.6703744191844314e-8) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[728]] /* roo.irRadExc.epsSurBou[4] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[494]] /* roo.irRadExc.AOpa[4] PARAM */)));
  threadData->lastEquationSolved = 72;
}

/*
equation index: 73
type: SIMPLE_ASSIGN
roo.irRadExc.kOpaInv[4] = 1.0 / roo.irRadExc.kOpa[4]
*/
void ForcedConvection_30s_eqFunction_73(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,73};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[740]] /* roo.irRadExc.kOpaInv[4] PARAM */) = DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[734]] /* roo.irRadExc.kOpa[4] PARAM */),"roo.irRadExc.kOpa[4]",equationIndexes);
  threadData->lastEquationSolved = 73;
}

/*
equation index: 74
type: SIMPLE_ASSIGN
roo.irRadExc.A[4] = roo.irRadExc.AOpa[4]
*/
void ForcedConvection_30s_eqFunction_74(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,74};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[482]] /* roo.irRadExc.A[4] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[494]] /* roo.irRadExc.AOpa[4] PARAM */);
  threadData->lastEquationSolved = 74;
}

/*
equation index: 75
type: SIMPLE_ASSIGN
$START.roo.irRadExc.G[4] = 335.01273601689667 * roo.irRadExc.A[4]
*/
void ForcedConvection_30s_eqFunction_75(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,75};
  ((modelica_real *)((data->modelData->realVarsData[88] /* roo.irRadExc.G[4] variable */).attribute .start.data))[0] = (335.01273601689667) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[482]] /* roo.irRadExc.A[4] PARAM */));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* roo.irRadExc.G[4] variable */) = ((modelica_real *)((data->modelData->realVarsData[88] /* roo.irRadExc.G[4] variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[88].info /* roo.irRadExc.G[4] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* roo.irRadExc.G[4] variable */));
  threadData->lastEquationSolved = 75;
}

/*
equation index: 76
type: SIMPLE_ASSIGN
$START.roo.irRadExc.J[4] = (-335.01273601689667) * roo.irRadExc.A[4]
*/
void ForcedConvection_30s_eqFunction_76(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,76};
  ((modelica_real *)((data->modelData->realVarsData[94] /* roo.irRadExc.J[4] variable */).attribute .start.data))[0] = (-335.01273601689667) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[482]] /* roo.irRadExc.A[4] PARAM */));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[94]] /* roo.irRadExc.J[4] variable */) = ((modelica_real *)((data->modelData->realVarsData[94] /* roo.irRadExc.J[4] variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[94].info /* roo.irRadExc.J[4] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[94]] /* roo.irRadExc.J[4] variable */));
  threadData->lastEquationSolved = 76;
}

/*
equation index: 77
type: SIMPLE_ASSIGN
roo.irRadExc.epsOpa[4] = roo.irRadExc.epsSurBou[4]
*/
void ForcedConvection_30s_eqFunction_77(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,77};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[722]] /* roo.irRadExc.epsOpa[4] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[728]] /* roo.irRadExc.epsSurBou[4] PARAM */);
  threadData->lastEquationSolved = 77;
}

/*
equation index: 78
type: SIMPLE_ASSIGN
roo.irRadExc.rhoOpa[4] = 1.0 - roo.irRadExc.epsOpa[4]
*/
void ForcedConvection_30s_eqFunction_78(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,78};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[746]] /* roo.irRadExc.rhoOpa[4] PARAM */) = 1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[722]] /* roo.irRadExc.epsOpa[4] PARAM */);
  threadData->lastEquationSolved = 78;
}

/*
equation index: 79
type: SIMPLE_ASSIGN
roo.irRadExc.AOpa[3] = roo.irRadExc.ASurBou[3]
*/
void ForcedConvection_30s_eqFunction_79(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,79};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[493]] /* roo.irRadExc.AOpa[3] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[499]] /* roo.irRadExc.ASurBou[3] PARAM */);
  threadData->lastEquationSolved = 79;
}

/*
equation index: 80
type: SIMPLE_ASSIGN
roo.irRadExc.kOpa[3] = 5.6703744191844314e-8 * roo.irRadExc.epsSurBou[3] * roo.irRadExc.AOpa[3]
*/
void ForcedConvection_30s_eqFunction_80(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,80};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[733]] /* roo.irRadExc.kOpa[3] PARAM */) = (5.6703744191844314e-8) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[727]] /* roo.irRadExc.epsSurBou[3] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[493]] /* roo.irRadExc.AOpa[3] PARAM */)));
  threadData->lastEquationSolved = 80;
}

/*
equation index: 81
type: SIMPLE_ASSIGN
roo.irRadExc.kOpaInv[3] = 1.0 / roo.irRadExc.kOpa[3]
*/
void ForcedConvection_30s_eqFunction_81(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,81};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[739]] /* roo.irRadExc.kOpaInv[3] PARAM */) = DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[733]] /* roo.irRadExc.kOpa[3] PARAM */),"roo.irRadExc.kOpa[3]",equationIndexes);
  threadData->lastEquationSolved = 81;
}

/*
equation index: 82
type: SIMPLE_ASSIGN
roo.irRadExc.A[3] = roo.irRadExc.AOpa[3]
*/
void ForcedConvection_30s_eqFunction_82(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,82};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[481]] /* roo.irRadExc.A[3] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[493]] /* roo.irRadExc.AOpa[3] PARAM */);
  threadData->lastEquationSolved = 82;
}

/*
equation index: 83
type: SIMPLE_ASSIGN
$START.roo.irRadExc.G[3] = 335.01273601689667 * roo.irRadExc.A[3]
*/
void ForcedConvection_30s_eqFunction_83(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,83};
  ((modelica_real *)((data->modelData->realVarsData[87] /* roo.irRadExc.G[3] variable */).attribute .start.data))[0] = (335.01273601689667) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[481]] /* roo.irRadExc.A[3] PARAM */));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[87]] /* roo.irRadExc.G[3] variable */) = ((modelica_real *)((data->modelData->realVarsData[87] /* roo.irRadExc.G[3] variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[87].info /* roo.irRadExc.G[3] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[87]] /* roo.irRadExc.G[3] variable */));
  threadData->lastEquationSolved = 83;
}

/*
equation index: 84
type: SIMPLE_ASSIGN
$START.roo.irRadExc.J[3] = (-335.01273601689667) * roo.irRadExc.A[3]
*/
void ForcedConvection_30s_eqFunction_84(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,84};
  ((modelica_real *)((data->modelData->realVarsData[93] /* roo.irRadExc.J[3] variable */).attribute .start.data))[0] = (-335.01273601689667) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[481]] /* roo.irRadExc.A[3] PARAM */));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[93]] /* roo.irRadExc.J[3] variable */) = ((modelica_real *)((data->modelData->realVarsData[93] /* roo.irRadExc.J[3] variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[93].info /* roo.irRadExc.J[3] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[93]] /* roo.irRadExc.J[3] variable */));
  threadData->lastEquationSolved = 84;
}

/*
equation index: 85
type: SIMPLE_ASSIGN
roo.irRadExc.epsOpa[3] = roo.irRadExc.epsSurBou[3]
*/
void ForcedConvection_30s_eqFunction_85(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,85};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[721]] /* roo.irRadExc.epsOpa[3] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[727]] /* roo.irRadExc.epsSurBou[3] PARAM */);
  threadData->lastEquationSolved = 85;
}

/*
equation index: 86
type: SIMPLE_ASSIGN
roo.irRadExc.rhoOpa[3] = 1.0 - roo.irRadExc.epsOpa[3]
*/
void ForcedConvection_30s_eqFunction_86(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,86};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[745]] /* roo.irRadExc.rhoOpa[3] PARAM */) = 1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[721]] /* roo.irRadExc.epsOpa[3] PARAM */);
  threadData->lastEquationSolved = 86;
}

/*
equation index: 87
type: SIMPLE_ASSIGN
roo.irRadExc.AOpa[2] = roo.irRadExc.ASurBou[2]
*/
void ForcedConvection_30s_eqFunction_87(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,87};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[492]] /* roo.irRadExc.AOpa[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[498]] /* roo.irRadExc.ASurBou[2] PARAM */);
  threadData->lastEquationSolved = 87;
}

/*
equation index: 88
type: SIMPLE_ASSIGN
roo.irRadExc.kOpa[2] = 5.6703744191844314e-8 * roo.irRadExc.epsSurBou[2] * roo.irRadExc.AOpa[2]
*/
void ForcedConvection_30s_eqFunction_88(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,88};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[732]] /* roo.irRadExc.kOpa[2] PARAM */) = (5.6703744191844314e-8) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[726]] /* roo.irRadExc.epsSurBou[2] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[492]] /* roo.irRadExc.AOpa[2] PARAM */)));
  threadData->lastEquationSolved = 88;
}

/*
equation index: 89
type: SIMPLE_ASSIGN
roo.irRadExc.kOpaInv[2] = 1.0 / roo.irRadExc.kOpa[2]
*/
void ForcedConvection_30s_eqFunction_89(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,89};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[738]] /* roo.irRadExc.kOpaInv[2] PARAM */) = DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[732]] /* roo.irRadExc.kOpa[2] PARAM */),"roo.irRadExc.kOpa[2]",equationIndexes);
  threadData->lastEquationSolved = 89;
}

/*
equation index: 90
type: SIMPLE_ASSIGN
roo.irRadExc.A[2] = roo.irRadExc.AOpa[2]
*/
void ForcedConvection_30s_eqFunction_90(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,90};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[480]] /* roo.irRadExc.A[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[492]] /* roo.irRadExc.AOpa[2] PARAM */);
  threadData->lastEquationSolved = 90;
}

/*
equation index: 91
type: SIMPLE_ASSIGN
$START.roo.irRadExc.G[2] = 335.01273601689667 * roo.irRadExc.A[2]
*/
void ForcedConvection_30s_eqFunction_91(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,91};
  ((modelica_real *)((data->modelData->realVarsData[86] /* roo.irRadExc.G[2] variable */).attribute .start.data))[0] = (335.01273601689667) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[480]] /* roo.irRadExc.A[2] PARAM */));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[86]] /* roo.irRadExc.G[2] variable */) = ((modelica_real *)((data->modelData->realVarsData[86] /* roo.irRadExc.G[2] variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[86].info /* roo.irRadExc.G[2] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[86]] /* roo.irRadExc.G[2] variable */));
  threadData->lastEquationSolved = 91;
}

/*
equation index: 92
type: SIMPLE_ASSIGN
$START.roo.irRadExc.J[2] = (-335.01273601689667) * roo.irRadExc.A[2]
*/
void ForcedConvection_30s_eqFunction_92(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,92};
  ((modelica_real *)((data->modelData->realVarsData[92] /* roo.irRadExc.J[2] variable */).attribute .start.data))[0] = (-335.01273601689667) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[480]] /* roo.irRadExc.A[2] PARAM */));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[92]] /* roo.irRadExc.J[2] variable */) = ((modelica_real *)((data->modelData->realVarsData[92] /* roo.irRadExc.J[2] variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[92].info /* roo.irRadExc.J[2] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[92]] /* roo.irRadExc.J[2] variable */));
  threadData->lastEquationSolved = 92;
}

/*
equation index: 93
type: SIMPLE_ASSIGN
roo.irRadExc.epsOpa[2] = roo.irRadExc.epsSurBou[2]
*/
void ForcedConvection_30s_eqFunction_93(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,93};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[720]] /* roo.irRadExc.epsOpa[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[726]] /* roo.irRadExc.epsSurBou[2] PARAM */);
  threadData->lastEquationSolved = 93;
}

/*
equation index: 94
type: SIMPLE_ASSIGN
roo.irRadExc.rhoOpa[2] = 1.0 - roo.irRadExc.epsOpa[2]
*/
void ForcedConvection_30s_eqFunction_94(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,94};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[744]] /* roo.irRadExc.rhoOpa[2] PARAM */) = 1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[720]] /* roo.irRadExc.epsOpa[2] PARAM */);
  threadData->lastEquationSolved = 94;
}

/*
equation index: 95
type: SIMPLE_ASSIGN
roo.irRadExc.AOpa[1] = roo.irRadExc.ASurBou[1]
*/
void ForcedConvection_30s_eqFunction_95(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,95};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[491]] /* roo.irRadExc.AOpa[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[497]] /* roo.irRadExc.ASurBou[1] PARAM */);
  threadData->lastEquationSolved = 95;
}

/*
equation index: 96
type: SIMPLE_ASSIGN
roo.irRadExc.kOpa[1] = 5.6703744191844314e-8 * roo.irRadExc.epsSurBou[1] * roo.irRadExc.AOpa[1]
*/
void ForcedConvection_30s_eqFunction_96(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,96};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[731]] /* roo.irRadExc.kOpa[1] PARAM */) = (5.6703744191844314e-8) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[725]] /* roo.irRadExc.epsSurBou[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[491]] /* roo.irRadExc.AOpa[1] PARAM */)));
  threadData->lastEquationSolved = 96;
}

/*
equation index: 97
type: SIMPLE_ASSIGN
roo.irRadExc.kOpaInv[1] = 1.0 / roo.irRadExc.kOpa[1]
*/
void ForcedConvection_30s_eqFunction_97(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,97};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[737]] /* roo.irRadExc.kOpaInv[1] PARAM */) = DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[731]] /* roo.irRadExc.kOpa[1] PARAM */),"roo.irRadExc.kOpa[1]",equationIndexes);
  threadData->lastEquationSolved = 97;
}

/*
equation index: 98
type: SIMPLE_ASSIGN
roo.irRadExc.A[1] = roo.irRadExc.AOpa[1]
*/
void ForcedConvection_30s_eqFunction_98(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,98};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[479]] /* roo.irRadExc.A[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[491]] /* roo.irRadExc.AOpa[1] PARAM */);
  threadData->lastEquationSolved = 98;
}

/*
equation index: 99
type: SIMPLE_ASSIGN
roo.irRadExc.F[1,1] = roo.irRadExc.A[1] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void ForcedConvection_30s_eqFunction_99(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,99};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[503]] /* roo.irRadExc.F[1,1] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[479]] /* roo.irRadExc.A[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[479]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[480]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[481]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[482]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[483]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[484]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 99;
}

/*
equation index: 100
type: SIMPLE_ASSIGN
roo.irRadExc.F[1,2] = roo.irRadExc.A[2] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void ForcedConvection_30s_eqFunction_100(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,100};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[504]] /* roo.irRadExc.F[1,2] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[480]] /* roo.irRadExc.A[2] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[479]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[480]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[481]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[482]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[483]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[484]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 100;
}

/*
equation index: 101
type: SIMPLE_ASSIGN
roo.irRadExc.F[1,3] = roo.irRadExc.A[3] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void ForcedConvection_30s_eqFunction_101(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,101};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[505]] /* roo.irRadExc.F[1,3] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[481]] /* roo.irRadExc.A[3] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[479]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[480]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[481]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[482]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[483]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[484]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 101;
}

/*
equation index: 102
type: SIMPLE_ASSIGN
roo.irRadExc.F[1,4] = roo.irRadExc.A[4] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void ForcedConvection_30s_eqFunction_102(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,102};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[506]] /* roo.irRadExc.F[1,4] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[482]] /* roo.irRadExc.A[4] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[479]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[480]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[481]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[482]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[483]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[484]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 102;
}

/*
equation index: 103
type: SIMPLE_ASSIGN
roo.irRadExc.F[1,5] = roo.irRadExc.A[5] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void ForcedConvection_30s_eqFunction_103(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,103};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[507]] /* roo.irRadExc.F[1,5] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[483]] /* roo.irRadExc.A[5] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[479]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[480]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[481]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[482]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[483]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[484]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 103;
}

/*
equation index: 104
type: SIMPLE_ASSIGN
roo.irRadExc.F[1,6] = roo.irRadExc.A[6] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void ForcedConvection_30s_eqFunction_104(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,104};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[508]] /* roo.irRadExc.F[1,6] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[484]] /* roo.irRadExc.A[6] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[479]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[480]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[481]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[482]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[483]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[484]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 104;
}

/*
equation index: 105
type: SIMPLE_ASSIGN
roo.irRadExc.F[2,1] = roo.irRadExc.A[1] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void ForcedConvection_30s_eqFunction_105(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,105};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[509]] /* roo.irRadExc.F[2,1] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[479]] /* roo.irRadExc.A[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[479]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[480]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[481]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[482]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[483]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[484]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 105;
}

/*
equation index: 106
type: SIMPLE_ASSIGN
roo.irRadExc.F[2,2] = roo.irRadExc.A[2] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void ForcedConvection_30s_eqFunction_106(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,106};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[510]] /* roo.irRadExc.F[2,2] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[480]] /* roo.irRadExc.A[2] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[479]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[480]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[481]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[482]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[483]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[484]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 106;
}

/*
equation index: 107
type: SIMPLE_ASSIGN
roo.irRadExc.F[2,3] = roo.irRadExc.A[3] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void ForcedConvection_30s_eqFunction_107(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,107};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[511]] /* roo.irRadExc.F[2,3] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[481]] /* roo.irRadExc.A[3] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[479]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[480]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[481]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[482]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[483]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[484]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 107;
}

/*
equation index: 108
type: SIMPLE_ASSIGN
roo.irRadExc.F[2,4] = roo.irRadExc.A[4] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void ForcedConvection_30s_eqFunction_108(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,108};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[512]] /* roo.irRadExc.F[2,4] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[482]] /* roo.irRadExc.A[4] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[479]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[480]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[481]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[482]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[483]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[484]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 108;
}

/*
equation index: 109
type: SIMPLE_ASSIGN
roo.irRadExc.F[2,5] = roo.irRadExc.A[5] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void ForcedConvection_30s_eqFunction_109(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,109};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[513]] /* roo.irRadExc.F[2,5] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[483]] /* roo.irRadExc.A[5] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[479]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[480]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[481]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[482]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[483]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[484]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 109;
}

/*
equation index: 110
type: SIMPLE_ASSIGN
roo.irRadExc.F[2,6] = roo.irRadExc.A[6] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void ForcedConvection_30s_eqFunction_110(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,110};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[514]] /* roo.irRadExc.F[2,6] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[484]] /* roo.irRadExc.A[6] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[479]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[480]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[481]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[482]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[483]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[484]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 110;
}

/*
equation index: 111
type: SIMPLE_ASSIGN
roo.irRadExc.F[3,1] = roo.irRadExc.A[1] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void ForcedConvection_30s_eqFunction_111(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,111};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[515]] /* roo.irRadExc.F[3,1] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[479]] /* roo.irRadExc.A[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[479]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[480]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[481]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[482]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[483]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[484]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 111;
}

/*
equation index: 112
type: SIMPLE_ASSIGN
roo.irRadExc.F[3,2] = roo.irRadExc.A[2] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void ForcedConvection_30s_eqFunction_112(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,112};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[516]] /* roo.irRadExc.F[3,2] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[480]] /* roo.irRadExc.A[2] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[479]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[480]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[481]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[482]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[483]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[484]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 112;
}

/*
equation index: 113
type: SIMPLE_ASSIGN
roo.irRadExc.F[3,3] = roo.irRadExc.A[3] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void ForcedConvection_30s_eqFunction_113(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,113};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[517]] /* roo.irRadExc.F[3,3] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[481]] /* roo.irRadExc.A[3] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[479]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[480]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[481]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[482]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[483]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[484]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 113;
}

/*
equation index: 114
type: SIMPLE_ASSIGN
roo.irRadExc.F[3,4] = roo.irRadExc.A[4] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void ForcedConvection_30s_eqFunction_114(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,114};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[518]] /* roo.irRadExc.F[3,4] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[482]] /* roo.irRadExc.A[4] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[479]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[480]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[481]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[482]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[483]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[484]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 114;
}

/*
equation index: 115
type: SIMPLE_ASSIGN
roo.irRadExc.F[3,5] = roo.irRadExc.A[5] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void ForcedConvection_30s_eqFunction_115(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,115};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[519]] /* roo.irRadExc.F[3,5] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[483]] /* roo.irRadExc.A[5] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[479]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[480]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[481]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[482]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[483]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[484]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 115;
}

/*
equation index: 116
type: SIMPLE_ASSIGN
roo.irRadExc.F[3,6] = roo.irRadExc.A[6] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void ForcedConvection_30s_eqFunction_116(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,116};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[520]] /* roo.irRadExc.F[3,6] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[484]] /* roo.irRadExc.A[6] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[479]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[480]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[481]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[482]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[483]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[484]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 116;
}

/*
equation index: 117
type: SIMPLE_ASSIGN
roo.irRadExc.F[4,1] = roo.irRadExc.A[1] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void ForcedConvection_30s_eqFunction_117(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,117};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[521]] /* roo.irRadExc.F[4,1] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[479]] /* roo.irRadExc.A[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[479]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[480]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[481]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[482]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[483]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[484]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 117;
}

/*
equation index: 118
type: SIMPLE_ASSIGN
roo.irRadExc.F[4,2] = roo.irRadExc.A[2] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void ForcedConvection_30s_eqFunction_118(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,118};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[522]] /* roo.irRadExc.F[4,2] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[480]] /* roo.irRadExc.A[2] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[479]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[480]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[481]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[482]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[483]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[484]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 118;
}

/*
equation index: 119
type: SIMPLE_ASSIGN
roo.irRadExc.F[4,3] = roo.irRadExc.A[3] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void ForcedConvection_30s_eqFunction_119(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,119};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[523]] /* roo.irRadExc.F[4,3] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[481]] /* roo.irRadExc.A[3] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[479]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[480]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[481]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[482]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[483]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[484]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 119;
}

/*
equation index: 120
type: SIMPLE_ASSIGN
roo.irRadExc.F[4,4] = roo.irRadExc.A[4] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void ForcedConvection_30s_eqFunction_120(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,120};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[524]] /* roo.irRadExc.F[4,4] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[482]] /* roo.irRadExc.A[4] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[479]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[480]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[481]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[482]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[483]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[484]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 120;
}

/*
equation index: 121
type: SIMPLE_ASSIGN
roo.irRadExc.F[4,5] = roo.irRadExc.A[5] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void ForcedConvection_30s_eqFunction_121(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,121};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[525]] /* roo.irRadExc.F[4,5] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[483]] /* roo.irRadExc.A[5] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[479]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[480]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[481]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[482]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[483]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[484]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 121;
}

/*
equation index: 122
type: SIMPLE_ASSIGN
roo.irRadExc.F[4,6] = roo.irRadExc.A[6] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void ForcedConvection_30s_eqFunction_122(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,122};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[526]] /* roo.irRadExc.F[4,6] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[484]] /* roo.irRadExc.A[6] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[479]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[480]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[481]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[482]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[483]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[484]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 122;
}

/*
equation index: 123
type: SIMPLE_ASSIGN
roo.irRadExc.F[5,1] = roo.irRadExc.A[1] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void ForcedConvection_30s_eqFunction_123(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,123};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[527]] /* roo.irRadExc.F[5,1] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[479]] /* roo.irRadExc.A[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[479]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[480]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[481]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[482]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[483]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[484]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 123;
}

/*
equation index: 124
type: SIMPLE_ASSIGN
roo.irRadExc.F[5,2] = roo.irRadExc.A[2] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void ForcedConvection_30s_eqFunction_124(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,124};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[528]] /* roo.irRadExc.F[5,2] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[480]] /* roo.irRadExc.A[2] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[479]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[480]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[481]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[482]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[483]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[484]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 124;
}

/*
equation index: 125
type: SIMPLE_ASSIGN
roo.irRadExc.F[5,3] = roo.irRadExc.A[3] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void ForcedConvection_30s_eqFunction_125(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,125};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[529]] /* roo.irRadExc.F[5,3] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[481]] /* roo.irRadExc.A[3] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[479]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[480]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[481]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[482]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[483]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[484]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 125;
}

/*
equation index: 126
type: SIMPLE_ASSIGN
roo.irRadExc.F[5,4] = roo.irRadExc.A[4] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void ForcedConvection_30s_eqFunction_126(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,126};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[530]] /* roo.irRadExc.F[5,4] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[482]] /* roo.irRadExc.A[4] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[479]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[480]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[481]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[482]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[483]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[484]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 126;
}

/*
equation index: 127
type: SIMPLE_ASSIGN
roo.irRadExc.F[5,5] = roo.irRadExc.A[5] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void ForcedConvection_30s_eqFunction_127(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,127};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[531]] /* roo.irRadExc.F[5,5] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[483]] /* roo.irRadExc.A[5] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[479]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[480]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[481]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[482]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[483]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[484]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 127;
}

/*
equation index: 128
type: SIMPLE_ASSIGN
roo.irRadExc.F[5,6] = roo.irRadExc.A[6] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void ForcedConvection_30s_eqFunction_128(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,128};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[532]] /* roo.irRadExc.F[5,6] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[484]] /* roo.irRadExc.A[6] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[479]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[480]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[481]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[482]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[483]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[484]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 128;
}

/*
equation index: 129
type: SIMPLE_ASSIGN
roo.irRadExc.F[6,1] = roo.irRadExc.A[1] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void ForcedConvection_30s_eqFunction_129(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,129};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[533]] /* roo.irRadExc.F[6,1] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[479]] /* roo.irRadExc.A[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[479]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[480]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[481]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[482]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[483]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[484]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 129;
}

/*
equation index: 130
type: SIMPLE_ASSIGN
roo.irRadExc.F[6,2] = roo.irRadExc.A[2] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void ForcedConvection_30s_eqFunction_130(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,130};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[534]] /* roo.irRadExc.F[6,2] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[480]] /* roo.irRadExc.A[2] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[479]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[480]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[481]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[482]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[483]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[484]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 130;
}

/*
equation index: 131
type: SIMPLE_ASSIGN
roo.irRadExc.F[6,3] = roo.irRadExc.A[3] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void ForcedConvection_30s_eqFunction_131(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,131};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[535]] /* roo.irRadExc.F[6,3] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[481]] /* roo.irRadExc.A[3] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[479]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[480]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[481]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[482]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[483]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[484]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 131;
}

/*
equation index: 132
type: SIMPLE_ASSIGN
roo.irRadExc.F[6,4] = roo.irRadExc.A[4] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void ForcedConvection_30s_eqFunction_132(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,132};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[536]] /* roo.irRadExc.F[6,4] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[482]] /* roo.irRadExc.A[4] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[479]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[480]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[481]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[482]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[483]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[484]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 132;
}

/*
equation index: 133
type: SIMPLE_ASSIGN
roo.irRadExc.F[6,5] = roo.irRadExc.A[5] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void ForcedConvection_30s_eqFunction_133(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,133};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[537]] /* roo.irRadExc.F[6,5] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[483]] /* roo.irRadExc.A[5] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[479]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[480]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[481]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[482]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[483]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[484]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 133;
}

/*
equation index: 134
type: SIMPLE_ASSIGN
roo.irRadExc.F[6,6] = roo.irRadExc.A[6] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void ForcedConvection_30s_eqFunction_134(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,134};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[538]] /* roo.irRadExc.F[6,6] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[484]] /* roo.irRadExc.A[6] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[479]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[480]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[481]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[482]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[483]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[484]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 134;
}

/*
equation index: 135
type: SIMPLE_ASSIGN
$START.roo.irRadExc.G[1] = 335.01273601689667 * roo.irRadExc.A[1]
*/
void ForcedConvection_30s_eqFunction_135(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,135};
  ((modelica_real *)((data->modelData->realVarsData[85] /* roo.irRadExc.G[1] variable */).attribute .start.data))[0] = (335.01273601689667) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[479]] /* roo.irRadExc.A[1] PARAM */));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[85]] /* roo.irRadExc.G[1] variable */) = ((modelica_real *)((data->modelData->realVarsData[85] /* roo.irRadExc.G[1] variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[85].info /* roo.irRadExc.G[1] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[85]] /* roo.irRadExc.G[1] variable */));
  threadData->lastEquationSolved = 135;
}

/*
equation index: 136
type: SIMPLE_ASSIGN
$START.roo.irRadExc.J[1] = (-335.01273601689667) * roo.irRadExc.A[1]
*/
void ForcedConvection_30s_eqFunction_136(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,136};
  ((modelica_real *)((data->modelData->realVarsData[91] /* roo.irRadExc.J[1] variable */).attribute .start.data))[0] = (-335.01273601689667) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[479]] /* roo.irRadExc.A[1] PARAM */));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[91]] /* roo.irRadExc.J[1] variable */) = ((modelica_real *)((data->modelData->realVarsData[91] /* roo.irRadExc.J[1] variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[91].info /* roo.irRadExc.J[1] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[91]] /* roo.irRadExc.J[1] variable */));
  threadData->lastEquationSolved = 136;
}

/*
equation index: 137
type: SIMPLE_ASSIGN
roo.irRadExc.epsOpa[1] = roo.irRadExc.epsSurBou[1]
*/
void ForcedConvection_30s_eqFunction_137(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,137};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[719]] /* roo.irRadExc.epsOpa[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[725]] /* roo.irRadExc.epsSurBou[1] PARAM */);
  threadData->lastEquationSolved = 137;
}

/*
equation index: 138
type: SIMPLE_ASSIGN
roo.irRadExc.rhoOpa[1] = 1.0 - roo.irRadExc.epsOpa[1]
*/
void ForcedConvection_30s_eqFunction_138(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,138};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[743]] /* roo.irRadExc.rhoOpa[1] PARAM */) = 1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[719]] /* roo.irRadExc.epsOpa[1] PARAM */);
  threadData->lastEquationSolved = 138;
}

/*
equation index: 163
type: LINEAR

<var>roo.irRadExc.J[5]</var>
<var>roo.irRadExc.J[2]</var>
<var>roo.irRadExc.J[4]</var>
<var>roo.irRadExc.J[6]</var>
<var>roo.irRadExc.J[1]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void ForcedConvection_30s_eqFunction_163(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,163};
  /* Linear equation system */
  int retValue;
  double aux_x[5] = { (data->localData[1]->realVars[data->simulationInfo->realVarsIndex[95]] /* roo.irRadExc.J[5] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[92]] /* roo.irRadExc.J[2] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[94]] /* roo.irRadExc.J[4] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[96]] /* roo.irRadExc.J[6] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[91]] /* roo.irRadExc.J[1] variable */) };
  infoStreamPrint(OMC_LOG_DT, 0, "Solving linear system 163 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);

  retValue = solve_linear_system(data, threadData, 0, &aux_x[0]);

  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,163};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving linear system 163 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[95]] /* roo.irRadExc.J[5] variable */) = aux_x[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[92]] /* roo.irRadExc.J[2] variable */) = aux_x[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[94]] /* roo.irRadExc.J[4] variable */) = aux_x[2];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[96]] /* roo.irRadExc.J[6] variable */) = aux_x[3];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[91]] /* roo.irRadExc.J[1] variable */) = aux_x[4];

  threadData->lastEquationSolved = 163;
}
extern void ForcedConvection_30s_eqFunction_618(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_616(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_624(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_622(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_620(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_626(DATA *data, threadData_t *threadData);


/*
equation index: 170
type: SIMPLE_ASSIGN
roo.irRadGai.sumAEpsNoWin = roo.irRadGai.AEpsConExt[1] + roo.irRadGai.AEpsConExtWinOpa[1] + roo.irRadGai.AEpsConExtWinFra[1] + roo.irRadGai.AEpsConPar_a[1] + roo.irRadGai.AEpsConPar_b[1] + roo.irRadGai.AEpsConBou[1] + roo.irRadGai.AEpsSurBou[1] + roo.irRadGai.AEpsSurBou[2] + roo.irRadGai.AEpsSurBou[3] + roo.irRadGai.AEpsSurBou[4] + roo.irRadGai.AEpsSurBou[5] + roo.irRadGai.AEpsSurBou[6]
*/
void ForcedConvection_30s_eqFunction_170(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,170};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[982]] /* roo.irRadGai.sumAEpsNoWin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[781]] /* roo.irRadGai.AEpsConExt[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[783]] /* roo.irRadGai.AEpsConExtWinOpa[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[782]] /* roo.irRadGai.AEpsConExtWinFra[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[784]] /* roo.irRadGai.AEpsConPar_a[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[785]] /* roo.irRadGai.AEpsConPar_b[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[780]] /* roo.irRadGai.AEpsConBou[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[786]] /* roo.irRadGai.AEpsSurBou[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[787]] /* roo.irRadGai.AEpsSurBou[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[788]] /* roo.irRadGai.AEpsSurBou[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[789]] /* roo.irRadGai.AEpsSurBou[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[790]] /* roo.irRadGai.AEpsSurBou[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[791]] /* roo.irRadGai.AEpsSurBou[6] PARAM */);
  threadData->lastEquationSolved = 170;
}
extern void ForcedConvection_30s_eqFunction_570(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_571(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_572(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_573(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_574(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_575(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_576(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_577(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_578(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_579(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_580(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_581(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_582(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_583(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_584(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_585(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_586(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_587(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_588(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_589(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_590(DATA *data, threadData_t *threadData);


/*
equation index: 192
type: SIMPLE_ASSIGN
roo.air.yFixed[6] = roo.air.Q_flow_fixed[6]
*/
void ForcedConvection_30s_eqFunction_192(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,192};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[297]] /* roo.air.yFixed[6] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[42]] /* roo.air.Q_flow_fixed[6] PARAM */);
  threadData->lastEquationSolved = 192;
}

/*
equation index: 193
type: SIMPLE_ASSIGN
roo.air.cfd.yFixed[6] = roo.air.yFixed[6]
*/
void ForcedConvection_30s_eqFunction_193(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,193};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[70]] /* roo.air.cfd.yFixed[6] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[297]] /* roo.air.yFixed[6] PARAM */);
  threadData->lastEquationSolved = 193;
}

/*
equation index: 194
type: SIMPLE_ASSIGN
roo.air.yFixed[5] = roo.air.Q_flow_fixed[5]
*/
void ForcedConvection_30s_eqFunction_194(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,194};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[296]] /* roo.air.yFixed[5] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[41]] /* roo.air.Q_flow_fixed[5] PARAM */);
  threadData->lastEquationSolved = 194;
}

/*
equation index: 195
type: SIMPLE_ASSIGN
roo.air.cfd.yFixed[5] = roo.air.yFixed[5]
*/
void ForcedConvection_30s_eqFunction_195(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,195};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[69]] /* roo.air.cfd.yFixed[5] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[296]] /* roo.air.yFixed[5] PARAM */);
  threadData->lastEquationSolved = 195;
}

/*
equation index: 196
type: SIMPLE_ASSIGN
roo.air.yFixed[4] = roo.air.Q_flow_fixed[4]
*/
void ForcedConvection_30s_eqFunction_196(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,196};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[295]] /* roo.air.yFixed[4] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[40]] /* roo.air.Q_flow_fixed[4] PARAM */);
  threadData->lastEquationSolved = 196;
}

/*
equation index: 197
type: SIMPLE_ASSIGN
roo.air.cfd.yFixed[4] = roo.air.yFixed[4]
*/
void ForcedConvection_30s_eqFunction_197(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,197};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[68]] /* roo.air.cfd.yFixed[4] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[295]] /* roo.air.yFixed[4] PARAM */);
  threadData->lastEquationSolved = 197;
}

/*
equation index: 198
type: SIMPLE_ASSIGN
roo.air.yFixed[3] = roo.air.Q_flow_fixed[3]
*/
void ForcedConvection_30s_eqFunction_198(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,198};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[294]] /* roo.air.yFixed[3] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[39]] /* roo.air.Q_flow_fixed[3] PARAM */);
  threadData->lastEquationSolved = 198;
}

/*
equation index: 199
type: SIMPLE_ASSIGN
roo.air.cfd.yFixed[3] = roo.air.yFixed[3]
*/
void ForcedConvection_30s_eqFunction_199(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,199};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[67]] /* roo.air.cfd.yFixed[3] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[294]] /* roo.air.yFixed[3] PARAM */);
  threadData->lastEquationSolved = 199;
}

/*
equation index: 200
type: SIMPLE_ASSIGN
roo.air.yFixed[2] = roo.air.Q_flow_fixed[2]
*/
void ForcedConvection_30s_eqFunction_200(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,200};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[293]] /* roo.air.yFixed[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[38]] /* roo.air.Q_flow_fixed[2] PARAM */);
  threadData->lastEquationSolved = 200;
}

/*
equation index: 201
type: SIMPLE_ASSIGN
roo.air.cfd.yFixed[2] = roo.air.yFixed[2]
*/
void ForcedConvection_30s_eqFunction_201(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,201};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[66]] /* roo.air.cfd.yFixed[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[293]] /* roo.air.yFixed[2] PARAM */);
  threadData->lastEquationSolved = 201;
}

/*
equation index: 202
type: SIMPLE_ASSIGN
roo.air.yFixed[1] = roo.air.Q_flow_fixed[1]
*/
void ForcedConvection_30s_eqFunction_202(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,202};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[292]] /* roo.air.yFixed[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[37]] /* roo.air.Q_flow_fixed[1] PARAM */);
  threadData->lastEquationSolved = 202;
}

/*
equation index: 203
type: SIMPLE_ASSIGN
roo.air.cfd.yFixed[1] = roo.air.yFixed[1]
*/
void ForcedConvection_30s_eqFunction_203(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,203};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[65]] /* roo.air.cfd.yFixed[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[292]] /* roo.air.yFixed[1] PARAM */);
  threadData->lastEquationSolved = 203;
}

/*
equation index: 204
type: SIMPLE_ASSIGN
roo.air.cfd.y[6] = roo.air.cfd.yFixed[6]
*/
void ForcedConvection_30s_eqFunction_204(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,204};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[287]] /* roo.air.cfd.y[6] DISCRETE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[70]] /* roo.air.cfd.yFixed[6] PARAM */);
  threadData->lastEquationSolved = 204;
}

/*
equation index: 205
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.y[6] = roo.air.cfd.y[6]
*/
void ForcedConvection_30s_eqFunction_205(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,205};
  (data->simulationInfo->realVarsPre[287] /* roo.air.cfd.y[6] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[287]] /* roo.air.cfd.y[6] DISCRETE */);
  threadData->lastEquationSolved = 205;
}
extern void ForcedConvection_30s_eqFunction_619(DATA *data, threadData_t *threadData);


/*
equation index: 207
type: SIMPLE_ASSIGN
roo.air.cfd.y[5] = roo.air.cfd.yFixed[5]
*/
void ForcedConvection_30s_eqFunction_207(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,207};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[286]] /* roo.air.cfd.y[5] DISCRETE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[69]] /* roo.air.cfd.yFixed[5] PARAM */);
  threadData->lastEquationSolved = 207;
}

/*
equation index: 208
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.y[5] = roo.air.cfd.y[5]
*/
void ForcedConvection_30s_eqFunction_208(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,208};
  (data->simulationInfo->realVarsPre[286] /* roo.air.cfd.y[5] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[286]] /* roo.air.cfd.y[5] DISCRETE */);
  threadData->lastEquationSolved = 208;
}
extern void ForcedConvection_30s_eqFunction_621(DATA *data, threadData_t *threadData);


/*
equation index: 210
type: SIMPLE_ASSIGN
roo.air.cfd.y[4] = roo.air.cfd.yFixed[4]
*/
void ForcedConvection_30s_eqFunction_210(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,210};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[285]] /* roo.air.cfd.y[4] DISCRETE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[68]] /* roo.air.cfd.yFixed[4] PARAM */);
  threadData->lastEquationSolved = 210;
}

/*
equation index: 211
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.y[4] = roo.air.cfd.y[4]
*/
void ForcedConvection_30s_eqFunction_211(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,211};
  (data->simulationInfo->realVarsPre[285] /* roo.air.cfd.y[4] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[285]] /* roo.air.cfd.y[4] DISCRETE */);
  threadData->lastEquationSolved = 211;
}
extern void ForcedConvection_30s_eqFunction_617(DATA *data, threadData_t *threadData);


/*
equation index: 213
type: SIMPLE_ASSIGN
roo.air.cfd.y[3] = roo.air.cfd.yFixed[3]
*/
void ForcedConvection_30s_eqFunction_213(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,213};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[284]] /* roo.air.cfd.y[3] DISCRETE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[67]] /* roo.air.cfd.yFixed[3] PARAM */);
  threadData->lastEquationSolved = 213;
}

/*
equation index: 214
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.y[3] = roo.air.cfd.y[3]
*/
void ForcedConvection_30s_eqFunction_214(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,214};
  (data->simulationInfo->realVarsPre[284] /* roo.air.cfd.y[3] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[284]] /* roo.air.cfd.y[3] DISCRETE */);
  threadData->lastEquationSolved = 214;
}
extern void ForcedConvection_30s_eqFunction_623(DATA *data, threadData_t *threadData);


/*
equation index: 216
type: SIMPLE_ASSIGN
roo.air.cfd.y[2] = roo.air.cfd.yFixed[2]
*/
void ForcedConvection_30s_eqFunction_216(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,216};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[283]] /* roo.air.cfd.y[2] DISCRETE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[66]] /* roo.air.cfd.yFixed[2] PARAM */);
  threadData->lastEquationSolved = 216;
}

/*
equation index: 217
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.y[2] = roo.air.cfd.y[2]
*/
void ForcedConvection_30s_eqFunction_217(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,217};
  (data->simulationInfo->realVarsPre[283] /* roo.air.cfd.y[2] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[283]] /* roo.air.cfd.y[2] DISCRETE */);
  threadData->lastEquationSolved = 217;
}
extern void ForcedConvection_30s_eqFunction_625(DATA *data, threadData_t *threadData);


/*
equation index: 219
type: SIMPLE_ASSIGN
roo.air.cfd.y[1] = roo.air.cfd.yFixed[1]
*/
void ForcedConvection_30s_eqFunction_219(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,219};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[282]] /* roo.air.cfd.y[1] DISCRETE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[65]] /* roo.air.cfd.yFixed[1] PARAM */);
  threadData->lastEquationSolved = 219;
}

/*
equation index: 220
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.y[1] = roo.air.cfd.y[1]
*/
void ForcedConvection_30s_eqFunction_220(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,220};
  (data->simulationInfo->realVarsPre[282] /* roo.air.cfd.y[1] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[282]] /* roo.air.cfd.y[1] DISCRETE */);
  threadData->lastEquationSolved = 220;
}
extern void ForcedConvection_30s_eqFunction_627(DATA *data, threadData_t *threadData);


/*
equation index: 222
type: SIMPLE_ASSIGN
roo.air.cfd.u[8] = roo.heaGai.AFlo * qLatGai_flow.k
*/
void ForcedConvection_30s_eqFunction_222(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,222};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[65]] /* roo.air.cfd.u[8] variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[478]] /* roo.heaGai.AFlo PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[17]] /* qLatGai_flow.k PARAM */));
  threadData->lastEquationSolved = 222;
}
extern void ForcedConvection_30s_eqFunction_527(DATA *data, threadData_t *threadData);


/*
equation index: 224
type: SIMPLE_ASSIGN
roo.air.cfd.uWri[8] = roo.air.cfd.u[8]
*/
void ForcedConvection_30s_eqFunction_224(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,224};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[274]] /* roo.air.cfd.uWri[8] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[65]] /* roo.air.cfd.u[8] variable */);
  threadData->lastEquationSolved = 224;
}

/*
equation index: 225
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uWri[8] = roo.air.cfd.uWri[8]
*/
void ForcedConvection_30s_eqFunction_225(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,225};
  (data->simulationInfo->realVarsPre[274] /* roo.air.cfd.uWri[8] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[274]] /* roo.air.cfd.uWri[8] DISCRETE */);
  threadData->lastEquationSolved = 225;
}

/*
equation index: 226
type: SIMPLE_ASSIGN
roo.irRadGai.AEpsConExtWinSha[1] = 0.0
*/
void ForcedConvection_30s_eqFunction_226(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,226};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[117]] /* roo.irRadGai.AEpsConExtWinSha[1] variable */) = 0.0;
  threadData->lastEquationSolved = 226;
}

/*
equation index: 227
type: SIMPLE_ASSIGN
roo.air.cfd.u[11] = (-roo.air.fluInt.p_start) * bounIn.m_flow / roo.air.fluInt.m_start * roo.air.fluInt.m_start / roo.air.fluInt.p_start
*/
void ForcedConvection_30s_eqFunction_227(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,227};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[68]] /* roo.air.cfd.u[11] variable */) = DIVISION_SIM((DIVISION_SIM(((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[250]] /* roo.air.fluInt.p_start PARAM */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[15]] /* bounIn.m_flow PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[249]] /* roo.air.fluInt.m_start PARAM */),"roo.air.fluInt.m_start",equationIndexes)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[249]] /* roo.air.fluInt.m_start PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[250]] /* roo.air.fluInt.p_start PARAM */),"roo.air.fluInt.p_start",equationIndexes);
  threadData->lastEquationSolved = 227;
}
extern void ForcedConvection_30s_eqFunction_528(DATA *data, threadData_t *threadData);


/*
equation index: 229
type: SIMPLE_ASSIGN
roo.air.yFixed[9] = roo.air.T_outflow_fixed[2]
*/
void ForcedConvection_30s_eqFunction_229(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,229};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[300]] /* roo.air.yFixed[9] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[46]] /* roo.air.T_outflow_fixed[2] PARAM */);
  threadData->lastEquationSolved = 229;
}

/*
equation index: 230
type: SIMPLE_ASSIGN
roo.air.cfd.yFixed[9] = roo.air.yFixed[9]
*/
void ForcedConvection_30s_eqFunction_230(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,230};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[73]] /* roo.air.cfd.yFixed[9] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[300]] /* roo.air.yFixed[9] PARAM */);
  threadData->lastEquationSolved = 230;
}

/*
equation index: 231
type: SIMPLE_ASSIGN
roo.air.yFixed[8] = roo.air.T_outflow_fixed[1]
*/
void ForcedConvection_30s_eqFunction_231(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,231};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[299]] /* roo.air.yFixed[8] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[45]] /* roo.air.T_outflow_fixed[1] PARAM */);
  threadData->lastEquationSolved = 231;
}

/*
equation index: 232
type: SIMPLE_ASSIGN
roo.air.cfd.yFixed[8] = roo.air.yFixed[8]
*/
void ForcedConvection_30s_eqFunction_232(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,232};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[72]] /* roo.air.cfd.yFixed[8] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[299]] /* roo.air.yFixed[8] PARAM */);
  threadData->lastEquationSolved = 232;
}

/*
equation index: 233
type: SIMPLE_ASSIGN
roo.air.Xi_outflow_fixed[2] = 0.01
*/
void ForcedConvection_30s_eqFunction_233(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,233};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[49]] /* roo.air.Xi_outflow_fixed[2] PARAM */) = 0.01;
  threadData->lastEquationSolved = 233;
}

/*
equation index: 234
type: SIMPLE_ASSIGN
roo.air.yFixed[11] = roo.air.Xi_outflow_fixed[2]
*/
void ForcedConvection_30s_eqFunction_234(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,234};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[302]] /* roo.air.yFixed[11] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[49]] /* roo.air.Xi_outflow_fixed[2] PARAM */);
  threadData->lastEquationSolved = 234;
}

/*
equation index: 235
type: SIMPLE_ASSIGN
roo.air.cfd.yFixed[11] = roo.air.yFixed[11]
*/
void ForcedConvection_30s_eqFunction_235(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,235};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[75]] /* roo.air.cfd.yFixed[11] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[302]] /* roo.air.yFixed[11] PARAM */);
  threadData->lastEquationSolved = 235;
}

/*
equation index: 236
type: SIMPLE_ASSIGN
roo.air.Xi_outflow_fixed[1] = 0.01
*/
void ForcedConvection_30s_eqFunction_236(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,236};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[48]] /* roo.air.Xi_outflow_fixed[1] PARAM */) = 0.01;
  threadData->lastEquationSolved = 236;
}

/*
equation index: 237
type: SIMPLE_ASSIGN
roo.air.yFixed[10] = roo.air.Xi_outflow_fixed[1]
*/
void ForcedConvection_30s_eqFunction_237(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,237};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[301]] /* roo.air.yFixed[10] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[48]] /* roo.air.Xi_outflow_fixed[1] PARAM */);
  threadData->lastEquationSolved = 237;
}

/*
equation index: 238
type: SIMPLE_ASSIGN
roo.air.cfd.yFixed[10] = roo.air.yFixed[10]
*/
void ForcedConvection_30s_eqFunction_238(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,238};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[74]] /* roo.air.cfd.yFixed[10] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[301]] /* roo.air.yFixed[10] PARAM */);
  threadData->lastEquationSolved = 238;
}

/*
equation index: 239
type: SIMPLE_ASSIGN
roo.air.cfd.y[11] = roo.air.cfd.yFixed[11]
*/
void ForcedConvection_30s_eqFunction_239(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,239};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[292]] /* roo.air.cfd.y[11] DISCRETE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[75]] /* roo.air.cfd.yFixed[11] PARAM */);
  threadData->lastEquationSolved = 239;
}

/*
equation index: 240
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.y[11] = roo.air.cfd.y[11]
*/
void ForcedConvection_30s_eqFunction_240(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,240};
  (data->simulationInfo->realVarsPre[292] /* roo.air.cfd.y[11] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[292]] /* roo.air.cfd.y[11] DISCRETE */);
  threadData->lastEquationSolved = 240;
}
extern void ForcedConvection_30s_eqFunction_566(DATA *data, threadData_t *threadData);


/*
equation index: 242
type: SIMPLE_ASSIGN
roo.air.cfd.y[10] = roo.air.cfd.yFixed[10]
*/
void ForcedConvection_30s_eqFunction_242(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,242};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[291]] /* roo.air.cfd.y[10] DISCRETE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[74]] /* roo.air.cfd.yFixed[10] PARAM */);
  threadData->lastEquationSolved = 242;
}

/*
equation index: 243
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.y[10] = roo.air.cfd.y[10]
*/
void ForcedConvection_30s_eqFunction_243(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,243};
  (data->simulationInfo->realVarsPre[291] /* roo.air.cfd.y[10] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[291]] /* roo.air.cfd.y[10] DISCRETE */);
  threadData->lastEquationSolved = 243;
}
extern void ForcedConvection_30s_eqFunction_564(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_567(DATA *data, threadData_t *threadData);


/*
equation index: 246
type: SIMPLE_ASSIGN
roo.air.cfd.y[9] = roo.air.cfd.yFixed[9]
*/
void ForcedConvection_30s_eqFunction_246(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,246};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[290]] /* roo.air.cfd.y[9] DISCRETE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[73]] /* roo.air.cfd.yFixed[9] PARAM */);
  threadData->lastEquationSolved = 246;
}

/*
equation index: 247
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.y[9] = roo.air.cfd.y[9]
*/
void ForcedConvection_30s_eqFunction_247(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,247};
  (data->simulationInfo->realVarsPre[290] /* roo.air.cfd.y[9] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[290]] /* roo.air.cfd.y[9] DISCRETE */);
  threadData->lastEquationSolved = 247;
}
extern void ForcedConvection_30s_eqFunction_568(DATA *data, threadData_t *threadData);


/*
equation index: 249
type: SIMPLE_ASSIGN
roo.air.cfd.y[8] = roo.air.cfd.yFixed[8]
*/
void ForcedConvection_30s_eqFunction_249(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,249};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[289]] /* roo.air.cfd.y[8] DISCRETE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[72]] /* roo.air.cfd.yFixed[8] PARAM */);
  threadData->lastEquationSolved = 249;
}

/*
equation index: 250
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.y[8] = roo.air.cfd.y[8]
*/
void ForcedConvection_30s_eqFunction_250(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,250};
  (data->simulationInfo->realVarsPre[289] /* roo.air.cfd.y[8] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[289]] /* roo.air.cfd.y[8] DISCRETE */);
  threadData->lastEquationSolved = 250;
}
extern void ForcedConvection_30s_eqFunction_565(DATA *data, threadData_t *threadData);


/*
equation index: 252
type: SIMPLE_ASSIGN
roo.air.cfd.uWri[11] = roo.air.cfd.u[11]
*/
void ForcedConvection_30s_eqFunction_252(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,252};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[277]] /* roo.air.cfd.uWri[11] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[68]] /* roo.air.cfd.u[11] variable */);
  threadData->lastEquationSolved = 252;
}

/*
equation index: 253
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uWri[11] = roo.air.cfd.uWri[11]
*/
void ForcedConvection_30s_eqFunction_253(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,253};
  (data->simulationInfo->realVarsPre[277] /* roo.air.cfd.uWri[11] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[277]] /* roo.air.cfd.uWri[11] DISCRETE */);
  threadData->lastEquationSolved = 253;
}

/*
equation index: 254
type: SIMPLE_ASSIGN
roo.heaPorAir.Q_flow = 0.0
*/
void ForcedConvection_30s_eqFunction_254(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,254};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[82]] /* roo.heaPorAir.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 254;
}

/*
equation index: 255
type: SIMPLE_ASSIGN
roo.irRadGai.shaSig[1].y = 0.0
*/
void ForcedConvection_30s_eqFunction_255(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,255};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[153]] /* roo.irRadGai.shaSig[1].y variable */) = 0.0;
  threadData->lastEquationSolved = 255;
}

/*
equation index: 256
type: SIMPLE_ASSIGN
roo.irRadGai.shaSig[1].yCom = 1.0
*/
void ForcedConvection_30s_eqFunction_256(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,256};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[154]] /* roo.irRadGai.shaSig[1].yCom variable */) = 1.0;
  threadData->lastEquationSolved = 256;
}

/*
equation index: 257
type: SIMPLE_ASSIGN
roo.radTem.glaUns_internal[1].T = 293.15
*/
void ForcedConvection_30s_eqFunction_257(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,257};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[179]] /* roo.radTem.glaUns_internal[1].T variable */) = 293.15;
  threadData->lastEquationSolved = 257;
}

/*
equation index: 258
type: SIMPLE_ASSIGN
roo.radTem.conExt[1].T = 293.15
*/
void ForcedConvection_30s_eqFunction_258(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,258};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[161]] /* roo.radTem.conExt[1].T variable */) = 293.15;
  threadData->lastEquationSolved = 258;
}

/*
equation index: 259
type: SIMPLE_ASSIGN
roo.radTem.conPar_a[1].T = 293.15
*/
void ForcedConvection_30s_eqFunction_259(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,259};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[167]] /* roo.radTem.conPar_a[1].T variable */) = 293.15;
  threadData->lastEquationSolved = 259;
}

/*
equation index: 260
type: SIMPLE_ASSIGN
roo.radTem.conPar_b[1].T = 293.15
*/
void ForcedConvection_30s_eqFunction_260(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,260};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[169]] /* roo.radTem.conPar_b[1].T variable */) = 293.15;
  threadData->lastEquationSolved = 260;
}

/*
equation index: 261
type: SIMPLE_ASSIGN
roo.radTem.conBou[1].T = 293.15
*/
void ForcedConvection_30s_eqFunction_261(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,261};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[159]] /* roo.radTem.conBou[1].T variable */) = 293.15;
  threadData->lastEquationSolved = 261;
}

/*
equation index: 262
type: SIMPLE_ASSIGN
roo.radTem.conSurBou[1].Q_flow = 0.0
*/
void ForcedConvection_30s_eqFunction_262(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,262};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* roo.radTem.conSurBou[1].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 262;
}

/*
equation index: 263
type: SIMPLE_ASSIGN
roo.radTem.conSurBou[2].Q_flow = 0.0
*/
void ForcedConvection_30s_eqFunction_263(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,263};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[171]] /* roo.radTem.conSurBou[2].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 263;
}

/*
equation index: 264
type: SIMPLE_ASSIGN
roo.radTem.conSurBou[3].Q_flow = 0.0
*/
void ForcedConvection_30s_eqFunction_264(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,264};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[172]] /* roo.radTem.conSurBou[3].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 264;
}

/*
equation index: 265
type: SIMPLE_ASSIGN
roo.radTem.conSurBou[4].Q_flow = 0.0
*/
void ForcedConvection_30s_eqFunction_265(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,265};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[173]] /* roo.radTem.conSurBou[4].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 265;
}

/*
equation index: 266
type: SIMPLE_ASSIGN
roo.radTem.conSurBou[5].Q_flow = 0.0
*/
void ForcedConvection_30s_eqFunction_266(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,266};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[174]] /* roo.radTem.conSurBou[5].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 266;
}

/*
equation index: 267
type: SIMPLE_ASSIGN
roo.radTem.conSurBou[6].Q_flow = 0.0
*/
void ForcedConvection_30s_eqFunction_267(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,267};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[175]] /* roo.radTem.conSurBou[6].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 267;
}

/*
equation index: 268
type: SIMPLE_ASSIGN
roo.radTem.conExtWin[1].T = 293.15
*/
void ForcedConvection_30s_eqFunction_268(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,268};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[163]] /* roo.radTem.conExtWin[1].T variable */) = 293.15;
  threadData->lastEquationSolved = 268;
}

/*
equation index: 269
type: SIMPLE_ASSIGN
roo.radTem.conExtWinFra[1].T = 293.15
*/
void ForcedConvection_30s_eqFunction_269(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,269};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[165]] /* roo.radTem.conExtWinFra[1].T variable */) = 293.15;
  threadData->lastEquationSolved = 269;
}

/*
equation index: 270
type: SIMPLE_ASSIGN
roo.heaPorRad.Q_flow = 0.0
*/
void ForcedConvection_30s_eqFunction_270(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,270};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[83]] /* roo.heaPorRad.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 270;
}

/*
equation index: 271
type: SIMPLE_ASSIGN
roo.air.startTime = time + roo.air.samplePeriod
*/
void ForcedConvection_30s_eqFunction_271(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,271};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[255]] /* roo.air.startTime PARAM */) = data->localData[0]->timeValue + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[254]] /* roo.air.samplePeriod PARAM */);
  threadData->lastEquationSolved = 271;
}

/*
equation index: 272
type: SIMPLE_ASSIGN
roo.air.cfd.startTime = roo.air.startTime
*/
void ForcedConvection_30s_eqFunction_272(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,272};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[52]] /* roo.air.cfd.startTime PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[255]] /* roo.air.startTime PARAM */);
  threadData->lastEquationSolved = 272;
}

/*
equation index: 273
type: SIMPLE_ASSIGN
roo.air.yFixed[7] = roo.air.TRooAve_fixed
*/
void ForcedConvection_30s_eqFunction_273(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,273};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[298]] /* roo.air.yFixed[7] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[43]] /* roo.air.TRooAve_fixed PARAM */);
  threadData->lastEquationSolved = 273;
}

/*
equation index: 274
type: SIMPLE_ASSIGN
roo.air.cfd.yFixed[7] = roo.air.yFixed[7]
*/
void ForcedConvection_30s_eqFunction_274(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,274};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[71]] /* roo.air.cfd.yFixed[7] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[298]] /* roo.air.yFixed[7] PARAM */);
  threadData->lastEquationSolved = 274;
}

/*
equation index: 275
type: SIMPLE_ASSIGN
roo.air.cfd.y[7] = roo.air.cfd.yFixed[7]
*/
void ForcedConvection_30s_eqFunction_275(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,275};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[288]] /* roo.air.cfd.y[7] DISCRETE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[71]] /* roo.air.cfd.yFixed[7] PARAM */);
  threadData->lastEquationSolved = 275;
}

/*
equation index: 276
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.y[7] = roo.air.cfd.y[7]
*/
void ForcedConvection_30s_eqFunction_276(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,276};
  (data->simulationInfo->realVarsPre[288] /* roo.air.cfd.y[7] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[288]] /* roo.air.cfd.y[7] DISCRETE */);
  threadData->lastEquationSolved = 276;
}

/*
equation index: 277
type: SIMPLE_ASSIGN
roo.air.yFixed[12] = 0.0
*/
void ForcedConvection_30s_eqFunction_277(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,277};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[303]] /* roo.air.yFixed[12] PARAM */) = 0.0;
  threadData->lastEquationSolved = 277;
}

/*
equation index: 278
type: SIMPLE_ASSIGN
roo.air.cfd.yFixed[12] = roo.air.yFixed[12]
*/
void ForcedConvection_30s_eqFunction_278(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,278};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[76]] /* roo.air.cfd.yFixed[12] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[303]] /* roo.air.yFixed[12] PARAM */);
  threadData->lastEquationSolved = 278;
}

/*
equation index: 279
type: SIMPLE_ASSIGN
roo.air.cfd.y[12] = roo.air.cfd.yFixed[12]
*/
void ForcedConvection_30s_eqFunction_279(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,279};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[293]] /* roo.air.cfd.y[12] DISCRETE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[76]] /* roo.air.cfd.yFixed[12] PARAM */);
  threadData->lastEquationSolved = 279;
}

/*
equation index: 280
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.y[12] = roo.air.cfd.y[12]
*/
void ForcedConvection_30s_eqFunction_280(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,280};
  (data->simulationInfo->realVarsPre[293] /* roo.air.cfd.y[12] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[293]] /* roo.air.cfd.y[12] DISCRETE */);
  threadData->lastEquationSolved = 280;
}

/*
equation index: 281
type: SIMPLE_ASSIGN
roo.air.yFixed[13] = 0.0
*/
void ForcedConvection_30s_eqFunction_281(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,281};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[304]] /* roo.air.yFixed[13] PARAM */) = 0.0;
  threadData->lastEquationSolved = 281;
}

/*
equation index: 282
type: SIMPLE_ASSIGN
roo.air.cfd.yFixed[13] = roo.air.yFixed[13]
*/
void ForcedConvection_30s_eqFunction_282(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,282};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[77]] /* roo.air.cfd.yFixed[13] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[304]] /* roo.air.yFixed[13] PARAM */);
  threadData->lastEquationSolved = 282;
}

/*
equation index: 283
type: SIMPLE_ASSIGN
roo.air.cfd.y[13] = roo.air.cfd.yFixed[13]
*/
void ForcedConvection_30s_eqFunction_283(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,283};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[294]] /* roo.air.cfd.y[13] DISCRETE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[77]] /* roo.air.cfd.yFixed[13] PARAM */);
  threadData->lastEquationSolved = 283;
}

/*
equation index: 284
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.y[13] = roo.air.cfd.y[13]
*/
void ForcedConvection_30s_eqFunction_284(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,284};
  (data->simulationInfo->realVarsPre[294] /* roo.air.cfd.y[13] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[294]] /* roo.air.cfd.y[13] DISCRETE */);
  threadData->lastEquationSolved = 284;
}

/*
equation index: 285
type: SIMPLE_ASSIGN
weaDat.conTimMin.weaDatEndTim = weaDat.timeSpan[2]
*/
void ForcedConvection_30s_eqFunction_285(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,285};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1301]] /* weaDat.conTimMin.weaDatEndTim PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1324]] /* weaDat.timeSpan[2] PARAM */);
  threadData->lastEquationSolved = 285;
}

/*
equation index: 286
type: SIMPLE_ASSIGN
weaDat.conTimMin.weaDatStaTim = weaDat.timeSpan[1]
*/
void ForcedConvection_30s_eqFunction_286(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,286};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1302]] /* weaDat.conTimMin.weaDatStaTim PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1323]] /* weaDat.timeSpan[1] PARAM */);
  threadData->lastEquationSolved = 286;
}

/*
equation index: 287
type: SIMPLE_ASSIGN
weaDat.conTimMin.lenWea = weaDat.conTimMin.weaDatEndTim - weaDat.conTimMin.weaDatStaTim
*/
void ForcedConvection_30s_eqFunction_287(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,287};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1300]] /* weaDat.conTimMin.lenWea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1301]] /* weaDat.conTimMin.weaDatEndTim PARAM */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1302]] /* weaDat.conTimMin.weaDatStaTim PARAM */);
  threadData->lastEquationSolved = 287;
}

/*
equation index: 288
type: SIMPLE_ASSIGN
weaDat.conTimMin.canRepeatWeatherFile = abs(mod(weaDat.conTimMin.lenWea, 3.1536e7)) < 0.01
*/
void ForcedConvection_30s_eqFunction_288(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,288};
  modelica_real tmp0;
  modelica_boolean tmp1;
  tmp0 = 3.1536e7;
  if (tmp0 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(weaDat.conTimMin.lenWea, 3.1536e7)");}
  tmp1 = Less(fabs(modelica_real_mod((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1300]] /* weaDat.conTimMin.lenWea PARAM */), tmp0)),0.01);
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[281]] /* weaDat.conTimMin.canRepeatWeatherFile PARAM */) = tmp1;
  threadData->lastEquationSolved = 288;
}

/*
equation index: 289
type: SIMPLE_ASSIGN
weaDat.conTim.weaDatEndTim = weaDat.timeSpan[2]
*/
void ForcedConvection_30s_eqFunction_289(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,289};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1298]] /* weaDat.conTim.weaDatEndTim PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1324]] /* weaDat.timeSpan[2] PARAM */);
  threadData->lastEquationSolved = 289;
}

/*
equation index: 290
type: SIMPLE_ASSIGN
weaDat.conTim.weaDatStaTim = weaDat.timeSpan[1]
*/
void ForcedConvection_30s_eqFunction_290(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,290};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1299]] /* weaDat.conTim.weaDatStaTim PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1323]] /* weaDat.timeSpan[1] PARAM */);
  threadData->lastEquationSolved = 290;
}

/*
equation index: 291
type: SIMPLE_ASSIGN
weaDat.conTim.lenWea = weaDat.conTim.weaDatEndTim - weaDat.conTim.weaDatStaTim
*/
void ForcedConvection_30s_eqFunction_291(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,291};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1297]] /* weaDat.conTim.lenWea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1298]] /* weaDat.conTim.weaDatEndTim PARAM */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1299]] /* weaDat.conTim.weaDatStaTim PARAM */);
  threadData->lastEquationSolved = 291;
}

/*
equation index: 292
type: SIMPLE_ASSIGN
weaDat.conTim.canRepeatWeatherFile = abs(mod(weaDat.conTim.lenWea, 3.1536e7)) < 0.01
*/
void ForcedConvection_30s_eqFunction_292(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,292};
  modelica_real tmp2;
  modelica_boolean tmp3;
  tmp2 = 3.1536e7;
  if (tmp2 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(weaDat.conTim.lenWea, 3.1536e7)");}
  tmp3 = Less(fabs(modelica_real_mod((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1297]] /* weaDat.conTim.lenWea PARAM */), tmp2)),0.01);
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[280]] /* weaDat.conTim.canRepeatWeatherFile PARAM */) = tmp3;
  threadData->lastEquationSolved = 292;
}
extern void ForcedConvection_30s_eqFunction_648(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_654(DATA *data, threadData_t *threadData);


/*
equation index: 295
type: SIMPLE_ASSIGN
weaDat.conTimMin.tNext = if weaDat.conTimMin.canRepeatWeatherFile then weaDat.conTimMin.lenWea * (1.0 + (*Real*)(integer(weaDat.add30Min.y / weaDat.conTimMin.lenWea))) else time
*/
void ForcedConvection_30s_eqFunction_295(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,295};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[296]] /* weaDat.conTimMin.tNext DISCRETE */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[281]] /* weaDat.conTimMin.canRepeatWeatherFile PARAM */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1300]] /* weaDat.conTimMin.lenWea PARAM */)) * (1.0 + ((modelica_real)((modelica_integer)floor(DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[186]] /* weaDat.add30Min.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1300]] /* weaDat.conTimMin.lenWea PARAM */),"weaDat.conTimMin.lenWea",equationIndexes))))):data->localData[0]->timeValue);
  threadData->lastEquationSolved = 295;
}
extern void ForcedConvection_30s_eqFunction_730(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_731(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_733(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_735(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_656(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_657(DATA *data, threadData_t *threadData);


/*
equation index: 302
type: SIMPLE_ASSIGN
weaDat.eqnTim.eqnTim = 60.0 * (9.87 * sin(2.0 * weaDat.eqnTim.Bt) + (-7.53) * cos(weaDat.eqnTim.Bt) + (-1.5) * sin(weaDat.eqnTim.Bt))
*/
void ForcedConvection_30s_eqFunction_302(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,302};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[221]] /* weaDat.eqnTim.eqnTim variable */) = (60.0) * ((9.87) * (sin((2.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[220]] /* weaDat.eqnTim.Bt variable */)))) + (-7.53) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[220]] /* weaDat.eqnTim.Bt variable */))) + (-1.5) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[220]] /* weaDat.eqnTim.Bt variable */))));
  threadData->lastEquationSolved = 302;
}
extern void ForcedConvection_30s_eqFunction_662(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_663(DATA *data, threadData_t *threadData);


/*
equation index: 305
type: SIMPLE_ASSIGN
weaDat.weaBus.solDec = asin((-0.3979486313076103) * cos((weaDat.weaBus.cloTim / 86400.0 + 10.0) * 0.017202423838958484))
*/
void ForcedConvection_30s_eqFunction_305(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,305};
  modelica_real tmp4;
  tmp4 = (-0.3979486313076103) * (cos((DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[240]] /* weaDat.weaBus.cloTim variable */),86400.0,"86400.0",equationIndexes) + 10.0) * (0.017202423838958484)));
  if(!(tmp4 >= -1.0 && tmp4 <= 1.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of asin((-0.3979486313076103) * cos((weaDat.weaBus.cloTim / 86400.0 + 10.0) * 0.017202423838958484)) outside the domain -1.0 <= %g <= 1.0", tmp4);
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[245]] /* weaDat.weaBus.solDec variable */) = asin(tmp4);
  threadData->lastEquationSolved = 305;
}

/*
equation index: 306
type: SIMPLE_ASSIGN
weaDat.weaBus.solZen = acos(cos(weaDat.latitude.latitude) * cos(weaDat.weaBus.solDec) * cos(weaDat.weaBus.solHouAng) + sin(weaDat.latitude.latitude) * sin(weaDat.weaBus.solDec))
*/
void ForcedConvection_30s_eqFunction_306(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,306};
  modelica_real tmp5;
  tmp5 = ((cos((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1310]] /* weaDat.latitude.latitude PARAM */))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[245]] /* weaDat.weaBus.solDec variable */)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[246]] /* weaDat.weaBus.solHouAng variable */))) + (sin((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1310]] /* weaDat.latitude.latitude PARAM */))) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[245]] /* weaDat.weaBus.solDec variable */)));
  if(!(tmp5 >= -1.0 && tmp5 <= 1.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of acos(cos(weaDat.latitude.latitude) * cos(weaDat.weaBus.solDec) * cos(weaDat.weaBus.solHouAng) + sin(weaDat.latitude.latitude) * sin(weaDat.weaBus.solDec)) outside the domain -1.0 <= %g <= 1.0", tmp5);
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[248]] /* weaDat.weaBus.solZen variable */) = acos(tmp5);
  threadData->lastEquationSolved = 306;
}
extern void ForcedConvection_30s_eqFunction_666(DATA *data, threadData_t *threadData);


/*
equation index: 308
type: SIMPLE_ASSIGN
weaDat.conTim.tNext = if weaDat.conTim.canRepeatWeatherFile then weaDat.conTim.lenWea * (1.0 + (*Real*)(integer(weaDat.weaBus.cloTim / weaDat.conTim.lenWea))) else time
*/
void ForcedConvection_30s_eqFunction_308(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,308};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[295]] /* weaDat.conTim.tNext DISCRETE */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[280]] /* weaDat.conTim.canRepeatWeatherFile PARAM */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1297]] /* weaDat.conTim.lenWea PARAM */)) * (1.0 + ((modelica_real)((modelica_integer)floor(DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[240]] /* weaDat.weaBus.cloTim variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1297]] /* weaDat.conTim.lenWea PARAM */),"weaDat.conTim.lenWea",equationIndexes))))):data->localData[0]->timeValue);
  threadData->lastEquationSolved = 308;
}
extern void ForcedConvection_30s_eqFunction_668(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_734(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_736(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_732(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_727(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_728(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_726(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_725(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_724(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_723(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_722(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_721(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_720(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_719(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_718(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_716(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_717(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_715(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_708(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_709(DATA *data, threadData_t *threadData);


/*
equation index: 329
type: SIMPLE_ASSIGN
weaDat.weaBus.nOpa = min(1.0, max(0.0, weaDat.opaSkyCovSel.y))
*/
void ForcedConvection_30s_eqFunction_329(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,329};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[241]] /* weaDat.weaBus.nOpa variable */) = fmin(1.0,fmax(0.0,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[223]] /* weaDat.opaSkyCovSel.y variable */)));
  threadData->lastEquationSolved = 329;
}
extern void ForcedConvection_30s_eqFunction_712(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_704(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_705(DATA *data, threadData_t *threadData);


/*
equation index: 333
type: SIMPLE_ASSIGN
weaDat.weaBus.nTot = min(1.0, max(0.0, weaDat.totSkyCovSel.y))
*/
void ForcedConvection_30s_eqFunction_333(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,333};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[242]] /* weaDat.weaBus.nTot variable */) = fmin(1.0,fmax(0.0,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[230]] /* weaDat.totSkyCovSel.y variable */)));
  threadData->lastEquationSolved = 333;
}
extern void ForcedConvection_30s_eqFunction_702(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_703(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_698(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_699(DATA *data, threadData_t *threadData);


/*
equation index: 338
type: SIMPLE_ASSIGN
weaDat.weaBus.winDir = min(6.283185307179586, max(0.0, weaDat.conWinDir.y))
*/
void ForcedConvection_30s_eqFunction_338(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,338};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[249]] /* weaDat.weaBus.winDir variable */) = fmin(6.283185307179586,fmax(0.0,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[190]] /* weaDat.conWinDir.y variable */)));
  threadData->lastEquationSolved = 338;
}
extern void ForcedConvection_30s_eqFunction_697(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_696(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_695(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_694(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_693(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_692(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_691(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_676(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_677(DATA *data, threadData_t *threadData);


/*
equation index: 348
type: SIMPLE_ASSIGN
weaDat.weaBus.relHum = min(1.0, max(0.0, weaDat.relHumSel.uFil))
*/
void ForcedConvection_30s_eqFunction_348(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,348};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[243]] /* weaDat.weaBus.relHum variable */) = fmin(1.0,fmax(0.0,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[224]] /* weaDat.relHumSel.uFil variable */)));
  threadData->lastEquationSolved = 348;
}
extern void ForcedConvection_30s_eqFunction_672(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_673(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_669(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_670(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_674(DATA *data, threadData_t *threadData);


/*
equation index: 354
type: SIMPLE_ASSIGN
weaDat.TBlaSkyCom.epsSky = (0.787 + 0.764 * log((-weaDat.TBlaSkyCom.TDewPoiK) / (-273.15))) * (1.0 + 0.0224 * weaDat.TBlaSkyCom.nOpa10 + (-0.0035) * weaDat.TBlaSkyCom.nOpa10 ^ 2.0 + 2.8e-4 * weaDat.TBlaSkyCom.nOpa10 ^ 3.0)
*/
void ForcedConvection_30s_eqFunction_354(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,354};
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  tmp6 = DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[183]] /* weaDat.TBlaSkyCom.TDewPoiK variable */)),-273.15,"-273.15",equationIndexes);
  if(!(tmp6 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of log((-weaDat.TBlaSkyCom.TDewPoiK) / (-273.15)) was %g should be > 0", tmp6);
    }
  }tmp7 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[185]] /* weaDat.TBlaSkyCom.nOpa10 variable */);
  tmp8 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[185]] /* weaDat.TBlaSkyCom.nOpa10 variable */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[184]] /* weaDat.TBlaSkyCom.epsSky variable */) = (0.787 + (0.764) * (log(tmp6))) * (1.0 + (0.0224) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[185]] /* weaDat.TBlaSkyCom.nOpa10 variable */)) + (-0.0035) * ((tmp7 * tmp7)) + (2.8e-4) * ((tmp8 * tmp8 * tmp8)));
  threadData->lastEquationSolved = 354;
}
extern void ForcedConvection_30s_eqFunction_714(DATA *data, threadData_t *threadData);


/*
equation index: 356
type: SIMPLE_ASSIGN
weaDat.tWetBul_TDryBulXi.XiDryBul = 0.621964713077499 * weaDat.weaBus.relHum / ((-0.378035286922501) * weaDat.weaBus.relHum + 0.0016349032219037793 * weaDat.pAtmSel.p * exp(4102.99 / (weaDat.weaBus.TDryBul - 35.719) - 17.2799))
*/
void ForcedConvection_30s_eqFunction_356(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,356};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[226]] /* weaDat.tWetBul_TDryBulXi.XiDryBul variable */) = (0.621964713077499) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[243]] /* weaDat.weaBus.relHum variable */),(-0.378035286922501) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[243]] /* weaDat.weaBus.relHum variable */)) + (0.0016349032219037793) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1319]] /* weaDat.pAtmSel.p PARAM */)) * (exp(DIVISION_SIM(4102.99,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[237]] /* weaDat.weaBus.TDryBul variable */) - 35.719,"weaDat.weaBus.TDryBul - 35.719",equationIndexes) - 17.2799))),"(-0.378035286922501) * weaDat.weaBus.relHum + 0.0016349032219037793 * weaDat.pAtmSel.p * exp(4102.99 / (weaDat.weaBus.TDryBul - 35.719) - 17.2799)",equationIndexes));
  threadData->lastEquationSolved = 356;
}

void ForcedConvection_30s_eqFunction_357(DATA*, threadData_t*);
void ForcedConvection_30s_eqFunction_358(DATA*, threadData_t*);
void ForcedConvection_30s_eqFunction_359(DATA*, threadData_t*);
/*
equation index: 364
indexNonlinear: 0
type: NONLINEAR

vars: {weaDat.weaBus.TWetBul}
eqns: {357, 358, 359}
*/
void ForcedConvection_30s_eqFunction_364(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,364};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 364 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[238]] /* weaDat.weaBus.TWetBul variable */);
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,364};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 364 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[238]] /* weaDat.weaBus.TWetBul variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  threadData->lastEquationSolved = 364;
}

/*
equation index: 365
type: SIMPLE_ASSIGN
$PRE.weaDat.conTimMin.tNext = 0.0
*/
void ForcedConvection_30s_eqFunction_365(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,365};
  (data->simulationInfo->realVarsPre[296] /* weaDat.conTimMin.tNext DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 365;
}

/*
equation index: 366
type: SIMPLE_ASSIGN
$whenCondition1 = weaDat.conTimMin.canRepeatWeatherFile and weaDat.add30Min.y > $PRE.weaDat.conTimMin.tNext
*/
void ForcedConvection_30s_eqFunction_366(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,366};
  modelica_boolean tmp9;
  tmp9 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[186]] /* weaDat.add30Min.y variable */),(data->simulationInfo->realVarsPre[296] /* weaDat.conTimMin.tNext DISCRETE */));
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[281]] /* weaDat.conTimMin.canRepeatWeatherFile PARAM */) && tmp9);
  threadData->lastEquationSolved = 366;
}

/*
equation index: 367
type: SIMPLE_ASSIGN
$PRE.weaDat.conTim.tNext = 0.0
*/
void ForcedConvection_30s_eqFunction_367(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,367};
  (data->simulationInfo->realVarsPre[295] /* weaDat.conTim.tNext DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 367;
}

/*
equation index: 368
type: SIMPLE_ASSIGN
$whenCondition2 = weaDat.conTim.canRepeatWeatherFile and weaDat.weaBus.cloTim > $PRE.weaDat.conTim.tNext
*/
void ForcedConvection_30s_eqFunction_368(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,368};
  modelica_boolean tmp10;
  tmp10 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[240]] /* weaDat.weaBus.cloTim variable */),(data->simulationInfo->realVarsPre[295] /* weaDat.conTim.tNext DISCRETE */));
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1]] /* $whenCondition2 DISCRETE */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[280]] /* weaDat.conTim.canRepeatWeatherFile PARAM */) && tmp10);
  threadData->lastEquationSolved = 368;
}

/*
equation index: 369
type: SIMPLE_ASSIGN
roo.air.senHeaFlo.port_b.Q_flow = 0.0
*/
void ForcedConvection_30s_eqFunction_369(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,369};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[80]] /* roo.air.senHeaFlo.port_b.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 369;
}

/*
equation index: 370
type: SIMPLE_ASSIGN
roo.air.cfd.sampleTrigger = false
*/
void ForcedConvection_30s_eqFunction_370(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,370};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* roo.air.cfd.sampleTrigger DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 370;
}

/*
equation index: 371
type: ALGORITHM

  $whenCondition3 := $START.$whenCondition3;
  $whenCondition3 := roo.air.cfd.sampleTrigger;
*/
void ForcedConvection_30s_eqFunction_371(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,371};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[2]] /* $whenCondition3 DISCRETE */) = (data->modelData->booleanVarsData[2] /* $whenCondition3 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[2]] /* $whenCondition3 DISCRETE */) = (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* roo.air.cfd.sampleTrigger DISCRETE */);
  threadData->lastEquationSolved = 371;
}

/*
equation index: 372
type: SIMPLE_ASSIGN
$whenCondition4 = roo.air.cfd.sampleTrigger
*/
void ForcedConvection_30s_eqFunction_372(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,372};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) = (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* roo.air.cfd.sampleTrigger DISCRETE */);
  threadData->lastEquationSolved = 372;
}
extern void ForcedConvection_30s_eqFunction_646(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_647(DATA *data, threadData_t *threadData);


/*
equation index: 375
type: SIMPLE_ASSIGN
roo.air.cfd.uWri[1] = roo.air.cfd.u[1]
*/
void ForcedConvection_30s_eqFunction_375(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,375};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[267]] /* roo.air.cfd.uWri[1] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[58]] /* roo.air.cfd.u[1] variable */);
  threadData->lastEquationSolved = 375;
}

/*
equation index: 376
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uWri[1] = roo.air.cfd.uWri[1]
*/
void ForcedConvection_30s_eqFunction_376(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,376};
  (data->simulationInfo->realVarsPre[267] /* roo.air.cfd.uWri[1] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[267]] /* roo.air.cfd.uWri[1] DISCRETE */);
  threadData->lastEquationSolved = 376;
}
extern void ForcedConvection_30s_eqFunction_644(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_645(DATA *data, threadData_t *threadData);


/*
equation index: 379
type: SIMPLE_ASSIGN
roo.air.cfd.uWri[2] = roo.air.cfd.u[2]
*/
void ForcedConvection_30s_eqFunction_379(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,379};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[268]] /* roo.air.cfd.uWri[2] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[59]] /* roo.air.cfd.u[2] variable */);
  threadData->lastEquationSolved = 379;
}

/*
equation index: 380
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uWri[2] = roo.air.cfd.uWri[2]
*/
void ForcedConvection_30s_eqFunction_380(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,380};
  (data->simulationInfo->realVarsPre[268] /* roo.air.cfd.uWri[2] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[268]] /* roo.air.cfd.uWri[2] DISCRETE */);
  threadData->lastEquationSolved = 380;
}
extern void ForcedConvection_30s_eqFunction_642(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_643(DATA *data, threadData_t *threadData);


/*
equation index: 383
type: SIMPLE_ASSIGN
roo.air.cfd.uWri[3] = roo.air.cfd.u[3]
*/
void ForcedConvection_30s_eqFunction_383(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,383};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[269]] /* roo.air.cfd.uWri[3] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[60]] /* roo.air.cfd.u[3] variable */);
  threadData->lastEquationSolved = 383;
}

/*
equation index: 384
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uWri[3] = roo.air.cfd.uWri[3]
*/
void ForcedConvection_30s_eqFunction_384(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,384};
  (data->simulationInfo->realVarsPre[269] /* roo.air.cfd.uWri[3] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[269]] /* roo.air.cfd.uWri[3] DISCRETE */);
  threadData->lastEquationSolved = 384;
}
extern void ForcedConvection_30s_eqFunction_640(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_641(DATA *data, threadData_t *threadData);


/*
equation index: 387
type: SIMPLE_ASSIGN
roo.air.cfd.uWri[4] = roo.air.cfd.u[4]
*/
void ForcedConvection_30s_eqFunction_387(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,387};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[270]] /* roo.air.cfd.uWri[4] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[61]] /* roo.air.cfd.u[4] variable */);
  threadData->lastEquationSolved = 387;
}

/*
equation index: 388
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uWri[4] = roo.air.cfd.uWri[4]
*/
void ForcedConvection_30s_eqFunction_388(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,388};
  (data->simulationInfo->realVarsPre[270] /* roo.air.cfd.uWri[4] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[270]] /* roo.air.cfd.uWri[4] DISCRETE */);
  threadData->lastEquationSolved = 388;
}
extern void ForcedConvection_30s_eqFunction_638(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_639(DATA *data, threadData_t *threadData);


/*
equation index: 391
type: SIMPLE_ASSIGN
roo.air.cfd.uWri[5] = roo.air.cfd.u[5]
*/
void ForcedConvection_30s_eqFunction_391(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,391};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[271]] /* roo.air.cfd.uWri[5] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[62]] /* roo.air.cfd.u[5] variable */);
  threadData->lastEquationSolved = 391;
}

/*
equation index: 392
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uWri[5] = roo.air.cfd.uWri[5]
*/
void ForcedConvection_30s_eqFunction_392(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,392};
  (data->simulationInfo->realVarsPre[271] /* roo.air.cfd.uWri[5] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[271]] /* roo.air.cfd.uWri[5] DISCRETE */);
  threadData->lastEquationSolved = 392;
}
extern void ForcedConvection_30s_eqFunction_636(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_637(DATA *data, threadData_t *threadData);


/*
equation index: 395
type: SIMPLE_ASSIGN
roo.air.cfd.uWri[6] = roo.air.cfd.u[6]
*/
void ForcedConvection_30s_eqFunction_395(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,395};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[272]] /* roo.air.cfd.uWri[6] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[63]] /* roo.air.cfd.u[6] variable */);
  threadData->lastEquationSolved = 395;
}

/*
equation index: 396
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uWri[6] = roo.air.cfd.uWri[6]
*/
void ForcedConvection_30s_eqFunction_396(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,396};
  (data->simulationInfo->realVarsPre[272] /* roo.air.cfd.uWri[6] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[272]] /* roo.air.cfd.uWri[6] DISCRETE */);
  threadData->lastEquationSolved = 396;
}
extern void ForcedConvection_30s_eqFunction_632(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_633(DATA *data, threadData_t *threadData);


/*
equation index: 399
type: SIMPLE_ASSIGN
roo.air.cfd.uWri[9] = roo.air.cfd.u[9]
*/
void ForcedConvection_30s_eqFunction_399(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,399};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[275]] /* roo.air.cfd.uWri[9] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[66]] /* roo.air.cfd.u[9] variable */);
  threadData->lastEquationSolved = 399;
}

/*
equation index: 400
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uWri[9] = roo.air.cfd.uWri[9]
*/
void ForcedConvection_30s_eqFunction_400(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,400};
  (data->simulationInfo->realVarsPre[275] /* roo.air.cfd.uWri[9] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[275]] /* roo.air.cfd.uWri[9] DISCRETE */);
  threadData->lastEquationSolved = 400;
}
extern void ForcedConvection_30s_eqFunction_630(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_631(DATA *data, threadData_t *threadData);


/*
equation index: 403
type: SIMPLE_ASSIGN
roo.air.cfd.uWri[10] = roo.air.cfd.u[10]
*/
void ForcedConvection_30s_eqFunction_403(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,403};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[276]] /* roo.air.cfd.uWri[10] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[67]] /* roo.air.cfd.u[10] variable */);
  threadData->lastEquationSolved = 403;
}

/*
equation index: 404
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uWri[10] = roo.air.cfd.uWri[10]
*/
void ForcedConvection_30s_eqFunction_404(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,404};
  (data->simulationInfo->realVarsPre[276] /* roo.air.cfd.uWri[10] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[276]] /* roo.air.cfd.uWri[10] DISCRETE */);
  threadData->lastEquationSolved = 404;
}
extern void ForcedConvection_30s_eqFunction_520(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_521(DATA *data, threadData_t *threadData);


/*
equation index: 407
type: SIMPLE_ASSIGN
bounIn.ports[1].h_outflow = 1006.0 * (-273.15 + bounIn.T) * (1.0 - bounIn.X_in_internal[1]) + (2.5010145e6 + 1860.0 * (-273.15 + bounIn.T)) * bounIn.X_in_internal[1]
*/
void ForcedConvection_30s_eqFunction_407(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,407};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[56]] /* bounIn.ports[1].h_outflow variable */) = (1006.0) * ((-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[12]] /* bounIn.T PARAM */)) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[54]] /* bounIn.X_in_internal[1] variable */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[12]] /* bounIn.T PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[54]] /* bounIn.X_in_internal[1] variable */));
  threadData->lastEquationSolved = 407;
}
extern void ForcedConvection_30s_eqFunction_519(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_529(DATA *data, threadData_t *threadData);


/*
equation index: 410
type: SIMPLE_ASSIGN
roo.air.cfd.uWri[12] = roo.air.cfd.u[12]
*/
void ForcedConvection_30s_eqFunction_410(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,410};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[278]] /* roo.air.cfd.uWri[12] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[69]] /* roo.air.cfd.u[12] variable */);
  threadData->lastEquationSolved = 410;
}

/*
equation index: 411
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uWri[12] = roo.air.cfd.uWri[12]
*/
void ForcedConvection_30s_eqFunction_411(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,411};
  (data->simulationInfo->realVarsPre[278] /* roo.air.cfd.uWri[12] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[278]] /* roo.air.cfd.uWri[12] DISCRETE */);
  threadData->lastEquationSolved = 411;
}
extern void ForcedConvection_30s_eqFunction_523(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_524(DATA *data, threadData_t *threadData);


/*
equation index: 414
type: SIMPLE_ASSIGN
bouOut.ports[1].h_outflow = 1006.0 * (-273.15 + bouOut.T) * (1.0 - bouOut.X_in_internal[1]) + (2.5010145e6 + 1860.0 * (-273.15 + bouOut.T)) * bouOut.X_in_internal[1]
*/
void ForcedConvection_30s_eqFunction_414(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,414};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[53]] /* bouOut.ports[1].h_outflow variable */) = (1006.0) * ((-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[8]] /* bouOut.T PARAM */)) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[50]] /* bouOut.X_in_internal[1] variable */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[8]] /* bouOut.T PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[50]] /* bouOut.X_in_internal[1] variable */));
  threadData->lastEquationSolved = 414;
}
extern void ForcedConvection_30s_eqFunction_518(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_530(DATA *data, threadData_t *threadData);


/*
equation index: 417
type: SIMPLE_ASSIGN
roo.air.cfd.uWri[13] = roo.air.cfd.u[13]
*/
void ForcedConvection_30s_eqFunction_417(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,417};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[279]] /* roo.air.cfd.uWri[13] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[70]] /* roo.air.cfd.u[13] variable */);
  threadData->lastEquationSolved = 417;
}

/*
equation index: 418
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uWri[13] = roo.air.cfd.uWri[13]
*/
void ForcedConvection_30s_eqFunction_418(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,418};
  (data->simulationInfo->realVarsPre[279] /* roo.air.cfd.uWri[13] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[279]] /* roo.air.cfd.uWri[13] DISCRETE */);
  threadData->lastEquationSolved = 418;
}
extern void ForcedConvection_30s_eqFunction_628(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_629(DATA *data, threadData_t *threadData);


/*
equation index: 421
type: SIMPLE_ASSIGN
roo.air.cfd.uWri[14] = roo.air.cfd.u[14]
*/
void ForcedConvection_30s_eqFunction_421(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,421};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[280]] /* roo.air.cfd.uWri[14] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[71]] /* roo.air.cfd.u[14] variable */);
  threadData->lastEquationSolved = 421;
}

/*
equation index: 422
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uWri[14] = roo.air.cfd.uWri[14]
*/
void ForcedConvection_30s_eqFunction_422(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,422};
  (data->simulationInfo->realVarsPre[280] /* roo.air.cfd.uWri[14] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[280]] /* roo.air.cfd.uWri[14] DISCRETE */);
  threadData->lastEquationSolved = 422;
}
extern void ForcedConvection_30s_eqFunction_634(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_635(DATA *data, threadData_t *threadData);


/*
equation index: 425
type: SIMPLE_ASSIGN
roo.air.cfd.uWri[15] = roo.air.cfd.u[15]
*/
void ForcedConvection_30s_eqFunction_425(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,425};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[281]] /* roo.air.cfd.uWri[15] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[72]] /* roo.air.cfd.u[15] variable */);
  threadData->lastEquationSolved = 425;
}

/*
equation index: 426
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uWri[15] = roo.air.cfd.uWri[15]
*/
void ForcedConvection_30s_eqFunction_426(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,426};
  (data->simulationInfo->realVarsPre[281] /* roo.air.cfd.uWri[15] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[281]] /* roo.air.cfd.uWri[15] DISCRETE */);
  threadData->lastEquationSolved = 426;
}
extern void ForcedConvection_30s_eqFunction_522(DATA *data, threadData_t *threadData);


/*
equation index: 428
type: SIMPLE_ASSIGN
roo.air.cfd.modTimRea = time
*/
void ForcedConvection_30s_eqFunction_428(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,428};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[251]] /* roo.air.cfd.modTimRea DISCRETE */) = data->localData[0]->timeValue;
  threadData->lastEquationSolved = 428;
}

/*
equation index: 429
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.modTimRea = roo.air.cfd.modTimRea
*/
void ForcedConvection_30s_eqFunction_429(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,429};
  (data->simulationInfo->realVarsPre[251] /* roo.air.cfd.modTimRea DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[251]] /* roo.air.cfd.modTimRea DISCRETE */);
  threadData->lastEquationSolved = 429;
}

/*
equation index: 430
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.retVal = 0.0
*/
void ForcedConvection_30s_eqFunction_430(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,430};
  (data->simulationInfo->integerVarsPre[0] /* roo.air.cfd.retVal DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 430;
}

/*
equation index: 431
type: SIMPLE_ASSIGN
roo.air.cfd.retVal = $PRE.roo.air.cfd.retVal
*/
void ForcedConvection_30s_eqFunction_431(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,431};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[0]] /* roo.air.cfd.retVal DISCRETE */) = (data->simulationInfo->integerVarsPre[0] /* roo.air.cfd.retVal DISCRETE */);
  threadData->lastEquationSolved = 431;
}

/*
equation index: 432
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.firstTrigger = false
*/
void ForcedConvection_30s_eqFunction_432(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,432};
  (data->simulationInfo->booleanVarsPre[4] /* roo.air.cfd.firstTrigger DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 432;
}

/*
equation index: 433
type: SIMPLE_ASSIGN
roo.air.cfd.firstTrigger = $PRE.roo.air.cfd.firstTrigger
*/
void ForcedConvection_30s_eqFunction_433(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,433};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[4]] /* roo.air.cfd.firstTrigger DISCRETE */) = (data->simulationInfo->booleanVarsPre[4] /* roo.air.cfd.firstTrigger DISCRETE */);
  threadData->lastEquationSolved = 433;
}

/*
equation index: 434
type: SIMPLE_ASSIGN
roo.air.cfd.uIntPre[1] = 0.0
*/
void ForcedConvection_30s_eqFunction_434(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,434};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[252]] /* roo.air.cfd.uIntPre[1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 434;
}

/*
equation index: 435
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uIntPre[1] = roo.air.cfd.uIntPre[1]
*/
void ForcedConvection_30s_eqFunction_435(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,435};
  (data->simulationInfo->realVarsPre[252] /* roo.air.cfd.uIntPre[1] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[252]] /* roo.air.cfd.uIntPre[1] DISCRETE */);
  threadData->lastEquationSolved = 435;
}

/*
equation index: 436
type: SIMPLE_ASSIGN
roo.air.cfd.uIntPre[2] = 0.0
*/
void ForcedConvection_30s_eqFunction_436(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,436};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[253]] /* roo.air.cfd.uIntPre[2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 436;
}

/*
equation index: 437
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uIntPre[2] = roo.air.cfd.uIntPre[2]
*/
void ForcedConvection_30s_eqFunction_437(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,437};
  (data->simulationInfo->realVarsPre[253] /* roo.air.cfd.uIntPre[2] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[253]] /* roo.air.cfd.uIntPre[2] DISCRETE */);
  threadData->lastEquationSolved = 437;
}

/*
equation index: 438
type: SIMPLE_ASSIGN
roo.air.cfd.uIntPre[3] = 0.0
*/
void ForcedConvection_30s_eqFunction_438(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,438};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[254]] /* roo.air.cfd.uIntPre[3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 438;
}

/*
equation index: 439
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uIntPre[3] = roo.air.cfd.uIntPre[3]
*/
void ForcedConvection_30s_eqFunction_439(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,439};
  (data->simulationInfo->realVarsPre[254] /* roo.air.cfd.uIntPre[3] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[254]] /* roo.air.cfd.uIntPre[3] DISCRETE */);
  threadData->lastEquationSolved = 439;
}

/*
equation index: 440
type: SIMPLE_ASSIGN
roo.air.cfd.uIntPre[4] = 0.0
*/
void ForcedConvection_30s_eqFunction_440(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,440};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[255]] /* roo.air.cfd.uIntPre[4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 440;
}

/*
equation index: 441
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uIntPre[4] = roo.air.cfd.uIntPre[4]
*/
void ForcedConvection_30s_eqFunction_441(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,441};
  (data->simulationInfo->realVarsPre[255] /* roo.air.cfd.uIntPre[4] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[255]] /* roo.air.cfd.uIntPre[4] DISCRETE */);
  threadData->lastEquationSolved = 441;
}

/*
equation index: 442
type: SIMPLE_ASSIGN
roo.air.cfd.uIntPre[5] = 0.0
*/
void ForcedConvection_30s_eqFunction_442(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,442};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[256]] /* roo.air.cfd.uIntPre[5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 442;
}

/*
equation index: 443
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uIntPre[5] = roo.air.cfd.uIntPre[5]
*/
void ForcedConvection_30s_eqFunction_443(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,443};
  (data->simulationInfo->realVarsPre[256] /* roo.air.cfd.uIntPre[5] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[256]] /* roo.air.cfd.uIntPre[5] DISCRETE */);
  threadData->lastEquationSolved = 443;
}

/*
equation index: 444
type: SIMPLE_ASSIGN
roo.air.cfd.uIntPre[6] = 0.0
*/
void ForcedConvection_30s_eqFunction_444(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,444};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[257]] /* roo.air.cfd.uIntPre[6] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 444;
}

/*
equation index: 445
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uIntPre[6] = roo.air.cfd.uIntPre[6]
*/
void ForcedConvection_30s_eqFunction_445(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,445};
  (data->simulationInfo->realVarsPre[257] /* roo.air.cfd.uIntPre[6] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[257]] /* roo.air.cfd.uIntPre[6] DISCRETE */);
  threadData->lastEquationSolved = 445;
}

/*
equation index: 446
type: SIMPLE_ASSIGN
roo.air.cfd.uIntPre[7] = 0.0
*/
void ForcedConvection_30s_eqFunction_446(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,446};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* roo.air.cfd.uIntPre[7] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 446;
}

/*
equation index: 447
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uIntPre[7] = roo.air.cfd.uIntPre[7]
*/
void ForcedConvection_30s_eqFunction_447(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,447};
  (data->simulationInfo->realVarsPre[258] /* roo.air.cfd.uIntPre[7] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* roo.air.cfd.uIntPre[7] DISCRETE */);
  threadData->lastEquationSolved = 447;
}

/*
equation index: 448
type: SIMPLE_ASSIGN
roo.air.cfd.uIntPre[8] = 0.0
*/
void ForcedConvection_30s_eqFunction_448(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,448};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[259]] /* roo.air.cfd.uIntPre[8] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 448;
}

/*
equation index: 449
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uIntPre[8] = roo.air.cfd.uIntPre[8]
*/
void ForcedConvection_30s_eqFunction_449(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,449};
  (data->simulationInfo->realVarsPre[259] /* roo.air.cfd.uIntPre[8] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[259]] /* roo.air.cfd.uIntPre[8] DISCRETE */);
  threadData->lastEquationSolved = 449;
}

/*
equation index: 450
type: SIMPLE_ASSIGN
roo.air.cfd.uIntPre[9] = 0.0
*/
void ForcedConvection_30s_eqFunction_450(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,450};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[260]] /* roo.air.cfd.uIntPre[9] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 450;
}

/*
equation index: 451
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uIntPre[9] = roo.air.cfd.uIntPre[9]
*/
void ForcedConvection_30s_eqFunction_451(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,451};
  (data->simulationInfo->realVarsPre[260] /* roo.air.cfd.uIntPre[9] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[260]] /* roo.air.cfd.uIntPre[9] DISCRETE */);
  threadData->lastEquationSolved = 451;
}

/*
equation index: 452
type: SIMPLE_ASSIGN
roo.air.cfd.uIntPre[10] = 0.0
*/
void ForcedConvection_30s_eqFunction_452(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,452};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[261]] /* roo.air.cfd.uIntPre[10] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 452;
}

/*
equation index: 453
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uIntPre[10] = roo.air.cfd.uIntPre[10]
*/
void ForcedConvection_30s_eqFunction_453(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,453};
  (data->simulationInfo->realVarsPre[261] /* roo.air.cfd.uIntPre[10] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[261]] /* roo.air.cfd.uIntPre[10] DISCRETE */);
  threadData->lastEquationSolved = 453;
}

/*
equation index: 454
type: SIMPLE_ASSIGN
roo.air.cfd.uIntPre[11] = 0.0
*/
void ForcedConvection_30s_eqFunction_454(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,454};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[262]] /* roo.air.cfd.uIntPre[11] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 454;
}

/*
equation index: 455
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uIntPre[11] = roo.air.cfd.uIntPre[11]
*/
void ForcedConvection_30s_eqFunction_455(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,455};
  (data->simulationInfo->realVarsPre[262] /* roo.air.cfd.uIntPre[11] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[262]] /* roo.air.cfd.uIntPre[11] DISCRETE */);
  threadData->lastEquationSolved = 455;
}

/*
equation index: 456
type: SIMPLE_ASSIGN
roo.air.cfd.uIntPre[12] = 0.0
*/
void ForcedConvection_30s_eqFunction_456(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,456};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[263]] /* roo.air.cfd.uIntPre[12] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 456;
}

/*
equation index: 457
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uIntPre[12] = roo.air.cfd.uIntPre[12]
*/
void ForcedConvection_30s_eqFunction_457(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,457};
  (data->simulationInfo->realVarsPre[263] /* roo.air.cfd.uIntPre[12] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[263]] /* roo.air.cfd.uIntPre[12] DISCRETE */);
  threadData->lastEquationSolved = 457;
}

/*
equation index: 458
type: SIMPLE_ASSIGN
roo.air.cfd.uIntPre[13] = 0.0
*/
void ForcedConvection_30s_eqFunction_458(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,458};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[264]] /* roo.air.cfd.uIntPre[13] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 458;
}

/*
equation index: 459
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uIntPre[13] = roo.air.cfd.uIntPre[13]
*/
void ForcedConvection_30s_eqFunction_459(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,459};
  (data->simulationInfo->realVarsPre[264] /* roo.air.cfd.uIntPre[13] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[264]] /* roo.air.cfd.uIntPre[13] DISCRETE */);
  threadData->lastEquationSolved = 459;
}

/*
equation index: 460
type: SIMPLE_ASSIGN
roo.air.cfd.uIntPre[14] = 0.0
*/
void ForcedConvection_30s_eqFunction_460(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,460};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[265]] /* roo.air.cfd.uIntPre[14] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 460;
}

/*
equation index: 461
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uIntPre[14] = roo.air.cfd.uIntPre[14]
*/
void ForcedConvection_30s_eqFunction_461(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,461};
  (data->simulationInfo->realVarsPre[265] /* roo.air.cfd.uIntPre[14] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[265]] /* roo.air.cfd.uIntPre[14] DISCRETE */);
  threadData->lastEquationSolved = 461;
}

/*
equation index: 462
type: SIMPLE_ASSIGN
roo.air.cfd.uIntPre[15] = 0.0
*/
void ForcedConvection_30s_eqFunction_462(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,462};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[266]] /* roo.air.cfd.uIntPre[15] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 462;
}

/*
equation index: 463
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uIntPre[15] = roo.air.cfd.uIntPre[15]
*/
void ForcedConvection_30s_eqFunction_463(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,463};
  (data->simulationInfo->realVarsPre[266] /* roo.air.cfd.uIntPre[15] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[266]] /* roo.air.cfd.uIntPre[15] DISCRETE */);
  threadData->lastEquationSolved = 463;
}

/*
equation index: 464
type: SIMPLE_ASSIGN
roo.radTem.epsAGla[1] = roo.radTem.AGla[1] * roo.radTem.epsGla[1]
*/
void ForcedConvection_30s_eqFunction_464(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,464};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1192]] /* roo.radTem.epsAGla[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1015]] /* roo.radTem.AGla[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1214]] /* roo.radTem.epsGla[1] PARAM */));
  threadData->lastEquationSolved = 464;
}

/*
equation index: 465
type: SIMPLE_ASSIGN
roo.radTem.epsAOpa[12] = roo.radTem.epsConExtWinFra[1] * roo.radTem.AConExtWinFra[1]
*/
void ForcedConvection_30s_eqFunction_465(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,465};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1204]] /* roo.radTem.epsAOpa[12] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1208]] /* roo.radTem.epsConExtWinFra[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1011]] /* roo.radTem.AConExtWinFra[1] PARAM */));
  threadData->lastEquationSolved = 465;
}

/*
equation index: 466
type: SIMPLE_ASSIGN
roo.radTem.epsAOpa[11] = roo.radTem.epsConExtWinOpa[1] * roo.radTem.AConExtWinOpa[1]
*/
void ForcedConvection_30s_eqFunction_466(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,466};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1203]] /* roo.radTem.epsAOpa[11] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1209]] /* roo.radTem.epsConExtWinOpa[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1013]] /* roo.radTem.AConExtWinOpa[1] PARAM */));
  threadData->lastEquationSolved = 466;
}

/*
equation index: 467
type: SIMPLE_ASSIGN
roo.radTem.epsAOpa[10] = roo.radTem.epsSurBou[6] * roo.radTem.ASurBou[6]
*/
void ForcedConvection_30s_eqFunction_467(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,467};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1202]] /* roo.radTem.epsAOpa[10] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1221]] /* roo.radTem.epsSurBou[6] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1021]] /* roo.radTem.ASurBou[6] PARAM */));
  threadData->lastEquationSolved = 467;
}

/*
equation index: 468
type: SIMPLE_ASSIGN
roo.radTem.epsAOpa[9] = roo.radTem.epsSurBou[5] * roo.radTem.ASurBou[5]
*/
void ForcedConvection_30s_eqFunction_468(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,468};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1201]] /* roo.radTem.epsAOpa[9] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1220]] /* roo.radTem.epsSurBou[5] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1020]] /* roo.radTem.ASurBou[5] PARAM */));
  threadData->lastEquationSolved = 468;
}

/*
equation index: 469
type: SIMPLE_ASSIGN
roo.radTem.epsAOpa[8] = roo.radTem.epsSurBou[4] * roo.radTem.ASurBou[4]
*/
void ForcedConvection_30s_eqFunction_469(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,469};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1200]] /* roo.radTem.epsAOpa[8] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1219]] /* roo.radTem.epsSurBou[4] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1019]] /* roo.radTem.ASurBou[4] PARAM */));
  threadData->lastEquationSolved = 469;
}

/*
equation index: 470
type: SIMPLE_ASSIGN
roo.radTem.epsAOpa[7] = roo.radTem.epsSurBou[3] * roo.radTem.ASurBou[3]
*/
void ForcedConvection_30s_eqFunction_470(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,470};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1199]] /* roo.radTem.epsAOpa[7] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1218]] /* roo.radTem.epsSurBou[3] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1018]] /* roo.radTem.ASurBou[3] PARAM */));
  threadData->lastEquationSolved = 470;
}

/*
equation index: 471
type: SIMPLE_ASSIGN
roo.radTem.epsAOpa[6] = roo.radTem.epsSurBou[2] * roo.radTem.ASurBou[2]
*/
void ForcedConvection_30s_eqFunction_471(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,471};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1198]] /* roo.radTem.epsAOpa[6] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1217]] /* roo.radTem.epsSurBou[2] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1017]] /* roo.radTem.ASurBou[2] PARAM */));
  threadData->lastEquationSolved = 471;
}

/*
equation index: 472
type: SIMPLE_ASSIGN
roo.radTem.epsAOpa[5] = roo.radTem.epsSurBou[1] * roo.radTem.ASurBou[1]
*/
void ForcedConvection_30s_eqFunction_472(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,472};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1197]] /* roo.radTem.epsAOpa[5] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1216]] /* roo.radTem.epsSurBou[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1016]] /* roo.radTem.ASurBou[1] PARAM */));
  threadData->lastEquationSolved = 472;
}

/*
equation index: 473
type: SIMPLE_ASSIGN
roo.radTem.epsAOpa[4] = roo.radTem.epsConBou[1] * roo.radTem.AConBou[1]
*/
void ForcedConvection_30s_eqFunction_473(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,473};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1196]] /* roo.radTem.epsAOpa[4] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1206]] /* roo.radTem.epsConBou[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1009]] /* roo.radTem.AConBou[1] PARAM */));
  threadData->lastEquationSolved = 473;
}

/*
equation index: 474
type: SIMPLE_ASSIGN
roo.radTem.epsAOpa[3] = roo.radTem.epsConPar_b[1] * roo.radTem.AConPar[1]
*/
void ForcedConvection_30s_eqFunction_474(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,474};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1195]] /* roo.radTem.epsAOpa[3] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1213]] /* roo.radTem.epsConPar_b[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1014]] /* roo.radTem.AConPar[1] PARAM */));
  threadData->lastEquationSolved = 474;
}

/*
equation index: 475
type: SIMPLE_ASSIGN
roo.radTem.epsAOpa[2] = roo.radTem.epsConPar_a[1] * roo.radTem.AConPar[1]
*/
void ForcedConvection_30s_eqFunction_475(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,475};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1194]] /* roo.radTem.epsAOpa[2] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1212]] /* roo.radTem.epsConPar_a[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1014]] /* roo.radTem.AConPar[1] PARAM */));
  threadData->lastEquationSolved = 475;
}

/*
equation index: 476
type: SIMPLE_ASSIGN
roo.radTem.epsAOpa[1] = roo.radTem.epsConExt[1] * roo.radTem.AConExt[1]
*/
void ForcedConvection_30s_eqFunction_476(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,476};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1193]] /* roo.radTem.epsAOpa[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1207]] /* roo.radTem.epsConExt[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1010]] /* roo.radTem.AConExt[1] PARAM */));
  threadData->lastEquationSolved = 476;
}
extern void ForcedConvection_30s_eqFunction_525(DATA *data, threadData_t *threadData);


/*
equation index: 478
type: SIMPLE_ASSIGN
roo.radTem.epsTauASha[1] = roo.radTem.AGla[1] * roo.radTem.epsGla[1]
*/
void ForcedConvection_30s_eqFunction_478(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,478};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1222]] /* roo.radTem.epsTauASha[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1015]] /* roo.radTem.AGla[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1214]] /* roo.radTem.epsGla[1] PARAM */));
  threadData->lastEquationSolved = 478;
}

/*
equation index: 479
type: SIMPLE_ASSIGN
roo.radTem.epsASha[1] = roo.radTem.AGla[1] * roo.radTem.epsSha[1]
*/
void ForcedConvection_30s_eqFunction_479(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,479};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1205]] /* roo.radTem.epsASha[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1015]] /* roo.radTem.AGla[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1215]] /* roo.radTem.epsSha[1] PARAM */));
  threadData->lastEquationSolved = 479;
}

/*
equation index: 480
type: SIMPLE_ASSIGN
roo.irRadExc.t0 = time
*/
void ForcedConvection_30s_eqFunction_480(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,480};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[773]] /* roo.irRadExc.t0 PARAM */) = data->localData[0]->timeValue;
  threadData->lastEquationSolved = 480;
}

/*
equation index: 481
type: SIMPLE_ASSIGN
roo.air.cfd.uInt[15] = 0.0
*/
void ForcedConvection_30s_eqFunction_481(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,481};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* roo.air.cfd.uInt[15] STATE(1,roo.air.cfd.u[15]) */) = 0.0;
  threadData->lastEquationSolved = 481;
}

/*
equation index: 482
type: SIMPLE_ASSIGN
roo.air.cfd.uInt[14] = 0.0
*/
void ForcedConvection_30s_eqFunction_482(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,482};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* roo.air.cfd.uInt[14] STATE(1,roo.air.cfd.u[14]) */) = 0.0;
  threadData->lastEquationSolved = 482;
}

/*
equation index: 483
type: SIMPLE_ASSIGN
roo.air.cfd.uInt[13] = 0.0
*/
void ForcedConvection_30s_eqFunction_483(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,483};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* roo.air.cfd.uInt[13] STATE(1,roo.air.cfd.u[13]) */) = 0.0;
  threadData->lastEquationSolved = 483;
}

/*
equation index: 484
type: SIMPLE_ASSIGN
roo.air.cfd.uInt[12] = 0.0
*/
void ForcedConvection_30s_eqFunction_484(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,484};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* roo.air.cfd.uInt[12] STATE(1,roo.air.cfd.u[12]) */) = 0.0;
  threadData->lastEquationSolved = 484;
}

/*
equation index: 485
type: SIMPLE_ASSIGN
roo.air.cfd.uInt[11] = 0.0
*/
void ForcedConvection_30s_eqFunction_485(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,485};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* roo.air.cfd.uInt[11] STATE(1,roo.air.cfd.u[11]) */) = 0.0;
  threadData->lastEquationSolved = 485;
}

/*
equation index: 486
type: SIMPLE_ASSIGN
roo.air.cfd.uInt[10] = 0.0
*/
void ForcedConvection_30s_eqFunction_486(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,486};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* roo.air.cfd.uInt[10] STATE(1,roo.air.cfd.u[10]) */) = 0.0;
  threadData->lastEquationSolved = 486;
}

/*
equation index: 487
type: SIMPLE_ASSIGN
roo.air.cfd.uInt[9] = 0.0
*/
void ForcedConvection_30s_eqFunction_487(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,487};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* roo.air.cfd.uInt[9] STATE(1,roo.air.cfd.u[9]) */) = 0.0;
  threadData->lastEquationSolved = 487;
}

/*
equation index: 488
type: SIMPLE_ASSIGN
roo.air.cfd.uInt[8] = 0.0
*/
void ForcedConvection_30s_eqFunction_488(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,488};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* roo.air.cfd.uInt[8] STATE(1,roo.air.cfd.u[8]) */) = 0.0;
  threadData->lastEquationSolved = 488;
}

/*
equation index: 489
type: SIMPLE_ASSIGN
roo.air.cfd.uInt[7] = 0.0
*/
void ForcedConvection_30s_eqFunction_489(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,489};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* roo.air.cfd.uInt[7] STATE(1,roo.air.cfd.u[7]) */) = 0.0;
  threadData->lastEquationSolved = 489;
}

/*
equation index: 490
type: SIMPLE_ASSIGN
roo.air.cfd.uInt[6] = 0.0
*/
void ForcedConvection_30s_eqFunction_490(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,490};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* roo.air.cfd.uInt[6] STATE(1,roo.air.cfd.u[6]) */) = 0.0;
  threadData->lastEquationSolved = 490;
}

/*
equation index: 491
type: SIMPLE_ASSIGN
roo.air.cfd.uInt[5] = 0.0
*/
void ForcedConvection_30s_eqFunction_491(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,491};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* roo.air.cfd.uInt[5] STATE(1,roo.air.cfd.u[5]) */) = 0.0;
  threadData->lastEquationSolved = 491;
}

/*
equation index: 492
type: SIMPLE_ASSIGN
roo.air.cfd.uInt[4] = 0.0
*/
void ForcedConvection_30s_eqFunction_492(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,492};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* roo.air.cfd.uInt[4] STATE(1,roo.air.cfd.u[4]) */) = 0.0;
  threadData->lastEquationSolved = 492;
}

/*
equation index: 493
type: SIMPLE_ASSIGN
roo.air.cfd.uInt[3] = 0.0
*/
void ForcedConvection_30s_eqFunction_493(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,493};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* roo.air.cfd.uInt[3] STATE(1,roo.air.cfd.u[3]) */) = 0.0;
  threadData->lastEquationSolved = 493;
}

/*
equation index: 494
type: SIMPLE_ASSIGN
roo.air.cfd.uInt[2] = 0.0
*/
void ForcedConvection_30s_eqFunction_494(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,494};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* roo.air.cfd.uInt[2] STATE(1,roo.air.cfd.u[2]) */) = 0.0;
  threadData->lastEquationSolved = 494;
}

/*
equation index: 495
type: SIMPLE_ASSIGN
roo.air.cfd.uInt[1] = 0.0
*/
void ForcedConvection_30s_eqFunction_495(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,495};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* roo.air.cfd.uInt[1] STATE(1,roo.air.cfd.u[1]) */) = 0.0;
  threadData->lastEquationSolved = 495;
}

/*
equation index: 515
type: ALGORITHM

  Buildings.ThermalZones.Detailed.Examples.FFD.ForcedConvection.roo.irRadGai.checkSurfaceAreas(0, {roo.irRadGai.datConExt[1].A}, "ForcedConvection.roo.irRadGai.datConExt");
  Buildings.ThermalZones.Detailed.Examples.FFD.ForcedConvection.roo.irRadGai.checkSurfaceAreas(0, {roo.irRadGai.datConExtWin[1].AWin}, "ForcedConvection.roo.irRadGai.datConExtWin");
  Buildings.ThermalZones.Detailed.Examples.FFD.ForcedConvection.roo.irRadGai.checkSurfaceAreas(0, {roo.irRadGai.datConPar[1].A}, "ForcedConvection.roo.irRadGai.datConPar");
  Buildings.ThermalZones.Detailed.Examples.FFD.ForcedConvection.roo.irRadGai.checkSurfaceAreas(0, {roo.irRadGai.datConBou[1].A}, "ForcedConvection.roo.irRadGai.datConBou");
  Buildings.ThermalZones.Detailed.Examples.FFD.ForcedConvection.roo.irRadGai.checkSurfaceAreas(6, {roo.irRadGai.surBou[1].A, roo.irRadGai.surBou[2].A, roo.irRadGai.surBou[3].A, roo.irRadGai.surBou[4].A, roo.irRadGai.surBou[5].A, roo.irRadGai.surBou[6].A}, "ForcedConvection.roo.irRadGai.surBou");
*/
void ForcedConvection_30s_eqFunction_515(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,515};
  real_array tmp11;
  static const MMC_DEFSTRINGLIT(tmp12,39,"ForcedConvection.roo.irRadGai.datConExt");
  real_array tmp13;
  static const MMC_DEFSTRINGLIT(tmp14,42,"ForcedConvection.roo.irRadGai.datConExtWin");
  real_array tmp15;
  static const MMC_DEFSTRINGLIT(tmp16,39,"ForcedConvection.roo.irRadGai.datConPar");
  real_array tmp17;
  static const MMC_DEFSTRINGLIT(tmp18,39,"ForcedConvection.roo.irRadGai.datConBou");
  real_array tmp19;
  static const MMC_DEFSTRINGLIT(tmp20,36,"ForcedConvection.roo.irRadGai.surBou");
  array_alloc_scalar_real_array(&tmp11, 1, (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[819]] /* roo.irRadGai.datConExt[1].A PARAM */));
  omc_Buildings_ThermalZones_Detailed_Examples_FFD_ForcedConvection_roo_irRadGai_checkSurfaceAreas(threadData, ((modelica_integer) 0), tmp11, MMC_REFSTRINGLIT(tmp12));

  array_alloc_scalar_real_array(&tmp13, 1, (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[844]] /* roo.irRadGai.datConExtWin[1].AWin PARAM */));
  omc_Buildings_ThermalZones_Detailed_Examples_FFD_ForcedConvection_roo_irRadGai_checkSurfaceAreas(threadData, ((modelica_integer) 0), tmp13, MMC_REFSTRINGLIT(tmp14));

  array_alloc_scalar_real_array(&tmp15, 1, (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[903]] /* roo.irRadGai.datConPar[1].A PARAM */));
  omc_Buildings_ThermalZones_Detailed_Examples_FFD_ForcedConvection_roo_irRadGai_checkSurfaceAreas(threadData, ((modelica_integer) 0), tmp15, MMC_REFSTRINGLIT(tmp16));

  array_alloc_scalar_real_array(&tmp17, 1, (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[798]] /* roo.irRadGai.datConBou[1].A PARAM */));
  omc_Buildings_ThermalZones_Detailed_Examples_FFD_ForcedConvection_roo_irRadGai_checkSurfaceAreas(threadData, ((modelica_integer) 0), tmp17, MMC_REFSTRINGLIT(tmp18));

  array_alloc_scalar_real_array(&tmp19, 6, (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[983]] /* roo.irRadGai.surBou[1].A PARAM */), (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[984]] /* roo.irRadGai.surBou[2].A PARAM */), (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[985]] /* roo.irRadGai.surBou[3].A PARAM */), (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[986]] /* roo.irRadGai.surBou[4].A PARAM */), (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[987]] /* roo.irRadGai.surBou[5].A PARAM */), (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[988]] /* roo.irRadGai.surBou[6].A PARAM */));
  omc_Buildings_ThermalZones_Detailed_Examples_FFD_ForcedConvection_roo_irRadGai_checkSurfaceAreas(threadData, ((modelica_integer) 6), tmp19, MMC_REFSTRINGLIT(tmp20));
  threadData->lastEquationSolved = 515;
}

/*
equation index: 514
type: ALGORITHM

  Buildings.ThermalZones.Detailed.Examples.FFD.ForcedConvection.roo.irRadExc.checkSurfaceAreas(0, {roo.irRadExc.datConExt[1].A}, "ForcedConvection.roo.irRadExc.datConExt");
  Buildings.ThermalZones.Detailed.Examples.FFD.ForcedConvection.roo.irRadExc.checkSurfaceAreas(0, {roo.irRadExc.datConExtWin[1].AWin}, "ForcedConvection.roo.irRadExc.datConExtWin");
  Buildings.ThermalZones.Detailed.Examples.FFD.ForcedConvection.roo.irRadExc.checkSurfaceAreas(0, {roo.irRadExc.datConPar[1].A}, "ForcedConvection.roo.irRadExc.datConPar");
  Buildings.ThermalZones.Detailed.Examples.FFD.ForcedConvection.roo.irRadExc.checkSurfaceAreas(0, {roo.irRadExc.datConBou[1].A}, "ForcedConvection.roo.irRadExc.datConBou");
  Buildings.ThermalZones.Detailed.Examples.FFD.ForcedConvection.roo.irRadExc.checkSurfaceAreas(6, {roo.irRadExc.surBou[1].A, roo.irRadExc.surBou[2].A, roo.irRadExc.surBou[3].A, roo.irRadExc.surBou[4].A, roo.irRadExc.surBou[5].A, roo.irRadExc.surBou[6].A}, "ForcedConvection.roo.irRadExc.surBou");
*/
void ForcedConvection_30s_eqFunction_514(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,514};
  real_array tmp21;
  static const MMC_DEFSTRINGLIT(tmp22,39,"ForcedConvection.roo.irRadExc.datConExt");
  real_array tmp23;
  static const MMC_DEFSTRINGLIT(tmp24,42,"ForcedConvection.roo.irRadExc.datConExtWin");
  real_array tmp25;
  static const MMC_DEFSTRINGLIT(tmp26,39,"ForcedConvection.roo.irRadExc.datConPar");
  real_array tmp27;
  static const MMC_DEFSTRINGLIT(tmp28,39,"ForcedConvection.roo.irRadExc.datConBou");
  real_array tmp29;
  static const MMC_DEFSTRINGLIT(tmp30,36,"ForcedConvection.roo.irRadExc.surBou");
  array_alloc_scalar_real_array(&tmp21, 1, (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[562]] /* roo.irRadExc.datConExt[1].A PARAM */));
  omc_Buildings_ThermalZones_Detailed_Examples_FFD_ForcedConvection_roo_irRadExc_checkSurfaceAreas(threadData, ((modelica_integer) 0), tmp21, MMC_REFSTRINGLIT(tmp22));

  array_alloc_scalar_real_array(&tmp23, 1, (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[587]] /* roo.irRadExc.datConExtWin[1].AWin PARAM */));
  omc_Buildings_ThermalZones_Detailed_Examples_FFD_ForcedConvection_roo_irRadExc_checkSurfaceAreas(threadData, ((modelica_integer) 0), tmp23, MMC_REFSTRINGLIT(tmp24));

  array_alloc_scalar_real_array(&tmp25, 1, (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[646]] /* roo.irRadExc.datConPar[1].A PARAM */));
  omc_Buildings_ThermalZones_Detailed_Examples_FFD_ForcedConvection_roo_irRadExc_checkSurfaceAreas(threadData, ((modelica_integer) 0), tmp25, MMC_REFSTRINGLIT(tmp26));

  array_alloc_scalar_real_array(&tmp27, 1, (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[541]] /* roo.irRadExc.datConBou[1].A PARAM */));
  omc_Buildings_ThermalZones_Detailed_Examples_FFD_ForcedConvection_roo_irRadExc_checkSurfaceAreas(threadData, ((modelica_integer) 0), tmp27, MMC_REFSTRINGLIT(tmp28));

  array_alloc_scalar_real_array(&tmp29, 6, (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[749]] /* roo.irRadExc.surBou[1].A PARAM */), (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[750]] /* roo.irRadExc.surBou[2].A PARAM */), (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[751]] /* roo.irRadExc.surBou[3].A PARAM */), (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[752]] /* roo.irRadExc.surBou[4].A PARAM */), (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[753]] /* roo.irRadExc.surBou[5].A PARAM */), (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[754]] /* roo.irRadExc.surBou[6].A PARAM */));
  omc_Buildings_ThermalZones_Detailed_Examples_FFD_ForcedConvection_roo_irRadExc_checkSurfaceAreas(threadData, ((modelica_integer) 6), tmp29, MMC_REFSTRINGLIT(tmp30));
  threadData->lastEquationSolved = 514;
}

/*
equation index: 513
type: ALGORITHM

  Buildings.ThermalZones.Detailed.Examples.FFD.ForcedConvection.roo.radTem.checkSurfaceAreas(0, {roo.radTem.datConExt[1].A}, "ForcedConvection.roo.radTem.datConExt");
  Buildings.ThermalZones.Detailed.Examples.FFD.ForcedConvection.roo.radTem.checkSurfaceAreas(0, {roo.radTem.datConExtWin[1].AWin}, "ForcedConvection.roo.radTem.datConExtWin");
  Buildings.ThermalZones.Detailed.Examples.FFD.ForcedConvection.roo.radTem.checkSurfaceAreas(0, {roo.radTem.datConPar[1].A}, "ForcedConvection.roo.radTem.datConPar");
  Buildings.ThermalZones.Detailed.Examples.FFD.ForcedConvection.roo.radTem.checkSurfaceAreas(0, {roo.radTem.datConBou[1].A}, "ForcedConvection.roo.radTem.datConBou");
  Buildings.ThermalZones.Detailed.Examples.FFD.ForcedConvection.roo.radTem.checkSurfaceAreas(6, {roo.radTem.surBou[1].A, roo.radTem.surBou[2].A, roo.radTem.surBou[3].A, roo.radTem.surBou[4].A, roo.radTem.surBou[5].A, roo.radTem.surBou[6].A}, "ForcedConvection.roo.radTem.surBou");
*/
void ForcedConvection_30s_eqFunction_513(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,513};
  real_array tmp31;
  static const MMC_DEFSTRINGLIT(tmp32,37,"ForcedConvection.roo.radTem.datConExt");
  real_array tmp33;
  static const MMC_DEFSTRINGLIT(tmp34,40,"ForcedConvection.roo.radTem.datConExtWin");
  real_array tmp35;
  static const MMC_DEFSTRINGLIT(tmp36,37,"ForcedConvection.roo.radTem.datConPar");
  real_array tmp37;
  static const MMC_DEFSTRINGLIT(tmp38,37,"ForcedConvection.roo.radTem.datConBou");
  real_array tmp39;
  static const MMC_DEFSTRINGLIT(tmp40,34,"ForcedConvection.roo.radTem.surBou");
  array_alloc_scalar_real_array(&tmp31, 1, (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1043]] /* roo.radTem.datConExt[1].A PARAM */));
  omc_Buildings_ThermalZones_Detailed_Examples_FFD_ForcedConvection_roo_radTem_checkSurfaceAreas(threadData, ((modelica_integer) 0), tmp31, MMC_REFSTRINGLIT(tmp32));

  array_alloc_scalar_real_array(&tmp33, 1, (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1068]] /* roo.radTem.datConExtWin[1].AWin PARAM */));
  omc_Buildings_ThermalZones_Detailed_Examples_FFD_ForcedConvection_roo_radTem_checkSurfaceAreas(threadData, ((modelica_integer) 0), tmp33, MMC_REFSTRINGLIT(tmp34));

  array_alloc_scalar_real_array(&tmp35, 1, (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1127]] /* roo.radTem.datConPar[1].A PARAM */));
  omc_Buildings_ThermalZones_Detailed_Examples_FFD_ForcedConvection_roo_radTem_checkSurfaceAreas(threadData, ((modelica_integer) 0), tmp35, MMC_REFSTRINGLIT(tmp36));

  array_alloc_scalar_real_array(&tmp37, 1, (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1022]] /* roo.radTem.datConBou[1].A PARAM */));
  omc_Buildings_ThermalZones_Detailed_Examples_FFD_ForcedConvection_roo_radTem_checkSurfaceAreas(threadData, ((modelica_integer) 0), tmp37, MMC_REFSTRINGLIT(tmp38));

  array_alloc_scalar_real_array(&tmp39, 6, (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1223]] /* roo.radTem.surBou[1].A PARAM */), (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1224]] /* roo.radTem.surBou[2].A PARAM */), (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1225]] /* roo.radTem.surBou[3].A PARAM */), (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1226]] /* roo.radTem.surBou[4].A PARAM */), (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1227]] /* roo.radTem.surBou[5].A PARAM */), (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1228]] /* roo.radTem.surBou[6].A PARAM */));
  omc_Buildings_ThermalZones_Detailed_Examples_FFD_ForcedConvection_roo_radTem_checkSurfaceAreas(threadData, ((modelica_integer) 6), tmp39, MMC_REFSTRINGLIT(tmp40));
  threadData->lastEquationSolved = 513;
}

/*
equation index: 512
type: ALGORITHM

  Buildings.ThermalZones.Detailed.Examples.FFD.ForcedConvection.roo.air.cfd.assertStringsAreUnique("surface", 6, {roo.air.cfd.surIde[1].name, roo.air.cfd.surIde[2].name, roo.air.cfd.surIde[3].name, roo.air.cfd.surIde[4].name, roo.air.cfd.surIde[5].name, roo.air.cfd.surIde[6].name});
*/
void ForcedConvection_30s_eqFunction_512(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,512};
  static const MMC_DEFSTRINGLIT(tmp41,7,"surface");
  string_array tmp42;
  array_alloc_scalar_string_array(&tmp42, 6, (modelica_string)(data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[6]] /* roo.air.cfd.surIde[1].name PARAM */), (modelica_string)(data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[7]] /* roo.air.cfd.surIde[2].name PARAM */), (modelica_string)(data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[8]] /* roo.air.cfd.surIde[3].name PARAM */), (modelica_string)(data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[9]] /* roo.air.cfd.surIde[4].name PARAM */), (modelica_string)(data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[10]] /* roo.air.cfd.surIde[5].name PARAM */), (modelica_string)(data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[11]] /* roo.air.cfd.surIde[6].name PARAM */));
  omc_Buildings_ThermalZones_Detailed_Examples_FFD_ForcedConvection_roo_air_cfd_assertStringsAreUnique(threadData, MMC_REFSTRINGLIT(tmp41), ((modelica_integer) 6), tmp42);
  threadData->lastEquationSolved = 512;
}

/*
equation index: 511
type: ALGORITHM

  Buildings.ThermalZones.Detailed.Examples.FFD.ForcedConvection.roo.air.cfd.assertStringsAreUnique("ports", 2, roo.air.cfd.portName);
*/
void ForcedConvection_30s_eqFunction_511(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,511};
  static const MMC_DEFSTRINGLIT(tmp43,5,"ports");
  string_array tmp44;
  string_array_create(&tmp44, ((modelica_string*)&((&data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[2]] /* roo.air.cfd.portName[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  omc_Buildings_ThermalZones_Detailed_Examples_FFD_ForcedConvection_roo_air_cfd_assertStringsAreUnique(threadData, MMC_REFSTRINGLIT(tmp43), ((modelica_integer) 2), tmp44);
  threadData->lastEquationSolved = 511;
}

/*
equation index: 510
type: ALGORITHM

  Buildings.ThermalZones.Detailed.Examples.FFD.ForcedConvection.roo.air.cfd.sendParameters(roo.air.cfd.cfdFilNam, {"East Wall", "West Wall", "North Wall", "South Wall", "Ceiling", "Floor"}, {0.9, 0.9, 1.0, 1.0, 1.0, 1.0}, {1.5707963267948966, 1.5707963267948966, 1.5707963267948966, 1.5707963267948966, 0.0, 3.141592653589793}, {Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature, Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature, Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature, Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature, Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature, Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature}, 2, roo.air.cfd.portName, true, {"Occupied zone air temperature", "Velocity"}, false, 6, 2, 1, 1, 0, roo.air.cfd.rho_start);
*/
void ForcedConvection_30s_eqFunction_510(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,510};
  string_array tmp45;
  static const MMC_DEFSTRINGLIT(tmp46,9,"East Wall");
  static const MMC_DEFSTRINGLIT(tmp47,9,"West Wall");
  static const MMC_DEFSTRINGLIT(tmp48,10,"North Wall");
  static const MMC_DEFSTRINGLIT(tmp49,10,"South Wall");
  static const MMC_DEFSTRINGLIT(tmp50,7,"Ceiling");
  static const MMC_DEFSTRINGLIT(tmp51,5,"Floor");
  real_array tmp52;
  real_array tmp53;
  integer_array tmp54;
  string_array tmp55;
  string_array tmp56;
  static const MMC_DEFSTRINGLIT(tmp57,29,"Occupied zone air temperature");
  static const MMC_DEFSTRINGLIT(tmp58,8,"Velocity");
  array_alloc_scalar_string_array(&tmp45, 6, (modelica_string)MMC_REFSTRINGLIT(tmp46), (modelica_string)MMC_REFSTRINGLIT(tmp47), (modelica_string)MMC_REFSTRINGLIT(tmp48), (modelica_string)MMC_REFSTRINGLIT(tmp49), (modelica_string)MMC_REFSTRINGLIT(tmp50), (modelica_string)MMC_REFSTRINGLIT(tmp51));
  array_alloc_scalar_real_array(&tmp52, 6, (modelica_real)0.9, (modelica_real)0.9, (modelica_real)1.0, (modelica_real)1.0, (modelica_real)1.0, (modelica_real)1.0);
  array_alloc_scalar_real_array(&tmp53, 6, (modelica_real)1.5707963267948966, (modelica_real)1.5707963267948966, (modelica_real)1.5707963267948966, (modelica_real)1.5707963267948966, (modelica_real)0.0, (modelica_real)3.141592653589793);
  array_alloc_scalar_integer_array(&tmp54, 6, (modelica_integer)1, (modelica_integer)1, (modelica_integer)1, (modelica_integer)1, (modelica_integer)1, (modelica_integer)1);
  string_array_create(&tmp55, ((modelica_string*)&((&data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[2]] /* roo.air.cfd.portName[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  array_alloc_scalar_string_array(&tmp56, 2, (modelica_string)MMC_REFSTRINGLIT(tmp57), (modelica_string)MMC_REFSTRINGLIT(tmp58));
  omc_Buildings_ThermalZones_Detailed_Examples_FFD_ForcedConvection_roo_air_cfd_sendParameters(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[1]] /* roo.air.cfd.cfdFilNam PARAM */), tmp45, tmp52, tmp53, tmp54, ((modelica_integer) 2), tmp55, 1 /* true */, tmp56, 0 /* false */, ((modelica_integer) 6), ((modelica_integer) 2), ((modelica_integer) 1), ((modelica_integer) 1), ((modelica_integer) 0), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[50]] /* roo.air.cfd.rho_start PARAM */));
  threadData->lastEquationSolved = 510;
}

/*
equation index: 509
type: ALGORITHM

  assert(noEvent(weaDat.pAtmSel.p > 3100.0) and noEvent(weaDat.pAtmSel.p < 1.2e5), "In ForcedConvection.weaDat.chePre: Weather data atmospheric pressure out of bounds.
   PIn = " + String(weaDat.pAtmSel.p, 6, 0, true));
*/
void ForcedConvection_30s_eqFunction_509(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,509};
  modelica_boolean tmp59;
  modelica_boolean tmp60;
  static const MMC_DEFSTRINGLIT(tmp61,93,"In ForcedConvection.weaDat.chePre: Weather data atmospheric pressure out of bounds.\n   PIn = ");
  modelica_string tmp62;
  modelica_metatype tmpMeta63;
  static int tmp64 = 0;
  {
    tmp59 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1319]] /* weaDat.pAtmSel.p PARAM */),3100.0);
    tmp60 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1319]] /* weaDat.pAtmSel.p PARAM */),1.2e5);
    if(!(tmp59 && tmp60))
    {
      tmp62 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1319]] /* weaDat.pAtmSel.p PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta63 = stringAppend(MMC_REFSTRINGLIT(tmp61),tmp62);
      {
        const char* assert_cond = "(noEvent(weaDat.pAtmSel.p > 3100.0) and noEvent(weaDat.pAtmSel.p < 1.2e5))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckPressure.mo",17,3,18,88,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta63));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckPressure.mo",17,3,18,88,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta63));
        }
      }
    }
  }
  threadData->lastEquationSolved = 509;
}

/*
equation index: 508
type: ALGORITHM

  assert(abs(1.0 - (roo.irRadExc.F[6,1] + roo.irRadExc.F[6,2] + roo.irRadExc.F[6,3] + roo.irRadExc.F[6,4] + roo.irRadExc.F[6,5] + roo.irRadExc.F[6,6])) < 1e-10, "Program error: Sum 1 of view factors is " + String(roo.irRadExc.F[6,1] + roo.irRadExc.F[6,2] + roo.irRadExc.F[6,3] + roo.irRadExc.F[6,4] + roo.irRadExc.F[6,5] + roo.irRadExc.F[6,6], 6, 0, true));
*/
void ForcedConvection_30s_eqFunction_508(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,508};
  modelica_boolean tmp65;
  static const MMC_DEFSTRINGLIT(tmp66,40,"Program error: Sum 1 of view factors is ");
  modelica_string tmp67;
  modelica_metatype tmpMeta68;
  static int tmp69 = 0;
  {
    tmp65 = Less(fabs(1.0 - ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[533]] /* roo.irRadExc.F[6,1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[534]] /* roo.irRadExc.F[6,2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[535]] /* roo.irRadExc.F[6,3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[536]] /* roo.irRadExc.F[6,4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[537]] /* roo.irRadExc.F[6,5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[538]] /* roo.irRadExc.F[6,6] PARAM */))),1e-10);
    if(!tmp65)
    {
      tmp67 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[533]] /* roo.irRadExc.F[6,1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[534]] /* roo.irRadExc.F[6,2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[535]] /* roo.irRadExc.F[6,3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[536]] /* roo.irRadExc.F[6,4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[537]] /* roo.irRadExc.F[6,5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[538]] /* roo.irRadExc.F[6,6] PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta68 = stringAppend(MMC_REFSTRINGLIT(tmp66),tmp67);
      {
        const char* assert_cond = "(abs(1.0 - (roo.irRadExc.F[6,1] + roo.irRadExc.F[6,2] + roo.irRadExc.F[6,3] + roo.irRadExc.F[6,4] + roo.irRadExc.F[6,5] + roo.irRadExc.F[6,6])) < 1e-10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",171,5,173,16,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta68));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",171,5,173,16,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta68));
        }
      }
    }
  }
  threadData->lastEquationSolved = 508;
}

/*
equation index: 507
type: ALGORITHM

  assert(abs(1.0 - (roo.irRadExc.F[5,1] + roo.irRadExc.F[5,2] + roo.irRadExc.F[5,3] + roo.irRadExc.F[5,4] + roo.irRadExc.F[5,5] + roo.irRadExc.F[5,6])) < 1e-10, "Program error: Sum 1 of view factors is " + String(roo.irRadExc.F[5,1] + roo.irRadExc.F[5,2] + roo.irRadExc.F[5,3] + roo.irRadExc.F[5,4] + roo.irRadExc.F[5,5] + roo.irRadExc.F[5,6], 6, 0, true));
*/
void ForcedConvection_30s_eqFunction_507(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,507};
  modelica_boolean tmp70;
  static const MMC_DEFSTRINGLIT(tmp71,40,"Program error: Sum 1 of view factors is ");
  modelica_string tmp72;
  modelica_metatype tmpMeta73;
  static int tmp74 = 0;
  {
    tmp70 = Less(fabs(1.0 - ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[527]] /* roo.irRadExc.F[5,1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[528]] /* roo.irRadExc.F[5,2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[529]] /* roo.irRadExc.F[5,3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[530]] /* roo.irRadExc.F[5,4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[531]] /* roo.irRadExc.F[5,5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[532]] /* roo.irRadExc.F[5,6] PARAM */))),1e-10);
    if(!tmp70)
    {
      tmp72 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[527]] /* roo.irRadExc.F[5,1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[528]] /* roo.irRadExc.F[5,2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[529]] /* roo.irRadExc.F[5,3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[530]] /* roo.irRadExc.F[5,4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[531]] /* roo.irRadExc.F[5,5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[532]] /* roo.irRadExc.F[5,6] PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta73 = stringAppend(MMC_REFSTRINGLIT(tmp71),tmp72);
      {
        const char* assert_cond = "(abs(1.0 - (roo.irRadExc.F[5,1] + roo.irRadExc.F[5,2] + roo.irRadExc.F[5,3] + roo.irRadExc.F[5,4] + roo.irRadExc.F[5,5] + roo.irRadExc.F[5,6])) < 1e-10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",171,5,173,16,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta73));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",171,5,173,16,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta73));
        }
      }
    }
  }
  threadData->lastEquationSolved = 507;
}

/*
equation index: 506
type: ALGORITHM

  assert(abs(1.0 - (roo.irRadExc.F[4,1] + roo.irRadExc.F[4,2] + roo.irRadExc.F[4,3] + roo.irRadExc.F[4,4] + roo.irRadExc.F[4,5] + roo.irRadExc.F[4,6])) < 1e-10, "Program error: Sum 1 of view factors is " + String(roo.irRadExc.F[4,1] + roo.irRadExc.F[4,2] + roo.irRadExc.F[4,3] + roo.irRadExc.F[4,4] + roo.irRadExc.F[4,5] + roo.irRadExc.F[4,6], 6, 0, true));
*/
void ForcedConvection_30s_eqFunction_506(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,506};
  modelica_boolean tmp75;
  static const MMC_DEFSTRINGLIT(tmp76,40,"Program error: Sum 1 of view factors is ");
  modelica_string tmp77;
  modelica_metatype tmpMeta78;
  static int tmp79 = 0;
  {
    tmp75 = Less(fabs(1.0 - ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[521]] /* roo.irRadExc.F[4,1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[522]] /* roo.irRadExc.F[4,2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[523]] /* roo.irRadExc.F[4,3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[524]] /* roo.irRadExc.F[4,4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[525]] /* roo.irRadExc.F[4,5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[526]] /* roo.irRadExc.F[4,6] PARAM */))),1e-10);
    if(!tmp75)
    {
      tmp77 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[521]] /* roo.irRadExc.F[4,1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[522]] /* roo.irRadExc.F[4,2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[523]] /* roo.irRadExc.F[4,3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[524]] /* roo.irRadExc.F[4,4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[525]] /* roo.irRadExc.F[4,5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[526]] /* roo.irRadExc.F[4,6] PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta78 = stringAppend(MMC_REFSTRINGLIT(tmp76),tmp77);
      {
        const char* assert_cond = "(abs(1.0 - (roo.irRadExc.F[4,1] + roo.irRadExc.F[4,2] + roo.irRadExc.F[4,3] + roo.irRadExc.F[4,4] + roo.irRadExc.F[4,5] + roo.irRadExc.F[4,6])) < 1e-10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",171,5,173,16,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta78));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",171,5,173,16,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta78));
        }
      }
    }
  }
  threadData->lastEquationSolved = 506;
}

/*
equation index: 505
type: ALGORITHM

  assert(abs(1.0 - (roo.irRadExc.F[3,1] + roo.irRadExc.F[3,2] + roo.irRadExc.F[3,3] + roo.irRadExc.F[3,4] + roo.irRadExc.F[3,5] + roo.irRadExc.F[3,6])) < 1e-10, "Program error: Sum 1 of view factors is " + String(roo.irRadExc.F[3,1] + roo.irRadExc.F[3,2] + roo.irRadExc.F[3,3] + roo.irRadExc.F[3,4] + roo.irRadExc.F[3,5] + roo.irRadExc.F[3,6], 6, 0, true));
*/
void ForcedConvection_30s_eqFunction_505(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,505};
  modelica_boolean tmp80;
  static const MMC_DEFSTRINGLIT(tmp81,40,"Program error: Sum 1 of view factors is ");
  modelica_string tmp82;
  modelica_metatype tmpMeta83;
  static int tmp84 = 0;
  {
    tmp80 = Less(fabs(1.0 - ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[515]] /* roo.irRadExc.F[3,1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[516]] /* roo.irRadExc.F[3,2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[517]] /* roo.irRadExc.F[3,3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[518]] /* roo.irRadExc.F[3,4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[519]] /* roo.irRadExc.F[3,5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[520]] /* roo.irRadExc.F[3,6] PARAM */))),1e-10);
    if(!tmp80)
    {
      tmp82 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[515]] /* roo.irRadExc.F[3,1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[516]] /* roo.irRadExc.F[3,2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[517]] /* roo.irRadExc.F[3,3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[518]] /* roo.irRadExc.F[3,4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[519]] /* roo.irRadExc.F[3,5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[520]] /* roo.irRadExc.F[3,6] PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta83 = stringAppend(MMC_REFSTRINGLIT(tmp81),tmp82);
      {
        const char* assert_cond = "(abs(1.0 - (roo.irRadExc.F[3,1] + roo.irRadExc.F[3,2] + roo.irRadExc.F[3,3] + roo.irRadExc.F[3,4] + roo.irRadExc.F[3,5] + roo.irRadExc.F[3,6])) < 1e-10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",171,5,173,16,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta83));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",171,5,173,16,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta83));
        }
      }
    }
  }
  threadData->lastEquationSolved = 505;
}

/*
equation index: 504
type: ALGORITHM

  assert(abs(1.0 - (roo.irRadExc.F[2,1] + roo.irRadExc.F[2,2] + roo.irRadExc.F[2,3] + roo.irRadExc.F[2,4] + roo.irRadExc.F[2,5] + roo.irRadExc.F[2,6])) < 1e-10, "Program error: Sum 1 of view factors is " + String(roo.irRadExc.F[2,1] + roo.irRadExc.F[2,2] + roo.irRadExc.F[2,3] + roo.irRadExc.F[2,4] + roo.irRadExc.F[2,5] + roo.irRadExc.F[2,6], 6, 0, true));
*/
void ForcedConvection_30s_eqFunction_504(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,504};
  modelica_boolean tmp85;
  static const MMC_DEFSTRINGLIT(tmp86,40,"Program error: Sum 1 of view factors is ");
  modelica_string tmp87;
  modelica_metatype tmpMeta88;
  static int tmp89 = 0;
  {
    tmp85 = Less(fabs(1.0 - ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[509]] /* roo.irRadExc.F[2,1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[510]] /* roo.irRadExc.F[2,2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[511]] /* roo.irRadExc.F[2,3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[512]] /* roo.irRadExc.F[2,4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[513]] /* roo.irRadExc.F[2,5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[514]] /* roo.irRadExc.F[2,6] PARAM */))),1e-10);
    if(!tmp85)
    {
      tmp87 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[509]] /* roo.irRadExc.F[2,1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[510]] /* roo.irRadExc.F[2,2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[511]] /* roo.irRadExc.F[2,3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[512]] /* roo.irRadExc.F[2,4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[513]] /* roo.irRadExc.F[2,5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[514]] /* roo.irRadExc.F[2,6] PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta88 = stringAppend(MMC_REFSTRINGLIT(tmp86),tmp87);
      {
        const char* assert_cond = "(abs(1.0 - (roo.irRadExc.F[2,1] + roo.irRadExc.F[2,2] + roo.irRadExc.F[2,3] + roo.irRadExc.F[2,4] + roo.irRadExc.F[2,5] + roo.irRadExc.F[2,6])) < 1e-10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",171,5,173,16,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta88));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",171,5,173,16,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta88));
        }
      }
    }
  }
  threadData->lastEquationSolved = 504;
}

/*
equation index: 503
type: ALGORITHM

  assert(abs(1.0 - (roo.irRadExc.F[1,1] + roo.irRadExc.F[1,2] + roo.irRadExc.F[1,3] + roo.irRadExc.F[1,4] + roo.irRadExc.F[1,5] + roo.irRadExc.F[1,6])) < 1e-10, "Program error: Sum 1 of view factors is " + String(roo.irRadExc.F[1,1] + roo.irRadExc.F[1,2] + roo.irRadExc.F[1,3] + roo.irRadExc.F[1,4] + roo.irRadExc.F[1,5] + roo.irRadExc.F[1,6], 6, 0, true));
*/
void ForcedConvection_30s_eqFunction_503(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,503};
  modelica_boolean tmp90;
  static const MMC_DEFSTRINGLIT(tmp91,40,"Program error: Sum 1 of view factors is ");
  modelica_string tmp92;
  modelica_metatype tmpMeta93;
  static int tmp94 = 0;
  {
    tmp90 = Less(fabs(1.0 - ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[503]] /* roo.irRadExc.F[1,1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[504]] /* roo.irRadExc.F[1,2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[505]] /* roo.irRadExc.F[1,3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[506]] /* roo.irRadExc.F[1,4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[507]] /* roo.irRadExc.F[1,5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[508]] /* roo.irRadExc.F[1,6] PARAM */))),1e-10);
    if(!tmp90)
    {
      tmp92 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[503]] /* roo.irRadExc.F[1,1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[504]] /* roo.irRadExc.F[1,2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[505]] /* roo.irRadExc.F[1,3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[506]] /* roo.irRadExc.F[1,4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[507]] /* roo.irRadExc.F[1,5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[508]] /* roo.irRadExc.F[1,6] PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta93 = stringAppend(MMC_REFSTRINGLIT(tmp91),tmp92);
      {
        const char* assert_cond = "(abs(1.0 - (roo.irRadExc.F[1,1] + roo.irRadExc.F[1,2] + roo.irRadExc.F[1,3] + roo.irRadExc.F[1,4] + roo.irRadExc.F[1,5] + roo.irRadExc.F[1,6])) < 1e-10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",171,5,173,16,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta93));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",171,5,173,16,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta93));
        }
      }
    }
  }
  threadData->lastEquationSolved = 503;
}

/*
equation index: 502
type: ALGORITHM

  assert(weaDat.conTim.canRepeatWeatherFile or noEvent(time >= weaDat.conTim.weaDatStaTim), "In ForcedConvection.weaDat.conTim: Insufficient weather data provided for the desired simulation period.
    The simulation time " + String(time, 6, 0, true) + " is less than the start time " + String(weaDat.conTim.weaDatStaTim, 6, 0, true) + " of the weather data file.");
*/
void ForcedConvection_30s_eqFunction_502(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,502};
  modelica_boolean tmp95;
  static const MMC_DEFSTRINGLIT(tmp96,130,"In ForcedConvection.weaDat.conTim: Insufficient weather data provided for the desired simulation period.\r\n    The simulation time ");
  modelica_string tmp97;
  modelica_metatype tmpMeta98;
  static const MMC_DEFSTRINGLIT(tmp99,29," is less than the start time ");
  modelica_metatype tmpMeta100;
  modelica_string tmp101;
  modelica_metatype tmpMeta102;
  static const MMC_DEFSTRINGLIT(tmp103,26," of the weather data file.");
  modelica_metatype tmpMeta104;
  static int tmp105 = 0;
  {
    tmp95 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1299]] /* weaDat.conTim.weaDatStaTim PARAM */));
    if(!((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[280]] /* weaDat.conTim.canRepeatWeatherFile PARAM */) || tmp95))
    {
      tmp97 = modelica_real_to_modelica_string(data->localData[0]->timeValue, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta98 = stringAppend(MMC_REFSTRINGLIT(tmp96),tmp97);
      tmpMeta100 = stringAppend(tmpMeta98,MMC_REFSTRINGLIT(tmp99));
      tmp101 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1299]] /* weaDat.conTim.weaDatStaTim PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta102 = stringAppend(tmpMeta100,tmp101);
      tmpMeta104 = stringAppend(tmpMeta102,MMC_REFSTRINGLIT(tmp103));
      {
        const char* assert_cond = "(weaDat.conTim.canRepeatWeatherFile or noEvent(time >= weaDat.conTim.weaDatStaTim))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/ConvertTime.mo",46,3,50,26,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta104));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/ConvertTime.mo",46,3,50,26,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta104));
        }
      }
    }
  }
  threadData->lastEquationSolved = 502;
}

/*
equation index: 501
type: ALGORITHM

  assert(weaDat.conTim.canRepeatWeatherFile or noEvent(time - weaDat.conTim.weaDatEndTim < 1800.0), "In ForcedConvection.weaDat.conTim: Insufficient weather data provided for the desired simulation period.
    The simulation time " + String(time, 6, 0, true) + " exceeds the end time " + String(weaDat.conTim.weaDatEndTim, 6, 0, true) + " of the weather data file.");
*/
void ForcedConvection_30s_eqFunction_501(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,501};
  modelica_boolean tmp106;
  static const MMC_DEFSTRINGLIT(tmp107,130,"In ForcedConvection.weaDat.conTim: Insufficient weather data provided for the desired simulation period.\r\n    The simulation time ");
  modelica_string tmp108;
  modelica_metatype tmpMeta109;
  static const MMC_DEFSTRINGLIT(tmp110,22," exceeds the end time ");
  modelica_metatype tmpMeta111;
  modelica_string tmp112;
  modelica_metatype tmpMeta113;
  static const MMC_DEFSTRINGLIT(tmp114,26," of the weather data file.");
  modelica_metatype tmpMeta115;
  static int tmp116 = 0;
  {
    tmp106 = Less(data->localData[0]->timeValue - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1298]] /* weaDat.conTim.weaDatEndTim PARAM */),1800.0);
    if(!((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[280]] /* weaDat.conTim.canRepeatWeatherFile PARAM */) || tmp106))
    {
      tmp108 = modelica_real_to_modelica_string(data->localData[0]->timeValue, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta109 = stringAppend(MMC_REFSTRINGLIT(tmp107),tmp108);
      tmpMeta111 = stringAppend(tmpMeta109,MMC_REFSTRINGLIT(tmp110));
      tmp112 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1298]] /* weaDat.conTim.weaDatEndTim PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta113 = stringAppend(tmpMeta111,tmp112);
      tmpMeta115 = stringAppend(tmpMeta113,MMC_REFSTRINGLIT(tmp114));
      {
        const char* assert_cond = "(weaDat.conTim.canRepeatWeatherFile or noEvent(time - weaDat.conTim.weaDatEndTim < 1800.0))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/ConvertTime.mo",40,3,44,26,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta115));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/ConvertTime.mo",40,3,44,26,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta115));
        }
      }
    }
  }
  threadData->lastEquationSolved = 501;
}

/*
equation index: 500
type: ALGORITHM

  assert(weaDat.conTimMin.canRepeatWeatherFile or noEvent(time >= weaDat.conTimMin.weaDatStaTim), "In ForcedConvection.weaDat.conTimMin: Insufficient weather data provided for the desired simulation period.
    The simulation time " + String(time, 6, 0, true) + " is less than the start time " + String(weaDat.conTimMin.weaDatStaTim, 6, 0, true) + " of the weather data file.");
*/
void ForcedConvection_30s_eqFunction_500(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,500};
  modelica_boolean tmp117;
  static const MMC_DEFSTRINGLIT(tmp118,133,"In ForcedConvection.weaDat.conTimMin: Insufficient weather data provided for the desired simulation period.\r\n    The simulation time ");
  modelica_string tmp119;
  modelica_metatype tmpMeta120;
  static const MMC_DEFSTRINGLIT(tmp121,29," is less than the start time ");
  modelica_metatype tmpMeta122;
  modelica_string tmp123;
  modelica_metatype tmpMeta124;
  static const MMC_DEFSTRINGLIT(tmp125,26," of the weather data file.");
  modelica_metatype tmpMeta126;
  static int tmp127 = 0;
  {
    tmp117 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1302]] /* weaDat.conTimMin.weaDatStaTim PARAM */));
    if(!((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[281]] /* weaDat.conTimMin.canRepeatWeatherFile PARAM */) || tmp117))
    {
      tmp119 = modelica_real_to_modelica_string(data->localData[0]->timeValue, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta120 = stringAppend(MMC_REFSTRINGLIT(tmp118),tmp119);
      tmpMeta122 = stringAppend(tmpMeta120,MMC_REFSTRINGLIT(tmp121));
      tmp123 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1302]] /* weaDat.conTimMin.weaDatStaTim PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta124 = stringAppend(tmpMeta122,tmp123);
      tmpMeta126 = stringAppend(tmpMeta124,MMC_REFSTRINGLIT(tmp125));
      {
        const char* assert_cond = "(weaDat.conTimMin.canRepeatWeatherFile or noEvent(time >= weaDat.conTimMin.weaDatStaTim))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/ConvertTime.mo",46,3,50,26,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta126));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/ConvertTime.mo",46,3,50,26,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta126));
        }
      }
    }
  }
  threadData->lastEquationSolved = 500;
}

/*
equation index: 499
type: ALGORITHM

  assert(weaDat.conTimMin.canRepeatWeatherFile or noEvent(time - weaDat.conTimMin.weaDatEndTim < 1800.0), "In ForcedConvection.weaDat.conTimMin: Insufficient weather data provided for the desired simulation period.
    The simulation time " + String(time, 6, 0, true) + " exceeds the end time " + String(weaDat.conTimMin.weaDatEndTim, 6, 0, true) + " of the weather data file.");
*/
void ForcedConvection_30s_eqFunction_499(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,499};
  modelica_boolean tmp128;
  static const MMC_DEFSTRINGLIT(tmp129,133,"In ForcedConvection.weaDat.conTimMin: Insufficient weather data provided for the desired simulation period.\r\n    The simulation time ");
  modelica_string tmp130;
  modelica_metatype tmpMeta131;
  static const MMC_DEFSTRINGLIT(tmp132,22," exceeds the end time ");
  modelica_metatype tmpMeta133;
  modelica_string tmp134;
  modelica_metatype tmpMeta135;
  static const MMC_DEFSTRINGLIT(tmp136,26," of the weather data file.");
  modelica_metatype tmpMeta137;
  static int tmp138 = 0;
  {
    tmp128 = Less(data->localData[0]->timeValue - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1301]] /* weaDat.conTimMin.weaDatEndTim PARAM */),1800.0);
    if(!((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[281]] /* weaDat.conTimMin.canRepeatWeatherFile PARAM */) || tmp128))
    {
      tmp130 = modelica_real_to_modelica_string(data->localData[0]->timeValue, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta131 = stringAppend(MMC_REFSTRINGLIT(tmp129),tmp130);
      tmpMeta133 = stringAppend(tmpMeta131,MMC_REFSTRINGLIT(tmp132));
      tmp134 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1301]] /* weaDat.conTimMin.weaDatEndTim PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta135 = stringAppend(tmpMeta133,tmp134);
      tmpMeta137 = stringAppend(tmpMeta135,MMC_REFSTRINGLIT(tmp136));
      {
        const char* assert_cond = "(weaDat.conTimMin.canRepeatWeatherFile or noEvent(time - weaDat.conTimMin.weaDatEndTim < 1800.0))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/ConvertTime.mo",40,3,44,26,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta137));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/ConvertTime.mo",40,3,44,26,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta137));
        }
      }
    }
  }
  threadData->lastEquationSolved = 499;
}

/*
equation index: 498
type: ALGORITHM

  Modelica.Fluid.Utilities.checkBoundary("Air", {"water", "air"}, false, true, bounIn.X_in_internal, "Boundary_pT");
*/
void ForcedConvection_30s_eqFunction_498(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,498};
  static const MMC_DEFSTRINGLIT(tmp139,3,"Air");
  string_array tmp140;
  static const MMC_DEFSTRINGLIT(tmp141,5,"water");
  static const MMC_DEFSTRINGLIT(tmp142,3,"air");
  real_array tmp143;
  static const MMC_DEFSTRINGLIT(tmp144,11,"Boundary_pT");
  array_alloc_scalar_string_array(&tmp140, 2, (modelica_string)MMC_REFSTRINGLIT(tmp141), (modelica_string)MMC_REFSTRINGLIT(tmp142));
  real_array_create(&tmp143, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[54]] /* bounIn.X_in_internal[1] variable */)[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  omc_Modelica_Fluid_Utilities_checkBoundary(threadData, MMC_REFSTRINGLIT(tmp139), tmp140, 0 /* false */, 1 /* true */, tmp143, MMC_REFSTRINGLIT(tmp144));
  threadData->lastEquationSolved = 498;
}

/*
equation index: 497
type: ALGORITHM

  Modelica.Fluid.Utilities.checkBoundary("Air", {"water", "air"}, false, true, bouOut.X_in_internal, "Boundary_pT");
*/
void ForcedConvection_30s_eqFunction_497(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,497};
  static const MMC_DEFSTRINGLIT(tmp145,3,"Air");
  string_array tmp146;
  static const MMC_DEFSTRINGLIT(tmp147,5,"water");
  static const MMC_DEFSTRINGLIT(tmp148,3,"air");
  real_array tmp149;
  static const MMC_DEFSTRINGLIT(tmp150,11,"Boundary_pT");
  array_alloc_scalar_string_array(&tmp146, 2, (modelica_string)MMC_REFSTRINGLIT(tmp147), (modelica_string)MMC_REFSTRINGLIT(tmp148));
  real_array_create(&tmp149, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[50]] /* bouOut.X_in_internal[1] variable */)[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  omc_Modelica_Fluid_Utilities_checkBoundary(threadData, MMC_REFSTRINGLIT(tmp145), tmp146, 0 /* false */, 1 /* true */, tmp149, MMC_REFSTRINGLIT(tmp150));
  threadData->lastEquationSolved = 497;
}

/*
equation index: 496
type: ALGORITHM

  assert(bouOut.p_in_internal > 5e4 and bouOut.p_in_internal < 1.5e5, "In ForcedConvection.bouOut: The parameter value p=" + String(bouOut.p_in_internal, 6, 0, true) + " is not within a realistic range for air. This is likely an error.");
*/
void ForcedConvection_30s_eqFunction_496(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,496};
  modelica_boolean tmp151;
  modelica_boolean tmp152;
  static const MMC_DEFSTRINGLIT(tmp153,50,"In ForcedConvection.bouOut: The parameter value p=");
  modelica_string tmp154;
  modelica_metatype tmpMeta155;
  static const MMC_DEFSTRINGLIT(tmp156,66," is not within a realistic range for air. This is likely an error.");
  modelica_metatype tmpMeta157;
  static int tmp158 = 0;
  {
    tmp151 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[52]] /* bouOut.p_in_internal variable */),5e4);
    tmp152 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[52]] /* bouOut.p_in_internal variable */),1.5e5);
    if(!(tmp151 && tmp152))
    {
      tmp154 = modelica_real_to_modelica_string((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[52]] /* bouOut.p_in_internal variable */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta155 = stringAppend(MMC_REFSTRINGLIT(tmp153),tmp154);
      tmpMeta157 = stringAppend(tmpMeta155,MMC_REFSTRINGLIT(tmp156));
      {
        const char* assert_cond = "(bouOut.p_in_internal > 5e4 and bouOut.p_in_internal < 1.5e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/Fluid/Sources/Boundary_pT.mo",50,7,51,127,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta157));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/Fluid/Sources/Boundary_pT.mo",50,7,51,127,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta157));
        }
      }
    }
  }
  threadData->lastEquationSolved = 496;
}
OMC_DISABLE_OPT
void ForcedConvection_30s_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[484])(DATA*, threadData_t*) = {
    ForcedConvection_30s_eqFunction_1,
    ForcedConvection_30s_eqFunction_2,
    ForcedConvection_30s_eqFunction_3,
    ForcedConvection_30s_eqFunction_4,
    ForcedConvection_30s_eqFunction_5,
    ForcedConvection_30s_eqFunction_6,
    ForcedConvection_30s_eqFunction_7,
    ForcedConvection_30s_eqFunction_8,
    ForcedConvection_30s_eqFunction_9,
    ForcedConvection_30s_eqFunction_10,
    ForcedConvection_30s_eqFunction_11,
    ForcedConvection_30s_eqFunction_12,
    ForcedConvection_30s_eqFunction_13,
    ForcedConvection_30s_eqFunction_14,
    ForcedConvection_30s_eqFunction_15,
    ForcedConvection_30s_eqFunction_16,
    ForcedConvection_30s_eqFunction_17,
    ForcedConvection_30s_eqFunction_18,
    ForcedConvection_30s_eqFunction_19,
    ForcedConvection_30s_eqFunction_20,
    ForcedConvection_30s_eqFunction_21,
    ForcedConvection_30s_eqFunction_22,
    ForcedConvection_30s_eqFunction_23,
    ForcedConvection_30s_eqFunction_24,
    ForcedConvection_30s_eqFunction_25,
    ForcedConvection_30s_eqFunction_26,
    ForcedConvection_30s_eqFunction_27,
    ForcedConvection_30s_eqFunction_28,
    ForcedConvection_30s_eqFunction_29,
    ForcedConvection_30s_eqFunction_30,
    ForcedConvection_30s_eqFunction_31,
    ForcedConvection_30s_eqFunction_32,
    ForcedConvection_30s_eqFunction_33,
    ForcedConvection_30s_eqFunction_34,
    ForcedConvection_30s_eqFunction_35,
    ForcedConvection_30s_eqFunction_36,
    ForcedConvection_30s_eqFunction_37,
    ForcedConvection_30s_eqFunction_38,
    ForcedConvection_30s_eqFunction_39,
    ForcedConvection_30s_eqFunction_40,
    ForcedConvection_30s_eqFunction_41,
    ForcedConvection_30s_eqFunction_42,
    ForcedConvection_30s_eqFunction_526,
    ForcedConvection_30s_eqFunction_44,
    ForcedConvection_30s_eqFunction_45,
    ForcedConvection_30s_eqFunction_46,
    ForcedConvection_30s_eqFunction_47,
    ForcedConvection_30s_eqFunction_48,
    ForcedConvection_30s_eqFunction_49,
    ForcedConvection_30s_eqFunction_50,
    ForcedConvection_30s_eqFunction_51,
    ForcedConvection_30s_eqFunction_52,
    ForcedConvection_30s_eqFunction_53,
    ForcedConvection_30s_eqFunction_54,
    ForcedConvection_30s_eqFunction_55,
    ForcedConvection_30s_eqFunction_56,
    ForcedConvection_30s_eqFunction_57,
    ForcedConvection_30s_eqFunction_58,
    ForcedConvection_30s_eqFunction_59,
    ForcedConvection_30s_eqFunction_60,
    ForcedConvection_30s_eqFunction_61,
    ForcedConvection_30s_eqFunction_62,
    ForcedConvection_30s_eqFunction_63,
    ForcedConvection_30s_eqFunction_64,
    ForcedConvection_30s_eqFunction_65,
    ForcedConvection_30s_eqFunction_66,
    ForcedConvection_30s_eqFunction_67,
    ForcedConvection_30s_eqFunction_68,
    ForcedConvection_30s_eqFunction_69,
    ForcedConvection_30s_eqFunction_70,
    ForcedConvection_30s_eqFunction_71,
    ForcedConvection_30s_eqFunction_72,
    ForcedConvection_30s_eqFunction_73,
    ForcedConvection_30s_eqFunction_74,
    ForcedConvection_30s_eqFunction_75,
    ForcedConvection_30s_eqFunction_76,
    ForcedConvection_30s_eqFunction_77,
    ForcedConvection_30s_eqFunction_78,
    ForcedConvection_30s_eqFunction_79,
    ForcedConvection_30s_eqFunction_80,
    ForcedConvection_30s_eqFunction_81,
    ForcedConvection_30s_eqFunction_82,
    ForcedConvection_30s_eqFunction_83,
    ForcedConvection_30s_eqFunction_84,
    ForcedConvection_30s_eqFunction_85,
    ForcedConvection_30s_eqFunction_86,
    ForcedConvection_30s_eqFunction_87,
    ForcedConvection_30s_eqFunction_88,
    ForcedConvection_30s_eqFunction_89,
    ForcedConvection_30s_eqFunction_90,
    ForcedConvection_30s_eqFunction_91,
    ForcedConvection_30s_eqFunction_92,
    ForcedConvection_30s_eqFunction_93,
    ForcedConvection_30s_eqFunction_94,
    ForcedConvection_30s_eqFunction_95,
    ForcedConvection_30s_eqFunction_96,
    ForcedConvection_30s_eqFunction_97,
    ForcedConvection_30s_eqFunction_98,
    ForcedConvection_30s_eqFunction_99,
    ForcedConvection_30s_eqFunction_100,
    ForcedConvection_30s_eqFunction_101,
    ForcedConvection_30s_eqFunction_102,
    ForcedConvection_30s_eqFunction_103,
    ForcedConvection_30s_eqFunction_104,
    ForcedConvection_30s_eqFunction_105,
    ForcedConvection_30s_eqFunction_106,
    ForcedConvection_30s_eqFunction_107,
    ForcedConvection_30s_eqFunction_108,
    ForcedConvection_30s_eqFunction_109,
    ForcedConvection_30s_eqFunction_110,
    ForcedConvection_30s_eqFunction_111,
    ForcedConvection_30s_eqFunction_112,
    ForcedConvection_30s_eqFunction_113,
    ForcedConvection_30s_eqFunction_114,
    ForcedConvection_30s_eqFunction_115,
    ForcedConvection_30s_eqFunction_116,
    ForcedConvection_30s_eqFunction_117,
    ForcedConvection_30s_eqFunction_118,
    ForcedConvection_30s_eqFunction_119,
    ForcedConvection_30s_eqFunction_120,
    ForcedConvection_30s_eqFunction_121,
    ForcedConvection_30s_eqFunction_122,
    ForcedConvection_30s_eqFunction_123,
    ForcedConvection_30s_eqFunction_124,
    ForcedConvection_30s_eqFunction_125,
    ForcedConvection_30s_eqFunction_126,
    ForcedConvection_30s_eqFunction_127,
    ForcedConvection_30s_eqFunction_128,
    ForcedConvection_30s_eqFunction_129,
    ForcedConvection_30s_eqFunction_130,
    ForcedConvection_30s_eqFunction_131,
    ForcedConvection_30s_eqFunction_132,
    ForcedConvection_30s_eqFunction_133,
    ForcedConvection_30s_eqFunction_134,
    ForcedConvection_30s_eqFunction_135,
    ForcedConvection_30s_eqFunction_136,
    ForcedConvection_30s_eqFunction_137,
    ForcedConvection_30s_eqFunction_138,
    ForcedConvection_30s_eqFunction_163,
    ForcedConvection_30s_eqFunction_618,
    ForcedConvection_30s_eqFunction_616,
    ForcedConvection_30s_eqFunction_624,
    ForcedConvection_30s_eqFunction_622,
    ForcedConvection_30s_eqFunction_620,
    ForcedConvection_30s_eqFunction_626,
    ForcedConvection_30s_eqFunction_170,
    ForcedConvection_30s_eqFunction_570,
    ForcedConvection_30s_eqFunction_571,
    ForcedConvection_30s_eqFunction_572,
    ForcedConvection_30s_eqFunction_573,
    ForcedConvection_30s_eqFunction_574,
    ForcedConvection_30s_eqFunction_575,
    ForcedConvection_30s_eqFunction_576,
    ForcedConvection_30s_eqFunction_577,
    ForcedConvection_30s_eqFunction_578,
    ForcedConvection_30s_eqFunction_579,
    ForcedConvection_30s_eqFunction_580,
    ForcedConvection_30s_eqFunction_581,
    ForcedConvection_30s_eqFunction_582,
    ForcedConvection_30s_eqFunction_583,
    ForcedConvection_30s_eqFunction_584,
    ForcedConvection_30s_eqFunction_585,
    ForcedConvection_30s_eqFunction_586,
    ForcedConvection_30s_eqFunction_587,
    ForcedConvection_30s_eqFunction_588,
    ForcedConvection_30s_eqFunction_589,
    ForcedConvection_30s_eqFunction_590,
    ForcedConvection_30s_eqFunction_192,
    ForcedConvection_30s_eqFunction_193,
    ForcedConvection_30s_eqFunction_194,
    ForcedConvection_30s_eqFunction_195,
    ForcedConvection_30s_eqFunction_196,
    ForcedConvection_30s_eqFunction_197,
    ForcedConvection_30s_eqFunction_198,
    ForcedConvection_30s_eqFunction_199,
    ForcedConvection_30s_eqFunction_200,
    ForcedConvection_30s_eqFunction_201,
    ForcedConvection_30s_eqFunction_202,
    ForcedConvection_30s_eqFunction_203,
    ForcedConvection_30s_eqFunction_204,
    ForcedConvection_30s_eqFunction_205,
    ForcedConvection_30s_eqFunction_619,
    ForcedConvection_30s_eqFunction_207,
    ForcedConvection_30s_eqFunction_208,
    ForcedConvection_30s_eqFunction_621,
    ForcedConvection_30s_eqFunction_210,
    ForcedConvection_30s_eqFunction_211,
    ForcedConvection_30s_eqFunction_617,
    ForcedConvection_30s_eqFunction_213,
    ForcedConvection_30s_eqFunction_214,
    ForcedConvection_30s_eqFunction_623,
    ForcedConvection_30s_eqFunction_216,
    ForcedConvection_30s_eqFunction_217,
    ForcedConvection_30s_eqFunction_625,
    ForcedConvection_30s_eqFunction_219,
    ForcedConvection_30s_eqFunction_220,
    ForcedConvection_30s_eqFunction_627,
    ForcedConvection_30s_eqFunction_222,
    ForcedConvection_30s_eqFunction_527,
    ForcedConvection_30s_eqFunction_224,
    ForcedConvection_30s_eqFunction_225,
    ForcedConvection_30s_eqFunction_226,
    ForcedConvection_30s_eqFunction_227,
    ForcedConvection_30s_eqFunction_528,
    ForcedConvection_30s_eqFunction_229,
    ForcedConvection_30s_eqFunction_230,
    ForcedConvection_30s_eqFunction_231,
    ForcedConvection_30s_eqFunction_232,
    ForcedConvection_30s_eqFunction_233,
    ForcedConvection_30s_eqFunction_234,
    ForcedConvection_30s_eqFunction_235,
    ForcedConvection_30s_eqFunction_236,
    ForcedConvection_30s_eqFunction_237,
    ForcedConvection_30s_eqFunction_238,
    ForcedConvection_30s_eqFunction_239,
    ForcedConvection_30s_eqFunction_240,
    ForcedConvection_30s_eqFunction_566,
    ForcedConvection_30s_eqFunction_242,
    ForcedConvection_30s_eqFunction_243,
    ForcedConvection_30s_eqFunction_564,
    ForcedConvection_30s_eqFunction_567,
    ForcedConvection_30s_eqFunction_246,
    ForcedConvection_30s_eqFunction_247,
    ForcedConvection_30s_eqFunction_568,
    ForcedConvection_30s_eqFunction_249,
    ForcedConvection_30s_eqFunction_250,
    ForcedConvection_30s_eqFunction_565,
    ForcedConvection_30s_eqFunction_252,
    ForcedConvection_30s_eqFunction_253,
    ForcedConvection_30s_eqFunction_254,
    ForcedConvection_30s_eqFunction_255,
    ForcedConvection_30s_eqFunction_256,
    ForcedConvection_30s_eqFunction_257,
    ForcedConvection_30s_eqFunction_258,
    ForcedConvection_30s_eqFunction_259,
    ForcedConvection_30s_eqFunction_260,
    ForcedConvection_30s_eqFunction_261,
    ForcedConvection_30s_eqFunction_262,
    ForcedConvection_30s_eqFunction_263,
    ForcedConvection_30s_eqFunction_264,
    ForcedConvection_30s_eqFunction_265,
    ForcedConvection_30s_eqFunction_266,
    ForcedConvection_30s_eqFunction_267,
    ForcedConvection_30s_eqFunction_268,
    ForcedConvection_30s_eqFunction_269,
    ForcedConvection_30s_eqFunction_270,
    ForcedConvection_30s_eqFunction_271,
    ForcedConvection_30s_eqFunction_272,
    ForcedConvection_30s_eqFunction_273,
    ForcedConvection_30s_eqFunction_274,
    ForcedConvection_30s_eqFunction_275,
    ForcedConvection_30s_eqFunction_276,
    ForcedConvection_30s_eqFunction_277,
    ForcedConvection_30s_eqFunction_278,
    ForcedConvection_30s_eqFunction_279,
    ForcedConvection_30s_eqFunction_280,
    ForcedConvection_30s_eqFunction_281,
    ForcedConvection_30s_eqFunction_282,
    ForcedConvection_30s_eqFunction_283,
    ForcedConvection_30s_eqFunction_284,
    ForcedConvection_30s_eqFunction_285,
    ForcedConvection_30s_eqFunction_286,
    ForcedConvection_30s_eqFunction_287,
    ForcedConvection_30s_eqFunction_288,
    ForcedConvection_30s_eqFunction_289,
    ForcedConvection_30s_eqFunction_290,
    ForcedConvection_30s_eqFunction_291,
    ForcedConvection_30s_eqFunction_292,
    ForcedConvection_30s_eqFunction_648,
    ForcedConvection_30s_eqFunction_654,
    ForcedConvection_30s_eqFunction_295,
    ForcedConvection_30s_eqFunction_730,
    ForcedConvection_30s_eqFunction_731,
    ForcedConvection_30s_eqFunction_733,
    ForcedConvection_30s_eqFunction_735,
    ForcedConvection_30s_eqFunction_656,
    ForcedConvection_30s_eqFunction_657,
    ForcedConvection_30s_eqFunction_302,
    ForcedConvection_30s_eqFunction_662,
    ForcedConvection_30s_eqFunction_663,
    ForcedConvection_30s_eqFunction_305,
    ForcedConvection_30s_eqFunction_306,
    ForcedConvection_30s_eqFunction_666,
    ForcedConvection_30s_eqFunction_308,
    ForcedConvection_30s_eqFunction_668,
    ForcedConvection_30s_eqFunction_734,
    ForcedConvection_30s_eqFunction_736,
    ForcedConvection_30s_eqFunction_732,
    ForcedConvection_30s_eqFunction_727,
    ForcedConvection_30s_eqFunction_728,
    ForcedConvection_30s_eqFunction_726,
    ForcedConvection_30s_eqFunction_725,
    ForcedConvection_30s_eqFunction_724,
    ForcedConvection_30s_eqFunction_723,
    ForcedConvection_30s_eqFunction_722,
    ForcedConvection_30s_eqFunction_721,
    ForcedConvection_30s_eqFunction_720,
    ForcedConvection_30s_eqFunction_719,
    ForcedConvection_30s_eqFunction_718,
    ForcedConvection_30s_eqFunction_716,
    ForcedConvection_30s_eqFunction_717,
    ForcedConvection_30s_eqFunction_715,
    ForcedConvection_30s_eqFunction_708,
    ForcedConvection_30s_eqFunction_709,
    ForcedConvection_30s_eqFunction_329,
    ForcedConvection_30s_eqFunction_712,
    ForcedConvection_30s_eqFunction_704,
    ForcedConvection_30s_eqFunction_705,
    ForcedConvection_30s_eqFunction_333,
    ForcedConvection_30s_eqFunction_702,
    ForcedConvection_30s_eqFunction_703,
    ForcedConvection_30s_eqFunction_698,
    ForcedConvection_30s_eqFunction_699,
    ForcedConvection_30s_eqFunction_338,
    ForcedConvection_30s_eqFunction_697,
    ForcedConvection_30s_eqFunction_696,
    ForcedConvection_30s_eqFunction_695,
    ForcedConvection_30s_eqFunction_694,
    ForcedConvection_30s_eqFunction_693,
    ForcedConvection_30s_eqFunction_692,
    ForcedConvection_30s_eqFunction_691,
    ForcedConvection_30s_eqFunction_676,
    ForcedConvection_30s_eqFunction_677,
    ForcedConvection_30s_eqFunction_348,
    ForcedConvection_30s_eqFunction_672,
    ForcedConvection_30s_eqFunction_673,
    ForcedConvection_30s_eqFunction_669,
    ForcedConvection_30s_eqFunction_670,
    ForcedConvection_30s_eqFunction_674,
    ForcedConvection_30s_eqFunction_354,
    ForcedConvection_30s_eqFunction_714,
    ForcedConvection_30s_eqFunction_356,
    ForcedConvection_30s_eqFunction_364,
    ForcedConvection_30s_eqFunction_365,
    ForcedConvection_30s_eqFunction_366,
    ForcedConvection_30s_eqFunction_367,
    ForcedConvection_30s_eqFunction_368,
    ForcedConvection_30s_eqFunction_369,
    ForcedConvection_30s_eqFunction_370,
    ForcedConvection_30s_eqFunction_371,
    ForcedConvection_30s_eqFunction_372,
    ForcedConvection_30s_eqFunction_646,
    ForcedConvection_30s_eqFunction_647,
    ForcedConvection_30s_eqFunction_375,
    ForcedConvection_30s_eqFunction_376,
    ForcedConvection_30s_eqFunction_644,
    ForcedConvection_30s_eqFunction_645,
    ForcedConvection_30s_eqFunction_379,
    ForcedConvection_30s_eqFunction_380,
    ForcedConvection_30s_eqFunction_642,
    ForcedConvection_30s_eqFunction_643,
    ForcedConvection_30s_eqFunction_383,
    ForcedConvection_30s_eqFunction_384,
    ForcedConvection_30s_eqFunction_640,
    ForcedConvection_30s_eqFunction_641,
    ForcedConvection_30s_eqFunction_387,
    ForcedConvection_30s_eqFunction_388,
    ForcedConvection_30s_eqFunction_638,
    ForcedConvection_30s_eqFunction_639,
    ForcedConvection_30s_eqFunction_391,
    ForcedConvection_30s_eqFunction_392,
    ForcedConvection_30s_eqFunction_636,
    ForcedConvection_30s_eqFunction_637,
    ForcedConvection_30s_eqFunction_395,
    ForcedConvection_30s_eqFunction_396,
    ForcedConvection_30s_eqFunction_632,
    ForcedConvection_30s_eqFunction_633,
    ForcedConvection_30s_eqFunction_399,
    ForcedConvection_30s_eqFunction_400,
    ForcedConvection_30s_eqFunction_630,
    ForcedConvection_30s_eqFunction_631,
    ForcedConvection_30s_eqFunction_403,
    ForcedConvection_30s_eqFunction_404,
    ForcedConvection_30s_eqFunction_520,
    ForcedConvection_30s_eqFunction_521,
    ForcedConvection_30s_eqFunction_407,
    ForcedConvection_30s_eqFunction_519,
    ForcedConvection_30s_eqFunction_529,
    ForcedConvection_30s_eqFunction_410,
    ForcedConvection_30s_eqFunction_411,
    ForcedConvection_30s_eqFunction_523,
    ForcedConvection_30s_eqFunction_524,
    ForcedConvection_30s_eqFunction_414,
    ForcedConvection_30s_eqFunction_518,
    ForcedConvection_30s_eqFunction_530,
    ForcedConvection_30s_eqFunction_417,
    ForcedConvection_30s_eqFunction_418,
    ForcedConvection_30s_eqFunction_628,
    ForcedConvection_30s_eqFunction_629,
    ForcedConvection_30s_eqFunction_421,
    ForcedConvection_30s_eqFunction_422,
    ForcedConvection_30s_eqFunction_634,
    ForcedConvection_30s_eqFunction_635,
    ForcedConvection_30s_eqFunction_425,
    ForcedConvection_30s_eqFunction_426,
    ForcedConvection_30s_eqFunction_522,
    ForcedConvection_30s_eqFunction_428,
    ForcedConvection_30s_eqFunction_429,
    ForcedConvection_30s_eqFunction_430,
    ForcedConvection_30s_eqFunction_431,
    ForcedConvection_30s_eqFunction_432,
    ForcedConvection_30s_eqFunction_433,
    ForcedConvection_30s_eqFunction_434,
    ForcedConvection_30s_eqFunction_435,
    ForcedConvection_30s_eqFunction_436,
    ForcedConvection_30s_eqFunction_437,
    ForcedConvection_30s_eqFunction_438,
    ForcedConvection_30s_eqFunction_439,
    ForcedConvection_30s_eqFunction_440,
    ForcedConvection_30s_eqFunction_441,
    ForcedConvection_30s_eqFunction_442,
    ForcedConvection_30s_eqFunction_443,
    ForcedConvection_30s_eqFunction_444,
    ForcedConvection_30s_eqFunction_445,
    ForcedConvection_30s_eqFunction_446,
    ForcedConvection_30s_eqFunction_447,
    ForcedConvection_30s_eqFunction_448,
    ForcedConvection_30s_eqFunction_449,
    ForcedConvection_30s_eqFunction_450,
    ForcedConvection_30s_eqFunction_451,
    ForcedConvection_30s_eqFunction_452,
    ForcedConvection_30s_eqFunction_453,
    ForcedConvection_30s_eqFunction_454,
    ForcedConvection_30s_eqFunction_455,
    ForcedConvection_30s_eqFunction_456,
    ForcedConvection_30s_eqFunction_457,
    ForcedConvection_30s_eqFunction_458,
    ForcedConvection_30s_eqFunction_459,
    ForcedConvection_30s_eqFunction_460,
    ForcedConvection_30s_eqFunction_461,
    ForcedConvection_30s_eqFunction_462,
    ForcedConvection_30s_eqFunction_463,
    ForcedConvection_30s_eqFunction_464,
    ForcedConvection_30s_eqFunction_465,
    ForcedConvection_30s_eqFunction_466,
    ForcedConvection_30s_eqFunction_467,
    ForcedConvection_30s_eqFunction_468,
    ForcedConvection_30s_eqFunction_469,
    ForcedConvection_30s_eqFunction_470,
    ForcedConvection_30s_eqFunction_471,
    ForcedConvection_30s_eqFunction_472,
    ForcedConvection_30s_eqFunction_473,
    ForcedConvection_30s_eqFunction_474,
    ForcedConvection_30s_eqFunction_475,
    ForcedConvection_30s_eqFunction_476,
    ForcedConvection_30s_eqFunction_525,
    ForcedConvection_30s_eqFunction_478,
    ForcedConvection_30s_eqFunction_479,
    ForcedConvection_30s_eqFunction_480,
    ForcedConvection_30s_eqFunction_481,
    ForcedConvection_30s_eqFunction_482,
    ForcedConvection_30s_eqFunction_483,
    ForcedConvection_30s_eqFunction_484,
    ForcedConvection_30s_eqFunction_485,
    ForcedConvection_30s_eqFunction_486,
    ForcedConvection_30s_eqFunction_487,
    ForcedConvection_30s_eqFunction_488,
    ForcedConvection_30s_eqFunction_489,
    ForcedConvection_30s_eqFunction_490,
    ForcedConvection_30s_eqFunction_491,
    ForcedConvection_30s_eqFunction_492,
    ForcedConvection_30s_eqFunction_493,
    ForcedConvection_30s_eqFunction_494,
    ForcedConvection_30s_eqFunction_495,
    ForcedConvection_30s_eqFunction_515,
    ForcedConvection_30s_eqFunction_514,
    ForcedConvection_30s_eqFunction_513,
    ForcedConvection_30s_eqFunction_512,
    ForcedConvection_30s_eqFunction_511,
    ForcedConvection_30s_eqFunction_510,
    ForcedConvection_30s_eqFunction_509,
    ForcedConvection_30s_eqFunction_508,
    ForcedConvection_30s_eqFunction_507,
    ForcedConvection_30s_eqFunction_506,
    ForcedConvection_30s_eqFunction_505,
    ForcedConvection_30s_eqFunction_504,
    ForcedConvection_30s_eqFunction_503,
    ForcedConvection_30s_eqFunction_502,
    ForcedConvection_30s_eqFunction_501,
    ForcedConvection_30s_eqFunction_500,
    ForcedConvection_30s_eqFunction_499,
    ForcedConvection_30s_eqFunction_498,
    ForcedConvection_30s_eqFunction_497,
    ForcedConvection_30s_eqFunction_496
  };
  
  for (int id = 0; id < 484; id++) {
    eqFunctions[id](data, threadData);
  }
}

int ForcedConvection_30s_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  data->simulationInfo->discreteCall = 1;
  ForcedConvection_30s_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  return 0;
}

/* No ForcedConvection_30s_functionInitialEquations_lambda0 function */

int ForcedConvection_30s_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
{
  const int *equationIndexes = NULL;
  double res = 0.0;

  
  return 0;
}


#if defined(__cplusplus)
}
#endif
