/* Initialization */
#include "tmp_one_port_model.h"
#include "tmp_one_port_11mix.h"
#include "tmp_one_port_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void tmp_one_port_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
roo.irRadGai.conExt[1].Q_flow = 0.0
*/
void tmp_one_port_eqFunction_1(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[116]] /* roo.irRadGai.conExt[1].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1;
}

/*
equation index: 2
type: SIMPLE_ASSIGN
roo.irRadGai.conExtWin[1].Q_flow = 0.0
*/
void tmp_one_port_eqFunction_2(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[118]] /* roo.irRadGai.conExtWin[1].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 2;
}

/*
equation index: 3
type: SIMPLE_ASSIGN
roo.irRadGai.conExtWinFra[1].Q_flow = 0.0
*/
void tmp_one_port_eqFunction_3(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[120]] /* roo.irRadGai.conExtWinFra[1].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 3;
}

/*
equation index: 4
type: SIMPLE_ASSIGN
roo.irRadGai.conPar_a[1].Q_flow = 0.0
*/
void tmp_one_port_eqFunction_4(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[122]] /* roo.irRadGai.conPar_a[1].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 4;
}

/*
equation index: 5
type: SIMPLE_ASSIGN
roo.irRadGai.conPar_b[1].Q_flow = 0.0
*/
void tmp_one_port_eqFunction_5(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[124]] /* roo.irRadGai.conPar_b[1].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 5;
}

/*
equation index: 6
type: SIMPLE_ASSIGN
roo.irRadGai.conBou[1].Q_flow = 0.0
*/
void tmp_one_port_eqFunction_6(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[114]] /* roo.irRadGai.conBou[1].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 6;
}

/*
equation index: 7
type: SIMPLE_ASSIGN
roo.irRadExc.conExt[1].Q_flow = 0.0
*/
void tmp_one_port_eqFunction_7(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[99]] /* roo.irRadExc.conExt[1].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 7;
}

/*
equation index: 8
type: SIMPLE_ASSIGN
roo.irRadExc.conExtWin[1].Q_flow = 0.0
*/
void tmp_one_port_eqFunction_8(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[100]] /* roo.irRadExc.conExtWin[1].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 8;
}

/*
equation index: 9
type: SIMPLE_ASSIGN
roo.irRadExc.conExtWinFra[1].Q_flow = 0.0
*/
void tmp_one_port_eqFunction_9(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[101]] /* roo.irRadExc.conExtWinFra[1].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 9;
}

/*
equation index: 10
type: SIMPLE_ASSIGN
roo.irRadExc.conPar_a[1].Q_flow = 0.0
*/
void tmp_one_port_eqFunction_10(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[102]] /* roo.irRadExc.conPar_a[1].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 10;
}

/*
equation index: 11
type: SIMPLE_ASSIGN
roo.irRadExc.conPar_b[1].Q_flow = 0.0
*/
void tmp_one_port_eqFunction_11(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[103]] /* roo.irRadExc.conPar_b[1].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 11;
}

/*
equation index: 12
type: SIMPLE_ASSIGN
roo.irRadExc.conBou[1].Q_flow = 0.0
*/
void tmp_one_port_eqFunction_12(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[98]] /* roo.irRadExc.conBou[1].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 12;
}

/*
equation index: 13
type: SIMPLE_ASSIGN
roo.radTem.conExt[1].Q_flow = 0.0
*/
void tmp_one_port_eqFunction_13(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[153]] /* roo.radTem.conExt[1].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 13;
}

/*
equation index: 14
type: SIMPLE_ASSIGN
roo.radTem.conExtWin[1].Q_flow = 0.0
*/
void tmp_one_port_eqFunction_14(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[155]] /* roo.radTem.conExtWin[1].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 14;
}

/*
equation index: 15
type: SIMPLE_ASSIGN
roo.radTem.conExtWinFra[1].Q_flow = 0.0
*/
void tmp_one_port_eqFunction_15(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[157]] /* roo.radTem.conExtWinFra[1].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 15;
}

/*
equation index: 16
type: SIMPLE_ASSIGN
roo.radTem.conPar_a[1].Q_flow = 0.0
*/
void tmp_one_port_eqFunction_16(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[159]] /* roo.radTem.conPar_a[1].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 16;
}

/*
equation index: 17
type: SIMPLE_ASSIGN
roo.radTem.conPar_b[1].Q_flow = 0.0
*/
void tmp_one_port_eqFunction_17(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[161]] /* roo.radTem.conPar_b[1].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 17;
}

/*
equation index: 18
type: SIMPLE_ASSIGN
roo.radTem.conBou[1].Q_flow = 0.0
*/
void tmp_one_port_eqFunction_18(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[151]] /* roo.radTem.conBou[1].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 18;
}

/*
equation index: 19
type: SIMPLE_ASSIGN
roo.radTem.glaUns_internal[1].Q_flow = 0.0
*/
void tmp_one_port_eqFunction_19(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,19};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[171]] /* roo.radTem.glaUns_internal[1].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 19;
}

/*
equation index: 20
type: SIMPLE_ASSIGN
roo.radTem.glaSha_internal[1].Q_flow = 0.0
*/
void tmp_one_port_eqFunction_20(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,20};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[169]] /* roo.radTem.glaSha_internal[1].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 20;
}

/*
equation index: 21
type: SIMPLE_ASSIGN
roo.radTem.sha_internal[1].Q_flow = 0.0
*/
void tmp_one_port_eqFunction_21(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,21};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[173]] /* roo.radTem.sha_internal[1].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 21;
}

/*
equation index: 22
type: SIMPLE_ASSIGN
roo.air.fluInt.C_inflow_internal[1] = 0.0
*/
void tmp_one_port_eqFunction_22(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,22};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[65]] /* roo.air.fluInt.C_inflow_internal[1] variable */) = 0.0;
  threadData->lastEquationSolved = 22;
}

/*
equation index: 23
type: SIMPLE_ASSIGN
roo.air.fluInt.C_inflow_internal[2] = 0.0
*/
void tmp_one_port_eqFunction_23(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,23};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[66]] /* roo.air.fluInt.C_inflow_internal[2] variable */) = 0.0;
  threadData->lastEquationSolved = 23;
}

/*
equation index: 24
type: SIMPLE_ASSIGN
roo.air.fluInt.C_outflow_internal[1] = 0.0
*/
void tmp_one_port_eqFunction_24(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,24};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[67]] /* roo.air.fluInt.C_outflow_internal[1] variable */) = 0.0;
  threadData->lastEquationSolved = 24;
}

/*
equation index: 25
type: SIMPLE_ASSIGN
roo.air.fluInt.C_outflow_internal[2] = 0.0
*/
void tmp_one_port_eqFunction_25(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,25};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[68]] /* roo.air.fluInt.C_outflow_internal[2] variable */) = 0.0;
  threadData->lastEquationSolved = 25;
}

/*
equation index: 26
type: SIMPLE_ASSIGN
roo.irRadGai.shaSig[1].u_in_internal = 0.0
*/
void tmp_one_port_eqFunction_26(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,26};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[145]] /* roo.irRadGai.shaSig[1].u_in_internal variable */) = 0.0;
  threadData->lastEquationSolved = 26;
}

/*
equation index: 27
type: SIMPLE_ASSIGN
roo.irRadGai.conExt[1].T = 293.15
*/
void tmp_one_port_eqFunction_27(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,27};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[117]] /* roo.irRadGai.conExt[1].T variable */) = 293.15;
  threadData->lastEquationSolved = 27;
}

/*
equation index: 28
type: SIMPLE_ASSIGN
roo.irRadGai.conExtWin[1].T = 293.15
*/
void tmp_one_port_eqFunction_28(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,28};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[119]] /* roo.irRadGai.conExtWin[1].T variable */) = 293.15;
  threadData->lastEquationSolved = 28;
}

/*
equation index: 29
type: SIMPLE_ASSIGN
roo.irRadGai.conPar_a[1].T = 293.15
*/
void tmp_one_port_eqFunction_29(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,29};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[123]] /* roo.irRadGai.conPar_a[1].T variable */) = 293.15;
  threadData->lastEquationSolved = 29;
}

/*
equation index: 30
type: SIMPLE_ASSIGN
roo.irRadGai.conPar_b[1].T = 293.15
*/
void tmp_one_port_eqFunction_30(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,30};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[125]] /* roo.irRadGai.conPar_b[1].T variable */) = 293.15;
  threadData->lastEquationSolved = 30;
}

/*
equation index: 31
type: SIMPLE_ASSIGN
roo.irRadGai.conBou[1].T = 293.15
*/
void tmp_one_port_eqFunction_31(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,31};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[115]] /* roo.irRadGai.conBou[1].T variable */) = 293.15;
  threadData->lastEquationSolved = 31;
}

/*
equation index: 32
type: SIMPLE_ASSIGN
roo.irRadGai.conExtWinFra[1].T = 293.15
*/
void tmp_one_port_eqFunction_32(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,32};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[121]] /* roo.irRadGai.conExtWinFra[1].T variable */) = 293.15;
  threadData->lastEquationSolved = 32;
}

/*
equation index: 33
type: SIMPLE_ASSIGN
roo.irRadExc.JInConExtWin_internal[1] = 0.0
*/
void tmp_one_port_eqFunction_33(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,33};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[90]] /* roo.irRadExc.JInConExtWin_internal[1] variable */) = 0.0;
  threadData->lastEquationSolved = 33;
}

/*
equation index: 34
type: SIMPLE_ASSIGN
roo.irRadExc.JOutConExtWin[1] = 0.0
*/
void tmp_one_port_eqFunction_34(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,34};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[91]] /* roo.irRadExc.JOutConExtWin[1] variable */) = 0.0;
  threadData->lastEquationSolved = 34;
}

/*
equation index: 35
type: SIMPLE_ASSIGN
roo.radTem.uSha_internal[1] = 0.0
*/
void tmp_one_port_eqFunction_35(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,35};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[175]] /* roo.radTem.uSha_internal[1] variable */) = 0.0;
  threadData->lastEquationSolved = 35;
}

/*
equation index: 36
type: SIMPLE_ASSIGN
roo.radTem.glaSha_internal[1].T = 293.15
*/
void tmp_one_port_eqFunction_36(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,36};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* roo.radTem.glaSha_internal[1].T variable */) = 293.15;
  threadData->lastEquationSolved = 36;
}

/*
equation index: 37
type: SIMPLE_ASSIGN
roo.radTem.sha_internal[1].T = 293.15
*/
void tmp_one_port_eqFunction_37(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,37};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[174]] /* roo.radTem.sha_internal[1].T variable */) = 293.15;
  threadData->lastEquationSolved = 37;
}

/*
equation index: 38
type: SIMPLE_ASSIGN
weaDat.tWetBul_TDryBulXi.TDryBul_degC = 0.0
*/
void tmp_one_port_eqFunction_38(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,38};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[227]] /* weaDat.tWetBul_TDryBulXi.TDryBul_degC variable */) = 0.0;
  threadData->lastEquationSolved = 38;
}

/*
equation index: 39
type: SIMPLE_ASSIGN
weaDat.tWetBul_TDryBulXi.rh_per = 0.0
*/
void tmp_one_port_eqFunction_39(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,39};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[231]] /* weaDat.tWetBul_TDryBulXi.rh_per variable */) = 0.0;
  threadData->lastEquationSolved = 39;
}

/*
equation index: 40
type: SIMPLE_ASSIGN
weaDat.con30Min.y = 1800.0
*/
void tmp_one_port_eqFunction_40(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,40};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[189]] /* weaDat.con30Min.y variable */) = 1800.0;
  threadData->lastEquationSolved = 40;
}

/*
equation index: 41
type: SIMPLE_ASSIGN
roo.air.QCon_flow = roo.heaGai.AFlo * qCon.k
*/
void tmp_one_port_eqFunction_41(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,41};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[49]] /* roo.air.QCon_flow variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[469]] /* roo.heaGai.AFlo PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5]] /* qCon.k PARAM */));
  threadData->lastEquationSolved = 41;
}

/*
equation index: 42
type: SIMPLE_ASSIGN
roo.air.cfd.u[7] = roo.air.QTotCon_flow.k2 * roo.air.QCon_flow
*/
void tmp_one_port_eqFunction_42(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,42};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[56]] /* roo.air.cfd.u[7] variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[29]] /* roo.air.QTotCon_flow.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[49]] /* roo.air.QCon_flow variable */));
  threadData->lastEquationSolved = 42;
}
extern void tmp_one_port_eqFunction_527(DATA *data, threadData_t *threadData);


/*
equation index: 44
type: SIMPLE_ASSIGN
roo.air.cfd.uWri[7] = roo.air.cfd.u[7]
*/
void tmp_one_port_eqFunction_44(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,44};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[275]] /* roo.air.cfd.uWri[7] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[56]] /* roo.air.cfd.u[7] variable */);
  threadData->lastEquationSolved = 44;
}

/*
equation index: 45
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uWri[7] = roo.air.cfd.uWri[7]
*/
void tmp_one_port_eqFunction_45(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,45};
  (data->simulationInfo->realVarsPre[275] /* roo.air.cfd.uWri[7] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[275]] /* roo.air.cfd.uWri[7] DISCRETE */);
  threadData->lastEquationSolved = 45;
}

/*
equation index: 46
type: SIMPLE_ASSIGN
roo.heaGai.QRad_flow = roo.heaGai.AFlo * qRad.k
*/
void tmp_one_port_eqFunction_46(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,46};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[74]] /* roo.heaGai.QRad_flow variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[469]] /* roo.heaGai.AFlo PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[7]] /* qRad.k PARAM */));
  threadData->lastEquationSolved = 46;
}

/*
equation index: 47
type: SIMPLE_ASSIGN
roo.irRadGai.Q_flow = roo.add.k2 * roo.heaGai.QRad_flow
*/
void tmp_one_port_eqFunction_47(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,47};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[113]] /* roo.irRadGai.Q_flow variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[15]] /* roo.add.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[74]] /* roo.heaGai.QRad_flow variable */));
  threadData->lastEquationSolved = 47;
}

/*
equation index: 48
type: SIMPLE_ASSIGN
roo.irRadGai.AEpsConExtWinUns[1] = roo.irRadGai.AConExtWinGla[1] * roo.irRadGai.epsConExtWinUns[1]
*/
void tmp_one_port_eqFunction_48(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,48};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[111]] /* roo.irRadGai.AEpsConExtWinUns[1] variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[768]] /* roo.irRadGai.AConExtWinGla[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[964]] /* roo.irRadGai.epsConExtWinUns[1] PARAM */));
  threadData->lastEquationSolved = 48;
}

/*
equation index: 49
type: SIMPLE_ASSIGN
roo.radTem.epsAGla[1] = roo.radTem.AGla[1] * roo.radTem.epsGla[1]
*/
void tmp_one_port_eqFunction_49(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,49};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1183]] /* roo.radTem.epsAGla[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1006]] /* roo.radTem.AGla[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1205]] /* roo.radTem.epsGla[1] PARAM */));
  threadData->lastEquationSolved = 49;
}

/*
equation index: 50
type: SIMPLE_ASSIGN
roo.radTem.epsAOpa[12] = roo.radTem.epsConExtWinFra[1] * roo.radTem.AConExtWinFra[1]
*/
void tmp_one_port_eqFunction_50(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,50};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1195]] /* roo.radTem.epsAOpa[12] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1199]] /* roo.radTem.epsConExtWinFra[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1002]] /* roo.radTem.AConExtWinFra[1] PARAM */));
  threadData->lastEquationSolved = 50;
}

/*
equation index: 51
type: SIMPLE_ASSIGN
roo.radTem.epsAOpa[11] = roo.radTem.epsConExtWinOpa[1] * roo.radTem.AConExtWinOpa[1]
*/
void tmp_one_port_eqFunction_51(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,51};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1194]] /* roo.radTem.epsAOpa[11] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1200]] /* roo.radTem.epsConExtWinOpa[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1004]] /* roo.radTem.AConExtWinOpa[1] PARAM */));
  threadData->lastEquationSolved = 51;
}

/*
equation index: 52
type: SIMPLE_ASSIGN
roo.radTem.epsAOpa[10] = roo.radTem.epsSurBou[6] * roo.radTem.ASurBou[6]
*/
void tmp_one_port_eqFunction_52(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,52};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1193]] /* roo.radTem.epsAOpa[10] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1212]] /* roo.radTem.epsSurBou[6] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1012]] /* roo.radTem.ASurBou[6] PARAM */));
  threadData->lastEquationSolved = 52;
}

/*
equation index: 53
type: SIMPLE_ASSIGN
roo.radTem.epsAOpa[9] = roo.radTem.epsSurBou[5] * roo.radTem.ASurBou[5]
*/
void tmp_one_port_eqFunction_53(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,53};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1192]] /* roo.radTem.epsAOpa[9] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1211]] /* roo.radTem.epsSurBou[5] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1011]] /* roo.radTem.ASurBou[5] PARAM */));
  threadData->lastEquationSolved = 53;
}

/*
equation index: 54
type: SIMPLE_ASSIGN
roo.radTem.epsAOpa[8] = roo.radTem.epsSurBou[4] * roo.radTem.ASurBou[4]
*/
void tmp_one_port_eqFunction_54(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,54};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1191]] /* roo.radTem.epsAOpa[8] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1210]] /* roo.radTem.epsSurBou[4] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1010]] /* roo.radTem.ASurBou[4] PARAM */));
  threadData->lastEquationSolved = 54;
}

/*
equation index: 55
type: SIMPLE_ASSIGN
roo.radTem.epsAOpa[7] = roo.radTem.epsSurBou[3] * roo.radTem.ASurBou[3]
*/
void tmp_one_port_eqFunction_55(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,55};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1190]] /* roo.radTem.epsAOpa[7] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1209]] /* roo.radTem.epsSurBou[3] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1009]] /* roo.radTem.ASurBou[3] PARAM */));
  threadData->lastEquationSolved = 55;
}

/*
equation index: 56
type: SIMPLE_ASSIGN
roo.radTem.epsAOpa[6] = roo.radTem.epsSurBou[2] * roo.radTem.ASurBou[2]
*/
void tmp_one_port_eqFunction_56(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,56};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1189]] /* roo.radTem.epsAOpa[6] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1208]] /* roo.radTem.epsSurBou[2] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1008]] /* roo.radTem.ASurBou[2] PARAM */));
  threadData->lastEquationSolved = 56;
}

/*
equation index: 57
type: SIMPLE_ASSIGN
roo.radTem.epsAOpa[5] = roo.radTem.epsSurBou[1] * roo.radTem.ASurBou[1]
*/
void tmp_one_port_eqFunction_57(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,57};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1188]] /* roo.radTem.epsAOpa[5] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1207]] /* roo.radTem.epsSurBou[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1007]] /* roo.radTem.ASurBou[1] PARAM */));
  threadData->lastEquationSolved = 57;
}

/*
equation index: 58
type: SIMPLE_ASSIGN
roo.radTem.epsAOpa[4] = roo.radTem.epsConBou[1] * roo.radTem.AConBou[1]
*/
void tmp_one_port_eqFunction_58(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,58};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1187]] /* roo.radTem.epsAOpa[4] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1197]] /* roo.radTem.epsConBou[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1000]] /* roo.radTem.AConBou[1] PARAM */));
  threadData->lastEquationSolved = 58;
}

/*
equation index: 59
type: SIMPLE_ASSIGN
roo.radTem.epsAOpa[3] = roo.radTem.epsConPar_b[1] * roo.radTem.AConPar[1]
*/
void tmp_one_port_eqFunction_59(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,59};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1186]] /* roo.radTem.epsAOpa[3] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1204]] /* roo.radTem.epsConPar_b[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1005]] /* roo.radTem.AConPar[1] PARAM */));
  threadData->lastEquationSolved = 59;
}

/*
equation index: 60
type: SIMPLE_ASSIGN
roo.radTem.epsAOpa[2] = roo.radTem.epsConPar_a[1] * roo.radTem.AConPar[1]
*/
void tmp_one_port_eqFunction_60(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,60};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1185]] /* roo.radTem.epsAOpa[2] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1203]] /* roo.radTem.epsConPar_a[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1005]] /* roo.radTem.AConPar[1] PARAM */));
  threadData->lastEquationSolved = 60;
}

/*
equation index: 61
type: SIMPLE_ASSIGN
roo.radTem.epsAOpa[1] = roo.radTem.epsConExt[1] * roo.radTem.AConExt[1]
*/
void tmp_one_port_eqFunction_61(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,61};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1184]] /* roo.radTem.epsAOpa[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1198]] /* roo.radTem.epsConExt[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1001]] /* roo.radTem.AConExt[1] PARAM */));
  threadData->lastEquationSolved = 61;
}

/*
equation index: 62
type: SIMPLE_ASSIGN
roo.irRadExc.AOpa[6] = roo.irRadExc.ASurBou[6]
*/
void tmp_one_port_eqFunction_62(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,62};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[487]] /* roo.irRadExc.AOpa[6] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[493]] /* roo.irRadExc.ASurBou[6] PARAM */);
  threadData->lastEquationSolved = 62;
}

/*
equation index: 63
type: SIMPLE_ASSIGN
roo.irRadExc.kOpa[6] = 5.6703744191844314e-8 * roo.irRadExc.epsSurBou[6] * roo.irRadExc.AOpa[6]
*/
void tmp_one_port_eqFunction_63(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,63};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[727]] /* roo.irRadExc.kOpa[6] PARAM */) = (5.6703744191844314e-8) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[721]] /* roo.irRadExc.epsSurBou[6] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[487]] /* roo.irRadExc.AOpa[6] PARAM */)));
  threadData->lastEquationSolved = 63;
}

/*
equation index: 64
type: SIMPLE_ASSIGN
roo.irRadExc.kOpaInv[6] = 1.0 / roo.irRadExc.kOpa[6]
*/
void tmp_one_port_eqFunction_64(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,64};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[733]] /* roo.irRadExc.kOpaInv[6] PARAM */) = DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[727]] /* roo.irRadExc.kOpa[6] PARAM */),"roo.irRadExc.kOpa[6]",equationIndexes);
  threadData->lastEquationSolved = 64;
}

/*
equation index: 65
type: SIMPLE_ASSIGN
roo.irRadExc.A[6] = roo.irRadExc.AOpa[6]
*/
void tmp_one_port_eqFunction_65(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,65};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[475]] /* roo.irRadExc.A[6] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[487]] /* roo.irRadExc.AOpa[6] PARAM */);
  threadData->lastEquationSolved = 65;
}

/*
equation index: 66
type: SIMPLE_ASSIGN
$START.roo.irRadExc.G[6] = 335.01273601689667 * roo.irRadExc.A[6]
*/
void tmp_one_port_eqFunction_66(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,66};
  ((modelica_real *)((data->modelData->realVarsData[83] /* roo.irRadExc.G[6] variable */).attribute .start.data))[0] = (335.01273601689667) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[475]] /* roo.irRadExc.A[6] PARAM */));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[83]] /* roo.irRadExc.G[6] variable */) = ((modelica_real *)((data->modelData->realVarsData[83] /* roo.irRadExc.G[6] variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[83].info /* roo.irRadExc.G[6] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[83]] /* roo.irRadExc.G[6] variable */));
  threadData->lastEquationSolved = 66;
}

/*
equation index: 67
type: SIMPLE_ASSIGN
$START.roo.irRadExc.J[6] = (-335.01273601689667) * roo.irRadExc.A[6]
*/
void tmp_one_port_eqFunction_67(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,67};
  ((modelica_real *)((data->modelData->realVarsData[89] /* roo.irRadExc.J[6] variable */).attribute .start.data))[0] = (-335.01273601689667) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[475]] /* roo.irRadExc.A[6] PARAM */));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[89]] /* roo.irRadExc.J[6] variable */) = ((modelica_real *)((data->modelData->realVarsData[89] /* roo.irRadExc.J[6] variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[89].info /* roo.irRadExc.J[6] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[89]] /* roo.irRadExc.J[6] variable */));
  threadData->lastEquationSolved = 67;
}

/*
equation index: 68
type: SIMPLE_ASSIGN
roo.irRadExc.epsOpa[6] = roo.irRadExc.epsSurBou[6]
*/
void tmp_one_port_eqFunction_68(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,68};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[715]] /* roo.irRadExc.epsOpa[6] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[721]] /* roo.irRadExc.epsSurBou[6] PARAM */);
  threadData->lastEquationSolved = 68;
}

/*
equation index: 69
type: SIMPLE_ASSIGN
roo.irRadExc.rhoOpa[6] = 1.0 - roo.irRadExc.epsOpa[6]
*/
void tmp_one_port_eqFunction_69(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,69};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[739]] /* roo.irRadExc.rhoOpa[6] PARAM */) = 1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[715]] /* roo.irRadExc.epsOpa[6] PARAM */);
  threadData->lastEquationSolved = 69;
}

/*
equation index: 70
type: SIMPLE_ASSIGN
roo.irRadExc.AOpa[5] = roo.irRadExc.ASurBou[5]
*/
void tmp_one_port_eqFunction_70(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,70};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[486]] /* roo.irRadExc.AOpa[5] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[492]] /* roo.irRadExc.ASurBou[5] PARAM */);
  threadData->lastEquationSolved = 70;
}

/*
equation index: 71
type: SIMPLE_ASSIGN
roo.irRadExc.kOpa[5] = 5.6703744191844314e-8 * roo.irRadExc.epsSurBou[5] * roo.irRadExc.AOpa[5]
*/
void tmp_one_port_eqFunction_71(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,71};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[726]] /* roo.irRadExc.kOpa[5] PARAM */) = (5.6703744191844314e-8) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[720]] /* roo.irRadExc.epsSurBou[5] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[486]] /* roo.irRadExc.AOpa[5] PARAM */)));
  threadData->lastEquationSolved = 71;
}

/*
equation index: 72
type: SIMPLE_ASSIGN
roo.irRadExc.kOpaInv[5] = 1.0 / roo.irRadExc.kOpa[5]
*/
void tmp_one_port_eqFunction_72(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,72};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[732]] /* roo.irRadExc.kOpaInv[5] PARAM */) = DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[726]] /* roo.irRadExc.kOpa[5] PARAM */),"roo.irRadExc.kOpa[5]",equationIndexes);
  threadData->lastEquationSolved = 72;
}

/*
equation index: 73
type: SIMPLE_ASSIGN
roo.irRadExc.A[5] = roo.irRadExc.AOpa[5]
*/
void tmp_one_port_eqFunction_73(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,73};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[474]] /* roo.irRadExc.A[5] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[486]] /* roo.irRadExc.AOpa[5] PARAM */);
  threadData->lastEquationSolved = 73;
}

/*
equation index: 74
type: SIMPLE_ASSIGN
$START.roo.irRadExc.G[5] = 335.01273601689667 * roo.irRadExc.A[5]
*/
void tmp_one_port_eqFunction_74(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,74};
  ((modelica_real *)((data->modelData->realVarsData[82] /* roo.irRadExc.G[5] variable */).attribute .start.data))[0] = (335.01273601689667) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[474]] /* roo.irRadExc.A[5] PARAM */));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[82]] /* roo.irRadExc.G[5] variable */) = ((modelica_real *)((data->modelData->realVarsData[82] /* roo.irRadExc.G[5] variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[82].info /* roo.irRadExc.G[5] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[82]] /* roo.irRadExc.G[5] variable */));
  threadData->lastEquationSolved = 74;
}

/*
equation index: 75
type: SIMPLE_ASSIGN
$START.roo.irRadExc.J[5] = (-335.01273601689667) * roo.irRadExc.A[5]
*/
void tmp_one_port_eqFunction_75(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,75};
  ((modelica_real *)((data->modelData->realVarsData[88] /* roo.irRadExc.J[5] variable */).attribute .start.data))[0] = (-335.01273601689667) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[474]] /* roo.irRadExc.A[5] PARAM */));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* roo.irRadExc.J[5] variable */) = ((modelica_real *)((data->modelData->realVarsData[88] /* roo.irRadExc.J[5] variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[88].info /* roo.irRadExc.J[5] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* roo.irRadExc.J[5] variable */));
  threadData->lastEquationSolved = 75;
}

/*
equation index: 76
type: SIMPLE_ASSIGN
roo.irRadExc.epsOpa[5] = roo.irRadExc.epsSurBou[5]
*/
void tmp_one_port_eqFunction_76(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,76};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[714]] /* roo.irRadExc.epsOpa[5] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[720]] /* roo.irRadExc.epsSurBou[5] PARAM */);
  threadData->lastEquationSolved = 76;
}

/*
equation index: 77
type: SIMPLE_ASSIGN
roo.irRadExc.rhoOpa[5] = 1.0 - roo.irRadExc.epsOpa[5]
*/
void tmp_one_port_eqFunction_77(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,77};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[738]] /* roo.irRadExc.rhoOpa[5] PARAM */) = 1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[714]] /* roo.irRadExc.epsOpa[5] PARAM */);
  threadData->lastEquationSolved = 77;
}

/*
equation index: 78
type: SIMPLE_ASSIGN
roo.irRadExc.AOpa[4] = roo.irRadExc.ASurBou[4]
*/
void tmp_one_port_eqFunction_78(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,78};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[485]] /* roo.irRadExc.AOpa[4] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[491]] /* roo.irRadExc.ASurBou[4] PARAM */);
  threadData->lastEquationSolved = 78;
}

/*
equation index: 79
type: SIMPLE_ASSIGN
roo.irRadExc.kOpa[4] = 5.6703744191844314e-8 * roo.irRadExc.epsSurBou[4] * roo.irRadExc.AOpa[4]
*/
void tmp_one_port_eqFunction_79(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,79};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[725]] /* roo.irRadExc.kOpa[4] PARAM */) = (5.6703744191844314e-8) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[719]] /* roo.irRadExc.epsSurBou[4] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[485]] /* roo.irRadExc.AOpa[4] PARAM */)));
  threadData->lastEquationSolved = 79;
}

/*
equation index: 80
type: SIMPLE_ASSIGN
roo.irRadExc.kOpaInv[4] = 1.0 / roo.irRadExc.kOpa[4]
*/
void tmp_one_port_eqFunction_80(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,80};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[731]] /* roo.irRadExc.kOpaInv[4] PARAM */) = DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[725]] /* roo.irRadExc.kOpa[4] PARAM */),"roo.irRadExc.kOpa[4]",equationIndexes);
  threadData->lastEquationSolved = 80;
}

/*
equation index: 81
type: SIMPLE_ASSIGN
roo.irRadExc.A[4] = roo.irRadExc.AOpa[4]
*/
void tmp_one_port_eqFunction_81(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,81};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[473]] /* roo.irRadExc.A[4] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[485]] /* roo.irRadExc.AOpa[4] PARAM */);
  threadData->lastEquationSolved = 81;
}

/*
equation index: 82
type: SIMPLE_ASSIGN
$START.roo.irRadExc.G[4] = 335.01273601689667 * roo.irRadExc.A[4]
*/
void tmp_one_port_eqFunction_82(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,82};
  ((modelica_real *)((data->modelData->realVarsData[81] /* roo.irRadExc.G[4] variable */).attribute .start.data))[0] = (335.01273601689667) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[473]] /* roo.irRadExc.A[4] PARAM */));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[81]] /* roo.irRadExc.G[4] variable */) = ((modelica_real *)((data->modelData->realVarsData[81] /* roo.irRadExc.G[4] variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[81].info /* roo.irRadExc.G[4] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[81]] /* roo.irRadExc.G[4] variable */));
  threadData->lastEquationSolved = 82;
}

/*
equation index: 83
type: SIMPLE_ASSIGN
$START.roo.irRadExc.J[4] = (-335.01273601689667) * roo.irRadExc.A[4]
*/
void tmp_one_port_eqFunction_83(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,83};
  ((modelica_real *)((data->modelData->realVarsData[87] /* roo.irRadExc.J[4] variable */).attribute .start.data))[0] = (-335.01273601689667) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[473]] /* roo.irRadExc.A[4] PARAM */));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[87]] /* roo.irRadExc.J[4] variable */) = ((modelica_real *)((data->modelData->realVarsData[87] /* roo.irRadExc.J[4] variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[87].info /* roo.irRadExc.J[4] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[87]] /* roo.irRadExc.J[4] variable */));
  threadData->lastEquationSolved = 83;
}

/*
equation index: 84
type: SIMPLE_ASSIGN
roo.irRadExc.epsOpa[4] = roo.irRadExc.epsSurBou[4]
*/
void tmp_one_port_eqFunction_84(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,84};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[713]] /* roo.irRadExc.epsOpa[4] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[719]] /* roo.irRadExc.epsSurBou[4] PARAM */);
  threadData->lastEquationSolved = 84;
}

/*
equation index: 85
type: SIMPLE_ASSIGN
roo.irRadExc.rhoOpa[4] = 1.0 - roo.irRadExc.epsOpa[4]
*/
void tmp_one_port_eqFunction_85(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,85};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[737]] /* roo.irRadExc.rhoOpa[4] PARAM */) = 1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[713]] /* roo.irRadExc.epsOpa[4] PARAM */);
  threadData->lastEquationSolved = 85;
}

/*
equation index: 86
type: SIMPLE_ASSIGN
roo.irRadExc.AOpa[3] = roo.irRadExc.ASurBou[3]
*/
void tmp_one_port_eqFunction_86(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,86};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[484]] /* roo.irRadExc.AOpa[3] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[490]] /* roo.irRadExc.ASurBou[3] PARAM */);
  threadData->lastEquationSolved = 86;
}

/*
equation index: 87
type: SIMPLE_ASSIGN
roo.irRadExc.kOpa[3] = 5.6703744191844314e-8 * roo.irRadExc.epsSurBou[3] * roo.irRadExc.AOpa[3]
*/
void tmp_one_port_eqFunction_87(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,87};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[724]] /* roo.irRadExc.kOpa[3] PARAM */) = (5.6703744191844314e-8) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[718]] /* roo.irRadExc.epsSurBou[3] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[484]] /* roo.irRadExc.AOpa[3] PARAM */)));
  threadData->lastEquationSolved = 87;
}

/*
equation index: 88
type: SIMPLE_ASSIGN
roo.irRadExc.kOpaInv[3] = 1.0 / roo.irRadExc.kOpa[3]
*/
void tmp_one_port_eqFunction_88(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,88};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[730]] /* roo.irRadExc.kOpaInv[3] PARAM */) = DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[724]] /* roo.irRadExc.kOpa[3] PARAM */),"roo.irRadExc.kOpa[3]",equationIndexes);
  threadData->lastEquationSolved = 88;
}

/*
equation index: 89
type: SIMPLE_ASSIGN
roo.irRadExc.A[3] = roo.irRadExc.AOpa[3]
*/
void tmp_one_port_eqFunction_89(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,89};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[472]] /* roo.irRadExc.A[3] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[484]] /* roo.irRadExc.AOpa[3] PARAM */);
  threadData->lastEquationSolved = 89;
}

/*
equation index: 90
type: SIMPLE_ASSIGN
$START.roo.irRadExc.G[3] = 335.01273601689667 * roo.irRadExc.A[3]
*/
void tmp_one_port_eqFunction_90(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,90};
  ((modelica_real *)((data->modelData->realVarsData[80] /* roo.irRadExc.G[3] variable */).attribute .start.data))[0] = (335.01273601689667) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[472]] /* roo.irRadExc.A[3] PARAM */));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[80]] /* roo.irRadExc.G[3] variable */) = ((modelica_real *)((data->modelData->realVarsData[80] /* roo.irRadExc.G[3] variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[80].info /* roo.irRadExc.G[3] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[80]] /* roo.irRadExc.G[3] variable */));
  threadData->lastEquationSolved = 90;
}

/*
equation index: 91
type: SIMPLE_ASSIGN
$START.roo.irRadExc.J[3] = (-335.01273601689667) * roo.irRadExc.A[3]
*/
void tmp_one_port_eqFunction_91(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,91};
  ((modelica_real *)((data->modelData->realVarsData[86] /* roo.irRadExc.J[3] variable */).attribute .start.data))[0] = (-335.01273601689667) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[472]] /* roo.irRadExc.A[3] PARAM */));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[86]] /* roo.irRadExc.J[3] variable */) = ((modelica_real *)((data->modelData->realVarsData[86] /* roo.irRadExc.J[3] variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[86].info /* roo.irRadExc.J[3] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[86]] /* roo.irRadExc.J[3] variable */));
  threadData->lastEquationSolved = 91;
}

/*
equation index: 92
type: SIMPLE_ASSIGN
roo.irRadExc.epsOpa[3] = roo.irRadExc.epsSurBou[3]
*/
void tmp_one_port_eqFunction_92(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,92};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[712]] /* roo.irRadExc.epsOpa[3] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[718]] /* roo.irRadExc.epsSurBou[3] PARAM */);
  threadData->lastEquationSolved = 92;
}

/*
equation index: 93
type: SIMPLE_ASSIGN
roo.irRadExc.rhoOpa[3] = 1.0 - roo.irRadExc.epsOpa[3]
*/
void tmp_one_port_eqFunction_93(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,93};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[736]] /* roo.irRadExc.rhoOpa[3] PARAM */) = 1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[712]] /* roo.irRadExc.epsOpa[3] PARAM */);
  threadData->lastEquationSolved = 93;
}

/*
equation index: 94
type: SIMPLE_ASSIGN
roo.irRadExc.AOpa[2] = roo.irRadExc.ASurBou[2]
*/
void tmp_one_port_eqFunction_94(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,94};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[483]] /* roo.irRadExc.AOpa[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[489]] /* roo.irRadExc.ASurBou[2] PARAM */);
  threadData->lastEquationSolved = 94;
}

/*
equation index: 95
type: SIMPLE_ASSIGN
roo.irRadExc.kOpa[2] = 5.6703744191844314e-8 * roo.irRadExc.epsSurBou[2] * roo.irRadExc.AOpa[2]
*/
void tmp_one_port_eqFunction_95(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,95};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[723]] /* roo.irRadExc.kOpa[2] PARAM */) = (5.6703744191844314e-8) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[717]] /* roo.irRadExc.epsSurBou[2] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[483]] /* roo.irRadExc.AOpa[2] PARAM */)));
  threadData->lastEquationSolved = 95;
}

/*
equation index: 96
type: SIMPLE_ASSIGN
roo.irRadExc.kOpaInv[2] = 1.0 / roo.irRadExc.kOpa[2]
*/
void tmp_one_port_eqFunction_96(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,96};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[729]] /* roo.irRadExc.kOpaInv[2] PARAM */) = DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[723]] /* roo.irRadExc.kOpa[2] PARAM */),"roo.irRadExc.kOpa[2]",equationIndexes);
  threadData->lastEquationSolved = 96;
}

/*
equation index: 97
type: SIMPLE_ASSIGN
roo.irRadExc.A[2] = roo.irRadExc.AOpa[2]
*/
void tmp_one_port_eqFunction_97(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,97};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[471]] /* roo.irRadExc.A[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[483]] /* roo.irRadExc.AOpa[2] PARAM */);
  threadData->lastEquationSolved = 97;
}

/*
equation index: 98
type: SIMPLE_ASSIGN
$START.roo.irRadExc.G[2] = 335.01273601689667 * roo.irRadExc.A[2]
*/
void tmp_one_port_eqFunction_98(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,98};
  ((modelica_real *)((data->modelData->realVarsData[79] /* roo.irRadExc.G[2] variable */).attribute .start.data))[0] = (335.01273601689667) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[471]] /* roo.irRadExc.A[2] PARAM */));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[79]] /* roo.irRadExc.G[2] variable */) = ((modelica_real *)((data->modelData->realVarsData[79] /* roo.irRadExc.G[2] variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[79].info /* roo.irRadExc.G[2] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[79]] /* roo.irRadExc.G[2] variable */));
  threadData->lastEquationSolved = 98;
}

/*
equation index: 99
type: SIMPLE_ASSIGN
$START.roo.irRadExc.J[2] = (-335.01273601689667) * roo.irRadExc.A[2]
*/
void tmp_one_port_eqFunction_99(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,99};
  ((modelica_real *)((data->modelData->realVarsData[85] /* roo.irRadExc.J[2] variable */).attribute .start.data))[0] = (-335.01273601689667) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[471]] /* roo.irRadExc.A[2] PARAM */));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[85]] /* roo.irRadExc.J[2] variable */) = ((modelica_real *)((data->modelData->realVarsData[85] /* roo.irRadExc.J[2] variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[85].info /* roo.irRadExc.J[2] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[85]] /* roo.irRadExc.J[2] variable */));
  threadData->lastEquationSolved = 99;
}

/*
equation index: 100
type: SIMPLE_ASSIGN
roo.irRadExc.epsOpa[2] = roo.irRadExc.epsSurBou[2]
*/
void tmp_one_port_eqFunction_100(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,100};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[711]] /* roo.irRadExc.epsOpa[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[717]] /* roo.irRadExc.epsSurBou[2] PARAM */);
  threadData->lastEquationSolved = 100;
}

/*
equation index: 101
type: SIMPLE_ASSIGN
roo.irRadExc.rhoOpa[2] = 1.0 - roo.irRadExc.epsOpa[2]
*/
void tmp_one_port_eqFunction_101(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,101};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[735]] /* roo.irRadExc.rhoOpa[2] PARAM */) = 1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[711]] /* roo.irRadExc.epsOpa[2] PARAM */);
  threadData->lastEquationSolved = 101;
}

/*
equation index: 102
type: SIMPLE_ASSIGN
roo.irRadExc.AOpa[1] = roo.irRadExc.ASurBou[1]
*/
void tmp_one_port_eqFunction_102(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,102};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[482]] /* roo.irRadExc.AOpa[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[488]] /* roo.irRadExc.ASurBou[1] PARAM */);
  threadData->lastEquationSolved = 102;
}

/*
equation index: 103
type: SIMPLE_ASSIGN
roo.irRadExc.kOpa[1] = 5.6703744191844314e-8 * roo.irRadExc.epsSurBou[1] * roo.irRadExc.AOpa[1]
*/
void tmp_one_port_eqFunction_103(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,103};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[722]] /* roo.irRadExc.kOpa[1] PARAM */) = (5.6703744191844314e-8) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[716]] /* roo.irRadExc.epsSurBou[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[482]] /* roo.irRadExc.AOpa[1] PARAM */)));
  threadData->lastEquationSolved = 103;
}

/*
equation index: 104
type: SIMPLE_ASSIGN
roo.irRadExc.kOpaInv[1] = 1.0 / roo.irRadExc.kOpa[1]
*/
void tmp_one_port_eqFunction_104(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,104};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[728]] /* roo.irRadExc.kOpaInv[1] PARAM */) = DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[722]] /* roo.irRadExc.kOpa[1] PARAM */),"roo.irRadExc.kOpa[1]",equationIndexes);
  threadData->lastEquationSolved = 104;
}

/*
equation index: 105
type: SIMPLE_ASSIGN
roo.irRadExc.A[1] = roo.irRadExc.AOpa[1]
*/
void tmp_one_port_eqFunction_105(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,105};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[470]] /* roo.irRadExc.A[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[482]] /* roo.irRadExc.AOpa[1] PARAM */);
  threadData->lastEquationSolved = 105;
}

/*
equation index: 106
type: SIMPLE_ASSIGN
roo.irRadExc.F[1,1] = roo.irRadExc.A[1] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void tmp_one_port_eqFunction_106(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,106};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[494]] /* roo.irRadExc.F[1,1] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[470]] /* roo.irRadExc.A[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[470]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[471]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[472]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[473]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[474]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[475]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 106;
}

/*
equation index: 107
type: SIMPLE_ASSIGN
roo.irRadExc.F[1,2] = roo.irRadExc.A[2] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void tmp_one_port_eqFunction_107(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,107};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[495]] /* roo.irRadExc.F[1,2] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[471]] /* roo.irRadExc.A[2] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[470]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[471]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[472]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[473]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[474]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[475]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 107;
}

/*
equation index: 108
type: SIMPLE_ASSIGN
roo.irRadExc.F[1,3] = roo.irRadExc.A[3] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void tmp_one_port_eqFunction_108(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,108};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[496]] /* roo.irRadExc.F[1,3] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[472]] /* roo.irRadExc.A[3] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[470]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[471]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[472]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[473]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[474]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[475]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 108;
}

/*
equation index: 109
type: SIMPLE_ASSIGN
roo.irRadExc.F[1,4] = roo.irRadExc.A[4] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void tmp_one_port_eqFunction_109(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,109};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[497]] /* roo.irRadExc.F[1,4] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[473]] /* roo.irRadExc.A[4] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[470]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[471]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[472]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[473]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[474]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[475]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 109;
}

/*
equation index: 110
type: SIMPLE_ASSIGN
roo.irRadExc.F[1,5] = roo.irRadExc.A[5] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void tmp_one_port_eqFunction_110(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,110};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[498]] /* roo.irRadExc.F[1,5] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[474]] /* roo.irRadExc.A[5] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[470]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[471]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[472]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[473]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[474]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[475]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 110;
}

/*
equation index: 111
type: SIMPLE_ASSIGN
roo.irRadExc.F[1,6] = roo.irRadExc.A[6] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void tmp_one_port_eqFunction_111(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,111};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[499]] /* roo.irRadExc.F[1,6] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[475]] /* roo.irRadExc.A[6] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[470]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[471]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[472]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[473]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[474]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[475]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 111;
}

/*
equation index: 112
type: SIMPLE_ASSIGN
roo.irRadExc.F[2,1] = roo.irRadExc.A[1] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void tmp_one_port_eqFunction_112(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,112};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[500]] /* roo.irRadExc.F[2,1] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[470]] /* roo.irRadExc.A[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[470]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[471]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[472]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[473]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[474]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[475]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 112;
}

/*
equation index: 113
type: SIMPLE_ASSIGN
roo.irRadExc.F[2,2] = roo.irRadExc.A[2] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void tmp_one_port_eqFunction_113(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,113};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[501]] /* roo.irRadExc.F[2,2] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[471]] /* roo.irRadExc.A[2] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[470]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[471]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[472]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[473]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[474]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[475]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 113;
}

/*
equation index: 114
type: SIMPLE_ASSIGN
roo.irRadExc.F[2,3] = roo.irRadExc.A[3] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void tmp_one_port_eqFunction_114(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,114};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[502]] /* roo.irRadExc.F[2,3] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[472]] /* roo.irRadExc.A[3] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[470]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[471]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[472]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[473]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[474]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[475]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 114;
}

/*
equation index: 115
type: SIMPLE_ASSIGN
roo.irRadExc.F[2,4] = roo.irRadExc.A[4] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void tmp_one_port_eqFunction_115(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,115};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[503]] /* roo.irRadExc.F[2,4] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[473]] /* roo.irRadExc.A[4] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[470]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[471]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[472]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[473]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[474]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[475]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 115;
}

/*
equation index: 116
type: SIMPLE_ASSIGN
roo.irRadExc.F[2,5] = roo.irRadExc.A[5] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void tmp_one_port_eqFunction_116(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,116};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[504]] /* roo.irRadExc.F[2,5] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[474]] /* roo.irRadExc.A[5] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[470]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[471]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[472]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[473]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[474]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[475]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 116;
}

/*
equation index: 117
type: SIMPLE_ASSIGN
roo.irRadExc.F[2,6] = roo.irRadExc.A[6] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void tmp_one_port_eqFunction_117(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,117};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[505]] /* roo.irRadExc.F[2,6] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[475]] /* roo.irRadExc.A[6] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[470]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[471]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[472]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[473]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[474]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[475]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 117;
}

/*
equation index: 118
type: SIMPLE_ASSIGN
roo.irRadExc.F[3,1] = roo.irRadExc.A[1] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void tmp_one_port_eqFunction_118(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,118};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[506]] /* roo.irRadExc.F[3,1] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[470]] /* roo.irRadExc.A[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[470]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[471]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[472]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[473]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[474]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[475]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 118;
}

/*
equation index: 119
type: SIMPLE_ASSIGN
roo.irRadExc.F[3,2] = roo.irRadExc.A[2] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void tmp_one_port_eqFunction_119(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,119};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[507]] /* roo.irRadExc.F[3,2] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[471]] /* roo.irRadExc.A[2] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[470]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[471]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[472]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[473]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[474]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[475]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 119;
}

/*
equation index: 120
type: SIMPLE_ASSIGN
roo.irRadExc.F[3,3] = roo.irRadExc.A[3] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void tmp_one_port_eqFunction_120(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,120};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[508]] /* roo.irRadExc.F[3,3] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[472]] /* roo.irRadExc.A[3] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[470]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[471]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[472]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[473]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[474]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[475]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 120;
}

/*
equation index: 121
type: SIMPLE_ASSIGN
roo.irRadExc.F[3,4] = roo.irRadExc.A[4] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void tmp_one_port_eqFunction_121(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,121};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[509]] /* roo.irRadExc.F[3,4] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[473]] /* roo.irRadExc.A[4] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[470]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[471]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[472]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[473]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[474]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[475]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 121;
}

/*
equation index: 122
type: SIMPLE_ASSIGN
roo.irRadExc.F[3,5] = roo.irRadExc.A[5] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void tmp_one_port_eqFunction_122(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,122};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[510]] /* roo.irRadExc.F[3,5] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[474]] /* roo.irRadExc.A[5] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[470]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[471]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[472]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[473]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[474]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[475]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 122;
}

/*
equation index: 123
type: SIMPLE_ASSIGN
roo.irRadExc.F[3,6] = roo.irRadExc.A[6] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void tmp_one_port_eqFunction_123(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,123};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[511]] /* roo.irRadExc.F[3,6] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[475]] /* roo.irRadExc.A[6] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[470]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[471]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[472]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[473]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[474]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[475]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 123;
}

/*
equation index: 124
type: SIMPLE_ASSIGN
roo.irRadExc.F[4,1] = roo.irRadExc.A[1] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void tmp_one_port_eqFunction_124(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,124};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[512]] /* roo.irRadExc.F[4,1] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[470]] /* roo.irRadExc.A[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[470]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[471]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[472]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[473]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[474]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[475]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 124;
}

/*
equation index: 125
type: SIMPLE_ASSIGN
roo.irRadExc.F[4,2] = roo.irRadExc.A[2] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void tmp_one_port_eqFunction_125(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,125};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[513]] /* roo.irRadExc.F[4,2] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[471]] /* roo.irRadExc.A[2] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[470]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[471]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[472]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[473]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[474]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[475]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 125;
}

/*
equation index: 126
type: SIMPLE_ASSIGN
roo.irRadExc.F[4,3] = roo.irRadExc.A[3] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void tmp_one_port_eqFunction_126(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,126};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[514]] /* roo.irRadExc.F[4,3] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[472]] /* roo.irRadExc.A[3] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[470]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[471]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[472]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[473]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[474]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[475]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 126;
}

/*
equation index: 127
type: SIMPLE_ASSIGN
roo.irRadExc.F[4,4] = roo.irRadExc.A[4] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void tmp_one_port_eqFunction_127(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,127};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[515]] /* roo.irRadExc.F[4,4] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[473]] /* roo.irRadExc.A[4] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[470]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[471]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[472]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[473]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[474]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[475]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 127;
}

/*
equation index: 128
type: SIMPLE_ASSIGN
roo.irRadExc.F[4,5] = roo.irRadExc.A[5] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void tmp_one_port_eqFunction_128(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,128};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[516]] /* roo.irRadExc.F[4,5] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[474]] /* roo.irRadExc.A[5] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[470]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[471]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[472]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[473]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[474]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[475]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 128;
}

/*
equation index: 129
type: SIMPLE_ASSIGN
roo.irRadExc.F[4,6] = roo.irRadExc.A[6] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void tmp_one_port_eqFunction_129(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,129};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[517]] /* roo.irRadExc.F[4,6] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[475]] /* roo.irRadExc.A[6] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[470]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[471]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[472]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[473]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[474]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[475]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 129;
}

/*
equation index: 130
type: SIMPLE_ASSIGN
roo.irRadExc.F[5,1] = roo.irRadExc.A[1] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void tmp_one_port_eqFunction_130(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,130};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[518]] /* roo.irRadExc.F[5,1] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[470]] /* roo.irRadExc.A[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[470]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[471]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[472]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[473]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[474]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[475]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 130;
}

/*
equation index: 131
type: SIMPLE_ASSIGN
roo.irRadExc.F[5,2] = roo.irRadExc.A[2] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void tmp_one_port_eqFunction_131(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,131};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[519]] /* roo.irRadExc.F[5,2] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[471]] /* roo.irRadExc.A[2] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[470]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[471]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[472]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[473]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[474]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[475]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 131;
}

/*
equation index: 132
type: SIMPLE_ASSIGN
roo.irRadExc.F[5,3] = roo.irRadExc.A[3] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void tmp_one_port_eqFunction_132(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,132};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[520]] /* roo.irRadExc.F[5,3] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[472]] /* roo.irRadExc.A[3] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[470]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[471]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[472]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[473]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[474]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[475]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 132;
}

/*
equation index: 133
type: SIMPLE_ASSIGN
roo.irRadExc.F[5,4] = roo.irRadExc.A[4] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void tmp_one_port_eqFunction_133(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,133};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[521]] /* roo.irRadExc.F[5,4] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[473]] /* roo.irRadExc.A[4] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[470]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[471]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[472]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[473]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[474]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[475]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 133;
}

/*
equation index: 134
type: SIMPLE_ASSIGN
roo.irRadExc.F[5,5] = roo.irRadExc.A[5] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void tmp_one_port_eqFunction_134(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,134};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[522]] /* roo.irRadExc.F[5,5] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[474]] /* roo.irRadExc.A[5] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[470]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[471]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[472]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[473]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[474]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[475]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 134;
}

/*
equation index: 135
type: SIMPLE_ASSIGN
roo.irRadExc.F[5,6] = roo.irRadExc.A[6] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void tmp_one_port_eqFunction_135(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,135};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[523]] /* roo.irRadExc.F[5,6] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[475]] /* roo.irRadExc.A[6] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[470]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[471]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[472]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[473]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[474]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[475]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 135;
}

/*
equation index: 136
type: SIMPLE_ASSIGN
roo.irRadExc.F[6,1] = roo.irRadExc.A[1] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void tmp_one_port_eqFunction_136(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,136};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[524]] /* roo.irRadExc.F[6,1] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[470]] /* roo.irRadExc.A[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[470]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[471]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[472]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[473]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[474]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[475]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 136;
}

/*
equation index: 137
type: SIMPLE_ASSIGN
roo.irRadExc.F[6,2] = roo.irRadExc.A[2] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void tmp_one_port_eqFunction_137(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,137};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[525]] /* roo.irRadExc.F[6,2] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[471]] /* roo.irRadExc.A[2] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[470]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[471]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[472]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[473]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[474]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[475]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 137;
}

/*
equation index: 138
type: SIMPLE_ASSIGN
roo.irRadExc.F[6,3] = roo.irRadExc.A[3] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void tmp_one_port_eqFunction_138(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,138};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[526]] /* roo.irRadExc.F[6,3] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[472]] /* roo.irRadExc.A[3] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[470]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[471]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[472]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[473]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[474]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[475]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 138;
}

/*
equation index: 139
type: SIMPLE_ASSIGN
roo.irRadExc.F[6,4] = roo.irRadExc.A[4] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void tmp_one_port_eqFunction_139(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,139};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[527]] /* roo.irRadExc.F[6,4] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[473]] /* roo.irRadExc.A[4] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[470]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[471]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[472]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[473]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[474]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[475]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 139;
}

/*
equation index: 140
type: SIMPLE_ASSIGN
roo.irRadExc.F[6,5] = roo.irRadExc.A[5] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void tmp_one_port_eqFunction_140(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,140};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[528]] /* roo.irRadExc.F[6,5] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[474]] /* roo.irRadExc.A[5] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[470]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[471]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[472]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[473]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[474]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[475]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 140;
}

/*
equation index: 141
type: SIMPLE_ASSIGN
roo.irRadExc.F[6,6] = roo.irRadExc.A[6] / (roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6])
*/
void tmp_one_port_eqFunction_141(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,141};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[529]] /* roo.irRadExc.F[6,6] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[475]] /* roo.irRadExc.A[6] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[470]] /* roo.irRadExc.A[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[471]] /* roo.irRadExc.A[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[472]] /* roo.irRadExc.A[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[473]] /* roo.irRadExc.A[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[474]] /* roo.irRadExc.A[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[475]] /* roo.irRadExc.A[6] PARAM */),"roo.irRadExc.A[1] + roo.irRadExc.A[2] + roo.irRadExc.A[3] + roo.irRadExc.A[4] + roo.irRadExc.A[5] + roo.irRadExc.A[6]",equationIndexes);
  threadData->lastEquationSolved = 141;
}

/*
equation index: 142
type: SIMPLE_ASSIGN
$START.roo.irRadExc.G[1] = 335.01273601689667 * roo.irRadExc.A[1]
*/
void tmp_one_port_eqFunction_142(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,142};
  ((modelica_real *)((data->modelData->realVarsData[78] /* roo.irRadExc.G[1] variable */).attribute .start.data))[0] = (335.01273601689667) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[470]] /* roo.irRadExc.A[1] PARAM */));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[78]] /* roo.irRadExc.G[1] variable */) = ((modelica_real *)((data->modelData->realVarsData[78] /* roo.irRadExc.G[1] variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[78].info /* roo.irRadExc.G[1] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[78]] /* roo.irRadExc.G[1] variable */));
  threadData->lastEquationSolved = 142;
}

/*
equation index: 143
type: SIMPLE_ASSIGN
$START.roo.irRadExc.J[1] = (-335.01273601689667) * roo.irRadExc.A[1]
*/
void tmp_one_port_eqFunction_143(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,143};
  ((modelica_real *)((data->modelData->realVarsData[84] /* roo.irRadExc.J[1] variable */).attribute .start.data))[0] = (-335.01273601689667) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[470]] /* roo.irRadExc.A[1] PARAM */));
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[84]] /* roo.irRadExc.J[1] variable */) = ((modelica_real *)((data->modelData->realVarsData[84] /* roo.irRadExc.J[1] variable */).attribute .start.data))[0];
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[84].info /* roo.irRadExc.J[1] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[84]] /* roo.irRadExc.J[1] variable */));
  threadData->lastEquationSolved = 143;
}

/*
equation index: 144
type: SIMPLE_ASSIGN
roo.irRadExc.epsOpa[1] = roo.irRadExc.epsSurBou[1]
*/
void tmp_one_port_eqFunction_144(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,144};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[710]] /* roo.irRadExc.epsOpa[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[716]] /* roo.irRadExc.epsSurBou[1] PARAM */);
  threadData->lastEquationSolved = 144;
}

/*
equation index: 145
type: SIMPLE_ASSIGN
roo.irRadExc.rhoOpa[1] = 1.0 - roo.irRadExc.epsOpa[1]
*/
void tmp_one_port_eqFunction_145(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,145};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[734]] /* roo.irRadExc.rhoOpa[1] PARAM */) = 1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[710]] /* roo.irRadExc.epsOpa[1] PARAM */);
  threadData->lastEquationSolved = 145;
}

/*
equation index: 146
type: SIMPLE_ASSIGN
roo.irRadGai.sumAEpsNoWin = roo.irRadGai.AEpsConExt[1] + roo.irRadGai.AEpsConExtWinOpa[1] + roo.irRadGai.AEpsConExtWinFra[1] + roo.irRadGai.AEpsConPar_a[1] + roo.irRadGai.AEpsConPar_b[1] + roo.irRadGai.AEpsConBou[1] + roo.irRadGai.AEpsSurBou[1] + roo.irRadGai.AEpsSurBou[2] + roo.irRadGai.AEpsSurBou[3] + roo.irRadGai.AEpsSurBou[4] + roo.irRadGai.AEpsSurBou[5] + roo.irRadGai.AEpsSurBou[6]
*/
void tmp_one_port_eqFunction_146(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,146};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[973]] /* roo.irRadGai.sumAEpsNoWin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[772]] /* roo.irRadGai.AEpsConExt[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[774]] /* roo.irRadGai.AEpsConExtWinOpa[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[773]] /* roo.irRadGai.AEpsConExtWinFra[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[775]] /* roo.irRadGai.AEpsConPar_a[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[776]] /* roo.irRadGai.AEpsConPar_b[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[771]] /* roo.irRadGai.AEpsConBou[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[777]] /* roo.irRadGai.AEpsSurBou[1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[778]] /* roo.irRadGai.AEpsSurBou[2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[779]] /* roo.irRadGai.AEpsSurBou[3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[780]] /* roo.irRadGai.AEpsSurBou[4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[781]] /* roo.irRadGai.AEpsSurBou[5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[782]] /* roo.irRadGai.AEpsSurBou[6] PARAM */);
  threadData->lastEquationSolved = 146;
}
extern void tmp_one_port_eqFunction_609(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_610(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_611(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_614(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_615(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_618(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_619(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_622(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_623(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_626(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_627(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_630(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_631(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_634(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_635(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_636(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_637(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_638(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_639(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_640(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_641(DATA *data, threadData_t *threadData);


/*
equation index: 168
type: SIMPLE_ASSIGN
roo.air.yFixed[6] = roo.air.Q_flow_fixed[6]
*/
void tmp_one_port_eqFunction_168(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,168};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[289]] /* roo.air.yFixed[6] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[35]] /* roo.air.Q_flow_fixed[6] PARAM */);
  threadData->lastEquationSolved = 168;
}

/*
equation index: 169
type: SIMPLE_ASSIGN
roo.air.cfd.yFixed[6] = roo.air.yFixed[6]
*/
void tmp_one_port_eqFunction_169(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,169};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[63]] /* roo.air.cfd.yFixed[6] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[289]] /* roo.air.yFixed[6] PARAM */);
  threadData->lastEquationSolved = 169;
}

/*
equation index: 170
type: SIMPLE_ASSIGN
roo.air.yFixed[5] = roo.air.Q_flow_fixed[5]
*/
void tmp_one_port_eqFunction_170(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,170};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[288]] /* roo.air.yFixed[5] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[34]] /* roo.air.Q_flow_fixed[5] PARAM */);
  threadData->lastEquationSolved = 170;
}

/*
equation index: 171
type: SIMPLE_ASSIGN
roo.air.cfd.yFixed[5] = roo.air.yFixed[5]
*/
void tmp_one_port_eqFunction_171(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,171};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[62]] /* roo.air.cfd.yFixed[5] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[288]] /* roo.air.yFixed[5] PARAM */);
  threadData->lastEquationSolved = 171;
}

/*
equation index: 172
type: SIMPLE_ASSIGN
roo.air.yFixed[4] = roo.air.Q_flow_fixed[4]
*/
void tmp_one_port_eqFunction_172(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,172};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[287]] /* roo.air.yFixed[4] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[33]] /* roo.air.Q_flow_fixed[4] PARAM */);
  threadData->lastEquationSolved = 172;
}

/*
equation index: 173
type: SIMPLE_ASSIGN
roo.air.cfd.yFixed[4] = roo.air.yFixed[4]
*/
void tmp_one_port_eqFunction_173(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,173};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[61]] /* roo.air.cfd.yFixed[4] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[287]] /* roo.air.yFixed[4] PARAM */);
  threadData->lastEquationSolved = 173;
}

/*
equation index: 174
type: SIMPLE_ASSIGN
roo.air.yFixed[3] = roo.air.Q_flow_fixed[3]
*/
void tmp_one_port_eqFunction_174(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,174};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[286]] /* roo.air.yFixed[3] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[32]] /* roo.air.Q_flow_fixed[3] PARAM */);
  threadData->lastEquationSolved = 174;
}

/*
equation index: 175
type: SIMPLE_ASSIGN
roo.air.cfd.yFixed[3] = roo.air.yFixed[3]
*/
void tmp_one_port_eqFunction_175(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,175};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[60]] /* roo.air.cfd.yFixed[3] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[286]] /* roo.air.yFixed[3] PARAM */);
  threadData->lastEquationSolved = 175;
}

/*
equation index: 176
type: SIMPLE_ASSIGN
roo.air.yFixed[2] = roo.air.Q_flow_fixed[2]
*/
void tmp_one_port_eqFunction_176(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,176};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[285]] /* roo.air.yFixed[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[31]] /* roo.air.Q_flow_fixed[2] PARAM */);
  threadData->lastEquationSolved = 176;
}

/*
equation index: 177
type: SIMPLE_ASSIGN
roo.air.cfd.yFixed[2] = roo.air.yFixed[2]
*/
void tmp_one_port_eqFunction_177(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,177};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[59]] /* roo.air.cfd.yFixed[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[285]] /* roo.air.yFixed[2] PARAM */);
  threadData->lastEquationSolved = 177;
}

/*
equation index: 178
type: SIMPLE_ASSIGN
roo.air.yFixed[1] = roo.air.Q_flow_fixed[1]
*/
void tmp_one_port_eqFunction_178(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,178};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[284]] /* roo.air.yFixed[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[30]] /* roo.air.Q_flow_fixed[1] PARAM */);
  threadData->lastEquationSolved = 178;
}

/*
equation index: 179
type: SIMPLE_ASSIGN
roo.air.cfd.yFixed[1] = roo.air.yFixed[1]
*/
void tmp_one_port_eqFunction_179(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,179};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[58]] /* roo.air.cfd.yFixed[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[284]] /* roo.air.yFixed[1] PARAM */);
  threadData->lastEquationSolved = 179;
}

/*
equation index: 180
type: SIMPLE_ASSIGN
roo.air.cfd.y[6] = roo.air.cfd.yFixed[6]
*/
void tmp_one_port_eqFunction_180(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,180};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[289]] /* roo.air.cfd.y[6] DISCRETE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[63]] /* roo.air.cfd.yFixed[6] PARAM */);
  threadData->lastEquationSolved = 180;
}

/*
equation index: 181
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.y[6] = roo.air.cfd.y[6]
*/
void tmp_one_port_eqFunction_181(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,181};
  (data->simulationInfo->realVarsPre[289] /* roo.air.cfd.y[6] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[289]] /* roo.air.cfd.y[6] DISCRETE */);
  threadData->lastEquationSolved = 181;
}
extern void tmp_one_port_eqFunction_574(DATA *data, threadData_t *threadData);


/*
equation index: 183
type: SIMPLE_ASSIGN
roo.air.cfd.y[5] = roo.air.cfd.yFixed[5]
*/
void tmp_one_port_eqFunction_183(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,183};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[288]] /* roo.air.cfd.y[5] DISCRETE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[62]] /* roo.air.cfd.yFixed[5] PARAM */);
  threadData->lastEquationSolved = 183;
}

/*
equation index: 184
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.y[5] = roo.air.cfd.y[5]
*/
void tmp_one_port_eqFunction_184(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,184};
  (data->simulationInfo->realVarsPre[288] /* roo.air.cfd.y[5] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[288]] /* roo.air.cfd.y[5] DISCRETE */);
  threadData->lastEquationSolved = 184;
}
extern void tmp_one_port_eqFunction_565(DATA *data, threadData_t *threadData);


/*
equation index: 186
type: SIMPLE_ASSIGN
roo.air.cfd.y[4] = roo.air.cfd.yFixed[4]
*/
void tmp_one_port_eqFunction_186(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,186};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[287]] /* roo.air.cfd.y[4] DISCRETE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[61]] /* roo.air.cfd.yFixed[4] PARAM */);
  threadData->lastEquationSolved = 186;
}

/*
equation index: 187
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.y[4] = roo.air.cfd.y[4]
*/
void tmp_one_port_eqFunction_187(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,187};
  (data->simulationInfo->realVarsPre[287] /* roo.air.cfd.y[4] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[287]] /* roo.air.cfd.y[4] DISCRETE */);
  threadData->lastEquationSolved = 187;
}
extern void tmp_one_port_eqFunction_567(DATA *data, threadData_t *threadData);


/*
equation index: 189
type: SIMPLE_ASSIGN
roo.air.cfd.y[3] = roo.air.cfd.yFixed[3]
*/
void tmp_one_port_eqFunction_189(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,189};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[286]] /* roo.air.cfd.y[3] DISCRETE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[60]] /* roo.air.cfd.yFixed[3] PARAM */);
  threadData->lastEquationSolved = 189;
}

/*
equation index: 190
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.y[3] = roo.air.cfd.y[3]
*/
void tmp_one_port_eqFunction_190(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,190};
  (data->simulationInfo->realVarsPre[286] /* roo.air.cfd.y[3] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[286]] /* roo.air.cfd.y[3] DISCRETE */);
  threadData->lastEquationSolved = 190;
}
extern void tmp_one_port_eqFunction_569(DATA *data, threadData_t *threadData);


/*
equation index: 192
type: SIMPLE_ASSIGN
roo.air.cfd.y[2] = roo.air.cfd.yFixed[2]
*/
void tmp_one_port_eqFunction_192(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,192};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[285]] /* roo.air.cfd.y[2] DISCRETE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[59]] /* roo.air.cfd.yFixed[2] PARAM */);
  threadData->lastEquationSolved = 192;
}

/*
equation index: 193
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.y[2] = roo.air.cfd.y[2]
*/
void tmp_one_port_eqFunction_193(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,193};
  (data->simulationInfo->realVarsPre[285] /* roo.air.cfd.y[2] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[285]] /* roo.air.cfd.y[2] DISCRETE */);
  threadData->lastEquationSolved = 193;
}
extern void tmp_one_port_eqFunction_566(DATA *data, threadData_t *threadData);


/*
equation index: 195
type: SIMPLE_ASSIGN
roo.air.cfd.y[1] = roo.air.cfd.yFixed[1]
*/
void tmp_one_port_eqFunction_195(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,195};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[284]] /* roo.air.cfd.y[1] DISCRETE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[58]] /* roo.air.cfd.yFixed[1] PARAM */);
  threadData->lastEquationSolved = 195;
}

/*
equation index: 196
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.y[1] = roo.air.cfd.y[1]
*/
void tmp_one_port_eqFunction_196(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,196};
  (data->simulationInfo->realVarsPre[284] /* roo.air.cfd.y[1] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[284]] /* roo.air.cfd.y[1] DISCRETE */);
  threadData->lastEquationSolved = 196;
}
extern void tmp_one_port_eqFunction_606(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_568(DATA *data, threadData_t *threadData);


/*
equation index: 223
type: LINEAR

<var>roo.irRadExc.J[2]</var>
<var>roo.irRadExc.J[4]</var>
<var>roo.irRadExc.J[3]</var>
<var>roo.irRadExc.J[1]</var>
<var>roo.irRadExc.J[6]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void tmp_one_port_eqFunction_223(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,223};
  /* Linear equation system */
  int retValue;
  double aux_x[5] = { (data->localData[1]->realVars[data->simulationInfo->realVarsIndex[85]] /* roo.irRadExc.J[2] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[87]] /* roo.irRadExc.J[4] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[86]] /* roo.irRadExc.J[3] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[84]] /* roo.irRadExc.J[1] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[89]] /* roo.irRadExc.J[6] variable */) };
  infoStreamPrint(OMC_LOG_DT, 0, "Solving linear system 223 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);

  retValue = solve_linear_system(data, threadData, 0, &aux_x[0]);

  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,223};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving linear system 223 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[85]] /* roo.irRadExc.J[2] variable */) = aux_x[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[87]] /* roo.irRadExc.J[4] variable */) = aux_x[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[86]] /* roo.irRadExc.J[3] variable */) = aux_x[2];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[84]] /* roo.irRadExc.J[1] variable */) = aux_x[3];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[89]] /* roo.irRadExc.J[6] variable */) = aux_x[4];

  threadData->lastEquationSolved = 223;
}
extern void tmp_one_port_eqFunction_605(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_612(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_613(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_600(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_632(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_633(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_604(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_624(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_625(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_601(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_628(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_629(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_603(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_616(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_617(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_602(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_620(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_621(DATA *data, threadData_t *threadData);


/*
equation index: 242
type: SIMPLE_ASSIGN
roo.air.cfd.uWri[6] = roo.air.cfd.u[6]
*/
void tmp_one_port_eqFunction_242(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,242};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[274]] /* roo.air.cfd.uWri[6] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[55]] /* roo.air.cfd.u[6] variable */);
  threadData->lastEquationSolved = 242;
}

/*
equation index: 243
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uWri[6] = roo.air.cfd.uWri[6]
*/
void tmp_one_port_eqFunction_243(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,243};
  (data->simulationInfo->realVarsPre[274] /* roo.air.cfd.uWri[6] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[274]] /* roo.air.cfd.uWri[6] DISCRETE */);
  threadData->lastEquationSolved = 243;
}

/*
equation index: 244
type: SIMPLE_ASSIGN
roo.air.cfd.uWri[5] = roo.air.cfd.u[5]
*/
void tmp_one_port_eqFunction_244(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,244};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[273]] /* roo.air.cfd.uWri[5] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[54]] /* roo.air.cfd.u[5] variable */);
  threadData->lastEquationSolved = 244;
}

/*
equation index: 245
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uWri[5] = roo.air.cfd.uWri[5]
*/
void tmp_one_port_eqFunction_245(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,245};
  (data->simulationInfo->realVarsPre[273] /* roo.air.cfd.uWri[5] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[273]] /* roo.air.cfd.uWri[5] DISCRETE */);
  threadData->lastEquationSolved = 245;
}

/*
equation index: 246
type: SIMPLE_ASSIGN
roo.air.cfd.uWri[4] = roo.air.cfd.u[4]
*/
void tmp_one_port_eqFunction_246(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,246};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[272]] /* roo.air.cfd.uWri[4] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[53]] /* roo.air.cfd.u[4] variable */);
  threadData->lastEquationSolved = 246;
}

/*
equation index: 247
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uWri[4] = roo.air.cfd.uWri[4]
*/
void tmp_one_port_eqFunction_247(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,247};
  (data->simulationInfo->realVarsPre[272] /* roo.air.cfd.uWri[4] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[272]] /* roo.air.cfd.uWri[4] DISCRETE */);
  threadData->lastEquationSolved = 247;
}

/*
equation index: 248
type: SIMPLE_ASSIGN
roo.air.cfd.uWri[3] = roo.air.cfd.u[3]
*/
void tmp_one_port_eqFunction_248(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,248};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[271]] /* roo.air.cfd.uWri[3] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[52]] /* roo.air.cfd.u[3] variable */);
  threadData->lastEquationSolved = 248;
}

/*
equation index: 249
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uWri[3] = roo.air.cfd.uWri[3]
*/
void tmp_one_port_eqFunction_249(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,249};
  (data->simulationInfo->realVarsPre[271] /* roo.air.cfd.uWri[3] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[271]] /* roo.air.cfd.uWri[3] DISCRETE */);
  threadData->lastEquationSolved = 249;
}

/*
equation index: 250
type: SIMPLE_ASSIGN
roo.air.cfd.uWri[2] = roo.air.cfd.u[2]
*/
void tmp_one_port_eqFunction_250(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,250};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[270]] /* roo.air.cfd.uWri[2] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[51]] /* roo.air.cfd.u[2] variable */);
  threadData->lastEquationSolved = 250;
}

/*
equation index: 251
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uWri[2] = roo.air.cfd.uWri[2]
*/
void tmp_one_port_eqFunction_251(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,251};
  (data->simulationInfo->realVarsPre[270] /* roo.air.cfd.uWri[2] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[270]] /* roo.air.cfd.uWri[2] DISCRETE */);
  threadData->lastEquationSolved = 251;
}

/*
equation index: 252
type: SIMPLE_ASSIGN
roo.air.cfd.uWri[1] = roo.air.cfd.u[1]
*/
void tmp_one_port_eqFunction_252(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,252};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[269]] /* roo.air.cfd.uWri[1] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[50]] /* roo.air.cfd.u[1] variable */);
  threadData->lastEquationSolved = 252;
}

/*
equation index: 253
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uWri[1] = roo.air.cfd.uWri[1]
*/
void tmp_one_port_eqFunction_253(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,253};
  (data->simulationInfo->realVarsPre[269] /* roo.air.cfd.uWri[1] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[269]] /* roo.air.cfd.uWri[1] DISCRETE */);
  threadData->lastEquationSolved = 253;
}

/*
equation index: 254
type: SIMPLE_ASSIGN
roo.air.cfd.u[8] = roo.heaGai.AFlo * qLat.k
*/
void tmp_one_port_eqFunction_254(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,254};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[57]] /* roo.air.cfd.u[8] variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[469]] /* roo.heaGai.AFlo PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[6]] /* qLat.k PARAM */));
  threadData->lastEquationSolved = 254;
}
extern void tmp_one_port_eqFunction_528(DATA *data, threadData_t *threadData);


/*
equation index: 256
type: SIMPLE_ASSIGN
roo.air.cfd.uWri[8] = roo.air.cfd.u[8]
*/
void tmp_one_port_eqFunction_256(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,256};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[276]] /* roo.air.cfd.uWri[8] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[57]] /* roo.air.cfd.u[8] variable */);
  threadData->lastEquationSolved = 256;
}

/*
equation index: 257
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uWri[8] = roo.air.cfd.uWri[8]
*/
void tmp_one_port_eqFunction_257(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,257};
  (data->simulationInfo->realVarsPre[276] /* roo.air.cfd.uWri[8] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[276]] /* roo.air.cfd.uWri[8] DISCRETE */);
  threadData->lastEquationSolved = 257;
}

/*
equation index: 258
type: SIMPLE_ASSIGN
roo.irRadGai.AEpsConExtWinSha[1] = 0.0
*/
void tmp_one_port_eqFunction_258(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,258};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[110]] /* roo.irRadGai.AEpsConExtWinSha[1] variable */) = 0.0;
  threadData->lastEquationSolved = 258;
}

/*
equation index: 259
type: SIMPLE_ASSIGN
roo.surf_surBou[1].Q_flow = 0.0
*/
void tmp_one_port_eqFunction_259(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,259};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[176]] /* roo.surf_surBou[1].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 259;
}

/*
equation index: 260
type: SIMPLE_ASSIGN
roo.surf_surBou[2].Q_flow = 0.0
*/
void tmp_one_port_eqFunction_260(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,260};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[177]] /* roo.surf_surBou[2].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 260;
}

/*
equation index: 261
type: SIMPLE_ASSIGN
roo.surf_surBou[3].Q_flow = 0.0
*/
void tmp_one_port_eqFunction_261(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,261};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* roo.surf_surBou[3].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 261;
}

/*
equation index: 262
type: SIMPLE_ASSIGN
roo.surf_surBou[4].Q_flow = 0.0
*/
void tmp_one_port_eqFunction_262(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,262};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[179]] /* roo.surf_surBou[4].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 262;
}

/*
equation index: 263
type: SIMPLE_ASSIGN
roo.surf_surBou[5].Q_flow = 0.0
*/
void tmp_one_port_eqFunction_263(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,263};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[180]] /* roo.surf_surBou[5].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 263;
}

/*
equation index: 264
type: SIMPLE_ASSIGN
roo.surf_surBou[6].Q_flow = 0.0
*/
void tmp_one_port_eqFunction_264(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,264};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[181]] /* roo.surf_surBou[6].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 264;
}

/*
equation index: 265
type: SIMPLE_ASSIGN
roo.heaPorAir.Q_flow = 0.0
*/
void tmp_one_port_eqFunction_265(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,265};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[75]] /* roo.heaPorAir.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 265;
}

/*
equation index: 266
type: SIMPLE_ASSIGN
roo.irRadGai.shaSig[1].y = 0.0
*/
void tmp_one_port_eqFunction_266(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,266};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[146]] /* roo.irRadGai.shaSig[1].y variable */) = 0.0;
  threadData->lastEquationSolved = 266;
}

/*
equation index: 267
type: SIMPLE_ASSIGN
roo.irRadGai.shaSig[1].yCom = 1.0
*/
void tmp_one_port_eqFunction_267(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,267};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[147]] /* roo.irRadGai.shaSig[1].yCom variable */) = 1.0;
  threadData->lastEquationSolved = 267;
}

/*
equation index: 268
type: SIMPLE_ASSIGN
roo.radTem.glaUns_internal[1].T = 293.15
*/
void tmp_one_port_eqFunction_268(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,268};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[172]] /* roo.radTem.glaUns_internal[1].T variable */) = 293.15;
  threadData->lastEquationSolved = 268;
}

/*
equation index: 269
type: SIMPLE_ASSIGN
roo.radTem.conExt[1].T = 293.15
*/
void tmp_one_port_eqFunction_269(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,269};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[154]] /* roo.radTem.conExt[1].T variable */) = 293.15;
  threadData->lastEquationSolved = 269;
}

/*
equation index: 270
type: SIMPLE_ASSIGN
roo.radTem.conPar_a[1].T = 293.15
*/
void tmp_one_port_eqFunction_270(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,270};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[160]] /* roo.radTem.conPar_a[1].T variable */) = 293.15;
  threadData->lastEquationSolved = 270;
}

/*
equation index: 271
type: SIMPLE_ASSIGN
roo.radTem.conPar_b[1].T = 293.15
*/
void tmp_one_port_eqFunction_271(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,271};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[162]] /* roo.radTem.conPar_b[1].T variable */) = 293.15;
  threadData->lastEquationSolved = 271;
}

/*
equation index: 272
type: SIMPLE_ASSIGN
roo.radTem.conBou[1].T = 293.15
*/
void tmp_one_port_eqFunction_272(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,272};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[152]] /* roo.radTem.conBou[1].T variable */) = 293.15;
  threadData->lastEquationSolved = 272;
}

/*
equation index: 273
type: SIMPLE_ASSIGN
roo.radTem.conSurBou[1].Q_flow = 0.0
*/
void tmp_one_port_eqFunction_273(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,273};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[163]] /* roo.radTem.conSurBou[1].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 273;
}

/*
equation index: 274
type: SIMPLE_ASSIGN
roo.radTem.conSurBou[2].Q_flow = 0.0
*/
void tmp_one_port_eqFunction_274(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,274};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[164]] /* roo.radTem.conSurBou[2].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 274;
}

/*
equation index: 275
type: SIMPLE_ASSIGN
roo.radTem.conSurBou[3].Q_flow = 0.0
*/
void tmp_one_port_eqFunction_275(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,275};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[165]] /* roo.radTem.conSurBou[3].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 275;
}

/*
equation index: 276
type: SIMPLE_ASSIGN
roo.radTem.conSurBou[4].Q_flow = 0.0
*/
void tmp_one_port_eqFunction_276(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,276};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[166]] /* roo.radTem.conSurBou[4].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 276;
}

/*
equation index: 277
type: SIMPLE_ASSIGN
roo.radTem.conSurBou[5].Q_flow = 0.0
*/
void tmp_one_port_eqFunction_277(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,277};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[167]] /* roo.radTem.conSurBou[5].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 277;
}

/*
equation index: 278
type: SIMPLE_ASSIGN
roo.radTem.conSurBou[6].Q_flow = 0.0
*/
void tmp_one_port_eqFunction_278(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,278};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[168]] /* roo.radTem.conSurBou[6].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 278;
}

/*
equation index: 279
type: SIMPLE_ASSIGN
roo.radTem.conExtWin[1].T = 293.15
*/
void tmp_one_port_eqFunction_279(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,279};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[156]] /* roo.radTem.conExtWin[1].T variable */) = 293.15;
  threadData->lastEquationSolved = 279;
}

/*
equation index: 280
type: SIMPLE_ASSIGN
roo.radTem.conExtWinFra[1].T = 293.15
*/
void tmp_one_port_eqFunction_280(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,280};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[158]] /* roo.radTem.conExtWinFra[1].T variable */) = 293.15;
  threadData->lastEquationSolved = 280;
}

/*
equation index: 281
type: SIMPLE_ASSIGN
roo.heaPorRad.Q_flow = 0.0
*/
void tmp_one_port_eqFunction_281(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,281};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[76]] /* roo.heaPorRad.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 281;
}

/*
equation index: 282
type: SIMPLE_ASSIGN
roo.air.startTime = time
*/
void tmp_one_port_eqFunction_282(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,282};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[247]] /* roo.air.startTime PARAM */) = data->localData[0]->timeValue;
  threadData->lastEquationSolved = 282;
}

/*
equation index: 283
type: SIMPLE_ASSIGN
roo.air.cfd.startTime = roo.air.startTime
*/
void tmp_one_port_eqFunction_283(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,283};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[45]] /* roo.air.cfd.startTime PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[247]] /* roo.air.startTime PARAM */);
  threadData->lastEquationSolved = 283;
}

/*
equation index: 284
type: SIMPLE_ASSIGN
roo.air.yFixed[7] = roo.air.TRooAve_fixed
*/
void tmp_one_port_eqFunction_284(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,284};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[290]] /* roo.air.yFixed[7] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[36]] /* roo.air.TRooAve_fixed PARAM */);
  threadData->lastEquationSolved = 284;
}

/*
equation index: 285
type: SIMPLE_ASSIGN
roo.air.cfd.yFixed[7] = roo.air.yFixed[7]
*/
void tmp_one_port_eqFunction_285(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,285};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[64]] /* roo.air.cfd.yFixed[7] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[290]] /* roo.air.yFixed[7] PARAM */);
  threadData->lastEquationSolved = 285;
}

/*
equation index: 286
type: SIMPLE_ASSIGN
roo.air.cfd.y[7] = roo.air.cfd.yFixed[7]
*/
void tmp_one_port_eqFunction_286(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,286};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[290]] /* roo.air.cfd.y[7] DISCRETE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[64]] /* roo.air.cfd.yFixed[7] PARAM */);
  threadData->lastEquationSolved = 286;
}

/*
equation index: 287
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.y[7] = roo.air.cfd.y[7]
*/
void tmp_one_port_eqFunction_287(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,287};
  (data->simulationInfo->realVarsPre[290] /* roo.air.cfd.y[7] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[290]] /* roo.air.cfd.y[7] DISCRETE */);
  threadData->lastEquationSolved = 287;
}
extern void tmp_one_port_eqFunction_515(DATA *data, threadData_t *threadData);


/*
equation index: 289
type: SIMPLE_ASSIGN
roo.air.cfd.u[11] = ($DER.roo.air.fluInt.p - fan.k / roo.air.fluInt.m_start * roo.air.fluInt.p_start) * roo.air.fluInt.m_start / roo.air.fluInt.p_start
*/
void tmp_one_port_eqFunction_289(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,289};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[60]] /* roo.air.cfd.u[11] variable */) = DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[30]] /* der(roo.air.fluInt.p) DUMMY_DER */) - ((DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4]] /* fan.k PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[241]] /* roo.air.fluInt.m_start PARAM */),"roo.air.fluInt.m_start",equationIndexes)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[242]] /* roo.air.fluInt.p_start PARAM */)))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[241]] /* roo.air.fluInt.m_start PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[242]] /* roo.air.fluInt.p_start PARAM */),"roo.air.fluInt.p_start",equationIndexes);
  threadData->lastEquationSolved = 289;
}
extern void tmp_one_port_eqFunction_529(DATA *data, threadData_t *threadData);


/*
equation index: 291
type: SIMPLE_ASSIGN
roo.air.yFixed[9] = roo.air.T_outflow_fixed[2]
*/
void tmp_one_port_eqFunction_291(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,291};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[292]] /* roo.air.yFixed[9] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[39]] /* roo.air.T_outflow_fixed[2] PARAM */);
  threadData->lastEquationSolved = 291;
}

/*
equation index: 292
type: SIMPLE_ASSIGN
roo.air.cfd.yFixed[9] = roo.air.yFixed[9]
*/
void tmp_one_port_eqFunction_292(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,292};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[66]] /* roo.air.cfd.yFixed[9] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[292]] /* roo.air.yFixed[9] PARAM */);
  threadData->lastEquationSolved = 292;
}

/*
equation index: 293
type: SIMPLE_ASSIGN
roo.air.yFixed[8] = roo.air.T_outflow_fixed[1]
*/
void tmp_one_port_eqFunction_293(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,293};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[291]] /* roo.air.yFixed[8] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[38]] /* roo.air.T_outflow_fixed[1] PARAM */);
  threadData->lastEquationSolved = 293;
}

/*
equation index: 294
type: SIMPLE_ASSIGN
roo.air.cfd.yFixed[8] = roo.air.yFixed[8]
*/
void tmp_one_port_eqFunction_294(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,294};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[65]] /* roo.air.cfd.yFixed[8] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[291]] /* roo.air.yFixed[8] PARAM */);
  threadData->lastEquationSolved = 294;
}

/*
equation index: 295
type: SIMPLE_ASSIGN
roo.air.Xi_outflow_fixed[2] = 0.01
*/
void tmp_one_port_eqFunction_295(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,295};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[42]] /* roo.air.Xi_outflow_fixed[2] PARAM */) = 0.01;
  threadData->lastEquationSolved = 295;
}

/*
equation index: 296
type: SIMPLE_ASSIGN
roo.air.yFixed[11] = roo.air.Xi_outflow_fixed[2]
*/
void tmp_one_port_eqFunction_296(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,296};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[294]] /* roo.air.yFixed[11] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[42]] /* roo.air.Xi_outflow_fixed[2] PARAM */);
  threadData->lastEquationSolved = 296;
}

/*
equation index: 297
type: SIMPLE_ASSIGN
roo.air.cfd.yFixed[11] = roo.air.yFixed[11]
*/
void tmp_one_port_eqFunction_297(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,297};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[68]] /* roo.air.cfd.yFixed[11] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[294]] /* roo.air.yFixed[11] PARAM */);
  threadData->lastEquationSolved = 297;
}

/*
equation index: 298
type: SIMPLE_ASSIGN
roo.air.Xi_outflow_fixed[1] = 0.01
*/
void tmp_one_port_eqFunction_298(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,298};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[41]] /* roo.air.Xi_outflow_fixed[1] PARAM */) = 0.01;
  threadData->lastEquationSolved = 298;
}

/*
equation index: 299
type: SIMPLE_ASSIGN
roo.air.yFixed[10] = roo.air.Xi_outflow_fixed[1]
*/
void tmp_one_port_eqFunction_299(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,299};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[293]] /* roo.air.yFixed[10] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[41]] /* roo.air.Xi_outflow_fixed[1] PARAM */);
  threadData->lastEquationSolved = 299;
}

/*
equation index: 300
type: SIMPLE_ASSIGN
roo.air.cfd.yFixed[10] = roo.air.yFixed[10]
*/
void tmp_one_port_eqFunction_300(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,300};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[67]] /* roo.air.cfd.yFixed[10] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[293]] /* roo.air.yFixed[10] PARAM */);
  threadData->lastEquationSolved = 300;
}

/*
equation index: 301
type: SIMPLE_ASSIGN
roo.air.cfd.y[11] = roo.air.cfd.yFixed[11]
*/
void tmp_one_port_eqFunction_301(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,301};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[294]] /* roo.air.cfd.y[11] DISCRETE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[68]] /* roo.air.cfd.yFixed[11] PARAM */);
  threadData->lastEquationSolved = 301;
}

/*
equation index: 302
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.y[11] = roo.air.cfd.y[11]
*/
void tmp_one_port_eqFunction_302(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,302};
  (data->simulationInfo->realVarsPre[294] /* roo.air.cfd.y[11] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[294]] /* roo.air.cfd.y[11] DISCRETE */);
  threadData->lastEquationSolved = 302;
}
extern void tmp_one_port_eqFunction_572(DATA *data, threadData_t *threadData);


/*
equation index: 304
type: SIMPLE_ASSIGN
roo.air.cfd.y[10] = roo.air.cfd.yFixed[10]
*/
void tmp_one_port_eqFunction_304(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,304};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[293]] /* roo.air.cfd.y[10] DISCRETE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[67]] /* roo.air.cfd.yFixed[10] PARAM */);
  threadData->lastEquationSolved = 304;
}

/*
equation index: 305
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.y[10] = roo.air.cfd.y[10]
*/
void tmp_one_port_eqFunction_305(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,305};
  (data->simulationInfo->realVarsPre[293] /* roo.air.cfd.y[10] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[293]] /* roo.air.cfd.y[10] DISCRETE */);
  threadData->lastEquationSolved = 305;
}
extern void tmp_one_port_eqFunction_570(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_573(DATA *data, threadData_t *threadData);


/*
equation index: 308
type: SIMPLE_ASSIGN
roo.air.cfd.y[9] = roo.air.cfd.yFixed[9]
*/
void tmp_one_port_eqFunction_308(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,308};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[292]] /* roo.air.cfd.y[9] DISCRETE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[66]] /* roo.air.cfd.yFixed[9] PARAM */);
  threadData->lastEquationSolved = 308;
}

/*
equation index: 309
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.y[9] = roo.air.cfd.y[9]
*/
void tmp_one_port_eqFunction_309(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,309};
  (data->simulationInfo->realVarsPre[292] /* roo.air.cfd.y[9] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[292]] /* roo.air.cfd.y[9] DISCRETE */);
  threadData->lastEquationSolved = 309;
}
extern void tmp_one_port_eqFunction_607(DATA *data, threadData_t *threadData);


/*
equation index: 311
type: SIMPLE_ASSIGN
roo.air.cfd.y[8] = roo.air.cfd.yFixed[8]
*/
void tmp_one_port_eqFunction_311(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,311};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[291]] /* roo.air.cfd.y[8] DISCRETE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[65]] /* roo.air.cfd.yFixed[8] PARAM */);
  threadData->lastEquationSolved = 311;
}

/*
equation index: 312
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.y[8] = roo.air.cfd.y[8]
*/
void tmp_one_port_eqFunction_312(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,312};
  (data->simulationInfo->realVarsPre[291] /* roo.air.cfd.y[8] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[291]] /* roo.air.cfd.y[8] DISCRETE */);
  threadData->lastEquationSolved = 312;
}
extern void tmp_one_port_eqFunction_571(DATA *data, threadData_t *threadData);


/*
equation index: 314
type: SIMPLE_ASSIGN
roo.air.cfd.uWri[11] = roo.air.cfd.u[11]
*/
void tmp_one_port_eqFunction_314(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,314};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[279]] /* roo.air.cfd.uWri[11] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[60]] /* roo.air.cfd.u[11] variable */);
  threadData->lastEquationSolved = 314;
}

/*
equation index: 315
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uWri[11] = roo.air.cfd.uWri[11]
*/
void tmp_one_port_eqFunction_315(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,315};
  (data->simulationInfo->realVarsPre[279] /* roo.air.cfd.uWri[11] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[279]] /* roo.air.cfd.uWri[11] DISCRETE */);
  threadData->lastEquationSolved = 315;
}

/*
equation index: 316
type: SIMPLE_ASSIGN
roo.air.yFixed[12] = 0.0
*/
void tmp_one_port_eqFunction_316(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,316};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[295]] /* roo.air.yFixed[12] PARAM */) = 0.0;
  threadData->lastEquationSolved = 316;
}

/*
equation index: 317
type: SIMPLE_ASSIGN
roo.air.cfd.yFixed[12] = roo.air.yFixed[12]
*/
void tmp_one_port_eqFunction_317(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,317};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[69]] /* roo.air.cfd.yFixed[12] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[295]] /* roo.air.yFixed[12] PARAM */);
  threadData->lastEquationSolved = 317;
}

/*
equation index: 318
type: SIMPLE_ASSIGN
roo.air.cfd.y[12] = roo.air.cfd.yFixed[12]
*/
void tmp_one_port_eqFunction_318(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,318};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[295]] /* roo.air.cfd.y[12] DISCRETE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[69]] /* roo.air.cfd.yFixed[12] PARAM */);
  threadData->lastEquationSolved = 318;
}

/*
equation index: 319
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.y[12] = roo.air.cfd.y[12]
*/
void tmp_one_port_eqFunction_319(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,319};
  (data->simulationInfo->realVarsPre[295] /* roo.air.cfd.y[12] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[295]] /* roo.air.cfd.y[12] DISCRETE */);
  threadData->lastEquationSolved = 319;
}

/*
equation index: 320
type: SIMPLE_ASSIGN
weaDat.conTimMin.weaDatEndTim = weaDat.timeSpan[2]
*/
void tmp_one_port_eqFunction_320(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,320};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1297]] /* weaDat.conTimMin.weaDatEndTim PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1320]] /* weaDat.timeSpan[2] PARAM */);
  threadData->lastEquationSolved = 320;
}

/*
equation index: 321
type: SIMPLE_ASSIGN
weaDat.conTimMin.weaDatStaTim = weaDat.timeSpan[1]
*/
void tmp_one_port_eqFunction_321(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,321};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1298]] /* weaDat.conTimMin.weaDatStaTim PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1319]] /* weaDat.timeSpan[1] PARAM */);
  threadData->lastEquationSolved = 321;
}

/*
equation index: 322
type: SIMPLE_ASSIGN
weaDat.conTimMin.lenWea = weaDat.conTimMin.weaDatEndTim - weaDat.conTimMin.weaDatStaTim
*/
void tmp_one_port_eqFunction_322(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,322};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1296]] /* weaDat.conTimMin.lenWea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1297]] /* weaDat.conTimMin.weaDatEndTim PARAM */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1298]] /* weaDat.conTimMin.weaDatStaTim PARAM */);
  threadData->lastEquationSolved = 322;
}

/*
equation index: 323
type: SIMPLE_ASSIGN
weaDat.conTimMin.canRepeatWeatherFile = abs(mod(weaDat.conTimMin.lenWea, 3.1536e7)) < 0.01
*/
void tmp_one_port_eqFunction_323(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,323};
  modelica_real tmp0;
  modelica_boolean tmp1;
  tmp0 = 3.1536e7;
  if (tmp0 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(weaDat.conTimMin.lenWea, 3.1536e7)");}
  tmp1 = Less(fabs(modelica_real_mod((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1296]] /* weaDat.conTimMin.lenWea PARAM */), tmp0)),0.01);
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[281]] /* weaDat.conTimMin.canRepeatWeatherFile PARAM */) = tmp1;
  threadData->lastEquationSolved = 323;
}

/*
equation index: 324
type: SIMPLE_ASSIGN
weaDat.conTim.weaDatEndTim = weaDat.timeSpan[2]
*/
void tmp_one_port_eqFunction_324(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,324};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1294]] /* weaDat.conTim.weaDatEndTim PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1320]] /* weaDat.timeSpan[2] PARAM */);
  threadData->lastEquationSolved = 324;
}

/*
equation index: 325
type: SIMPLE_ASSIGN
weaDat.conTim.weaDatStaTim = weaDat.timeSpan[1]
*/
void tmp_one_port_eqFunction_325(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,325};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1295]] /* weaDat.conTim.weaDatStaTim PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1319]] /* weaDat.timeSpan[1] PARAM */);
  threadData->lastEquationSolved = 325;
}

/*
equation index: 326
type: SIMPLE_ASSIGN
weaDat.conTim.lenWea = weaDat.conTim.weaDatEndTim - weaDat.conTim.weaDatStaTim
*/
void tmp_one_port_eqFunction_326(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,326};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1293]] /* weaDat.conTim.lenWea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1294]] /* weaDat.conTim.weaDatEndTim PARAM */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1295]] /* weaDat.conTim.weaDatStaTim PARAM */);
  threadData->lastEquationSolved = 326;
}

/*
equation index: 327
type: SIMPLE_ASSIGN
weaDat.conTim.canRepeatWeatherFile = abs(mod(weaDat.conTim.lenWea, 3.1536e7)) < 0.01
*/
void tmp_one_port_eqFunction_327(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,327};
  modelica_real tmp2;
  modelica_boolean tmp3;
  tmp2 = 3.1536e7;
  if (tmp2 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(weaDat.conTim.lenWea, 3.1536e7)");}
  tmp3 = Less(fabs(modelica_real_mod((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1293]] /* weaDat.conTim.lenWea PARAM */), tmp2)),0.01);
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[280]] /* weaDat.conTim.canRepeatWeatherFile PARAM */) = tmp3;
  threadData->lastEquationSolved = 327;
}
extern void tmp_one_port_eqFunction_650(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_656(DATA *data, threadData_t *threadData);


/*
equation index: 330
type: SIMPLE_ASSIGN
weaDat.conTimMin.tNext = if weaDat.conTimMin.canRepeatWeatherFile then weaDat.conTimMin.lenWea * (1.0 + (*Real*)(integer(weaDat.add30Min.y / weaDat.conTimMin.lenWea))) else time
*/
void tmp_one_port_eqFunction_330(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,330};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[297]] /* weaDat.conTimMin.tNext DISCRETE */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[281]] /* weaDat.conTimMin.canRepeatWeatherFile PARAM */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1296]] /* weaDat.conTimMin.lenWea PARAM */)) * (1.0 + ((modelica_real)((modelica_integer)floor(DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[188]] /* weaDat.add30Min.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1296]] /* weaDat.conTimMin.lenWea PARAM */),"weaDat.conTimMin.lenWea",equationIndexes))))):data->localData[0]->timeValue);
  threadData->lastEquationSolved = 330;
}
extern void tmp_one_port_eqFunction_732(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_733(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_735(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_737(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_658(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_659(DATA *data, threadData_t *threadData);


/*
equation index: 337
type: SIMPLE_ASSIGN
weaDat.eqnTim.eqnTim = 60.0 * (9.87 * sin(2.0 * weaDat.eqnTim.Bt) + (-7.53) * cos(weaDat.eqnTim.Bt) + (-1.5) * sin(weaDat.eqnTim.Bt))
*/
void tmp_one_port_eqFunction_337(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,337};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[223]] /* weaDat.eqnTim.eqnTim variable */) = (60.0) * ((9.87) * (sin((2.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[222]] /* weaDat.eqnTim.Bt variable */)))) + (-7.53) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[222]] /* weaDat.eqnTim.Bt variable */))) + (-1.5) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[222]] /* weaDat.eqnTim.Bt variable */))));
  threadData->lastEquationSolved = 337;
}
extern void tmp_one_port_eqFunction_664(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_665(DATA *data, threadData_t *threadData);


/*
equation index: 340
type: SIMPLE_ASSIGN
weaDat.weaBus.solDec = asin((-0.3979486313076103) * cos(0.017202423838958484 * (10.0 + 1.1574074074074073e-5 * weaDat.weaBus.cloTim)))
*/
void tmp_one_port_eqFunction_340(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,340};
  modelica_real tmp4;
  tmp4 = (-0.3979486313076103) * (cos((0.017202423838958484) * (10.0 + (1.1574074074074073e-5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[242]] /* weaDat.weaBus.cloTim variable */)))));
  if(!(tmp4 >= -1.0 && tmp4 <= 1.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of asin((-0.3979486313076103) * cos(0.017202423838958484 * (10.0 + 1.1574074074074073e-5 * weaDat.weaBus.cloTim))) outside the domain -1.0 <= %g <= 1.0", tmp4);
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[247]] /* weaDat.weaBus.solDec variable */) = asin(tmp4);
  threadData->lastEquationSolved = 340;
}

/*
equation index: 341
type: SIMPLE_ASSIGN
weaDat.weaBus.solZen = acos(cos(weaDat.latitude.latitude) * cos(weaDat.weaBus.solDec) * cos(weaDat.weaBus.solHouAng) + sin(weaDat.latitude.latitude) * sin(weaDat.weaBus.solDec))
*/
void tmp_one_port_eqFunction_341(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,341};
  modelica_real tmp5;
  tmp5 = (cos((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1306]] /* weaDat.latitude.latitude PARAM */))) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[247]] /* weaDat.weaBus.solDec variable */))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[248]] /* weaDat.weaBus.solHouAng variable */)))) + (sin((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1306]] /* weaDat.latitude.latitude PARAM */))) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[247]] /* weaDat.weaBus.solDec variable */)));
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
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[250]] /* weaDat.weaBus.solZen variable */) = acos(tmp5);
  threadData->lastEquationSolved = 341;
}
extern void tmp_one_port_eqFunction_668(DATA *data, threadData_t *threadData);


/*
equation index: 343
type: SIMPLE_ASSIGN
weaDat.conTim.tNext = if weaDat.conTim.canRepeatWeatherFile then weaDat.conTim.lenWea * (1.0 + (*Real*)(integer(weaDat.weaBus.cloTim / weaDat.conTim.lenWea))) else time
*/
void tmp_one_port_eqFunction_343(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,343};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[296]] /* weaDat.conTim.tNext DISCRETE */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[280]] /* weaDat.conTim.canRepeatWeatherFile PARAM */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1293]] /* weaDat.conTim.lenWea PARAM */)) * (1.0 + ((modelica_real)((modelica_integer)floor(DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[242]] /* weaDat.weaBus.cloTim variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1293]] /* weaDat.conTim.lenWea PARAM */),"weaDat.conTim.lenWea",equationIndexes))))):data->localData[0]->timeValue);
  threadData->lastEquationSolved = 343;
}
extern void tmp_one_port_eqFunction_670(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_736(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_738(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_734(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_729(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_730(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_728(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_727(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_726(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_725(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_724(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_723(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_722(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_721(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_720(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_718(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_719(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_717(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_710(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_711(DATA *data, threadData_t *threadData);


/*
equation index: 364
type: SIMPLE_ASSIGN
weaDat.weaBus.nOpa = min(1.0, max(0.0, weaDat.opaSkyCovSel.y))
*/
void tmp_one_port_eqFunction_364(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,364};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[243]] /* weaDat.weaBus.nOpa variable */) = fmin(1.0,fmax(0.0,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[225]] /* weaDat.opaSkyCovSel.y variable */)));
  threadData->lastEquationSolved = 364;
}
extern void tmp_one_port_eqFunction_714(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_706(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_707(DATA *data, threadData_t *threadData);


/*
equation index: 368
type: SIMPLE_ASSIGN
weaDat.weaBus.nTot = min(1.0, max(0.0, weaDat.totSkyCovSel.y))
*/
void tmp_one_port_eqFunction_368(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,368};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[244]] /* weaDat.weaBus.nTot variable */) = fmin(1.0,fmax(0.0,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[232]] /* weaDat.totSkyCovSel.y variable */)));
  threadData->lastEquationSolved = 368;
}
extern void tmp_one_port_eqFunction_704(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_705(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_700(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_701(DATA *data, threadData_t *threadData);


/*
equation index: 373
type: SIMPLE_ASSIGN
weaDat.weaBus.winDir = min(6.283185307179586, max(0.0, weaDat.conWinDir.y))
*/
void tmp_one_port_eqFunction_373(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,373};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[251]] /* weaDat.weaBus.winDir variable */) = fmin(6.283185307179586,fmax(0.0,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[192]] /* weaDat.conWinDir.y variable */)));
  threadData->lastEquationSolved = 373;
}
extern void tmp_one_port_eqFunction_699(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_698(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_697(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_696(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_695(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_694(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_693(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_678(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_679(DATA *data, threadData_t *threadData);


/*
equation index: 383
type: SIMPLE_ASSIGN
weaDat.weaBus.relHum = min(1.0, max(0.0, weaDat.relHumSel.uFil))
*/
void tmp_one_port_eqFunction_383(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,383};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[245]] /* weaDat.weaBus.relHum variable */) = fmin(1.0,fmax(0.0,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[226]] /* weaDat.relHumSel.uFil variable */)));
  threadData->lastEquationSolved = 383;
}
extern void tmp_one_port_eqFunction_674(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_675(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_671(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_672(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_676(DATA *data, threadData_t *threadData);


/*
equation index: 389
type: SIMPLE_ASSIGN
weaDat.TBlaSkyCom.epsSky = (0.787 + 0.764 * log(0.0036609921288669233 * weaDat.TBlaSkyCom.TDewPoiK)) * (1.0 + 0.0224 * weaDat.TBlaSkyCom.nOpa10 + (-0.0035) * weaDat.TBlaSkyCom.nOpa10 ^ 2.0 + 2.8e-4 * weaDat.TBlaSkyCom.nOpa10 ^ 3.0)
*/
void tmp_one_port_eqFunction_389(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,389};
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  tmp6 = (0.0036609921288669233) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[185]] /* weaDat.TBlaSkyCom.TDewPoiK variable */));
  if(!(tmp6 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of log(0.0036609921288669233 * weaDat.TBlaSkyCom.TDewPoiK) was %g should be > 0", tmp6);
    }
  }tmp7 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[187]] /* weaDat.TBlaSkyCom.nOpa10 variable */);
  tmp8 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[187]] /* weaDat.TBlaSkyCom.nOpa10 variable */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[186]] /* weaDat.TBlaSkyCom.epsSky variable */) = (0.787 + (0.764) * (log(tmp6))) * (1.0 + (0.0224) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[187]] /* weaDat.TBlaSkyCom.nOpa10 variable */)) + (-0.0035) * ((tmp7 * tmp7)) + (2.8e-4) * ((tmp8 * tmp8 * tmp8)));
  threadData->lastEquationSolved = 389;
}
extern void tmp_one_port_eqFunction_716(DATA *data, threadData_t *threadData);


/*
equation index: 391
type: SIMPLE_ASSIGN
weaDat.tWetBul_TDryBulXi.XiDryBul = 0.621964713077499 * weaDat.weaBus.relHum / ((-0.378035286922501) * weaDat.weaBus.relHum + 0.0016349032219037793 * weaDat.pAtmSel.p * exp(-17.2799 - (-4102.99) / (-35.719 + weaDat.weaBus.TDryBul)))
*/
void tmp_one_port_eqFunction_391(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,391};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* weaDat.tWetBul_TDryBulXi.XiDryBul variable */) = (0.621964713077499) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[245]] /* weaDat.weaBus.relHum variable */),(-0.378035286922501) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[245]] /* weaDat.weaBus.relHum variable */)) + (0.0016349032219037793) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1315]] /* weaDat.pAtmSel.p PARAM */)) * (exp(-17.2799 - (DIVISION_SIM(-4102.99,-35.719 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[239]] /* weaDat.weaBus.TDryBul variable */),"-35.719 + weaDat.weaBus.TDryBul",equationIndexes))))),"(-0.378035286922501) * weaDat.weaBus.relHum + 0.0016349032219037793 * weaDat.pAtmSel.p * exp(-17.2799 - (-4102.99) / (-35.719 + weaDat.weaBus.TDryBul))",equationIndexes));
  threadData->lastEquationSolved = 391;
}

void tmp_one_port_eqFunction_392(DATA*, threadData_t*);
void tmp_one_port_eqFunction_393(DATA*, threadData_t*);
void tmp_one_port_eqFunction_394(DATA*, threadData_t*);
/*
equation index: 399
indexNonlinear: 0
type: NONLINEAR

vars: {weaDat.weaBus.TWetBul}
eqns: {392, 393, 394}
*/
void tmp_one_port_eqFunction_399(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,399};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 399 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[240]] /* weaDat.weaBus.TWetBul variable */);
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,399};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 399 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[240]] /* weaDat.weaBus.TWetBul variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  threadData->lastEquationSolved = 399;
}

/*
equation index: 400
type: SIMPLE_ASSIGN
$PRE.weaDat.conTimMin.tNext = 0.0
*/
void tmp_one_port_eqFunction_400(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,400};
  (data->simulationInfo->realVarsPre[297] /* weaDat.conTimMin.tNext DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 400;
}

/*
equation index: 401
type: SIMPLE_ASSIGN
$whenCondition1 = weaDat.conTimMin.canRepeatWeatherFile and weaDat.add30Min.y > $PRE.weaDat.conTimMin.tNext
*/
void tmp_one_port_eqFunction_401(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,401};
  modelica_boolean tmp9;
  tmp9 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[188]] /* weaDat.add30Min.y variable */),(data->simulationInfo->realVarsPre[297] /* weaDat.conTimMin.tNext DISCRETE */));
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[281]] /* weaDat.conTimMin.canRepeatWeatherFile PARAM */) && tmp9);
  threadData->lastEquationSolved = 401;
}

/*
equation index: 402
type: SIMPLE_ASSIGN
$PRE.weaDat.conTim.tNext = 0.0
*/
void tmp_one_port_eqFunction_402(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,402};
  (data->simulationInfo->realVarsPre[296] /* weaDat.conTim.tNext DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 402;
}

/*
equation index: 403
type: SIMPLE_ASSIGN
$whenCondition2 = weaDat.conTim.canRepeatWeatherFile and weaDat.weaBus.cloTim > $PRE.weaDat.conTim.tNext
*/
void tmp_one_port_eqFunction_403(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,403};
  modelica_boolean tmp10;
  tmp10 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[242]] /* weaDat.weaBus.cloTim variable */),(data->simulationInfo->realVarsPre[296] /* weaDat.conTim.tNext DISCRETE */));
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1]] /* $whenCondition2 DISCRETE */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[280]] /* weaDat.conTim.canRepeatWeatherFile PARAM */) && tmp10);
  threadData->lastEquationSolved = 403;
}

/*
equation index: 404
type: SIMPLE_ASSIGN
roo.air.senHeaFlo.port_b.Q_flow = 0.0
*/
void tmp_one_port_eqFunction_404(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,404};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[73]] /* roo.air.senHeaFlo.port_b.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 404;
}

/*
equation index: 405
type: SIMPLE_ASSIGN
roo.air.cfd.sampleTrigger = false
*/
void tmp_one_port_eqFunction_405(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,405};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* roo.air.cfd.sampleTrigger DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 405;
}

/*
equation index: 406
type: ALGORITHM

  $whenCondition3 := $START.$whenCondition3;
  $whenCondition3 := roo.air.cfd.sampleTrigger;
*/
void tmp_one_port_eqFunction_406(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,406};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[2]] /* $whenCondition3 DISCRETE */) = (data->modelData->booleanVarsData[2] /* $whenCondition3 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[2]] /* $whenCondition3 DISCRETE */) = (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* roo.air.cfd.sampleTrigger DISCRETE */);
  threadData->lastEquationSolved = 406;
}

/*
equation index: 407
type: SIMPLE_ASSIGN
$whenCondition4 = roo.air.cfd.sampleTrigger
*/
void tmp_one_port_eqFunction_407(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,407};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) = (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* roo.air.cfd.sampleTrigger DISCRETE */);
  threadData->lastEquationSolved = 407;
}
extern void tmp_one_port_eqFunction_646(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_647(DATA *data, threadData_t *threadData);


/*
equation index: 410
type: SIMPLE_ASSIGN
roo.air.cfd.uWri[9] = roo.air.cfd.u[9]
*/
void tmp_one_port_eqFunction_410(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,410};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[277]] /* roo.air.cfd.uWri[9] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[58]] /* roo.air.cfd.u[9] variable */);
  threadData->lastEquationSolved = 410;
}

/*
equation index: 411
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uWri[9] = roo.air.cfd.uWri[9]
*/
void tmp_one_port_eqFunction_411(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,411};
  (data->simulationInfo->realVarsPre[277] /* roo.air.cfd.uWri[9] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[277]] /* roo.air.cfd.uWri[9] DISCRETE */);
  threadData->lastEquationSolved = 411;
}
extern void tmp_one_port_eqFunction_642(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_643(DATA *data, threadData_t *threadData);


/*
equation index: 414
type: SIMPLE_ASSIGN
roo.air.cfd.uWri[10] = roo.air.cfd.u[10]
*/
void tmp_one_port_eqFunction_414(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,414};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[278]] /* roo.air.cfd.uWri[10] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[59]] /* roo.air.cfd.u[10] variable */);
  threadData->lastEquationSolved = 414;
}

/*
equation index: 415
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uWri[10] = roo.air.cfd.uWri[10]
*/
void tmp_one_port_eqFunction_415(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,415};
  (data->simulationInfo->realVarsPre[278] /* roo.air.cfd.uWri[10] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[278]] /* roo.air.cfd.uWri[10] DISCRETE */);
  threadData->lastEquationSolved = 415;
}
extern void tmp_one_port_eqFunction_524(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_525(DATA *data, threadData_t *threadData);


/*
equation index: 418
type: SIMPLE_ASSIGN
sup.ports[1].h_outflow = 1006.0 * (-273.15 + Tsup.k) * (1.0 - sup.X_in_internal[1]) + (2.5010145e6 + 1860.0 * (-273.15 + Tsup.k)) * sup.X_in_internal[1]
*/
void tmp_one_port_eqFunction_418(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,418};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[184]] /* sup.ports[1].h_outflow variable */) = (1006.0) * ((-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3]] /* Tsup.k PARAM */)) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[182]] /* sup.X_in_internal[1] variable */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3]] /* Tsup.k PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[182]] /* sup.X_in_internal[1] variable */));
  threadData->lastEquationSolved = 418;
}
extern void tmp_one_port_eqFunction_519(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_530(DATA *data, threadData_t *threadData);


/*
equation index: 421
type: SIMPLE_ASSIGN
roo.air.cfd.uWri[12] = roo.air.cfd.u[12]
*/
void tmp_one_port_eqFunction_421(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,421};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[280]] /* roo.air.cfd.uWri[12] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[61]] /* roo.air.cfd.u[12] variable */);
  threadData->lastEquationSolved = 421;
}

/*
equation index: 422
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uWri[12] = roo.air.cfd.uWri[12]
*/
void tmp_one_port_eqFunction_422(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,422};
  (data->simulationInfo->realVarsPre[280] /* roo.air.cfd.uWri[12] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[280]] /* roo.air.cfd.uWri[12] DISCRETE */);
  threadData->lastEquationSolved = 422;
}
extern void tmp_one_port_eqFunction_521(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_522(DATA *data, threadData_t *threadData);


/*
equation index: 425
type: SIMPLE_ASSIGN
retSink.ports[1].h_outflow = 1006.0 * (-273.15 + retSink.T) * (1.0 - retSink.X_in_internal[1]) + (2.5010145e6 + 1860.0 * (-273.15 + retSink.T)) * retSink.X_in_internal[1]
*/
void tmp_one_port_eqFunction_425(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,425};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[48]] /* retSink.ports[1].h_outflow variable */) = (1006.0) * ((-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[8]] /* retSink.T PARAM */)) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[45]] /* retSink.X_in_internal[1] variable */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[8]] /* retSink.T PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[45]] /* retSink.X_in_internal[1] variable */));
  threadData->lastEquationSolved = 425;
}
extern void tmp_one_port_eqFunction_518(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_531(DATA *data, threadData_t *threadData);


/*
equation index: 428
type: SIMPLE_ASSIGN
roo.air.cfd.uWri[13] = roo.air.cfd.u[13]
*/
void tmp_one_port_eqFunction_428(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,428};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[281]] /* roo.air.cfd.uWri[13] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[62]] /* roo.air.cfd.u[13] variable */);
  threadData->lastEquationSolved = 428;
}

/*
equation index: 429
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uWri[13] = roo.air.cfd.uWri[13]
*/
void tmp_one_port_eqFunction_429(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,429};
  (data->simulationInfo->realVarsPre[281] /* roo.air.cfd.uWri[13] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[281]] /* roo.air.cfd.uWri[13] DISCRETE */);
  threadData->lastEquationSolved = 429;
}
extern void tmp_one_port_eqFunction_648(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_649(DATA *data, threadData_t *threadData);


/*
equation index: 432
type: SIMPLE_ASSIGN
roo.air.cfd.uWri[14] = roo.air.cfd.u[14]
*/
void tmp_one_port_eqFunction_432(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,432};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[282]] /* roo.air.cfd.uWri[14] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[63]] /* roo.air.cfd.u[14] variable */);
  threadData->lastEquationSolved = 432;
}

/*
equation index: 433
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uWri[14] = roo.air.cfd.uWri[14]
*/
void tmp_one_port_eqFunction_433(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,433};
  (data->simulationInfo->realVarsPre[282] /* roo.air.cfd.uWri[14] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[282]] /* roo.air.cfd.uWri[14] DISCRETE */);
  threadData->lastEquationSolved = 433;
}
extern void tmp_one_port_eqFunction_644(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_645(DATA *data, threadData_t *threadData);


/*
equation index: 436
type: SIMPLE_ASSIGN
roo.air.cfd.uWri[15] = roo.air.cfd.u[15]
*/
void tmp_one_port_eqFunction_436(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,436};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[283]] /* roo.air.cfd.uWri[15] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[64]] /* roo.air.cfd.u[15] variable */);
  threadData->lastEquationSolved = 436;
}

/*
equation index: 437
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uWri[15] = roo.air.cfd.uWri[15]
*/
void tmp_one_port_eqFunction_437(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,437};
  (data->simulationInfo->realVarsPre[283] /* roo.air.cfd.uWri[15] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[283]] /* roo.air.cfd.uWri[15] DISCRETE */);
  threadData->lastEquationSolved = 437;
}
extern void tmp_one_port_eqFunction_523(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_526(DATA *data, threadData_t *threadData);


/*
equation index: 440
type: SIMPLE_ASSIGN
roo.air.cfd.modTimRea = time
*/
void tmp_one_port_eqFunction_440(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,440};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[253]] /* roo.air.cfd.modTimRea DISCRETE */) = data->localData[0]->timeValue;
  threadData->lastEquationSolved = 440;
}

/*
equation index: 441
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.modTimRea = roo.air.cfd.modTimRea
*/
void tmp_one_port_eqFunction_441(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,441};
  (data->simulationInfo->realVarsPre[253] /* roo.air.cfd.modTimRea DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[253]] /* roo.air.cfd.modTimRea DISCRETE */);
  threadData->lastEquationSolved = 441;
}

/*
equation index: 442
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.retVal = 0.0
*/
void tmp_one_port_eqFunction_442(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,442};
  (data->simulationInfo->integerVarsPre[0] /* roo.air.cfd.retVal DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 442;
}

/*
equation index: 443
type: SIMPLE_ASSIGN
roo.air.cfd.retVal = $PRE.roo.air.cfd.retVal
*/
void tmp_one_port_eqFunction_443(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,443};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[0]] /* roo.air.cfd.retVal DISCRETE */) = (data->simulationInfo->integerVarsPre[0] /* roo.air.cfd.retVal DISCRETE */);
  threadData->lastEquationSolved = 443;
}

/*
equation index: 444
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.firstTrigger = false
*/
void tmp_one_port_eqFunction_444(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,444};
  (data->simulationInfo->booleanVarsPre[4] /* roo.air.cfd.firstTrigger DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 444;
}

/*
equation index: 445
type: SIMPLE_ASSIGN
roo.air.cfd.firstTrigger = $PRE.roo.air.cfd.firstTrigger
*/
void tmp_one_port_eqFunction_445(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,445};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[4]] /* roo.air.cfd.firstTrigger DISCRETE */) = (data->simulationInfo->booleanVarsPre[4] /* roo.air.cfd.firstTrigger DISCRETE */);
  threadData->lastEquationSolved = 445;
}

/*
equation index: 446
type: SIMPLE_ASSIGN
roo.air.cfd.uIntPre[1] = 0.0
*/
void tmp_one_port_eqFunction_446(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,446};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[254]] /* roo.air.cfd.uIntPre[1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 446;
}

/*
equation index: 447
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uIntPre[1] = roo.air.cfd.uIntPre[1]
*/
void tmp_one_port_eqFunction_447(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,447};
  (data->simulationInfo->realVarsPre[254] /* roo.air.cfd.uIntPre[1] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[254]] /* roo.air.cfd.uIntPre[1] DISCRETE */);
  threadData->lastEquationSolved = 447;
}

/*
equation index: 448
type: SIMPLE_ASSIGN
roo.air.cfd.uIntPre[2] = 0.0
*/
void tmp_one_port_eqFunction_448(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,448};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[255]] /* roo.air.cfd.uIntPre[2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 448;
}

/*
equation index: 449
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uIntPre[2] = roo.air.cfd.uIntPre[2]
*/
void tmp_one_port_eqFunction_449(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,449};
  (data->simulationInfo->realVarsPre[255] /* roo.air.cfd.uIntPre[2] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[255]] /* roo.air.cfd.uIntPre[2] DISCRETE */);
  threadData->lastEquationSolved = 449;
}

/*
equation index: 450
type: SIMPLE_ASSIGN
roo.air.cfd.uIntPre[3] = 0.0
*/
void tmp_one_port_eqFunction_450(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,450};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[256]] /* roo.air.cfd.uIntPre[3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 450;
}

/*
equation index: 451
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uIntPre[3] = roo.air.cfd.uIntPre[3]
*/
void tmp_one_port_eqFunction_451(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,451};
  (data->simulationInfo->realVarsPre[256] /* roo.air.cfd.uIntPre[3] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[256]] /* roo.air.cfd.uIntPre[3] DISCRETE */);
  threadData->lastEquationSolved = 451;
}

/*
equation index: 452
type: SIMPLE_ASSIGN
roo.air.cfd.uIntPre[4] = 0.0
*/
void tmp_one_port_eqFunction_452(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,452};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[257]] /* roo.air.cfd.uIntPre[4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 452;
}

/*
equation index: 453
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uIntPre[4] = roo.air.cfd.uIntPre[4]
*/
void tmp_one_port_eqFunction_453(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,453};
  (data->simulationInfo->realVarsPre[257] /* roo.air.cfd.uIntPre[4] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[257]] /* roo.air.cfd.uIntPre[4] DISCRETE */);
  threadData->lastEquationSolved = 453;
}

/*
equation index: 454
type: SIMPLE_ASSIGN
roo.air.cfd.uIntPre[5] = 0.0
*/
void tmp_one_port_eqFunction_454(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,454};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* roo.air.cfd.uIntPre[5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 454;
}

/*
equation index: 455
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uIntPre[5] = roo.air.cfd.uIntPre[5]
*/
void tmp_one_port_eqFunction_455(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,455};
  (data->simulationInfo->realVarsPre[258] /* roo.air.cfd.uIntPre[5] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* roo.air.cfd.uIntPre[5] DISCRETE */);
  threadData->lastEquationSolved = 455;
}

/*
equation index: 456
type: SIMPLE_ASSIGN
roo.air.cfd.uIntPre[6] = 0.0
*/
void tmp_one_port_eqFunction_456(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,456};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[259]] /* roo.air.cfd.uIntPre[6] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 456;
}

/*
equation index: 457
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uIntPre[6] = roo.air.cfd.uIntPre[6]
*/
void tmp_one_port_eqFunction_457(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,457};
  (data->simulationInfo->realVarsPre[259] /* roo.air.cfd.uIntPre[6] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[259]] /* roo.air.cfd.uIntPre[6] DISCRETE */);
  threadData->lastEquationSolved = 457;
}

/*
equation index: 458
type: SIMPLE_ASSIGN
roo.air.cfd.uIntPre[7] = 0.0
*/
void tmp_one_port_eqFunction_458(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,458};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[260]] /* roo.air.cfd.uIntPre[7] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 458;
}

/*
equation index: 459
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uIntPre[7] = roo.air.cfd.uIntPre[7]
*/
void tmp_one_port_eqFunction_459(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,459};
  (data->simulationInfo->realVarsPre[260] /* roo.air.cfd.uIntPre[7] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[260]] /* roo.air.cfd.uIntPre[7] DISCRETE */);
  threadData->lastEquationSolved = 459;
}

/*
equation index: 460
type: SIMPLE_ASSIGN
roo.air.cfd.uIntPre[8] = 0.0
*/
void tmp_one_port_eqFunction_460(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,460};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[261]] /* roo.air.cfd.uIntPre[8] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 460;
}

/*
equation index: 461
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uIntPre[8] = roo.air.cfd.uIntPre[8]
*/
void tmp_one_port_eqFunction_461(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,461};
  (data->simulationInfo->realVarsPre[261] /* roo.air.cfd.uIntPre[8] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[261]] /* roo.air.cfd.uIntPre[8] DISCRETE */);
  threadData->lastEquationSolved = 461;
}

/*
equation index: 462
type: SIMPLE_ASSIGN
roo.air.cfd.uIntPre[9] = 0.0
*/
void tmp_one_port_eqFunction_462(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,462};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[262]] /* roo.air.cfd.uIntPre[9] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 462;
}

/*
equation index: 463
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uIntPre[9] = roo.air.cfd.uIntPre[9]
*/
void tmp_one_port_eqFunction_463(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,463};
  (data->simulationInfo->realVarsPre[262] /* roo.air.cfd.uIntPre[9] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[262]] /* roo.air.cfd.uIntPre[9] DISCRETE */);
  threadData->lastEquationSolved = 463;
}

/*
equation index: 464
type: SIMPLE_ASSIGN
roo.air.cfd.uIntPre[10] = 0.0
*/
void tmp_one_port_eqFunction_464(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,464};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[263]] /* roo.air.cfd.uIntPre[10] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 464;
}

/*
equation index: 465
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uIntPre[10] = roo.air.cfd.uIntPre[10]
*/
void tmp_one_port_eqFunction_465(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,465};
  (data->simulationInfo->realVarsPre[263] /* roo.air.cfd.uIntPre[10] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[263]] /* roo.air.cfd.uIntPre[10] DISCRETE */);
  threadData->lastEquationSolved = 465;
}

/*
equation index: 466
type: SIMPLE_ASSIGN
roo.air.cfd.uIntPre[11] = 0.0
*/
void tmp_one_port_eqFunction_466(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,466};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[264]] /* roo.air.cfd.uIntPre[11] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 466;
}

/*
equation index: 467
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uIntPre[11] = roo.air.cfd.uIntPre[11]
*/
void tmp_one_port_eqFunction_467(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,467};
  (data->simulationInfo->realVarsPre[264] /* roo.air.cfd.uIntPre[11] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[264]] /* roo.air.cfd.uIntPre[11] DISCRETE */);
  threadData->lastEquationSolved = 467;
}

/*
equation index: 468
type: SIMPLE_ASSIGN
roo.air.cfd.uIntPre[12] = 0.0
*/
void tmp_one_port_eqFunction_468(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,468};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[265]] /* roo.air.cfd.uIntPre[12] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 468;
}

/*
equation index: 469
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uIntPre[12] = roo.air.cfd.uIntPre[12]
*/
void tmp_one_port_eqFunction_469(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,469};
  (data->simulationInfo->realVarsPre[265] /* roo.air.cfd.uIntPre[12] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[265]] /* roo.air.cfd.uIntPre[12] DISCRETE */);
  threadData->lastEquationSolved = 469;
}

/*
equation index: 470
type: SIMPLE_ASSIGN
roo.air.cfd.uIntPre[13] = 0.0
*/
void tmp_one_port_eqFunction_470(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,470};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[266]] /* roo.air.cfd.uIntPre[13] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 470;
}

/*
equation index: 471
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uIntPre[13] = roo.air.cfd.uIntPre[13]
*/
void tmp_one_port_eqFunction_471(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,471};
  (data->simulationInfo->realVarsPre[266] /* roo.air.cfd.uIntPre[13] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[266]] /* roo.air.cfd.uIntPre[13] DISCRETE */);
  threadData->lastEquationSolved = 471;
}

/*
equation index: 472
type: SIMPLE_ASSIGN
roo.air.cfd.uIntPre[14] = 0.0
*/
void tmp_one_port_eqFunction_472(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,472};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[267]] /* roo.air.cfd.uIntPre[14] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 472;
}

/*
equation index: 473
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uIntPre[14] = roo.air.cfd.uIntPre[14]
*/
void tmp_one_port_eqFunction_473(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,473};
  (data->simulationInfo->realVarsPre[267] /* roo.air.cfd.uIntPre[14] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[267]] /* roo.air.cfd.uIntPre[14] DISCRETE */);
  threadData->lastEquationSolved = 473;
}

/*
equation index: 474
type: SIMPLE_ASSIGN
roo.air.cfd.uIntPre[15] = 0.0
*/
void tmp_one_port_eqFunction_474(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,474};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[268]] /* roo.air.cfd.uIntPre[15] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 474;
}

/*
equation index: 475
type: SIMPLE_ASSIGN
$PRE.roo.air.cfd.uIntPre[15] = roo.air.cfd.uIntPre[15]
*/
void tmp_one_port_eqFunction_475(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,475};
  (data->simulationInfo->realVarsPre[268] /* roo.air.cfd.uIntPre[15] DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[268]] /* roo.air.cfd.uIntPre[15] DISCRETE */);
  threadData->lastEquationSolved = 475;
}

/*
equation index: 476
type: SIMPLE_ASSIGN
roo.radTem.epsTauASha[1] = roo.radTem.AGla[1] * roo.radTem.epsGla[1]
*/
void tmp_one_port_eqFunction_476(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,476};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1213]] /* roo.radTem.epsTauASha[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1006]] /* roo.radTem.AGla[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1205]] /* roo.radTem.epsGla[1] PARAM */));
  threadData->lastEquationSolved = 476;
}

/*
equation index: 477
type: SIMPLE_ASSIGN
roo.radTem.epsASha[1] = roo.radTem.AGla[1] * roo.radTem.epsSha[1]
*/
void tmp_one_port_eqFunction_477(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,477};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1196]] /* roo.radTem.epsASha[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1006]] /* roo.radTem.AGla[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1206]] /* roo.radTem.epsSha[1] PARAM */));
  threadData->lastEquationSolved = 477;
}

/*
equation index: 478
type: SIMPLE_ASSIGN
roo.irRadExc.t0 = time
*/
void tmp_one_port_eqFunction_478(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,478};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[764]] /* roo.irRadExc.t0 PARAM */) = data->localData[0]->timeValue;
  threadData->lastEquationSolved = 478;
}

/*
equation index: 479
type: SIMPLE_ASSIGN
roo.air.cfd.uInt[15] = 0.0
*/
void tmp_one_port_eqFunction_479(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,479};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* roo.air.cfd.uInt[15] STATE(1,roo.air.cfd.u[15]) */) = 0.0;
  threadData->lastEquationSolved = 479;
}

/*
equation index: 480
type: SIMPLE_ASSIGN
roo.air.cfd.uInt[14] = 0.0
*/
void tmp_one_port_eqFunction_480(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,480};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* roo.air.cfd.uInt[14] STATE(1,roo.air.cfd.u[14]) */) = 0.0;
  threadData->lastEquationSolved = 480;
}

/*
equation index: 481
type: SIMPLE_ASSIGN
roo.air.cfd.uInt[13] = 0.0
*/
void tmp_one_port_eqFunction_481(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,481};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* roo.air.cfd.uInt[13] STATE(1,roo.air.cfd.u[13]) */) = 0.0;
  threadData->lastEquationSolved = 481;
}

/*
equation index: 482
type: SIMPLE_ASSIGN
roo.air.cfd.uInt[12] = 0.0
*/
void tmp_one_port_eqFunction_482(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,482};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* roo.air.cfd.uInt[12] STATE(1,roo.air.cfd.u[12]) */) = 0.0;
  threadData->lastEquationSolved = 482;
}

/*
equation index: 483
type: SIMPLE_ASSIGN
roo.air.cfd.uInt[11] = 0.0
*/
void tmp_one_port_eqFunction_483(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,483};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* roo.air.cfd.uInt[11] STATE(1,roo.air.cfd.u[11]) */) = 0.0;
  threadData->lastEquationSolved = 483;
}

/*
equation index: 484
type: SIMPLE_ASSIGN
roo.air.cfd.uInt[10] = 0.0
*/
void tmp_one_port_eqFunction_484(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,484};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* roo.air.cfd.uInt[10] STATE(1,roo.air.cfd.u[10]) */) = 0.0;
  threadData->lastEquationSolved = 484;
}

/*
equation index: 485
type: SIMPLE_ASSIGN
roo.air.cfd.uInt[9] = 0.0
*/
void tmp_one_port_eqFunction_485(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,485};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* roo.air.cfd.uInt[9] STATE(1,roo.air.cfd.u[9]) */) = 0.0;
  threadData->lastEquationSolved = 485;
}

/*
equation index: 486
type: SIMPLE_ASSIGN
roo.air.cfd.uInt[8] = 0.0
*/
void tmp_one_port_eqFunction_486(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,486};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* roo.air.cfd.uInt[8] STATE(1,roo.air.cfd.u[8]) */) = 0.0;
  threadData->lastEquationSolved = 486;
}

/*
equation index: 487
type: SIMPLE_ASSIGN
roo.air.cfd.uInt[7] = 0.0
*/
void tmp_one_port_eqFunction_487(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,487};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* roo.air.cfd.uInt[7] STATE(1,roo.air.cfd.u[7]) */) = 0.0;
  threadData->lastEquationSolved = 487;
}

/*
equation index: 488
type: SIMPLE_ASSIGN
roo.air.cfd.uInt[6] = 0.0
*/
void tmp_one_port_eqFunction_488(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,488};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* roo.air.cfd.uInt[6] STATE(1,roo.air.cfd.u[6]) */) = 0.0;
  threadData->lastEquationSolved = 488;
}

/*
equation index: 489
type: SIMPLE_ASSIGN
roo.air.cfd.uInt[5] = 0.0
*/
void tmp_one_port_eqFunction_489(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,489};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* roo.air.cfd.uInt[5] STATE(1,roo.air.cfd.u[5]) */) = 0.0;
  threadData->lastEquationSolved = 489;
}

/*
equation index: 490
type: SIMPLE_ASSIGN
roo.air.cfd.uInt[4] = 0.0
*/
void tmp_one_port_eqFunction_490(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,490};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* roo.air.cfd.uInt[4] STATE(1,roo.air.cfd.u[4]) */) = 0.0;
  threadData->lastEquationSolved = 490;
}

/*
equation index: 491
type: SIMPLE_ASSIGN
roo.air.cfd.uInt[3] = 0.0
*/
void tmp_one_port_eqFunction_491(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,491};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* roo.air.cfd.uInt[3] STATE(1,roo.air.cfd.u[3]) */) = 0.0;
  threadData->lastEquationSolved = 491;
}

/*
equation index: 492
type: SIMPLE_ASSIGN
roo.air.cfd.uInt[2] = 0.0
*/
void tmp_one_port_eqFunction_492(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,492};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* roo.air.cfd.uInt[2] STATE(1,roo.air.cfd.u[2]) */) = 0.0;
  threadData->lastEquationSolved = 492;
}

/*
equation index: 493
type: SIMPLE_ASSIGN
roo.air.cfd.uInt[1] = 0.0
*/
void tmp_one_port_eqFunction_493(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,493};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* roo.air.cfd.uInt[1] STATE(1,roo.air.cfd.u[1]) */) = 0.0;
  threadData->lastEquationSolved = 493;
}

/*
equation index: 513
type: ALGORITHM

  TmpOnePort.roo.irRadGai.checkSurfaceAreas(0, {roo.irRadGai.datConExt[1].A}, "TmpOnePort.roo.irRadGai.datConExt");
  TmpOnePort.roo.irRadGai.checkSurfaceAreas(0, {roo.irRadGai.datConExtWin[1].AWin}, "TmpOnePort.roo.irRadGai.datConExtWin");
  TmpOnePort.roo.irRadGai.checkSurfaceAreas(0, {roo.irRadGai.datConPar[1].A}, "TmpOnePort.roo.irRadGai.datConPar");
  TmpOnePort.roo.irRadGai.checkSurfaceAreas(0, {roo.irRadGai.datConBou[1].A}, "TmpOnePort.roo.irRadGai.datConBou");
  TmpOnePort.roo.irRadGai.checkSurfaceAreas(6, {roo.irRadGai.surBou[1].A, roo.irRadGai.surBou[2].A, roo.irRadGai.surBou[3].A, roo.irRadGai.surBou[4].A, roo.irRadGai.surBou[5].A, roo.irRadGai.surBou[6].A}, "TmpOnePort.roo.irRadGai.surBou");
*/
void tmp_one_port_eqFunction_513(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,513};
  real_array tmp11;
  static const MMC_DEFSTRINGLIT(tmp12,33,"TmpOnePort.roo.irRadGai.datConExt");
  real_array tmp13;
  static const MMC_DEFSTRINGLIT(tmp14,36,"TmpOnePort.roo.irRadGai.datConExtWin");
  real_array tmp15;
  static const MMC_DEFSTRINGLIT(tmp16,33,"TmpOnePort.roo.irRadGai.datConPar");
  real_array tmp17;
  static const MMC_DEFSTRINGLIT(tmp18,33,"TmpOnePort.roo.irRadGai.datConBou");
  real_array tmp19;
  static const MMC_DEFSTRINGLIT(tmp20,30,"TmpOnePort.roo.irRadGai.surBou");
  array_alloc_scalar_real_array(&tmp11, 1, (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[810]] /* roo.irRadGai.datConExt[1].A PARAM */));
  omc_TmpOnePort_roo_irRadGai_checkSurfaceAreas(threadData, ((modelica_integer) 0), tmp11, MMC_REFSTRINGLIT(tmp12));

  array_alloc_scalar_real_array(&tmp13, 1, (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[835]] /* roo.irRadGai.datConExtWin[1].AWin PARAM */));
  omc_TmpOnePort_roo_irRadGai_checkSurfaceAreas(threadData, ((modelica_integer) 0), tmp13, MMC_REFSTRINGLIT(tmp14));

  array_alloc_scalar_real_array(&tmp15, 1, (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[894]] /* roo.irRadGai.datConPar[1].A PARAM */));
  omc_TmpOnePort_roo_irRadGai_checkSurfaceAreas(threadData, ((modelica_integer) 0), tmp15, MMC_REFSTRINGLIT(tmp16));

  array_alloc_scalar_real_array(&tmp17, 1, (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[789]] /* roo.irRadGai.datConBou[1].A PARAM */));
  omc_TmpOnePort_roo_irRadGai_checkSurfaceAreas(threadData, ((modelica_integer) 0), tmp17, MMC_REFSTRINGLIT(tmp18));

  array_alloc_scalar_real_array(&tmp19, 6, (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[974]] /* roo.irRadGai.surBou[1].A PARAM */), (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[975]] /* roo.irRadGai.surBou[2].A PARAM */), (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[976]] /* roo.irRadGai.surBou[3].A PARAM */), (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[977]] /* roo.irRadGai.surBou[4].A PARAM */), (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[978]] /* roo.irRadGai.surBou[5].A PARAM */), (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[979]] /* roo.irRadGai.surBou[6].A PARAM */));
  omc_TmpOnePort_roo_irRadGai_checkSurfaceAreas(threadData, ((modelica_integer) 6), tmp19, MMC_REFSTRINGLIT(tmp20));
  threadData->lastEquationSolved = 513;
}

/*
equation index: 512
type: ALGORITHM

  TmpOnePort.roo.irRadExc.checkSurfaceAreas(0, {roo.irRadExc.datConExt[1].A}, "TmpOnePort.roo.irRadExc.datConExt");
  TmpOnePort.roo.irRadExc.checkSurfaceAreas(0, {roo.irRadExc.datConExtWin[1].AWin}, "TmpOnePort.roo.irRadExc.datConExtWin");
  TmpOnePort.roo.irRadExc.checkSurfaceAreas(0, {roo.irRadExc.datConPar[1].A}, "TmpOnePort.roo.irRadExc.datConPar");
  TmpOnePort.roo.irRadExc.checkSurfaceAreas(0, {roo.irRadExc.datConBou[1].A}, "TmpOnePort.roo.irRadExc.datConBou");
  TmpOnePort.roo.irRadExc.checkSurfaceAreas(6, {roo.irRadExc.surBou[1].A, roo.irRadExc.surBou[2].A, roo.irRadExc.surBou[3].A, roo.irRadExc.surBou[4].A, roo.irRadExc.surBou[5].A, roo.irRadExc.surBou[6].A}, "TmpOnePort.roo.irRadExc.surBou");
*/
void tmp_one_port_eqFunction_512(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,512};
  real_array tmp21;
  static const MMC_DEFSTRINGLIT(tmp22,33,"TmpOnePort.roo.irRadExc.datConExt");
  real_array tmp23;
  static const MMC_DEFSTRINGLIT(tmp24,36,"TmpOnePort.roo.irRadExc.datConExtWin");
  real_array tmp25;
  static const MMC_DEFSTRINGLIT(tmp26,33,"TmpOnePort.roo.irRadExc.datConPar");
  real_array tmp27;
  static const MMC_DEFSTRINGLIT(tmp28,33,"TmpOnePort.roo.irRadExc.datConBou");
  real_array tmp29;
  static const MMC_DEFSTRINGLIT(tmp30,30,"TmpOnePort.roo.irRadExc.surBou");
  array_alloc_scalar_real_array(&tmp21, 1, (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[553]] /* roo.irRadExc.datConExt[1].A PARAM */));
  omc_TmpOnePort_roo_irRadExc_checkSurfaceAreas(threadData, ((modelica_integer) 0), tmp21, MMC_REFSTRINGLIT(tmp22));

  array_alloc_scalar_real_array(&tmp23, 1, (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[578]] /* roo.irRadExc.datConExtWin[1].AWin PARAM */));
  omc_TmpOnePort_roo_irRadExc_checkSurfaceAreas(threadData, ((modelica_integer) 0), tmp23, MMC_REFSTRINGLIT(tmp24));

  array_alloc_scalar_real_array(&tmp25, 1, (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[637]] /* roo.irRadExc.datConPar[1].A PARAM */));
  omc_TmpOnePort_roo_irRadExc_checkSurfaceAreas(threadData, ((modelica_integer) 0), tmp25, MMC_REFSTRINGLIT(tmp26));

  array_alloc_scalar_real_array(&tmp27, 1, (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[532]] /* roo.irRadExc.datConBou[1].A PARAM */));
  omc_TmpOnePort_roo_irRadExc_checkSurfaceAreas(threadData, ((modelica_integer) 0), tmp27, MMC_REFSTRINGLIT(tmp28));

  array_alloc_scalar_real_array(&tmp29, 6, (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[740]] /* roo.irRadExc.surBou[1].A PARAM */), (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[741]] /* roo.irRadExc.surBou[2].A PARAM */), (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[742]] /* roo.irRadExc.surBou[3].A PARAM */), (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[743]] /* roo.irRadExc.surBou[4].A PARAM */), (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[744]] /* roo.irRadExc.surBou[5].A PARAM */), (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[745]] /* roo.irRadExc.surBou[6].A PARAM */));
  omc_TmpOnePort_roo_irRadExc_checkSurfaceAreas(threadData, ((modelica_integer) 6), tmp29, MMC_REFSTRINGLIT(tmp30));
  threadData->lastEquationSolved = 512;
}

/*
equation index: 511
type: ALGORITHM

  TmpOnePort.roo.radTem.checkSurfaceAreas(0, {roo.radTem.datConExt[1].A}, "TmpOnePort.roo.radTem.datConExt");
  TmpOnePort.roo.radTem.checkSurfaceAreas(0, {roo.radTem.datConExtWin[1].AWin}, "TmpOnePort.roo.radTem.datConExtWin");
  TmpOnePort.roo.radTem.checkSurfaceAreas(0, {roo.radTem.datConPar[1].A}, "TmpOnePort.roo.radTem.datConPar");
  TmpOnePort.roo.radTem.checkSurfaceAreas(0, {roo.radTem.datConBou[1].A}, "TmpOnePort.roo.radTem.datConBou");
  TmpOnePort.roo.radTem.checkSurfaceAreas(6, {roo.radTem.surBou[1].A, roo.radTem.surBou[2].A, roo.radTem.surBou[3].A, roo.radTem.surBou[4].A, roo.radTem.surBou[5].A, roo.radTem.surBou[6].A}, "TmpOnePort.roo.radTem.surBou");
*/
void tmp_one_port_eqFunction_511(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,511};
  real_array tmp31;
  static const MMC_DEFSTRINGLIT(tmp32,31,"TmpOnePort.roo.radTem.datConExt");
  real_array tmp33;
  static const MMC_DEFSTRINGLIT(tmp34,34,"TmpOnePort.roo.radTem.datConExtWin");
  real_array tmp35;
  static const MMC_DEFSTRINGLIT(tmp36,31,"TmpOnePort.roo.radTem.datConPar");
  real_array tmp37;
  static const MMC_DEFSTRINGLIT(tmp38,31,"TmpOnePort.roo.radTem.datConBou");
  real_array tmp39;
  static const MMC_DEFSTRINGLIT(tmp40,28,"TmpOnePort.roo.radTem.surBou");
  array_alloc_scalar_real_array(&tmp31, 1, (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1034]] /* roo.radTem.datConExt[1].A PARAM */));
  omc_TmpOnePort_roo_radTem_checkSurfaceAreas(threadData, ((modelica_integer) 0), tmp31, MMC_REFSTRINGLIT(tmp32));

  array_alloc_scalar_real_array(&tmp33, 1, (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1059]] /* roo.radTem.datConExtWin[1].AWin PARAM */));
  omc_TmpOnePort_roo_radTem_checkSurfaceAreas(threadData, ((modelica_integer) 0), tmp33, MMC_REFSTRINGLIT(tmp34));

  array_alloc_scalar_real_array(&tmp35, 1, (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1118]] /* roo.radTem.datConPar[1].A PARAM */));
  omc_TmpOnePort_roo_radTem_checkSurfaceAreas(threadData, ((modelica_integer) 0), tmp35, MMC_REFSTRINGLIT(tmp36));

  array_alloc_scalar_real_array(&tmp37, 1, (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1013]] /* roo.radTem.datConBou[1].A PARAM */));
  omc_TmpOnePort_roo_radTem_checkSurfaceAreas(threadData, ((modelica_integer) 0), tmp37, MMC_REFSTRINGLIT(tmp38));

  array_alloc_scalar_real_array(&tmp39, 6, (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1214]] /* roo.radTem.surBou[1].A PARAM */), (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1215]] /* roo.radTem.surBou[2].A PARAM */), (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1216]] /* roo.radTem.surBou[3].A PARAM */), (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1217]] /* roo.radTem.surBou[4].A PARAM */), (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1218]] /* roo.radTem.surBou[5].A PARAM */), (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1219]] /* roo.radTem.surBou[6].A PARAM */));
  omc_TmpOnePort_roo_radTem_checkSurfaceAreas(threadData, ((modelica_integer) 6), tmp39, MMC_REFSTRINGLIT(tmp40));
  threadData->lastEquationSolved = 511;
}

/*
equation index: 510
type: ALGORITHM

  TmpOnePort.roo.air.cfd.assertStringsAreUnique("surface", 6, {roo.air.cfd.surIde[1].name, roo.air.cfd.surIde[2].name, roo.air.cfd.surIde[3].name, roo.air.cfd.surIde[4].name, roo.air.cfd.surIde[5].name, roo.air.cfd.surIde[6].name});
*/
void tmp_one_port_eqFunction_510(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,510};
  static const MMC_DEFSTRINGLIT(tmp41,7,"surface");
  string_array tmp42;
  array_alloc_scalar_string_array(&tmp42, 6, (modelica_string)(data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[5]] /* roo.air.cfd.surIde[1].name PARAM */), (modelica_string)(data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[6]] /* roo.air.cfd.surIde[2].name PARAM */), (modelica_string)(data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[7]] /* roo.air.cfd.surIde[3].name PARAM */), (modelica_string)(data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[8]] /* roo.air.cfd.surIde[4].name PARAM */), (modelica_string)(data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[9]] /* roo.air.cfd.surIde[5].name PARAM */), (modelica_string)(data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[10]] /* roo.air.cfd.surIde[6].name PARAM */));
  omc_TmpOnePort_roo_air_cfd_assertStringsAreUnique(threadData, MMC_REFSTRINGLIT(tmp41), ((modelica_integer) 6), tmp42);
  threadData->lastEquationSolved = 510;
}

/*
equation index: 509
type: ALGORITHM

  TmpOnePort.roo.air.cfd.assertStringsAreUnique("ports", 2, roo.air.cfd.portName);
*/
void tmp_one_port_eqFunction_509(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,509};
  static const MMC_DEFSTRINGLIT(tmp43,5,"ports");
  string_array tmp44;
  string_array_create(&tmp44, ((modelica_string*)&((&data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[2]] /* roo.air.cfd.portName[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  omc_TmpOnePort_roo_air_cfd_assertStringsAreUnique(threadData, MMC_REFSTRINGLIT(tmp43), ((modelica_integer) 2), tmp44);
  threadData->lastEquationSolved = 509;
}

/*
equation index: 508
type: ALGORITHM

  TmpOnePort.roo.air.cfd.sendParameters(roo.air.cfd.cfdFilNam, {"floor", "ceiling", "south_wall", "north_wall", "west_wall", "east_wall"}, {375.0, 375.0, 67.5, 67.5, 112.5, 112.5}, {3.141592653589793, 0.0, 1.5707963267948966, 1.5707963267948966, 1.5707963267948966, 1.5707963267948966}, {Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate}, 2, roo.air.cfd.portName, false, {""}, false, 6, 1, 1, 1, 0, roo.air.cfd.rho_start);
*/
void tmp_one_port_eqFunction_508(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,508};
  string_array tmp45;
  static const MMC_DEFSTRINGLIT(tmp46,5,"floor");
  static const MMC_DEFSTRINGLIT(tmp47,7,"ceiling");
  static const MMC_DEFSTRINGLIT(tmp48,10,"south_wall");
  static const MMC_DEFSTRINGLIT(tmp49,10,"north_wall");
  static const MMC_DEFSTRINGLIT(tmp50,9,"west_wall");
  static const MMC_DEFSTRINGLIT(tmp51,9,"east_wall");
  real_array tmp52;
  real_array tmp53;
  integer_array tmp54;
  string_array tmp55;
  string_array tmp56;
  array_alloc_scalar_string_array(&tmp45, 6, (modelica_string)MMC_REFSTRINGLIT(tmp46), (modelica_string)MMC_REFSTRINGLIT(tmp47), (modelica_string)MMC_REFSTRINGLIT(tmp48), (modelica_string)MMC_REFSTRINGLIT(tmp49), (modelica_string)MMC_REFSTRINGLIT(tmp50), (modelica_string)MMC_REFSTRINGLIT(tmp51));
  array_alloc_scalar_real_array(&tmp52, 6, (modelica_real)375.0, (modelica_real)375.0, (modelica_real)67.5, (modelica_real)67.5, (modelica_real)112.5, (modelica_real)112.5);
  array_alloc_scalar_real_array(&tmp53, 6, (modelica_real)3.141592653589793, (modelica_real)0.0, (modelica_real)1.5707963267948966, (modelica_real)1.5707963267948966, (modelica_real)1.5707963267948966, (modelica_real)1.5707963267948966);
  array_alloc_scalar_integer_array(&tmp54, 6, (modelica_integer)2, (modelica_integer)2, (modelica_integer)2, (modelica_integer)2, (modelica_integer)2, (modelica_integer)2);
  string_array_create(&tmp55, ((modelica_string*)&((&data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[2]] /* roo.air.cfd.portName[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  array_alloc_scalar_string_array(&tmp56, 1, (modelica_string)(modelica_string) mmc_emptystring);
  omc_TmpOnePort_roo_air_cfd_sendParameters(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[1]] /* roo.air.cfd.cfdFilNam PARAM */), tmp45, tmp52, tmp53, tmp54, ((modelica_integer) 2), tmp55, 0 /* false */, tmp56, 0 /* false */, ((modelica_integer) 6), ((modelica_integer) 1), ((modelica_integer) 1), ((modelica_integer) 1), ((modelica_integer) 0), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[43]] /* roo.air.cfd.rho_start PARAM */));
  threadData->lastEquationSolved = 508;
}

/*
equation index: 507
type: ALGORITHM

  assert(noEvent(weaDat.pAtmSel.p > 3100.0) and noEvent(weaDat.pAtmSel.p < 1.2e5), "In TmpOnePort.weaDat.chePre: Weather data atmospheric pressure out of bounds.
   PIn = " + String(weaDat.pAtmSel.p, 6, 0, true));
*/
void tmp_one_port_eqFunction_507(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,507};
  modelica_boolean tmp57;
  modelica_boolean tmp58;
  static const MMC_DEFSTRINGLIT(tmp59,87,"In TmpOnePort.weaDat.chePre: Weather data atmospheric pressure out of bounds.\n   PIn = ");
  modelica_string tmp60;
  modelica_metatype tmpMeta61;
  static int tmp62 = 0;
  {
    tmp57 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1315]] /* weaDat.pAtmSel.p PARAM */),3100.0);
    tmp58 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1315]] /* weaDat.pAtmSel.p PARAM */),1.2e5);
    if(!(tmp57 && tmp58))
    {
      tmp60 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1315]] /* weaDat.pAtmSel.p PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta61 = stringAppend(MMC_REFSTRINGLIT(tmp59),tmp60);
      {
        const char* assert_cond = "(noEvent(weaDat.pAtmSel.p > 3100.0) and noEvent(weaDat.pAtmSel.p < 1.2e5))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckPressure.mo",17,3,18,88,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta61));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckPressure.mo",17,3,18,88,1};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta61));
        }
      }
    }
  }
  threadData->lastEquationSolved = 507;
}

/*
equation index: 506
type: ALGORITHM

  assert(abs(1.0 - (roo.irRadExc.F[6,1] + roo.irRadExc.F[6,2] + roo.irRadExc.F[6,3] + roo.irRadExc.F[6,4] + roo.irRadExc.F[6,5] + roo.irRadExc.F[6,6])) < 1e-10, "Program error: Sum 1 of view factors is " + String(roo.irRadExc.F[6,1] + roo.irRadExc.F[6,2] + roo.irRadExc.F[6,3] + roo.irRadExc.F[6,4] + roo.irRadExc.F[6,5] + roo.irRadExc.F[6,6], 6, 0, true));
*/
void tmp_one_port_eqFunction_506(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,506};
  modelica_boolean tmp63;
  static const MMC_DEFSTRINGLIT(tmp64,40,"Program error: Sum 1 of view factors is ");
  modelica_string tmp65;
  modelica_metatype tmpMeta66;
  static int tmp67 = 0;
  {
    tmp63 = Less(fabs(1.0 - ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[524]] /* roo.irRadExc.F[6,1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[525]] /* roo.irRadExc.F[6,2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[526]] /* roo.irRadExc.F[6,3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[527]] /* roo.irRadExc.F[6,4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[528]] /* roo.irRadExc.F[6,5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[529]] /* roo.irRadExc.F[6,6] PARAM */))),1e-10);
    if(!tmp63)
    {
      tmp65 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[524]] /* roo.irRadExc.F[6,1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[525]] /* roo.irRadExc.F[6,2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[526]] /* roo.irRadExc.F[6,3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[527]] /* roo.irRadExc.F[6,4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[528]] /* roo.irRadExc.F[6,5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[529]] /* roo.irRadExc.F[6,6] PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta66 = stringAppend(MMC_REFSTRINGLIT(tmp64),tmp65);
      {
        const char* assert_cond = "(abs(1.0 - (roo.irRadExc.F[6,1] + roo.irRadExc.F[6,2] + roo.irRadExc.F[6,3] + roo.irRadExc.F[6,4] + roo.irRadExc.F[6,5] + roo.irRadExc.F[6,6])) < 1e-10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",171,5,173,16,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta66));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",171,5,173,16,1};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta66));
        }
      }
    }
  }
  threadData->lastEquationSolved = 506;
}

/*
equation index: 505
type: ALGORITHM

  assert(abs(1.0 - (roo.irRadExc.F[5,1] + roo.irRadExc.F[5,2] + roo.irRadExc.F[5,3] + roo.irRadExc.F[5,4] + roo.irRadExc.F[5,5] + roo.irRadExc.F[5,6])) < 1e-10, "Program error: Sum 1 of view factors is " + String(roo.irRadExc.F[5,1] + roo.irRadExc.F[5,2] + roo.irRadExc.F[5,3] + roo.irRadExc.F[5,4] + roo.irRadExc.F[5,5] + roo.irRadExc.F[5,6], 6, 0, true));
*/
void tmp_one_port_eqFunction_505(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,505};
  modelica_boolean tmp68;
  static const MMC_DEFSTRINGLIT(tmp69,40,"Program error: Sum 1 of view factors is ");
  modelica_string tmp70;
  modelica_metatype tmpMeta71;
  static int tmp72 = 0;
  {
    tmp68 = Less(fabs(1.0 - ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[518]] /* roo.irRadExc.F[5,1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[519]] /* roo.irRadExc.F[5,2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[520]] /* roo.irRadExc.F[5,3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[521]] /* roo.irRadExc.F[5,4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[522]] /* roo.irRadExc.F[5,5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[523]] /* roo.irRadExc.F[5,6] PARAM */))),1e-10);
    if(!tmp68)
    {
      tmp70 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[518]] /* roo.irRadExc.F[5,1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[519]] /* roo.irRadExc.F[5,2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[520]] /* roo.irRadExc.F[5,3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[521]] /* roo.irRadExc.F[5,4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[522]] /* roo.irRadExc.F[5,5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[523]] /* roo.irRadExc.F[5,6] PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta71 = stringAppend(MMC_REFSTRINGLIT(tmp69),tmp70);
      {
        const char* assert_cond = "(abs(1.0 - (roo.irRadExc.F[5,1] + roo.irRadExc.F[5,2] + roo.irRadExc.F[5,3] + roo.irRadExc.F[5,4] + roo.irRadExc.F[5,5] + roo.irRadExc.F[5,6])) < 1e-10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",171,5,173,16,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta71));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",171,5,173,16,1};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta71));
        }
      }
    }
  }
  threadData->lastEquationSolved = 505;
}

/*
equation index: 504
type: ALGORITHM

  assert(abs(1.0 - (roo.irRadExc.F[4,1] + roo.irRadExc.F[4,2] + roo.irRadExc.F[4,3] + roo.irRadExc.F[4,4] + roo.irRadExc.F[4,5] + roo.irRadExc.F[4,6])) < 1e-10, "Program error: Sum 1 of view factors is " + String(roo.irRadExc.F[4,1] + roo.irRadExc.F[4,2] + roo.irRadExc.F[4,3] + roo.irRadExc.F[4,4] + roo.irRadExc.F[4,5] + roo.irRadExc.F[4,6], 6, 0, true));
*/
void tmp_one_port_eqFunction_504(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,504};
  modelica_boolean tmp73;
  static const MMC_DEFSTRINGLIT(tmp74,40,"Program error: Sum 1 of view factors is ");
  modelica_string tmp75;
  modelica_metatype tmpMeta76;
  static int tmp77 = 0;
  {
    tmp73 = Less(fabs(1.0 - ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[512]] /* roo.irRadExc.F[4,1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[513]] /* roo.irRadExc.F[4,2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[514]] /* roo.irRadExc.F[4,3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[515]] /* roo.irRadExc.F[4,4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[516]] /* roo.irRadExc.F[4,5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[517]] /* roo.irRadExc.F[4,6] PARAM */))),1e-10);
    if(!tmp73)
    {
      tmp75 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[512]] /* roo.irRadExc.F[4,1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[513]] /* roo.irRadExc.F[4,2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[514]] /* roo.irRadExc.F[4,3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[515]] /* roo.irRadExc.F[4,4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[516]] /* roo.irRadExc.F[4,5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[517]] /* roo.irRadExc.F[4,6] PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta76 = stringAppend(MMC_REFSTRINGLIT(tmp74),tmp75);
      {
        const char* assert_cond = "(abs(1.0 - (roo.irRadExc.F[4,1] + roo.irRadExc.F[4,2] + roo.irRadExc.F[4,3] + roo.irRadExc.F[4,4] + roo.irRadExc.F[4,5] + roo.irRadExc.F[4,6])) < 1e-10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",171,5,173,16,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta76));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",171,5,173,16,1};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta76));
        }
      }
    }
  }
  threadData->lastEquationSolved = 504;
}

/*
equation index: 503
type: ALGORITHM

  assert(abs(1.0 - (roo.irRadExc.F[3,1] + roo.irRadExc.F[3,2] + roo.irRadExc.F[3,3] + roo.irRadExc.F[3,4] + roo.irRadExc.F[3,5] + roo.irRadExc.F[3,6])) < 1e-10, "Program error: Sum 1 of view factors is " + String(roo.irRadExc.F[3,1] + roo.irRadExc.F[3,2] + roo.irRadExc.F[3,3] + roo.irRadExc.F[3,4] + roo.irRadExc.F[3,5] + roo.irRadExc.F[3,6], 6, 0, true));
*/
void tmp_one_port_eqFunction_503(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,503};
  modelica_boolean tmp78;
  static const MMC_DEFSTRINGLIT(tmp79,40,"Program error: Sum 1 of view factors is ");
  modelica_string tmp80;
  modelica_metatype tmpMeta81;
  static int tmp82 = 0;
  {
    tmp78 = Less(fabs(1.0 - ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[506]] /* roo.irRadExc.F[3,1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[507]] /* roo.irRadExc.F[3,2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[508]] /* roo.irRadExc.F[3,3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[509]] /* roo.irRadExc.F[3,4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[510]] /* roo.irRadExc.F[3,5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[511]] /* roo.irRadExc.F[3,6] PARAM */))),1e-10);
    if(!tmp78)
    {
      tmp80 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[506]] /* roo.irRadExc.F[3,1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[507]] /* roo.irRadExc.F[3,2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[508]] /* roo.irRadExc.F[3,3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[509]] /* roo.irRadExc.F[3,4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[510]] /* roo.irRadExc.F[3,5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[511]] /* roo.irRadExc.F[3,6] PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta81 = stringAppend(MMC_REFSTRINGLIT(tmp79),tmp80);
      {
        const char* assert_cond = "(abs(1.0 - (roo.irRadExc.F[3,1] + roo.irRadExc.F[3,2] + roo.irRadExc.F[3,3] + roo.irRadExc.F[3,4] + roo.irRadExc.F[3,5] + roo.irRadExc.F[3,6])) < 1e-10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",171,5,173,16,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta81));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",171,5,173,16,1};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta81));
        }
      }
    }
  }
  threadData->lastEquationSolved = 503;
}

/*
equation index: 502
type: ALGORITHM

  assert(abs(1.0 - (roo.irRadExc.F[2,1] + roo.irRadExc.F[2,2] + roo.irRadExc.F[2,3] + roo.irRadExc.F[2,4] + roo.irRadExc.F[2,5] + roo.irRadExc.F[2,6])) < 1e-10, "Program error: Sum 1 of view factors is " + String(roo.irRadExc.F[2,1] + roo.irRadExc.F[2,2] + roo.irRadExc.F[2,3] + roo.irRadExc.F[2,4] + roo.irRadExc.F[2,5] + roo.irRadExc.F[2,6], 6, 0, true));
*/
void tmp_one_port_eqFunction_502(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,502};
  modelica_boolean tmp83;
  static const MMC_DEFSTRINGLIT(tmp84,40,"Program error: Sum 1 of view factors is ");
  modelica_string tmp85;
  modelica_metatype tmpMeta86;
  static int tmp87 = 0;
  {
    tmp83 = Less(fabs(1.0 - ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[500]] /* roo.irRadExc.F[2,1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[501]] /* roo.irRadExc.F[2,2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[502]] /* roo.irRadExc.F[2,3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[503]] /* roo.irRadExc.F[2,4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[504]] /* roo.irRadExc.F[2,5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[505]] /* roo.irRadExc.F[2,6] PARAM */))),1e-10);
    if(!tmp83)
    {
      tmp85 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[500]] /* roo.irRadExc.F[2,1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[501]] /* roo.irRadExc.F[2,2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[502]] /* roo.irRadExc.F[2,3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[503]] /* roo.irRadExc.F[2,4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[504]] /* roo.irRadExc.F[2,5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[505]] /* roo.irRadExc.F[2,6] PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta86 = stringAppend(MMC_REFSTRINGLIT(tmp84),tmp85);
      {
        const char* assert_cond = "(abs(1.0 - (roo.irRadExc.F[2,1] + roo.irRadExc.F[2,2] + roo.irRadExc.F[2,3] + roo.irRadExc.F[2,4] + roo.irRadExc.F[2,5] + roo.irRadExc.F[2,6])) < 1e-10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",171,5,173,16,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta86));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",171,5,173,16,1};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta86));
        }
      }
    }
  }
  threadData->lastEquationSolved = 502;
}

/*
equation index: 501
type: ALGORITHM

  assert(abs(1.0 - (roo.irRadExc.F[1,1] + roo.irRadExc.F[1,2] + roo.irRadExc.F[1,3] + roo.irRadExc.F[1,4] + roo.irRadExc.F[1,5] + roo.irRadExc.F[1,6])) < 1e-10, "Program error: Sum 1 of view factors is " + String(roo.irRadExc.F[1,1] + roo.irRadExc.F[1,2] + roo.irRadExc.F[1,3] + roo.irRadExc.F[1,4] + roo.irRadExc.F[1,5] + roo.irRadExc.F[1,6], 6, 0, true));
*/
void tmp_one_port_eqFunction_501(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,501};
  modelica_boolean tmp88;
  static const MMC_DEFSTRINGLIT(tmp89,40,"Program error: Sum 1 of view factors is ");
  modelica_string tmp90;
  modelica_metatype tmpMeta91;
  static int tmp92 = 0;
  {
    tmp88 = Less(fabs(1.0 - ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[494]] /* roo.irRadExc.F[1,1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[495]] /* roo.irRadExc.F[1,2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[496]] /* roo.irRadExc.F[1,3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[497]] /* roo.irRadExc.F[1,4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[498]] /* roo.irRadExc.F[1,5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[499]] /* roo.irRadExc.F[1,6] PARAM */))),1e-10);
    if(!tmp88)
    {
      tmp90 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[494]] /* roo.irRadExc.F[1,1] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[495]] /* roo.irRadExc.F[1,2] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[496]] /* roo.irRadExc.F[1,3] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[497]] /* roo.irRadExc.F[1,4] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[498]] /* roo.irRadExc.F[1,5] PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[499]] /* roo.irRadExc.F[1,6] PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta91 = stringAppend(MMC_REFSTRINGLIT(tmp89),tmp90);
      {
        const char* assert_cond = "(abs(1.0 - (roo.irRadExc.F[1,1] + roo.irRadExc.F[1,2] + roo.irRadExc.F[1,3] + roo.irRadExc.F[1,4] + roo.irRadExc.F[1,5] + roo.irRadExc.F[1,6])) < 1e-10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",171,5,173,16,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta91));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",171,5,173,16,1};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta91));
        }
      }
    }
  }
  threadData->lastEquationSolved = 501;
}

/*
equation index: 500
type: ALGORITHM

  assert(weaDat.conTim.canRepeatWeatherFile or noEvent(time >= weaDat.conTim.weaDatStaTim), "In TmpOnePort.weaDat.conTim: Insufficient weather data provided for the desired simulation period.
    The simulation time " + String(time, 6, 0, true) + " is less than the start time " + String(weaDat.conTim.weaDatStaTim, 6, 0, true) + " of the weather data file.");
*/
void tmp_one_port_eqFunction_500(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,500};
  modelica_boolean tmp93;
  static const MMC_DEFSTRINGLIT(tmp94,124,"In TmpOnePort.weaDat.conTim: Insufficient weather data provided for the desired simulation period.\r\n    The simulation time ");
  modelica_string tmp95;
  modelica_metatype tmpMeta96;
  static const MMC_DEFSTRINGLIT(tmp97,29," is less than the start time ");
  modelica_metatype tmpMeta98;
  modelica_string tmp99;
  modelica_metatype tmpMeta100;
  static const MMC_DEFSTRINGLIT(tmp101,26," of the weather data file.");
  modelica_metatype tmpMeta102;
  static int tmp103 = 0;
  {
    tmp93 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1295]] /* weaDat.conTim.weaDatStaTim PARAM */));
    if(!((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[280]] /* weaDat.conTim.canRepeatWeatherFile PARAM */) || tmp93))
    {
      tmp95 = modelica_real_to_modelica_string(data->localData[0]->timeValue, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta96 = stringAppend(MMC_REFSTRINGLIT(tmp94),tmp95);
      tmpMeta98 = stringAppend(tmpMeta96,MMC_REFSTRINGLIT(tmp97));
      tmp99 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1295]] /* weaDat.conTim.weaDatStaTim PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta100 = stringAppend(tmpMeta98,tmp99);
      tmpMeta102 = stringAppend(tmpMeta100,MMC_REFSTRINGLIT(tmp101));
      {
        const char* assert_cond = "(weaDat.conTim.canRepeatWeatherFile or noEvent(time >= weaDat.conTim.weaDatStaTim))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/ConvertTime.mo",46,3,50,26,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta102));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/ConvertTime.mo",46,3,50,26,1};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta102));
        }
      }
    }
  }
  threadData->lastEquationSolved = 500;
}

/*
equation index: 499
type: ALGORITHM

  assert(weaDat.conTim.canRepeatWeatherFile or noEvent(time - weaDat.conTim.weaDatEndTim < 1800.0), "In TmpOnePort.weaDat.conTim: Insufficient weather data provided for the desired simulation period.
    The simulation time " + String(time, 6, 0, true) + " exceeds the end time " + String(weaDat.conTim.weaDatEndTim, 6, 0, true) + " of the weather data file.");
*/
void tmp_one_port_eqFunction_499(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,499};
  modelica_boolean tmp104;
  static const MMC_DEFSTRINGLIT(tmp105,124,"In TmpOnePort.weaDat.conTim: Insufficient weather data provided for the desired simulation period.\r\n    The simulation time ");
  modelica_string tmp106;
  modelica_metatype tmpMeta107;
  static const MMC_DEFSTRINGLIT(tmp108,22," exceeds the end time ");
  modelica_metatype tmpMeta109;
  modelica_string tmp110;
  modelica_metatype tmpMeta111;
  static const MMC_DEFSTRINGLIT(tmp112,26," of the weather data file.");
  modelica_metatype tmpMeta113;
  static int tmp114 = 0;
  {
    tmp104 = Less(data->localData[0]->timeValue - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1294]] /* weaDat.conTim.weaDatEndTim PARAM */),1800.0);
    if(!((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[280]] /* weaDat.conTim.canRepeatWeatherFile PARAM */) || tmp104))
    {
      tmp106 = modelica_real_to_modelica_string(data->localData[0]->timeValue, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta107 = stringAppend(MMC_REFSTRINGLIT(tmp105),tmp106);
      tmpMeta109 = stringAppend(tmpMeta107,MMC_REFSTRINGLIT(tmp108));
      tmp110 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1294]] /* weaDat.conTim.weaDatEndTim PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta111 = stringAppend(tmpMeta109,tmp110);
      tmpMeta113 = stringAppend(tmpMeta111,MMC_REFSTRINGLIT(tmp112));
      {
        const char* assert_cond = "(weaDat.conTim.canRepeatWeatherFile or noEvent(time - weaDat.conTim.weaDatEndTim < 1800.0))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/ConvertTime.mo",40,3,44,26,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta113));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/ConvertTime.mo",40,3,44,26,1};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta113));
        }
      }
    }
  }
  threadData->lastEquationSolved = 499;
}

/*
equation index: 498
type: ALGORITHM

  assert(weaDat.conTimMin.canRepeatWeatherFile or noEvent(time >= weaDat.conTimMin.weaDatStaTim), "In TmpOnePort.weaDat.conTimMin: Insufficient weather data provided for the desired simulation period.
    The simulation time " + String(time, 6, 0, true) + " is less than the start time " + String(weaDat.conTimMin.weaDatStaTim, 6, 0, true) + " of the weather data file.");
*/
void tmp_one_port_eqFunction_498(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,498};
  modelica_boolean tmp115;
  static const MMC_DEFSTRINGLIT(tmp116,127,"In TmpOnePort.weaDat.conTimMin: Insufficient weather data provided for the desired simulation period.\r\n    The simulation time ");
  modelica_string tmp117;
  modelica_metatype tmpMeta118;
  static const MMC_DEFSTRINGLIT(tmp119,29," is less than the start time ");
  modelica_metatype tmpMeta120;
  modelica_string tmp121;
  modelica_metatype tmpMeta122;
  static const MMC_DEFSTRINGLIT(tmp123,26," of the weather data file.");
  modelica_metatype tmpMeta124;
  static int tmp125 = 0;
  {
    tmp115 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1298]] /* weaDat.conTimMin.weaDatStaTim PARAM */));
    if(!((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[281]] /* weaDat.conTimMin.canRepeatWeatherFile PARAM */) || tmp115))
    {
      tmp117 = modelica_real_to_modelica_string(data->localData[0]->timeValue, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta118 = stringAppend(MMC_REFSTRINGLIT(tmp116),tmp117);
      tmpMeta120 = stringAppend(tmpMeta118,MMC_REFSTRINGLIT(tmp119));
      tmp121 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1298]] /* weaDat.conTimMin.weaDatStaTim PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta122 = stringAppend(tmpMeta120,tmp121);
      tmpMeta124 = stringAppend(tmpMeta122,MMC_REFSTRINGLIT(tmp123));
      {
        const char* assert_cond = "(weaDat.conTimMin.canRepeatWeatherFile or noEvent(time >= weaDat.conTimMin.weaDatStaTim))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/ConvertTime.mo",46,3,50,26,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta124));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/ConvertTime.mo",46,3,50,26,1};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta124));
        }
      }
    }
  }
  threadData->lastEquationSolved = 498;
}

/*
equation index: 497
type: ALGORITHM

  assert(weaDat.conTimMin.canRepeatWeatherFile or noEvent(time - weaDat.conTimMin.weaDatEndTim < 1800.0), "In TmpOnePort.weaDat.conTimMin: Insufficient weather data provided for the desired simulation period.
    The simulation time " + String(time, 6, 0, true) + " exceeds the end time " + String(weaDat.conTimMin.weaDatEndTim, 6, 0, true) + " of the weather data file.");
*/
void tmp_one_port_eqFunction_497(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,497};
  modelica_boolean tmp126;
  static const MMC_DEFSTRINGLIT(tmp127,127,"In TmpOnePort.weaDat.conTimMin: Insufficient weather data provided for the desired simulation period.\r\n    The simulation time ");
  modelica_string tmp128;
  modelica_metatype tmpMeta129;
  static const MMC_DEFSTRINGLIT(tmp130,22," exceeds the end time ");
  modelica_metatype tmpMeta131;
  modelica_string tmp132;
  modelica_metatype tmpMeta133;
  static const MMC_DEFSTRINGLIT(tmp134,26," of the weather data file.");
  modelica_metatype tmpMeta135;
  static int tmp136 = 0;
  {
    tmp126 = Less(data->localData[0]->timeValue - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1297]] /* weaDat.conTimMin.weaDatEndTim PARAM */),1800.0);
    if(!((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[281]] /* weaDat.conTimMin.canRepeatWeatherFile PARAM */) || tmp126))
    {
      tmp128 = modelica_real_to_modelica_string(data->localData[0]->timeValue, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta129 = stringAppend(MMC_REFSTRINGLIT(tmp127),tmp128);
      tmpMeta131 = stringAppend(tmpMeta129,MMC_REFSTRINGLIT(tmp130));
      tmp132 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1297]] /* weaDat.conTimMin.weaDatEndTim PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta133 = stringAppend(tmpMeta131,tmp132);
      tmpMeta135 = stringAppend(tmpMeta133,MMC_REFSTRINGLIT(tmp134));
      {
        const char* assert_cond = "(weaDat.conTimMin.canRepeatWeatherFile or noEvent(time - weaDat.conTimMin.weaDatEndTim < 1800.0))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/ConvertTime.mo",40,3,44,26,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta135));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/ConvertTime.mo",40,3,44,26,1};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta135));
        }
      }
    }
  }
  threadData->lastEquationSolved = 497;
}

/*
equation index: 496
type: ALGORITHM

  Modelica.Fluid.Utilities.checkBoundary("Air", {"water", "air"}, false, true, sup.X_in_internal, "Boundary_pT");
*/
void tmp_one_port_eqFunction_496(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,496};
  static const MMC_DEFSTRINGLIT(tmp137,3,"Air");
  string_array tmp138;
  static const MMC_DEFSTRINGLIT(tmp139,5,"water");
  static const MMC_DEFSTRINGLIT(tmp140,3,"air");
  real_array tmp141;
  static const MMC_DEFSTRINGLIT(tmp142,11,"Boundary_pT");
  array_alloc_scalar_string_array(&tmp138, 2, (modelica_string)MMC_REFSTRINGLIT(tmp139), (modelica_string)MMC_REFSTRINGLIT(tmp140));
  real_array_create(&tmp141, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[182]] /* sup.X_in_internal[1] variable */)[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  omc_Modelica_Fluid_Utilities_checkBoundary(threadData, MMC_REFSTRINGLIT(tmp137), tmp138, 0 /* false */, 1 /* true */, tmp141, MMC_REFSTRINGLIT(tmp142));
  threadData->lastEquationSolved = 496;
}

/*
equation index: 495
type: ALGORITHM

  Modelica.Fluid.Utilities.checkBoundary("Air", {"water", "air"}, false, true, retSink.X_in_internal, "Boundary_pT");
*/
void tmp_one_port_eqFunction_495(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,495};
  static const MMC_DEFSTRINGLIT(tmp143,3,"Air");
  string_array tmp144;
  static const MMC_DEFSTRINGLIT(tmp145,5,"water");
  static const MMC_DEFSTRINGLIT(tmp146,3,"air");
  real_array tmp147;
  static const MMC_DEFSTRINGLIT(tmp148,11,"Boundary_pT");
  array_alloc_scalar_string_array(&tmp144, 2, (modelica_string)MMC_REFSTRINGLIT(tmp145), (modelica_string)MMC_REFSTRINGLIT(tmp146));
  real_array_create(&tmp147, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[45]] /* retSink.X_in_internal[1] variable */)[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  omc_Modelica_Fluid_Utilities_checkBoundary(threadData, MMC_REFSTRINGLIT(tmp143), tmp144, 0 /* false */, 1 /* true */, tmp147, MMC_REFSTRINGLIT(tmp148));
  threadData->lastEquationSolved = 495;
}

/*
equation index: 494
type: ALGORITHM

  assert(retSink.p_in_internal > 5e4 and retSink.p_in_internal < 1.5e5, "In TmpOnePort.retSink: The parameter value p=" + String(retSink.p_in_internal, 6, 0, true) + " is not within a realistic range for air. This is likely an error.");
*/
void tmp_one_port_eqFunction_494(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,494};
  modelica_boolean tmp149;
  modelica_boolean tmp150;
  static const MMC_DEFSTRINGLIT(tmp151,45,"In TmpOnePort.retSink: The parameter value p=");
  modelica_string tmp152;
  modelica_metatype tmpMeta153;
  static const MMC_DEFSTRINGLIT(tmp154,66," is not within a realistic range for air. This is likely an error.");
  modelica_metatype tmpMeta155;
  static int tmp156 = 0;
  {
    tmp149 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[47]] /* retSink.p_in_internal variable */),5e4);
    tmp150 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[47]] /* retSink.p_in_internal variable */),1.5e5);
    if(!(tmp149 && tmp150))
    {
      tmp152 = modelica_real_to_modelica_string((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[47]] /* retSink.p_in_internal variable */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta153 = stringAppend(MMC_REFSTRINGLIT(tmp151),tmp152);
      tmpMeta155 = stringAppend(tmpMeta153,MMC_REFSTRINGLIT(tmp154));
      {
        const char* assert_cond = "(retSink.p_in_internal > 5e4 and retSink.p_in_internal < 1.5e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/Sources/Boundary_pT.mo",50,7,51,127,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta155));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/Sources/Boundary_pT.mo",50,7,51,127,1};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta155));
        }
      }
    }
  }
  threadData->lastEquationSolved = 494;
}
OMC_DISABLE_OPT
void tmp_one_port_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[482])(DATA*, threadData_t*) = {
    tmp_one_port_eqFunction_1,
    tmp_one_port_eqFunction_2,
    tmp_one_port_eqFunction_3,
    tmp_one_port_eqFunction_4,
    tmp_one_port_eqFunction_5,
    tmp_one_port_eqFunction_6,
    tmp_one_port_eqFunction_7,
    tmp_one_port_eqFunction_8,
    tmp_one_port_eqFunction_9,
    tmp_one_port_eqFunction_10,
    tmp_one_port_eqFunction_11,
    tmp_one_port_eqFunction_12,
    tmp_one_port_eqFunction_13,
    tmp_one_port_eqFunction_14,
    tmp_one_port_eqFunction_15,
    tmp_one_port_eqFunction_16,
    tmp_one_port_eqFunction_17,
    tmp_one_port_eqFunction_18,
    tmp_one_port_eqFunction_19,
    tmp_one_port_eqFunction_20,
    tmp_one_port_eqFunction_21,
    tmp_one_port_eqFunction_22,
    tmp_one_port_eqFunction_23,
    tmp_one_port_eqFunction_24,
    tmp_one_port_eqFunction_25,
    tmp_one_port_eqFunction_26,
    tmp_one_port_eqFunction_27,
    tmp_one_port_eqFunction_28,
    tmp_one_port_eqFunction_29,
    tmp_one_port_eqFunction_30,
    tmp_one_port_eqFunction_31,
    tmp_one_port_eqFunction_32,
    tmp_one_port_eqFunction_33,
    tmp_one_port_eqFunction_34,
    tmp_one_port_eqFunction_35,
    tmp_one_port_eqFunction_36,
    tmp_one_port_eqFunction_37,
    tmp_one_port_eqFunction_38,
    tmp_one_port_eqFunction_39,
    tmp_one_port_eqFunction_40,
    tmp_one_port_eqFunction_41,
    tmp_one_port_eqFunction_42,
    tmp_one_port_eqFunction_527,
    tmp_one_port_eqFunction_44,
    tmp_one_port_eqFunction_45,
    tmp_one_port_eqFunction_46,
    tmp_one_port_eqFunction_47,
    tmp_one_port_eqFunction_48,
    tmp_one_port_eqFunction_49,
    tmp_one_port_eqFunction_50,
    tmp_one_port_eqFunction_51,
    tmp_one_port_eqFunction_52,
    tmp_one_port_eqFunction_53,
    tmp_one_port_eqFunction_54,
    tmp_one_port_eqFunction_55,
    tmp_one_port_eqFunction_56,
    tmp_one_port_eqFunction_57,
    tmp_one_port_eqFunction_58,
    tmp_one_port_eqFunction_59,
    tmp_one_port_eqFunction_60,
    tmp_one_port_eqFunction_61,
    tmp_one_port_eqFunction_62,
    tmp_one_port_eqFunction_63,
    tmp_one_port_eqFunction_64,
    tmp_one_port_eqFunction_65,
    tmp_one_port_eqFunction_66,
    tmp_one_port_eqFunction_67,
    tmp_one_port_eqFunction_68,
    tmp_one_port_eqFunction_69,
    tmp_one_port_eqFunction_70,
    tmp_one_port_eqFunction_71,
    tmp_one_port_eqFunction_72,
    tmp_one_port_eqFunction_73,
    tmp_one_port_eqFunction_74,
    tmp_one_port_eqFunction_75,
    tmp_one_port_eqFunction_76,
    tmp_one_port_eqFunction_77,
    tmp_one_port_eqFunction_78,
    tmp_one_port_eqFunction_79,
    tmp_one_port_eqFunction_80,
    tmp_one_port_eqFunction_81,
    tmp_one_port_eqFunction_82,
    tmp_one_port_eqFunction_83,
    tmp_one_port_eqFunction_84,
    tmp_one_port_eqFunction_85,
    tmp_one_port_eqFunction_86,
    tmp_one_port_eqFunction_87,
    tmp_one_port_eqFunction_88,
    tmp_one_port_eqFunction_89,
    tmp_one_port_eqFunction_90,
    tmp_one_port_eqFunction_91,
    tmp_one_port_eqFunction_92,
    tmp_one_port_eqFunction_93,
    tmp_one_port_eqFunction_94,
    tmp_one_port_eqFunction_95,
    tmp_one_port_eqFunction_96,
    tmp_one_port_eqFunction_97,
    tmp_one_port_eqFunction_98,
    tmp_one_port_eqFunction_99,
    tmp_one_port_eqFunction_100,
    tmp_one_port_eqFunction_101,
    tmp_one_port_eqFunction_102,
    tmp_one_port_eqFunction_103,
    tmp_one_port_eqFunction_104,
    tmp_one_port_eqFunction_105,
    tmp_one_port_eqFunction_106,
    tmp_one_port_eqFunction_107,
    tmp_one_port_eqFunction_108,
    tmp_one_port_eqFunction_109,
    tmp_one_port_eqFunction_110,
    tmp_one_port_eqFunction_111,
    tmp_one_port_eqFunction_112,
    tmp_one_port_eqFunction_113,
    tmp_one_port_eqFunction_114,
    tmp_one_port_eqFunction_115,
    tmp_one_port_eqFunction_116,
    tmp_one_port_eqFunction_117,
    tmp_one_port_eqFunction_118,
    tmp_one_port_eqFunction_119,
    tmp_one_port_eqFunction_120,
    tmp_one_port_eqFunction_121,
    tmp_one_port_eqFunction_122,
    tmp_one_port_eqFunction_123,
    tmp_one_port_eqFunction_124,
    tmp_one_port_eqFunction_125,
    tmp_one_port_eqFunction_126,
    tmp_one_port_eqFunction_127,
    tmp_one_port_eqFunction_128,
    tmp_one_port_eqFunction_129,
    tmp_one_port_eqFunction_130,
    tmp_one_port_eqFunction_131,
    tmp_one_port_eqFunction_132,
    tmp_one_port_eqFunction_133,
    tmp_one_port_eqFunction_134,
    tmp_one_port_eqFunction_135,
    tmp_one_port_eqFunction_136,
    tmp_one_port_eqFunction_137,
    tmp_one_port_eqFunction_138,
    tmp_one_port_eqFunction_139,
    tmp_one_port_eqFunction_140,
    tmp_one_port_eqFunction_141,
    tmp_one_port_eqFunction_142,
    tmp_one_port_eqFunction_143,
    tmp_one_port_eqFunction_144,
    tmp_one_port_eqFunction_145,
    tmp_one_port_eqFunction_146,
    tmp_one_port_eqFunction_609,
    tmp_one_port_eqFunction_610,
    tmp_one_port_eqFunction_611,
    tmp_one_port_eqFunction_614,
    tmp_one_port_eqFunction_615,
    tmp_one_port_eqFunction_618,
    tmp_one_port_eqFunction_619,
    tmp_one_port_eqFunction_622,
    tmp_one_port_eqFunction_623,
    tmp_one_port_eqFunction_626,
    tmp_one_port_eqFunction_627,
    tmp_one_port_eqFunction_630,
    tmp_one_port_eqFunction_631,
    tmp_one_port_eqFunction_634,
    tmp_one_port_eqFunction_635,
    tmp_one_port_eqFunction_636,
    tmp_one_port_eqFunction_637,
    tmp_one_port_eqFunction_638,
    tmp_one_port_eqFunction_639,
    tmp_one_port_eqFunction_640,
    tmp_one_port_eqFunction_641,
    tmp_one_port_eqFunction_168,
    tmp_one_port_eqFunction_169,
    tmp_one_port_eqFunction_170,
    tmp_one_port_eqFunction_171,
    tmp_one_port_eqFunction_172,
    tmp_one_port_eqFunction_173,
    tmp_one_port_eqFunction_174,
    tmp_one_port_eqFunction_175,
    tmp_one_port_eqFunction_176,
    tmp_one_port_eqFunction_177,
    tmp_one_port_eqFunction_178,
    tmp_one_port_eqFunction_179,
    tmp_one_port_eqFunction_180,
    tmp_one_port_eqFunction_181,
    tmp_one_port_eqFunction_574,
    tmp_one_port_eqFunction_183,
    tmp_one_port_eqFunction_184,
    tmp_one_port_eqFunction_565,
    tmp_one_port_eqFunction_186,
    tmp_one_port_eqFunction_187,
    tmp_one_port_eqFunction_567,
    tmp_one_port_eqFunction_189,
    tmp_one_port_eqFunction_190,
    tmp_one_port_eqFunction_569,
    tmp_one_port_eqFunction_192,
    tmp_one_port_eqFunction_193,
    tmp_one_port_eqFunction_566,
    tmp_one_port_eqFunction_195,
    tmp_one_port_eqFunction_196,
    tmp_one_port_eqFunction_606,
    tmp_one_port_eqFunction_568,
    tmp_one_port_eqFunction_223,
    tmp_one_port_eqFunction_605,
    tmp_one_port_eqFunction_612,
    tmp_one_port_eqFunction_613,
    tmp_one_port_eqFunction_600,
    tmp_one_port_eqFunction_632,
    tmp_one_port_eqFunction_633,
    tmp_one_port_eqFunction_604,
    tmp_one_port_eqFunction_624,
    tmp_one_port_eqFunction_625,
    tmp_one_port_eqFunction_601,
    tmp_one_port_eqFunction_628,
    tmp_one_port_eqFunction_629,
    tmp_one_port_eqFunction_603,
    tmp_one_port_eqFunction_616,
    tmp_one_port_eqFunction_617,
    tmp_one_port_eqFunction_602,
    tmp_one_port_eqFunction_620,
    tmp_one_port_eqFunction_621,
    tmp_one_port_eqFunction_242,
    tmp_one_port_eqFunction_243,
    tmp_one_port_eqFunction_244,
    tmp_one_port_eqFunction_245,
    tmp_one_port_eqFunction_246,
    tmp_one_port_eqFunction_247,
    tmp_one_port_eqFunction_248,
    tmp_one_port_eqFunction_249,
    tmp_one_port_eqFunction_250,
    tmp_one_port_eqFunction_251,
    tmp_one_port_eqFunction_252,
    tmp_one_port_eqFunction_253,
    tmp_one_port_eqFunction_254,
    tmp_one_port_eqFunction_528,
    tmp_one_port_eqFunction_256,
    tmp_one_port_eqFunction_257,
    tmp_one_port_eqFunction_258,
    tmp_one_port_eqFunction_259,
    tmp_one_port_eqFunction_260,
    tmp_one_port_eqFunction_261,
    tmp_one_port_eqFunction_262,
    tmp_one_port_eqFunction_263,
    tmp_one_port_eqFunction_264,
    tmp_one_port_eqFunction_265,
    tmp_one_port_eqFunction_266,
    tmp_one_port_eqFunction_267,
    tmp_one_port_eqFunction_268,
    tmp_one_port_eqFunction_269,
    tmp_one_port_eqFunction_270,
    tmp_one_port_eqFunction_271,
    tmp_one_port_eqFunction_272,
    tmp_one_port_eqFunction_273,
    tmp_one_port_eqFunction_274,
    tmp_one_port_eqFunction_275,
    tmp_one_port_eqFunction_276,
    tmp_one_port_eqFunction_277,
    tmp_one_port_eqFunction_278,
    tmp_one_port_eqFunction_279,
    tmp_one_port_eqFunction_280,
    tmp_one_port_eqFunction_281,
    tmp_one_port_eqFunction_282,
    tmp_one_port_eqFunction_283,
    tmp_one_port_eqFunction_284,
    tmp_one_port_eqFunction_285,
    tmp_one_port_eqFunction_286,
    tmp_one_port_eqFunction_287,
    tmp_one_port_eqFunction_515,
    tmp_one_port_eqFunction_289,
    tmp_one_port_eqFunction_529,
    tmp_one_port_eqFunction_291,
    tmp_one_port_eqFunction_292,
    tmp_one_port_eqFunction_293,
    tmp_one_port_eqFunction_294,
    tmp_one_port_eqFunction_295,
    tmp_one_port_eqFunction_296,
    tmp_one_port_eqFunction_297,
    tmp_one_port_eqFunction_298,
    tmp_one_port_eqFunction_299,
    tmp_one_port_eqFunction_300,
    tmp_one_port_eqFunction_301,
    tmp_one_port_eqFunction_302,
    tmp_one_port_eqFunction_572,
    tmp_one_port_eqFunction_304,
    tmp_one_port_eqFunction_305,
    tmp_one_port_eqFunction_570,
    tmp_one_port_eqFunction_573,
    tmp_one_port_eqFunction_308,
    tmp_one_port_eqFunction_309,
    tmp_one_port_eqFunction_607,
    tmp_one_port_eqFunction_311,
    tmp_one_port_eqFunction_312,
    tmp_one_port_eqFunction_571,
    tmp_one_port_eqFunction_314,
    tmp_one_port_eqFunction_315,
    tmp_one_port_eqFunction_316,
    tmp_one_port_eqFunction_317,
    tmp_one_port_eqFunction_318,
    tmp_one_port_eqFunction_319,
    tmp_one_port_eqFunction_320,
    tmp_one_port_eqFunction_321,
    tmp_one_port_eqFunction_322,
    tmp_one_port_eqFunction_323,
    tmp_one_port_eqFunction_324,
    tmp_one_port_eqFunction_325,
    tmp_one_port_eqFunction_326,
    tmp_one_port_eqFunction_327,
    tmp_one_port_eqFunction_650,
    tmp_one_port_eqFunction_656,
    tmp_one_port_eqFunction_330,
    tmp_one_port_eqFunction_732,
    tmp_one_port_eqFunction_733,
    tmp_one_port_eqFunction_735,
    tmp_one_port_eqFunction_737,
    tmp_one_port_eqFunction_658,
    tmp_one_port_eqFunction_659,
    tmp_one_port_eqFunction_337,
    tmp_one_port_eqFunction_664,
    tmp_one_port_eqFunction_665,
    tmp_one_port_eqFunction_340,
    tmp_one_port_eqFunction_341,
    tmp_one_port_eqFunction_668,
    tmp_one_port_eqFunction_343,
    tmp_one_port_eqFunction_670,
    tmp_one_port_eqFunction_736,
    tmp_one_port_eqFunction_738,
    tmp_one_port_eqFunction_734,
    tmp_one_port_eqFunction_729,
    tmp_one_port_eqFunction_730,
    tmp_one_port_eqFunction_728,
    tmp_one_port_eqFunction_727,
    tmp_one_port_eqFunction_726,
    tmp_one_port_eqFunction_725,
    tmp_one_port_eqFunction_724,
    tmp_one_port_eqFunction_723,
    tmp_one_port_eqFunction_722,
    tmp_one_port_eqFunction_721,
    tmp_one_port_eqFunction_720,
    tmp_one_port_eqFunction_718,
    tmp_one_port_eqFunction_719,
    tmp_one_port_eqFunction_717,
    tmp_one_port_eqFunction_710,
    tmp_one_port_eqFunction_711,
    tmp_one_port_eqFunction_364,
    tmp_one_port_eqFunction_714,
    tmp_one_port_eqFunction_706,
    tmp_one_port_eqFunction_707,
    tmp_one_port_eqFunction_368,
    tmp_one_port_eqFunction_704,
    tmp_one_port_eqFunction_705,
    tmp_one_port_eqFunction_700,
    tmp_one_port_eqFunction_701,
    tmp_one_port_eqFunction_373,
    tmp_one_port_eqFunction_699,
    tmp_one_port_eqFunction_698,
    tmp_one_port_eqFunction_697,
    tmp_one_port_eqFunction_696,
    tmp_one_port_eqFunction_695,
    tmp_one_port_eqFunction_694,
    tmp_one_port_eqFunction_693,
    tmp_one_port_eqFunction_678,
    tmp_one_port_eqFunction_679,
    tmp_one_port_eqFunction_383,
    tmp_one_port_eqFunction_674,
    tmp_one_port_eqFunction_675,
    tmp_one_port_eqFunction_671,
    tmp_one_port_eqFunction_672,
    tmp_one_port_eqFunction_676,
    tmp_one_port_eqFunction_389,
    tmp_one_port_eqFunction_716,
    tmp_one_port_eqFunction_391,
    tmp_one_port_eqFunction_399,
    tmp_one_port_eqFunction_400,
    tmp_one_port_eqFunction_401,
    tmp_one_port_eqFunction_402,
    tmp_one_port_eqFunction_403,
    tmp_one_port_eqFunction_404,
    tmp_one_port_eqFunction_405,
    tmp_one_port_eqFunction_406,
    tmp_one_port_eqFunction_407,
    tmp_one_port_eqFunction_646,
    tmp_one_port_eqFunction_647,
    tmp_one_port_eqFunction_410,
    tmp_one_port_eqFunction_411,
    tmp_one_port_eqFunction_642,
    tmp_one_port_eqFunction_643,
    tmp_one_port_eqFunction_414,
    tmp_one_port_eqFunction_415,
    tmp_one_port_eqFunction_524,
    tmp_one_port_eqFunction_525,
    tmp_one_port_eqFunction_418,
    tmp_one_port_eqFunction_519,
    tmp_one_port_eqFunction_530,
    tmp_one_port_eqFunction_421,
    tmp_one_port_eqFunction_422,
    tmp_one_port_eqFunction_521,
    tmp_one_port_eqFunction_522,
    tmp_one_port_eqFunction_425,
    tmp_one_port_eqFunction_518,
    tmp_one_port_eqFunction_531,
    tmp_one_port_eqFunction_428,
    tmp_one_port_eqFunction_429,
    tmp_one_port_eqFunction_648,
    tmp_one_port_eqFunction_649,
    tmp_one_port_eqFunction_432,
    tmp_one_port_eqFunction_433,
    tmp_one_port_eqFunction_644,
    tmp_one_port_eqFunction_645,
    tmp_one_port_eqFunction_436,
    tmp_one_port_eqFunction_437,
    tmp_one_port_eqFunction_523,
    tmp_one_port_eqFunction_526,
    tmp_one_port_eqFunction_440,
    tmp_one_port_eqFunction_441,
    tmp_one_port_eqFunction_442,
    tmp_one_port_eqFunction_443,
    tmp_one_port_eqFunction_444,
    tmp_one_port_eqFunction_445,
    tmp_one_port_eqFunction_446,
    tmp_one_port_eqFunction_447,
    tmp_one_port_eqFunction_448,
    tmp_one_port_eqFunction_449,
    tmp_one_port_eqFunction_450,
    tmp_one_port_eqFunction_451,
    tmp_one_port_eqFunction_452,
    tmp_one_port_eqFunction_453,
    tmp_one_port_eqFunction_454,
    tmp_one_port_eqFunction_455,
    tmp_one_port_eqFunction_456,
    tmp_one_port_eqFunction_457,
    tmp_one_port_eqFunction_458,
    tmp_one_port_eqFunction_459,
    tmp_one_port_eqFunction_460,
    tmp_one_port_eqFunction_461,
    tmp_one_port_eqFunction_462,
    tmp_one_port_eqFunction_463,
    tmp_one_port_eqFunction_464,
    tmp_one_port_eqFunction_465,
    tmp_one_port_eqFunction_466,
    tmp_one_port_eqFunction_467,
    tmp_one_port_eqFunction_468,
    tmp_one_port_eqFunction_469,
    tmp_one_port_eqFunction_470,
    tmp_one_port_eqFunction_471,
    tmp_one_port_eqFunction_472,
    tmp_one_port_eqFunction_473,
    tmp_one_port_eqFunction_474,
    tmp_one_port_eqFunction_475,
    tmp_one_port_eqFunction_476,
    tmp_one_port_eqFunction_477,
    tmp_one_port_eqFunction_478,
    tmp_one_port_eqFunction_479,
    tmp_one_port_eqFunction_480,
    tmp_one_port_eqFunction_481,
    tmp_one_port_eqFunction_482,
    tmp_one_port_eqFunction_483,
    tmp_one_port_eqFunction_484,
    tmp_one_port_eqFunction_485,
    tmp_one_port_eqFunction_486,
    tmp_one_port_eqFunction_487,
    tmp_one_port_eqFunction_488,
    tmp_one_port_eqFunction_489,
    tmp_one_port_eqFunction_490,
    tmp_one_port_eqFunction_491,
    tmp_one_port_eqFunction_492,
    tmp_one_port_eqFunction_493,
    tmp_one_port_eqFunction_513,
    tmp_one_port_eqFunction_512,
    tmp_one_port_eqFunction_511,
    tmp_one_port_eqFunction_510,
    tmp_one_port_eqFunction_509,
    tmp_one_port_eqFunction_508,
    tmp_one_port_eqFunction_507,
    tmp_one_port_eqFunction_506,
    tmp_one_port_eqFunction_505,
    tmp_one_port_eqFunction_504,
    tmp_one_port_eqFunction_503,
    tmp_one_port_eqFunction_502,
    tmp_one_port_eqFunction_501,
    tmp_one_port_eqFunction_500,
    tmp_one_port_eqFunction_499,
    tmp_one_port_eqFunction_498,
    tmp_one_port_eqFunction_497,
    tmp_one_port_eqFunction_496,
    tmp_one_port_eqFunction_495,
    tmp_one_port_eqFunction_494
  };
  
  for (int id = 0; id < 482; id++) {
    eqFunctions[id](data, threadData);
  }
}

int tmp_one_port_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  data->simulationInfo->discreteCall = 1;
  tmp_one_port_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  return 0;
}

/* No tmp_one_port_functionInitialEquations_lambda0 function */

int tmp_one_port_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
{
  const int *equationIndexes = NULL;
  double res = 0.0;

  res = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[242]] /* roo.air.fluInt.p_start PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[70]] /* roo.air.fluInt.p DUMMY_STATE */);
  if(fabs(res) > 1e-5)
  {
    errorStreamPrint(OMC_LOG_INIT, 0, "The initialization problem is inconsistent due to the following equation: 0 != %g = roo.air.fluInt.p_start - roo.air.fluInt.p", res);
    return 1;
  }
  
  return 0;
}


#if defined(__cplusplus)
}
#endif
