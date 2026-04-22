#include "s000_baseline_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 3099
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConPar[1].boundaryCondition = dc.roo.datConPar[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3099(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3099};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[225]] /* dc.roo.irRadExc.datConPar[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[186]] /* dc.roo.datConPar[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 3099;
}

/*
equation index: 3102
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConPar[1].T_b_start = dc.roo.datConPar[1].T_b_start
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3102(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3102};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[829]] /* dc.roo.irRadExc.datConPar[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[593]] /* dc.roo.datConPar[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 3102;
}

/*
equation index: 3103
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConPar[1].T_a_start = dc.roo.datConPar[1].T_a_start
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3103(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3103};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[828]] /* dc.roo.irRadExc.datConPar[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[592]] /* dc.roo.datConPar[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 3103;
}

/*
equation index: 3107
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConPar[1].azi = dc.roo.datConPar[1].azi
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3107(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3107};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[830]] /* dc.roo.irRadExc.datConPar[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[594]] /* dc.roo.datConPar[1].azi PARAM */);
  threadData->lastEquationSolved = 3107;
}

/*
equation index: 3109
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConPar[1].layers.roughness_a = dc.roo.datConPar[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3109(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3109};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[230]] /* dc.roo.irRadExc.datConPar[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[191]] /* dc.roo.datConPar[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 3109;
}

/*
equation index: 3110
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConPar[1].layers.absSol_b = dc.roo.datConPar[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3110(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3110};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[835]] /* dc.roo.irRadExc.datConPar[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[599]] /* dc.roo.datConPar[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 3110;
}

/*
equation index: 3111
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConPar[1].layers.absSol_a = dc.roo.datConPar[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3111(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3111};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[834]] /* dc.roo.irRadExc.datConPar[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[598]] /* dc.roo.datConPar[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 3111;
}

/*
equation index: 3114
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConPar[1].layers.material[1].LHea = dc.roo.datConPar[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3114(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3114};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[836]] /* dc.roo.irRadExc.datConPar[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[600]] /* dc.roo.datConPar[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 3114;
}

/*
equation index: 3117
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConPar[1].layers.material[1].nStaReal = dc.roo.datConPar[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3117(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3117};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[843]] /* dc.roo.irRadExc.datConPar[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[607]] /* dc.roo.datConPar[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 3117;
}

/*
equation index: 3118
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConPar[1].layers.material[1].piMat = dc.roo.datConPar[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3118(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3118};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[844]] /* dc.roo.irRadExc.datConPar[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[608]] /* dc.roo.datConPar[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 3118;
}

/*
equation index: 3119
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConPar[1].layers.material[1].piRef = dc.roo.datConPar[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3119(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3119};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[845]] /* dc.roo.irRadExc.datConPar[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[609]] /* dc.roo.datConPar[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 3119;
}

/*
equation index: 3122
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConPar[1].layers.material[1].nStaRef = dc.roo.datConPar[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3122(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3122};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[227]] /* dc.roo.irRadExc.datConPar[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[188]] /* dc.roo.datConPar[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 3122;
}

/*
equation index: 3123
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConPar[1].layers.material[1].R = dc.roo.datConPar[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3123(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3123};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[837]] /* dc.roo.irRadExc.datConPar[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[601]] /* dc.roo.datConPar[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 3123;
}

/*
equation index: 3124
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConPar[1].layers.material[1].d = dc.roo.datConPar[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3124(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3124};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[841]] /* dc.roo.irRadExc.datConPar[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[605]] /* dc.roo.datConPar[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 3124;
}

/*
equation index: 3125
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConPar[1].layers.material[1].c = dc.roo.datConPar[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3125(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3125};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[840]] /* dc.roo.irRadExc.datConPar[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[604]] /* dc.roo.datConPar[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 3125;
}

/*
equation index: 3126
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConPar[1].layers.material[1].k = dc.roo.datConPar[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3126(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3126};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[842]] /* dc.roo.irRadExc.datConPar[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[606]] /* dc.roo.datConPar[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 3126;
}

/*
equation index: 3127
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConPar[1].layers.material[1].x = dc.roo.datConPar[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3127(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3127};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[846]] /* dc.roo.irRadExc.datConPar[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[610]] /* dc.roo.datConPar[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 3127;
}

/*
equation index: 3129
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConPar[1].name = dc.roo.datConPar[1].name
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3129(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3129};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[62]] /* dc.roo.irRadExc.datConPar[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[58]] /* dc.roo.datConPar[1].name PARAM */);
  threadData->lastEquationSolved = 3129;
}

/*
equation index: 3133
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].glaSys.absSolFra = dc.roo.datConExtWin[1].glaSys.absSolFra
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3133(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3133};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[775]] /* dc.roo.irRadExc.datConExtWin[1].glaSys.absSolFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[539]] /* dc.roo.datConExtWin[1].glaSys.absSolFra PARAM */);
  threadData->lastEquationSolved = 3133;
}

/*
equation index: 3134
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].glaSys.UFra = dc.roo.datConExtWin[1].glaSys.UFra
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3134(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3134};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[773]] /* dc.roo.irRadExc.datConExtWin[1].glaSys.UFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[537]] /* dc.roo.datConExtWin[1].glaSys.UFra PARAM */);
  threadData->lastEquationSolved = 3134;
}

/*
equation index: 3135
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].glaSys.shade.tauIR_b = dc.roo.datConExtWin[1].glaSys.shade.tauIR_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3135(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3135};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[798]] /* dc.roo.irRadExc.datConExtWin[1].glaSys.shade.tauIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[562]] /* dc.roo.datConExtWin[1].glaSys.shade.tauIR_b PARAM */);
  threadData->lastEquationSolved = 3135;
}

/*
equation index: 3136
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].glaSys.shade.tauIR_a = dc.roo.datConExtWin[1].glaSys.shade.tauIR_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3136(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3136};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[797]] /* dc.roo.irRadExc.datConExtWin[1].glaSys.shade.tauIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[561]] /* dc.roo.datConExtWin[1].glaSys.shade.tauIR_a PARAM */);
  threadData->lastEquationSolved = 3136;
}

/*
equation index: 3137
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].glaSys.shade.absIR_b = dc.roo.datConExtWin[1].glaSys.shade.absIR_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3137(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3137};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[794]] /* dc.roo.irRadExc.datConExtWin[1].glaSys.shade.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[558]] /* dc.roo.datConExtWin[1].glaSys.shade.absIR_b PARAM */);
  threadData->lastEquationSolved = 3137;
}

/*
equation index: 3138
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].glaSys.shade.rhoSol_b = dc.roo.datConExtWin[1].glaSys.shade.rhoSol_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3138(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3138};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[796]] /* dc.roo.irRadExc.datConExtWin[1].glaSys.shade.rhoSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[560]] /* dc.roo.datConExtWin[1].glaSys.shade.rhoSol_b PARAM */);
  threadData->lastEquationSolved = 3138;
}

/*
equation index: 3139
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].glaSys.shade.rhoSol_a = dc.roo.datConExtWin[1].glaSys.shade.rhoSol_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3139(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3139};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[795]] /* dc.roo.irRadExc.datConExtWin[1].glaSys.shade.rhoSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[559]] /* dc.roo.datConExtWin[1].glaSys.shade.rhoSol_a PARAM */);
  threadData->lastEquationSolved = 3139;
}

/*
equation index: 3140
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].glaSys.shade.tauSol_b = dc.roo.datConExtWin[1].glaSys.shade.tauSol_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3140(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3140};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[800]] /* dc.roo.irRadExc.datConExtWin[1].glaSys.shade.tauSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[564]] /* dc.roo.datConExtWin[1].glaSys.shade.tauSol_b PARAM */);
  threadData->lastEquationSolved = 3140;
}

/*
equation index: 3141
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].glaSys.shade.tauSol_a = dc.roo.datConExtWin[1].glaSys.shade.tauSol_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3141(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3141};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[799]] /* dc.roo.irRadExc.datConExtWin[1].glaSys.shade.tauSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[563]] /* dc.roo.datConExtWin[1].glaSys.shade.tauSol_a PARAM */);
  threadData->lastEquationSolved = 3141;
}

/*
equation index: 3142
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].glaSys.gas[1].P0 = dc.roo.datConExtWin[1].glaSys.gas[1].P0
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3142(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3142};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[777]] /* dc.roo.irRadExc.datConExtWin[1].glaSys.gas[1].P0 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[541]] /* dc.roo.datConExtWin[1].glaSys.gas[1].P0 PARAM */);
  threadData->lastEquationSolved = 3142;
}

/*
equation index: 3143
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].glaSys.gas[1].MM = dc.roo.datConExtWin[1].glaSys.gas[1].MM
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3143(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3143};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[776]] /* dc.roo.irRadExc.datConExtWin[1].glaSys.gas[1].MM PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[540]] /* dc.roo.datConExtWin[1].glaSys.gas[1].MM PARAM */);
  threadData->lastEquationSolved = 3143;
}

/*
equation index: 3144
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].glaSys.gas[1].b_c = dc.roo.datConExtWin[1].glaSys.gas[1].b_c
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3144(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3144};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[781]] /* dc.roo.irRadExc.datConExtWin[1].glaSys.gas[1].b_c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[545]] /* dc.roo.datConExtWin[1].glaSys.gas[1].b_c PARAM */);
  threadData->lastEquationSolved = 3144;
}

/*
equation index: 3145
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].glaSys.gas[1].a_c = dc.roo.datConExtWin[1].glaSys.gas[1].a_c
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3145(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3145};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[778]] /* dc.roo.irRadExc.datConExtWin[1].glaSys.gas[1].a_c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[542]] /* dc.roo.datConExtWin[1].glaSys.gas[1].a_c PARAM */);
  threadData->lastEquationSolved = 3145;
}

/*
equation index: 3146
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].glaSys.gas[1].b_mu = dc.roo.datConExtWin[1].glaSys.gas[1].b_mu
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3146(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3146};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[783]] /* dc.roo.irRadExc.datConExtWin[1].glaSys.gas[1].b_mu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[547]] /* dc.roo.datConExtWin[1].glaSys.gas[1].b_mu PARAM */);
  threadData->lastEquationSolved = 3146;
}

/*
equation index: 3147
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].glaSys.gas[1].a_mu = dc.roo.datConExtWin[1].glaSys.gas[1].a_mu
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3147(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3147};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[780]] /* dc.roo.irRadExc.datConExtWin[1].glaSys.gas[1].a_mu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[544]] /* dc.roo.datConExtWin[1].glaSys.gas[1].a_mu PARAM */);
  threadData->lastEquationSolved = 3147;
}

/*
equation index: 3148
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].glaSys.gas[1].b_k = dc.roo.datConExtWin[1].glaSys.gas[1].b_k
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3148(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3148};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[782]] /* dc.roo.irRadExc.datConExtWin[1].glaSys.gas[1].b_k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[546]] /* dc.roo.datConExtWin[1].glaSys.gas[1].b_k PARAM */);
  threadData->lastEquationSolved = 3148;
}

/*
equation index: 3149
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].glaSys.gas[1].a_k = dc.roo.datConExtWin[1].glaSys.gas[1].a_k
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3149(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3149};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[779]] /* dc.roo.irRadExc.datConExtWin[1].glaSys.gas[1].a_k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[543]] /* dc.roo.datConExtWin[1].glaSys.gas[1].a_k PARAM */);
  threadData->lastEquationSolved = 3149;
}

/*
equation index: 3150
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].glaSys.gas[1].x = dc.roo.datConExtWin[1].glaSys.gas[1].x
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3150(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3150};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[784]] /* dc.roo.irRadExc.datConExtWin[1].glaSys.gas[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[548]] /* dc.roo.datConExtWin[1].glaSys.gas[1].x PARAM */);
  threadData->lastEquationSolved = 3150;
}

/*
equation index: 3151
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].glaSys.glass[1].absIR_a = dc.roo.datConExtWin[1].glaSys.glass[1].absIR_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3151(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3151};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[785]] /* dc.roo.irRadExc.datConExtWin[1].glaSys.glass[1].absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[549]] /* dc.roo.datConExtWin[1].glaSys.glass[1].absIR_a PARAM */);
  threadData->lastEquationSolved = 3151;
}

/*
equation index: 3152
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].glaSys.glass[1].tauIR = dc.roo.datConExtWin[1].glaSys.glass[1].tauIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3152(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3152};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[790]] /* dc.roo.irRadExc.datConExtWin[1].glaSys.glass[1].tauIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[554]] /* dc.roo.datConExtWin[1].glaSys.glass[1].tauIR PARAM */);
  threadData->lastEquationSolved = 3152;
}

/*
equation index: 3153
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].glaSys.glass[1].rhoSol_b[1] = dc.roo.datConExtWin[1].glaSys.glass[1].rhoSol_b[1]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3153(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3153};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[789]] /* dc.roo.irRadExc.datConExtWin[1].glaSys.glass[1].rhoSol_b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[553]] /* dc.roo.datConExtWin[1].glaSys.glass[1].rhoSol_b[1] PARAM */);
  threadData->lastEquationSolved = 3153;
}

/*
equation index: 3154
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].glaSys.glass[1].rhoSol_a[1] = dc.roo.datConExtWin[1].glaSys.glass[1].rhoSol_a[1]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3154(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3154};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[788]] /* dc.roo.irRadExc.datConExtWin[1].glaSys.glass[1].rhoSol_a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[552]] /* dc.roo.datConExtWin[1].glaSys.glass[1].rhoSol_a[1] PARAM */);
  threadData->lastEquationSolved = 3154;
}

/*
equation index: 3155
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].glaSys.glass[1].tauSol[1] = dc.roo.datConExtWin[1].glaSys.glass[1].tauSol[1]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3155(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3155};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[791]] /* dc.roo.irRadExc.datConExtWin[1].glaSys.glass[1].tauSol[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[555]] /* dc.roo.datConExtWin[1].glaSys.glass[1].tauSol[1] PARAM */);
  threadData->lastEquationSolved = 3155;
}

/*
equation index: 3156
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].glaSys.glass[1].k = dc.roo.datConExtWin[1].glaSys.glass[1].k
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3156(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3156};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[787]] /* dc.roo.irRadExc.datConExtWin[1].glaSys.glass[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[551]] /* dc.roo.datConExtWin[1].glaSys.glass[1].k PARAM */);
  threadData->lastEquationSolved = 3156;
}

/*
equation index: 3157
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].glaSys.glass[1].x = dc.roo.datConExtWin[1].glaSys.glass[1].x
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3157(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3157};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[792]] /* dc.roo.irRadExc.datConExtWin[1].glaSys.glass[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[556]] /* dc.roo.datConExtWin[1].glaSys.glass[1].x PARAM */);
  threadData->lastEquationSolved = 3157;
}

/*
equation index: 3160
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].AGla = dc.roo.datConExtWin[1].AGla
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3160(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3160};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[766]] /* dc.roo.irRadExc.datConExtWin[1].AGla PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[530]] /* dc.roo.datConExtWin[1].AGla PARAM */);
  threadData->lastEquationSolved = 3160;
}

/*
equation index: 3161
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].AFra = dc.roo.datConExtWin[1].AFra
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3161(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3161};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[765]] /* dc.roo.irRadExc.datConExtWin[1].AFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[529]] /* dc.roo.datConExtWin[1].AFra PARAM */);
  threadData->lastEquationSolved = 3161;
}

/*
equation index: 3163
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].sidFin.gap = dc.roo.datConExtWin[1].sidFin.gap
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3163(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3163};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[823]] /* dc.roo.irRadExc.datConExtWin[1].sidFin.gap PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[587]] /* dc.roo.datConExtWin[1].sidFin.gap PARAM */);
  threadData->lastEquationSolved = 3163;
}

/*
equation index: 3165
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].sidFin.h = dc.roo.datConExtWin[1].sidFin.h
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3165(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3165};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[824]] /* dc.roo.irRadExc.datConExtWin[1].sidFin.h PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[588]] /* dc.roo.datConExtWin[1].sidFin.h PARAM */);
  threadData->lastEquationSolved = 3165;
}

/*
equation index: 3167
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].ove.gap = dc.roo.datConExtWin[1].ove.gap
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3167(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3167};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[819]] /* dc.roo.irRadExc.datConExtWin[1].ove.gap PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[583]] /* dc.roo.datConExtWin[1].ove.gap PARAM */);
  threadData->lastEquationSolved = 3167;
}

/*
equation index: 3169
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].ove.wR = dc.roo.datConExtWin[1].ove.wR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3169(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3169};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[821]] /* dc.roo.irRadExc.datConExtWin[1].ove.wR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[585]] /* dc.roo.datConExtWin[1].ove.wR PARAM */);
  threadData->lastEquationSolved = 3169;
}

/*
equation index: 3170
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].ove.wL = dc.roo.datConExtWin[1].ove.wL
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3170(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3170};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[820]] /* dc.roo.irRadExc.datConExtWin[1].ove.wL PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[584]] /* dc.roo.datConExtWin[1].ove.wL PARAM */);
  threadData->lastEquationSolved = 3170;
}

/*
equation index: 3171
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].wWin = dc.roo.datConExtWin[1].wWin
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3171(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3171};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[826]] /* dc.roo.irRadExc.datConExtWin[1].wWin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[590]] /* dc.roo.datConExtWin[1].wWin PARAM */);
  threadData->lastEquationSolved = 3171;
}

/*
equation index: 3172
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].hWin = dc.roo.datConExtWin[1].hWin
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3172(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3172};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[801]] /* dc.roo.irRadExc.datConExtWin[1].hWin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[565]] /* dc.roo.datConExtWin[1].hWin PARAM */);
  threadData->lastEquationSolved = 3172;
}

/*
equation index: 3173
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].A = dc.roo.datConExtWin[1].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3173(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3173};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[764]] /* dc.roo.irRadExc.datConExtWin[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[528]] /* dc.roo.datConExtWin[1].A PARAM */);
  threadData->lastEquationSolved = 3173;
}

/*
equation index: 3174
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].boundaryCondition = dc.roo.datConExtWin[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3174(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3174};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[219]] /* dc.roo.irRadExc.datConExtWin[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[180]] /* dc.roo.datConExtWin[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 3174;
}

/*
equation index: 3177
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].T_b_start = dc.roo.datConExtWin[1].T_b_start
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3177(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3177};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[770]] /* dc.roo.irRadExc.datConExtWin[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[534]] /* dc.roo.datConExtWin[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 3177;
}

/*
equation index: 3178
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].T_a_start = dc.roo.datConExtWin[1].T_a_start
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3178(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3178};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[769]] /* dc.roo.irRadExc.datConExtWin[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[533]] /* dc.roo.datConExtWin[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 3178;
}

/*
equation index: 3182
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].azi = dc.roo.datConExtWin[1].azi
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3182(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3182};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[771]] /* dc.roo.irRadExc.datConExtWin[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[535]] /* dc.roo.datConExtWin[1].azi PARAM */);
  threadData->lastEquationSolved = 3182;
}

/*
equation index: 3184
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].layers.roughness_a = dc.roo.datConExtWin[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3184(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3184};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[224]] /* dc.roo.irRadExc.datConExtWin[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[185]] /* dc.roo.datConExtWin[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 3184;
}

/*
equation index: 3185
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].layers.absSol_b = dc.roo.datConExtWin[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3185(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3185};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[806]] /* dc.roo.irRadExc.datConExtWin[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[570]] /* dc.roo.datConExtWin[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 3185;
}

/*
equation index: 3186
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].layers.absSol_a = dc.roo.datConExtWin[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3186(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3186};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[805]] /* dc.roo.irRadExc.datConExtWin[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[569]] /* dc.roo.datConExtWin[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 3186;
}

/*
equation index: 3187
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].layers.absIR_a = dc.roo.datConExtWin[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3187(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3187};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[803]] /* dc.roo.irRadExc.datConExtWin[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[567]] /* dc.roo.datConExtWin[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 3187;
}

/*
equation index: 3190
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].layers.material[1].LHea = dc.roo.datConExtWin[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3190(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3190};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[807]] /* dc.roo.irRadExc.datConExtWin[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[571]] /* dc.roo.datConExtWin[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 3190;
}

/*
equation index: 3193
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].layers.material[1].nStaReal = dc.roo.datConExtWin[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3193(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3193};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[814]] /* dc.roo.irRadExc.datConExtWin[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[578]] /* dc.roo.datConExtWin[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 3193;
}

/*
equation index: 3194
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].layers.material[1].piMat = dc.roo.datConExtWin[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3194(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3194};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[815]] /* dc.roo.irRadExc.datConExtWin[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[579]] /* dc.roo.datConExtWin[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 3194;
}

/*
equation index: 3195
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].layers.material[1].piRef = dc.roo.datConExtWin[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3195(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3195};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[816]] /* dc.roo.irRadExc.datConExtWin[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[580]] /* dc.roo.datConExtWin[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 3195;
}

/*
equation index: 3198
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].layers.material[1].nStaRef = dc.roo.datConExtWin[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3198(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3198};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[221]] /* dc.roo.irRadExc.datConExtWin[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[182]] /* dc.roo.datConExtWin[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 3198;
}

/*
equation index: 3199
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].layers.material[1].R = dc.roo.datConExtWin[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3199(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3199};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[808]] /* dc.roo.irRadExc.datConExtWin[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[572]] /* dc.roo.datConExtWin[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 3199;
}

/*
equation index: 3200
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].layers.material[1].d = dc.roo.datConExtWin[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3200(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3200};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[812]] /* dc.roo.irRadExc.datConExtWin[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[576]] /* dc.roo.datConExtWin[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 3200;
}

/*
equation index: 3201
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].layers.material[1].c = dc.roo.datConExtWin[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3201(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3201};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[811]] /* dc.roo.irRadExc.datConExtWin[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[575]] /* dc.roo.datConExtWin[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 3201;
}

/*
equation index: 3202
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].layers.material[1].k = dc.roo.datConExtWin[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3202(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3202};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[813]] /* dc.roo.irRadExc.datConExtWin[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[577]] /* dc.roo.datConExtWin[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 3202;
}

/*
equation index: 3203
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].layers.material[1].x = dc.roo.datConExtWin[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3203(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3203};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[817]] /* dc.roo.irRadExc.datConExtWin[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[581]] /* dc.roo.datConExtWin[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 3203;
}

/*
equation index: 3205
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].name = dc.roo.datConExtWin[1].name
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3205(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3205};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[61]] /* dc.roo.irRadExc.datConExtWin[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[57]] /* dc.roo.datConExtWin[1].name PARAM */);
  threadData->lastEquationSolved = 3205;
}

/*
equation index: 3206
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExt[1].boundaryCondition = dc.roo.datConExt[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3206(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3206};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[213]] /* dc.roo.irRadExc.datConExt[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[174]] /* dc.roo.datConExt[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 3206;
}

/*
equation index: 3209
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExt[1].T_b_start = dc.roo.datConExt[1].T_b_start
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3209(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3209};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[745]] /* dc.roo.irRadExc.datConExt[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[509]] /* dc.roo.datConExt[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 3209;
}

/*
equation index: 3210
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExt[1].T_a_start = dc.roo.datConExt[1].T_a_start
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3210(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3210};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[744]] /* dc.roo.irRadExc.datConExt[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[508]] /* dc.roo.datConExt[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 3210;
}

/*
equation index: 3214
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExt[1].azi = dc.roo.datConExt[1].azi
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3214(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3214};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[746]] /* dc.roo.irRadExc.datConExt[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[510]] /* dc.roo.datConExt[1].azi PARAM */);
  threadData->lastEquationSolved = 3214;
}

/*
equation index: 3216
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExt[1].layers.roughness_a = dc.roo.datConExt[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3216(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3216};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[218]] /* dc.roo.irRadExc.datConExt[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[179]] /* dc.roo.datConExt[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 3216;
}

/*
equation index: 3217
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExt[1].layers.absSol_b = dc.roo.datConExt[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3217(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3217};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[751]] /* dc.roo.irRadExc.datConExt[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[515]] /* dc.roo.datConExt[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 3217;
}

/*
equation index: 3218
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExt[1].layers.absSol_a = dc.roo.datConExt[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3218(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3218};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[750]] /* dc.roo.irRadExc.datConExt[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[514]] /* dc.roo.datConExt[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 3218;
}

/*
equation index: 3219
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExt[1].layers.absIR_a = dc.roo.datConExt[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3219(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3219};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[748]] /* dc.roo.irRadExc.datConExt[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[512]] /* dc.roo.datConExt[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 3219;
}

/*
equation index: 3222
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExt[1].layers.material[1].LHea = dc.roo.datConExt[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3222(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3222};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[752]] /* dc.roo.irRadExc.datConExt[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[516]] /* dc.roo.datConExt[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 3222;
}

/*
equation index: 3225
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExt[1].layers.material[1].nStaReal = dc.roo.datConExt[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3225(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3225};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[759]] /* dc.roo.irRadExc.datConExt[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[523]] /* dc.roo.datConExt[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 3225;
}

/*
equation index: 3226
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExt[1].layers.material[1].piMat = dc.roo.datConExt[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3226(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3226};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[760]] /* dc.roo.irRadExc.datConExt[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[524]] /* dc.roo.datConExt[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 3226;
}

/*
equation index: 3227
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExt[1].layers.material[1].piRef = dc.roo.datConExt[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3227(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3227};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[761]] /* dc.roo.irRadExc.datConExt[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[525]] /* dc.roo.datConExt[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 3227;
}

/*
equation index: 3230
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExt[1].layers.material[1].nStaRef = dc.roo.datConExt[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3230(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3230};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[215]] /* dc.roo.irRadExc.datConExt[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[176]] /* dc.roo.datConExt[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 3230;
}

/*
equation index: 3231
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExt[1].layers.material[1].R = dc.roo.datConExt[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3231(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3231};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[753]] /* dc.roo.irRadExc.datConExt[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[517]] /* dc.roo.datConExt[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 3231;
}

/*
equation index: 3232
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExt[1].layers.material[1].d = dc.roo.datConExt[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3232(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3232};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[757]] /* dc.roo.irRadExc.datConExt[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[521]] /* dc.roo.datConExt[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 3232;
}

/*
equation index: 3233
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExt[1].layers.material[1].c = dc.roo.datConExt[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3233(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3233};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[756]] /* dc.roo.irRadExc.datConExt[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[520]] /* dc.roo.datConExt[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 3233;
}

/*
equation index: 3234
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExt[1].layers.material[1].k = dc.roo.datConExt[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3234(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3234};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[758]] /* dc.roo.irRadExc.datConExt[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[522]] /* dc.roo.datConExt[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 3234;
}

/*
equation index: 3235
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExt[1].layers.material[1].x = dc.roo.datConExt[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3235(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3235};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[762]] /* dc.roo.irRadExc.datConExt[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[526]] /* dc.roo.datConExt[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 3235;
}

/*
equation index: 3237
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExt[1].name = dc.roo.datConExt[1].name
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3237(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3237};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[60]] /* dc.roo.irRadExc.datConExt[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[56]] /* dc.roo.datConExt[1].name PARAM */);
  threadData->lastEquationSolved = 3237;
}

/*
equation index: 3254
type: SIMPLE_ASSIGN
dc.roo.irRadGai.surBou[6].A = dc.roo.surBou[6].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3254(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3254};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1169]] /* dc.roo.irRadGai.surBou[6].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1435]] /* dc.roo.surBou[6].A PARAM */);
  threadData->lastEquationSolved = 3254;
}

/*
equation index: 3255
type: SIMPLE_ASSIGN
dc.roo.irRadGai.ASurBou[6] = dc.roo.irRadGai.surBou[6].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3255(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3255};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[978]] /* dc.roo.irRadGai.ASurBou[6] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1169]] /* dc.roo.irRadGai.surBou[6].A PARAM */);
  threadData->lastEquationSolved = 3255;
}

/*
equation index: 3256
type: SIMPLE_ASSIGN
dc.roo.irRadGai.surBou[6].absIR = dc.roo.surBou[6].absIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3256(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3256};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1175]] /* dc.roo.irRadGai.surBou[6].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1441]] /* dc.roo.surBou[6].absIR PARAM */);
  threadData->lastEquationSolved = 3256;
}

/*
equation index: 3257
type: SIMPLE_ASSIGN
dc.roo.irRadGai.epsSurBou[6] = dc.roo.irRadGai.surBou[6].absIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3257(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3257};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1162]] /* dc.roo.irRadGai.epsSurBou[6] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1175]] /* dc.roo.irRadGai.surBou[6].absIR PARAM */);
  threadData->lastEquationSolved = 3257;
}

/*
equation index: 3258
type: SIMPLE_ASSIGN
dc.roo.irRadGai.AEpsSurBou[6] = dc.roo.irRadGai.ASurBou[6] * dc.roo.irRadGai.epsSurBou[6]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3258(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3258};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[972]] /* dc.roo.irRadGai.AEpsSurBou[6] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[978]] /* dc.roo.irRadGai.ASurBou[6] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1162]] /* dc.roo.irRadGai.epsSurBou[6] PARAM */));
  threadData->lastEquationSolved = 3258;
}

/*
equation index: 3259
type: SIMPLE_ASSIGN
dc.roo.irRadGai.surBou[5].A = dc.roo.surBou[5].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3259(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3259};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1168]] /* dc.roo.irRadGai.surBou[5].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1434]] /* dc.roo.surBou[5].A PARAM */);
  threadData->lastEquationSolved = 3259;
}

/*
equation index: 3260
type: SIMPLE_ASSIGN
dc.roo.irRadGai.ASurBou[5] = dc.roo.irRadGai.surBou[5].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3260(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3260};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[977]] /* dc.roo.irRadGai.ASurBou[5] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1168]] /* dc.roo.irRadGai.surBou[5].A PARAM */);
  threadData->lastEquationSolved = 3260;
}

/*
equation index: 3261
type: SIMPLE_ASSIGN
dc.roo.irRadGai.surBou[5].absIR = dc.roo.surBou[5].absIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3261(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3261};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1174]] /* dc.roo.irRadGai.surBou[5].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1440]] /* dc.roo.surBou[5].absIR PARAM */);
  threadData->lastEquationSolved = 3261;
}

/*
equation index: 3262
type: SIMPLE_ASSIGN
dc.roo.irRadGai.epsSurBou[5] = dc.roo.irRadGai.surBou[5].absIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3262(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3262};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1161]] /* dc.roo.irRadGai.epsSurBou[5] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1174]] /* dc.roo.irRadGai.surBou[5].absIR PARAM */);
  threadData->lastEquationSolved = 3262;
}

/*
equation index: 3263
type: SIMPLE_ASSIGN
dc.roo.irRadGai.AEpsSurBou[5] = dc.roo.irRadGai.ASurBou[5] * dc.roo.irRadGai.epsSurBou[5]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3263(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3263};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[971]] /* dc.roo.irRadGai.AEpsSurBou[5] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[977]] /* dc.roo.irRadGai.ASurBou[5] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1161]] /* dc.roo.irRadGai.epsSurBou[5] PARAM */));
  threadData->lastEquationSolved = 3263;
}

/*
equation index: 3264
type: SIMPLE_ASSIGN
dc.roo.irRadGai.surBou[4].A = dc.roo.surBou[4].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3264(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3264};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1167]] /* dc.roo.irRadGai.surBou[4].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1433]] /* dc.roo.surBou[4].A PARAM */);
  threadData->lastEquationSolved = 3264;
}

/*
equation index: 3265
type: SIMPLE_ASSIGN
dc.roo.irRadGai.ASurBou[4] = dc.roo.irRadGai.surBou[4].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3265(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3265};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[976]] /* dc.roo.irRadGai.ASurBou[4] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1167]] /* dc.roo.irRadGai.surBou[4].A PARAM */);
  threadData->lastEquationSolved = 3265;
}

/*
equation index: 3266
type: SIMPLE_ASSIGN
dc.roo.irRadGai.surBou[4].absIR = dc.roo.surBou[4].absIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3266(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3266};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1173]] /* dc.roo.irRadGai.surBou[4].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1439]] /* dc.roo.surBou[4].absIR PARAM */);
  threadData->lastEquationSolved = 3266;
}

/*
equation index: 3267
type: SIMPLE_ASSIGN
dc.roo.irRadGai.epsSurBou[4] = dc.roo.irRadGai.surBou[4].absIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3267(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3267};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1160]] /* dc.roo.irRadGai.epsSurBou[4] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1173]] /* dc.roo.irRadGai.surBou[4].absIR PARAM */);
  threadData->lastEquationSolved = 3267;
}

/*
equation index: 3268
type: SIMPLE_ASSIGN
dc.roo.irRadGai.AEpsSurBou[4] = dc.roo.irRadGai.ASurBou[4] * dc.roo.irRadGai.epsSurBou[4]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3268(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3268};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[970]] /* dc.roo.irRadGai.AEpsSurBou[4] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[976]] /* dc.roo.irRadGai.ASurBou[4] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1160]] /* dc.roo.irRadGai.epsSurBou[4] PARAM */));
  threadData->lastEquationSolved = 3268;
}

/*
equation index: 3269
type: SIMPLE_ASSIGN
dc.roo.irRadGai.surBou[3].A = dc.roo.surBou[3].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3269(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3269};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1166]] /* dc.roo.irRadGai.surBou[3].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1432]] /* dc.roo.surBou[3].A PARAM */);
  threadData->lastEquationSolved = 3269;
}

/*
equation index: 3270
type: SIMPLE_ASSIGN
dc.roo.irRadGai.ASurBou[3] = dc.roo.irRadGai.surBou[3].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3270(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3270};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[975]] /* dc.roo.irRadGai.ASurBou[3] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1166]] /* dc.roo.irRadGai.surBou[3].A PARAM */);
  threadData->lastEquationSolved = 3270;
}

/*
equation index: 3271
type: SIMPLE_ASSIGN
dc.roo.irRadGai.surBou[3].absIR = dc.roo.surBou[3].absIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3271(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3271};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1172]] /* dc.roo.irRadGai.surBou[3].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1438]] /* dc.roo.surBou[3].absIR PARAM */);
  threadData->lastEquationSolved = 3271;
}

/*
equation index: 3272
type: SIMPLE_ASSIGN
dc.roo.irRadGai.epsSurBou[3] = dc.roo.irRadGai.surBou[3].absIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3272(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3272};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1159]] /* dc.roo.irRadGai.epsSurBou[3] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1172]] /* dc.roo.irRadGai.surBou[3].absIR PARAM */);
  threadData->lastEquationSolved = 3272;
}

/*
equation index: 3273
type: SIMPLE_ASSIGN
dc.roo.irRadGai.AEpsSurBou[3] = dc.roo.irRadGai.ASurBou[3] * dc.roo.irRadGai.epsSurBou[3]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3273(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3273};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[969]] /* dc.roo.irRadGai.AEpsSurBou[3] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[975]] /* dc.roo.irRadGai.ASurBou[3] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1159]] /* dc.roo.irRadGai.epsSurBou[3] PARAM */));
  threadData->lastEquationSolved = 3273;
}

/*
equation index: 3274
type: SIMPLE_ASSIGN
dc.roo.irRadGai.surBou[2].A = dc.roo.surBou[2].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3274(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3274};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1165]] /* dc.roo.irRadGai.surBou[2].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1431]] /* dc.roo.surBou[2].A PARAM */);
  threadData->lastEquationSolved = 3274;
}

/*
equation index: 3275
type: SIMPLE_ASSIGN
dc.roo.irRadGai.ASurBou[2] = dc.roo.irRadGai.surBou[2].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3275(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3275};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[974]] /* dc.roo.irRadGai.ASurBou[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1165]] /* dc.roo.irRadGai.surBou[2].A PARAM */);
  threadData->lastEquationSolved = 3275;
}

/*
equation index: 3276
type: SIMPLE_ASSIGN
dc.roo.irRadGai.surBou[2].absIR = dc.roo.surBou[2].absIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3276(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3276};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1171]] /* dc.roo.irRadGai.surBou[2].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1437]] /* dc.roo.surBou[2].absIR PARAM */);
  threadData->lastEquationSolved = 3276;
}

/*
equation index: 3277
type: SIMPLE_ASSIGN
dc.roo.irRadGai.epsSurBou[2] = dc.roo.irRadGai.surBou[2].absIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3277(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3277};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1158]] /* dc.roo.irRadGai.epsSurBou[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1171]] /* dc.roo.irRadGai.surBou[2].absIR PARAM */);
  threadData->lastEquationSolved = 3277;
}

/*
equation index: 3278
type: SIMPLE_ASSIGN
dc.roo.irRadGai.AEpsSurBou[2] = dc.roo.irRadGai.ASurBou[2] * dc.roo.irRadGai.epsSurBou[2]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3278(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3278};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[968]] /* dc.roo.irRadGai.AEpsSurBou[2] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[974]] /* dc.roo.irRadGai.ASurBou[2] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1158]] /* dc.roo.irRadGai.epsSurBou[2] PARAM */));
  threadData->lastEquationSolved = 3278;
}

/*
equation index: 3279
type: SIMPLE_ASSIGN
dc.roo.irRadGai.surBou[1].A = dc.roo.surBou[1].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3279(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3279};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1164]] /* dc.roo.irRadGai.surBou[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1430]] /* dc.roo.surBou[1].A PARAM */);
  threadData->lastEquationSolved = 3279;
}

/*
equation index: 3280
type: SIMPLE_ASSIGN
dc.roo.irRadGai.ASurBou[1] = dc.roo.irRadGai.surBou[1].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3280(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3280};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[973]] /* dc.roo.irRadGai.ASurBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1164]] /* dc.roo.irRadGai.surBou[1].A PARAM */);
  threadData->lastEquationSolved = 3280;
}

/*
equation index: 3281
type: SIMPLE_ASSIGN
dc.roo.irRadGai.surBou[1].absIR = dc.roo.surBou[1].absIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3281(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3281};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1170]] /* dc.roo.irRadGai.surBou[1].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1436]] /* dc.roo.surBou[1].absIR PARAM */);
  threadData->lastEquationSolved = 3281;
}

/*
equation index: 3282
type: SIMPLE_ASSIGN
dc.roo.irRadGai.epsSurBou[1] = dc.roo.irRadGai.surBou[1].absIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3282(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3282};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1157]] /* dc.roo.irRadGai.epsSurBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1170]] /* dc.roo.irRadGai.surBou[1].absIR PARAM */);
  threadData->lastEquationSolved = 3282;
}

/*
equation index: 3283
type: SIMPLE_ASSIGN
dc.roo.irRadGai.AEpsSurBou[1] = dc.roo.irRadGai.ASurBou[1] * dc.roo.irRadGai.epsSurBou[1]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3283(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3283};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[967]] /* dc.roo.irRadGai.AEpsSurBou[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[973]] /* dc.roo.irRadGai.ASurBou[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1157]] /* dc.roo.irRadGai.epsSurBou[1] PARAM */));
  threadData->lastEquationSolved = 3283;
}

/*
equation index: 3284
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConBou[1].A = dc.roo.datConBou[1].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3284(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3284};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[979]] /* dc.roo.irRadGai.datConBou[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[486]] /* dc.roo.datConBou[1].A PARAM */);
  threadData->lastEquationSolved = 3284;
}

/*
equation index: 3285
type: SIMPLE_ASSIGN
dc.roo.irRadGai.AConBou[1] = dc.roo.irRadGai.datConBou[1].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3285(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3285};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[955]] /* dc.roo.irRadGai.AConBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[979]] /* dc.roo.irRadGai.datConBou[1].A PARAM */);
  threadData->lastEquationSolved = 3285;
}

/*
equation index: 3286
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConBou[1].layers.absIR_b = dc.roo.datConBou[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3286(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3286};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[985]] /* dc.roo.irRadGai.datConBou[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[492]] /* dc.roo.datConBou[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 3286;
}

/*
equation index: 3287
type: SIMPLE_ASSIGN
dc.roo.irRadGai.epsConBou[1] = dc.roo.irRadGai.datConBou[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3287(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3287};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1149]] /* dc.roo.irRadGai.epsConBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[985]] /* dc.roo.irRadGai.datConBou[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 3287;
}

/*
equation index: 3288
type: SIMPLE_ASSIGN
dc.roo.irRadGai.AEpsConBou[1] = dc.roo.irRadGai.AConBou[1] * dc.roo.irRadGai.epsConBou[1]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3288(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3288};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[961]] /* dc.roo.irRadGai.AEpsConBou[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[955]] /* dc.roo.irRadGai.AConBou[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1149]] /* dc.roo.irRadGai.epsConBou[1] PARAM */));
  threadData->lastEquationSolved = 3288;
}

/*
equation index: 3289
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConPar[1].A = dc.roo.datConPar[1].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3289(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3289};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1084]] /* dc.roo.irRadGai.datConPar[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[591]] /* dc.roo.datConPar[1].A PARAM */);
  threadData->lastEquationSolved = 3289;
}

/*
equation index: 3290
type: SIMPLE_ASSIGN
dc.roo.irRadGai.AConPar[1] = dc.roo.irRadGai.datConPar[1].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3290(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3290};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[960]] /* dc.roo.irRadGai.AConPar[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1084]] /* dc.roo.irRadGai.datConPar[1].A PARAM */);
  threadData->lastEquationSolved = 3290;
}

/*
equation index: 3291
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConPar[1].layers.absIR_b = dc.roo.datConPar[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3291(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3291};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1090]] /* dc.roo.irRadGai.datConPar[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[597]] /* dc.roo.datConPar[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 3291;
}

/*
equation index: 3292
type: SIMPLE_ASSIGN
dc.roo.irRadGai.epsConPar_b[1] = dc.roo.irRadGai.datConPar[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3292(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3292};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1156]] /* dc.roo.irRadGai.epsConPar_b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1090]] /* dc.roo.irRadGai.datConPar[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 3292;
}

/*
equation index: 3293
type: SIMPLE_ASSIGN
dc.roo.irRadGai.AEpsConPar_b[1] = dc.roo.irRadGai.AConPar[1] * dc.roo.irRadGai.epsConPar_b[1]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3293(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3293};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[966]] /* dc.roo.irRadGai.AEpsConPar_b[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[960]] /* dc.roo.irRadGai.AConPar[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1156]] /* dc.roo.irRadGai.epsConPar_b[1] PARAM */));
  threadData->lastEquationSolved = 3293;
}

/*
equation index: 3294
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConPar[1].layers.absIR_a = dc.roo.datConPar[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3294(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3294};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1089]] /* dc.roo.irRadGai.datConPar[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[596]] /* dc.roo.datConPar[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 3294;
}

/*
equation index: 3295
type: SIMPLE_ASSIGN
dc.roo.irRadGai.epsConPar_a[1] = dc.roo.irRadGai.datConPar[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3295(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3295};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1155]] /* dc.roo.irRadGai.epsConPar_a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1089]] /* dc.roo.irRadGai.datConPar[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 3295;
}

/*
equation index: 3296
type: SIMPLE_ASSIGN
dc.roo.irRadGai.AEpsConPar_a[1] = dc.roo.irRadGai.AConPar[1] * dc.roo.irRadGai.epsConPar_a[1]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3296(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3296};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[965]] /* dc.roo.irRadGai.AEpsConPar_a[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[960]] /* dc.roo.irRadGai.AConPar[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1155]] /* dc.roo.irRadGai.epsConPar_a[1] PARAM */));
  threadData->lastEquationSolved = 3296;
}

/*
equation index: 3297
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].AWin = dc.roo.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3297(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3297};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1025]] /* dc.roo.irRadGai.datConExtWin[1].AWin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[532]] /* dc.roo.datConExtWin[1].AWin PARAM */);
  threadData->lastEquationSolved = 3297;
}

/*
equation index: 3298
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].fFra = dc.roo.datConExtWin[1].fFra
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3298(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3298};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1029]] /* dc.roo.irRadGai.datConExtWin[1].fFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[536]] /* dc.roo.datConExtWin[1].fFra PARAM */);
  threadData->lastEquationSolved = 3298;
}

/*
equation index: 3299
type: SIMPLE_ASSIGN
dc.roo.irRadGai.AConExtWinFra[1] = dc.roo.irRadGai.datConExtWin[1].fFra * dc.roo.irRadGai.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3299(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3299};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[957]] /* dc.roo.irRadGai.AConExtWinFra[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1029]] /* dc.roo.irRadGai.datConExtWin[1].fFra PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1025]] /* dc.roo.irRadGai.datConExtWin[1].AWin PARAM */));
  threadData->lastEquationSolved = 3299;
}

/*
equation index: 3300
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].glaSys.absIRFra = dc.roo.datConExtWin[1].glaSys.absIRFra
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3300(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3300};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1031]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.absIRFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[538]] /* dc.roo.datConExtWin[1].glaSys.absIRFra PARAM */);
  threadData->lastEquationSolved = 3300;
}

/*
equation index: 3301
type: SIMPLE_ASSIGN
dc.roo.irRadGai.epsConExtWinFra[1] = dc.roo.irRadGai.datConExtWin[1].glaSys.absIRFra
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3301(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3301};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1151]] /* dc.roo.irRadGai.epsConExtWinFra[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1031]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.absIRFra PARAM */);
  threadData->lastEquationSolved = 3301;
}

/*
equation index: 3302
type: SIMPLE_ASSIGN
dc.roo.irRadGai.AEpsConExtWinFra[1] = dc.roo.irRadGai.AConExtWinFra[1] * dc.roo.irRadGai.epsConExtWinFra[1]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3302(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3302};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[963]] /* dc.roo.irRadGai.AEpsConExtWinFra[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[957]] /* dc.roo.irRadGai.AConExtWinFra[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1151]] /* dc.roo.irRadGai.epsConExtWinFra[1] PARAM */));
  threadData->lastEquationSolved = 3302;
}

/*
equation index: 3303
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].AOpa = dc.roo.datConExtWin[1].AOpa
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3303(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3303};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1024]] /* dc.roo.irRadGai.datConExtWin[1].AOpa PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[531]] /* dc.roo.datConExtWin[1].AOpa PARAM */);
  threadData->lastEquationSolved = 3303;
}

/*
equation index: 3304
type: SIMPLE_ASSIGN
dc.roo.irRadGai.AConExtWinOpa[1] = dc.roo.irRadGai.datConExtWin[1].AOpa
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3304(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3304};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[959]] /* dc.roo.irRadGai.AConExtWinOpa[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1024]] /* dc.roo.irRadGai.datConExtWin[1].AOpa PARAM */);
  threadData->lastEquationSolved = 3304;
}

/*
equation index: 3305
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].layers.absIR_b = dc.roo.datConExtWin[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3305(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3305};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1061]] /* dc.roo.irRadGai.datConExtWin[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[568]] /* dc.roo.datConExtWin[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 3305;
}

/*
equation index: 3306
type: SIMPLE_ASSIGN
dc.roo.irRadGai.epsConExtWinOpa[1] = dc.roo.irRadGai.datConExtWin[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3306(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3306};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1152]] /* dc.roo.irRadGai.epsConExtWinOpa[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1061]] /* dc.roo.irRadGai.datConExtWin[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 3306;
}

/*
equation index: 3307
type: SIMPLE_ASSIGN
dc.roo.irRadGai.AEpsConExtWinOpa[1] = dc.roo.irRadGai.AConExtWinOpa[1] * dc.roo.irRadGai.epsConExtWinOpa[1]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3307(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3307};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[964]] /* dc.roo.irRadGai.AEpsConExtWinOpa[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[959]] /* dc.roo.irRadGai.AConExtWinOpa[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1152]] /* dc.roo.irRadGai.epsConExtWinOpa[1] PARAM */));
  threadData->lastEquationSolved = 3307;
}

/*
equation index: 3308
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExt[1].A = dc.roo.datConExt[1].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3308(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3308};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1000]] /* dc.roo.irRadGai.datConExt[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[507]] /* dc.roo.datConExt[1].A PARAM */);
  threadData->lastEquationSolved = 3308;
}

/*
equation index: 3309
type: SIMPLE_ASSIGN
dc.roo.irRadGai.AConExt[1] = dc.roo.irRadGai.datConExt[1].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3309(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3309};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[956]] /* dc.roo.irRadGai.AConExt[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1000]] /* dc.roo.irRadGai.datConExt[1].A PARAM */);
  threadData->lastEquationSolved = 3309;
}

/*
equation index: 3310
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExt[1].layers.absIR_b = dc.roo.datConExt[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3310(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3310};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1006]] /* dc.roo.irRadGai.datConExt[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[513]] /* dc.roo.datConExt[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 3310;
}

/*
equation index: 3311
type: SIMPLE_ASSIGN
dc.roo.irRadGai.epsConExt[1] = dc.roo.irRadGai.datConExt[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3311(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3311};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1150]] /* dc.roo.irRadGai.epsConExt[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1006]] /* dc.roo.irRadGai.datConExt[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 3311;
}

/*
equation index: 3312
type: SIMPLE_ASSIGN
dc.roo.irRadGai.AEpsConExt[1] = dc.roo.irRadGai.AConExt[1] * dc.roo.irRadGai.epsConExt[1]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3312(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3312};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[962]] /* dc.roo.irRadGai.AEpsConExt[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[956]] /* dc.roo.irRadGai.AConExt[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1150]] /* dc.roo.irRadGai.epsConExt[1] PARAM */));
  threadData->lastEquationSolved = 3312;
}

/*
equation index: 3314
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].glaSys.shade.absIR_a = dc.roo.datConExtWin[1].glaSys.shade.absIR_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3314(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3314};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1050]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.shade.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[557]] /* dc.roo.datConExtWin[1].glaSys.shade.absIR_a PARAM */);
  threadData->lastEquationSolved = 3314;
}

/*
equation index: 3315
type: SIMPLE_ASSIGN
dc.roo.irRadGai.epsConExtWinSha[1] = dc.roo.irRadGai.datConExtWin[1].glaSys.shade.absIR_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3315(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3315};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1153]] /* dc.roo.irRadGai.epsConExtWinSha[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1050]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.shade.absIR_a PARAM */);
  threadData->lastEquationSolved = 3315;
}

/*
equation index: 3316
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].glaSys.glass[1].absIR_b = dc.roo.datConExtWin[1].glaSys.glass[1].absIR_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3316(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3316};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1043]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.glass[1].absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[550]] /* dc.roo.datConExtWin[1].glaSys.glass[1].absIR_b PARAM */);
  threadData->lastEquationSolved = 3316;
}

/*
equation index: 3317
type: SIMPLE_ASSIGN
dc.roo.irRadGai.epsConExtWinUns[1] = dc.roo.irRadGai.datConExtWin[1].glaSys.glass[1].absIR_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3317(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3317};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1154]] /* dc.roo.irRadGai.epsConExtWinUns[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1043]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.glass[1].absIR_b PARAM */);
  threadData->lastEquationSolved = 3317;
}

/*
equation index: 3318
type: SIMPLE_ASSIGN
dc.roo.irRadGai.AConExtWinGla[1] = (1.0 - dc.roo.irRadGai.datConExtWin[1].fFra) * dc.roo.irRadGai.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3318(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3318};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[958]] /* dc.roo.irRadGai.AConExtWinGla[1] PARAM */) = (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1029]] /* dc.roo.irRadGai.datConExtWin[1].fFra PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1025]] /* dc.roo.irRadGai.datConExtWin[1].AWin PARAM */));
  threadData->lastEquationSolved = 3318;
}

/*
equation index: 3319
type: SIMPLE_ASSIGN
dc.roo.irRadGai.instanceName = "Scenario_s000_baseline.dc.roo.irRadGai"
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3319(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3319};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[74]] /* dc.roo.irRadGai.instanceName PARAM */) = _OMC_LIT87;
  threadData->lastEquationSolved = 3319;
}

/*
equation index: 3325
type: SIMPLE_ASSIGN
dc.roo.irRadGai.dummyCon.R = dc.roo.irRadGai.dummyCon.material[1].R
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3325(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3325};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1105]] /* dc.roo.irRadGai.dummyCon.R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1111]] /* dc.roo.irRadGai.dummyCon.material[1].R PARAM */);
  threadData->lastEquationSolved = 3325;
}

/*
equation index: 3331
type: SIMPLE_ASSIGN
dc.roo.irRadGai.surBou[6].boundaryCondition = dc.roo.surBou[6].boundaryCondition
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3331(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3331};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[294]] /* dc.roo.irRadGai.surBou[6].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[356]] /* dc.roo.surBou[6].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 3331;
}

/*
equation index: 3332
type: SIMPLE_ASSIGN
dc.roo.irRadGai.surBou[6].name = dc.roo.surBou[6].name
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3332(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3332};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[80]] /* dc.roo.irRadGai.surBou[6].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[110]] /* dc.roo.surBou[6].name PARAM */);
  threadData->lastEquationSolved = 3332;
}

/*
equation index: 3334
type: SIMPLE_ASSIGN
dc.roo.irRadGai.surBou[6].absSol = dc.roo.surBou[6].absSol
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3334(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3334};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1181]] /* dc.roo.irRadGai.surBou[6].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1447]] /* dc.roo.surBou[6].absSol PARAM */);
  threadData->lastEquationSolved = 3334;
}

/*
equation index: 3336
type: SIMPLE_ASSIGN
dc.roo.irRadGai.surBou[5].boundaryCondition = dc.roo.surBou[5].boundaryCondition
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3336(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3336};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[293]] /* dc.roo.irRadGai.surBou[5].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[355]] /* dc.roo.surBou[5].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 3336;
}

/*
equation index: 3337
type: SIMPLE_ASSIGN
dc.roo.irRadGai.surBou[5].name = dc.roo.surBou[5].name
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3337(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3337};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[79]] /* dc.roo.irRadGai.surBou[5].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[109]] /* dc.roo.surBou[5].name PARAM */);
  threadData->lastEquationSolved = 3337;
}

/*
equation index: 3339
type: SIMPLE_ASSIGN
dc.roo.irRadGai.surBou[5].absSol = dc.roo.surBou[5].absSol
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3339(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3339};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1180]] /* dc.roo.irRadGai.surBou[5].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1446]] /* dc.roo.surBou[5].absSol PARAM */);
  threadData->lastEquationSolved = 3339;
}

/*
equation index: 3341
type: SIMPLE_ASSIGN
dc.roo.irRadGai.surBou[4].boundaryCondition = dc.roo.surBou[4].boundaryCondition
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3341(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3341};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[292]] /* dc.roo.irRadGai.surBou[4].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[354]] /* dc.roo.surBou[4].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 3341;
}

/*
equation index: 3342
type: SIMPLE_ASSIGN
dc.roo.irRadGai.surBou[4].name = dc.roo.surBou[4].name
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3342(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3342};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[78]] /* dc.roo.irRadGai.surBou[4].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[108]] /* dc.roo.surBou[4].name PARAM */);
  threadData->lastEquationSolved = 3342;
}

/*
equation index: 3344
type: SIMPLE_ASSIGN
dc.roo.irRadGai.surBou[4].absSol = dc.roo.surBou[4].absSol
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3344(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3344};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1179]] /* dc.roo.irRadGai.surBou[4].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1445]] /* dc.roo.surBou[4].absSol PARAM */);
  threadData->lastEquationSolved = 3344;
}

/*
equation index: 3346
type: SIMPLE_ASSIGN
dc.roo.irRadGai.surBou[3].boundaryCondition = dc.roo.surBou[3].boundaryCondition
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3346(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3346};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[291]] /* dc.roo.irRadGai.surBou[3].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[353]] /* dc.roo.surBou[3].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 3346;
}

/*
equation index: 3347
type: SIMPLE_ASSIGN
dc.roo.irRadGai.surBou[3].name = dc.roo.surBou[3].name
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3347(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3347};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[77]] /* dc.roo.irRadGai.surBou[3].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[107]] /* dc.roo.surBou[3].name PARAM */);
  threadData->lastEquationSolved = 3347;
}

/*
equation index: 3349
type: SIMPLE_ASSIGN
dc.roo.irRadGai.surBou[3].absSol = dc.roo.surBou[3].absSol
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3349(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3349};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1178]] /* dc.roo.irRadGai.surBou[3].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1444]] /* dc.roo.surBou[3].absSol PARAM */);
  threadData->lastEquationSolved = 3349;
}

/*
equation index: 3351
type: SIMPLE_ASSIGN
dc.roo.irRadGai.surBou[2].boundaryCondition = dc.roo.surBou[2].boundaryCondition
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3351(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3351};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[290]] /* dc.roo.irRadGai.surBou[2].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[352]] /* dc.roo.surBou[2].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 3351;
}

/*
equation index: 3352
type: SIMPLE_ASSIGN
dc.roo.irRadGai.surBou[2].name = dc.roo.surBou[2].name
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3352(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3352};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[76]] /* dc.roo.irRadGai.surBou[2].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[106]] /* dc.roo.surBou[2].name PARAM */);
  threadData->lastEquationSolved = 3352;
}

/*
equation index: 3354
type: SIMPLE_ASSIGN
dc.roo.irRadGai.surBou[2].absSol = dc.roo.surBou[2].absSol
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3354(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3354};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1177]] /* dc.roo.irRadGai.surBou[2].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1443]] /* dc.roo.surBou[2].absSol PARAM */);
  threadData->lastEquationSolved = 3354;
}

/*
equation index: 3356
type: SIMPLE_ASSIGN
dc.roo.irRadGai.surBou[1].boundaryCondition = dc.roo.surBou[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3356(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3356};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[289]] /* dc.roo.irRadGai.surBou[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[351]] /* dc.roo.surBou[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 3356;
}

/*
equation index: 3357
type: SIMPLE_ASSIGN
dc.roo.irRadGai.surBou[1].name = dc.roo.surBou[1].name
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3357(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3357};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[75]] /* dc.roo.irRadGai.surBou[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[105]] /* dc.roo.surBou[1].name PARAM */);
  threadData->lastEquationSolved = 3357;
}

/*
equation index: 3359
type: SIMPLE_ASSIGN
dc.roo.irRadGai.surBou[1].absSol = dc.roo.surBou[1].absSol
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3359(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3359};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1176]] /* dc.roo.irRadGai.surBou[1].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1442]] /* dc.roo.surBou[1].absSol PARAM */);
  threadData->lastEquationSolved = 3359;
}

/*
equation index: 3361
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConBou[1].boundaryCondition = dc.roo.datConBou[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3361(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3361};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[255]] /* dc.roo.irRadGai.datConBou[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[168]] /* dc.roo.datConBou[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 3361;
}

/*
equation index: 3364
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConBou[1].T_b_start = dc.roo.datConBou[1].T_b_start
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3364(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3364};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[981]] /* dc.roo.irRadGai.datConBou[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[488]] /* dc.roo.datConBou[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 3364;
}

/*
equation index: 3365
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConBou[1].T_a_start = dc.roo.datConBou[1].T_a_start
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3365(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3365};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[980]] /* dc.roo.irRadGai.datConBou[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[487]] /* dc.roo.datConBou[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 3365;
}

/*
equation index: 3369
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConBou[1].azi = dc.roo.datConBou[1].azi
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3369(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3369};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[982]] /* dc.roo.irRadGai.datConBou[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[489]] /* dc.roo.datConBou[1].azi PARAM */);
  threadData->lastEquationSolved = 3369;
}

/*
equation index: 3371
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConBou[1].layers.roughness_a = dc.roo.datConBou[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3371(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3371};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[260]] /* dc.roo.irRadGai.datConBou[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[173]] /* dc.roo.datConBou[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 3371;
}

/*
equation index: 3372
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConBou[1].layers.absSol_b = dc.roo.datConBou[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3372(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3372};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[987]] /* dc.roo.irRadGai.datConBou[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[494]] /* dc.roo.datConBou[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 3372;
}

/*
equation index: 3373
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConBou[1].layers.absSol_a = dc.roo.datConBou[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3373(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3373};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[986]] /* dc.roo.irRadGai.datConBou[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[493]] /* dc.roo.datConBou[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 3373;
}

/*
equation index: 3374
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConBou[1].layers.absIR_a = dc.roo.datConBou[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3374(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3374};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[984]] /* dc.roo.irRadGai.datConBou[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[491]] /* dc.roo.datConBou[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 3374;
}

/*
equation index: 3377
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConBou[1].layers.material[1].LHea = dc.roo.datConBou[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3377(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3377};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[988]] /* dc.roo.irRadGai.datConBou[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[495]] /* dc.roo.datConBou[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 3377;
}

/*
equation index: 3380
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConBou[1].layers.material[1].nStaReal = dc.roo.datConBou[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3380(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3380};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[995]] /* dc.roo.irRadGai.datConBou[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[502]] /* dc.roo.datConBou[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 3380;
}

/*
equation index: 3381
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConBou[1].layers.material[1].piMat = dc.roo.datConBou[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3381(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3381};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[996]] /* dc.roo.irRadGai.datConBou[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[503]] /* dc.roo.datConBou[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 3381;
}

/*
equation index: 3382
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConBou[1].layers.material[1].piRef = dc.roo.datConBou[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3382(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3382};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[997]] /* dc.roo.irRadGai.datConBou[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[504]] /* dc.roo.datConBou[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 3382;
}

/*
equation index: 3385
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConBou[1].layers.material[1].nStaRef = dc.roo.datConBou[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3385(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3385};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[257]] /* dc.roo.irRadGai.datConBou[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[170]] /* dc.roo.datConBou[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 3385;
}

/*
equation index: 3386
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConBou[1].layers.material[1].R = dc.roo.datConBou[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3386(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3386};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[989]] /* dc.roo.irRadGai.datConBou[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[496]] /* dc.roo.datConBou[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 3386;
}

/*
equation index: 3387
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConBou[1].layers.material[1].d = dc.roo.datConBou[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3387(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3387};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[993]] /* dc.roo.irRadGai.datConBou[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[500]] /* dc.roo.datConBou[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 3387;
}

/*
equation index: 3388
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConBou[1].layers.material[1].c = dc.roo.datConBou[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3388(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3388};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[992]] /* dc.roo.irRadGai.datConBou[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[499]] /* dc.roo.datConBou[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 3388;
}

/*
equation index: 3389
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConBou[1].layers.material[1].k = dc.roo.datConBou[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3389(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3389};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[994]] /* dc.roo.irRadGai.datConBou[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[501]] /* dc.roo.datConBou[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 3389;
}

/*
equation index: 3390
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConBou[1].layers.material[1].x = dc.roo.datConBou[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3390(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3390};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[998]] /* dc.roo.irRadGai.datConBou[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[505]] /* dc.roo.datConBou[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 3390;
}

/*
equation index: 3392
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConBou[1].name = dc.roo.datConBou[1].name
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3392(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3392};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[70]] /* dc.roo.irRadGai.datConBou[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[55]] /* dc.roo.datConBou[1].name PARAM */);
  threadData->lastEquationSolved = 3392;
}

/*
equation index: 3393
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConPar[1].boundaryCondition = dc.roo.datConPar[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3393(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3393};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[273]] /* dc.roo.irRadGai.datConPar[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[186]] /* dc.roo.datConPar[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 3393;
}

/*
equation index: 3396
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConPar[1].T_b_start = dc.roo.datConPar[1].T_b_start
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3396(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3396};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1086]] /* dc.roo.irRadGai.datConPar[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[593]] /* dc.roo.datConPar[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 3396;
}

/*
equation index: 3397
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConPar[1].T_a_start = dc.roo.datConPar[1].T_a_start
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3397(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3397};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1085]] /* dc.roo.irRadGai.datConPar[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[592]] /* dc.roo.datConPar[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 3397;
}

/*
equation index: 3401
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConPar[1].azi = dc.roo.datConPar[1].azi
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3401(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3401};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1087]] /* dc.roo.irRadGai.datConPar[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[594]] /* dc.roo.datConPar[1].azi PARAM */);
  threadData->lastEquationSolved = 3401;
}

/*
equation index: 3403
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConPar[1].layers.roughness_a = dc.roo.datConPar[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3403(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3403};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[278]] /* dc.roo.irRadGai.datConPar[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[191]] /* dc.roo.datConPar[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 3403;
}

/*
equation index: 3404
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConPar[1].layers.absSol_b = dc.roo.datConPar[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3404(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3404};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1092]] /* dc.roo.irRadGai.datConPar[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[599]] /* dc.roo.datConPar[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 3404;
}

/*
equation index: 3405
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConPar[1].layers.absSol_a = dc.roo.datConPar[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3405(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3405};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1091]] /* dc.roo.irRadGai.datConPar[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[598]] /* dc.roo.datConPar[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 3405;
}

/*
equation index: 3408
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConPar[1].layers.material[1].LHea = dc.roo.datConPar[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3408(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3408};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1093]] /* dc.roo.irRadGai.datConPar[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[600]] /* dc.roo.datConPar[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 3408;
}

/*
equation index: 3411
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConPar[1].layers.material[1].nStaReal = dc.roo.datConPar[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3411(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3411};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1100]] /* dc.roo.irRadGai.datConPar[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[607]] /* dc.roo.datConPar[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 3411;
}

/*
equation index: 3412
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConPar[1].layers.material[1].piMat = dc.roo.datConPar[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3412(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3412};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1101]] /* dc.roo.irRadGai.datConPar[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[608]] /* dc.roo.datConPar[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 3412;
}

/*
equation index: 3413
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConPar[1].layers.material[1].piRef = dc.roo.datConPar[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3413(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3413};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1102]] /* dc.roo.irRadGai.datConPar[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[609]] /* dc.roo.datConPar[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 3413;
}

/*
equation index: 3416
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConPar[1].layers.material[1].nStaRef = dc.roo.datConPar[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3416(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3416};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[275]] /* dc.roo.irRadGai.datConPar[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[188]] /* dc.roo.datConPar[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 3416;
}

/*
equation index: 3417
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConPar[1].layers.material[1].R = dc.roo.datConPar[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3417(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3417};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1094]] /* dc.roo.irRadGai.datConPar[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[601]] /* dc.roo.datConPar[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 3417;
}

/*
equation index: 3418
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConPar[1].layers.material[1].d = dc.roo.datConPar[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3418(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3418};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1098]] /* dc.roo.irRadGai.datConPar[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[605]] /* dc.roo.datConPar[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 3418;
}

/*
equation index: 3419
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConPar[1].layers.material[1].c = dc.roo.datConPar[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3419(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3419};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1097]] /* dc.roo.irRadGai.datConPar[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[604]] /* dc.roo.datConPar[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 3419;
}

/*
equation index: 3420
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConPar[1].layers.material[1].k = dc.roo.datConPar[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3420(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3420};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1099]] /* dc.roo.irRadGai.datConPar[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[606]] /* dc.roo.datConPar[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 3420;
}

/*
equation index: 3421
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConPar[1].layers.material[1].x = dc.roo.datConPar[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3421(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3421};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1103]] /* dc.roo.irRadGai.datConPar[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[610]] /* dc.roo.datConPar[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 3421;
}

/*
equation index: 3423
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConPar[1].name = dc.roo.datConPar[1].name
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3423(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3423};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[73]] /* dc.roo.irRadGai.datConPar[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[58]] /* dc.roo.datConPar[1].name PARAM */);
  threadData->lastEquationSolved = 3423;
}

/*
equation index: 3427
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].glaSys.absSolFra = dc.roo.datConExtWin[1].glaSys.absSolFra
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3427(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3427};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1032]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.absSolFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[539]] /* dc.roo.datConExtWin[1].glaSys.absSolFra PARAM */);
  threadData->lastEquationSolved = 3427;
}

/*
equation index: 3428
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].glaSys.UFra = dc.roo.datConExtWin[1].glaSys.UFra
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3428(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3428};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1030]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.UFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[537]] /* dc.roo.datConExtWin[1].glaSys.UFra PARAM */);
  threadData->lastEquationSolved = 3428;
}

/*
equation index: 3429
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].glaSys.shade.tauIR_b = dc.roo.datConExtWin[1].glaSys.shade.tauIR_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3429(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3429};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1055]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.shade.tauIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[562]] /* dc.roo.datConExtWin[1].glaSys.shade.tauIR_b PARAM */);
  threadData->lastEquationSolved = 3429;
}

/*
equation index: 3430
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].glaSys.shade.tauIR_a = dc.roo.datConExtWin[1].glaSys.shade.tauIR_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3430(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3430};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1054]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.shade.tauIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[561]] /* dc.roo.datConExtWin[1].glaSys.shade.tauIR_a PARAM */);
  threadData->lastEquationSolved = 3430;
}

/*
equation index: 3431
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].glaSys.shade.absIR_b = dc.roo.datConExtWin[1].glaSys.shade.absIR_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3431(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3431};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1051]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.shade.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[558]] /* dc.roo.datConExtWin[1].glaSys.shade.absIR_b PARAM */);
  threadData->lastEquationSolved = 3431;
}

/*
equation index: 3432
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].glaSys.shade.rhoSol_b = dc.roo.datConExtWin[1].glaSys.shade.rhoSol_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3432(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3432};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1053]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.shade.rhoSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[560]] /* dc.roo.datConExtWin[1].glaSys.shade.rhoSol_b PARAM */);
  threadData->lastEquationSolved = 3432;
}

/*
equation index: 3433
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].glaSys.shade.rhoSol_a = dc.roo.datConExtWin[1].glaSys.shade.rhoSol_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3433(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3433};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1052]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.shade.rhoSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[559]] /* dc.roo.datConExtWin[1].glaSys.shade.rhoSol_a PARAM */);
  threadData->lastEquationSolved = 3433;
}

/*
equation index: 3434
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].glaSys.shade.tauSol_b = dc.roo.datConExtWin[1].glaSys.shade.tauSol_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3434(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3434};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1057]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.shade.tauSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[564]] /* dc.roo.datConExtWin[1].glaSys.shade.tauSol_b PARAM */);
  threadData->lastEquationSolved = 3434;
}

/*
equation index: 3435
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].glaSys.shade.tauSol_a = dc.roo.datConExtWin[1].glaSys.shade.tauSol_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3435(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3435};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1056]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.shade.tauSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[563]] /* dc.roo.datConExtWin[1].glaSys.shade.tauSol_a PARAM */);
  threadData->lastEquationSolved = 3435;
}

/*
equation index: 3436
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].glaSys.gas[1].P0 = dc.roo.datConExtWin[1].glaSys.gas[1].P0
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3436(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3436};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1034]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.gas[1].P0 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[541]] /* dc.roo.datConExtWin[1].glaSys.gas[1].P0 PARAM */);
  threadData->lastEquationSolved = 3436;
}

/*
equation index: 3437
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].glaSys.gas[1].MM = dc.roo.datConExtWin[1].glaSys.gas[1].MM
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3437(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3437};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1033]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.gas[1].MM PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[540]] /* dc.roo.datConExtWin[1].glaSys.gas[1].MM PARAM */);
  threadData->lastEquationSolved = 3437;
}

/*
equation index: 3438
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].glaSys.gas[1].b_c = dc.roo.datConExtWin[1].glaSys.gas[1].b_c
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3438(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3438};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1038]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.gas[1].b_c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[545]] /* dc.roo.datConExtWin[1].glaSys.gas[1].b_c PARAM */);
  threadData->lastEquationSolved = 3438;
}

/*
equation index: 3439
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].glaSys.gas[1].a_c = dc.roo.datConExtWin[1].glaSys.gas[1].a_c
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3439(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3439};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1035]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.gas[1].a_c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[542]] /* dc.roo.datConExtWin[1].glaSys.gas[1].a_c PARAM */);
  threadData->lastEquationSolved = 3439;
}

/*
equation index: 3440
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].glaSys.gas[1].b_mu = dc.roo.datConExtWin[1].glaSys.gas[1].b_mu
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3440(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3440};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1040]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.gas[1].b_mu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[547]] /* dc.roo.datConExtWin[1].glaSys.gas[1].b_mu PARAM */);
  threadData->lastEquationSolved = 3440;
}

/*
equation index: 3441
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].glaSys.gas[1].a_mu = dc.roo.datConExtWin[1].glaSys.gas[1].a_mu
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3441(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3441};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1037]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.gas[1].a_mu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[544]] /* dc.roo.datConExtWin[1].glaSys.gas[1].a_mu PARAM */);
  threadData->lastEquationSolved = 3441;
}

/*
equation index: 3442
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].glaSys.gas[1].b_k = dc.roo.datConExtWin[1].glaSys.gas[1].b_k
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3442(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3442};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1039]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.gas[1].b_k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[546]] /* dc.roo.datConExtWin[1].glaSys.gas[1].b_k PARAM */);
  threadData->lastEquationSolved = 3442;
}

/*
equation index: 3443
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].glaSys.gas[1].a_k = dc.roo.datConExtWin[1].glaSys.gas[1].a_k
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3443(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3443};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1036]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.gas[1].a_k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[543]] /* dc.roo.datConExtWin[1].glaSys.gas[1].a_k PARAM */);
  threadData->lastEquationSolved = 3443;
}

/*
equation index: 3444
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].glaSys.gas[1].x = dc.roo.datConExtWin[1].glaSys.gas[1].x
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3444(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3444};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1041]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.gas[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[548]] /* dc.roo.datConExtWin[1].glaSys.gas[1].x PARAM */);
  threadData->lastEquationSolved = 3444;
}

/*
equation index: 3445
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].glaSys.glass[1].absIR_a = dc.roo.datConExtWin[1].glaSys.glass[1].absIR_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3445(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3445};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1042]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.glass[1].absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[549]] /* dc.roo.datConExtWin[1].glaSys.glass[1].absIR_a PARAM */);
  threadData->lastEquationSolved = 3445;
}

/*
equation index: 3446
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].glaSys.glass[1].tauIR = dc.roo.datConExtWin[1].glaSys.glass[1].tauIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3446(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3446};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1047]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.glass[1].tauIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[554]] /* dc.roo.datConExtWin[1].glaSys.glass[1].tauIR PARAM */);
  threadData->lastEquationSolved = 3446;
}

/*
equation index: 3447
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].glaSys.glass[1].rhoSol_b[1] = dc.roo.datConExtWin[1].glaSys.glass[1].rhoSol_b[1]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3447(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3447};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1046]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.glass[1].rhoSol_b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[553]] /* dc.roo.datConExtWin[1].glaSys.glass[1].rhoSol_b[1] PARAM */);
  threadData->lastEquationSolved = 3447;
}

/*
equation index: 3448
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].glaSys.glass[1].rhoSol_a[1] = dc.roo.datConExtWin[1].glaSys.glass[1].rhoSol_a[1]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3448(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3448};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1045]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.glass[1].rhoSol_a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[552]] /* dc.roo.datConExtWin[1].glaSys.glass[1].rhoSol_a[1] PARAM */);
  threadData->lastEquationSolved = 3448;
}

/*
equation index: 3449
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].glaSys.glass[1].tauSol[1] = dc.roo.datConExtWin[1].glaSys.glass[1].tauSol[1]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3449(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3449};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1048]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.glass[1].tauSol[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[555]] /* dc.roo.datConExtWin[1].glaSys.glass[1].tauSol[1] PARAM */);
  threadData->lastEquationSolved = 3449;
}

/*
equation index: 3450
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].glaSys.glass[1].k = dc.roo.datConExtWin[1].glaSys.glass[1].k
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3450(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3450};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1044]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.glass[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[551]] /* dc.roo.datConExtWin[1].glaSys.glass[1].k PARAM */);
  threadData->lastEquationSolved = 3450;
}

/*
equation index: 3451
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].glaSys.glass[1].x = dc.roo.datConExtWin[1].glaSys.glass[1].x
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3451(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3451};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1049]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.glass[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[556]] /* dc.roo.datConExtWin[1].glaSys.glass[1].x PARAM */);
  threadData->lastEquationSolved = 3451;
}

/*
equation index: 3454
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].AGla = dc.roo.datConExtWin[1].AGla
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3454(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3454};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1023]] /* dc.roo.irRadGai.datConExtWin[1].AGla PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[530]] /* dc.roo.datConExtWin[1].AGla PARAM */);
  threadData->lastEquationSolved = 3454;
}

/*
equation index: 3455
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].AFra = dc.roo.datConExtWin[1].AFra
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3455(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3455};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1022]] /* dc.roo.irRadGai.datConExtWin[1].AFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[529]] /* dc.roo.datConExtWin[1].AFra PARAM */);
  threadData->lastEquationSolved = 3455;
}

/*
equation index: 3457
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].sidFin.gap = dc.roo.datConExtWin[1].sidFin.gap
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3457(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3457};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1080]] /* dc.roo.irRadGai.datConExtWin[1].sidFin.gap PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[587]] /* dc.roo.datConExtWin[1].sidFin.gap PARAM */);
  threadData->lastEquationSolved = 3457;
}

/*
equation index: 3459
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].sidFin.h = dc.roo.datConExtWin[1].sidFin.h
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3459(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3459};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1081]] /* dc.roo.irRadGai.datConExtWin[1].sidFin.h PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[588]] /* dc.roo.datConExtWin[1].sidFin.h PARAM */);
  threadData->lastEquationSolved = 3459;
}

/*
equation index: 3461
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].ove.gap = dc.roo.datConExtWin[1].ove.gap
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3461(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3461};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1076]] /* dc.roo.irRadGai.datConExtWin[1].ove.gap PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[583]] /* dc.roo.datConExtWin[1].ove.gap PARAM */);
  threadData->lastEquationSolved = 3461;
}

/*
equation index: 3463
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].ove.wR = dc.roo.datConExtWin[1].ove.wR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3463(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3463};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1078]] /* dc.roo.irRadGai.datConExtWin[1].ove.wR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[585]] /* dc.roo.datConExtWin[1].ove.wR PARAM */);
  threadData->lastEquationSolved = 3463;
}

/*
equation index: 3464
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].ove.wL = dc.roo.datConExtWin[1].ove.wL
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3464(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3464};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1077]] /* dc.roo.irRadGai.datConExtWin[1].ove.wL PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[584]] /* dc.roo.datConExtWin[1].ove.wL PARAM */);
  threadData->lastEquationSolved = 3464;
}

/*
equation index: 3465
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].wWin = dc.roo.datConExtWin[1].wWin
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3465(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3465};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1083]] /* dc.roo.irRadGai.datConExtWin[1].wWin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[590]] /* dc.roo.datConExtWin[1].wWin PARAM */);
  threadData->lastEquationSolved = 3465;
}

/*
equation index: 3466
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].hWin = dc.roo.datConExtWin[1].hWin
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3466(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3466};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1058]] /* dc.roo.irRadGai.datConExtWin[1].hWin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[565]] /* dc.roo.datConExtWin[1].hWin PARAM */);
  threadData->lastEquationSolved = 3466;
}

/*
equation index: 3467
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].A = dc.roo.datConExtWin[1].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3467(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3467};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1021]] /* dc.roo.irRadGai.datConExtWin[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[528]] /* dc.roo.datConExtWin[1].A PARAM */);
  threadData->lastEquationSolved = 3467;
}

/*
equation index: 3468
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].boundaryCondition = dc.roo.datConExtWin[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3468(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3468};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[267]] /* dc.roo.irRadGai.datConExtWin[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[180]] /* dc.roo.datConExtWin[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 3468;
}

/*
equation index: 3471
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].T_b_start = dc.roo.datConExtWin[1].T_b_start
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3471(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3471};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1027]] /* dc.roo.irRadGai.datConExtWin[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[534]] /* dc.roo.datConExtWin[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 3471;
}

/*
equation index: 3472
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].T_a_start = dc.roo.datConExtWin[1].T_a_start
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3472(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3472};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1026]] /* dc.roo.irRadGai.datConExtWin[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[533]] /* dc.roo.datConExtWin[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 3472;
}

/*
equation index: 3476
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].azi = dc.roo.datConExtWin[1].azi
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3476(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3476};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1028]] /* dc.roo.irRadGai.datConExtWin[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[535]] /* dc.roo.datConExtWin[1].azi PARAM */);
  threadData->lastEquationSolved = 3476;
}

/*
equation index: 3478
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].layers.roughness_a = dc.roo.datConExtWin[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3478(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3478};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[272]] /* dc.roo.irRadGai.datConExtWin[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[185]] /* dc.roo.datConExtWin[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 3478;
}

/*
equation index: 3479
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].layers.absSol_b = dc.roo.datConExtWin[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3479(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3479};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1063]] /* dc.roo.irRadGai.datConExtWin[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[570]] /* dc.roo.datConExtWin[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 3479;
}

/*
equation index: 3480
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].layers.absSol_a = dc.roo.datConExtWin[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3480(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3480};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1062]] /* dc.roo.irRadGai.datConExtWin[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[569]] /* dc.roo.datConExtWin[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 3480;
}

/*
equation index: 3481
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].layers.absIR_a = dc.roo.datConExtWin[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3481(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3481};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1060]] /* dc.roo.irRadGai.datConExtWin[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[567]] /* dc.roo.datConExtWin[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 3481;
}

/*
equation index: 3484
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].layers.material[1].LHea = dc.roo.datConExtWin[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3484(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3484};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1064]] /* dc.roo.irRadGai.datConExtWin[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[571]] /* dc.roo.datConExtWin[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 3484;
}

/*
equation index: 3487
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].layers.material[1].nStaReal = dc.roo.datConExtWin[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3487(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3487};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1071]] /* dc.roo.irRadGai.datConExtWin[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[578]] /* dc.roo.datConExtWin[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 3487;
}

/*
equation index: 3488
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].layers.material[1].piMat = dc.roo.datConExtWin[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3488(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3488};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1072]] /* dc.roo.irRadGai.datConExtWin[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[579]] /* dc.roo.datConExtWin[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 3488;
}

/*
equation index: 3489
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].layers.material[1].piRef = dc.roo.datConExtWin[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3489(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3489};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1073]] /* dc.roo.irRadGai.datConExtWin[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[580]] /* dc.roo.datConExtWin[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 3489;
}

/*
equation index: 3492
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].layers.material[1].nStaRef = dc.roo.datConExtWin[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3492(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3492};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[269]] /* dc.roo.irRadGai.datConExtWin[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[182]] /* dc.roo.datConExtWin[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 3492;
}

/*
equation index: 3493
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].layers.material[1].R = dc.roo.datConExtWin[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3493(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3493};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1065]] /* dc.roo.irRadGai.datConExtWin[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[572]] /* dc.roo.datConExtWin[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 3493;
}

/*
equation index: 3494
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].layers.material[1].d = dc.roo.datConExtWin[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3494(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3494};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1069]] /* dc.roo.irRadGai.datConExtWin[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[576]] /* dc.roo.datConExtWin[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 3494;
}

/*
equation index: 3495
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].layers.material[1].c = dc.roo.datConExtWin[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3495(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3495};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1068]] /* dc.roo.irRadGai.datConExtWin[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[575]] /* dc.roo.datConExtWin[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 3495;
}

/*
equation index: 3496
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].layers.material[1].k = dc.roo.datConExtWin[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3496(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3496};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1070]] /* dc.roo.irRadGai.datConExtWin[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[577]] /* dc.roo.datConExtWin[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 3496;
}

/*
equation index: 3497
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].layers.material[1].x = dc.roo.datConExtWin[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3497(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3497};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1074]] /* dc.roo.irRadGai.datConExtWin[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[581]] /* dc.roo.datConExtWin[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 3497;
}

/*
equation index: 3499
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].name = dc.roo.datConExtWin[1].name
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3499(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3499};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[72]] /* dc.roo.irRadGai.datConExtWin[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[57]] /* dc.roo.datConExtWin[1].name PARAM */);
  threadData->lastEquationSolved = 3499;
}

/*
equation index: 3500
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExt[1].boundaryCondition = dc.roo.datConExt[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3500(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3500};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[261]] /* dc.roo.irRadGai.datConExt[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[174]] /* dc.roo.datConExt[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 3500;
}

/*
equation index: 3503
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExt[1].T_b_start = dc.roo.datConExt[1].T_b_start
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3503(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3503};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1002]] /* dc.roo.irRadGai.datConExt[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[509]] /* dc.roo.datConExt[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 3503;
}

/*
equation index: 3504
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExt[1].T_a_start = dc.roo.datConExt[1].T_a_start
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3504(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3504};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1001]] /* dc.roo.irRadGai.datConExt[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[508]] /* dc.roo.datConExt[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 3504;
}

/*
equation index: 3508
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExt[1].azi = dc.roo.datConExt[1].azi
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3508(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3508};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1003]] /* dc.roo.irRadGai.datConExt[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[510]] /* dc.roo.datConExt[1].azi PARAM */);
  threadData->lastEquationSolved = 3508;
}

/*
equation index: 3510
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExt[1].layers.roughness_a = dc.roo.datConExt[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3510(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3510};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[266]] /* dc.roo.irRadGai.datConExt[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[179]] /* dc.roo.datConExt[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 3510;
}

/*
equation index: 3511
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExt[1].layers.absSol_b = dc.roo.datConExt[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3511(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3511};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1008]] /* dc.roo.irRadGai.datConExt[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[515]] /* dc.roo.datConExt[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 3511;
}

/*
equation index: 3512
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExt[1].layers.absSol_a = dc.roo.datConExt[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3512(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3512};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1007]] /* dc.roo.irRadGai.datConExt[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[514]] /* dc.roo.datConExt[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 3512;
}

/*
equation index: 3513
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExt[1].layers.absIR_a = dc.roo.datConExt[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3513(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3513};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1005]] /* dc.roo.irRadGai.datConExt[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[512]] /* dc.roo.datConExt[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 3513;
}

/*
equation index: 3516
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExt[1].layers.material[1].LHea = dc.roo.datConExt[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3516(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3516};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1009]] /* dc.roo.irRadGai.datConExt[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[516]] /* dc.roo.datConExt[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 3516;
}

/*
equation index: 3519
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExt[1].layers.material[1].nStaReal = dc.roo.datConExt[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3519(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3519};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1016]] /* dc.roo.irRadGai.datConExt[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[523]] /* dc.roo.datConExt[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 3519;
}

/*
equation index: 3520
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExt[1].layers.material[1].piMat = dc.roo.datConExt[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3520(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3520};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1017]] /* dc.roo.irRadGai.datConExt[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[524]] /* dc.roo.datConExt[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 3520;
}

/*
equation index: 3521
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExt[1].layers.material[1].piRef = dc.roo.datConExt[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3521(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3521};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1018]] /* dc.roo.irRadGai.datConExt[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[525]] /* dc.roo.datConExt[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 3521;
}

/*
equation index: 3524
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExt[1].layers.material[1].nStaRef = dc.roo.datConExt[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3524(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3524};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[263]] /* dc.roo.irRadGai.datConExt[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[176]] /* dc.roo.datConExt[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 3524;
}

/*
equation index: 3525
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExt[1].layers.material[1].R = dc.roo.datConExt[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3525(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3525};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1010]] /* dc.roo.irRadGai.datConExt[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[517]] /* dc.roo.datConExt[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 3525;
}

/*
equation index: 3526
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExt[1].layers.material[1].d = dc.roo.datConExt[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3526(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3526};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1014]] /* dc.roo.irRadGai.datConExt[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[521]] /* dc.roo.datConExt[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 3526;
}

/*
equation index: 3527
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExt[1].layers.material[1].c = dc.roo.datConExt[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3527(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3527};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1013]] /* dc.roo.irRadGai.datConExt[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[520]] /* dc.roo.datConExt[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 3527;
}

/*
equation index: 3528
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExt[1].layers.material[1].k = dc.roo.datConExt[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3528(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3528};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1015]] /* dc.roo.irRadGai.datConExt[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[522]] /* dc.roo.datConExt[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 3528;
}

/*
equation index: 3529
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExt[1].layers.material[1].x = dc.roo.datConExt[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3529(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3529};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1019]] /* dc.roo.irRadGai.datConExt[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[526]] /* dc.roo.datConExt[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 3529;
}

/*
equation index: 3531
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExt[1].name = dc.roo.datConExt[1].name
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3531(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3531};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[71]] /* dc.roo.irRadGai.datConExt[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[56]] /* dc.roo.datConExt[1].name PARAM */);
  threadData->lastEquationSolved = 3531;
}

/*
equation index: 3572
type: SIMPLE_ASSIGN
dc.roo.air.p_start = dc.roo.p_start
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3572(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3572};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[414]] /* dc.roo.air.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1189]] /* dc.roo.p_start PARAM */);
  threadData->lastEquationSolved = 3572;
}

/*
equation index: 3573
type: SIMPLE_ASSIGN
dc.roo.air.rho_start = 1.1843079200592153e-5 * dc.roo.air.p_start
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3573(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3573};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[415]] /* dc.roo.air.rho_start PARAM */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[414]] /* dc.roo.air.p_start PARAM */));
  threadData->lastEquationSolved = 3573;
}

/*
equation index: 3574
type: SIMPLE_ASSIGN
dc.roo.air.fluInt.rho_start = dc.roo.air.rho_start
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3574(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3574};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[413]] /* dc.roo.air.fluInt.rho_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[415]] /* dc.roo.air.rho_start PARAM */);
  threadData->lastEquationSolved = 3574;
}

/*
equation index: 3575
type: SIMPLE_ASSIGN
dc.roo.V = dc.roo.AFlo * dc.roo.hRoo
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3575(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3575};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[143]] /* dc.roo.V PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[142]] /* dc.roo.AFlo PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[658]] /* dc.roo.hRoo PARAM */));
  threadData->lastEquationSolved = 3575;
}

/*
equation index: 3576
type: SIMPLE_ASSIGN
dc.roo.air.V = dc.roo.V
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3576(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3576};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[180]] /* dc.roo.air.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[143]] /* dc.roo.V PARAM */);
  threadData->lastEquationSolved = 3576;
}

/*
equation index: 3577
type: SIMPLE_ASSIGN
dc.roo.air.fluInt.V = dc.roo.air.V
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3577(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3577};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[410]] /* dc.roo.air.fluInt.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[180]] /* dc.roo.air.V PARAM */);
  threadData->lastEquationSolved = 3577;
}

/*
equation index: 3578
type: SIMPLE_ASSIGN
dc.roo.air.fluInt.m_start = dc.roo.air.fluInt.rho_start * dc.roo.air.fluInt.V
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3578(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3578};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[411]] /* dc.roo.air.fluInt.m_start PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[413]] /* dc.roo.air.fluInt.rho_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[410]] /* dc.roo.air.fluInt.V PARAM */));
  threadData->lastEquationSolved = 3578;
}

/*
equation index: 3580
type: SIMPLE_ASSIGN
dc.roo.air.fluInt.p_start = dc.roo.air.p_start
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3580(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3580};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[412]] /* dc.roo.air.fluInt.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[414]] /* dc.roo.air.p_start PARAM */);
  threadData->lastEquationSolved = 3580;
}

/*
equation index: 3591
type: SIMPLE_ASSIGN
dc.roo.air.surIde[6].name = "east_wall"
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3591(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3591};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[53]] /* dc.roo.air.surIde[6].name PARAM */) = _OMC_LIT88;
  threadData->lastEquationSolved = 3591;
}

/*
equation index: 3595
type: SIMPLE_ASSIGN
dc.roo.air.surIde[5].name = "west_wall"
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3595(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3595};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[52]] /* dc.roo.air.surIde[5].name PARAM */) = _OMC_LIT89;
  threadData->lastEquationSolved = 3595;
}

/*
equation index: 3599
type: SIMPLE_ASSIGN
dc.roo.air.surIde[4].name = "north_wall"
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3599(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3599};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[51]] /* dc.roo.air.surIde[4].name PARAM */) = _OMC_LIT90;
  threadData->lastEquationSolved = 3599;
}

/*
equation index: 3603
type: SIMPLE_ASSIGN
dc.roo.air.surIde[3].name = "south_wall"
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3603(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3603};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[50]] /* dc.roo.air.surIde[3].name PARAM */) = _OMC_LIT91;
  threadData->lastEquationSolved = 3603;
}

/*
equation index: 3607
type: SIMPLE_ASSIGN
dc.roo.air.surIde[2].name = "ceiling"
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3607(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3607};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[49]] /* dc.roo.air.surIde[2].name PARAM */) = _OMC_LIT92;
  threadData->lastEquationSolved = 3607;
}

/*
equation index: 3611
type: SIMPLE_ASSIGN
dc.roo.air.surIde[1].name = "floor"
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3611(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3611};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[48]] /* dc.roo.air.surIde[1].name PARAM */) = _OMC_LIT93;
  threadData->lastEquationSolved = 3611;
}

/*
equation index: 3634
type: SIMPLE_ASSIGN
dc.roo.air.cfd.rho_start = dc.roo.air.rho_start
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3634(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3634};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[193]] /* dc.roo.air.cfd.rho_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[415]] /* dc.roo.air.rho_start PARAM */);
  threadData->lastEquationSolved = 3634;
}

/*
equation index: 3636
type: SIMPLE_ASSIGN
dc.roo.air.portName[12] = dc.roo.portName[12]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3636(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3636};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[40]] /* dc.roo.air.portName[12] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[92]] /* dc.roo.portName[12] PARAM */);
  threadData->lastEquationSolved = 3636;
}

/*
equation index: 3637
type: SIMPLE_ASSIGN
dc.roo.air.cfd.portName[12] = dc.roo.air.portName[12]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3637(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3637};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[16]] /* dc.roo.air.cfd.portName[12] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[40]] /* dc.roo.air.portName[12] PARAM */);
  threadData->lastEquationSolved = 3637;
}

/*
equation index: 3638
type: SIMPLE_ASSIGN
dc.roo.air.portName[11] = dc.roo.portName[11]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3638(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3638};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[39]] /* dc.roo.air.portName[11] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[91]] /* dc.roo.portName[11] PARAM */);
  threadData->lastEquationSolved = 3638;
}

/*
equation index: 3639
type: SIMPLE_ASSIGN
dc.roo.air.cfd.portName[11] = dc.roo.air.portName[11]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3639(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3639};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[15]] /* dc.roo.air.cfd.portName[11] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[39]] /* dc.roo.air.portName[11] PARAM */);
  threadData->lastEquationSolved = 3639;
}

/*
equation index: 3640
type: SIMPLE_ASSIGN
dc.roo.air.portName[10] = dc.roo.portName[10]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3640(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3640};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[38]] /* dc.roo.air.portName[10] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[90]] /* dc.roo.portName[10] PARAM */);
  threadData->lastEquationSolved = 3640;
}

/*
equation index: 3641
type: SIMPLE_ASSIGN
dc.roo.air.cfd.portName[10] = dc.roo.air.portName[10]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3641(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3641};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[14]] /* dc.roo.air.cfd.portName[10] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[38]] /* dc.roo.air.portName[10] PARAM */);
  threadData->lastEquationSolved = 3641;
}

/*
equation index: 3642
type: SIMPLE_ASSIGN
dc.roo.air.portName[9] = dc.roo.portName[9]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3642(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3642};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[37]] /* dc.roo.air.portName[9] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[89]] /* dc.roo.portName[9] PARAM */);
  threadData->lastEquationSolved = 3642;
}

/*
equation index: 3643
type: SIMPLE_ASSIGN
dc.roo.air.cfd.portName[9] = dc.roo.air.portName[9]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3643(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3643};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[13]] /* dc.roo.air.cfd.portName[9] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[37]] /* dc.roo.air.portName[9] PARAM */);
  threadData->lastEquationSolved = 3643;
}

/*
equation index: 3644
type: SIMPLE_ASSIGN
dc.roo.air.portName[8] = dc.roo.portName[8]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3644(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3644};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[36]] /* dc.roo.air.portName[8] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[88]] /* dc.roo.portName[8] PARAM */);
  threadData->lastEquationSolved = 3644;
}

/*
equation index: 3645
type: SIMPLE_ASSIGN
dc.roo.air.cfd.portName[8] = dc.roo.air.portName[8]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3645(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3645};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[12]] /* dc.roo.air.cfd.portName[8] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[36]] /* dc.roo.air.portName[8] PARAM */);
  threadData->lastEquationSolved = 3645;
}

/*
equation index: 3646
type: SIMPLE_ASSIGN
dc.roo.air.portName[7] = dc.roo.portName[7]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3646(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3646};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[35]] /* dc.roo.air.portName[7] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[87]] /* dc.roo.portName[7] PARAM */);
  threadData->lastEquationSolved = 3646;
}

/*
equation index: 3647
type: SIMPLE_ASSIGN
dc.roo.air.cfd.portName[7] = dc.roo.air.portName[7]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3647(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3647};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[11]] /* dc.roo.air.cfd.portName[7] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[35]] /* dc.roo.air.portName[7] PARAM */);
  threadData->lastEquationSolved = 3647;
}

/*
equation index: 3648
type: SIMPLE_ASSIGN
dc.roo.air.portName[6] = dc.roo.portName[6]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3648(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3648};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[34]] /* dc.roo.air.portName[6] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[86]] /* dc.roo.portName[6] PARAM */);
  threadData->lastEquationSolved = 3648;
}

/*
equation index: 3649
type: SIMPLE_ASSIGN
dc.roo.air.cfd.portName[6] = dc.roo.air.portName[6]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3649(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3649};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[10]] /* dc.roo.air.cfd.portName[6] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[34]] /* dc.roo.air.portName[6] PARAM */);
  threadData->lastEquationSolved = 3649;
}

/*
equation index: 3650
type: SIMPLE_ASSIGN
dc.roo.air.portName[5] = dc.roo.portName[5]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3650(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3650};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[33]] /* dc.roo.air.portName[5] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[85]] /* dc.roo.portName[5] PARAM */);
  threadData->lastEquationSolved = 3650;
}

/*
equation index: 3651
type: SIMPLE_ASSIGN
dc.roo.air.cfd.portName[5] = dc.roo.air.portName[5]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3651(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3651};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[9]] /* dc.roo.air.cfd.portName[5] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[33]] /* dc.roo.air.portName[5] PARAM */);
  threadData->lastEquationSolved = 3651;
}

/*
equation index: 3652
type: SIMPLE_ASSIGN
dc.roo.air.portName[4] = dc.roo.portName[4]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3652(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3652};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[32]] /* dc.roo.air.portName[4] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[84]] /* dc.roo.portName[4] PARAM */);
  threadData->lastEquationSolved = 3652;
}

/*
equation index: 3653
type: SIMPLE_ASSIGN
dc.roo.air.cfd.portName[4] = dc.roo.air.portName[4]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3653(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3653};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[8]] /* dc.roo.air.cfd.portName[4] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[32]] /* dc.roo.air.portName[4] PARAM */);
  threadData->lastEquationSolved = 3653;
}

/*
equation index: 3654
type: SIMPLE_ASSIGN
dc.roo.air.portName[3] = dc.roo.portName[3]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3654(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3654};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[31]] /* dc.roo.air.portName[3] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[83]] /* dc.roo.portName[3] PARAM */);
  threadData->lastEquationSolved = 3654;
}

/*
equation index: 3655
type: SIMPLE_ASSIGN
dc.roo.air.cfd.portName[3] = dc.roo.air.portName[3]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3655(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3655};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[7]] /* dc.roo.air.cfd.portName[3] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[31]] /* dc.roo.air.portName[3] PARAM */);
  threadData->lastEquationSolved = 3655;
}

/*
equation index: 3656
type: SIMPLE_ASSIGN
dc.roo.air.portName[2] = dc.roo.portName[2]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3656(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3656};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[30]] /* dc.roo.air.portName[2] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[82]] /* dc.roo.portName[2] PARAM */);
  threadData->lastEquationSolved = 3656;
}

/*
equation index: 3657
type: SIMPLE_ASSIGN
dc.roo.air.cfd.portName[2] = dc.roo.air.portName[2]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3657(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3657};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[6]] /* dc.roo.air.cfd.portName[2] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[30]] /* dc.roo.air.portName[2] PARAM */);
  threadData->lastEquationSolved = 3657;
}

/*
equation index: 3658
type: SIMPLE_ASSIGN
dc.roo.air.portName[1] = dc.roo.portName[1]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3658(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3658};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[29]] /* dc.roo.air.portName[1] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[81]] /* dc.roo.portName[1] PARAM */);
  threadData->lastEquationSolved = 3658;
}

/*
equation index: 3659
type: SIMPLE_ASSIGN
dc.roo.air.cfd.portName[1] = dc.roo.air.portName[1]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3659(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3659};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[5]] /* dc.roo.air.cfd.portName[1] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[29]] /* dc.roo.air.portName[1] PARAM */);
  threadData->lastEquationSolved = 3659;
}

/*
equation index: 3660
type: SIMPLE_ASSIGN
dc.roo.air.cfd.sensorName[1] = ""
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3660(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3660};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[17]] /* dc.roo.air.cfd.sensorName[1] PARAM */) = _OMC_LIT34;
  threadData->lastEquationSolved = 3660;
}

/*
equation index: 3666
type: SIMPLE_ASSIGN
dc.roo.air.cfd.surIde[6].name = "east_wall"
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3666(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3666};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[23]] /* dc.roo.air.cfd.surIde[6].name PARAM */) = _OMC_LIT88;
  threadData->lastEquationSolved = 3666;
}

/*
equation index: 3670
type: SIMPLE_ASSIGN
dc.roo.air.cfd.surIde[5].name = "west_wall"
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3670(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3670};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[22]] /* dc.roo.air.cfd.surIde[5].name PARAM */) = _OMC_LIT89;
  threadData->lastEquationSolved = 3670;
}

/*
equation index: 3674
type: SIMPLE_ASSIGN
dc.roo.air.cfd.surIde[4].name = "north_wall"
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3674(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3674};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[21]] /* dc.roo.air.cfd.surIde[4].name PARAM */) = _OMC_LIT90;
  threadData->lastEquationSolved = 3674;
}

/*
equation index: 3678
type: SIMPLE_ASSIGN
dc.roo.air.cfd.surIde[3].name = "south_wall"
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3678(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3678};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[20]] /* dc.roo.air.cfd.surIde[3].name PARAM */) = _OMC_LIT91;
  threadData->lastEquationSolved = 3678;
}

/*
equation index: 3682
type: SIMPLE_ASSIGN
dc.roo.air.cfd.surIde[2].name = "ceiling"
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3682(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3682};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[19]] /* dc.roo.air.cfd.surIde[2].name PARAM */) = _OMC_LIT92;
  threadData->lastEquationSolved = 3682;
}

/*
equation index: 3686
type: SIMPLE_ASSIGN
dc.roo.air.cfd.surIde[1].name = "floor"
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3686(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3686};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[18]] /* dc.roo.air.cfd.surIde[1].name PARAM */) = _OMC_LIT93;
  threadData->lastEquationSolved = 3686;
}

/*
equation index: 3739
type: SIMPLE_ASSIGN
dc.roo.air.cfdFilNam = dc.roo.absCfdFilNam
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3739(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3739};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[24]] /* dc.roo.air.cfdFilNam PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[3]] /* dc.roo.absCfdFilNam PARAM */);
  threadData->lastEquationSolved = 3739;
}

/*
equation index: 3740
type: SIMPLE_ASSIGN
dc.roo.air.cfd.cfdFilNam = dc.roo.air.cfdFilNam
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3740(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3740};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[4]] /* dc.roo.air.cfd.cfdFilNam PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[24]] /* dc.roo.air.cfdFilNam PARAM */);
  threadData->lastEquationSolved = 3740;
}

/*
equation index: 3741
type: SIMPLE_ASSIGN
dc.roo.air.samplePeriod = dc.roo.samplePeriod
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3741(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3741};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[416]] /* dc.roo.air.samplePeriod PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1429]] /* dc.roo.samplePeriod PARAM */);
  threadData->lastEquationSolved = 3741;
}

/*
equation index: 3742
type: SIMPLE_ASSIGN
dc.roo.air.cfd.samplePeriod = dc.roo.air.samplePeriod
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3742(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3742};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[416]] /* dc.roo.air.samplePeriod PARAM */);
  threadData->lastEquationSolved = 3742;
}

/*
equation index: 3743
type: SIMPLE_ASSIGN
dc.roo.air.sensorName[1] = ""
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3743(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3743};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[41]] /* dc.roo.air.sensorName[1] PARAM */) = _OMC_LIT34;
  threadData->lastEquationSolved = 3743;
}

/*
equation index: 3748
type: SIMPLE_ASSIGN
dc.roo.air.surBou[6].A = dc.roo.surBou[6].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3748(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3748};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[423]] /* dc.roo.air.surBou[6].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1435]] /* dc.roo.surBou[6].A PARAM */);
  threadData->lastEquationSolved = 3748;
}

/*
equation index: 3749
type: SIMPLE_ASSIGN
dc.roo.air.ASurBou[6] = dc.roo.air.surBou[6].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3749(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3749};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[157]] /* dc.roo.air.ASurBou[6] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[423]] /* dc.roo.air.surBou[6].A PARAM */);
  threadData->lastEquationSolved = 3749;
}

/*
equation index: 3750
type: SIMPLE_ASSIGN
dc.roo.air.surBou[5].A = dc.roo.surBou[5].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3750(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3750};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[422]] /* dc.roo.air.surBou[5].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1434]] /* dc.roo.surBou[5].A PARAM */);
  threadData->lastEquationSolved = 3750;
}

/*
equation index: 3751
type: SIMPLE_ASSIGN
dc.roo.air.ASurBou[5] = dc.roo.air.surBou[5].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3751(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3751};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[156]] /* dc.roo.air.ASurBou[5] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[422]] /* dc.roo.air.surBou[5].A PARAM */);
  threadData->lastEquationSolved = 3751;
}

/*
equation index: 3752
type: SIMPLE_ASSIGN
dc.roo.air.surBou[4].A = dc.roo.surBou[4].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3752(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3752};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[421]] /* dc.roo.air.surBou[4].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1433]] /* dc.roo.surBou[4].A PARAM */);
  threadData->lastEquationSolved = 3752;
}

/*
equation index: 3753
type: SIMPLE_ASSIGN
dc.roo.air.ASurBou[4] = dc.roo.air.surBou[4].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3753(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3753};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[155]] /* dc.roo.air.ASurBou[4] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[421]] /* dc.roo.air.surBou[4].A PARAM */);
  threadData->lastEquationSolved = 3753;
}

/*
equation index: 3754
type: SIMPLE_ASSIGN
dc.roo.air.surBou[3].A = dc.roo.surBou[3].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3754(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3754};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[420]] /* dc.roo.air.surBou[3].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1432]] /* dc.roo.surBou[3].A PARAM */);
  threadData->lastEquationSolved = 3754;
}

/*
equation index: 3755
type: SIMPLE_ASSIGN
dc.roo.air.ASurBou[3] = dc.roo.air.surBou[3].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3755(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3755};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[154]] /* dc.roo.air.ASurBou[3] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[420]] /* dc.roo.air.surBou[3].A PARAM */);
  threadData->lastEquationSolved = 3755;
}

/*
equation index: 3756
type: SIMPLE_ASSIGN
dc.roo.air.surBou[2].A = dc.roo.surBou[2].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3756(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3756};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[419]] /* dc.roo.air.surBou[2].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1431]] /* dc.roo.surBou[2].A PARAM */);
  threadData->lastEquationSolved = 3756;
}

/*
equation index: 3757
type: SIMPLE_ASSIGN
dc.roo.air.ASurBou[2] = dc.roo.air.surBou[2].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3757(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3757};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[153]] /* dc.roo.air.ASurBou[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[419]] /* dc.roo.air.surBou[2].A PARAM */);
  threadData->lastEquationSolved = 3757;
}

/*
equation index: 3758
type: SIMPLE_ASSIGN
dc.roo.air.surBou[1].A = dc.roo.surBou[1].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3758(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3758};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[418]] /* dc.roo.air.surBou[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1430]] /* dc.roo.surBou[1].A PARAM */);
  threadData->lastEquationSolved = 3758;
}

/*
equation index: 3759
type: SIMPLE_ASSIGN
dc.roo.air.ASurBou[1] = dc.roo.air.surBou[1].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3759(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3759};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[152]] /* dc.roo.air.ASurBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[418]] /* dc.roo.air.surBou[1].A PARAM */);
  threadData->lastEquationSolved = 3759;
}

/*
equation index: 3760
type: SIMPLE_ASSIGN
dc.roo.air.datConBou[1].A = dc.roo.datConBou[1].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3760(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3760};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[240]] /* dc.roo.air.datConBou[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[486]] /* dc.roo.datConBou[1].A PARAM */);
  threadData->lastEquationSolved = 3760;
}

/*
equation index: 3761
type: SIMPLE_ASSIGN
dc.roo.air.AConBou[1] = dc.roo.air.datConBou[1].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3761(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3761};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[146]] /* dc.roo.air.AConBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[240]] /* dc.roo.air.datConBou[1].A PARAM */);
  threadData->lastEquationSolved = 3761;
}

/*
equation index: 3762
type: SIMPLE_ASSIGN
dc.roo.air.datConPar[1].A = dc.roo.datConPar[1].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3762(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3762};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[345]] /* dc.roo.air.datConPar[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[591]] /* dc.roo.datConPar[1].A PARAM */);
  threadData->lastEquationSolved = 3762;
}

/*
equation index: 3763
type: SIMPLE_ASSIGN
dc.roo.air.AConPar[1] = dc.roo.air.datConPar[1].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3763(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3763};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[151]] /* dc.roo.air.AConPar[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[345]] /* dc.roo.air.datConPar[1].A PARAM */);
  threadData->lastEquationSolved = 3763;
}

/*
equation index: 3764
type: SIMPLE_ASSIGN
dc.roo.air.datConExtWin[1].AWin = dc.roo.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3764(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3764};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[286]] /* dc.roo.air.datConExtWin[1].AWin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[532]] /* dc.roo.datConExtWin[1].AWin PARAM */);
  threadData->lastEquationSolved = 3764;
}

/*
equation index: 3765
type: SIMPLE_ASSIGN
dc.roo.air.datConExtWin[1].fFra = dc.roo.datConExtWin[1].fFra
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3765(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3765};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[290]] /* dc.roo.air.datConExtWin[1].fFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[536]] /* dc.roo.datConExtWin[1].fFra PARAM */);
  threadData->lastEquationSolved = 3765;
}

/*
equation index: 3766
type: SIMPLE_ASSIGN
dc.roo.air.AConExtWinFra[1] = dc.roo.air.datConExtWin[1].fFra * dc.roo.air.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3766(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3766};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[148]] /* dc.roo.air.AConExtWinFra[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[290]] /* dc.roo.air.datConExtWin[1].fFra PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[286]] /* dc.roo.air.datConExtWin[1].AWin PARAM */));
  threadData->lastEquationSolved = 3766;
}

/*
equation index: 3767
type: SIMPLE_ASSIGN
dc.roo.air.AConExtWinGla[1] = (1.0 - dc.roo.air.datConExtWin[1].fFra) * dc.roo.air.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3767(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3767};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[149]] /* dc.roo.air.AConExtWinGla[1] PARAM */) = (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[290]] /* dc.roo.air.datConExtWin[1].fFra PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[286]] /* dc.roo.air.datConExtWin[1].AWin PARAM */));
  threadData->lastEquationSolved = 3767;
}

/*
equation index: 3768
type: SIMPLE_ASSIGN
dc.roo.air.datConExtWin[1].AOpa = dc.roo.datConExtWin[1].AOpa
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3768(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3768};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[285]] /* dc.roo.air.datConExtWin[1].AOpa PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[531]] /* dc.roo.datConExtWin[1].AOpa PARAM */);
  threadData->lastEquationSolved = 3768;
}

/*
equation index: 3769
type: SIMPLE_ASSIGN
dc.roo.air.AConExtWinOpa[1] = dc.roo.air.datConExtWin[1].AOpa
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3769(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3769};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[150]] /* dc.roo.air.AConExtWinOpa[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[285]] /* dc.roo.air.datConExtWin[1].AOpa PARAM */);
  threadData->lastEquationSolved = 3769;
}

/*
equation index: 3770
type: SIMPLE_ASSIGN
dc.roo.air.datConExt[1].A = dc.roo.datConExt[1].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3770(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3770};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[261]] /* dc.roo.air.datConExt[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[507]] /* dc.roo.datConExt[1].A PARAM */);
  threadData->lastEquationSolved = 3770;
}

/*
equation index: 3771
type: SIMPLE_ASSIGN
dc.roo.air.AConExt[1] = dc.roo.air.datConExt[1].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3771(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3771};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[147]] /* dc.roo.air.AConExt[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[261]] /* dc.roo.air.datConExt[1].A PARAM */);
  threadData->lastEquationSolved = 3771;
}

/*
equation index: 3779
type: SIMPLE_ASSIGN
dc.roo.air.dummyCon.R = dc.roo.air.dummyCon.material[1].R
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3779(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3779};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[366]] /* dc.roo.air.dummyCon.R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[372]] /* dc.roo.air.dummyCon.material[1].R PARAM */);
  threadData->lastEquationSolved = 3779;
}

/*
equation index: 3786
type: SIMPLE_ASSIGN
dc.roo.air.surBou[6].name = dc.roo.surBou[6].name
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3786(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3786};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[47]] /* dc.roo.air.surBou[6].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[110]] /* dc.roo.surBou[6].name PARAM */);
  threadData->lastEquationSolved = 3786;
}

/*
equation index: 3788
type: SIMPLE_ASSIGN
dc.roo.air.surBou[6].absSol = dc.roo.surBou[6].absSol
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3788(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3788};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[435]] /* dc.roo.air.surBou[6].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1447]] /* dc.roo.surBou[6].absSol PARAM */);
  threadData->lastEquationSolved = 3788;
}

/*
equation index: 3789
type: SIMPLE_ASSIGN
dc.roo.air.surBou[6].absIR = dc.roo.surBou[6].absIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3789(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3789};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[429]] /* dc.roo.air.surBou[6].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1441]] /* dc.roo.surBou[6].absIR PARAM */);
  threadData->lastEquationSolved = 3789;
}

/*
equation index: 3792
type: SIMPLE_ASSIGN
dc.roo.air.surBou[5].name = dc.roo.surBou[5].name
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3792(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3792};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[46]] /* dc.roo.air.surBou[5].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[109]] /* dc.roo.surBou[5].name PARAM */);
  threadData->lastEquationSolved = 3792;
}

/*
equation index: 3794
type: SIMPLE_ASSIGN
dc.roo.air.surBou[5].absSol = dc.roo.surBou[5].absSol
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3794(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3794};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[434]] /* dc.roo.air.surBou[5].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1446]] /* dc.roo.surBou[5].absSol PARAM */);
  threadData->lastEquationSolved = 3794;
}

/*
equation index: 3795
type: SIMPLE_ASSIGN
dc.roo.air.surBou[5].absIR = dc.roo.surBou[5].absIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3795(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3795};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[428]] /* dc.roo.air.surBou[5].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1440]] /* dc.roo.surBou[5].absIR PARAM */);
  threadData->lastEquationSolved = 3795;
}

/*
equation index: 3798
type: SIMPLE_ASSIGN
dc.roo.air.surBou[4].name = dc.roo.surBou[4].name
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3798(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3798};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[45]] /* dc.roo.air.surBou[4].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[108]] /* dc.roo.surBou[4].name PARAM */);
  threadData->lastEquationSolved = 3798;
}

/*
equation index: 3800
type: SIMPLE_ASSIGN
dc.roo.air.surBou[4].absSol = dc.roo.surBou[4].absSol
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3800(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3800};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[433]] /* dc.roo.air.surBou[4].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1445]] /* dc.roo.surBou[4].absSol PARAM */);
  threadData->lastEquationSolved = 3800;
}

/*
equation index: 3801
type: SIMPLE_ASSIGN
dc.roo.air.surBou[4].absIR = dc.roo.surBou[4].absIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3801(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3801};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[427]] /* dc.roo.air.surBou[4].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1439]] /* dc.roo.surBou[4].absIR PARAM */);
  threadData->lastEquationSolved = 3801;
}

/*
equation index: 3804
type: SIMPLE_ASSIGN
dc.roo.air.surBou[3].name = dc.roo.surBou[3].name
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3804(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3804};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[44]] /* dc.roo.air.surBou[3].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[107]] /* dc.roo.surBou[3].name PARAM */);
  threadData->lastEquationSolved = 3804;
}

/*
equation index: 3806
type: SIMPLE_ASSIGN
dc.roo.air.surBou[3].absSol = dc.roo.surBou[3].absSol
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3806(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3806};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[432]] /* dc.roo.air.surBou[3].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1444]] /* dc.roo.surBou[3].absSol PARAM */);
  threadData->lastEquationSolved = 3806;
}

/*
equation index: 3807
type: SIMPLE_ASSIGN
dc.roo.air.surBou[3].absIR = dc.roo.surBou[3].absIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3807(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3807};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[426]] /* dc.roo.air.surBou[3].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1438]] /* dc.roo.surBou[3].absIR PARAM */);
  threadData->lastEquationSolved = 3807;
}

/*
equation index: 3810
type: SIMPLE_ASSIGN
dc.roo.air.surBou[2].name = dc.roo.surBou[2].name
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3810(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3810};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[43]] /* dc.roo.air.surBou[2].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[106]] /* dc.roo.surBou[2].name PARAM */);
  threadData->lastEquationSolved = 3810;
}

/*
equation index: 3812
type: SIMPLE_ASSIGN
dc.roo.air.surBou[2].absSol = dc.roo.surBou[2].absSol
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3812(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3812};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[431]] /* dc.roo.air.surBou[2].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1443]] /* dc.roo.surBou[2].absSol PARAM */);
  threadData->lastEquationSolved = 3812;
}

/*
equation index: 3813
type: SIMPLE_ASSIGN
dc.roo.air.surBou[2].absIR = dc.roo.surBou[2].absIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3813(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3813};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[425]] /* dc.roo.air.surBou[2].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1437]] /* dc.roo.surBou[2].absIR PARAM */);
  threadData->lastEquationSolved = 3813;
}

/*
equation index: 3816
type: SIMPLE_ASSIGN
dc.roo.air.surBou[1].name = dc.roo.surBou[1].name
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3816(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3816};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[42]] /* dc.roo.air.surBou[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[105]] /* dc.roo.surBou[1].name PARAM */);
  threadData->lastEquationSolved = 3816;
}

/*
equation index: 3818
type: SIMPLE_ASSIGN
dc.roo.air.surBou[1].absSol = dc.roo.surBou[1].absSol
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3818(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3818};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[430]] /* dc.roo.air.surBou[1].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1442]] /* dc.roo.surBou[1].absSol PARAM */);
  threadData->lastEquationSolved = 3818;
}

/*
equation index: 3819
type: SIMPLE_ASSIGN
dc.roo.air.surBou[1].absIR = dc.roo.surBou[1].absIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3819(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3819};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[424]] /* dc.roo.air.surBou[1].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1436]] /* dc.roo.surBou[1].absIR PARAM */);
  threadData->lastEquationSolved = 3819;
}

/*
equation index: 3824
type: SIMPLE_ASSIGN
dc.roo.air.datConBou[1].T_b_start = dc.roo.datConBou[1].T_b_start
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3824(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3824};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[242]] /* dc.roo.air.datConBou[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[488]] /* dc.roo.datConBou[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 3824;
}

/*
equation index: 3825
type: SIMPLE_ASSIGN
dc.roo.air.datConBou[1].T_a_start = dc.roo.datConBou[1].T_a_start
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3825(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3825};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[241]] /* dc.roo.air.datConBou[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[487]] /* dc.roo.datConBou[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 3825;
}

/*
equation index: 3829
type: SIMPLE_ASSIGN
dc.roo.air.datConBou[1].azi = dc.roo.datConBou[1].azi
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3829(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3829};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[243]] /* dc.roo.air.datConBou[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[489]] /* dc.roo.datConBou[1].azi PARAM */);
  threadData->lastEquationSolved = 3829;
}

/*
equation index: 3831
type: SIMPLE_ASSIGN
dc.roo.air.datConBou[1].layers.roughness_a = dc.roo.datConBou[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3831(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3831};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[97]] /* dc.roo.air.datConBou[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[173]] /* dc.roo.datConBou[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 3831;
}

/*
equation index: 3832
type: SIMPLE_ASSIGN
dc.roo.air.datConBou[1].layers.absSol_b = dc.roo.datConBou[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3832(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3832};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[248]] /* dc.roo.air.datConBou[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[494]] /* dc.roo.datConBou[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 3832;
}

/*
equation index: 3833
type: SIMPLE_ASSIGN
dc.roo.air.datConBou[1].layers.absSol_a = dc.roo.datConBou[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3833(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3833};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[247]] /* dc.roo.air.datConBou[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[493]] /* dc.roo.datConBou[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 3833;
}

/*
equation index: 3834
type: SIMPLE_ASSIGN
dc.roo.air.datConBou[1].layers.absIR_b = dc.roo.datConBou[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3834(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3834};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[246]] /* dc.roo.air.datConBou[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[492]] /* dc.roo.datConBou[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 3834;
}

/*
equation index: 3835
type: SIMPLE_ASSIGN
dc.roo.air.datConBou[1].layers.absIR_a = dc.roo.datConBou[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3835(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3835};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[245]] /* dc.roo.air.datConBou[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[491]] /* dc.roo.datConBou[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 3835;
}

/*
equation index: 3838
type: SIMPLE_ASSIGN
dc.roo.air.datConBou[1].layers.material[1].LHea = dc.roo.datConBou[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3838(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3838};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[249]] /* dc.roo.air.datConBou[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[495]] /* dc.roo.datConBou[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 3838;
}

/*
equation index: 3841
type: SIMPLE_ASSIGN
dc.roo.air.datConBou[1].layers.material[1].nStaReal = dc.roo.datConBou[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3841(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3841};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[256]] /* dc.roo.air.datConBou[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[502]] /* dc.roo.datConBou[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 3841;
}

/*
equation index: 3842
type: SIMPLE_ASSIGN
dc.roo.air.datConBou[1].layers.material[1].piMat = dc.roo.datConBou[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3842(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3842};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[257]] /* dc.roo.air.datConBou[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[503]] /* dc.roo.datConBou[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 3842;
}

/*
equation index: 3843
type: SIMPLE_ASSIGN
dc.roo.air.datConBou[1].layers.material[1].piRef = dc.roo.datConBou[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3843(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3843};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[258]] /* dc.roo.air.datConBou[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[504]] /* dc.roo.datConBou[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 3843;
}

/*
equation index: 3846
type: SIMPLE_ASSIGN
dc.roo.air.datConBou[1].layers.material[1].nStaRef = dc.roo.datConBou[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3846(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3846};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[94]] /* dc.roo.air.datConBou[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[170]] /* dc.roo.datConBou[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 3846;
}

/*
equation index: 3847
type: SIMPLE_ASSIGN
dc.roo.air.datConBou[1].layers.material[1].R = dc.roo.datConBou[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3847(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3847};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[250]] /* dc.roo.air.datConBou[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[496]] /* dc.roo.datConBou[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 3847;
}

/*
equation index: 3848
type: SIMPLE_ASSIGN
dc.roo.air.datConBou[1].layers.material[1].d = dc.roo.datConBou[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3848(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3848};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[254]] /* dc.roo.air.datConBou[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[500]] /* dc.roo.datConBou[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 3848;
}

/*
equation index: 3849
type: SIMPLE_ASSIGN
dc.roo.air.datConBou[1].layers.material[1].c = dc.roo.datConBou[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3849(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3849};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[253]] /* dc.roo.air.datConBou[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[499]] /* dc.roo.datConBou[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 3849;
}

/*
equation index: 3850
type: SIMPLE_ASSIGN
dc.roo.air.datConBou[1].layers.material[1].k = dc.roo.datConBou[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3850(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3850};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[255]] /* dc.roo.air.datConBou[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[501]] /* dc.roo.datConBou[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 3850;
}

/*
equation index: 3851
type: SIMPLE_ASSIGN
dc.roo.air.datConBou[1].layers.material[1].x = dc.roo.datConBou[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3851(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3851};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[259]] /* dc.roo.air.datConBou[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[505]] /* dc.roo.datConBou[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 3851;
}

/*
equation index: 3853
type: SIMPLE_ASSIGN
dc.roo.air.datConBou[1].name = dc.roo.datConBou[1].name
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3853(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3853};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[25]] /* dc.roo.air.datConBou[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[55]] /* dc.roo.datConBou[1].name PARAM */);
  threadData->lastEquationSolved = 3853;
}

/*
equation index: 3857
type: SIMPLE_ASSIGN
dc.roo.air.datConPar[1].T_b_start = dc.roo.datConPar[1].T_b_start
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3857(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3857};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[347]] /* dc.roo.air.datConPar[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[593]] /* dc.roo.datConPar[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 3857;
}

/*
equation index: 3858
type: SIMPLE_ASSIGN
dc.roo.air.datConPar[1].T_a_start = dc.roo.datConPar[1].T_a_start
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3858(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3858};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[346]] /* dc.roo.air.datConPar[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[592]] /* dc.roo.datConPar[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 3858;
}

/*
equation index: 3862
type: SIMPLE_ASSIGN
dc.roo.air.datConPar[1].azi = dc.roo.datConPar[1].azi
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3862(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3862};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[348]] /* dc.roo.air.datConPar[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[594]] /* dc.roo.datConPar[1].azi PARAM */);
  threadData->lastEquationSolved = 3862;
}

/*
equation index: 3864
type: SIMPLE_ASSIGN
dc.roo.air.datConPar[1].layers.roughness_a = dc.roo.datConPar[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3864(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3864};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[115]] /* dc.roo.air.datConPar[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[191]] /* dc.roo.datConPar[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 3864;
}

/*
equation index: 3865
type: SIMPLE_ASSIGN
dc.roo.air.datConPar[1].layers.absSol_b = dc.roo.datConPar[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3865(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3865};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[353]] /* dc.roo.air.datConPar[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[599]] /* dc.roo.datConPar[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 3865;
}

/*
equation index: 3866
type: SIMPLE_ASSIGN
dc.roo.air.datConPar[1].layers.absSol_a = dc.roo.datConPar[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3866(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3866};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[352]] /* dc.roo.air.datConPar[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[598]] /* dc.roo.datConPar[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 3866;
}

/*
equation index: 3867
type: SIMPLE_ASSIGN
dc.roo.air.datConPar[1].layers.absIR_b = dc.roo.datConPar[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3867(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3867};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[351]] /* dc.roo.air.datConPar[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[597]] /* dc.roo.datConPar[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 3867;
}
OMC_DISABLE_OPT
void s000_baseline_updateBoundParameters_1(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[405])(DATA*, threadData_t*) = {
    s000_baseline_eqFunction_3099,
    s000_baseline_eqFunction_3102,
    s000_baseline_eqFunction_3103,
    s000_baseline_eqFunction_3107,
    s000_baseline_eqFunction_3109,
    s000_baseline_eqFunction_3110,
    s000_baseline_eqFunction_3111,
    s000_baseline_eqFunction_3114,
    s000_baseline_eqFunction_3117,
    s000_baseline_eqFunction_3118,
    s000_baseline_eqFunction_3119,
    s000_baseline_eqFunction_3122,
    s000_baseline_eqFunction_3123,
    s000_baseline_eqFunction_3124,
    s000_baseline_eqFunction_3125,
    s000_baseline_eqFunction_3126,
    s000_baseline_eqFunction_3127,
    s000_baseline_eqFunction_3129,
    s000_baseline_eqFunction_3133,
    s000_baseline_eqFunction_3134,
    s000_baseline_eqFunction_3135,
    s000_baseline_eqFunction_3136,
    s000_baseline_eqFunction_3137,
    s000_baseline_eqFunction_3138,
    s000_baseline_eqFunction_3139,
    s000_baseline_eqFunction_3140,
    s000_baseline_eqFunction_3141,
    s000_baseline_eqFunction_3142,
    s000_baseline_eqFunction_3143,
    s000_baseline_eqFunction_3144,
    s000_baseline_eqFunction_3145,
    s000_baseline_eqFunction_3146,
    s000_baseline_eqFunction_3147,
    s000_baseline_eqFunction_3148,
    s000_baseline_eqFunction_3149,
    s000_baseline_eqFunction_3150,
    s000_baseline_eqFunction_3151,
    s000_baseline_eqFunction_3152,
    s000_baseline_eqFunction_3153,
    s000_baseline_eqFunction_3154,
    s000_baseline_eqFunction_3155,
    s000_baseline_eqFunction_3156,
    s000_baseline_eqFunction_3157,
    s000_baseline_eqFunction_3160,
    s000_baseline_eqFunction_3161,
    s000_baseline_eqFunction_3163,
    s000_baseline_eqFunction_3165,
    s000_baseline_eqFunction_3167,
    s000_baseline_eqFunction_3169,
    s000_baseline_eqFunction_3170,
    s000_baseline_eqFunction_3171,
    s000_baseline_eqFunction_3172,
    s000_baseline_eqFunction_3173,
    s000_baseline_eqFunction_3174,
    s000_baseline_eqFunction_3177,
    s000_baseline_eqFunction_3178,
    s000_baseline_eqFunction_3182,
    s000_baseline_eqFunction_3184,
    s000_baseline_eqFunction_3185,
    s000_baseline_eqFunction_3186,
    s000_baseline_eqFunction_3187,
    s000_baseline_eqFunction_3190,
    s000_baseline_eqFunction_3193,
    s000_baseline_eqFunction_3194,
    s000_baseline_eqFunction_3195,
    s000_baseline_eqFunction_3198,
    s000_baseline_eqFunction_3199,
    s000_baseline_eqFunction_3200,
    s000_baseline_eqFunction_3201,
    s000_baseline_eqFunction_3202,
    s000_baseline_eqFunction_3203,
    s000_baseline_eqFunction_3205,
    s000_baseline_eqFunction_3206,
    s000_baseline_eqFunction_3209,
    s000_baseline_eqFunction_3210,
    s000_baseline_eqFunction_3214,
    s000_baseline_eqFunction_3216,
    s000_baseline_eqFunction_3217,
    s000_baseline_eqFunction_3218,
    s000_baseline_eqFunction_3219,
    s000_baseline_eqFunction_3222,
    s000_baseline_eqFunction_3225,
    s000_baseline_eqFunction_3226,
    s000_baseline_eqFunction_3227,
    s000_baseline_eqFunction_3230,
    s000_baseline_eqFunction_3231,
    s000_baseline_eqFunction_3232,
    s000_baseline_eqFunction_3233,
    s000_baseline_eqFunction_3234,
    s000_baseline_eqFunction_3235,
    s000_baseline_eqFunction_3237,
    s000_baseline_eqFunction_3254,
    s000_baseline_eqFunction_3255,
    s000_baseline_eqFunction_3256,
    s000_baseline_eqFunction_3257,
    s000_baseline_eqFunction_3258,
    s000_baseline_eqFunction_3259,
    s000_baseline_eqFunction_3260,
    s000_baseline_eqFunction_3261,
    s000_baseline_eqFunction_3262,
    s000_baseline_eqFunction_3263,
    s000_baseline_eqFunction_3264,
    s000_baseline_eqFunction_3265,
    s000_baseline_eqFunction_3266,
    s000_baseline_eqFunction_3267,
    s000_baseline_eqFunction_3268,
    s000_baseline_eqFunction_3269,
    s000_baseline_eqFunction_3270,
    s000_baseline_eqFunction_3271,
    s000_baseline_eqFunction_3272,
    s000_baseline_eqFunction_3273,
    s000_baseline_eqFunction_3274,
    s000_baseline_eqFunction_3275,
    s000_baseline_eqFunction_3276,
    s000_baseline_eqFunction_3277,
    s000_baseline_eqFunction_3278,
    s000_baseline_eqFunction_3279,
    s000_baseline_eqFunction_3280,
    s000_baseline_eqFunction_3281,
    s000_baseline_eqFunction_3282,
    s000_baseline_eqFunction_3283,
    s000_baseline_eqFunction_3284,
    s000_baseline_eqFunction_3285,
    s000_baseline_eqFunction_3286,
    s000_baseline_eqFunction_3287,
    s000_baseline_eqFunction_3288,
    s000_baseline_eqFunction_3289,
    s000_baseline_eqFunction_3290,
    s000_baseline_eqFunction_3291,
    s000_baseline_eqFunction_3292,
    s000_baseline_eqFunction_3293,
    s000_baseline_eqFunction_3294,
    s000_baseline_eqFunction_3295,
    s000_baseline_eqFunction_3296,
    s000_baseline_eqFunction_3297,
    s000_baseline_eqFunction_3298,
    s000_baseline_eqFunction_3299,
    s000_baseline_eqFunction_3300,
    s000_baseline_eqFunction_3301,
    s000_baseline_eqFunction_3302,
    s000_baseline_eqFunction_3303,
    s000_baseline_eqFunction_3304,
    s000_baseline_eqFunction_3305,
    s000_baseline_eqFunction_3306,
    s000_baseline_eqFunction_3307,
    s000_baseline_eqFunction_3308,
    s000_baseline_eqFunction_3309,
    s000_baseline_eqFunction_3310,
    s000_baseline_eqFunction_3311,
    s000_baseline_eqFunction_3312,
    s000_baseline_eqFunction_3314,
    s000_baseline_eqFunction_3315,
    s000_baseline_eqFunction_3316,
    s000_baseline_eqFunction_3317,
    s000_baseline_eqFunction_3318,
    s000_baseline_eqFunction_3319,
    s000_baseline_eqFunction_3325,
    s000_baseline_eqFunction_3331,
    s000_baseline_eqFunction_3332,
    s000_baseline_eqFunction_3334,
    s000_baseline_eqFunction_3336,
    s000_baseline_eqFunction_3337,
    s000_baseline_eqFunction_3339,
    s000_baseline_eqFunction_3341,
    s000_baseline_eqFunction_3342,
    s000_baseline_eqFunction_3344,
    s000_baseline_eqFunction_3346,
    s000_baseline_eqFunction_3347,
    s000_baseline_eqFunction_3349,
    s000_baseline_eqFunction_3351,
    s000_baseline_eqFunction_3352,
    s000_baseline_eqFunction_3354,
    s000_baseline_eqFunction_3356,
    s000_baseline_eqFunction_3357,
    s000_baseline_eqFunction_3359,
    s000_baseline_eqFunction_3361,
    s000_baseline_eqFunction_3364,
    s000_baseline_eqFunction_3365,
    s000_baseline_eqFunction_3369,
    s000_baseline_eqFunction_3371,
    s000_baseline_eqFunction_3372,
    s000_baseline_eqFunction_3373,
    s000_baseline_eqFunction_3374,
    s000_baseline_eqFunction_3377,
    s000_baseline_eqFunction_3380,
    s000_baseline_eqFunction_3381,
    s000_baseline_eqFunction_3382,
    s000_baseline_eqFunction_3385,
    s000_baseline_eqFunction_3386,
    s000_baseline_eqFunction_3387,
    s000_baseline_eqFunction_3388,
    s000_baseline_eqFunction_3389,
    s000_baseline_eqFunction_3390,
    s000_baseline_eqFunction_3392,
    s000_baseline_eqFunction_3393,
    s000_baseline_eqFunction_3396,
    s000_baseline_eqFunction_3397,
    s000_baseline_eqFunction_3401,
    s000_baseline_eqFunction_3403,
    s000_baseline_eqFunction_3404,
    s000_baseline_eqFunction_3405,
    s000_baseline_eqFunction_3408,
    s000_baseline_eqFunction_3411,
    s000_baseline_eqFunction_3412,
    s000_baseline_eqFunction_3413,
    s000_baseline_eqFunction_3416,
    s000_baseline_eqFunction_3417,
    s000_baseline_eqFunction_3418,
    s000_baseline_eqFunction_3419,
    s000_baseline_eqFunction_3420,
    s000_baseline_eqFunction_3421,
    s000_baseline_eqFunction_3423,
    s000_baseline_eqFunction_3427,
    s000_baseline_eqFunction_3428,
    s000_baseline_eqFunction_3429,
    s000_baseline_eqFunction_3430,
    s000_baseline_eqFunction_3431,
    s000_baseline_eqFunction_3432,
    s000_baseline_eqFunction_3433,
    s000_baseline_eqFunction_3434,
    s000_baseline_eqFunction_3435,
    s000_baseline_eqFunction_3436,
    s000_baseline_eqFunction_3437,
    s000_baseline_eqFunction_3438,
    s000_baseline_eqFunction_3439,
    s000_baseline_eqFunction_3440,
    s000_baseline_eqFunction_3441,
    s000_baseline_eqFunction_3442,
    s000_baseline_eqFunction_3443,
    s000_baseline_eqFunction_3444,
    s000_baseline_eqFunction_3445,
    s000_baseline_eqFunction_3446,
    s000_baseline_eqFunction_3447,
    s000_baseline_eqFunction_3448,
    s000_baseline_eqFunction_3449,
    s000_baseline_eqFunction_3450,
    s000_baseline_eqFunction_3451,
    s000_baseline_eqFunction_3454,
    s000_baseline_eqFunction_3455,
    s000_baseline_eqFunction_3457,
    s000_baseline_eqFunction_3459,
    s000_baseline_eqFunction_3461,
    s000_baseline_eqFunction_3463,
    s000_baseline_eqFunction_3464,
    s000_baseline_eqFunction_3465,
    s000_baseline_eqFunction_3466,
    s000_baseline_eqFunction_3467,
    s000_baseline_eqFunction_3468,
    s000_baseline_eqFunction_3471,
    s000_baseline_eqFunction_3472,
    s000_baseline_eqFunction_3476,
    s000_baseline_eqFunction_3478,
    s000_baseline_eqFunction_3479,
    s000_baseline_eqFunction_3480,
    s000_baseline_eqFunction_3481,
    s000_baseline_eqFunction_3484,
    s000_baseline_eqFunction_3487,
    s000_baseline_eqFunction_3488,
    s000_baseline_eqFunction_3489,
    s000_baseline_eqFunction_3492,
    s000_baseline_eqFunction_3493,
    s000_baseline_eqFunction_3494,
    s000_baseline_eqFunction_3495,
    s000_baseline_eqFunction_3496,
    s000_baseline_eqFunction_3497,
    s000_baseline_eqFunction_3499,
    s000_baseline_eqFunction_3500,
    s000_baseline_eqFunction_3503,
    s000_baseline_eqFunction_3504,
    s000_baseline_eqFunction_3508,
    s000_baseline_eqFunction_3510,
    s000_baseline_eqFunction_3511,
    s000_baseline_eqFunction_3512,
    s000_baseline_eqFunction_3513,
    s000_baseline_eqFunction_3516,
    s000_baseline_eqFunction_3519,
    s000_baseline_eqFunction_3520,
    s000_baseline_eqFunction_3521,
    s000_baseline_eqFunction_3524,
    s000_baseline_eqFunction_3525,
    s000_baseline_eqFunction_3526,
    s000_baseline_eqFunction_3527,
    s000_baseline_eqFunction_3528,
    s000_baseline_eqFunction_3529,
    s000_baseline_eqFunction_3531,
    s000_baseline_eqFunction_3572,
    s000_baseline_eqFunction_3573,
    s000_baseline_eqFunction_3574,
    s000_baseline_eqFunction_3575,
    s000_baseline_eqFunction_3576,
    s000_baseline_eqFunction_3577,
    s000_baseline_eqFunction_3578,
    s000_baseline_eqFunction_3580,
    s000_baseline_eqFunction_3591,
    s000_baseline_eqFunction_3595,
    s000_baseline_eqFunction_3599,
    s000_baseline_eqFunction_3603,
    s000_baseline_eqFunction_3607,
    s000_baseline_eqFunction_3611,
    s000_baseline_eqFunction_3634,
    s000_baseline_eqFunction_3636,
    s000_baseline_eqFunction_3637,
    s000_baseline_eqFunction_3638,
    s000_baseline_eqFunction_3639,
    s000_baseline_eqFunction_3640,
    s000_baseline_eqFunction_3641,
    s000_baseline_eqFunction_3642,
    s000_baseline_eqFunction_3643,
    s000_baseline_eqFunction_3644,
    s000_baseline_eqFunction_3645,
    s000_baseline_eqFunction_3646,
    s000_baseline_eqFunction_3647,
    s000_baseline_eqFunction_3648,
    s000_baseline_eqFunction_3649,
    s000_baseline_eqFunction_3650,
    s000_baseline_eqFunction_3651,
    s000_baseline_eqFunction_3652,
    s000_baseline_eqFunction_3653,
    s000_baseline_eqFunction_3654,
    s000_baseline_eqFunction_3655,
    s000_baseline_eqFunction_3656,
    s000_baseline_eqFunction_3657,
    s000_baseline_eqFunction_3658,
    s000_baseline_eqFunction_3659,
    s000_baseline_eqFunction_3660,
    s000_baseline_eqFunction_3666,
    s000_baseline_eqFunction_3670,
    s000_baseline_eqFunction_3674,
    s000_baseline_eqFunction_3678,
    s000_baseline_eqFunction_3682,
    s000_baseline_eqFunction_3686,
    s000_baseline_eqFunction_3739,
    s000_baseline_eqFunction_3740,
    s000_baseline_eqFunction_3741,
    s000_baseline_eqFunction_3742,
    s000_baseline_eqFunction_3743,
    s000_baseline_eqFunction_3748,
    s000_baseline_eqFunction_3749,
    s000_baseline_eqFunction_3750,
    s000_baseline_eqFunction_3751,
    s000_baseline_eqFunction_3752,
    s000_baseline_eqFunction_3753,
    s000_baseline_eqFunction_3754,
    s000_baseline_eqFunction_3755,
    s000_baseline_eqFunction_3756,
    s000_baseline_eqFunction_3757,
    s000_baseline_eqFunction_3758,
    s000_baseline_eqFunction_3759,
    s000_baseline_eqFunction_3760,
    s000_baseline_eqFunction_3761,
    s000_baseline_eqFunction_3762,
    s000_baseline_eqFunction_3763,
    s000_baseline_eqFunction_3764,
    s000_baseline_eqFunction_3765,
    s000_baseline_eqFunction_3766,
    s000_baseline_eqFunction_3767,
    s000_baseline_eqFunction_3768,
    s000_baseline_eqFunction_3769,
    s000_baseline_eqFunction_3770,
    s000_baseline_eqFunction_3771,
    s000_baseline_eqFunction_3779,
    s000_baseline_eqFunction_3786,
    s000_baseline_eqFunction_3788,
    s000_baseline_eqFunction_3789,
    s000_baseline_eqFunction_3792,
    s000_baseline_eqFunction_3794,
    s000_baseline_eqFunction_3795,
    s000_baseline_eqFunction_3798,
    s000_baseline_eqFunction_3800,
    s000_baseline_eqFunction_3801,
    s000_baseline_eqFunction_3804,
    s000_baseline_eqFunction_3806,
    s000_baseline_eqFunction_3807,
    s000_baseline_eqFunction_3810,
    s000_baseline_eqFunction_3812,
    s000_baseline_eqFunction_3813,
    s000_baseline_eqFunction_3816,
    s000_baseline_eqFunction_3818,
    s000_baseline_eqFunction_3819,
    s000_baseline_eqFunction_3824,
    s000_baseline_eqFunction_3825,
    s000_baseline_eqFunction_3829,
    s000_baseline_eqFunction_3831,
    s000_baseline_eqFunction_3832,
    s000_baseline_eqFunction_3833,
    s000_baseline_eqFunction_3834,
    s000_baseline_eqFunction_3835,
    s000_baseline_eqFunction_3838,
    s000_baseline_eqFunction_3841,
    s000_baseline_eqFunction_3842,
    s000_baseline_eqFunction_3843,
    s000_baseline_eqFunction_3846,
    s000_baseline_eqFunction_3847,
    s000_baseline_eqFunction_3848,
    s000_baseline_eqFunction_3849,
    s000_baseline_eqFunction_3850,
    s000_baseline_eqFunction_3851,
    s000_baseline_eqFunction_3853,
    s000_baseline_eqFunction_3857,
    s000_baseline_eqFunction_3858,
    s000_baseline_eqFunction_3862,
    s000_baseline_eqFunction_3864,
    s000_baseline_eqFunction_3865,
    s000_baseline_eqFunction_3866,
    s000_baseline_eqFunction_3867
  };
  
  for (int id = 0; id < 405; id++) {
    eqFunctions[id](data, threadData);
  }
}
#if defined(__cplusplus)
}
#endif