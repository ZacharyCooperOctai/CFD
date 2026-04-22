#include "s000_baseline_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 3090
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConPar[1].azi = dc.roo.datConPar[1].azi
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3090(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3090};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[828]] /* dc.roo.irRadExc.datConPar[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[592]] /* dc.roo.datConPar[1].azi PARAM */);
  threadData->lastEquationSolved = 3090;
}

/*
equation index: 3092
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConPar[1].layers.roughness_a = dc.roo.datConPar[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3092(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3092};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[229]] /* dc.roo.irRadExc.datConPar[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[190]] /* dc.roo.datConPar[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 3092;
}

/*
equation index: 3093
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConPar[1].layers.absSol_b = dc.roo.datConPar[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3093(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3093};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[833]] /* dc.roo.irRadExc.datConPar[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[597]] /* dc.roo.datConPar[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 3093;
}

/*
equation index: 3094
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConPar[1].layers.absSol_a = dc.roo.datConPar[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3094(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3094};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[832]] /* dc.roo.irRadExc.datConPar[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[596]] /* dc.roo.datConPar[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 3094;
}

/*
equation index: 3097
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConPar[1].layers.material[1].LHea = dc.roo.datConPar[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3097(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3097};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[834]] /* dc.roo.irRadExc.datConPar[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[598]] /* dc.roo.datConPar[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 3097;
}

/*
equation index: 3100
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConPar[1].layers.material[1].nStaReal = dc.roo.datConPar[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3100(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3100};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[841]] /* dc.roo.irRadExc.datConPar[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[605]] /* dc.roo.datConPar[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 3100;
}

/*
equation index: 3101
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConPar[1].layers.material[1].piMat = dc.roo.datConPar[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3101(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3101};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[842]] /* dc.roo.irRadExc.datConPar[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[606]] /* dc.roo.datConPar[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 3101;
}

/*
equation index: 3102
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConPar[1].layers.material[1].piRef = dc.roo.datConPar[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3102(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3102};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[843]] /* dc.roo.irRadExc.datConPar[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[607]] /* dc.roo.datConPar[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 3102;
}

/*
equation index: 3105
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConPar[1].layers.material[1].nStaRef = dc.roo.datConPar[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3105(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3105};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[226]] /* dc.roo.irRadExc.datConPar[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[187]] /* dc.roo.datConPar[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 3105;
}

/*
equation index: 3106
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConPar[1].layers.material[1].R = dc.roo.datConPar[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3106(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3106};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[835]] /* dc.roo.irRadExc.datConPar[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[599]] /* dc.roo.datConPar[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 3106;
}

/*
equation index: 3107
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConPar[1].layers.material[1].d = dc.roo.datConPar[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3107(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3107};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[839]] /* dc.roo.irRadExc.datConPar[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[603]] /* dc.roo.datConPar[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 3107;
}

/*
equation index: 3108
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConPar[1].layers.material[1].c = dc.roo.datConPar[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3108(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3108};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[838]] /* dc.roo.irRadExc.datConPar[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[602]] /* dc.roo.datConPar[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 3108;
}

/*
equation index: 3109
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConPar[1].layers.material[1].k = dc.roo.datConPar[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3109(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3109};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[840]] /* dc.roo.irRadExc.datConPar[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[604]] /* dc.roo.datConPar[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 3109;
}

/*
equation index: 3110
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConPar[1].layers.material[1].x = dc.roo.datConPar[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3110(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3110};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[844]] /* dc.roo.irRadExc.datConPar[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[608]] /* dc.roo.datConPar[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 3110;
}

/*
equation index: 3112
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConPar[1].name = dc.roo.datConPar[1].name
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3112(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3112};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[59]] /* dc.roo.irRadExc.datConPar[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[55]] /* dc.roo.datConPar[1].name PARAM */);
  threadData->lastEquationSolved = 3112;
}

/*
equation index: 3116
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].glaSys.absSolFra = dc.roo.datConExtWin[1].glaSys.absSolFra
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3116(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3116};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[773]] /* dc.roo.irRadExc.datConExtWin[1].glaSys.absSolFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[537]] /* dc.roo.datConExtWin[1].glaSys.absSolFra PARAM */);
  threadData->lastEquationSolved = 3116;
}

/*
equation index: 3117
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].glaSys.UFra = dc.roo.datConExtWin[1].glaSys.UFra
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3117(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3117};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[771]] /* dc.roo.irRadExc.datConExtWin[1].glaSys.UFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[535]] /* dc.roo.datConExtWin[1].glaSys.UFra PARAM */);
  threadData->lastEquationSolved = 3117;
}

/*
equation index: 3118
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].glaSys.shade.tauIR_b = dc.roo.datConExtWin[1].glaSys.shade.tauIR_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3118(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3118};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[796]] /* dc.roo.irRadExc.datConExtWin[1].glaSys.shade.tauIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[560]] /* dc.roo.datConExtWin[1].glaSys.shade.tauIR_b PARAM */);
  threadData->lastEquationSolved = 3118;
}

/*
equation index: 3119
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].glaSys.shade.tauIR_a = dc.roo.datConExtWin[1].glaSys.shade.tauIR_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3119(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3119};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[795]] /* dc.roo.irRadExc.datConExtWin[1].glaSys.shade.tauIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[559]] /* dc.roo.datConExtWin[1].glaSys.shade.tauIR_a PARAM */);
  threadData->lastEquationSolved = 3119;
}

/*
equation index: 3120
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].glaSys.shade.absIR_b = dc.roo.datConExtWin[1].glaSys.shade.absIR_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3120(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3120};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[792]] /* dc.roo.irRadExc.datConExtWin[1].glaSys.shade.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[556]] /* dc.roo.datConExtWin[1].glaSys.shade.absIR_b PARAM */);
  threadData->lastEquationSolved = 3120;
}

/*
equation index: 3121
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].glaSys.shade.rhoSol_b = dc.roo.datConExtWin[1].glaSys.shade.rhoSol_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3121(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3121};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[794]] /* dc.roo.irRadExc.datConExtWin[1].glaSys.shade.rhoSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[558]] /* dc.roo.datConExtWin[1].glaSys.shade.rhoSol_b PARAM */);
  threadData->lastEquationSolved = 3121;
}

/*
equation index: 3122
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].glaSys.shade.rhoSol_a = dc.roo.datConExtWin[1].glaSys.shade.rhoSol_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3122(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3122};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[793]] /* dc.roo.irRadExc.datConExtWin[1].glaSys.shade.rhoSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[557]] /* dc.roo.datConExtWin[1].glaSys.shade.rhoSol_a PARAM */);
  threadData->lastEquationSolved = 3122;
}

/*
equation index: 3123
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].glaSys.shade.tauSol_b = dc.roo.datConExtWin[1].glaSys.shade.tauSol_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3123(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3123};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[798]] /* dc.roo.irRadExc.datConExtWin[1].glaSys.shade.tauSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[562]] /* dc.roo.datConExtWin[1].glaSys.shade.tauSol_b PARAM */);
  threadData->lastEquationSolved = 3123;
}

/*
equation index: 3124
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].glaSys.shade.tauSol_a = dc.roo.datConExtWin[1].glaSys.shade.tauSol_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3124(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3124};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[797]] /* dc.roo.irRadExc.datConExtWin[1].glaSys.shade.tauSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[561]] /* dc.roo.datConExtWin[1].glaSys.shade.tauSol_a PARAM */);
  threadData->lastEquationSolved = 3124;
}

/*
equation index: 3125
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].glaSys.gas[1].P0 = dc.roo.datConExtWin[1].glaSys.gas[1].P0
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3125(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3125};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[775]] /* dc.roo.irRadExc.datConExtWin[1].glaSys.gas[1].P0 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[539]] /* dc.roo.datConExtWin[1].glaSys.gas[1].P0 PARAM */);
  threadData->lastEquationSolved = 3125;
}

/*
equation index: 3126
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].glaSys.gas[1].MM = dc.roo.datConExtWin[1].glaSys.gas[1].MM
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3126(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3126};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[774]] /* dc.roo.irRadExc.datConExtWin[1].glaSys.gas[1].MM PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[538]] /* dc.roo.datConExtWin[1].glaSys.gas[1].MM PARAM */);
  threadData->lastEquationSolved = 3126;
}

/*
equation index: 3127
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].glaSys.gas[1].b_c = dc.roo.datConExtWin[1].glaSys.gas[1].b_c
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3127(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3127};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[779]] /* dc.roo.irRadExc.datConExtWin[1].glaSys.gas[1].b_c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[543]] /* dc.roo.datConExtWin[1].glaSys.gas[1].b_c PARAM */);
  threadData->lastEquationSolved = 3127;
}

/*
equation index: 3128
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].glaSys.gas[1].a_c = dc.roo.datConExtWin[1].glaSys.gas[1].a_c
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3128(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3128};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[776]] /* dc.roo.irRadExc.datConExtWin[1].glaSys.gas[1].a_c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[540]] /* dc.roo.datConExtWin[1].glaSys.gas[1].a_c PARAM */);
  threadData->lastEquationSolved = 3128;
}

/*
equation index: 3129
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].glaSys.gas[1].b_mu = dc.roo.datConExtWin[1].glaSys.gas[1].b_mu
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3129(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3129};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[781]] /* dc.roo.irRadExc.datConExtWin[1].glaSys.gas[1].b_mu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[545]] /* dc.roo.datConExtWin[1].glaSys.gas[1].b_mu PARAM */);
  threadData->lastEquationSolved = 3129;
}

/*
equation index: 3130
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].glaSys.gas[1].a_mu = dc.roo.datConExtWin[1].glaSys.gas[1].a_mu
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3130(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3130};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[778]] /* dc.roo.irRadExc.datConExtWin[1].glaSys.gas[1].a_mu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[542]] /* dc.roo.datConExtWin[1].glaSys.gas[1].a_mu PARAM */);
  threadData->lastEquationSolved = 3130;
}

/*
equation index: 3131
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].glaSys.gas[1].b_k = dc.roo.datConExtWin[1].glaSys.gas[1].b_k
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3131(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3131};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[780]] /* dc.roo.irRadExc.datConExtWin[1].glaSys.gas[1].b_k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[544]] /* dc.roo.datConExtWin[1].glaSys.gas[1].b_k PARAM */);
  threadData->lastEquationSolved = 3131;
}

/*
equation index: 3132
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].glaSys.gas[1].a_k = dc.roo.datConExtWin[1].glaSys.gas[1].a_k
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3132(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3132};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[777]] /* dc.roo.irRadExc.datConExtWin[1].glaSys.gas[1].a_k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[541]] /* dc.roo.datConExtWin[1].glaSys.gas[1].a_k PARAM */);
  threadData->lastEquationSolved = 3132;
}

/*
equation index: 3133
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].glaSys.gas[1].x = dc.roo.datConExtWin[1].glaSys.gas[1].x
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3133(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3133};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[782]] /* dc.roo.irRadExc.datConExtWin[1].glaSys.gas[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[546]] /* dc.roo.datConExtWin[1].glaSys.gas[1].x PARAM */);
  threadData->lastEquationSolved = 3133;
}

/*
equation index: 3134
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].glaSys.glass[1].absIR_a = dc.roo.datConExtWin[1].glaSys.glass[1].absIR_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3134(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3134};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[783]] /* dc.roo.irRadExc.datConExtWin[1].glaSys.glass[1].absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[547]] /* dc.roo.datConExtWin[1].glaSys.glass[1].absIR_a PARAM */);
  threadData->lastEquationSolved = 3134;
}

/*
equation index: 3135
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].glaSys.glass[1].tauIR = dc.roo.datConExtWin[1].glaSys.glass[1].tauIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3135(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3135};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[788]] /* dc.roo.irRadExc.datConExtWin[1].glaSys.glass[1].tauIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[552]] /* dc.roo.datConExtWin[1].glaSys.glass[1].tauIR PARAM */);
  threadData->lastEquationSolved = 3135;
}

/*
equation index: 3136
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].glaSys.glass[1].rhoSol_b[1] = dc.roo.datConExtWin[1].glaSys.glass[1].rhoSol_b[1]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3136(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3136};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[787]] /* dc.roo.irRadExc.datConExtWin[1].glaSys.glass[1].rhoSol_b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[551]] /* dc.roo.datConExtWin[1].glaSys.glass[1].rhoSol_b[1] PARAM */);
  threadData->lastEquationSolved = 3136;
}

/*
equation index: 3137
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].glaSys.glass[1].rhoSol_a[1] = dc.roo.datConExtWin[1].glaSys.glass[1].rhoSol_a[1]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3137(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3137};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[786]] /* dc.roo.irRadExc.datConExtWin[1].glaSys.glass[1].rhoSol_a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[550]] /* dc.roo.datConExtWin[1].glaSys.glass[1].rhoSol_a[1] PARAM */);
  threadData->lastEquationSolved = 3137;
}

/*
equation index: 3138
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].glaSys.glass[1].tauSol[1] = dc.roo.datConExtWin[1].glaSys.glass[1].tauSol[1]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3138(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3138};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[789]] /* dc.roo.irRadExc.datConExtWin[1].glaSys.glass[1].tauSol[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[553]] /* dc.roo.datConExtWin[1].glaSys.glass[1].tauSol[1] PARAM */);
  threadData->lastEquationSolved = 3138;
}

/*
equation index: 3139
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].glaSys.glass[1].k = dc.roo.datConExtWin[1].glaSys.glass[1].k
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3139(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3139};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[785]] /* dc.roo.irRadExc.datConExtWin[1].glaSys.glass[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[549]] /* dc.roo.datConExtWin[1].glaSys.glass[1].k PARAM */);
  threadData->lastEquationSolved = 3139;
}

/*
equation index: 3140
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].glaSys.glass[1].x = dc.roo.datConExtWin[1].glaSys.glass[1].x
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3140(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3140};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[790]] /* dc.roo.irRadExc.datConExtWin[1].glaSys.glass[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[554]] /* dc.roo.datConExtWin[1].glaSys.glass[1].x PARAM */);
  threadData->lastEquationSolved = 3140;
}

/*
equation index: 3143
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].AGla = dc.roo.datConExtWin[1].AGla
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3143(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3143};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[764]] /* dc.roo.irRadExc.datConExtWin[1].AGla PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[528]] /* dc.roo.datConExtWin[1].AGla PARAM */);
  threadData->lastEquationSolved = 3143;
}

/*
equation index: 3144
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].AFra = dc.roo.datConExtWin[1].AFra
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3144(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3144};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[763]] /* dc.roo.irRadExc.datConExtWin[1].AFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[527]] /* dc.roo.datConExtWin[1].AFra PARAM */);
  threadData->lastEquationSolved = 3144;
}

/*
equation index: 3146
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].sidFin.gap = dc.roo.datConExtWin[1].sidFin.gap
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3146(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3146};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[821]] /* dc.roo.irRadExc.datConExtWin[1].sidFin.gap PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[585]] /* dc.roo.datConExtWin[1].sidFin.gap PARAM */);
  threadData->lastEquationSolved = 3146;
}

/*
equation index: 3148
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].sidFin.h = dc.roo.datConExtWin[1].sidFin.h
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3148(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3148};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[822]] /* dc.roo.irRadExc.datConExtWin[1].sidFin.h PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[586]] /* dc.roo.datConExtWin[1].sidFin.h PARAM */);
  threadData->lastEquationSolved = 3148;
}

/*
equation index: 3150
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].ove.gap = dc.roo.datConExtWin[1].ove.gap
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3150(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3150};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[817]] /* dc.roo.irRadExc.datConExtWin[1].ove.gap PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[581]] /* dc.roo.datConExtWin[1].ove.gap PARAM */);
  threadData->lastEquationSolved = 3150;
}

/*
equation index: 3152
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].ove.wR = dc.roo.datConExtWin[1].ove.wR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3152(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3152};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[819]] /* dc.roo.irRadExc.datConExtWin[1].ove.wR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[583]] /* dc.roo.datConExtWin[1].ove.wR PARAM */);
  threadData->lastEquationSolved = 3152;
}

/*
equation index: 3153
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].ove.wL = dc.roo.datConExtWin[1].ove.wL
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3153(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3153};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[818]] /* dc.roo.irRadExc.datConExtWin[1].ove.wL PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[582]] /* dc.roo.datConExtWin[1].ove.wL PARAM */);
  threadData->lastEquationSolved = 3153;
}

/*
equation index: 3154
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].wWin = dc.roo.datConExtWin[1].wWin
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3154(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3154};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[824]] /* dc.roo.irRadExc.datConExtWin[1].wWin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[588]] /* dc.roo.datConExtWin[1].wWin PARAM */);
  threadData->lastEquationSolved = 3154;
}

/*
equation index: 3155
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].hWin = dc.roo.datConExtWin[1].hWin
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3155(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3155};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[799]] /* dc.roo.irRadExc.datConExtWin[1].hWin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[563]] /* dc.roo.datConExtWin[1].hWin PARAM */);
  threadData->lastEquationSolved = 3155;
}

/*
equation index: 3156
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].A = dc.roo.datConExtWin[1].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3156(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3156};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[762]] /* dc.roo.irRadExc.datConExtWin[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[526]] /* dc.roo.datConExtWin[1].A PARAM */);
  threadData->lastEquationSolved = 3156;
}

/*
equation index: 3157
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].boundaryCondition = dc.roo.datConExtWin[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3157(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3157};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[218]] /* dc.roo.irRadExc.datConExtWin[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[179]] /* dc.roo.datConExtWin[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 3157;
}

/*
equation index: 3160
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].T_b_start = dc.roo.datConExtWin[1].T_b_start
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3160(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3160};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[768]] /* dc.roo.irRadExc.datConExtWin[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[532]] /* dc.roo.datConExtWin[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 3160;
}

/*
equation index: 3161
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].T_a_start = dc.roo.datConExtWin[1].T_a_start
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3161(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3161};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[767]] /* dc.roo.irRadExc.datConExtWin[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[531]] /* dc.roo.datConExtWin[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 3161;
}

/*
equation index: 3165
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].azi = dc.roo.datConExtWin[1].azi
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3165(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3165};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[769]] /* dc.roo.irRadExc.datConExtWin[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[533]] /* dc.roo.datConExtWin[1].azi PARAM */);
  threadData->lastEquationSolved = 3165;
}

/*
equation index: 3167
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].layers.roughness_a = dc.roo.datConExtWin[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3167(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3167};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[223]] /* dc.roo.irRadExc.datConExtWin[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[184]] /* dc.roo.datConExtWin[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 3167;
}

/*
equation index: 3168
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].layers.absSol_b = dc.roo.datConExtWin[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3168(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3168};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[804]] /* dc.roo.irRadExc.datConExtWin[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[568]] /* dc.roo.datConExtWin[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 3168;
}

/*
equation index: 3169
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].layers.absSol_a = dc.roo.datConExtWin[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3169(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3169};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[803]] /* dc.roo.irRadExc.datConExtWin[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[567]] /* dc.roo.datConExtWin[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 3169;
}

/*
equation index: 3170
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].layers.absIR_a = dc.roo.datConExtWin[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3170(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3170};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[801]] /* dc.roo.irRadExc.datConExtWin[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[565]] /* dc.roo.datConExtWin[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 3170;
}

/*
equation index: 3173
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].layers.material[1].LHea = dc.roo.datConExtWin[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3173(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3173};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[805]] /* dc.roo.irRadExc.datConExtWin[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[569]] /* dc.roo.datConExtWin[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 3173;
}

/*
equation index: 3176
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].layers.material[1].nStaReal = dc.roo.datConExtWin[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3176(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3176};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[812]] /* dc.roo.irRadExc.datConExtWin[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[576]] /* dc.roo.datConExtWin[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 3176;
}

/*
equation index: 3177
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].layers.material[1].piMat = dc.roo.datConExtWin[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3177(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3177};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[813]] /* dc.roo.irRadExc.datConExtWin[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[577]] /* dc.roo.datConExtWin[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 3177;
}

/*
equation index: 3178
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].layers.material[1].piRef = dc.roo.datConExtWin[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3178(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3178};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[814]] /* dc.roo.irRadExc.datConExtWin[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[578]] /* dc.roo.datConExtWin[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 3178;
}

/*
equation index: 3181
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].layers.material[1].nStaRef = dc.roo.datConExtWin[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3181(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3181};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[220]] /* dc.roo.irRadExc.datConExtWin[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[181]] /* dc.roo.datConExtWin[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 3181;
}

/*
equation index: 3182
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].layers.material[1].R = dc.roo.datConExtWin[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3182(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3182};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[806]] /* dc.roo.irRadExc.datConExtWin[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[570]] /* dc.roo.datConExtWin[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 3182;
}

/*
equation index: 3183
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].layers.material[1].d = dc.roo.datConExtWin[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3183(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3183};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[810]] /* dc.roo.irRadExc.datConExtWin[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[574]] /* dc.roo.datConExtWin[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 3183;
}

/*
equation index: 3184
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].layers.material[1].c = dc.roo.datConExtWin[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3184(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3184};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[809]] /* dc.roo.irRadExc.datConExtWin[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[573]] /* dc.roo.datConExtWin[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 3184;
}

/*
equation index: 3185
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].layers.material[1].k = dc.roo.datConExtWin[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3185(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3185};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[811]] /* dc.roo.irRadExc.datConExtWin[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[575]] /* dc.roo.datConExtWin[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 3185;
}

/*
equation index: 3186
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].layers.material[1].x = dc.roo.datConExtWin[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3186(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3186};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[815]] /* dc.roo.irRadExc.datConExtWin[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[579]] /* dc.roo.datConExtWin[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 3186;
}

/*
equation index: 3188
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExtWin[1].name = dc.roo.datConExtWin[1].name
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3188(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3188};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[58]] /* dc.roo.irRadExc.datConExtWin[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[54]] /* dc.roo.datConExtWin[1].name PARAM */);
  threadData->lastEquationSolved = 3188;
}

/*
equation index: 3189
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExt[1].boundaryCondition = dc.roo.datConExt[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3189(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3189};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[212]] /* dc.roo.irRadExc.datConExt[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[173]] /* dc.roo.datConExt[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 3189;
}

/*
equation index: 3192
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExt[1].T_b_start = dc.roo.datConExt[1].T_b_start
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3192(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3192};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[743]] /* dc.roo.irRadExc.datConExt[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[507]] /* dc.roo.datConExt[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 3192;
}

/*
equation index: 3193
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExt[1].T_a_start = dc.roo.datConExt[1].T_a_start
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3193(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3193};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[742]] /* dc.roo.irRadExc.datConExt[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[506]] /* dc.roo.datConExt[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 3193;
}

/*
equation index: 3197
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExt[1].azi = dc.roo.datConExt[1].azi
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3197(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3197};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[744]] /* dc.roo.irRadExc.datConExt[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[508]] /* dc.roo.datConExt[1].azi PARAM */);
  threadData->lastEquationSolved = 3197;
}

/*
equation index: 3199
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExt[1].layers.roughness_a = dc.roo.datConExt[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3199(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3199};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[217]] /* dc.roo.irRadExc.datConExt[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[178]] /* dc.roo.datConExt[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 3199;
}

/*
equation index: 3200
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExt[1].layers.absSol_b = dc.roo.datConExt[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3200(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3200};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[749]] /* dc.roo.irRadExc.datConExt[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[513]] /* dc.roo.datConExt[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 3200;
}

/*
equation index: 3201
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExt[1].layers.absSol_a = dc.roo.datConExt[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3201(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3201};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[748]] /* dc.roo.irRadExc.datConExt[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[512]] /* dc.roo.datConExt[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 3201;
}

/*
equation index: 3202
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExt[1].layers.absIR_a = dc.roo.datConExt[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3202(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3202};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[746]] /* dc.roo.irRadExc.datConExt[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[510]] /* dc.roo.datConExt[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 3202;
}

/*
equation index: 3205
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExt[1].layers.material[1].LHea = dc.roo.datConExt[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3205(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3205};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[750]] /* dc.roo.irRadExc.datConExt[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[514]] /* dc.roo.datConExt[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 3205;
}

/*
equation index: 3208
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExt[1].layers.material[1].nStaReal = dc.roo.datConExt[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3208(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3208};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[757]] /* dc.roo.irRadExc.datConExt[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[521]] /* dc.roo.datConExt[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 3208;
}

/*
equation index: 3209
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExt[1].layers.material[1].piMat = dc.roo.datConExt[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3209(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3209};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[758]] /* dc.roo.irRadExc.datConExt[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[522]] /* dc.roo.datConExt[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 3209;
}

/*
equation index: 3210
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExt[1].layers.material[1].piRef = dc.roo.datConExt[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3210(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3210};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[759]] /* dc.roo.irRadExc.datConExt[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[523]] /* dc.roo.datConExt[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 3210;
}

/*
equation index: 3213
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExt[1].layers.material[1].nStaRef = dc.roo.datConExt[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3213(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3213};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[214]] /* dc.roo.irRadExc.datConExt[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[175]] /* dc.roo.datConExt[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 3213;
}

/*
equation index: 3214
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExt[1].layers.material[1].R = dc.roo.datConExt[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3214(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3214};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[751]] /* dc.roo.irRadExc.datConExt[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[515]] /* dc.roo.datConExt[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 3214;
}

/*
equation index: 3215
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExt[1].layers.material[1].d = dc.roo.datConExt[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3215(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3215};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[755]] /* dc.roo.irRadExc.datConExt[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[519]] /* dc.roo.datConExt[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 3215;
}

/*
equation index: 3216
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExt[1].layers.material[1].c = dc.roo.datConExt[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3216(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3216};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[754]] /* dc.roo.irRadExc.datConExt[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[518]] /* dc.roo.datConExt[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 3216;
}

/*
equation index: 3217
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExt[1].layers.material[1].k = dc.roo.datConExt[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3217(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3217};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[756]] /* dc.roo.irRadExc.datConExt[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[520]] /* dc.roo.datConExt[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 3217;
}

/*
equation index: 3218
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExt[1].layers.material[1].x = dc.roo.datConExt[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3218(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3218};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[760]] /* dc.roo.irRadExc.datConExt[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[524]] /* dc.roo.datConExt[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 3218;
}

/*
equation index: 3220
type: SIMPLE_ASSIGN
dc.roo.irRadExc.datConExt[1].name = dc.roo.datConExt[1].name
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3220(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3220};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[57]] /* dc.roo.irRadExc.datConExt[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[53]] /* dc.roo.datConExt[1].name PARAM */);
  threadData->lastEquationSolved = 3220;
}

/*
equation index: 3237
type: SIMPLE_ASSIGN
dc.roo.irRadGai.surBou[6].A = dc.roo.surBou[6].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3237(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3237};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1167]] /* dc.roo.irRadGai.surBou[6].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1433]] /* dc.roo.surBou[6].A PARAM */);
  threadData->lastEquationSolved = 3237;
}

/*
equation index: 3238
type: SIMPLE_ASSIGN
dc.roo.irRadGai.ASurBou[6] = dc.roo.irRadGai.surBou[6].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3238(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3238};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[976]] /* dc.roo.irRadGai.ASurBou[6] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1167]] /* dc.roo.irRadGai.surBou[6].A PARAM */);
  threadData->lastEquationSolved = 3238;
}

/*
equation index: 3239
type: SIMPLE_ASSIGN
dc.roo.irRadGai.surBou[6].absIR = dc.roo.surBou[6].absIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3239(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3239};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1173]] /* dc.roo.irRadGai.surBou[6].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1439]] /* dc.roo.surBou[6].absIR PARAM */);
  threadData->lastEquationSolved = 3239;
}

/*
equation index: 3240
type: SIMPLE_ASSIGN
dc.roo.irRadGai.epsSurBou[6] = dc.roo.irRadGai.surBou[6].absIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3240(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3240};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1160]] /* dc.roo.irRadGai.epsSurBou[6] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1173]] /* dc.roo.irRadGai.surBou[6].absIR PARAM */);
  threadData->lastEquationSolved = 3240;
}

/*
equation index: 3241
type: SIMPLE_ASSIGN
dc.roo.irRadGai.AEpsSurBou[6] = dc.roo.irRadGai.ASurBou[6] * dc.roo.irRadGai.epsSurBou[6]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3241(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3241};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[970]] /* dc.roo.irRadGai.AEpsSurBou[6] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[976]] /* dc.roo.irRadGai.ASurBou[6] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1160]] /* dc.roo.irRadGai.epsSurBou[6] PARAM */));
  threadData->lastEquationSolved = 3241;
}

/*
equation index: 3242
type: SIMPLE_ASSIGN
dc.roo.irRadGai.surBou[5].A = dc.roo.surBou[5].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3242(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3242};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1166]] /* dc.roo.irRadGai.surBou[5].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1432]] /* dc.roo.surBou[5].A PARAM */);
  threadData->lastEquationSolved = 3242;
}

/*
equation index: 3243
type: SIMPLE_ASSIGN
dc.roo.irRadGai.ASurBou[5] = dc.roo.irRadGai.surBou[5].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3243(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3243};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[975]] /* dc.roo.irRadGai.ASurBou[5] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1166]] /* dc.roo.irRadGai.surBou[5].A PARAM */);
  threadData->lastEquationSolved = 3243;
}

/*
equation index: 3244
type: SIMPLE_ASSIGN
dc.roo.irRadGai.surBou[5].absIR = dc.roo.surBou[5].absIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3244(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3244};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1172]] /* dc.roo.irRadGai.surBou[5].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1438]] /* dc.roo.surBou[5].absIR PARAM */);
  threadData->lastEquationSolved = 3244;
}

/*
equation index: 3245
type: SIMPLE_ASSIGN
dc.roo.irRadGai.epsSurBou[5] = dc.roo.irRadGai.surBou[5].absIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3245(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3245};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1159]] /* dc.roo.irRadGai.epsSurBou[5] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1172]] /* dc.roo.irRadGai.surBou[5].absIR PARAM */);
  threadData->lastEquationSolved = 3245;
}

/*
equation index: 3246
type: SIMPLE_ASSIGN
dc.roo.irRadGai.AEpsSurBou[5] = dc.roo.irRadGai.ASurBou[5] * dc.roo.irRadGai.epsSurBou[5]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3246(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3246};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[969]] /* dc.roo.irRadGai.AEpsSurBou[5] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[975]] /* dc.roo.irRadGai.ASurBou[5] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1159]] /* dc.roo.irRadGai.epsSurBou[5] PARAM */));
  threadData->lastEquationSolved = 3246;
}

/*
equation index: 3247
type: SIMPLE_ASSIGN
dc.roo.irRadGai.surBou[4].A = dc.roo.surBou[4].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3247(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3247};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1165]] /* dc.roo.irRadGai.surBou[4].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1431]] /* dc.roo.surBou[4].A PARAM */);
  threadData->lastEquationSolved = 3247;
}

/*
equation index: 3248
type: SIMPLE_ASSIGN
dc.roo.irRadGai.ASurBou[4] = dc.roo.irRadGai.surBou[4].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3248(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3248};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[974]] /* dc.roo.irRadGai.ASurBou[4] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1165]] /* dc.roo.irRadGai.surBou[4].A PARAM */);
  threadData->lastEquationSolved = 3248;
}

/*
equation index: 3249
type: SIMPLE_ASSIGN
dc.roo.irRadGai.surBou[4].absIR = dc.roo.surBou[4].absIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3249(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3249};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1171]] /* dc.roo.irRadGai.surBou[4].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1437]] /* dc.roo.surBou[4].absIR PARAM */);
  threadData->lastEquationSolved = 3249;
}

/*
equation index: 3250
type: SIMPLE_ASSIGN
dc.roo.irRadGai.epsSurBou[4] = dc.roo.irRadGai.surBou[4].absIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3250(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3250};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1158]] /* dc.roo.irRadGai.epsSurBou[4] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1171]] /* dc.roo.irRadGai.surBou[4].absIR PARAM */);
  threadData->lastEquationSolved = 3250;
}

/*
equation index: 3251
type: SIMPLE_ASSIGN
dc.roo.irRadGai.AEpsSurBou[4] = dc.roo.irRadGai.ASurBou[4] * dc.roo.irRadGai.epsSurBou[4]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3251(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3251};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[968]] /* dc.roo.irRadGai.AEpsSurBou[4] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[974]] /* dc.roo.irRadGai.ASurBou[4] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1158]] /* dc.roo.irRadGai.epsSurBou[4] PARAM */));
  threadData->lastEquationSolved = 3251;
}

/*
equation index: 3252
type: SIMPLE_ASSIGN
dc.roo.irRadGai.surBou[3].A = dc.roo.surBou[3].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3252(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3252};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1164]] /* dc.roo.irRadGai.surBou[3].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1430]] /* dc.roo.surBou[3].A PARAM */);
  threadData->lastEquationSolved = 3252;
}

/*
equation index: 3253
type: SIMPLE_ASSIGN
dc.roo.irRadGai.ASurBou[3] = dc.roo.irRadGai.surBou[3].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3253(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3253};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[973]] /* dc.roo.irRadGai.ASurBou[3] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1164]] /* dc.roo.irRadGai.surBou[3].A PARAM */);
  threadData->lastEquationSolved = 3253;
}

/*
equation index: 3254
type: SIMPLE_ASSIGN
dc.roo.irRadGai.surBou[3].absIR = dc.roo.surBou[3].absIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3254(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3254};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1170]] /* dc.roo.irRadGai.surBou[3].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1436]] /* dc.roo.surBou[3].absIR PARAM */);
  threadData->lastEquationSolved = 3254;
}

/*
equation index: 3255
type: SIMPLE_ASSIGN
dc.roo.irRadGai.epsSurBou[3] = dc.roo.irRadGai.surBou[3].absIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3255(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3255};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1157]] /* dc.roo.irRadGai.epsSurBou[3] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1170]] /* dc.roo.irRadGai.surBou[3].absIR PARAM */);
  threadData->lastEquationSolved = 3255;
}

/*
equation index: 3256
type: SIMPLE_ASSIGN
dc.roo.irRadGai.AEpsSurBou[3] = dc.roo.irRadGai.ASurBou[3] * dc.roo.irRadGai.epsSurBou[3]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3256(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3256};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[967]] /* dc.roo.irRadGai.AEpsSurBou[3] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[973]] /* dc.roo.irRadGai.ASurBou[3] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1157]] /* dc.roo.irRadGai.epsSurBou[3] PARAM */));
  threadData->lastEquationSolved = 3256;
}

/*
equation index: 3257
type: SIMPLE_ASSIGN
dc.roo.irRadGai.surBou[2].A = dc.roo.surBou[2].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3257(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3257};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1163]] /* dc.roo.irRadGai.surBou[2].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1429]] /* dc.roo.surBou[2].A PARAM */);
  threadData->lastEquationSolved = 3257;
}

/*
equation index: 3258
type: SIMPLE_ASSIGN
dc.roo.irRadGai.ASurBou[2] = dc.roo.irRadGai.surBou[2].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3258(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3258};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[972]] /* dc.roo.irRadGai.ASurBou[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1163]] /* dc.roo.irRadGai.surBou[2].A PARAM */);
  threadData->lastEquationSolved = 3258;
}

/*
equation index: 3259
type: SIMPLE_ASSIGN
dc.roo.irRadGai.surBou[2].absIR = dc.roo.surBou[2].absIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3259(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3259};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1169]] /* dc.roo.irRadGai.surBou[2].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1435]] /* dc.roo.surBou[2].absIR PARAM */);
  threadData->lastEquationSolved = 3259;
}

/*
equation index: 3260
type: SIMPLE_ASSIGN
dc.roo.irRadGai.epsSurBou[2] = dc.roo.irRadGai.surBou[2].absIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3260(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3260};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1156]] /* dc.roo.irRadGai.epsSurBou[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1169]] /* dc.roo.irRadGai.surBou[2].absIR PARAM */);
  threadData->lastEquationSolved = 3260;
}

/*
equation index: 3261
type: SIMPLE_ASSIGN
dc.roo.irRadGai.AEpsSurBou[2] = dc.roo.irRadGai.ASurBou[2] * dc.roo.irRadGai.epsSurBou[2]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3261(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3261};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[966]] /* dc.roo.irRadGai.AEpsSurBou[2] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[972]] /* dc.roo.irRadGai.ASurBou[2] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1156]] /* dc.roo.irRadGai.epsSurBou[2] PARAM */));
  threadData->lastEquationSolved = 3261;
}

/*
equation index: 3262
type: SIMPLE_ASSIGN
dc.roo.irRadGai.surBou[1].A = dc.roo.surBou[1].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3262(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3262};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1162]] /* dc.roo.irRadGai.surBou[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1428]] /* dc.roo.surBou[1].A PARAM */);
  threadData->lastEquationSolved = 3262;
}

/*
equation index: 3263
type: SIMPLE_ASSIGN
dc.roo.irRadGai.ASurBou[1] = dc.roo.irRadGai.surBou[1].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3263(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3263};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[971]] /* dc.roo.irRadGai.ASurBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1162]] /* dc.roo.irRadGai.surBou[1].A PARAM */);
  threadData->lastEquationSolved = 3263;
}

/*
equation index: 3264
type: SIMPLE_ASSIGN
dc.roo.irRadGai.surBou[1].absIR = dc.roo.surBou[1].absIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3264(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3264};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1168]] /* dc.roo.irRadGai.surBou[1].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1434]] /* dc.roo.surBou[1].absIR PARAM */);
  threadData->lastEquationSolved = 3264;
}

/*
equation index: 3265
type: SIMPLE_ASSIGN
dc.roo.irRadGai.epsSurBou[1] = dc.roo.irRadGai.surBou[1].absIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3265(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3265};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1155]] /* dc.roo.irRadGai.epsSurBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1168]] /* dc.roo.irRadGai.surBou[1].absIR PARAM */);
  threadData->lastEquationSolved = 3265;
}

/*
equation index: 3266
type: SIMPLE_ASSIGN
dc.roo.irRadGai.AEpsSurBou[1] = dc.roo.irRadGai.ASurBou[1] * dc.roo.irRadGai.epsSurBou[1]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3266(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3266};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[965]] /* dc.roo.irRadGai.AEpsSurBou[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[971]] /* dc.roo.irRadGai.ASurBou[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1155]] /* dc.roo.irRadGai.epsSurBou[1] PARAM */));
  threadData->lastEquationSolved = 3266;
}

/*
equation index: 3267
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConBou[1].A = dc.roo.datConBou[1].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3267(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3267};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[977]] /* dc.roo.irRadGai.datConBou[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[484]] /* dc.roo.datConBou[1].A PARAM */);
  threadData->lastEquationSolved = 3267;
}

/*
equation index: 3268
type: SIMPLE_ASSIGN
dc.roo.irRadGai.AConBou[1] = dc.roo.irRadGai.datConBou[1].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3268(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3268};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[953]] /* dc.roo.irRadGai.AConBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[977]] /* dc.roo.irRadGai.datConBou[1].A PARAM */);
  threadData->lastEquationSolved = 3268;
}

/*
equation index: 3269
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConBou[1].layers.absIR_b = dc.roo.datConBou[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3269(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3269};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[983]] /* dc.roo.irRadGai.datConBou[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[490]] /* dc.roo.datConBou[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 3269;
}

/*
equation index: 3270
type: SIMPLE_ASSIGN
dc.roo.irRadGai.epsConBou[1] = dc.roo.irRadGai.datConBou[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3270(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3270};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1147]] /* dc.roo.irRadGai.epsConBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[983]] /* dc.roo.irRadGai.datConBou[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 3270;
}

/*
equation index: 3271
type: SIMPLE_ASSIGN
dc.roo.irRadGai.AEpsConBou[1] = dc.roo.irRadGai.AConBou[1] * dc.roo.irRadGai.epsConBou[1]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3271(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3271};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[959]] /* dc.roo.irRadGai.AEpsConBou[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[953]] /* dc.roo.irRadGai.AConBou[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1147]] /* dc.roo.irRadGai.epsConBou[1] PARAM */));
  threadData->lastEquationSolved = 3271;
}

/*
equation index: 3272
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConPar[1].A = dc.roo.datConPar[1].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3272(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3272};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1082]] /* dc.roo.irRadGai.datConPar[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[589]] /* dc.roo.datConPar[1].A PARAM */);
  threadData->lastEquationSolved = 3272;
}

/*
equation index: 3273
type: SIMPLE_ASSIGN
dc.roo.irRadGai.AConPar[1] = dc.roo.irRadGai.datConPar[1].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3273(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3273};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[958]] /* dc.roo.irRadGai.AConPar[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1082]] /* dc.roo.irRadGai.datConPar[1].A PARAM */);
  threadData->lastEquationSolved = 3273;
}

/*
equation index: 3274
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConPar[1].layers.absIR_b = dc.roo.datConPar[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3274(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3274};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1088]] /* dc.roo.irRadGai.datConPar[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[595]] /* dc.roo.datConPar[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 3274;
}

/*
equation index: 3275
type: SIMPLE_ASSIGN
dc.roo.irRadGai.epsConPar_b[1] = dc.roo.irRadGai.datConPar[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3275(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3275};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1154]] /* dc.roo.irRadGai.epsConPar_b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1088]] /* dc.roo.irRadGai.datConPar[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 3275;
}

/*
equation index: 3276
type: SIMPLE_ASSIGN
dc.roo.irRadGai.AEpsConPar_b[1] = dc.roo.irRadGai.AConPar[1] * dc.roo.irRadGai.epsConPar_b[1]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3276(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3276};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[964]] /* dc.roo.irRadGai.AEpsConPar_b[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[958]] /* dc.roo.irRadGai.AConPar[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1154]] /* dc.roo.irRadGai.epsConPar_b[1] PARAM */));
  threadData->lastEquationSolved = 3276;
}

/*
equation index: 3277
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConPar[1].layers.absIR_a = dc.roo.datConPar[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3277(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3277};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1087]] /* dc.roo.irRadGai.datConPar[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[594]] /* dc.roo.datConPar[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 3277;
}

/*
equation index: 3278
type: SIMPLE_ASSIGN
dc.roo.irRadGai.epsConPar_a[1] = dc.roo.irRadGai.datConPar[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3278(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3278};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1153]] /* dc.roo.irRadGai.epsConPar_a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1087]] /* dc.roo.irRadGai.datConPar[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 3278;
}

/*
equation index: 3279
type: SIMPLE_ASSIGN
dc.roo.irRadGai.AEpsConPar_a[1] = dc.roo.irRadGai.AConPar[1] * dc.roo.irRadGai.epsConPar_a[1]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3279(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3279};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[963]] /* dc.roo.irRadGai.AEpsConPar_a[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[958]] /* dc.roo.irRadGai.AConPar[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1153]] /* dc.roo.irRadGai.epsConPar_a[1] PARAM */));
  threadData->lastEquationSolved = 3279;
}

/*
equation index: 3280
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].AWin = dc.roo.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3280(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3280};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1023]] /* dc.roo.irRadGai.datConExtWin[1].AWin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[530]] /* dc.roo.datConExtWin[1].AWin PARAM */);
  threadData->lastEquationSolved = 3280;
}

/*
equation index: 3281
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].fFra = dc.roo.datConExtWin[1].fFra
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3281(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3281};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1027]] /* dc.roo.irRadGai.datConExtWin[1].fFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[534]] /* dc.roo.datConExtWin[1].fFra PARAM */);
  threadData->lastEquationSolved = 3281;
}

/*
equation index: 3282
type: SIMPLE_ASSIGN
dc.roo.irRadGai.AConExtWinFra[1] = dc.roo.irRadGai.datConExtWin[1].fFra * dc.roo.irRadGai.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3282(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3282};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[955]] /* dc.roo.irRadGai.AConExtWinFra[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1027]] /* dc.roo.irRadGai.datConExtWin[1].fFra PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1023]] /* dc.roo.irRadGai.datConExtWin[1].AWin PARAM */));
  threadData->lastEquationSolved = 3282;
}

/*
equation index: 3283
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].glaSys.absIRFra = dc.roo.datConExtWin[1].glaSys.absIRFra
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3283(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3283};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1029]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.absIRFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[536]] /* dc.roo.datConExtWin[1].glaSys.absIRFra PARAM */);
  threadData->lastEquationSolved = 3283;
}

/*
equation index: 3284
type: SIMPLE_ASSIGN
dc.roo.irRadGai.epsConExtWinFra[1] = dc.roo.irRadGai.datConExtWin[1].glaSys.absIRFra
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3284(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3284};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1149]] /* dc.roo.irRadGai.epsConExtWinFra[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1029]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.absIRFra PARAM */);
  threadData->lastEquationSolved = 3284;
}

/*
equation index: 3285
type: SIMPLE_ASSIGN
dc.roo.irRadGai.AEpsConExtWinFra[1] = dc.roo.irRadGai.AConExtWinFra[1] * dc.roo.irRadGai.epsConExtWinFra[1]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3285(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3285};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[961]] /* dc.roo.irRadGai.AEpsConExtWinFra[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[955]] /* dc.roo.irRadGai.AConExtWinFra[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1149]] /* dc.roo.irRadGai.epsConExtWinFra[1] PARAM */));
  threadData->lastEquationSolved = 3285;
}

/*
equation index: 3286
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].AOpa = dc.roo.datConExtWin[1].AOpa
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3286(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3286};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1022]] /* dc.roo.irRadGai.datConExtWin[1].AOpa PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[529]] /* dc.roo.datConExtWin[1].AOpa PARAM */);
  threadData->lastEquationSolved = 3286;
}

/*
equation index: 3287
type: SIMPLE_ASSIGN
dc.roo.irRadGai.AConExtWinOpa[1] = dc.roo.irRadGai.datConExtWin[1].AOpa
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3287(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3287};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[957]] /* dc.roo.irRadGai.AConExtWinOpa[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1022]] /* dc.roo.irRadGai.datConExtWin[1].AOpa PARAM */);
  threadData->lastEquationSolved = 3287;
}

/*
equation index: 3288
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].layers.absIR_b = dc.roo.datConExtWin[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3288(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3288};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1059]] /* dc.roo.irRadGai.datConExtWin[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[566]] /* dc.roo.datConExtWin[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 3288;
}

/*
equation index: 3289
type: SIMPLE_ASSIGN
dc.roo.irRadGai.epsConExtWinOpa[1] = dc.roo.irRadGai.datConExtWin[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3289(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3289};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1150]] /* dc.roo.irRadGai.epsConExtWinOpa[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1059]] /* dc.roo.irRadGai.datConExtWin[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 3289;
}

/*
equation index: 3290
type: SIMPLE_ASSIGN
dc.roo.irRadGai.AEpsConExtWinOpa[1] = dc.roo.irRadGai.AConExtWinOpa[1] * dc.roo.irRadGai.epsConExtWinOpa[1]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3290(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3290};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[962]] /* dc.roo.irRadGai.AEpsConExtWinOpa[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[957]] /* dc.roo.irRadGai.AConExtWinOpa[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1150]] /* dc.roo.irRadGai.epsConExtWinOpa[1] PARAM */));
  threadData->lastEquationSolved = 3290;
}

/*
equation index: 3291
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExt[1].A = dc.roo.datConExt[1].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3291(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3291};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[998]] /* dc.roo.irRadGai.datConExt[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[505]] /* dc.roo.datConExt[1].A PARAM */);
  threadData->lastEquationSolved = 3291;
}

/*
equation index: 3292
type: SIMPLE_ASSIGN
dc.roo.irRadGai.AConExt[1] = dc.roo.irRadGai.datConExt[1].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3292(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3292};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[954]] /* dc.roo.irRadGai.AConExt[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[998]] /* dc.roo.irRadGai.datConExt[1].A PARAM */);
  threadData->lastEquationSolved = 3292;
}

/*
equation index: 3293
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExt[1].layers.absIR_b = dc.roo.datConExt[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3293(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3293};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1004]] /* dc.roo.irRadGai.datConExt[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[511]] /* dc.roo.datConExt[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 3293;
}

/*
equation index: 3294
type: SIMPLE_ASSIGN
dc.roo.irRadGai.epsConExt[1] = dc.roo.irRadGai.datConExt[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3294(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3294};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1148]] /* dc.roo.irRadGai.epsConExt[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1004]] /* dc.roo.irRadGai.datConExt[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 3294;
}

/*
equation index: 3295
type: SIMPLE_ASSIGN
dc.roo.irRadGai.AEpsConExt[1] = dc.roo.irRadGai.AConExt[1] * dc.roo.irRadGai.epsConExt[1]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3295(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3295};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[960]] /* dc.roo.irRadGai.AEpsConExt[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[954]] /* dc.roo.irRadGai.AConExt[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1148]] /* dc.roo.irRadGai.epsConExt[1] PARAM */));
  threadData->lastEquationSolved = 3295;
}

/*
equation index: 3297
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].glaSys.shade.absIR_a = dc.roo.datConExtWin[1].glaSys.shade.absIR_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3297(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3297};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1048]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.shade.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[555]] /* dc.roo.datConExtWin[1].glaSys.shade.absIR_a PARAM */);
  threadData->lastEquationSolved = 3297;
}

/*
equation index: 3298
type: SIMPLE_ASSIGN
dc.roo.irRadGai.epsConExtWinSha[1] = dc.roo.irRadGai.datConExtWin[1].glaSys.shade.absIR_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3298(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3298};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1151]] /* dc.roo.irRadGai.epsConExtWinSha[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1048]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.shade.absIR_a PARAM */);
  threadData->lastEquationSolved = 3298;
}

/*
equation index: 3299
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].glaSys.glass[1].absIR_b = dc.roo.datConExtWin[1].glaSys.glass[1].absIR_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3299(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3299};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1041]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.glass[1].absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[548]] /* dc.roo.datConExtWin[1].glaSys.glass[1].absIR_b PARAM */);
  threadData->lastEquationSolved = 3299;
}

/*
equation index: 3300
type: SIMPLE_ASSIGN
dc.roo.irRadGai.epsConExtWinUns[1] = dc.roo.irRadGai.datConExtWin[1].glaSys.glass[1].absIR_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3300(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3300};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1152]] /* dc.roo.irRadGai.epsConExtWinUns[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1041]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.glass[1].absIR_b PARAM */);
  threadData->lastEquationSolved = 3300;
}

/*
equation index: 3301
type: SIMPLE_ASSIGN
dc.roo.irRadGai.AConExtWinGla[1] = (1.0 - dc.roo.irRadGai.datConExtWin[1].fFra) * dc.roo.irRadGai.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3301(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3301};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[956]] /* dc.roo.irRadGai.AConExtWinGla[1] PARAM */) = (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1027]] /* dc.roo.irRadGai.datConExtWin[1].fFra PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1023]] /* dc.roo.irRadGai.datConExtWin[1].AWin PARAM */));
  threadData->lastEquationSolved = 3301;
}

/*
equation index: 3302
type: SIMPLE_ASSIGN
dc.roo.irRadGai.instanceName = "Scenario_s000_baseline.dc.roo.irRadGai"
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3302(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3302};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[71]] /* dc.roo.irRadGai.instanceName PARAM */) = _OMC_LIT85;
  threadData->lastEquationSolved = 3302;
}

/*
equation index: 3308
type: SIMPLE_ASSIGN
dc.roo.irRadGai.dummyCon.R = dc.roo.irRadGai.dummyCon.material[1].R
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3308(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3308};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1103]] /* dc.roo.irRadGai.dummyCon.R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1109]] /* dc.roo.irRadGai.dummyCon.material[1].R PARAM */);
  threadData->lastEquationSolved = 3308;
}

/*
equation index: 3314
type: SIMPLE_ASSIGN
dc.roo.irRadGai.surBou[6].boundaryCondition = dc.roo.surBou[6].boundaryCondition
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3314(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3314};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[293]] /* dc.roo.irRadGai.surBou[6].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[355]] /* dc.roo.surBou[6].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 3314;
}

/*
equation index: 3315
type: SIMPLE_ASSIGN
dc.roo.irRadGai.surBou[6].name = dc.roo.surBou[6].name
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3315(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3315};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[77]] /* dc.roo.irRadGai.surBou[6].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[106]] /* dc.roo.surBou[6].name PARAM */);
  threadData->lastEquationSolved = 3315;
}

/*
equation index: 3317
type: SIMPLE_ASSIGN
dc.roo.irRadGai.surBou[6].absSol = dc.roo.surBou[6].absSol
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3317(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3317};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1179]] /* dc.roo.irRadGai.surBou[6].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1445]] /* dc.roo.surBou[6].absSol PARAM */);
  threadData->lastEquationSolved = 3317;
}

/*
equation index: 3319
type: SIMPLE_ASSIGN
dc.roo.irRadGai.surBou[5].boundaryCondition = dc.roo.surBou[5].boundaryCondition
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3319(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3319};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[292]] /* dc.roo.irRadGai.surBou[5].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[354]] /* dc.roo.surBou[5].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 3319;
}

/*
equation index: 3320
type: SIMPLE_ASSIGN
dc.roo.irRadGai.surBou[5].name = dc.roo.surBou[5].name
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3320(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3320};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[76]] /* dc.roo.irRadGai.surBou[5].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[105]] /* dc.roo.surBou[5].name PARAM */);
  threadData->lastEquationSolved = 3320;
}

/*
equation index: 3322
type: SIMPLE_ASSIGN
dc.roo.irRadGai.surBou[5].absSol = dc.roo.surBou[5].absSol
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3322(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3322};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1178]] /* dc.roo.irRadGai.surBou[5].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1444]] /* dc.roo.surBou[5].absSol PARAM */);
  threadData->lastEquationSolved = 3322;
}

/*
equation index: 3324
type: SIMPLE_ASSIGN
dc.roo.irRadGai.surBou[4].boundaryCondition = dc.roo.surBou[4].boundaryCondition
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3324(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3324};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[291]] /* dc.roo.irRadGai.surBou[4].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[353]] /* dc.roo.surBou[4].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 3324;
}

/*
equation index: 3325
type: SIMPLE_ASSIGN
dc.roo.irRadGai.surBou[4].name = dc.roo.surBou[4].name
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3325(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3325};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[75]] /* dc.roo.irRadGai.surBou[4].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[104]] /* dc.roo.surBou[4].name PARAM */);
  threadData->lastEquationSolved = 3325;
}

/*
equation index: 3327
type: SIMPLE_ASSIGN
dc.roo.irRadGai.surBou[4].absSol = dc.roo.surBou[4].absSol
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3327(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3327};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1177]] /* dc.roo.irRadGai.surBou[4].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1443]] /* dc.roo.surBou[4].absSol PARAM */);
  threadData->lastEquationSolved = 3327;
}

/*
equation index: 3329
type: SIMPLE_ASSIGN
dc.roo.irRadGai.surBou[3].boundaryCondition = dc.roo.surBou[3].boundaryCondition
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3329(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3329};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[290]] /* dc.roo.irRadGai.surBou[3].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[352]] /* dc.roo.surBou[3].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 3329;
}

/*
equation index: 3330
type: SIMPLE_ASSIGN
dc.roo.irRadGai.surBou[3].name = dc.roo.surBou[3].name
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3330(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3330};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[74]] /* dc.roo.irRadGai.surBou[3].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[103]] /* dc.roo.surBou[3].name PARAM */);
  threadData->lastEquationSolved = 3330;
}

/*
equation index: 3332
type: SIMPLE_ASSIGN
dc.roo.irRadGai.surBou[3].absSol = dc.roo.surBou[3].absSol
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3332(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3332};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1176]] /* dc.roo.irRadGai.surBou[3].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1442]] /* dc.roo.surBou[3].absSol PARAM */);
  threadData->lastEquationSolved = 3332;
}

/*
equation index: 3334
type: SIMPLE_ASSIGN
dc.roo.irRadGai.surBou[2].boundaryCondition = dc.roo.surBou[2].boundaryCondition
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3334(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3334};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[289]] /* dc.roo.irRadGai.surBou[2].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[351]] /* dc.roo.surBou[2].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 3334;
}

/*
equation index: 3335
type: SIMPLE_ASSIGN
dc.roo.irRadGai.surBou[2].name = dc.roo.surBou[2].name
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3335(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3335};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[73]] /* dc.roo.irRadGai.surBou[2].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[102]] /* dc.roo.surBou[2].name PARAM */);
  threadData->lastEquationSolved = 3335;
}

/*
equation index: 3337
type: SIMPLE_ASSIGN
dc.roo.irRadGai.surBou[2].absSol = dc.roo.surBou[2].absSol
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3337(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3337};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1175]] /* dc.roo.irRadGai.surBou[2].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1441]] /* dc.roo.surBou[2].absSol PARAM */);
  threadData->lastEquationSolved = 3337;
}

/*
equation index: 3339
type: SIMPLE_ASSIGN
dc.roo.irRadGai.surBou[1].boundaryCondition = dc.roo.surBou[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3339(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3339};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[288]] /* dc.roo.irRadGai.surBou[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[350]] /* dc.roo.surBou[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 3339;
}

/*
equation index: 3340
type: SIMPLE_ASSIGN
dc.roo.irRadGai.surBou[1].name = dc.roo.surBou[1].name
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3340(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3340};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[72]] /* dc.roo.irRadGai.surBou[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[101]] /* dc.roo.surBou[1].name PARAM */);
  threadData->lastEquationSolved = 3340;
}

/*
equation index: 3342
type: SIMPLE_ASSIGN
dc.roo.irRadGai.surBou[1].absSol = dc.roo.surBou[1].absSol
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3342(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3342};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1174]] /* dc.roo.irRadGai.surBou[1].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1440]] /* dc.roo.surBou[1].absSol PARAM */);
  threadData->lastEquationSolved = 3342;
}

/*
equation index: 3344
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConBou[1].boundaryCondition = dc.roo.datConBou[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3344(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3344};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[254]] /* dc.roo.irRadGai.datConBou[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[167]] /* dc.roo.datConBou[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 3344;
}

/*
equation index: 3347
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConBou[1].T_b_start = dc.roo.datConBou[1].T_b_start
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3347(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3347};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[979]] /* dc.roo.irRadGai.datConBou[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[486]] /* dc.roo.datConBou[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 3347;
}

/*
equation index: 3348
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConBou[1].T_a_start = dc.roo.datConBou[1].T_a_start
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3348(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3348};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[978]] /* dc.roo.irRadGai.datConBou[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[485]] /* dc.roo.datConBou[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 3348;
}

/*
equation index: 3352
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConBou[1].azi = dc.roo.datConBou[1].azi
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3352(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3352};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[980]] /* dc.roo.irRadGai.datConBou[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[487]] /* dc.roo.datConBou[1].azi PARAM */);
  threadData->lastEquationSolved = 3352;
}

/*
equation index: 3354
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConBou[1].layers.roughness_a = dc.roo.datConBou[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3354(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3354};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[259]] /* dc.roo.irRadGai.datConBou[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[172]] /* dc.roo.datConBou[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 3354;
}

/*
equation index: 3355
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConBou[1].layers.absSol_b = dc.roo.datConBou[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3355(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3355};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[985]] /* dc.roo.irRadGai.datConBou[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[492]] /* dc.roo.datConBou[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 3355;
}

/*
equation index: 3356
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConBou[1].layers.absSol_a = dc.roo.datConBou[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3356(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3356};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[984]] /* dc.roo.irRadGai.datConBou[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[491]] /* dc.roo.datConBou[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 3356;
}

/*
equation index: 3357
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConBou[1].layers.absIR_a = dc.roo.datConBou[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3357(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3357};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[982]] /* dc.roo.irRadGai.datConBou[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[489]] /* dc.roo.datConBou[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 3357;
}

/*
equation index: 3360
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConBou[1].layers.material[1].LHea = dc.roo.datConBou[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3360(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3360};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[986]] /* dc.roo.irRadGai.datConBou[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[493]] /* dc.roo.datConBou[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 3360;
}

/*
equation index: 3363
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConBou[1].layers.material[1].nStaReal = dc.roo.datConBou[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3363(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3363};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[993]] /* dc.roo.irRadGai.datConBou[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[500]] /* dc.roo.datConBou[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 3363;
}

/*
equation index: 3364
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConBou[1].layers.material[1].piMat = dc.roo.datConBou[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3364(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3364};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[994]] /* dc.roo.irRadGai.datConBou[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[501]] /* dc.roo.datConBou[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 3364;
}

/*
equation index: 3365
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConBou[1].layers.material[1].piRef = dc.roo.datConBou[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3365(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3365};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[995]] /* dc.roo.irRadGai.datConBou[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[502]] /* dc.roo.datConBou[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 3365;
}

/*
equation index: 3368
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConBou[1].layers.material[1].nStaRef = dc.roo.datConBou[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3368(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3368};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[256]] /* dc.roo.irRadGai.datConBou[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[169]] /* dc.roo.datConBou[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 3368;
}

/*
equation index: 3369
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConBou[1].layers.material[1].R = dc.roo.datConBou[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3369(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3369};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[987]] /* dc.roo.irRadGai.datConBou[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[494]] /* dc.roo.datConBou[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 3369;
}

/*
equation index: 3370
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConBou[1].layers.material[1].d = dc.roo.datConBou[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3370(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3370};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[991]] /* dc.roo.irRadGai.datConBou[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[498]] /* dc.roo.datConBou[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 3370;
}

/*
equation index: 3371
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConBou[1].layers.material[1].c = dc.roo.datConBou[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3371(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3371};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[990]] /* dc.roo.irRadGai.datConBou[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[497]] /* dc.roo.datConBou[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 3371;
}

/*
equation index: 3372
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConBou[1].layers.material[1].k = dc.roo.datConBou[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3372(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3372};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[992]] /* dc.roo.irRadGai.datConBou[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[499]] /* dc.roo.datConBou[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 3372;
}

/*
equation index: 3373
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConBou[1].layers.material[1].x = dc.roo.datConBou[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3373(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3373};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[996]] /* dc.roo.irRadGai.datConBou[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[503]] /* dc.roo.datConBou[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 3373;
}

/*
equation index: 3375
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConBou[1].name = dc.roo.datConBou[1].name
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3375(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3375};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[67]] /* dc.roo.irRadGai.datConBou[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[52]] /* dc.roo.datConBou[1].name PARAM */);
  threadData->lastEquationSolved = 3375;
}

/*
equation index: 3376
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConPar[1].boundaryCondition = dc.roo.datConPar[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3376(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3376};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[272]] /* dc.roo.irRadGai.datConPar[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[185]] /* dc.roo.datConPar[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 3376;
}

/*
equation index: 3379
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConPar[1].T_b_start = dc.roo.datConPar[1].T_b_start
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3379(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3379};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1084]] /* dc.roo.irRadGai.datConPar[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[591]] /* dc.roo.datConPar[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 3379;
}

/*
equation index: 3380
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConPar[1].T_a_start = dc.roo.datConPar[1].T_a_start
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3380(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3380};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1083]] /* dc.roo.irRadGai.datConPar[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[590]] /* dc.roo.datConPar[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 3380;
}

/*
equation index: 3384
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConPar[1].azi = dc.roo.datConPar[1].azi
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3384(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3384};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1085]] /* dc.roo.irRadGai.datConPar[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[592]] /* dc.roo.datConPar[1].azi PARAM */);
  threadData->lastEquationSolved = 3384;
}

/*
equation index: 3386
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConPar[1].layers.roughness_a = dc.roo.datConPar[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3386(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3386};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[277]] /* dc.roo.irRadGai.datConPar[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[190]] /* dc.roo.datConPar[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 3386;
}

/*
equation index: 3387
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConPar[1].layers.absSol_b = dc.roo.datConPar[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3387(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3387};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1090]] /* dc.roo.irRadGai.datConPar[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[597]] /* dc.roo.datConPar[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 3387;
}

/*
equation index: 3388
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConPar[1].layers.absSol_a = dc.roo.datConPar[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3388(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3388};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1089]] /* dc.roo.irRadGai.datConPar[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[596]] /* dc.roo.datConPar[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 3388;
}

/*
equation index: 3391
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConPar[1].layers.material[1].LHea = dc.roo.datConPar[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3391(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3391};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1091]] /* dc.roo.irRadGai.datConPar[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[598]] /* dc.roo.datConPar[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 3391;
}

/*
equation index: 3394
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConPar[1].layers.material[1].nStaReal = dc.roo.datConPar[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3394(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3394};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1098]] /* dc.roo.irRadGai.datConPar[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[605]] /* dc.roo.datConPar[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 3394;
}

/*
equation index: 3395
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConPar[1].layers.material[1].piMat = dc.roo.datConPar[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3395(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3395};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1099]] /* dc.roo.irRadGai.datConPar[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[606]] /* dc.roo.datConPar[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 3395;
}

/*
equation index: 3396
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConPar[1].layers.material[1].piRef = dc.roo.datConPar[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3396(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3396};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1100]] /* dc.roo.irRadGai.datConPar[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[607]] /* dc.roo.datConPar[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 3396;
}

/*
equation index: 3399
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConPar[1].layers.material[1].nStaRef = dc.roo.datConPar[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3399(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3399};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[274]] /* dc.roo.irRadGai.datConPar[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[187]] /* dc.roo.datConPar[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 3399;
}

/*
equation index: 3400
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConPar[1].layers.material[1].R = dc.roo.datConPar[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3400(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3400};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1092]] /* dc.roo.irRadGai.datConPar[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[599]] /* dc.roo.datConPar[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 3400;
}

/*
equation index: 3401
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConPar[1].layers.material[1].d = dc.roo.datConPar[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3401(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3401};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1096]] /* dc.roo.irRadGai.datConPar[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[603]] /* dc.roo.datConPar[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 3401;
}

/*
equation index: 3402
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConPar[1].layers.material[1].c = dc.roo.datConPar[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3402(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3402};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1095]] /* dc.roo.irRadGai.datConPar[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[602]] /* dc.roo.datConPar[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 3402;
}

/*
equation index: 3403
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConPar[1].layers.material[1].k = dc.roo.datConPar[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3403(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3403};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1097]] /* dc.roo.irRadGai.datConPar[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[604]] /* dc.roo.datConPar[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 3403;
}

/*
equation index: 3404
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConPar[1].layers.material[1].x = dc.roo.datConPar[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3404(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3404};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1101]] /* dc.roo.irRadGai.datConPar[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[608]] /* dc.roo.datConPar[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 3404;
}

/*
equation index: 3406
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConPar[1].name = dc.roo.datConPar[1].name
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3406(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3406};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[70]] /* dc.roo.irRadGai.datConPar[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[55]] /* dc.roo.datConPar[1].name PARAM */);
  threadData->lastEquationSolved = 3406;
}

/*
equation index: 3410
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].glaSys.absSolFra = dc.roo.datConExtWin[1].glaSys.absSolFra
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3410(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3410};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1030]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.absSolFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[537]] /* dc.roo.datConExtWin[1].glaSys.absSolFra PARAM */);
  threadData->lastEquationSolved = 3410;
}

/*
equation index: 3411
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].glaSys.UFra = dc.roo.datConExtWin[1].glaSys.UFra
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3411(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3411};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1028]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.UFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[535]] /* dc.roo.datConExtWin[1].glaSys.UFra PARAM */);
  threadData->lastEquationSolved = 3411;
}

/*
equation index: 3412
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].glaSys.shade.tauIR_b = dc.roo.datConExtWin[1].glaSys.shade.tauIR_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3412(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3412};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1053]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.shade.tauIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[560]] /* dc.roo.datConExtWin[1].glaSys.shade.tauIR_b PARAM */);
  threadData->lastEquationSolved = 3412;
}

/*
equation index: 3413
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].glaSys.shade.tauIR_a = dc.roo.datConExtWin[1].glaSys.shade.tauIR_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3413(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3413};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1052]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.shade.tauIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[559]] /* dc.roo.datConExtWin[1].glaSys.shade.tauIR_a PARAM */);
  threadData->lastEquationSolved = 3413;
}

/*
equation index: 3414
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].glaSys.shade.absIR_b = dc.roo.datConExtWin[1].glaSys.shade.absIR_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3414(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3414};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1049]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.shade.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[556]] /* dc.roo.datConExtWin[1].glaSys.shade.absIR_b PARAM */);
  threadData->lastEquationSolved = 3414;
}

/*
equation index: 3415
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].glaSys.shade.rhoSol_b = dc.roo.datConExtWin[1].glaSys.shade.rhoSol_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3415(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3415};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1051]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.shade.rhoSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[558]] /* dc.roo.datConExtWin[1].glaSys.shade.rhoSol_b PARAM */);
  threadData->lastEquationSolved = 3415;
}

/*
equation index: 3416
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].glaSys.shade.rhoSol_a = dc.roo.datConExtWin[1].glaSys.shade.rhoSol_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3416(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3416};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1050]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.shade.rhoSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[557]] /* dc.roo.datConExtWin[1].glaSys.shade.rhoSol_a PARAM */);
  threadData->lastEquationSolved = 3416;
}

/*
equation index: 3417
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].glaSys.shade.tauSol_b = dc.roo.datConExtWin[1].glaSys.shade.tauSol_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3417(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3417};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1055]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.shade.tauSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[562]] /* dc.roo.datConExtWin[1].glaSys.shade.tauSol_b PARAM */);
  threadData->lastEquationSolved = 3417;
}

/*
equation index: 3418
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].glaSys.shade.tauSol_a = dc.roo.datConExtWin[1].glaSys.shade.tauSol_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3418(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3418};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1054]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.shade.tauSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[561]] /* dc.roo.datConExtWin[1].glaSys.shade.tauSol_a PARAM */);
  threadData->lastEquationSolved = 3418;
}

/*
equation index: 3419
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].glaSys.gas[1].P0 = dc.roo.datConExtWin[1].glaSys.gas[1].P0
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3419(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3419};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1032]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.gas[1].P0 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[539]] /* dc.roo.datConExtWin[1].glaSys.gas[1].P0 PARAM */);
  threadData->lastEquationSolved = 3419;
}

/*
equation index: 3420
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].glaSys.gas[1].MM = dc.roo.datConExtWin[1].glaSys.gas[1].MM
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3420(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3420};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1031]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.gas[1].MM PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[538]] /* dc.roo.datConExtWin[1].glaSys.gas[1].MM PARAM */);
  threadData->lastEquationSolved = 3420;
}

/*
equation index: 3421
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].glaSys.gas[1].b_c = dc.roo.datConExtWin[1].glaSys.gas[1].b_c
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3421(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3421};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1036]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.gas[1].b_c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[543]] /* dc.roo.datConExtWin[1].glaSys.gas[1].b_c PARAM */);
  threadData->lastEquationSolved = 3421;
}

/*
equation index: 3422
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].glaSys.gas[1].a_c = dc.roo.datConExtWin[1].glaSys.gas[1].a_c
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3422(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3422};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1033]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.gas[1].a_c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[540]] /* dc.roo.datConExtWin[1].glaSys.gas[1].a_c PARAM */);
  threadData->lastEquationSolved = 3422;
}

/*
equation index: 3423
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].glaSys.gas[1].b_mu = dc.roo.datConExtWin[1].glaSys.gas[1].b_mu
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3423(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3423};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1038]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.gas[1].b_mu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[545]] /* dc.roo.datConExtWin[1].glaSys.gas[1].b_mu PARAM */);
  threadData->lastEquationSolved = 3423;
}

/*
equation index: 3424
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].glaSys.gas[1].a_mu = dc.roo.datConExtWin[1].glaSys.gas[1].a_mu
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3424(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3424};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1035]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.gas[1].a_mu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[542]] /* dc.roo.datConExtWin[1].glaSys.gas[1].a_mu PARAM */);
  threadData->lastEquationSolved = 3424;
}

/*
equation index: 3425
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].glaSys.gas[1].b_k = dc.roo.datConExtWin[1].glaSys.gas[1].b_k
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3425(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3425};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1037]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.gas[1].b_k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[544]] /* dc.roo.datConExtWin[1].glaSys.gas[1].b_k PARAM */);
  threadData->lastEquationSolved = 3425;
}

/*
equation index: 3426
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].glaSys.gas[1].a_k = dc.roo.datConExtWin[1].glaSys.gas[1].a_k
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3426(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3426};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1034]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.gas[1].a_k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[541]] /* dc.roo.datConExtWin[1].glaSys.gas[1].a_k PARAM */);
  threadData->lastEquationSolved = 3426;
}

/*
equation index: 3427
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].glaSys.gas[1].x = dc.roo.datConExtWin[1].glaSys.gas[1].x
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3427(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3427};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1039]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.gas[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[546]] /* dc.roo.datConExtWin[1].glaSys.gas[1].x PARAM */);
  threadData->lastEquationSolved = 3427;
}

/*
equation index: 3428
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].glaSys.glass[1].absIR_a = dc.roo.datConExtWin[1].glaSys.glass[1].absIR_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3428(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3428};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1040]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.glass[1].absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[547]] /* dc.roo.datConExtWin[1].glaSys.glass[1].absIR_a PARAM */);
  threadData->lastEquationSolved = 3428;
}

/*
equation index: 3429
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].glaSys.glass[1].tauIR = dc.roo.datConExtWin[1].glaSys.glass[1].tauIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3429(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3429};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1045]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.glass[1].tauIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[552]] /* dc.roo.datConExtWin[1].glaSys.glass[1].tauIR PARAM */);
  threadData->lastEquationSolved = 3429;
}

/*
equation index: 3430
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].glaSys.glass[1].rhoSol_b[1] = dc.roo.datConExtWin[1].glaSys.glass[1].rhoSol_b[1]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3430(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3430};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1044]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.glass[1].rhoSol_b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[551]] /* dc.roo.datConExtWin[1].glaSys.glass[1].rhoSol_b[1] PARAM */);
  threadData->lastEquationSolved = 3430;
}

/*
equation index: 3431
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].glaSys.glass[1].rhoSol_a[1] = dc.roo.datConExtWin[1].glaSys.glass[1].rhoSol_a[1]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3431(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3431};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1043]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.glass[1].rhoSol_a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[550]] /* dc.roo.datConExtWin[1].glaSys.glass[1].rhoSol_a[1] PARAM */);
  threadData->lastEquationSolved = 3431;
}

/*
equation index: 3432
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].glaSys.glass[1].tauSol[1] = dc.roo.datConExtWin[1].glaSys.glass[1].tauSol[1]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3432(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3432};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1046]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.glass[1].tauSol[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[553]] /* dc.roo.datConExtWin[1].glaSys.glass[1].tauSol[1] PARAM */);
  threadData->lastEquationSolved = 3432;
}

/*
equation index: 3433
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].glaSys.glass[1].k = dc.roo.datConExtWin[1].glaSys.glass[1].k
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3433(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3433};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1042]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.glass[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[549]] /* dc.roo.datConExtWin[1].glaSys.glass[1].k PARAM */);
  threadData->lastEquationSolved = 3433;
}

/*
equation index: 3434
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].glaSys.glass[1].x = dc.roo.datConExtWin[1].glaSys.glass[1].x
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3434(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3434};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1047]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.glass[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[554]] /* dc.roo.datConExtWin[1].glaSys.glass[1].x PARAM */);
  threadData->lastEquationSolved = 3434;
}

/*
equation index: 3437
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].AGla = dc.roo.datConExtWin[1].AGla
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3437(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3437};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1021]] /* dc.roo.irRadGai.datConExtWin[1].AGla PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[528]] /* dc.roo.datConExtWin[1].AGla PARAM */);
  threadData->lastEquationSolved = 3437;
}

/*
equation index: 3438
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].AFra = dc.roo.datConExtWin[1].AFra
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3438(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3438};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1020]] /* dc.roo.irRadGai.datConExtWin[1].AFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[527]] /* dc.roo.datConExtWin[1].AFra PARAM */);
  threadData->lastEquationSolved = 3438;
}

/*
equation index: 3440
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].sidFin.gap = dc.roo.datConExtWin[1].sidFin.gap
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3440(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3440};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1078]] /* dc.roo.irRadGai.datConExtWin[1].sidFin.gap PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[585]] /* dc.roo.datConExtWin[1].sidFin.gap PARAM */);
  threadData->lastEquationSolved = 3440;
}

/*
equation index: 3442
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].sidFin.h = dc.roo.datConExtWin[1].sidFin.h
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3442(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3442};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1079]] /* dc.roo.irRadGai.datConExtWin[1].sidFin.h PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[586]] /* dc.roo.datConExtWin[1].sidFin.h PARAM */);
  threadData->lastEquationSolved = 3442;
}

/*
equation index: 3444
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].ove.gap = dc.roo.datConExtWin[1].ove.gap
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3444(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3444};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1074]] /* dc.roo.irRadGai.datConExtWin[1].ove.gap PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[581]] /* dc.roo.datConExtWin[1].ove.gap PARAM */);
  threadData->lastEquationSolved = 3444;
}

/*
equation index: 3446
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].ove.wR = dc.roo.datConExtWin[1].ove.wR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3446(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3446};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1076]] /* dc.roo.irRadGai.datConExtWin[1].ove.wR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[583]] /* dc.roo.datConExtWin[1].ove.wR PARAM */);
  threadData->lastEquationSolved = 3446;
}

/*
equation index: 3447
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].ove.wL = dc.roo.datConExtWin[1].ove.wL
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3447(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3447};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1075]] /* dc.roo.irRadGai.datConExtWin[1].ove.wL PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[582]] /* dc.roo.datConExtWin[1].ove.wL PARAM */);
  threadData->lastEquationSolved = 3447;
}

/*
equation index: 3448
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].wWin = dc.roo.datConExtWin[1].wWin
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3448(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3448};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1081]] /* dc.roo.irRadGai.datConExtWin[1].wWin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[588]] /* dc.roo.datConExtWin[1].wWin PARAM */);
  threadData->lastEquationSolved = 3448;
}

/*
equation index: 3449
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].hWin = dc.roo.datConExtWin[1].hWin
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3449(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3449};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1056]] /* dc.roo.irRadGai.datConExtWin[1].hWin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[563]] /* dc.roo.datConExtWin[1].hWin PARAM */);
  threadData->lastEquationSolved = 3449;
}

/*
equation index: 3450
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].A = dc.roo.datConExtWin[1].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3450(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3450};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1019]] /* dc.roo.irRadGai.datConExtWin[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[526]] /* dc.roo.datConExtWin[1].A PARAM */);
  threadData->lastEquationSolved = 3450;
}

/*
equation index: 3451
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].boundaryCondition = dc.roo.datConExtWin[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3451(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3451};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[266]] /* dc.roo.irRadGai.datConExtWin[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[179]] /* dc.roo.datConExtWin[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 3451;
}

/*
equation index: 3454
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].T_b_start = dc.roo.datConExtWin[1].T_b_start
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3454(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3454};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1025]] /* dc.roo.irRadGai.datConExtWin[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[532]] /* dc.roo.datConExtWin[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 3454;
}

/*
equation index: 3455
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].T_a_start = dc.roo.datConExtWin[1].T_a_start
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3455(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3455};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1024]] /* dc.roo.irRadGai.datConExtWin[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[531]] /* dc.roo.datConExtWin[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 3455;
}

/*
equation index: 3459
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].azi = dc.roo.datConExtWin[1].azi
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3459(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3459};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1026]] /* dc.roo.irRadGai.datConExtWin[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[533]] /* dc.roo.datConExtWin[1].azi PARAM */);
  threadData->lastEquationSolved = 3459;
}

/*
equation index: 3461
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].layers.roughness_a = dc.roo.datConExtWin[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3461(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3461};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[271]] /* dc.roo.irRadGai.datConExtWin[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[184]] /* dc.roo.datConExtWin[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 3461;
}

/*
equation index: 3462
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].layers.absSol_b = dc.roo.datConExtWin[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3462(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3462};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1061]] /* dc.roo.irRadGai.datConExtWin[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[568]] /* dc.roo.datConExtWin[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 3462;
}

/*
equation index: 3463
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].layers.absSol_a = dc.roo.datConExtWin[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3463(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3463};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1060]] /* dc.roo.irRadGai.datConExtWin[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[567]] /* dc.roo.datConExtWin[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 3463;
}

/*
equation index: 3464
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].layers.absIR_a = dc.roo.datConExtWin[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3464(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3464};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1058]] /* dc.roo.irRadGai.datConExtWin[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[565]] /* dc.roo.datConExtWin[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 3464;
}

/*
equation index: 3467
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].layers.material[1].LHea = dc.roo.datConExtWin[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3467(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3467};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1062]] /* dc.roo.irRadGai.datConExtWin[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[569]] /* dc.roo.datConExtWin[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 3467;
}

/*
equation index: 3470
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].layers.material[1].nStaReal = dc.roo.datConExtWin[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3470(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3470};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1069]] /* dc.roo.irRadGai.datConExtWin[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[576]] /* dc.roo.datConExtWin[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 3470;
}

/*
equation index: 3471
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].layers.material[1].piMat = dc.roo.datConExtWin[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3471(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3471};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1070]] /* dc.roo.irRadGai.datConExtWin[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[577]] /* dc.roo.datConExtWin[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 3471;
}

/*
equation index: 3472
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].layers.material[1].piRef = dc.roo.datConExtWin[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3472(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3472};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1071]] /* dc.roo.irRadGai.datConExtWin[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[578]] /* dc.roo.datConExtWin[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 3472;
}

/*
equation index: 3475
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].layers.material[1].nStaRef = dc.roo.datConExtWin[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3475(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3475};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[268]] /* dc.roo.irRadGai.datConExtWin[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[181]] /* dc.roo.datConExtWin[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 3475;
}

/*
equation index: 3476
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].layers.material[1].R = dc.roo.datConExtWin[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3476(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3476};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1063]] /* dc.roo.irRadGai.datConExtWin[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[570]] /* dc.roo.datConExtWin[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 3476;
}

/*
equation index: 3477
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].layers.material[1].d = dc.roo.datConExtWin[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3477(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3477};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1067]] /* dc.roo.irRadGai.datConExtWin[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[574]] /* dc.roo.datConExtWin[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 3477;
}

/*
equation index: 3478
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].layers.material[1].c = dc.roo.datConExtWin[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3478(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3478};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1066]] /* dc.roo.irRadGai.datConExtWin[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[573]] /* dc.roo.datConExtWin[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 3478;
}

/*
equation index: 3479
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].layers.material[1].k = dc.roo.datConExtWin[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3479(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3479};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1068]] /* dc.roo.irRadGai.datConExtWin[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[575]] /* dc.roo.datConExtWin[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 3479;
}

/*
equation index: 3480
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].layers.material[1].x = dc.roo.datConExtWin[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3480(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3480};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1072]] /* dc.roo.irRadGai.datConExtWin[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[579]] /* dc.roo.datConExtWin[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 3480;
}

/*
equation index: 3482
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExtWin[1].name = dc.roo.datConExtWin[1].name
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3482(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3482};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[69]] /* dc.roo.irRadGai.datConExtWin[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[54]] /* dc.roo.datConExtWin[1].name PARAM */);
  threadData->lastEquationSolved = 3482;
}

/*
equation index: 3483
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExt[1].boundaryCondition = dc.roo.datConExt[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3483(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3483};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[260]] /* dc.roo.irRadGai.datConExt[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[173]] /* dc.roo.datConExt[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 3483;
}

/*
equation index: 3486
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExt[1].T_b_start = dc.roo.datConExt[1].T_b_start
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3486(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3486};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1000]] /* dc.roo.irRadGai.datConExt[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[507]] /* dc.roo.datConExt[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 3486;
}

/*
equation index: 3487
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExt[1].T_a_start = dc.roo.datConExt[1].T_a_start
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3487(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3487};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[999]] /* dc.roo.irRadGai.datConExt[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[506]] /* dc.roo.datConExt[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 3487;
}

/*
equation index: 3491
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExt[1].azi = dc.roo.datConExt[1].azi
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3491(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3491};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1001]] /* dc.roo.irRadGai.datConExt[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[508]] /* dc.roo.datConExt[1].azi PARAM */);
  threadData->lastEquationSolved = 3491;
}

/*
equation index: 3493
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExt[1].layers.roughness_a = dc.roo.datConExt[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3493(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3493};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[265]] /* dc.roo.irRadGai.datConExt[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[178]] /* dc.roo.datConExt[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 3493;
}

/*
equation index: 3494
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExt[1].layers.absSol_b = dc.roo.datConExt[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3494(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3494};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1006]] /* dc.roo.irRadGai.datConExt[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[513]] /* dc.roo.datConExt[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 3494;
}

/*
equation index: 3495
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExt[1].layers.absSol_a = dc.roo.datConExt[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3495(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3495};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1005]] /* dc.roo.irRadGai.datConExt[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[512]] /* dc.roo.datConExt[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 3495;
}

/*
equation index: 3496
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExt[1].layers.absIR_a = dc.roo.datConExt[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3496(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3496};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1003]] /* dc.roo.irRadGai.datConExt[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[510]] /* dc.roo.datConExt[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 3496;
}

/*
equation index: 3499
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExt[1].layers.material[1].LHea = dc.roo.datConExt[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3499(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3499};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1007]] /* dc.roo.irRadGai.datConExt[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[514]] /* dc.roo.datConExt[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 3499;
}

/*
equation index: 3502
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExt[1].layers.material[1].nStaReal = dc.roo.datConExt[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3502(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3502};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1014]] /* dc.roo.irRadGai.datConExt[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[521]] /* dc.roo.datConExt[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 3502;
}

/*
equation index: 3503
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExt[1].layers.material[1].piMat = dc.roo.datConExt[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3503(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3503};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1015]] /* dc.roo.irRadGai.datConExt[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[522]] /* dc.roo.datConExt[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 3503;
}

/*
equation index: 3504
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExt[1].layers.material[1].piRef = dc.roo.datConExt[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3504(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3504};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1016]] /* dc.roo.irRadGai.datConExt[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[523]] /* dc.roo.datConExt[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 3504;
}

/*
equation index: 3507
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExt[1].layers.material[1].nStaRef = dc.roo.datConExt[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3507(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3507};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[262]] /* dc.roo.irRadGai.datConExt[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[175]] /* dc.roo.datConExt[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 3507;
}

/*
equation index: 3508
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExt[1].layers.material[1].R = dc.roo.datConExt[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3508(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3508};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1008]] /* dc.roo.irRadGai.datConExt[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[515]] /* dc.roo.datConExt[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 3508;
}

/*
equation index: 3509
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExt[1].layers.material[1].d = dc.roo.datConExt[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3509(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3509};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1012]] /* dc.roo.irRadGai.datConExt[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[519]] /* dc.roo.datConExt[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 3509;
}

/*
equation index: 3510
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExt[1].layers.material[1].c = dc.roo.datConExt[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3510(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3510};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1011]] /* dc.roo.irRadGai.datConExt[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[518]] /* dc.roo.datConExt[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 3510;
}

/*
equation index: 3511
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExt[1].layers.material[1].k = dc.roo.datConExt[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3511(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3511};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1013]] /* dc.roo.irRadGai.datConExt[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[520]] /* dc.roo.datConExt[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 3511;
}

/*
equation index: 3512
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExt[1].layers.material[1].x = dc.roo.datConExt[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3512(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3512};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1017]] /* dc.roo.irRadGai.datConExt[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[524]] /* dc.roo.datConExt[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 3512;
}

/*
equation index: 3514
type: SIMPLE_ASSIGN
dc.roo.irRadGai.datConExt[1].name = dc.roo.datConExt[1].name
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3514(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3514};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[68]] /* dc.roo.irRadGai.datConExt[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[53]] /* dc.roo.datConExt[1].name PARAM */);
  threadData->lastEquationSolved = 3514;
}

/*
equation index: 3555
type: SIMPLE_ASSIGN
dc.roo.air.p_start = dc.roo.p_start
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3555(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3555};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[413]] /* dc.roo.air.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1187]] /* dc.roo.p_start PARAM */);
  threadData->lastEquationSolved = 3555;
}

/*
equation index: 3556
type: SIMPLE_ASSIGN
dc.roo.air.rho_start = 1.1843079200592153e-5 * dc.roo.air.p_start
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3556(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3556};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[414]] /* dc.roo.air.rho_start PARAM */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[413]] /* dc.roo.air.p_start PARAM */));
  threadData->lastEquationSolved = 3556;
}

/*
equation index: 3557
type: SIMPLE_ASSIGN
dc.roo.air.fluInt.rho_start = dc.roo.air.rho_start
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3557(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3557};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[412]] /* dc.roo.air.fluInt.rho_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[414]] /* dc.roo.air.rho_start PARAM */);
  threadData->lastEquationSolved = 3557;
}

/*
equation index: 3558
type: SIMPLE_ASSIGN
dc.roo.V = dc.roo.AFlo * dc.roo.hRoo
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3558(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3558};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[143]] /* dc.roo.V PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[142]] /* dc.roo.AFlo PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[656]] /* dc.roo.hRoo PARAM */));
  threadData->lastEquationSolved = 3558;
}

/*
equation index: 3559
type: SIMPLE_ASSIGN
dc.roo.air.V = dc.roo.V
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3559(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3559};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[180]] /* dc.roo.air.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[143]] /* dc.roo.V PARAM */);
  threadData->lastEquationSolved = 3559;
}

/*
equation index: 3560
type: SIMPLE_ASSIGN
dc.roo.air.fluInt.V = dc.roo.air.V
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3560(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3560};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[409]] /* dc.roo.air.fluInt.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[180]] /* dc.roo.air.V PARAM */);
  threadData->lastEquationSolved = 3560;
}

/*
equation index: 3561
type: SIMPLE_ASSIGN
dc.roo.air.fluInt.m_start = dc.roo.air.fluInt.rho_start * dc.roo.air.fluInt.V
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3561(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3561};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[410]] /* dc.roo.air.fluInt.m_start PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[412]] /* dc.roo.air.fluInt.rho_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[409]] /* dc.roo.air.fluInt.V PARAM */));
  threadData->lastEquationSolved = 3561;
}

/*
equation index: 3563
type: SIMPLE_ASSIGN
dc.roo.air.fluInt.p_start = dc.roo.air.p_start
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3563(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3563};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[411]] /* dc.roo.air.fluInt.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[413]] /* dc.roo.air.p_start PARAM */);
  threadData->lastEquationSolved = 3563;
}

/*
equation index: 3574
type: SIMPLE_ASSIGN
dc.roo.air.surIde[6].name = "East wall"
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3574(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3574};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[50]] /* dc.roo.air.surIde[6].name PARAM */) = _OMC_LIT86;
  threadData->lastEquationSolved = 3574;
}

/*
equation index: 3578
type: SIMPLE_ASSIGN
dc.roo.air.surIde[5].name = "West wall"
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3578(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3578};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[49]] /* dc.roo.air.surIde[5].name PARAM */) = _OMC_LIT87;
  threadData->lastEquationSolved = 3578;
}

/*
equation index: 3582
type: SIMPLE_ASSIGN
dc.roo.air.surIde[4].name = "North wall"
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3582(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3582};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[48]] /* dc.roo.air.surIde[4].name PARAM */) = _OMC_LIT88;
  threadData->lastEquationSolved = 3582;
}

/*
equation index: 3586
type: SIMPLE_ASSIGN
dc.roo.air.surIde[3].name = "South wall"
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3586(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3586};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[47]] /* dc.roo.air.surIde[3].name PARAM */) = _OMC_LIT89;
  threadData->lastEquationSolved = 3586;
}

/*
equation index: 3590
type: SIMPLE_ASSIGN
dc.roo.air.surIde[2].name = "Ceiling"
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3590(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3590};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[46]] /* dc.roo.air.surIde[2].name PARAM */) = _OMC_LIT90;
  threadData->lastEquationSolved = 3590;
}

/*
equation index: 3594
type: SIMPLE_ASSIGN
dc.roo.air.surIde[1].name = "Floor"
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3594(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3594};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[45]] /* dc.roo.air.surIde[1].name PARAM */) = _OMC_LIT91;
  threadData->lastEquationSolved = 3594;
}

/*
equation index: 3617
type: SIMPLE_ASSIGN
dc.roo.air.cfd.rho_start = dc.roo.air.rho_start
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3617(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3617};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[193]] /* dc.roo.air.cfd.rho_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[414]] /* dc.roo.air.rho_start PARAM */);
  threadData->lastEquationSolved = 3617;
}

/*
equation index: 3619
type: SIMPLE_ASSIGN
dc.roo.air.portName[12] = dc.roo.portName[12]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3619(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3619};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[38]] /* dc.roo.air.portName[12] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[89]] /* dc.roo.portName[12] PARAM */);
  threadData->lastEquationSolved = 3619;
}

/*
equation index: 3620
type: SIMPLE_ASSIGN
dc.roo.air.cfd.portName[12] = dc.roo.air.portName[12]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3620(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3620};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[15]] /* dc.roo.air.cfd.portName[12] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[38]] /* dc.roo.air.portName[12] PARAM */);
  threadData->lastEquationSolved = 3620;
}

/*
equation index: 3621
type: SIMPLE_ASSIGN
dc.roo.air.portName[11] = dc.roo.portName[11]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3621(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3621};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[37]] /* dc.roo.air.portName[11] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[88]] /* dc.roo.portName[11] PARAM */);
  threadData->lastEquationSolved = 3621;
}

/*
equation index: 3622
type: SIMPLE_ASSIGN
dc.roo.air.cfd.portName[11] = dc.roo.air.portName[11]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3622(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3622};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[14]] /* dc.roo.air.cfd.portName[11] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[37]] /* dc.roo.air.portName[11] PARAM */);
  threadData->lastEquationSolved = 3622;
}

/*
equation index: 3623
type: SIMPLE_ASSIGN
dc.roo.air.portName[10] = dc.roo.portName[10]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3623(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3623};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[36]] /* dc.roo.air.portName[10] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[87]] /* dc.roo.portName[10] PARAM */);
  threadData->lastEquationSolved = 3623;
}

/*
equation index: 3624
type: SIMPLE_ASSIGN
dc.roo.air.cfd.portName[10] = dc.roo.air.portName[10]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3624(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3624};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[13]] /* dc.roo.air.cfd.portName[10] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[36]] /* dc.roo.air.portName[10] PARAM */);
  threadData->lastEquationSolved = 3624;
}

/*
equation index: 3625
type: SIMPLE_ASSIGN
dc.roo.air.portName[9] = dc.roo.portName[9]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3625(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3625};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[35]] /* dc.roo.air.portName[9] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[86]] /* dc.roo.portName[9] PARAM */);
  threadData->lastEquationSolved = 3625;
}

/*
equation index: 3626
type: SIMPLE_ASSIGN
dc.roo.air.cfd.portName[9] = dc.roo.air.portName[9]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3626(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3626};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[12]] /* dc.roo.air.cfd.portName[9] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[35]] /* dc.roo.air.portName[9] PARAM */);
  threadData->lastEquationSolved = 3626;
}

/*
equation index: 3627
type: SIMPLE_ASSIGN
dc.roo.air.portName[8] = dc.roo.portName[8]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3627(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3627};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[34]] /* dc.roo.air.portName[8] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[85]] /* dc.roo.portName[8] PARAM */);
  threadData->lastEquationSolved = 3627;
}

/*
equation index: 3628
type: SIMPLE_ASSIGN
dc.roo.air.cfd.portName[8] = dc.roo.air.portName[8]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3628(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3628};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[11]] /* dc.roo.air.cfd.portName[8] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[34]] /* dc.roo.air.portName[8] PARAM */);
  threadData->lastEquationSolved = 3628;
}

/*
equation index: 3629
type: SIMPLE_ASSIGN
dc.roo.air.portName[7] = dc.roo.portName[7]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3629(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3629};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[33]] /* dc.roo.air.portName[7] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[84]] /* dc.roo.portName[7] PARAM */);
  threadData->lastEquationSolved = 3629;
}

/*
equation index: 3630
type: SIMPLE_ASSIGN
dc.roo.air.cfd.portName[7] = dc.roo.air.portName[7]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3630(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3630};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[10]] /* dc.roo.air.cfd.portName[7] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[33]] /* dc.roo.air.portName[7] PARAM */);
  threadData->lastEquationSolved = 3630;
}

/*
equation index: 3631
type: SIMPLE_ASSIGN
dc.roo.air.portName[6] = dc.roo.portName[6]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3631(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3631};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[32]] /* dc.roo.air.portName[6] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[83]] /* dc.roo.portName[6] PARAM */);
  threadData->lastEquationSolved = 3631;
}

/*
equation index: 3632
type: SIMPLE_ASSIGN
dc.roo.air.cfd.portName[6] = dc.roo.air.portName[6]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3632(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3632};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[9]] /* dc.roo.air.cfd.portName[6] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[32]] /* dc.roo.air.portName[6] PARAM */);
  threadData->lastEquationSolved = 3632;
}

/*
equation index: 3633
type: SIMPLE_ASSIGN
dc.roo.air.portName[5] = dc.roo.portName[5]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3633(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3633};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[31]] /* dc.roo.air.portName[5] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[82]] /* dc.roo.portName[5] PARAM */);
  threadData->lastEquationSolved = 3633;
}

/*
equation index: 3634
type: SIMPLE_ASSIGN
dc.roo.air.cfd.portName[5] = dc.roo.air.portName[5]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3634(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3634};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[8]] /* dc.roo.air.cfd.portName[5] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[31]] /* dc.roo.air.portName[5] PARAM */);
  threadData->lastEquationSolved = 3634;
}

/*
equation index: 3635
type: SIMPLE_ASSIGN
dc.roo.air.portName[4] = dc.roo.portName[4]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3635(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3635};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[30]] /* dc.roo.air.portName[4] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[81]] /* dc.roo.portName[4] PARAM */);
  threadData->lastEquationSolved = 3635;
}

/*
equation index: 3636
type: SIMPLE_ASSIGN
dc.roo.air.cfd.portName[4] = dc.roo.air.portName[4]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3636(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3636};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[7]] /* dc.roo.air.cfd.portName[4] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[30]] /* dc.roo.air.portName[4] PARAM */);
  threadData->lastEquationSolved = 3636;
}

/*
equation index: 3637
type: SIMPLE_ASSIGN
dc.roo.air.portName[3] = dc.roo.portName[3]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3637(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3637};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[29]] /* dc.roo.air.portName[3] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[80]] /* dc.roo.portName[3] PARAM */);
  threadData->lastEquationSolved = 3637;
}

/*
equation index: 3638
type: SIMPLE_ASSIGN
dc.roo.air.cfd.portName[3] = dc.roo.air.portName[3]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3638(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3638};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[6]] /* dc.roo.air.cfd.portName[3] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[29]] /* dc.roo.air.portName[3] PARAM */);
  threadData->lastEquationSolved = 3638;
}

/*
equation index: 3639
type: SIMPLE_ASSIGN
dc.roo.air.portName[2] = dc.roo.portName[2]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3639(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3639};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[28]] /* dc.roo.air.portName[2] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[79]] /* dc.roo.portName[2] PARAM */);
  threadData->lastEquationSolved = 3639;
}

/*
equation index: 3640
type: SIMPLE_ASSIGN
dc.roo.air.cfd.portName[2] = dc.roo.air.portName[2]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3640(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3640};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[5]] /* dc.roo.air.cfd.portName[2] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[28]] /* dc.roo.air.portName[2] PARAM */);
  threadData->lastEquationSolved = 3640;
}

/*
equation index: 3641
type: SIMPLE_ASSIGN
dc.roo.air.portName[1] = dc.roo.portName[1]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3641(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3641};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[27]] /* dc.roo.air.portName[1] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[78]] /* dc.roo.portName[1] PARAM */);
  threadData->lastEquationSolved = 3641;
}

/*
equation index: 3642
type: SIMPLE_ASSIGN
dc.roo.air.cfd.portName[1] = dc.roo.air.portName[1]
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3642(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3642};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[4]] /* dc.roo.air.cfd.portName[1] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[27]] /* dc.roo.air.portName[1] PARAM */);
  threadData->lastEquationSolved = 3642;
}

/*
equation index: 3648
type: SIMPLE_ASSIGN
dc.roo.air.cfd.surIde[6].name = "East wall"
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3648(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3648};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[21]] /* dc.roo.air.cfd.surIde[6].name PARAM */) = _OMC_LIT86;
  threadData->lastEquationSolved = 3648;
}

/*
equation index: 3652
type: SIMPLE_ASSIGN
dc.roo.air.cfd.surIde[5].name = "West wall"
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3652(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3652};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[20]] /* dc.roo.air.cfd.surIde[5].name PARAM */) = _OMC_LIT87;
  threadData->lastEquationSolved = 3652;
}

/*
equation index: 3656
type: SIMPLE_ASSIGN
dc.roo.air.cfd.surIde[4].name = "North wall"
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3656(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3656};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[19]] /* dc.roo.air.cfd.surIde[4].name PARAM */) = _OMC_LIT88;
  threadData->lastEquationSolved = 3656;
}

/*
equation index: 3660
type: SIMPLE_ASSIGN
dc.roo.air.cfd.surIde[3].name = "South wall"
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3660(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3660};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[18]] /* dc.roo.air.cfd.surIde[3].name PARAM */) = _OMC_LIT89;
  threadData->lastEquationSolved = 3660;
}

/*
equation index: 3664
type: SIMPLE_ASSIGN
dc.roo.air.cfd.surIde[2].name = "Ceiling"
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3664(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3664};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[17]] /* dc.roo.air.cfd.surIde[2].name PARAM */) = _OMC_LIT90;
  threadData->lastEquationSolved = 3664;
}

/*
equation index: 3668
type: SIMPLE_ASSIGN
dc.roo.air.cfd.surIde[1].name = "Floor"
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3668(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3668};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[16]] /* dc.roo.air.cfd.surIde[1].name PARAM */) = _OMC_LIT91;
  threadData->lastEquationSolved = 3668;
}

/*
equation index: 3721
type: SIMPLE_ASSIGN
dc.roo.air.cfdFilNam = dc.roo.absCfdFilNam
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3721(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3721};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[22]] /* dc.roo.air.cfdFilNam PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[2]] /* dc.roo.absCfdFilNam PARAM */);
  threadData->lastEquationSolved = 3721;
}

/*
equation index: 3722
type: SIMPLE_ASSIGN
dc.roo.air.cfd.cfdFilNam = dc.roo.air.cfdFilNam
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3722(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3722};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[3]] /* dc.roo.air.cfd.cfdFilNam PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[22]] /* dc.roo.air.cfdFilNam PARAM */);
  threadData->lastEquationSolved = 3722;
}

/*
equation index: 3723
type: SIMPLE_ASSIGN
dc.roo.air.samplePeriod = dc.roo.samplePeriod
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3723(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3723};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[415]] /* dc.roo.air.samplePeriod PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1427]] /* dc.roo.samplePeriod PARAM */);
  threadData->lastEquationSolved = 3723;
}

/*
equation index: 3724
type: SIMPLE_ASSIGN
dc.roo.air.cfd.samplePeriod = dc.roo.air.samplePeriod
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3724(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3724};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[415]] /* dc.roo.air.samplePeriod PARAM */);
  threadData->lastEquationSolved = 3724;
}

/*
equation index: 3729
type: SIMPLE_ASSIGN
dc.roo.air.surBou[6].A = dc.roo.surBou[6].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3729(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3729};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[422]] /* dc.roo.air.surBou[6].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1433]] /* dc.roo.surBou[6].A PARAM */);
  threadData->lastEquationSolved = 3729;
}

/*
equation index: 3730
type: SIMPLE_ASSIGN
dc.roo.air.ASurBou[6] = dc.roo.air.surBou[6].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3730(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3730};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[157]] /* dc.roo.air.ASurBou[6] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[422]] /* dc.roo.air.surBou[6].A PARAM */);
  threadData->lastEquationSolved = 3730;
}

/*
equation index: 3731
type: SIMPLE_ASSIGN
dc.roo.air.surBou[5].A = dc.roo.surBou[5].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3731(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3731};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[421]] /* dc.roo.air.surBou[5].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1432]] /* dc.roo.surBou[5].A PARAM */);
  threadData->lastEquationSolved = 3731;
}

/*
equation index: 3732
type: SIMPLE_ASSIGN
dc.roo.air.ASurBou[5] = dc.roo.air.surBou[5].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3732(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3732};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[156]] /* dc.roo.air.ASurBou[5] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[421]] /* dc.roo.air.surBou[5].A PARAM */);
  threadData->lastEquationSolved = 3732;
}

/*
equation index: 3733
type: SIMPLE_ASSIGN
dc.roo.air.surBou[4].A = dc.roo.surBou[4].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3733(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3733};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[420]] /* dc.roo.air.surBou[4].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1431]] /* dc.roo.surBou[4].A PARAM */);
  threadData->lastEquationSolved = 3733;
}

/*
equation index: 3734
type: SIMPLE_ASSIGN
dc.roo.air.ASurBou[4] = dc.roo.air.surBou[4].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3734(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3734};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[155]] /* dc.roo.air.ASurBou[4] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[420]] /* dc.roo.air.surBou[4].A PARAM */);
  threadData->lastEquationSolved = 3734;
}

/*
equation index: 3735
type: SIMPLE_ASSIGN
dc.roo.air.surBou[3].A = dc.roo.surBou[3].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3735(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3735};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[419]] /* dc.roo.air.surBou[3].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1430]] /* dc.roo.surBou[3].A PARAM */);
  threadData->lastEquationSolved = 3735;
}

/*
equation index: 3736
type: SIMPLE_ASSIGN
dc.roo.air.ASurBou[3] = dc.roo.air.surBou[3].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3736(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3736};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[154]] /* dc.roo.air.ASurBou[3] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[419]] /* dc.roo.air.surBou[3].A PARAM */);
  threadData->lastEquationSolved = 3736;
}

/*
equation index: 3737
type: SIMPLE_ASSIGN
dc.roo.air.surBou[2].A = dc.roo.surBou[2].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3737(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3737};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[418]] /* dc.roo.air.surBou[2].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1429]] /* dc.roo.surBou[2].A PARAM */);
  threadData->lastEquationSolved = 3737;
}

/*
equation index: 3738
type: SIMPLE_ASSIGN
dc.roo.air.ASurBou[2] = dc.roo.air.surBou[2].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3738(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3738};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[153]] /* dc.roo.air.ASurBou[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[418]] /* dc.roo.air.surBou[2].A PARAM */);
  threadData->lastEquationSolved = 3738;
}

/*
equation index: 3739
type: SIMPLE_ASSIGN
dc.roo.air.surBou[1].A = dc.roo.surBou[1].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3739(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3739};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[417]] /* dc.roo.air.surBou[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1428]] /* dc.roo.surBou[1].A PARAM */);
  threadData->lastEquationSolved = 3739;
}

/*
equation index: 3740
type: SIMPLE_ASSIGN
dc.roo.air.ASurBou[1] = dc.roo.air.surBou[1].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3740(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3740};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[152]] /* dc.roo.air.ASurBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[417]] /* dc.roo.air.surBou[1].A PARAM */);
  threadData->lastEquationSolved = 3740;
}

/*
equation index: 3741
type: SIMPLE_ASSIGN
dc.roo.air.datConBou[1].A = dc.roo.datConBou[1].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3741(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3741};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[239]] /* dc.roo.air.datConBou[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[484]] /* dc.roo.datConBou[1].A PARAM */);
  threadData->lastEquationSolved = 3741;
}

/*
equation index: 3742
type: SIMPLE_ASSIGN
dc.roo.air.AConBou[1] = dc.roo.air.datConBou[1].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3742(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3742};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[146]] /* dc.roo.air.AConBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[239]] /* dc.roo.air.datConBou[1].A PARAM */);
  threadData->lastEquationSolved = 3742;
}

/*
equation index: 3743
type: SIMPLE_ASSIGN
dc.roo.air.datConPar[1].A = dc.roo.datConPar[1].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3743(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3743};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[344]] /* dc.roo.air.datConPar[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[589]] /* dc.roo.datConPar[1].A PARAM */);
  threadData->lastEquationSolved = 3743;
}

/*
equation index: 3744
type: SIMPLE_ASSIGN
dc.roo.air.AConPar[1] = dc.roo.air.datConPar[1].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3744(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3744};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[151]] /* dc.roo.air.AConPar[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[344]] /* dc.roo.air.datConPar[1].A PARAM */);
  threadData->lastEquationSolved = 3744;
}

/*
equation index: 3745
type: SIMPLE_ASSIGN
dc.roo.air.datConExtWin[1].AWin = dc.roo.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3745(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3745};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[285]] /* dc.roo.air.datConExtWin[1].AWin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[530]] /* dc.roo.datConExtWin[1].AWin PARAM */);
  threadData->lastEquationSolved = 3745;
}

/*
equation index: 3746
type: SIMPLE_ASSIGN
dc.roo.air.datConExtWin[1].fFra = dc.roo.datConExtWin[1].fFra
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3746(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3746};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[289]] /* dc.roo.air.datConExtWin[1].fFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[534]] /* dc.roo.datConExtWin[1].fFra PARAM */);
  threadData->lastEquationSolved = 3746;
}

/*
equation index: 3747
type: SIMPLE_ASSIGN
dc.roo.air.AConExtWinFra[1] = dc.roo.air.datConExtWin[1].fFra * dc.roo.air.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3747(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3747};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[148]] /* dc.roo.air.AConExtWinFra[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[289]] /* dc.roo.air.datConExtWin[1].fFra PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[285]] /* dc.roo.air.datConExtWin[1].AWin PARAM */));
  threadData->lastEquationSolved = 3747;
}

/*
equation index: 3748
type: SIMPLE_ASSIGN
dc.roo.air.AConExtWinGla[1] = (1.0 - dc.roo.air.datConExtWin[1].fFra) * dc.roo.air.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3748(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3748};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[149]] /* dc.roo.air.AConExtWinGla[1] PARAM */) = (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[289]] /* dc.roo.air.datConExtWin[1].fFra PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[285]] /* dc.roo.air.datConExtWin[1].AWin PARAM */));
  threadData->lastEquationSolved = 3748;
}

/*
equation index: 3749
type: SIMPLE_ASSIGN
dc.roo.air.datConExtWin[1].AOpa = dc.roo.datConExtWin[1].AOpa
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3749(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3749};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[284]] /* dc.roo.air.datConExtWin[1].AOpa PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[529]] /* dc.roo.datConExtWin[1].AOpa PARAM */);
  threadData->lastEquationSolved = 3749;
}

/*
equation index: 3750
type: SIMPLE_ASSIGN
dc.roo.air.AConExtWinOpa[1] = dc.roo.air.datConExtWin[1].AOpa
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3750(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3750};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[150]] /* dc.roo.air.AConExtWinOpa[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[284]] /* dc.roo.air.datConExtWin[1].AOpa PARAM */);
  threadData->lastEquationSolved = 3750;
}

/*
equation index: 3751
type: SIMPLE_ASSIGN
dc.roo.air.datConExt[1].A = dc.roo.datConExt[1].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3751(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3751};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[260]] /* dc.roo.air.datConExt[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[505]] /* dc.roo.datConExt[1].A PARAM */);
  threadData->lastEquationSolved = 3751;
}

/*
equation index: 3752
type: SIMPLE_ASSIGN
dc.roo.air.AConExt[1] = dc.roo.air.datConExt[1].A
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3752(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3752};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[147]] /* dc.roo.air.AConExt[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[260]] /* dc.roo.air.datConExt[1].A PARAM */);
  threadData->lastEquationSolved = 3752;
}

/*
equation index: 3760
type: SIMPLE_ASSIGN
dc.roo.air.dummyCon.R = dc.roo.air.dummyCon.material[1].R
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3760(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3760};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[365]] /* dc.roo.air.dummyCon.R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[371]] /* dc.roo.air.dummyCon.material[1].R PARAM */);
  threadData->lastEquationSolved = 3760;
}

/*
equation index: 3767
type: SIMPLE_ASSIGN
dc.roo.air.surBou[6].name = dc.roo.surBou[6].name
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3767(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3767};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[44]] /* dc.roo.air.surBou[6].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[106]] /* dc.roo.surBou[6].name PARAM */);
  threadData->lastEquationSolved = 3767;
}

/*
equation index: 3769
type: SIMPLE_ASSIGN
dc.roo.air.surBou[6].absSol = dc.roo.surBou[6].absSol
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3769(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3769};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[434]] /* dc.roo.air.surBou[6].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1445]] /* dc.roo.surBou[6].absSol PARAM */);
  threadData->lastEquationSolved = 3769;
}

/*
equation index: 3770
type: SIMPLE_ASSIGN
dc.roo.air.surBou[6].absIR = dc.roo.surBou[6].absIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3770(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3770};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[428]] /* dc.roo.air.surBou[6].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1439]] /* dc.roo.surBou[6].absIR PARAM */);
  threadData->lastEquationSolved = 3770;
}

/*
equation index: 3773
type: SIMPLE_ASSIGN
dc.roo.air.surBou[5].name = dc.roo.surBou[5].name
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3773(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3773};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[43]] /* dc.roo.air.surBou[5].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[105]] /* dc.roo.surBou[5].name PARAM */);
  threadData->lastEquationSolved = 3773;
}

/*
equation index: 3775
type: SIMPLE_ASSIGN
dc.roo.air.surBou[5].absSol = dc.roo.surBou[5].absSol
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3775(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3775};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[433]] /* dc.roo.air.surBou[5].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1444]] /* dc.roo.surBou[5].absSol PARAM */);
  threadData->lastEquationSolved = 3775;
}

/*
equation index: 3776
type: SIMPLE_ASSIGN
dc.roo.air.surBou[5].absIR = dc.roo.surBou[5].absIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3776(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3776};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[427]] /* dc.roo.air.surBou[5].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1438]] /* dc.roo.surBou[5].absIR PARAM */);
  threadData->lastEquationSolved = 3776;
}

/*
equation index: 3779
type: SIMPLE_ASSIGN
dc.roo.air.surBou[4].name = dc.roo.surBou[4].name
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3779(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3779};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[42]] /* dc.roo.air.surBou[4].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[104]] /* dc.roo.surBou[4].name PARAM */);
  threadData->lastEquationSolved = 3779;
}

/*
equation index: 3781
type: SIMPLE_ASSIGN
dc.roo.air.surBou[4].absSol = dc.roo.surBou[4].absSol
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3781(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3781};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[432]] /* dc.roo.air.surBou[4].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1443]] /* dc.roo.surBou[4].absSol PARAM */);
  threadData->lastEquationSolved = 3781;
}

/*
equation index: 3782
type: SIMPLE_ASSIGN
dc.roo.air.surBou[4].absIR = dc.roo.surBou[4].absIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3782(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3782};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[426]] /* dc.roo.air.surBou[4].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1437]] /* dc.roo.surBou[4].absIR PARAM */);
  threadData->lastEquationSolved = 3782;
}

/*
equation index: 3785
type: SIMPLE_ASSIGN
dc.roo.air.surBou[3].name = dc.roo.surBou[3].name
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3785(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3785};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[41]] /* dc.roo.air.surBou[3].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[103]] /* dc.roo.surBou[3].name PARAM */);
  threadData->lastEquationSolved = 3785;
}

/*
equation index: 3787
type: SIMPLE_ASSIGN
dc.roo.air.surBou[3].absSol = dc.roo.surBou[3].absSol
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3787(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3787};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[431]] /* dc.roo.air.surBou[3].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1442]] /* dc.roo.surBou[3].absSol PARAM */);
  threadData->lastEquationSolved = 3787;
}

/*
equation index: 3788
type: SIMPLE_ASSIGN
dc.roo.air.surBou[3].absIR = dc.roo.surBou[3].absIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3788(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3788};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[425]] /* dc.roo.air.surBou[3].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1436]] /* dc.roo.surBou[3].absIR PARAM */);
  threadData->lastEquationSolved = 3788;
}

/*
equation index: 3791
type: SIMPLE_ASSIGN
dc.roo.air.surBou[2].name = dc.roo.surBou[2].name
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3791(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3791};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[40]] /* dc.roo.air.surBou[2].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[102]] /* dc.roo.surBou[2].name PARAM */);
  threadData->lastEquationSolved = 3791;
}

/*
equation index: 3793
type: SIMPLE_ASSIGN
dc.roo.air.surBou[2].absSol = dc.roo.surBou[2].absSol
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3793(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3793};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[430]] /* dc.roo.air.surBou[2].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1441]] /* dc.roo.surBou[2].absSol PARAM */);
  threadData->lastEquationSolved = 3793;
}

/*
equation index: 3794
type: SIMPLE_ASSIGN
dc.roo.air.surBou[2].absIR = dc.roo.surBou[2].absIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3794(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3794};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[424]] /* dc.roo.air.surBou[2].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1435]] /* dc.roo.surBou[2].absIR PARAM */);
  threadData->lastEquationSolved = 3794;
}

/*
equation index: 3797
type: SIMPLE_ASSIGN
dc.roo.air.surBou[1].name = dc.roo.surBou[1].name
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3797(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3797};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[39]] /* dc.roo.air.surBou[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[101]] /* dc.roo.surBou[1].name PARAM */);
  threadData->lastEquationSolved = 3797;
}

/*
equation index: 3799
type: SIMPLE_ASSIGN
dc.roo.air.surBou[1].absSol = dc.roo.surBou[1].absSol
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3799(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3799};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[429]] /* dc.roo.air.surBou[1].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1440]] /* dc.roo.surBou[1].absSol PARAM */);
  threadData->lastEquationSolved = 3799;
}

/*
equation index: 3800
type: SIMPLE_ASSIGN
dc.roo.air.surBou[1].absIR = dc.roo.surBou[1].absIR
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3800(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3800};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[423]] /* dc.roo.air.surBou[1].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1434]] /* dc.roo.surBou[1].absIR PARAM */);
  threadData->lastEquationSolved = 3800;
}

/*
equation index: 3805
type: SIMPLE_ASSIGN
dc.roo.air.datConBou[1].T_b_start = dc.roo.datConBou[1].T_b_start
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3805(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3805};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[241]] /* dc.roo.air.datConBou[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[486]] /* dc.roo.datConBou[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 3805;
}

/*
equation index: 3806
type: SIMPLE_ASSIGN
dc.roo.air.datConBou[1].T_a_start = dc.roo.datConBou[1].T_a_start
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3806(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3806};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[240]] /* dc.roo.air.datConBou[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[485]] /* dc.roo.datConBou[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 3806;
}

/*
equation index: 3810
type: SIMPLE_ASSIGN
dc.roo.air.datConBou[1].azi = dc.roo.datConBou[1].azi
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3810(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3810};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[242]] /* dc.roo.air.datConBou[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[487]] /* dc.roo.datConBou[1].azi PARAM */);
  threadData->lastEquationSolved = 3810;
}

/*
equation index: 3812
type: SIMPLE_ASSIGN
dc.roo.air.datConBou[1].layers.roughness_a = dc.roo.datConBou[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3812(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3812};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[96]] /* dc.roo.air.datConBou[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[172]] /* dc.roo.datConBou[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 3812;
}

/*
equation index: 3813
type: SIMPLE_ASSIGN
dc.roo.air.datConBou[1].layers.absSol_b = dc.roo.datConBou[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3813(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3813};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[247]] /* dc.roo.air.datConBou[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[492]] /* dc.roo.datConBou[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 3813;
}

/*
equation index: 3814
type: SIMPLE_ASSIGN
dc.roo.air.datConBou[1].layers.absSol_a = dc.roo.datConBou[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3814(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3814};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[246]] /* dc.roo.air.datConBou[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[491]] /* dc.roo.datConBou[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 3814;
}

/*
equation index: 3815
type: SIMPLE_ASSIGN
dc.roo.air.datConBou[1].layers.absIR_b = dc.roo.datConBou[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3815(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3815};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[245]] /* dc.roo.air.datConBou[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[490]] /* dc.roo.datConBou[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 3815;
}

/*
equation index: 3816
type: SIMPLE_ASSIGN
dc.roo.air.datConBou[1].layers.absIR_a = dc.roo.datConBou[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3816(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3816};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[244]] /* dc.roo.air.datConBou[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[489]] /* dc.roo.datConBou[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 3816;
}

/*
equation index: 3819
type: SIMPLE_ASSIGN
dc.roo.air.datConBou[1].layers.material[1].LHea = dc.roo.datConBou[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3819(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3819};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[248]] /* dc.roo.air.datConBou[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[493]] /* dc.roo.datConBou[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 3819;
}

/*
equation index: 3822
type: SIMPLE_ASSIGN
dc.roo.air.datConBou[1].layers.material[1].nStaReal = dc.roo.datConBou[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3822(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3822};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[255]] /* dc.roo.air.datConBou[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[500]] /* dc.roo.datConBou[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 3822;
}

/*
equation index: 3823
type: SIMPLE_ASSIGN
dc.roo.air.datConBou[1].layers.material[1].piMat = dc.roo.datConBou[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3823(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3823};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[256]] /* dc.roo.air.datConBou[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[501]] /* dc.roo.datConBou[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 3823;
}

/*
equation index: 3824
type: SIMPLE_ASSIGN
dc.roo.air.datConBou[1].layers.material[1].piRef = dc.roo.datConBou[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3824(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3824};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[257]] /* dc.roo.air.datConBou[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[502]] /* dc.roo.datConBou[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 3824;
}

/*
equation index: 3827
type: SIMPLE_ASSIGN
dc.roo.air.datConBou[1].layers.material[1].nStaRef = dc.roo.datConBou[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3827(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3827};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[93]] /* dc.roo.air.datConBou[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[169]] /* dc.roo.datConBou[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 3827;
}

/*
equation index: 3828
type: SIMPLE_ASSIGN
dc.roo.air.datConBou[1].layers.material[1].R = dc.roo.datConBou[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3828(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3828};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[249]] /* dc.roo.air.datConBou[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[494]] /* dc.roo.datConBou[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 3828;
}

/*
equation index: 3829
type: SIMPLE_ASSIGN
dc.roo.air.datConBou[1].layers.material[1].d = dc.roo.datConBou[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3829(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3829};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[253]] /* dc.roo.air.datConBou[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[498]] /* dc.roo.datConBou[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 3829;
}

/*
equation index: 3830
type: SIMPLE_ASSIGN
dc.roo.air.datConBou[1].layers.material[1].c = dc.roo.datConBou[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3830(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3830};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[252]] /* dc.roo.air.datConBou[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[497]] /* dc.roo.datConBou[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 3830;
}

/*
equation index: 3831
type: SIMPLE_ASSIGN
dc.roo.air.datConBou[1].layers.material[1].k = dc.roo.datConBou[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3831(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3831};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[254]] /* dc.roo.air.datConBou[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[499]] /* dc.roo.datConBou[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 3831;
}

/*
equation index: 3832
type: SIMPLE_ASSIGN
dc.roo.air.datConBou[1].layers.material[1].x = dc.roo.datConBou[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3832(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3832};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[258]] /* dc.roo.air.datConBou[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[503]] /* dc.roo.datConBou[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 3832;
}

/*
equation index: 3834
type: SIMPLE_ASSIGN
dc.roo.air.datConBou[1].name = dc.roo.datConBou[1].name
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3834(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3834};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[23]] /* dc.roo.air.datConBou[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[52]] /* dc.roo.datConBou[1].name PARAM */);
  threadData->lastEquationSolved = 3834;
}

/*
equation index: 3838
type: SIMPLE_ASSIGN
dc.roo.air.datConPar[1].T_b_start = dc.roo.datConPar[1].T_b_start
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3838(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3838};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[346]] /* dc.roo.air.datConPar[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[591]] /* dc.roo.datConPar[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 3838;
}

/*
equation index: 3839
type: SIMPLE_ASSIGN
dc.roo.air.datConPar[1].T_a_start = dc.roo.datConPar[1].T_a_start
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3839(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3839};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[345]] /* dc.roo.air.datConPar[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[590]] /* dc.roo.datConPar[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 3839;
}

/*
equation index: 3843
type: SIMPLE_ASSIGN
dc.roo.air.datConPar[1].azi = dc.roo.datConPar[1].azi
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3843(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3843};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[347]] /* dc.roo.air.datConPar[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[592]] /* dc.roo.datConPar[1].azi PARAM */);
  threadData->lastEquationSolved = 3843;
}

/*
equation index: 3845
type: SIMPLE_ASSIGN
dc.roo.air.datConPar[1].layers.roughness_a = dc.roo.datConPar[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3845(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3845};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[114]] /* dc.roo.air.datConPar[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[190]] /* dc.roo.datConPar[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 3845;
}

/*
equation index: 3846
type: SIMPLE_ASSIGN
dc.roo.air.datConPar[1].layers.absSol_b = dc.roo.datConPar[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3846(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3846};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[352]] /* dc.roo.air.datConPar[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[597]] /* dc.roo.datConPar[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 3846;
}

/*
equation index: 3847
type: SIMPLE_ASSIGN
dc.roo.air.datConPar[1].layers.absSol_a = dc.roo.datConPar[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3847(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3847};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[351]] /* dc.roo.air.datConPar[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[596]] /* dc.roo.datConPar[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 3847;
}

/*
equation index: 3848
type: SIMPLE_ASSIGN
dc.roo.air.datConPar[1].layers.absIR_b = dc.roo.datConPar[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3848(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3848};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[350]] /* dc.roo.air.datConPar[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[595]] /* dc.roo.datConPar[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 3848;
}

/*
equation index: 3849
type: SIMPLE_ASSIGN
dc.roo.air.datConPar[1].layers.absIR_a = dc.roo.datConPar[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3849(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3849};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[349]] /* dc.roo.air.datConPar[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[594]] /* dc.roo.datConPar[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 3849;
}

/*
equation index: 3852
type: SIMPLE_ASSIGN
dc.roo.air.datConPar[1].layers.material[1].LHea = dc.roo.datConPar[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3852(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3852};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[353]] /* dc.roo.air.datConPar[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[598]] /* dc.roo.datConPar[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 3852;
}

/*
equation index: 3855
type: SIMPLE_ASSIGN
dc.roo.air.datConPar[1].layers.material[1].nStaReal = dc.roo.datConPar[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_3855(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3855};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[360]] /* dc.roo.air.datConPar[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[605]] /* dc.roo.datConPar[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 3855;
}
OMC_DISABLE_OPT
void s000_baseline_updateBoundParameters_1(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[403])(DATA*, threadData_t*) = {
    s000_baseline_eqFunction_3090,
    s000_baseline_eqFunction_3092,
    s000_baseline_eqFunction_3093,
    s000_baseline_eqFunction_3094,
    s000_baseline_eqFunction_3097,
    s000_baseline_eqFunction_3100,
    s000_baseline_eqFunction_3101,
    s000_baseline_eqFunction_3102,
    s000_baseline_eqFunction_3105,
    s000_baseline_eqFunction_3106,
    s000_baseline_eqFunction_3107,
    s000_baseline_eqFunction_3108,
    s000_baseline_eqFunction_3109,
    s000_baseline_eqFunction_3110,
    s000_baseline_eqFunction_3112,
    s000_baseline_eqFunction_3116,
    s000_baseline_eqFunction_3117,
    s000_baseline_eqFunction_3118,
    s000_baseline_eqFunction_3119,
    s000_baseline_eqFunction_3120,
    s000_baseline_eqFunction_3121,
    s000_baseline_eqFunction_3122,
    s000_baseline_eqFunction_3123,
    s000_baseline_eqFunction_3124,
    s000_baseline_eqFunction_3125,
    s000_baseline_eqFunction_3126,
    s000_baseline_eqFunction_3127,
    s000_baseline_eqFunction_3128,
    s000_baseline_eqFunction_3129,
    s000_baseline_eqFunction_3130,
    s000_baseline_eqFunction_3131,
    s000_baseline_eqFunction_3132,
    s000_baseline_eqFunction_3133,
    s000_baseline_eqFunction_3134,
    s000_baseline_eqFunction_3135,
    s000_baseline_eqFunction_3136,
    s000_baseline_eqFunction_3137,
    s000_baseline_eqFunction_3138,
    s000_baseline_eqFunction_3139,
    s000_baseline_eqFunction_3140,
    s000_baseline_eqFunction_3143,
    s000_baseline_eqFunction_3144,
    s000_baseline_eqFunction_3146,
    s000_baseline_eqFunction_3148,
    s000_baseline_eqFunction_3150,
    s000_baseline_eqFunction_3152,
    s000_baseline_eqFunction_3153,
    s000_baseline_eqFunction_3154,
    s000_baseline_eqFunction_3155,
    s000_baseline_eqFunction_3156,
    s000_baseline_eqFunction_3157,
    s000_baseline_eqFunction_3160,
    s000_baseline_eqFunction_3161,
    s000_baseline_eqFunction_3165,
    s000_baseline_eqFunction_3167,
    s000_baseline_eqFunction_3168,
    s000_baseline_eqFunction_3169,
    s000_baseline_eqFunction_3170,
    s000_baseline_eqFunction_3173,
    s000_baseline_eqFunction_3176,
    s000_baseline_eqFunction_3177,
    s000_baseline_eqFunction_3178,
    s000_baseline_eqFunction_3181,
    s000_baseline_eqFunction_3182,
    s000_baseline_eqFunction_3183,
    s000_baseline_eqFunction_3184,
    s000_baseline_eqFunction_3185,
    s000_baseline_eqFunction_3186,
    s000_baseline_eqFunction_3188,
    s000_baseline_eqFunction_3189,
    s000_baseline_eqFunction_3192,
    s000_baseline_eqFunction_3193,
    s000_baseline_eqFunction_3197,
    s000_baseline_eqFunction_3199,
    s000_baseline_eqFunction_3200,
    s000_baseline_eqFunction_3201,
    s000_baseline_eqFunction_3202,
    s000_baseline_eqFunction_3205,
    s000_baseline_eqFunction_3208,
    s000_baseline_eqFunction_3209,
    s000_baseline_eqFunction_3210,
    s000_baseline_eqFunction_3213,
    s000_baseline_eqFunction_3214,
    s000_baseline_eqFunction_3215,
    s000_baseline_eqFunction_3216,
    s000_baseline_eqFunction_3217,
    s000_baseline_eqFunction_3218,
    s000_baseline_eqFunction_3220,
    s000_baseline_eqFunction_3237,
    s000_baseline_eqFunction_3238,
    s000_baseline_eqFunction_3239,
    s000_baseline_eqFunction_3240,
    s000_baseline_eqFunction_3241,
    s000_baseline_eqFunction_3242,
    s000_baseline_eqFunction_3243,
    s000_baseline_eqFunction_3244,
    s000_baseline_eqFunction_3245,
    s000_baseline_eqFunction_3246,
    s000_baseline_eqFunction_3247,
    s000_baseline_eqFunction_3248,
    s000_baseline_eqFunction_3249,
    s000_baseline_eqFunction_3250,
    s000_baseline_eqFunction_3251,
    s000_baseline_eqFunction_3252,
    s000_baseline_eqFunction_3253,
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
    s000_baseline_eqFunction_3297,
    s000_baseline_eqFunction_3298,
    s000_baseline_eqFunction_3299,
    s000_baseline_eqFunction_3300,
    s000_baseline_eqFunction_3301,
    s000_baseline_eqFunction_3302,
    s000_baseline_eqFunction_3308,
    s000_baseline_eqFunction_3314,
    s000_baseline_eqFunction_3315,
    s000_baseline_eqFunction_3317,
    s000_baseline_eqFunction_3319,
    s000_baseline_eqFunction_3320,
    s000_baseline_eqFunction_3322,
    s000_baseline_eqFunction_3324,
    s000_baseline_eqFunction_3325,
    s000_baseline_eqFunction_3327,
    s000_baseline_eqFunction_3329,
    s000_baseline_eqFunction_3330,
    s000_baseline_eqFunction_3332,
    s000_baseline_eqFunction_3334,
    s000_baseline_eqFunction_3335,
    s000_baseline_eqFunction_3337,
    s000_baseline_eqFunction_3339,
    s000_baseline_eqFunction_3340,
    s000_baseline_eqFunction_3342,
    s000_baseline_eqFunction_3344,
    s000_baseline_eqFunction_3347,
    s000_baseline_eqFunction_3348,
    s000_baseline_eqFunction_3352,
    s000_baseline_eqFunction_3354,
    s000_baseline_eqFunction_3355,
    s000_baseline_eqFunction_3356,
    s000_baseline_eqFunction_3357,
    s000_baseline_eqFunction_3360,
    s000_baseline_eqFunction_3363,
    s000_baseline_eqFunction_3364,
    s000_baseline_eqFunction_3365,
    s000_baseline_eqFunction_3368,
    s000_baseline_eqFunction_3369,
    s000_baseline_eqFunction_3370,
    s000_baseline_eqFunction_3371,
    s000_baseline_eqFunction_3372,
    s000_baseline_eqFunction_3373,
    s000_baseline_eqFunction_3375,
    s000_baseline_eqFunction_3376,
    s000_baseline_eqFunction_3379,
    s000_baseline_eqFunction_3380,
    s000_baseline_eqFunction_3384,
    s000_baseline_eqFunction_3386,
    s000_baseline_eqFunction_3387,
    s000_baseline_eqFunction_3388,
    s000_baseline_eqFunction_3391,
    s000_baseline_eqFunction_3394,
    s000_baseline_eqFunction_3395,
    s000_baseline_eqFunction_3396,
    s000_baseline_eqFunction_3399,
    s000_baseline_eqFunction_3400,
    s000_baseline_eqFunction_3401,
    s000_baseline_eqFunction_3402,
    s000_baseline_eqFunction_3403,
    s000_baseline_eqFunction_3404,
    s000_baseline_eqFunction_3406,
    s000_baseline_eqFunction_3410,
    s000_baseline_eqFunction_3411,
    s000_baseline_eqFunction_3412,
    s000_baseline_eqFunction_3413,
    s000_baseline_eqFunction_3414,
    s000_baseline_eqFunction_3415,
    s000_baseline_eqFunction_3416,
    s000_baseline_eqFunction_3417,
    s000_baseline_eqFunction_3418,
    s000_baseline_eqFunction_3419,
    s000_baseline_eqFunction_3420,
    s000_baseline_eqFunction_3421,
    s000_baseline_eqFunction_3422,
    s000_baseline_eqFunction_3423,
    s000_baseline_eqFunction_3424,
    s000_baseline_eqFunction_3425,
    s000_baseline_eqFunction_3426,
    s000_baseline_eqFunction_3427,
    s000_baseline_eqFunction_3428,
    s000_baseline_eqFunction_3429,
    s000_baseline_eqFunction_3430,
    s000_baseline_eqFunction_3431,
    s000_baseline_eqFunction_3432,
    s000_baseline_eqFunction_3433,
    s000_baseline_eqFunction_3434,
    s000_baseline_eqFunction_3437,
    s000_baseline_eqFunction_3438,
    s000_baseline_eqFunction_3440,
    s000_baseline_eqFunction_3442,
    s000_baseline_eqFunction_3444,
    s000_baseline_eqFunction_3446,
    s000_baseline_eqFunction_3447,
    s000_baseline_eqFunction_3448,
    s000_baseline_eqFunction_3449,
    s000_baseline_eqFunction_3450,
    s000_baseline_eqFunction_3451,
    s000_baseline_eqFunction_3454,
    s000_baseline_eqFunction_3455,
    s000_baseline_eqFunction_3459,
    s000_baseline_eqFunction_3461,
    s000_baseline_eqFunction_3462,
    s000_baseline_eqFunction_3463,
    s000_baseline_eqFunction_3464,
    s000_baseline_eqFunction_3467,
    s000_baseline_eqFunction_3470,
    s000_baseline_eqFunction_3471,
    s000_baseline_eqFunction_3472,
    s000_baseline_eqFunction_3475,
    s000_baseline_eqFunction_3476,
    s000_baseline_eqFunction_3477,
    s000_baseline_eqFunction_3478,
    s000_baseline_eqFunction_3479,
    s000_baseline_eqFunction_3480,
    s000_baseline_eqFunction_3482,
    s000_baseline_eqFunction_3483,
    s000_baseline_eqFunction_3486,
    s000_baseline_eqFunction_3487,
    s000_baseline_eqFunction_3491,
    s000_baseline_eqFunction_3493,
    s000_baseline_eqFunction_3494,
    s000_baseline_eqFunction_3495,
    s000_baseline_eqFunction_3496,
    s000_baseline_eqFunction_3499,
    s000_baseline_eqFunction_3502,
    s000_baseline_eqFunction_3503,
    s000_baseline_eqFunction_3504,
    s000_baseline_eqFunction_3507,
    s000_baseline_eqFunction_3508,
    s000_baseline_eqFunction_3509,
    s000_baseline_eqFunction_3510,
    s000_baseline_eqFunction_3511,
    s000_baseline_eqFunction_3512,
    s000_baseline_eqFunction_3514,
    s000_baseline_eqFunction_3555,
    s000_baseline_eqFunction_3556,
    s000_baseline_eqFunction_3557,
    s000_baseline_eqFunction_3558,
    s000_baseline_eqFunction_3559,
    s000_baseline_eqFunction_3560,
    s000_baseline_eqFunction_3561,
    s000_baseline_eqFunction_3563,
    s000_baseline_eqFunction_3574,
    s000_baseline_eqFunction_3578,
    s000_baseline_eqFunction_3582,
    s000_baseline_eqFunction_3586,
    s000_baseline_eqFunction_3590,
    s000_baseline_eqFunction_3594,
    s000_baseline_eqFunction_3617,
    s000_baseline_eqFunction_3619,
    s000_baseline_eqFunction_3620,
    s000_baseline_eqFunction_3621,
    s000_baseline_eqFunction_3622,
    s000_baseline_eqFunction_3623,
    s000_baseline_eqFunction_3624,
    s000_baseline_eqFunction_3625,
    s000_baseline_eqFunction_3626,
    s000_baseline_eqFunction_3627,
    s000_baseline_eqFunction_3628,
    s000_baseline_eqFunction_3629,
    s000_baseline_eqFunction_3630,
    s000_baseline_eqFunction_3631,
    s000_baseline_eqFunction_3632,
    s000_baseline_eqFunction_3633,
    s000_baseline_eqFunction_3634,
    s000_baseline_eqFunction_3635,
    s000_baseline_eqFunction_3636,
    s000_baseline_eqFunction_3637,
    s000_baseline_eqFunction_3638,
    s000_baseline_eqFunction_3639,
    s000_baseline_eqFunction_3640,
    s000_baseline_eqFunction_3641,
    s000_baseline_eqFunction_3642,
    s000_baseline_eqFunction_3648,
    s000_baseline_eqFunction_3652,
    s000_baseline_eqFunction_3656,
    s000_baseline_eqFunction_3660,
    s000_baseline_eqFunction_3664,
    s000_baseline_eqFunction_3668,
    s000_baseline_eqFunction_3721,
    s000_baseline_eqFunction_3722,
    s000_baseline_eqFunction_3723,
    s000_baseline_eqFunction_3724,
    s000_baseline_eqFunction_3729,
    s000_baseline_eqFunction_3730,
    s000_baseline_eqFunction_3731,
    s000_baseline_eqFunction_3732,
    s000_baseline_eqFunction_3733,
    s000_baseline_eqFunction_3734,
    s000_baseline_eqFunction_3735,
    s000_baseline_eqFunction_3736,
    s000_baseline_eqFunction_3737,
    s000_baseline_eqFunction_3738,
    s000_baseline_eqFunction_3739,
    s000_baseline_eqFunction_3740,
    s000_baseline_eqFunction_3741,
    s000_baseline_eqFunction_3742,
    s000_baseline_eqFunction_3743,
    s000_baseline_eqFunction_3744,
    s000_baseline_eqFunction_3745,
    s000_baseline_eqFunction_3746,
    s000_baseline_eqFunction_3747,
    s000_baseline_eqFunction_3748,
    s000_baseline_eqFunction_3749,
    s000_baseline_eqFunction_3750,
    s000_baseline_eqFunction_3751,
    s000_baseline_eqFunction_3752,
    s000_baseline_eqFunction_3760,
    s000_baseline_eqFunction_3767,
    s000_baseline_eqFunction_3769,
    s000_baseline_eqFunction_3770,
    s000_baseline_eqFunction_3773,
    s000_baseline_eqFunction_3775,
    s000_baseline_eqFunction_3776,
    s000_baseline_eqFunction_3779,
    s000_baseline_eqFunction_3781,
    s000_baseline_eqFunction_3782,
    s000_baseline_eqFunction_3785,
    s000_baseline_eqFunction_3787,
    s000_baseline_eqFunction_3788,
    s000_baseline_eqFunction_3791,
    s000_baseline_eqFunction_3793,
    s000_baseline_eqFunction_3794,
    s000_baseline_eqFunction_3797,
    s000_baseline_eqFunction_3799,
    s000_baseline_eqFunction_3800,
    s000_baseline_eqFunction_3805,
    s000_baseline_eqFunction_3806,
    s000_baseline_eqFunction_3810,
    s000_baseline_eqFunction_3812,
    s000_baseline_eqFunction_3813,
    s000_baseline_eqFunction_3814,
    s000_baseline_eqFunction_3815,
    s000_baseline_eqFunction_3816,
    s000_baseline_eqFunction_3819,
    s000_baseline_eqFunction_3822,
    s000_baseline_eqFunction_3823,
    s000_baseline_eqFunction_3824,
    s000_baseline_eqFunction_3827,
    s000_baseline_eqFunction_3828,
    s000_baseline_eqFunction_3829,
    s000_baseline_eqFunction_3830,
    s000_baseline_eqFunction_3831,
    s000_baseline_eqFunction_3832,
    s000_baseline_eqFunction_3834,
    s000_baseline_eqFunction_3838,
    s000_baseline_eqFunction_3839,
    s000_baseline_eqFunction_3843,
    s000_baseline_eqFunction_3845,
    s000_baseline_eqFunction_3846,
    s000_baseline_eqFunction_3847,
    s000_baseline_eqFunction_3848,
    s000_baseline_eqFunction_3849,
    s000_baseline_eqFunction_3852,
    s000_baseline_eqFunction_3855
  };
  
  for (int id = 0; id < 403; id++) {
    eqFunctions[id](data, threadData);
  }
}
#if defined(__cplusplus)
}
#endif