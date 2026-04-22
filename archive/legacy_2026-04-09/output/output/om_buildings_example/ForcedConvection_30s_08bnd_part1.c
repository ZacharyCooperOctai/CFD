#include "ForcedConvection_30s_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 1547
type: SIMPLE_ASSIGN
roo.irRadGai.AConExt[1] = roo.irRadGai.datConExt[1].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1547(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1547};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[775]] /* roo.irRadGai.AConExt[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[819]] /* roo.irRadGai.datConExt[1].A PARAM */);
  threadData->lastEquationSolved = 1547;
}

/*
equation index: 1548
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].layers.absIR_b = roo.datConExt[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1548(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1548};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[825]] /* roo.irRadGai.datConExt[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[332]] /* roo.datConExt[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 1548;
}

/*
equation index: 1549
type: SIMPLE_ASSIGN
roo.irRadGai.epsConExt[1] = roo.irRadGai.datConExt[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1549(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1549};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[969]] /* roo.irRadGai.epsConExt[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[825]] /* roo.irRadGai.datConExt[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 1549;
}

/*
equation index: 1550
type: SIMPLE_ASSIGN
roo.irRadGai.AEpsConExt[1] = roo.irRadGai.AConExt[1] * roo.irRadGai.epsConExt[1]
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1550(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1550};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[781]] /* roo.irRadGai.AEpsConExt[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[775]] /* roo.irRadGai.AConExt[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[969]] /* roo.irRadGai.epsConExt[1] PARAM */));
  threadData->lastEquationSolved = 1550;
}

/*
equation index: 1552
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.shade.absIR_a = roo.datConExtWin[1].glaSys.shade.absIR_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1552(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1552};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[869]] /* roo.irRadGai.datConExtWin[1].glaSys.shade.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[376]] /* roo.datConExtWin[1].glaSys.shade.absIR_a PARAM */);
  threadData->lastEquationSolved = 1552;
}

/*
equation index: 1553
type: SIMPLE_ASSIGN
roo.irRadGai.epsConExtWinSha[1] = roo.irRadGai.datConExtWin[1].glaSys.shade.absIR_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1553(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1553};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[972]] /* roo.irRadGai.epsConExtWinSha[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[869]] /* roo.irRadGai.datConExtWin[1].glaSys.shade.absIR_a PARAM */);
  threadData->lastEquationSolved = 1553;
}

/*
equation index: 1554
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.glass[1].absIR_b = roo.datConExtWin[1].glaSys.glass[1].absIR_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1554(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1554};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[862]] /* roo.irRadGai.datConExtWin[1].glaSys.glass[1].absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[369]] /* roo.datConExtWin[1].glaSys.glass[1].absIR_b PARAM */);
  threadData->lastEquationSolved = 1554;
}

/*
equation index: 1555
type: SIMPLE_ASSIGN
roo.irRadGai.epsConExtWinUns[1] = roo.irRadGai.datConExtWin[1].glaSys.glass[1].absIR_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1555(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1555};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[973]] /* roo.irRadGai.epsConExtWinUns[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[862]] /* roo.irRadGai.datConExtWin[1].glaSys.glass[1].absIR_b PARAM */);
  threadData->lastEquationSolved = 1555;
}

/*
equation index: 1556
type: SIMPLE_ASSIGN
roo.irRadGai.AConExtWinGla[1] = (1.0 - roo.irRadGai.datConExtWin[1].fFra) * roo.irRadGai.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1556(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1556};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[777]] /* roo.irRadGai.AConExtWinGla[1] PARAM */) = (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[848]] /* roo.irRadGai.datConExtWin[1].fFra PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[844]] /* roo.irRadGai.datConExtWin[1].AWin PARAM */));
  threadData->lastEquationSolved = 1556;
}

/*
equation index: 1557
type: SIMPLE_ASSIGN
roo.irRadGai.instanceName = "ForcedConvection.roo.irRadGai"
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1557(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1557};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[53]] /* roo.irRadGai.instanceName PARAM */) = _OMC_LIT82;
  threadData->lastEquationSolved = 1557;
}

/*
equation index: 1563
type: SIMPLE_ASSIGN
roo.irRadGai.dummyCon.R = roo.irRadGai.dummyCon.material[1].R
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1563(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1563};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[924]] /* roo.irRadGai.dummyCon.R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[930]] /* roo.irRadGai.dummyCon.material[1].R PARAM */);
  threadData->lastEquationSolved = 1563;
}

/*
equation index: 1569
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[6].boundaryCondition = roo.surBou[6].boundaryCondition
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1569(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1569};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[259]] /* roo.irRadGai.surBou[6].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[321]] /* roo.surBou[6].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1569;
}

/*
equation index: 1570
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[6].name = roo.surBou[6].name
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1570(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1570};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[59]] /* roo.irRadGai.surBou[6].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[80]] /* roo.surBou[6].name PARAM */);
  threadData->lastEquationSolved = 1570;
}

/*
equation index: 1572
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[6].absSol = roo.surBou[6].absSol
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1572(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1572};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1000]] /* roo.irRadGai.surBou[6].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1266]] /* roo.surBou[6].absSol PARAM */);
  threadData->lastEquationSolved = 1572;
}

/*
equation index: 1574
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[5].boundaryCondition = roo.surBou[5].boundaryCondition
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1574(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1574};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[258]] /* roo.irRadGai.surBou[5].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[320]] /* roo.surBou[5].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1574;
}

/*
equation index: 1575
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[5].name = roo.surBou[5].name
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1575(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1575};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[58]] /* roo.irRadGai.surBou[5].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[79]] /* roo.surBou[5].name PARAM */);
  threadData->lastEquationSolved = 1575;
}

/*
equation index: 1577
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[5].absSol = roo.surBou[5].absSol
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1577(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1577};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[999]] /* roo.irRadGai.surBou[5].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1265]] /* roo.surBou[5].absSol PARAM */);
  threadData->lastEquationSolved = 1577;
}

/*
equation index: 1579
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[4].boundaryCondition = roo.surBou[4].boundaryCondition
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1579(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1579};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[257]] /* roo.irRadGai.surBou[4].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[319]] /* roo.surBou[4].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1579;
}

/*
equation index: 1580
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[4].name = roo.surBou[4].name
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1580(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1580};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[57]] /* roo.irRadGai.surBou[4].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[78]] /* roo.surBou[4].name PARAM */);
  threadData->lastEquationSolved = 1580;
}

/*
equation index: 1582
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[4].absSol = roo.surBou[4].absSol
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1582(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1582};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[998]] /* roo.irRadGai.surBou[4].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1264]] /* roo.surBou[4].absSol PARAM */);
  threadData->lastEquationSolved = 1582;
}

/*
equation index: 1584
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[3].boundaryCondition = roo.surBou[3].boundaryCondition
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1584(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1584};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[256]] /* roo.irRadGai.surBou[3].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[318]] /* roo.surBou[3].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1584;
}

/*
equation index: 1585
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[3].name = roo.surBou[3].name
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1585(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1585};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[56]] /* roo.irRadGai.surBou[3].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[77]] /* roo.surBou[3].name PARAM */);
  threadData->lastEquationSolved = 1585;
}

/*
equation index: 1587
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[3].absSol = roo.surBou[3].absSol
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1587(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1587};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[997]] /* roo.irRadGai.surBou[3].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1263]] /* roo.surBou[3].absSol PARAM */);
  threadData->lastEquationSolved = 1587;
}

/*
equation index: 1589
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[2].boundaryCondition = roo.surBou[2].boundaryCondition
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1589(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1589};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[255]] /* roo.irRadGai.surBou[2].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[317]] /* roo.surBou[2].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1589;
}

/*
equation index: 1590
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[2].name = roo.surBou[2].name
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1590(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1590};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[55]] /* roo.irRadGai.surBou[2].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[76]] /* roo.surBou[2].name PARAM */);
  threadData->lastEquationSolved = 1590;
}

/*
equation index: 1592
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[2].absSol = roo.surBou[2].absSol
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1592(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1592};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[996]] /* roo.irRadGai.surBou[2].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1262]] /* roo.surBou[2].absSol PARAM */);
  threadData->lastEquationSolved = 1592;
}

/*
equation index: 1594
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[1].boundaryCondition = roo.surBou[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1594(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1594};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[254]] /* roo.irRadGai.surBou[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[316]] /* roo.surBou[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1594;
}

/*
equation index: 1595
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[1].name = roo.surBou[1].name
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1595(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1595};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[54]] /* roo.irRadGai.surBou[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[75]] /* roo.surBou[1].name PARAM */);
  threadData->lastEquationSolved = 1595;
}

/*
equation index: 1597
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[1].absSol = roo.surBou[1].absSol
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1597(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1597};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[995]] /* roo.irRadGai.surBou[1].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1261]] /* roo.surBou[1].absSol PARAM */);
  threadData->lastEquationSolved = 1597;
}

/*
equation index: 1599
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].boundaryCondition = roo.datConBou[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1599(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1599};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[220]] /* roo.irRadGai.datConBou[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[133]] /* roo.datConBou[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1599;
}

/*
equation index: 1602
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].T_b_start = roo.datConBou[1].T_b_start
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1602(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1602};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[800]] /* roo.irRadGai.datConBou[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[307]] /* roo.datConBou[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 1602;
}

/*
equation index: 1603
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].T_a_start = roo.datConBou[1].T_a_start
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1603(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1603};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[799]] /* roo.irRadGai.datConBou[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[306]] /* roo.datConBou[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 1603;
}

/*
equation index: 1607
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].azi = roo.datConBou[1].azi
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1607(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1607};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[801]] /* roo.irRadGai.datConBou[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[308]] /* roo.datConBou[1].azi PARAM */);
  threadData->lastEquationSolved = 1607;
}

/*
equation index: 1609
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].layers.roughness_a = roo.datConBou[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1609(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1609};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[225]] /* roo.irRadGai.datConBou[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[138]] /* roo.datConBou[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 1609;
}

/*
equation index: 1610
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].layers.absSol_b = roo.datConBou[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1610(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1610};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[806]] /* roo.irRadGai.datConBou[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[313]] /* roo.datConBou[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 1610;
}

/*
equation index: 1611
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].layers.absSol_a = roo.datConBou[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1611(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1611};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[805]] /* roo.irRadGai.datConBou[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[312]] /* roo.datConBou[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 1611;
}

/*
equation index: 1612
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].layers.absIR_a = roo.datConBou[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1612(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1612};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[803]] /* roo.irRadGai.datConBou[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[310]] /* roo.datConBou[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 1612;
}

/*
equation index: 1615
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].layers.material[1].LHea = roo.datConBou[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1615(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1615};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[807]] /* roo.irRadGai.datConBou[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[314]] /* roo.datConBou[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 1615;
}

/*
equation index: 1618
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].layers.material[1].nStaReal = roo.datConBou[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1618(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1618};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[814]] /* roo.irRadGai.datConBou[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[321]] /* roo.datConBou[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 1618;
}

/*
equation index: 1619
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].layers.material[1].piMat = roo.datConBou[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1619(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1619};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[815]] /* roo.irRadGai.datConBou[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[322]] /* roo.datConBou[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 1619;
}

/*
equation index: 1620
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].layers.material[1].piRef = roo.datConBou[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1620(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1620};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[816]] /* roo.irRadGai.datConBou[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[323]] /* roo.datConBou[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 1620;
}

/*
equation index: 1623
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].layers.material[1].nStaRef = roo.datConBou[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1623(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1623};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[222]] /* roo.irRadGai.datConBou[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[135]] /* roo.datConBou[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 1623;
}

/*
equation index: 1624
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].layers.material[1].R = roo.datConBou[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1624(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1624};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[808]] /* roo.irRadGai.datConBou[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[315]] /* roo.datConBou[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 1624;
}

/*
equation index: 1625
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].layers.material[1].d = roo.datConBou[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1625(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1625};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[812]] /* roo.irRadGai.datConBou[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[319]] /* roo.datConBou[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 1625;
}

/*
equation index: 1626
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].layers.material[1].c = roo.datConBou[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1626(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1626};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[811]] /* roo.irRadGai.datConBou[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[318]] /* roo.datConBou[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 1626;
}

/*
equation index: 1627
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].layers.material[1].k = roo.datConBou[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1627(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1627};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[813]] /* roo.irRadGai.datConBou[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[320]] /* roo.datConBou[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 1627;
}

/*
equation index: 1628
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].layers.material[1].x = roo.datConBou[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1628(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1628};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[817]] /* roo.irRadGai.datConBou[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[324]] /* roo.datConBou[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 1628;
}

/*
equation index: 1630
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].name = roo.datConBou[1].name
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1630(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1630};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[49]] /* roo.irRadGai.datConBou[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[34]] /* roo.datConBou[1].name PARAM */);
  threadData->lastEquationSolved = 1630;
}

/*
equation index: 1631
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].boundaryCondition = roo.datConPar[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1631(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1631};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[238]] /* roo.irRadGai.datConPar[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[151]] /* roo.datConPar[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1631;
}

/*
equation index: 1634
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].T_b_start = roo.datConPar[1].T_b_start
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1634(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1634};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[905]] /* roo.irRadGai.datConPar[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[412]] /* roo.datConPar[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 1634;
}

/*
equation index: 1635
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].T_a_start = roo.datConPar[1].T_a_start
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1635(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1635};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[904]] /* roo.irRadGai.datConPar[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[411]] /* roo.datConPar[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 1635;
}

/*
equation index: 1639
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].azi = roo.datConPar[1].azi
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1639(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1639};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[906]] /* roo.irRadGai.datConPar[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[413]] /* roo.datConPar[1].azi PARAM */);
  threadData->lastEquationSolved = 1639;
}

/*
equation index: 1641
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].layers.roughness_a = roo.datConPar[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1641(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1641};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[243]] /* roo.irRadGai.datConPar[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[156]] /* roo.datConPar[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 1641;
}

/*
equation index: 1642
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].layers.absSol_b = roo.datConPar[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1642(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1642};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[911]] /* roo.irRadGai.datConPar[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[418]] /* roo.datConPar[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 1642;
}

/*
equation index: 1643
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].layers.absSol_a = roo.datConPar[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1643(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1643};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[910]] /* roo.irRadGai.datConPar[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[417]] /* roo.datConPar[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 1643;
}

/*
equation index: 1646
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].layers.material[1].LHea = roo.datConPar[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1646(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1646};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[912]] /* roo.irRadGai.datConPar[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[419]] /* roo.datConPar[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 1646;
}

/*
equation index: 1649
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].layers.material[1].nStaReal = roo.datConPar[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1649(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1649};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[919]] /* roo.irRadGai.datConPar[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[426]] /* roo.datConPar[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 1649;
}

/*
equation index: 1650
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].layers.material[1].piMat = roo.datConPar[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1650(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1650};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[920]] /* roo.irRadGai.datConPar[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[427]] /* roo.datConPar[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 1650;
}

/*
equation index: 1651
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].layers.material[1].piRef = roo.datConPar[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1651(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1651};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[921]] /* roo.irRadGai.datConPar[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[428]] /* roo.datConPar[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 1651;
}

/*
equation index: 1654
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].layers.material[1].nStaRef = roo.datConPar[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1654(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1654};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[240]] /* roo.irRadGai.datConPar[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[153]] /* roo.datConPar[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 1654;
}

/*
equation index: 1655
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].layers.material[1].R = roo.datConPar[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1655(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1655};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[913]] /* roo.irRadGai.datConPar[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[420]] /* roo.datConPar[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 1655;
}

/*
equation index: 1656
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].layers.material[1].d = roo.datConPar[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1656(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1656};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[917]] /* roo.irRadGai.datConPar[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[424]] /* roo.datConPar[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 1656;
}

/*
equation index: 1657
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].layers.material[1].c = roo.datConPar[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1657(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1657};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[916]] /* roo.irRadGai.datConPar[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[423]] /* roo.datConPar[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 1657;
}

/*
equation index: 1658
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].layers.material[1].k = roo.datConPar[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1658(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1658};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[918]] /* roo.irRadGai.datConPar[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[425]] /* roo.datConPar[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 1658;
}

/*
equation index: 1659
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].layers.material[1].x = roo.datConPar[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1659(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1659};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[922]] /* roo.irRadGai.datConPar[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[429]] /* roo.datConPar[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 1659;
}

/*
equation index: 1661
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].name = roo.datConPar[1].name
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1661(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1661};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[52]] /* roo.irRadGai.datConPar[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[37]] /* roo.datConPar[1].name PARAM */);
  threadData->lastEquationSolved = 1661;
}

/*
equation index: 1665
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.absSolFra = roo.datConExtWin[1].glaSys.absSolFra
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1665(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1665};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[851]] /* roo.irRadGai.datConExtWin[1].glaSys.absSolFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[358]] /* roo.datConExtWin[1].glaSys.absSolFra PARAM */);
  threadData->lastEquationSolved = 1665;
}

/*
equation index: 1666
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.UFra = roo.datConExtWin[1].glaSys.UFra
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1666(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1666};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[849]] /* roo.irRadGai.datConExtWin[1].glaSys.UFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[356]] /* roo.datConExtWin[1].glaSys.UFra PARAM */);
  threadData->lastEquationSolved = 1666;
}

/*
equation index: 1667
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.shade.tauIR_b = roo.datConExtWin[1].glaSys.shade.tauIR_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1667(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1667};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[874]] /* roo.irRadGai.datConExtWin[1].glaSys.shade.tauIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[381]] /* roo.datConExtWin[1].glaSys.shade.tauIR_b PARAM */);
  threadData->lastEquationSolved = 1667;
}

/*
equation index: 1668
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.shade.tauIR_a = roo.datConExtWin[1].glaSys.shade.tauIR_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1668(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1668};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[873]] /* roo.irRadGai.datConExtWin[1].glaSys.shade.tauIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[380]] /* roo.datConExtWin[1].glaSys.shade.tauIR_a PARAM */);
  threadData->lastEquationSolved = 1668;
}

/*
equation index: 1669
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.shade.absIR_b = roo.datConExtWin[1].glaSys.shade.absIR_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1669(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1669};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[870]] /* roo.irRadGai.datConExtWin[1].glaSys.shade.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[377]] /* roo.datConExtWin[1].glaSys.shade.absIR_b PARAM */);
  threadData->lastEquationSolved = 1669;
}

/*
equation index: 1670
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.shade.rhoSol_b = roo.datConExtWin[1].glaSys.shade.rhoSol_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1670(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1670};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[872]] /* roo.irRadGai.datConExtWin[1].glaSys.shade.rhoSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[379]] /* roo.datConExtWin[1].glaSys.shade.rhoSol_b PARAM */);
  threadData->lastEquationSolved = 1670;
}

/*
equation index: 1671
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.shade.rhoSol_a = roo.datConExtWin[1].glaSys.shade.rhoSol_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1671(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1671};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[871]] /* roo.irRadGai.datConExtWin[1].glaSys.shade.rhoSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[378]] /* roo.datConExtWin[1].glaSys.shade.rhoSol_a PARAM */);
  threadData->lastEquationSolved = 1671;
}

/*
equation index: 1672
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.shade.tauSol_b = roo.datConExtWin[1].glaSys.shade.tauSol_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1672(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1672};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[876]] /* roo.irRadGai.datConExtWin[1].glaSys.shade.tauSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[383]] /* roo.datConExtWin[1].glaSys.shade.tauSol_b PARAM */);
  threadData->lastEquationSolved = 1672;
}

/*
equation index: 1673
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.shade.tauSol_a = roo.datConExtWin[1].glaSys.shade.tauSol_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1673(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1673};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[875]] /* roo.irRadGai.datConExtWin[1].glaSys.shade.tauSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[382]] /* roo.datConExtWin[1].glaSys.shade.tauSol_a PARAM */);
  threadData->lastEquationSolved = 1673;
}

/*
equation index: 1674
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.gas[1].P0 = roo.datConExtWin[1].glaSys.gas[1].P0
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1674(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1674};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[853]] /* roo.irRadGai.datConExtWin[1].glaSys.gas[1].P0 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[360]] /* roo.datConExtWin[1].glaSys.gas[1].P0 PARAM */);
  threadData->lastEquationSolved = 1674;
}

/*
equation index: 1675
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.gas[1].MM = roo.datConExtWin[1].glaSys.gas[1].MM
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1675(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1675};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[852]] /* roo.irRadGai.datConExtWin[1].glaSys.gas[1].MM PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[359]] /* roo.datConExtWin[1].glaSys.gas[1].MM PARAM */);
  threadData->lastEquationSolved = 1675;
}

/*
equation index: 1676
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.gas[1].b_c = roo.datConExtWin[1].glaSys.gas[1].b_c
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1676(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1676};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[857]] /* roo.irRadGai.datConExtWin[1].glaSys.gas[1].b_c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[364]] /* roo.datConExtWin[1].glaSys.gas[1].b_c PARAM */);
  threadData->lastEquationSolved = 1676;
}

/*
equation index: 1677
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.gas[1].a_c = roo.datConExtWin[1].glaSys.gas[1].a_c
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1677(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1677};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[854]] /* roo.irRadGai.datConExtWin[1].glaSys.gas[1].a_c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[361]] /* roo.datConExtWin[1].glaSys.gas[1].a_c PARAM */);
  threadData->lastEquationSolved = 1677;
}

/*
equation index: 1678
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.gas[1].b_mu = roo.datConExtWin[1].glaSys.gas[1].b_mu
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1678(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1678};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[859]] /* roo.irRadGai.datConExtWin[1].glaSys.gas[1].b_mu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[366]] /* roo.datConExtWin[1].glaSys.gas[1].b_mu PARAM */);
  threadData->lastEquationSolved = 1678;
}

/*
equation index: 1679
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.gas[1].a_mu = roo.datConExtWin[1].glaSys.gas[1].a_mu
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1679(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1679};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[856]] /* roo.irRadGai.datConExtWin[1].glaSys.gas[1].a_mu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[363]] /* roo.datConExtWin[1].glaSys.gas[1].a_mu PARAM */);
  threadData->lastEquationSolved = 1679;
}

/*
equation index: 1680
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.gas[1].b_k = roo.datConExtWin[1].glaSys.gas[1].b_k
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1680(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1680};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[858]] /* roo.irRadGai.datConExtWin[1].glaSys.gas[1].b_k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[365]] /* roo.datConExtWin[1].glaSys.gas[1].b_k PARAM */);
  threadData->lastEquationSolved = 1680;
}

/*
equation index: 1681
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.gas[1].a_k = roo.datConExtWin[1].glaSys.gas[1].a_k
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1681(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1681};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[855]] /* roo.irRadGai.datConExtWin[1].glaSys.gas[1].a_k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[362]] /* roo.datConExtWin[1].glaSys.gas[1].a_k PARAM */);
  threadData->lastEquationSolved = 1681;
}

/*
equation index: 1682
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.gas[1].x = roo.datConExtWin[1].glaSys.gas[1].x
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1682(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1682};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[860]] /* roo.irRadGai.datConExtWin[1].glaSys.gas[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[367]] /* roo.datConExtWin[1].glaSys.gas[1].x PARAM */);
  threadData->lastEquationSolved = 1682;
}

/*
equation index: 1683
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.glass[1].absIR_a = roo.datConExtWin[1].glaSys.glass[1].absIR_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1683(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1683};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[861]] /* roo.irRadGai.datConExtWin[1].glaSys.glass[1].absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[368]] /* roo.datConExtWin[1].glaSys.glass[1].absIR_a PARAM */);
  threadData->lastEquationSolved = 1683;
}

/*
equation index: 1684
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.glass[1].tauIR = roo.datConExtWin[1].glaSys.glass[1].tauIR
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1684(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1684};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[866]] /* roo.irRadGai.datConExtWin[1].glaSys.glass[1].tauIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[373]] /* roo.datConExtWin[1].glaSys.glass[1].tauIR PARAM */);
  threadData->lastEquationSolved = 1684;
}

/*
equation index: 1685
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.glass[1].rhoSol_b[1] = roo.datConExtWin[1].glaSys.glass[1].rhoSol_b[1]
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1685(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1685};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[865]] /* roo.irRadGai.datConExtWin[1].glaSys.glass[1].rhoSol_b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[372]] /* roo.datConExtWin[1].glaSys.glass[1].rhoSol_b[1] PARAM */);
  threadData->lastEquationSolved = 1685;
}

/*
equation index: 1686
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.glass[1].rhoSol_a[1] = roo.datConExtWin[1].glaSys.glass[1].rhoSol_a[1]
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1686(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1686};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[864]] /* roo.irRadGai.datConExtWin[1].glaSys.glass[1].rhoSol_a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[371]] /* roo.datConExtWin[1].glaSys.glass[1].rhoSol_a[1] PARAM */);
  threadData->lastEquationSolved = 1686;
}

/*
equation index: 1687
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.glass[1].tauSol[1] = roo.datConExtWin[1].glaSys.glass[1].tauSol[1]
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1687(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1687};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[867]] /* roo.irRadGai.datConExtWin[1].glaSys.glass[1].tauSol[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[374]] /* roo.datConExtWin[1].glaSys.glass[1].tauSol[1] PARAM */);
  threadData->lastEquationSolved = 1687;
}

/*
equation index: 1688
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.glass[1].k = roo.datConExtWin[1].glaSys.glass[1].k
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1688(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1688};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[863]] /* roo.irRadGai.datConExtWin[1].glaSys.glass[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[370]] /* roo.datConExtWin[1].glaSys.glass[1].k PARAM */);
  threadData->lastEquationSolved = 1688;
}

/*
equation index: 1689
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.glass[1].x = roo.datConExtWin[1].glaSys.glass[1].x
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1689(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1689};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[868]] /* roo.irRadGai.datConExtWin[1].glaSys.glass[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[375]] /* roo.datConExtWin[1].glaSys.glass[1].x PARAM */);
  threadData->lastEquationSolved = 1689;
}

/*
equation index: 1692
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].AGla = roo.datConExtWin[1].AGla
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1692(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1692};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[842]] /* roo.irRadGai.datConExtWin[1].AGla PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[349]] /* roo.datConExtWin[1].AGla PARAM */);
  threadData->lastEquationSolved = 1692;
}

/*
equation index: 1693
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].AFra = roo.datConExtWin[1].AFra
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1693(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1693};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[841]] /* roo.irRadGai.datConExtWin[1].AFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[348]] /* roo.datConExtWin[1].AFra PARAM */);
  threadData->lastEquationSolved = 1693;
}

/*
equation index: 1695
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].sidFin.gap = roo.datConExtWin[1].sidFin.gap
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1695(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1695};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[899]] /* roo.irRadGai.datConExtWin[1].sidFin.gap PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[406]] /* roo.datConExtWin[1].sidFin.gap PARAM */);
  threadData->lastEquationSolved = 1695;
}

/*
equation index: 1697
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].sidFin.h = roo.datConExtWin[1].sidFin.h
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1697(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1697};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[900]] /* roo.irRadGai.datConExtWin[1].sidFin.h PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[407]] /* roo.datConExtWin[1].sidFin.h PARAM */);
  threadData->lastEquationSolved = 1697;
}

/*
equation index: 1699
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].ove.gap = roo.datConExtWin[1].ove.gap
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1699(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1699};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[895]] /* roo.irRadGai.datConExtWin[1].ove.gap PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[402]] /* roo.datConExtWin[1].ove.gap PARAM */);
  threadData->lastEquationSolved = 1699;
}

/*
equation index: 1701
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].ove.wR = roo.datConExtWin[1].ove.wR
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1701(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1701};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[897]] /* roo.irRadGai.datConExtWin[1].ove.wR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[404]] /* roo.datConExtWin[1].ove.wR PARAM */);
  threadData->lastEquationSolved = 1701;
}

/*
equation index: 1702
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].ove.wL = roo.datConExtWin[1].ove.wL
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1702(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1702};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[896]] /* roo.irRadGai.datConExtWin[1].ove.wL PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[403]] /* roo.datConExtWin[1].ove.wL PARAM */);
  threadData->lastEquationSolved = 1702;
}

/*
equation index: 1703
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].wWin = roo.datConExtWin[1].wWin
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1703(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1703};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[902]] /* roo.irRadGai.datConExtWin[1].wWin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[409]] /* roo.datConExtWin[1].wWin PARAM */);
  threadData->lastEquationSolved = 1703;
}

/*
equation index: 1704
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].hWin = roo.datConExtWin[1].hWin
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1704(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1704};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[877]] /* roo.irRadGai.datConExtWin[1].hWin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[384]] /* roo.datConExtWin[1].hWin PARAM */);
  threadData->lastEquationSolved = 1704;
}

/*
equation index: 1705
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].A = roo.datConExtWin[1].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1705(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1705};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[840]] /* roo.irRadGai.datConExtWin[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[347]] /* roo.datConExtWin[1].A PARAM */);
  threadData->lastEquationSolved = 1705;
}

/*
equation index: 1706
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].boundaryCondition = roo.datConExtWin[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1706(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1706};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[232]] /* roo.irRadGai.datConExtWin[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[145]] /* roo.datConExtWin[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1706;
}

/*
equation index: 1709
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].T_b_start = roo.datConExtWin[1].T_b_start
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1709(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1709};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[846]] /* roo.irRadGai.datConExtWin[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[353]] /* roo.datConExtWin[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 1709;
}

/*
equation index: 1710
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].T_a_start = roo.datConExtWin[1].T_a_start
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1710(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1710};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[845]] /* roo.irRadGai.datConExtWin[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[352]] /* roo.datConExtWin[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 1710;
}

/*
equation index: 1714
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].azi = roo.datConExtWin[1].azi
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1714(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1714};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[847]] /* roo.irRadGai.datConExtWin[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[354]] /* roo.datConExtWin[1].azi PARAM */);
  threadData->lastEquationSolved = 1714;
}

/*
equation index: 1716
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].layers.roughness_a = roo.datConExtWin[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1716(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1716};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[237]] /* roo.irRadGai.datConExtWin[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[150]] /* roo.datConExtWin[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 1716;
}

/*
equation index: 1717
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].layers.absSol_b = roo.datConExtWin[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1717(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1717};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[882]] /* roo.irRadGai.datConExtWin[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[389]] /* roo.datConExtWin[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 1717;
}

/*
equation index: 1718
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].layers.absSol_a = roo.datConExtWin[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1718(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1718};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[881]] /* roo.irRadGai.datConExtWin[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[388]] /* roo.datConExtWin[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 1718;
}

/*
equation index: 1719
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].layers.absIR_a = roo.datConExtWin[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1719(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1719};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[879]] /* roo.irRadGai.datConExtWin[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[386]] /* roo.datConExtWin[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 1719;
}

/*
equation index: 1722
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].layers.material[1].LHea = roo.datConExtWin[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1722(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1722};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[883]] /* roo.irRadGai.datConExtWin[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[390]] /* roo.datConExtWin[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 1722;
}

/*
equation index: 1725
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].layers.material[1].nStaReal = roo.datConExtWin[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1725(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1725};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[890]] /* roo.irRadGai.datConExtWin[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[397]] /* roo.datConExtWin[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 1725;
}

/*
equation index: 1726
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].layers.material[1].piMat = roo.datConExtWin[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1726(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1726};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[891]] /* roo.irRadGai.datConExtWin[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[398]] /* roo.datConExtWin[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 1726;
}

/*
equation index: 1727
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].layers.material[1].piRef = roo.datConExtWin[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1727(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1727};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[892]] /* roo.irRadGai.datConExtWin[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[399]] /* roo.datConExtWin[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 1727;
}

/*
equation index: 1730
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].layers.material[1].nStaRef = roo.datConExtWin[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1730(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1730};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[234]] /* roo.irRadGai.datConExtWin[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[147]] /* roo.datConExtWin[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 1730;
}

/*
equation index: 1731
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].layers.material[1].R = roo.datConExtWin[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1731(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1731};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[884]] /* roo.irRadGai.datConExtWin[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[391]] /* roo.datConExtWin[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 1731;
}

/*
equation index: 1732
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].layers.material[1].d = roo.datConExtWin[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1732(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1732};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[888]] /* roo.irRadGai.datConExtWin[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[395]] /* roo.datConExtWin[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 1732;
}

/*
equation index: 1733
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].layers.material[1].c = roo.datConExtWin[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1733(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1733};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[887]] /* roo.irRadGai.datConExtWin[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[394]] /* roo.datConExtWin[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 1733;
}

/*
equation index: 1734
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].layers.material[1].k = roo.datConExtWin[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1734(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1734};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[889]] /* roo.irRadGai.datConExtWin[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[396]] /* roo.datConExtWin[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 1734;
}

/*
equation index: 1735
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].layers.material[1].x = roo.datConExtWin[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1735(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1735};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[893]] /* roo.irRadGai.datConExtWin[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[400]] /* roo.datConExtWin[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 1735;
}

/*
equation index: 1737
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].name = roo.datConExtWin[1].name
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1737(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1737};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[51]] /* roo.irRadGai.datConExtWin[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[36]] /* roo.datConExtWin[1].name PARAM */);
  threadData->lastEquationSolved = 1737;
}

/*
equation index: 1738
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].boundaryCondition = roo.datConExt[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1738(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1738};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[226]] /* roo.irRadGai.datConExt[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[139]] /* roo.datConExt[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1738;
}

/*
equation index: 1741
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].T_b_start = roo.datConExt[1].T_b_start
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1741(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1741};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[821]] /* roo.irRadGai.datConExt[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[328]] /* roo.datConExt[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 1741;
}

/*
equation index: 1742
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].T_a_start = roo.datConExt[1].T_a_start
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1742(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1742};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[820]] /* roo.irRadGai.datConExt[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[327]] /* roo.datConExt[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 1742;
}

/*
equation index: 1746
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].azi = roo.datConExt[1].azi
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1746(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1746};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[822]] /* roo.irRadGai.datConExt[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[329]] /* roo.datConExt[1].azi PARAM */);
  threadData->lastEquationSolved = 1746;
}

/*
equation index: 1748
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].layers.roughness_a = roo.datConExt[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1748(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1748};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[231]] /* roo.irRadGai.datConExt[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[144]] /* roo.datConExt[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 1748;
}

/*
equation index: 1749
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].layers.absSol_b = roo.datConExt[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1749(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1749};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[827]] /* roo.irRadGai.datConExt[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[334]] /* roo.datConExt[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 1749;
}

/*
equation index: 1750
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].layers.absSol_a = roo.datConExt[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1750(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1750};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[826]] /* roo.irRadGai.datConExt[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[333]] /* roo.datConExt[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 1750;
}

/*
equation index: 1751
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].layers.absIR_a = roo.datConExt[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1751(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1751};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[824]] /* roo.irRadGai.datConExt[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[331]] /* roo.datConExt[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 1751;
}

/*
equation index: 1754
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].layers.material[1].LHea = roo.datConExt[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1754(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1754};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[828]] /* roo.irRadGai.datConExt[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[335]] /* roo.datConExt[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 1754;
}

/*
equation index: 1757
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].layers.material[1].nStaReal = roo.datConExt[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1757(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1757};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[835]] /* roo.irRadGai.datConExt[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[342]] /* roo.datConExt[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 1757;
}

/*
equation index: 1758
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].layers.material[1].piMat = roo.datConExt[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1758(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1758};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[836]] /* roo.irRadGai.datConExt[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[343]] /* roo.datConExt[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 1758;
}

/*
equation index: 1759
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].layers.material[1].piRef = roo.datConExt[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1759(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1759};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[837]] /* roo.irRadGai.datConExt[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[344]] /* roo.datConExt[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 1759;
}

/*
equation index: 1762
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].layers.material[1].nStaRef = roo.datConExt[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1762(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1762};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[228]] /* roo.irRadGai.datConExt[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[141]] /* roo.datConExt[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 1762;
}

/*
equation index: 1763
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].layers.material[1].R = roo.datConExt[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1763(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1763};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[829]] /* roo.irRadGai.datConExt[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[336]] /* roo.datConExt[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 1763;
}

/*
equation index: 1764
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].layers.material[1].d = roo.datConExt[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1764(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1764};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[833]] /* roo.irRadGai.datConExt[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[340]] /* roo.datConExt[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 1764;
}

/*
equation index: 1765
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].layers.material[1].c = roo.datConExt[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1765(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1765};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[832]] /* roo.irRadGai.datConExt[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[339]] /* roo.datConExt[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 1765;
}

/*
equation index: 1766
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].layers.material[1].k = roo.datConExt[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1766(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1766};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[834]] /* roo.irRadGai.datConExt[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[341]] /* roo.datConExt[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 1766;
}

/*
equation index: 1767
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].layers.material[1].x = roo.datConExt[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1767(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1767};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[838]] /* roo.irRadGai.datConExt[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[345]] /* roo.datConExt[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 1767;
}

/*
equation index: 1769
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].name = roo.datConExt[1].name
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1769(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1769};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[50]] /* roo.irRadGai.datConExt[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[35]] /* roo.datConExt[1].name PARAM */);
  threadData->lastEquationSolved = 1769;
}

/*
equation index: 1810
type: SIMPLE_ASSIGN
roo.air.p_start = roo.p_start
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1810(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1810};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[252]] /* roo.air.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1008]] /* roo.p_start PARAM */);
  threadData->lastEquationSolved = 1810;
}

/*
equation index: 1811
type: SIMPLE_ASSIGN
roo.air.rho_start = 1.1843079200592153e-5 * roo.air.p_start
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1811(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1811};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[253]] /* roo.air.rho_start PARAM */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[252]] /* roo.air.p_start PARAM */));
  threadData->lastEquationSolved = 1811;
}

/*
equation index: 1812
type: SIMPLE_ASSIGN
roo.air.fluInt.rho_start = roo.air.rho_start
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1812(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1812};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[251]] /* roo.air.fluInt.rho_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[253]] /* roo.air.rho_start PARAM */);
  threadData->lastEquationSolved = 1812;
}

/*
equation index: 1813
type: SIMPLE_ASSIGN
roo.V = roo.AFlo * roo.hRoo
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1813(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1813};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[20]] /* roo.V PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[19]] /* roo.AFlo PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[477]] /* roo.hRoo PARAM */));
  threadData->lastEquationSolved = 1813;
}

/*
equation index: 1814
type: SIMPLE_ASSIGN
roo.air.V = roo.V
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1814(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1814};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[47]] /* roo.air.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[20]] /* roo.V PARAM */);
  threadData->lastEquationSolved = 1814;
}

/*
equation index: 1815
type: SIMPLE_ASSIGN
roo.air.fluInt.V = roo.air.V
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1815(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1815};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[248]] /* roo.air.fluInt.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[47]] /* roo.air.V PARAM */);
  threadData->lastEquationSolved = 1815;
}

/*
equation index: 1816
type: SIMPLE_ASSIGN
roo.air.fluInt.m_start = roo.air.fluInt.rho_start * roo.air.fluInt.V
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1816(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1816};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[249]] /* roo.air.fluInt.m_start PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[251]] /* roo.air.fluInt.rho_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[248]] /* roo.air.fluInt.V PARAM */));
  threadData->lastEquationSolved = 1816;
}

/*
equation index: 1818
type: SIMPLE_ASSIGN
roo.air.fluInt.p_start = roo.air.p_start
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1818(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1818};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[250]] /* roo.air.fluInt.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[252]] /* roo.air.p_start PARAM */);
  threadData->lastEquationSolved = 1818;
}

/*
equation index: 1829
type: SIMPLE_ASSIGN
roo.air.surIde[6].name = "Floor"
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1829(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1829};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[32]] /* roo.air.surIde[6].name PARAM */) = _OMC_LIT83;
  threadData->lastEquationSolved = 1829;
}

/*
equation index: 1833
type: SIMPLE_ASSIGN
roo.air.surIde[5].name = "Ceiling"
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1833(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1833};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[31]] /* roo.air.surIde[5].name PARAM */) = _OMC_LIT84;
  threadData->lastEquationSolved = 1833;
}

/*
equation index: 1837
type: SIMPLE_ASSIGN
roo.air.surIde[4].name = "South Wall"
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1837(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1837};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[30]] /* roo.air.surIde[4].name PARAM */) = _OMC_LIT85;
  threadData->lastEquationSolved = 1837;
}

/*
equation index: 1841
type: SIMPLE_ASSIGN
roo.air.surIde[3].name = "North Wall"
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1841(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1841};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[29]] /* roo.air.surIde[3].name PARAM */) = _OMC_LIT86;
  threadData->lastEquationSolved = 1841;
}

/*
equation index: 1845
type: SIMPLE_ASSIGN
roo.air.surIde[2].name = "West Wall"
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1845(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1845};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[28]] /* roo.air.surIde[2].name PARAM */) = _OMC_LIT87;
  threadData->lastEquationSolved = 1845;
}

/*
equation index: 1849
type: SIMPLE_ASSIGN
roo.air.surIde[1].name = "East Wall"
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1849(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1849};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[27]] /* roo.air.surIde[1].name PARAM */) = _OMC_LIT88;
  threadData->lastEquationSolved = 1849;
}

/*
equation index: 1862
type: SIMPLE_ASSIGN
roo.air.cfd.rho_start = roo.air.rho_start
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1862(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1862};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[50]] /* roo.air.cfd.rho_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[253]] /* roo.air.rho_start PARAM */);
  threadData->lastEquationSolved = 1862;
}

/*
equation index: 1864
type: SIMPLE_ASSIGN
roo.air.portName[2] = roo.portName[2]
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1864(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1864};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[18]] /* roo.air.portName[2] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[61]] /* roo.portName[2] PARAM */);
  threadData->lastEquationSolved = 1864;
}

/*
equation index: 1865
type: SIMPLE_ASSIGN
roo.air.cfd.portName[2] = roo.air.portName[2]
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1865(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1865};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[3]] /* roo.air.cfd.portName[2] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[18]] /* roo.air.portName[2] PARAM */);
  threadData->lastEquationSolved = 1865;
}

/*
equation index: 1866
type: SIMPLE_ASSIGN
roo.air.portName[1] = roo.portName[1]
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1866(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1866};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[17]] /* roo.air.portName[1] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[60]] /* roo.portName[1] PARAM */);
  threadData->lastEquationSolved = 1866;
}

/*
equation index: 1867
type: SIMPLE_ASSIGN
roo.air.cfd.portName[1] = roo.air.portName[1]
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1867(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1867};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[2]] /* roo.air.cfd.portName[1] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[17]] /* roo.air.portName[1] PARAM */);
  threadData->lastEquationSolved = 1867;
}

/*
equation index: 1868
type: SIMPLE_ASSIGN
roo.air.cfd.sensorName[2] = "Velocity"
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1868(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1868};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[5]] /* roo.air.cfd.sensorName[2] PARAM */) = _OMC_LIT78;
  threadData->lastEquationSolved = 1868;
}

/*
equation index: 1869
type: SIMPLE_ASSIGN
roo.air.cfd.sensorName[1] = "Occupied zone air temperature"
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1869(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1869};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[4]] /* roo.air.cfd.sensorName[1] PARAM */) = _OMC_LIT79;
  threadData->lastEquationSolved = 1869;
}

/*
equation index: 1875
type: SIMPLE_ASSIGN
roo.air.cfd.surIde[6].name = "Floor"
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1875(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1875};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[11]] /* roo.air.cfd.surIde[6].name PARAM */) = _OMC_LIT83;
  threadData->lastEquationSolved = 1875;
}

/*
equation index: 1879
type: SIMPLE_ASSIGN
roo.air.cfd.surIde[5].name = "Ceiling"
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1879(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1879};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[10]] /* roo.air.cfd.surIde[5].name PARAM */) = _OMC_LIT84;
  threadData->lastEquationSolved = 1879;
}

/*
equation index: 1883
type: SIMPLE_ASSIGN
roo.air.cfd.surIde[4].name = "South Wall"
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1883(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1883};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[9]] /* roo.air.cfd.surIde[4].name PARAM */) = _OMC_LIT85;
  threadData->lastEquationSolved = 1883;
}

/*
equation index: 1887
type: SIMPLE_ASSIGN
roo.air.cfd.surIde[3].name = "North Wall"
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1887(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1887};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[8]] /* roo.air.cfd.surIde[3].name PARAM */) = _OMC_LIT86;
  threadData->lastEquationSolved = 1887;
}

/*
equation index: 1891
type: SIMPLE_ASSIGN
roo.air.cfd.surIde[2].name = "West Wall"
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1891(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1891};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[7]] /* roo.air.cfd.surIde[2].name PARAM */) = _OMC_LIT87;
  threadData->lastEquationSolved = 1891;
}

/*
equation index: 1895
type: SIMPLE_ASSIGN
roo.air.cfd.surIde[1].name = "East Wall"
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1895(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1895};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[6]] /* roo.air.cfd.surIde[1].name PARAM */) = _OMC_LIT88;
  threadData->lastEquationSolved = 1895;
}

/*
equation index: 1918
type: SIMPLE_ASSIGN
roo.air.cfdFilNam = roo.absCfdFilNam
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1918(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1918};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[12]] /* roo.air.cfdFilNam PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[0]] /* roo.absCfdFilNam PARAM */);
  threadData->lastEquationSolved = 1918;
}

/*
equation index: 1919
type: SIMPLE_ASSIGN
roo.air.cfd.cfdFilNam = roo.air.cfdFilNam
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1919(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1919};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[1]] /* roo.air.cfd.cfdFilNam PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[12]] /* roo.air.cfdFilNam PARAM */);
  threadData->lastEquationSolved = 1919;
}

/*
equation index: 1920
type: SIMPLE_ASSIGN
roo.air.samplePeriod = roo.samplePeriod
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1920(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1920};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[254]] /* roo.air.samplePeriod PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1248]] /* roo.samplePeriod PARAM */);
  threadData->lastEquationSolved = 1920;
}

/*
equation index: 1921
type: SIMPLE_ASSIGN
roo.air.cfd.samplePeriod = roo.air.samplePeriod
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1921(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1921};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[51]] /* roo.air.cfd.samplePeriod PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[254]] /* roo.air.samplePeriod PARAM */);
  threadData->lastEquationSolved = 1921;
}

/*
equation index: 1922
type: SIMPLE_ASSIGN
roo.air.sensorName[2] = "Velocity"
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1922(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1922};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[20]] /* roo.air.sensorName[2] PARAM */) = _OMC_LIT78;
  threadData->lastEquationSolved = 1922;
}

/*
equation index: 1923
type: SIMPLE_ASSIGN
roo.air.sensorName[1] = "Occupied zone air temperature"
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1923(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1923};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[19]] /* roo.air.sensorName[1] PARAM */) = _OMC_LIT79;
  threadData->lastEquationSolved = 1923;
}

/*
equation index: 1928
type: SIMPLE_ASSIGN
roo.air.surBou[6].A = roo.surBou[6].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1928(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1928};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[261]] /* roo.air.surBou[6].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1254]] /* roo.surBou[6].A PARAM */);
  threadData->lastEquationSolved = 1928;
}

/*
equation index: 1929
type: SIMPLE_ASSIGN
roo.air.ASurBou[6] = roo.air.surBou[6].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1929(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1929};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[34]] /* roo.air.ASurBou[6] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[261]] /* roo.air.surBou[6].A PARAM */);
  threadData->lastEquationSolved = 1929;
}

/*
equation index: 1930
type: SIMPLE_ASSIGN
roo.air.surBou[5].A = roo.surBou[5].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1930(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1930};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[260]] /* roo.air.surBou[5].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1253]] /* roo.surBou[5].A PARAM */);
  threadData->lastEquationSolved = 1930;
}

/*
equation index: 1931
type: SIMPLE_ASSIGN
roo.air.ASurBou[5] = roo.air.surBou[5].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1931(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1931};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[33]] /* roo.air.ASurBou[5] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[260]] /* roo.air.surBou[5].A PARAM */);
  threadData->lastEquationSolved = 1931;
}

/*
equation index: 1932
type: SIMPLE_ASSIGN
roo.air.surBou[4].A = roo.surBou[4].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1932(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1932};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[259]] /* roo.air.surBou[4].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1252]] /* roo.surBou[4].A PARAM */);
  threadData->lastEquationSolved = 1932;
}

/*
equation index: 1933
type: SIMPLE_ASSIGN
roo.air.ASurBou[4] = roo.air.surBou[4].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1933(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1933};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[32]] /* roo.air.ASurBou[4] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[259]] /* roo.air.surBou[4].A PARAM */);
  threadData->lastEquationSolved = 1933;
}

/*
equation index: 1934
type: SIMPLE_ASSIGN
roo.air.surBou[3].A = roo.surBou[3].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1934(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1934};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[258]] /* roo.air.surBou[3].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1251]] /* roo.surBou[3].A PARAM */);
  threadData->lastEquationSolved = 1934;
}

/*
equation index: 1935
type: SIMPLE_ASSIGN
roo.air.ASurBou[3] = roo.air.surBou[3].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1935(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1935};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[31]] /* roo.air.ASurBou[3] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[258]] /* roo.air.surBou[3].A PARAM */);
  threadData->lastEquationSolved = 1935;
}

/*
equation index: 1936
type: SIMPLE_ASSIGN
roo.air.surBou[2].A = roo.surBou[2].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1936(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1936};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[257]] /* roo.air.surBou[2].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1250]] /* roo.surBou[2].A PARAM */);
  threadData->lastEquationSolved = 1936;
}

/*
equation index: 1937
type: SIMPLE_ASSIGN
roo.air.ASurBou[2] = roo.air.surBou[2].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1937(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1937};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[30]] /* roo.air.ASurBou[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[257]] /* roo.air.surBou[2].A PARAM */);
  threadData->lastEquationSolved = 1937;
}

/*
equation index: 1938
type: SIMPLE_ASSIGN
roo.air.surBou[1].A = roo.surBou[1].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1938(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1938};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[256]] /* roo.air.surBou[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1249]] /* roo.surBou[1].A PARAM */);
  threadData->lastEquationSolved = 1938;
}

/*
equation index: 1939
type: SIMPLE_ASSIGN
roo.air.ASurBou[1] = roo.air.surBou[1].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1939(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1939};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[29]] /* roo.air.ASurBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[256]] /* roo.air.surBou[1].A PARAM */);
  threadData->lastEquationSolved = 1939;
}

/*
equation index: 1940
type: SIMPLE_ASSIGN
roo.air.datConBou[1].A = roo.datConBou[1].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1940(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1940};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[78]] /* roo.air.datConBou[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[305]] /* roo.datConBou[1].A PARAM */);
  threadData->lastEquationSolved = 1940;
}

/*
equation index: 1941
type: SIMPLE_ASSIGN
roo.air.AConBou[1] = roo.air.datConBou[1].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1941(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1941};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[23]] /* roo.air.AConBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[78]] /* roo.air.datConBou[1].A PARAM */);
  threadData->lastEquationSolved = 1941;
}

/*
equation index: 1942
type: SIMPLE_ASSIGN
roo.air.datConPar[1].A = roo.datConPar[1].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1942(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1942};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[183]] /* roo.air.datConPar[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[410]] /* roo.datConPar[1].A PARAM */);
  threadData->lastEquationSolved = 1942;
}

/*
equation index: 1943
type: SIMPLE_ASSIGN
roo.air.AConPar[1] = roo.air.datConPar[1].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1943(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1943};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[28]] /* roo.air.AConPar[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[183]] /* roo.air.datConPar[1].A PARAM */);
  threadData->lastEquationSolved = 1943;
}

/*
equation index: 1944
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].AWin = roo.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1944(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1944};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[124]] /* roo.air.datConExtWin[1].AWin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[351]] /* roo.datConExtWin[1].AWin PARAM */);
  threadData->lastEquationSolved = 1944;
}

/*
equation index: 1945
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].fFra = roo.datConExtWin[1].fFra
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1945(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1945};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[128]] /* roo.air.datConExtWin[1].fFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[355]] /* roo.datConExtWin[1].fFra PARAM */);
  threadData->lastEquationSolved = 1945;
}

/*
equation index: 1946
type: SIMPLE_ASSIGN
roo.air.AConExtWinFra[1] = roo.air.datConExtWin[1].fFra * roo.air.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1946(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1946};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[25]] /* roo.air.AConExtWinFra[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[128]] /* roo.air.datConExtWin[1].fFra PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[124]] /* roo.air.datConExtWin[1].AWin PARAM */));
  threadData->lastEquationSolved = 1946;
}

/*
equation index: 1947
type: SIMPLE_ASSIGN
roo.air.AConExtWinGla[1] = (1.0 - roo.air.datConExtWin[1].fFra) * roo.air.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1947(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1947};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[26]] /* roo.air.AConExtWinGla[1] PARAM */) = (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[128]] /* roo.air.datConExtWin[1].fFra PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[124]] /* roo.air.datConExtWin[1].AWin PARAM */));
  threadData->lastEquationSolved = 1947;
}

/*
equation index: 1948
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].AOpa = roo.datConExtWin[1].AOpa
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1948(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1948};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* roo.air.datConExtWin[1].AOpa PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[350]] /* roo.datConExtWin[1].AOpa PARAM */);
  threadData->lastEquationSolved = 1948;
}

/*
equation index: 1949
type: SIMPLE_ASSIGN
roo.air.AConExtWinOpa[1] = roo.air.datConExtWin[1].AOpa
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1949(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1949};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[27]] /* roo.air.AConExtWinOpa[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* roo.air.datConExtWin[1].AOpa PARAM */);
  threadData->lastEquationSolved = 1949;
}

/*
equation index: 1950
type: SIMPLE_ASSIGN
roo.air.datConExt[1].A = roo.datConExt[1].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1950(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1950};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[99]] /* roo.air.datConExt[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[326]] /* roo.datConExt[1].A PARAM */);
  threadData->lastEquationSolved = 1950;
}

/*
equation index: 1951
type: SIMPLE_ASSIGN
roo.air.AConExt[1] = roo.air.datConExt[1].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1951(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1951};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[24]] /* roo.air.AConExt[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[99]] /* roo.air.datConExt[1].A PARAM */);
  threadData->lastEquationSolved = 1951;
}

/*
equation index: 1959
type: SIMPLE_ASSIGN
roo.air.dummyCon.R = roo.air.dummyCon.material[1].R
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1959(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1959};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[204]] /* roo.air.dummyCon.R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[210]] /* roo.air.dummyCon.material[1].R PARAM */);
  threadData->lastEquationSolved = 1959;
}

/*
equation index: 1966
type: SIMPLE_ASSIGN
roo.air.surBou[6].name = roo.surBou[6].name
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1966(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1966};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[26]] /* roo.air.surBou[6].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[80]] /* roo.surBou[6].name PARAM */);
  threadData->lastEquationSolved = 1966;
}

/*
equation index: 1968
type: SIMPLE_ASSIGN
roo.air.surBou[6].absSol = roo.surBou[6].absSol
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1968(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1968};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[273]] /* roo.air.surBou[6].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1266]] /* roo.surBou[6].absSol PARAM */);
  threadData->lastEquationSolved = 1968;
}

/*
equation index: 1969
type: SIMPLE_ASSIGN
roo.air.surBou[6].absIR = roo.surBou[6].absIR
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1969(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1969};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[267]] /* roo.air.surBou[6].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1260]] /* roo.surBou[6].absIR PARAM */);
  threadData->lastEquationSolved = 1969;
}

/*
equation index: 1972
type: SIMPLE_ASSIGN
roo.air.surBou[5].name = roo.surBou[5].name
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1972(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1972};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[25]] /* roo.air.surBou[5].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[79]] /* roo.surBou[5].name PARAM */);
  threadData->lastEquationSolved = 1972;
}

/*
equation index: 1974
type: SIMPLE_ASSIGN
roo.air.surBou[5].absSol = roo.surBou[5].absSol
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1974(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1974};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[272]] /* roo.air.surBou[5].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1265]] /* roo.surBou[5].absSol PARAM */);
  threadData->lastEquationSolved = 1974;
}

/*
equation index: 1975
type: SIMPLE_ASSIGN
roo.air.surBou[5].absIR = roo.surBou[5].absIR
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1975(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1975};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[266]] /* roo.air.surBou[5].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1259]] /* roo.surBou[5].absIR PARAM */);
  threadData->lastEquationSolved = 1975;
}

/*
equation index: 1978
type: SIMPLE_ASSIGN
roo.air.surBou[4].name = roo.surBou[4].name
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1978(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1978};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[24]] /* roo.air.surBou[4].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[78]] /* roo.surBou[4].name PARAM */);
  threadData->lastEquationSolved = 1978;
}

/*
equation index: 1980
type: SIMPLE_ASSIGN
roo.air.surBou[4].absSol = roo.surBou[4].absSol
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1980(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1980};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[271]] /* roo.air.surBou[4].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1264]] /* roo.surBou[4].absSol PARAM */);
  threadData->lastEquationSolved = 1980;
}

/*
equation index: 1981
type: SIMPLE_ASSIGN
roo.air.surBou[4].absIR = roo.surBou[4].absIR
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1981(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1981};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[265]] /* roo.air.surBou[4].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1258]] /* roo.surBou[4].absIR PARAM */);
  threadData->lastEquationSolved = 1981;
}

/*
equation index: 1984
type: SIMPLE_ASSIGN
roo.air.surBou[3].name = roo.surBou[3].name
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1984(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1984};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[23]] /* roo.air.surBou[3].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[77]] /* roo.surBou[3].name PARAM */);
  threadData->lastEquationSolved = 1984;
}

/*
equation index: 1986
type: SIMPLE_ASSIGN
roo.air.surBou[3].absSol = roo.surBou[3].absSol
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1986(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1986};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[270]] /* roo.air.surBou[3].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1263]] /* roo.surBou[3].absSol PARAM */);
  threadData->lastEquationSolved = 1986;
}

/*
equation index: 1987
type: SIMPLE_ASSIGN
roo.air.surBou[3].absIR = roo.surBou[3].absIR
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1987(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1987};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[264]] /* roo.air.surBou[3].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1257]] /* roo.surBou[3].absIR PARAM */);
  threadData->lastEquationSolved = 1987;
}

/*
equation index: 1990
type: SIMPLE_ASSIGN
roo.air.surBou[2].name = roo.surBou[2].name
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1990(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1990};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[22]] /* roo.air.surBou[2].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[76]] /* roo.surBou[2].name PARAM */);
  threadData->lastEquationSolved = 1990;
}

/*
equation index: 1992
type: SIMPLE_ASSIGN
roo.air.surBou[2].absSol = roo.surBou[2].absSol
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1992(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1992};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[269]] /* roo.air.surBou[2].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1262]] /* roo.surBou[2].absSol PARAM */);
  threadData->lastEquationSolved = 1992;
}

/*
equation index: 1993
type: SIMPLE_ASSIGN
roo.air.surBou[2].absIR = roo.surBou[2].absIR
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1993(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1993};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[263]] /* roo.air.surBou[2].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1256]] /* roo.surBou[2].absIR PARAM */);
  threadData->lastEquationSolved = 1993;
}

/*
equation index: 1996
type: SIMPLE_ASSIGN
roo.air.surBou[1].name = roo.surBou[1].name
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1996(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1996};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[21]] /* roo.air.surBou[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[75]] /* roo.surBou[1].name PARAM */);
  threadData->lastEquationSolved = 1996;
}

/*
equation index: 1998
type: SIMPLE_ASSIGN
roo.air.surBou[1].absSol = roo.surBou[1].absSol
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1998(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1998};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[268]] /* roo.air.surBou[1].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1261]] /* roo.surBou[1].absSol PARAM */);
  threadData->lastEquationSolved = 1998;
}

/*
equation index: 1999
type: SIMPLE_ASSIGN
roo.air.surBou[1].absIR = roo.surBou[1].absIR
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1999(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1999};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[262]] /* roo.air.surBou[1].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1255]] /* roo.surBou[1].absIR PARAM */);
  threadData->lastEquationSolved = 1999;
}

/*
equation index: 2004
type: SIMPLE_ASSIGN
roo.air.datConBou[1].T_b_start = roo.datConBou[1].T_b_start
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2004(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2004};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[80]] /* roo.air.datConBou[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[307]] /* roo.datConBou[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 2004;
}

/*
equation index: 2005
type: SIMPLE_ASSIGN
roo.air.datConBou[1].T_a_start = roo.datConBou[1].T_a_start
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2005(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2005};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[79]] /* roo.air.datConBou[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[306]] /* roo.datConBou[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 2005;
}

/*
equation index: 2009
type: SIMPLE_ASSIGN
roo.air.datConBou[1].azi = roo.datConBou[1].azi
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2009(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2009};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[81]] /* roo.air.datConBou[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[308]] /* roo.datConBou[1].azi PARAM */);
  threadData->lastEquationSolved = 2009;
}

/*
equation index: 2011
type: SIMPLE_ASSIGN
roo.air.datConBou[1].layers.roughness_a = roo.datConBou[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2011(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2011};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[62]] /* roo.air.datConBou[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[138]] /* roo.datConBou[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 2011;
}

/*
equation index: 2012
type: SIMPLE_ASSIGN
roo.air.datConBou[1].layers.absSol_b = roo.datConBou[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2012(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2012};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[86]] /* roo.air.datConBou[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[313]] /* roo.datConBou[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 2012;
}

/*
equation index: 2013
type: SIMPLE_ASSIGN
roo.air.datConBou[1].layers.absSol_a = roo.datConBou[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2013(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2013};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[85]] /* roo.air.datConBou[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[312]] /* roo.datConBou[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 2013;
}

/*
equation index: 2014
type: SIMPLE_ASSIGN
roo.air.datConBou[1].layers.absIR_b = roo.datConBou[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2014(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2014};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[84]] /* roo.air.datConBou[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[311]] /* roo.datConBou[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 2014;
}

/*
equation index: 2015
type: SIMPLE_ASSIGN
roo.air.datConBou[1].layers.absIR_a = roo.datConBou[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2015(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2015};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* roo.air.datConBou[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[310]] /* roo.datConBou[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 2015;
}

/*
equation index: 2018
type: SIMPLE_ASSIGN
roo.air.datConBou[1].layers.material[1].LHea = roo.datConBou[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2018(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2018};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[87]] /* roo.air.datConBou[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[314]] /* roo.datConBou[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 2018;
}

/*
equation index: 2021
type: SIMPLE_ASSIGN
roo.air.datConBou[1].layers.material[1].nStaReal = roo.datConBou[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2021(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2021};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[94]] /* roo.air.datConBou[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[321]] /* roo.datConBou[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 2021;
}

/*
equation index: 2022
type: SIMPLE_ASSIGN
roo.air.datConBou[1].layers.material[1].piMat = roo.datConBou[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2022(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2022};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[95]] /* roo.air.datConBou[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[322]] /* roo.datConBou[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 2022;
}

/*
equation index: 2023
type: SIMPLE_ASSIGN
roo.air.datConBou[1].layers.material[1].piRef = roo.datConBou[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2023(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2023};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[96]] /* roo.air.datConBou[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[323]] /* roo.datConBou[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 2023;
}

/*
equation index: 2026
type: SIMPLE_ASSIGN
roo.air.datConBou[1].layers.material[1].nStaRef = roo.datConBou[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2026(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2026};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[59]] /* roo.air.datConBou[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[135]] /* roo.datConBou[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 2026;
}

/*
equation index: 2027
type: SIMPLE_ASSIGN
roo.air.datConBou[1].layers.material[1].R = roo.datConBou[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2027(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2027};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[88]] /* roo.air.datConBou[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[315]] /* roo.datConBou[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 2027;
}

/*
equation index: 2028
type: SIMPLE_ASSIGN
roo.air.datConBou[1].layers.material[1].d = roo.datConBou[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2028(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2028};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[92]] /* roo.air.datConBou[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[319]] /* roo.datConBou[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 2028;
}

/*
equation index: 2029
type: SIMPLE_ASSIGN
roo.air.datConBou[1].layers.material[1].c = roo.datConBou[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2029(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2029};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[91]] /* roo.air.datConBou[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[318]] /* roo.datConBou[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 2029;
}

/*
equation index: 2030
type: SIMPLE_ASSIGN
roo.air.datConBou[1].layers.material[1].k = roo.datConBou[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2030(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2030};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[93]] /* roo.air.datConBou[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[320]] /* roo.datConBou[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 2030;
}

/*
equation index: 2031
type: SIMPLE_ASSIGN
roo.air.datConBou[1].layers.material[1].x = roo.datConBou[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2031(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2031};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[97]] /* roo.air.datConBou[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[324]] /* roo.datConBou[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 2031;
}

/*
equation index: 2033
type: SIMPLE_ASSIGN
roo.air.datConBou[1].name = roo.datConBou[1].name
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2033(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2033};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[13]] /* roo.air.datConBou[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[34]] /* roo.datConBou[1].name PARAM */);
  threadData->lastEquationSolved = 2033;
}

/*
equation index: 2037
type: SIMPLE_ASSIGN
roo.air.datConPar[1].T_b_start = roo.datConPar[1].T_b_start
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2037(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2037};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[185]] /* roo.air.datConPar[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[412]] /* roo.datConPar[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 2037;
}

/*
equation index: 2038
type: SIMPLE_ASSIGN
roo.air.datConPar[1].T_a_start = roo.datConPar[1].T_a_start
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2038(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2038};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[184]] /* roo.air.datConPar[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[411]] /* roo.datConPar[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 2038;
}

/*
equation index: 2042
type: SIMPLE_ASSIGN
roo.air.datConPar[1].azi = roo.datConPar[1].azi
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2042(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2042};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[186]] /* roo.air.datConPar[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[413]] /* roo.datConPar[1].azi PARAM */);
  threadData->lastEquationSolved = 2042;
}

/*
equation index: 2044
type: SIMPLE_ASSIGN
roo.air.datConPar[1].layers.roughness_a = roo.datConPar[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2044(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2044};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[80]] /* roo.air.datConPar[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[156]] /* roo.datConPar[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 2044;
}

/*
equation index: 2045
type: SIMPLE_ASSIGN
roo.air.datConPar[1].layers.absSol_b = roo.datConPar[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2045(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2045};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[191]] /* roo.air.datConPar[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[418]] /* roo.datConPar[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 2045;
}

/*
equation index: 2046
type: SIMPLE_ASSIGN
roo.air.datConPar[1].layers.absSol_a = roo.datConPar[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2046(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2046};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[190]] /* roo.air.datConPar[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[417]] /* roo.datConPar[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 2046;
}

/*
equation index: 2047
type: SIMPLE_ASSIGN
roo.air.datConPar[1].layers.absIR_b = roo.datConPar[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2047(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2047};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[189]] /* roo.air.datConPar[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[416]] /* roo.datConPar[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 2047;
}

/*
equation index: 2048
type: SIMPLE_ASSIGN
roo.air.datConPar[1].layers.absIR_a = roo.datConPar[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2048(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2048};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[188]] /* roo.air.datConPar[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[415]] /* roo.datConPar[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 2048;
}

/*
equation index: 2051
type: SIMPLE_ASSIGN
roo.air.datConPar[1].layers.material[1].LHea = roo.datConPar[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2051(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2051};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[192]] /* roo.air.datConPar[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[419]] /* roo.datConPar[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 2051;
}

/*
equation index: 2054
type: SIMPLE_ASSIGN
roo.air.datConPar[1].layers.material[1].nStaReal = roo.datConPar[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2054(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2054};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[199]] /* roo.air.datConPar[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[426]] /* roo.datConPar[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 2054;
}

/*
equation index: 2055
type: SIMPLE_ASSIGN
roo.air.datConPar[1].layers.material[1].piMat = roo.datConPar[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2055(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2055};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[200]] /* roo.air.datConPar[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[427]] /* roo.datConPar[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 2055;
}

/*
equation index: 2056
type: SIMPLE_ASSIGN
roo.air.datConPar[1].layers.material[1].piRef = roo.datConPar[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2056(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2056};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[201]] /* roo.air.datConPar[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[428]] /* roo.datConPar[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 2056;
}

/*
equation index: 2059
type: SIMPLE_ASSIGN
roo.air.datConPar[1].layers.material[1].nStaRef = roo.datConPar[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2059(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2059};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[77]] /* roo.air.datConPar[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[153]] /* roo.datConPar[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 2059;
}

/*
equation index: 2060
type: SIMPLE_ASSIGN
roo.air.datConPar[1].layers.material[1].R = roo.datConPar[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2060(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2060};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[193]] /* roo.air.datConPar[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[420]] /* roo.datConPar[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 2060;
}

/*
equation index: 2061
type: SIMPLE_ASSIGN
roo.air.datConPar[1].layers.material[1].d = roo.datConPar[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2061(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2061};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[197]] /* roo.air.datConPar[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[424]] /* roo.datConPar[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 2061;
}

/*
equation index: 2062
type: SIMPLE_ASSIGN
roo.air.datConPar[1].layers.material[1].c = roo.datConPar[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2062(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2062};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[196]] /* roo.air.datConPar[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[423]] /* roo.datConPar[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 2062;
}

/*
equation index: 2063
type: SIMPLE_ASSIGN
roo.air.datConPar[1].layers.material[1].k = roo.datConPar[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2063(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2063};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[198]] /* roo.air.datConPar[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[425]] /* roo.datConPar[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 2063;
}

/*
equation index: 2064
type: SIMPLE_ASSIGN
roo.air.datConPar[1].layers.material[1].x = roo.datConPar[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2064(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2064};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[202]] /* roo.air.datConPar[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[429]] /* roo.datConPar[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 2064;
}

/*
equation index: 2066
type: SIMPLE_ASSIGN
roo.air.datConPar[1].name = roo.datConPar[1].name
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2066(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2066};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[16]] /* roo.air.datConPar[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[37]] /* roo.datConPar[1].name PARAM */);
  threadData->lastEquationSolved = 2066;
}

/*
equation index: 2070
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.absSolFra = roo.datConExtWin[1].glaSys.absSolFra
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2070(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2070};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[131]] /* roo.air.datConExtWin[1].glaSys.absSolFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[358]] /* roo.datConExtWin[1].glaSys.absSolFra PARAM */);
  threadData->lastEquationSolved = 2070;
}

/*
equation index: 2071
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.absIRFra = roo.datConExtWin[1].glaSys.absIRFra
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2071(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2071};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[130]] /* roo.air.datConExtWin[1].glaSys.absIRFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[357]] /* roo.datConExtWin[1].glaSys.absIRFra PARAM */);
  threadData->lastEquationSolved = 2071;
}

/*
equation index: 2072
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.UFra = roo.datConExtWin[1].glaSys.UFra
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2072(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2072};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[129]] /* roo.air.datConExtWin[1].glaSys.UFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[356]] /* roo.datConExtWin[1].glaSys.UFra PARAM */);
  threadData->lastEquationSolved = 2072;
}

/*
equation index: 2073
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.shade.tauIR_b = roo.datConExtWin[1].glaSys.shade.tauIR_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2073(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2073};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[154]] /* roo.air.datConExtWin[1].glaSys.shade.tauIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[381]] /* roo.datConExtWin[1].glaSys.shade.tauIR_b PARAM */);
  threadData->lastEquationSolved = 2073;
}

/*
equation index: 2074
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.shade.tauIR_a = roo.datConExtWin[1].glaSys.shade.tauIR_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2074(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2074};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[153]] /* roo.air.datConExtWin[1].glaSys.shade.tauIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[380]] /* roo.datConExtWin[1].glaSys.shade.tauIR_a PARAM */);
  threadData->lastEquationSolved = 2074;
}

/*
equation index: 2075
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.shade.absIR_b = roo.datConExtWin[1].glaSys.shade.absIR_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2075(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2075};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[150]] /* roo.air.datConExtWin[1].glaSys.shade.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[377]] /* roo.datConExtWin[1].glaSys.shade.absIR_b PARAM */);
  threadData->lastEquationSolved = 2075;
}

/*
equation index: 2076
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.shade.absIR_a = roo.datConExtWin[1].glaSys.shade.absIR_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2076(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2076};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[149]] /* roo.air.datConExtWin[1].glaSys.shade.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[376]] /* roo.datConExtWin[1].glaSys.shade.absIR_a PARAM */);
  threadData->lastEquationSolved = 2076;
}

/*
equation index: 2077
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.shade.rhoSol_b = roo.datConExtWin[1].glaSys.shade.rhoSol_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2077(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2077};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[152]] /* roo.air.datConExtWin[1].glaSys.shade.rhoSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[379]] /* roo.datConExtWin[1].glaSys.shade.rhoSol_b PARAM */);
  threadData->lastEquationSolved = 2077;
}

/*
equation index: 2078
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.shade.rhoSol_a = roo.datConExtWin[1].glaSys.shade.rhoSol_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2078(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2078};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[151]] /* roo.air.datConExtWin[1].glaSys.shade.rhoSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[378]] /* roo.datConExtWin[1].glaSys.shade.rhoSol_a PARAM */);
  threadData->lastEquationSolved = 2078;
}

/*
equation index: 2079
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.shade.tauSol_b = roo.datConExtWin[1].glaSys.shade.tauSol_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2079(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2079};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[156]] /* roo.air.datConExtWin[1].glaSys.shade.tauSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[383]] /* roo.datConExtWin[1].glaSys.shade.tauSol_b PARAM */);
  threadData->lastEquationSolved = 2079;
}

/*
equation index: 2080
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.shade.tauSol_a = roo.datConExtWin[1].glaSys.shade.tauSol_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2080(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2080};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[155]] /* roo.air.datConExtWin[1].glaSys.shade.tauSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[382]] /* roo.datConExtWin[1].glaSys.shade.tauSol_a PARAM */);
  threadData->lastEquationSolved = 2080;
}

/*
equation index: 2081
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.gas[1].P0 = roo.datConExtWin[1].glaSys.gas[1].P0
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2081(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2081};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[133]] /* roo.air.datConExtWin[1].glaSys.gas[1].P0 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[360]] /* roo.datConExtWin[1].glaSys.gas[1].P0 PARAM */);
  threadData->lastEquationSolved = 2081;
}

/*
equation index: 2082
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.gas[1].MM = roo.datConExtWin[1].glaSys.gas[1].MM
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2082(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2082};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[132]] /* roo.air.datConExtWin[1].glaSys.gas[1].MM PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[359]] /* roo.datConExtWin[1].glaSys.gas[1].MM PARAM */);
  threadData->lastEquationSolved = 2082;
}

/*
equation index: 2083
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.gas[1].b_c = roo.datConExtWin[1].glaSys.gas[1].b_c
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2083(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2083};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[137]] /* roo.air.datConExtWin[1].glaSys.gas[1].b_c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[364]] /* roo.datConExtWin[1].glaSys.gas[1].b_c PARAM */);
  threadData->lastEquationSolved = 2083;
}

/*
equation index: 2084
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.gas[1].a_c = roo.datConExtWin[1].glaSys.gas[1].a_c
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2084(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2084};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[134]] /* roo.air.datConExtWin[1].glaSys.gas[1].a_c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[361]] /* roo.datConExtWin[1].glaSys.gas[1].a_c PARAM */);
  threadData->lastEquationSolved = 2084;
}

/*
equation index: 2085
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.gas[1].b_mu = roo.datConExtWin[1].glaSys.gas[1].b_mu
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2085(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2085};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[139]] /* roo.air.datConExtWin[1].glaSys.gas[1].b_mu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[366]] /* roo.datConExtWin[1].glaSys.gas[1].b_mu PARAM */);
  threadData->lastEquationSolved = 2085;
}

/*
equation index: 2086
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.gas[1].a_mu = roo.datConExtWin[1].glaSys.gas[1].a_mu
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2086(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2086};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[136]] /* roo.air.datConExtWin[1].glaSys.gas[1].a_mu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[363]] /* roo.datConExtWin[1].glaSys.gas[1].a_mu PARAM */);
  threadData->lastEquationSolved = 2086;
}

/*
equation index: 2087
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.gas[1].b_k = roo.datConExtWin[1].glaSys.gas[1].b_k
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2087(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2087};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[138]] /* roo.air.datConExtWin[1].glaSys.gas[1].b_k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[365]] /* roo.datConExtWin[1].glaSys.gas[1].b_k PARAM */);
  threadData->lastEquationSolved = 2087;
}

/*
equation index: 2088
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.gas[1].a_k = roo.datConExtWin[1].glaSys.gas[1].a_k
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2088(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2088};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[135]] /* roo.air.datConExtWin[1].glaSys.gas[1].a_k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[362]] /* roo.datConExtWin[1].glaSys.gas[1].a_k PARAM */);
  threadData->lastEquationSolved = 2088;
}

/*
equation index: 2089
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.gas[1].x = roo.datConExtWin[1].glaSys.gas[1].x
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2089(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2089};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[140]] /* roo.air.datConExtWin[1].glaSys.gas[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[367]] /* roo.datConExtWin[1].glaSys.gas[1].x PARAM */);
  threadData->lastEquationSolved = 2089;
}

/*
equation index: 2090
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.glass[1].absIR_b = roo.datConExtWin[1].glaSys.glass[1].absIR_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2090(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2090};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[142]] /* roo.air.datConExtWin[1].glaSys.glass[1].absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[369]] /* roo.datConExtWin[1].glaSys.glass[1].absIR_b PARAM */);
  threadData->lastEquationSolved = 2090;
}

/*
equation index: 2091
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.glass[1].absIR_a = roo.datConExtWin[1].glaSys.glass[1].absIR_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2091(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2091};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[141]] /* roo.air.datConExtWin[1].glaSys.glass[1].absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[368]] /* roo.datConExtWin[1].glaSys.glass[1].absIR_a PARAM */);
  threadData->lastEquationSolved = 2091;
}

/*
equation index: 2092
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.glass[1].tauIR = roo.datConExtWin[1].glaSys.glass[1].tauIR
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2092(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2092};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[146]] /* roo.air.datConExtWin[1].glaSys.glass[1].tauIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[373]] /* roo.datConExtWin[1].glaSys.glass[1].tauIR PARAM */);
  threadData->lastEquationSolved = 2092;
}

/*
equation index: 2093
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.glass[1].rhoSol_b[1] = roo.datConExtWin[1].glaSys.glass[1].rhoSol_b[1]
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2093(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2093};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[145]] /* roo.air.datConExtWin[1].glaSys.glass[1].rhoSol_b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[372]] /* roo.datConExtWin[1].glaSys.glass[1].rhoSol_b[1] PARAM */);
  threadData->lastEquationSolved = 2093;
}

/*
equation index: 2094
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.glass[1].rhoSol_a[1] = roo.datConExtWin[1].glaSys.glass[1].rhoSol_a[1]
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2094(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2094};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[144]] /* roo.air.datConExtWin[1].glaSys.glass[1].rhoSol_a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[371]] /* roo.datConExtWin[1].glaSys.glass[1].rhoSol_a[1] PARAM */);
  threadData->lastEquationSolved = 2094;
}

/*
equation index: 2095
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.glass[1].tauSol[1] = roo.datConExtWin[1].glaSys.glass[1].tauSol[1]
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2095(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2095};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[147]] /* roo.air.datConExtWin[1].glaSys.glass[1].tauSol[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[374]] /* roo.datConExtWin[1].glaSys.glass[1].tauSol[1] PARAM */);
  threadData->lastEquationSolved = 2095;
}

/*
equation index: 2096
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.glass[1].k = roo.datConExtWin[1].glaSys.glass[1].k
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2096(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2096};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[143]] /* roo.air.datConExtWin[1].glaSys.glass[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[370]] /* roo.datConExtWin[1].glaSys.glass[1].k PARAM */);
  threadData->lastEquationSolved = 2096;
}

/*
equation index: 2097
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.glass[1].x = roo.datConExtWin[1].glaSys.glass[1].x
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2097(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2097};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[148]] /* roo.air.datConExtWin[1].glaSys.glass[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[375]] /* roo.datConExtWin[1].glaSys.glass[1].x PARAM */);
  threadData->lastEquationSolved = 2097;
}

/*
equation index: 2100
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].AGla = roo.datConExtWin[1].AGla
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2100(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2100};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[122]] /* roo.air.datConExtWin[1].AGla PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[349]] /* roo.datConExtWin[1].AGla PARAM */);
  threadData->lastEquationSolved = 2100;
}

/*
equation index: 2101
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].AFra = roo.datConExtWin[1].AFra
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2101(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2101};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[121]] /* roo.air.datConExtWin[1].AFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[348]] /* roo.datConExtWin[1].AFra PARAM */);
  threadData->lastEquationSolved = 2101;
}

/*
equation index: 2103
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].sidFin.gap = roo.datConExtWin[1].sidFin.gap
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2103(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2103};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[179]] /* roo.air.datConExtWin[1].sidFin.gap PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[406]] /* roo.datConExtWin[1].sidFin.gap PARAM */);
  threadData->lastEquationSolved = 2103;
}

/*
equation index: 2105
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].sidFin.h = roo.datConExtWin[1].sidFin.h
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2105(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2105};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[180]] /* roo.air.datConExtWin[1].sidFin.h PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[407]] /* roo.datConExtWin[1].sidFin.h PARAM */);
  threadData->lastEquationSolved = 2105;
}

/*
equation index: 2107
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].ove.gap = roo.datConExtWin[1].ove.gap
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2107(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2107};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[175]] /* roo.air.datConExtWin[1].ove.gap PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[402]] /* roo.datConExtWin[1].ove.gap PARAM */);
  threadData->lastEquationSolved = 2107;
}

/*
equation index: 2109
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].ove.wR = roo.datConExtWin[1].ove.wR
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2109(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2109};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[177]] /* roo.air.datConExtWin[1].ove.wR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[404]] /* roo.datConExtWin[1].ove.wR PARAM */);
  threadData->lastEquationSolved = 2109;
}

/*
equation index: 2110
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].ove.wL = roo.datConExtWin[1].ove.wL
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2110(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2110};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[176]] /* roo.air.datConExtWin[1].ove.wL PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[403]] /* roo.datConExtWin[1].ove.wL PARAM */);
  threadData->lastEquationSolved = 2110;
}

/*
equation index: 2111
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].wWin = roo.datConExtWin[1].wWin
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2111(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2111};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[182]] /* roo.air.datConExtWin[1].wWin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[409]] /* roo.datConExtWin[1].wWin PARAM */);
  threadData->lastEquationSolved = 2111;
}

/*
equation index: 2112
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].hWin = roo.datConExtWin[1].hWin
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2112(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2112};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[157]] /* roo.air.datConExtWin[1].hWin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[384]] /* roo.datConExtWin[1].hWin PARAM */);
  threadData->lastEquationSolved = 2112;
}

/*
equation index: 2113
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].A = roo.datConExtWin[1].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2113(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2113};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[120]] /* roo.air.datConExtWin[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[347]] /* roo.datConExtWin[1].A PARAM */);
  threadData->lastEquationSolved = 2113;
}

/*
equation index: 2117
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].T_b_start = roo.datConExtWin[1].T_b_start
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2117(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2117};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[126]] /* roo.air.datConExtWin[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[353]] /* roo.datConExtWin[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 2117;
}

/*
equation index: 2118
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].T_a_start = roo.datConExtWin[1].T_a_start
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2118(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2118};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[125]] /* roo.air.datConExtWin[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[352]] /* roo.datConExtWin[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 2118;
}

/*
equation index: 2122
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].azi = roo.datConExtWin[1].azi
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2122(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2122};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[127]] /* roo.air.datConExtWin[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[354]] /* roo.datConExtWin[1].azi PARAM */);
  threadData->lastEquationSolved = 2122;
}

/*
equation index: 2124
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].layers.roughness_a = roo.datConExtWin[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2124(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2124};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[74]] /* roo.air.datConExtWin[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[150]] /* roo.datConExtWin[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 2124;
}

/*
equation index: 2125
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].layers.absSol_b = roo.datConExtWin[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2125(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2125};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[162]] /* roo.air.datConExtWin[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[389]] /* roo.datConExtWin[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 2125;
}

/*
equation index: 2126
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].layers.absSol_a = roo.datConExtWin[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2126(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2126};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[161]] /* roo.air.datConExtWin[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[388]] /* roo.datConExtWin[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 2126;
}

/*
equation index: 2127
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].layers.absIR_b = roo.datConExtWin[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2127(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2127};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[160]] /* roo.air.datConExtWin[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[387]] /* roo.datConExtWin[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 2127;
}

/*
equation index: 2128
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].layers.absIR_a = roo.datConExtWin[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2128(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2128};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[159]] /* roo.air.datConExtWin[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[386]] /* roo.datConExtWin[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 2128;
}

/*
equation index: 2131
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].layers.material[1].LHea = roo.datConExtWin[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2131(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2131};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[163]] /* roo.air.datConExtWin[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[390]] /* roo.datConExtWin[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 2131;
}

/*
equation index: 2134
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].layers.material[1].nStaReal = roo.datConExtWin[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2134(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2134};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[170]] /* roo.air.datConExtWin[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[397]] /* roo.datConExtWin[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 2134;
}

/*
equation index: 2135
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].layers.material[1].piMat = roo.datConExtWin[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2135(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2135};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[171]] /* roo.air.datConExtWin[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[398]] /* roo.datConExtWin[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 2135;
}

/*
equation index: 2136
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].layers.material[1].piRef = roo.datConExtWin[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2136(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2136};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[172]] /* roo.air.datConExtWin[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[399]] /* roo.datConExtWin[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 2136;
}

/*
equation index: 2139
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].layers.material[1].nStaRef = roo.datConExtWin[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2139(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2139};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[71]] /* roo.air.datConExtWin[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[147]] /* roo.datConExtWin[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 2139;
}

/*
equation index: 2140
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].layers.material[1].R = roo.datConExtWin[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2140(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2140};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[164]] /* roo.air.datConExtWin[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[391]] /* roo.datConExtWin[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 2140;
}

/*
equation index: 2141
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].layers.material[1].d = roo.datConExtWin[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2141(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2141};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[168]] /* roo.air.datConExtWin[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[395]] /* roo.datConExtWin[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 2141;
}

/*
equation index: 2142
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].layers.material[1].c = roo.datConExtWin[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2142(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2142};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[167]] /* roo.air.datConExtWin[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[394]] /* roo.datConExtWin[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 2142;
}

/*
equation index: 2143
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].layers.material[1].k = roo.datConExtWin[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2143(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2143};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[169]] /* roo.air.datConExtWin[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[396]] /* roo.datConExtWin[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 2143;
}

/*
equation index: 2144
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].layers.material[1].x = roo.datConExtWin[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2144(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2144};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[173]] /* roo.air.datConExtWin[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[400]] /* roo.datConExtWin[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 2144;
}

/*
equation index: 2146
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].name = roo.datConExtWin[1].name
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2146(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2146};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[15]] /* roo.air.datConExtWin[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[36]] /* roo.datConExtWin[1].name PARAM */);
  threadData->lastEquationSolved = 2146;
}

/*
equation index: 2150
type: SIMPLE_ASSIGN
roo.air.datConExt[1].T_b_start = roo.datConExt[1].T_b_start
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2150(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2150};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[101]] /* roo.air.datConExt[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[328]] /* roo.datConExt[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 2150;
}

/*
equation index: 2151
type: SIMPLE_ASSIGN
roo.air.datConExt[1].T_a_start = roo.datConExt[1].T_a_start
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2151(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2151};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[100]] /* roo.air.datConExt[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[327]] /* roo.datConExt[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 2151;
}

/*
equation index: 2155
type: SIMPLE_ASSIGN
roo.air.datConExt[1].azi = roo.datConExt[1].azi
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2155(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2155};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[102]] /* roo.air.datConExt[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[329]] /* roo.datConExt[1].azi PARAM */);
  threadData->lastEquationSolved = 2155;
}

/*
equation index: 2157
type: SIMPLE_ASSIGN
roo.air.datConExt[1].layers.roughness_a = roo.datConExt[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2157(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2157};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[68]] /* roo.air.datConExt[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[144]] /* roo.datConExt[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 2157;
}

/*
equation index: 2158
type: SIMPLE_ASSIGN
roo.air.datConExt[1].layers.absSol_b = roo.datConExt[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2158(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2158};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[107]] /* roo.air.datConExt[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[334]] /* roo.datConExt[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 2158;
}

/*
equation index: 2159
type: SIMPLE_ASSIGN
roo.air.datConExt[1].layers.absSol_a = roo.datConExt[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2159(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2159};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[106]] /* roo.air.datConExt[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[333]] /* roo.datConExt[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 2159;
}

/*
equation index: 2160
type: SIMPLE_ASSIGN
roo.air.datConExt[1].layers.absIR_b = roo.datConExt[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2160(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2160};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[105]] /* roo.air.datConExt[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[332]] /* roo.datConExt[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 2160;
}

/*
equation index: 2161
type: SIMPLE_ASSIGN
roo.air.datConExt[1].layers.absIR_a = roo.datConExt[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2161(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2161};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[104]] /* roo.air.datConExt[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[331]] /* roo.datConExt[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 2161;
}

/*
equation index: 2164
type: SIMPLE_ASSIGN
roo.air.datConExt[1].layers.material[1].LHea = roo.datConExt[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2164(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2164};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[108]] /* roo.air.datConExt[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[335]] /* roo.datConExt[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 2164;
}

/*
equation index: 2167
type: SIMPLE_ASSIGN
roo.air.datConExt[1].layers.material[1].nStaReal = roo.datConExt[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2167(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2167};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[115]] /* roo.air.datConExt[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[342]] /* roo.datConExt[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 2167;
}

/*
equation index: 2168
type: SIMPLE_ASSIGN
roo.air.datConExt[1].layers.material[1].piMat = roo.datConExt[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2168(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2168};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[116]] /* roo.air.datConExt[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[343]] /* roo.datConExt[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 2168;
}

/*
equation index: 2169
type: SIMPLE_ASSIGN
roo.air.datConExt[1].layers.material[1].piRef = roo.datConExt[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2169(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2169};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[117]] /* roo.air.datConExt[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[344]] /* roo.datConExt[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 2169;
}

/*
equation index: 2172
type: SIMPLE_ASSIGN
roo.air.datConExt[1].layers.material[1].nStaRef = roo.datConExt[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2172(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2172};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[65]] /* roo.air.datConExt[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[141]] /* roo.datConExt[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 2172;
}

/*
equation index: 2173
type: SIMPLE_ASSIGN
roo.air.datConExt[1].layers.material[1].R = roo.datConExt[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2173(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2173};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[109]] /* roo.air.datConExt[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[336]] /* roo.datConExt[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 2173;
}

/*
equation index: 2174
type: SIMPLE_ASSIGN
roo.air.datConExt[1].layers.material[1].d = roo.datConExt[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2174(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2174};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[113]] /* roo.air.datConExt[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[340]] /* roo.datConExt[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 2174;
}

/*
equation index: 2175
type: SIMPLE_ASSIGN
roo.air.datConExt[1].layers.material[1].c = roo.datConExt[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2175(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2175};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[112]] /* roo.air.datConExt[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[339]] /* roo.datConExt[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 2175;
}

/*
equation index: 2176
type: SIMPLE_ASSIGN
roo.air.datConExt[1].layers.material[1].k = roo.datConExt[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2176(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2176};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[114]] /* roo.air.datConExt[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[341]] /* roo.datConExt[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 2176;
}

/*
equation index: 2177
type: SIMPLE_ASSIGN
roo.air.datConExt[1].layers.material[1].x = roo.datConExt[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2177(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2177};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[118]] /* roo.air.datConExt[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[345]] /* roo.datConExt[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 2177;
}

/*
equation index: 2179
type: SIMPLE_ASSIGN
roo.air.datConExt[1].name = roo.datConExt[1].name
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2179(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2179};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[14]] /* roo.air.datConExt[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[35]] /* roo.datConExt[1].name PARAM */);
  threadData->lastEquationSolved = 2179;
}

/*
equation index: 2196
type: SIMPLE_ASSIGN
roo.m_flow_nominal = 3.333333333333333e-4 * roo.V
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2196(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2196};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1007]] /* roo.m_flow_nominal PARAM */) = (3.333333333333333e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[20]] /* roo.V PARAM */));
  threadData->lastEquationSolved = 2196;
}
extern void ForcedConvection_30s_eqFunction_270(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_269(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_268(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_267(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_266(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_265(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_264(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_263(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_262(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_261(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_260(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_259(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_258(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_257(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_256(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_255(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_254(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_227(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_54(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_226(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_53(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_52(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_51(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_50(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_49(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_48(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_46(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_41(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_222(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_47(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_42(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_40(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_39(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_38(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_37(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_36(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_35(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_34(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_33(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_32(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_31(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_30(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_29(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_28(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_27(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_26(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_25(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_24(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_23(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_22(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_21(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_20(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_19(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_18(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_17(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_16(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_15(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_14(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_13(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_12(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_11(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_10(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_9(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_8(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_7(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_6(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_5(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_4(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_3(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_2(DATA *data, threadData_t *threadData);

extern void ForcedConvection_30s_eqFunction_1(DATA *data, threadData_t *threadData);


/*
equation index: 2376
type: ALGORITHM

  assert(bounIn.T >= 1.0 and bounIn.T <= 1e4, "Variable violating min/max constraint: 1.0 <= bounIn.T <= 1e4, has value: " + String(bounIn.T, "g"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2376(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2376};
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  static const MMC_DEFSTRINGLIT(tmp4,74,"Variable violating min/max constraint: 1.0 <= bounIn.T <= 1e4, has value: ");
  modelica_string tmp5;
  modelica_metatype tmpMeta6;
  static int tmp7 = 0;
  if(!tmp7)
  {
    tmp2 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[12]] /* bounIn.T PARAM */),1.0);
    tmp3 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[12]] /* bounIn.T PARAM */),1e4);
    if(!(tmp2 && tmp3))
    {
      tmp5 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[12]] /* bounIn.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta6 = stringAppend(MMC_REFSTRINGLIT(tmp4),tmp5);
      {
        const char* assert_cond = "(bounIn.T >= 1.0 and bounIn.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/Fluid/Sources/MassFlowSource_T.mo",15,3,17,68,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta6));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/Fluid/Sources/MassFlowSource_T.mo",15,3,17,68,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta6));
        }
      }
      tmp7 = 1;
    }
  }
  threadData->lastEquationSolved = 2376;
}

/*
equation index: 2377
type: ALGORITHM

  assert(bounIn.X[2] >= 0.0 and bounIn.X[2] <= 1.0, "Variable violating min/max constraint: 0.0 <= bounIn.X[2] <= 1.0, has value: " + String(bounIn.X[2], "g"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2377(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2377};
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  static const MMC_DEFSTRINGLIT(tmp10,77,"Variable violating min/max constraint: 0.0 <= bounIn.X[2] <= 1.0, has value: ");
  modelica_string tmp11;
  modelica_metatype tmpMeta12;
  static int tmp13 = 0;
  if(!tmp13)
  {
    tmp8 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[14]] /* bounIn.X[2] PARAM */),0.0);
    tmp9 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[14]] /* bounIn.X[2] PARAM */),1.0);
    if(!(tmp8 && tmp9))
    {
      tmp11 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[14]] /* bounIn.X[2] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta12 = stringAppend(MMC_REFSTRINGLIT(tmp10),tmp11);
      {
        const char* assert_cond = "(bounIn.X[2] >= 0.0 and bounIn.X[2] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/Fluid/Sources/BaseClasses/PartialSource_Xi_C.mo",15,3,18,90,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta12));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/Fluid/Sources/BaseClasses/PartialSource_Xi_C.mo",15,3,18,90,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta12));
        }
      }
      tmp13 = 1;
    }
  }
  threadData->lastEquationSolved = 2377;
}

/*
equation index: 2378
type: ALGORITHM

  assert(bounIn.X[1] >= 0.0 and bounIn.X[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= bounIn.X[1] <= 1.0, has value: " + String(bounIn.X[1], "g"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2378(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2378};
  modelica_boolean tmp14;
  modelica_boolean tmp15;
  static const MMC_DEFSTRINGLIT(tmp16,77,"Variable violating min/max constraint: 0.0 <= bounIn.X[1] <= 1.0, has value: ");
  modelica_string tmp17;
  modelica_metatype tmpMeta18;
  static int tmp19 = 0;
  if(!tmp19)
  {
    tmp14 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[13]] /* bounIn.X[1] PARAM */),0.0);
    tmp15 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[13]] /* bounIn.X[1] PARAM */),1.0);
    if(!(tmp14 && tmp15))
    {
      tmp17 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[13]] /* bounIn.X[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta18 = stringAppend(MMC_REFSTRINGLIT(tmp16),tmp17);
      {
        const char* assert_cond = "(bounIn.X[1] >= 0.0 and bounIn.X[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/Fluid/Sources/BaseClasses/PartialSource_Xi_C.mo",15,3,18,90,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta18));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/Fluid/Sources/BaseClasses/PartialSource_Xi_C.mo",15,3,18,90,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta18));
        }
      }
      tmp19 = 1;
    }
  }
  threadData->lastEquationSolved = 2378;
}

/*
equation index: 2379
type: ALGORITHM

  assert(bounIn.flowDirection >= Modelica.Fluid.Types.PortFlowDirection.Entering and bounIn.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, "Variable violating min/max constraint: Modelica.Fluid.Types.PortFlowDirection.Entering <= bounIn.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, has value: " + String(bounIn.flowDirection, "d"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2379(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2379};
  modelica_boolean tmp20;
  modelica_boolean tmp21;
  static const MMC_DEFSTRINGLIT(tmp22,179,"Variable violating min/max constraint: Modelica.Fluid.Types.PortFlowDirection.Entering <= bounIn.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, has value: ");
  modelica_string tmp23;
  modelica_metatype tmpMeta24;
  static int tmp25 = 0;
  if(!tmp25)
  {
    tmp20 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[2]] /* bounIn.flowDirection PARAM */),1);
    tmp21 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[2]] /* bounIn.flowDirection PARAM */),3);
    if(!(tmp20 && tmp21))
    {
      tmp23 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[2]] /* bounIn.flowDirection PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta24 = stringAppend(MMC_REFSTRINGLIT(tmp22),tmp23);
      {
        const char* assert_cond = "(bounIn.flowDirection >= Modelica.Fluid.Types.PortFlowDirection.Entering and bounIn.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/Fluid/Sources/BaseClasses/PartialSource.mo",31,3,32,80,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta24));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/Fluid/Sources/BaseClasses/PartialSource.mo",31,3,32,80,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta24));
        }
      }
      tmp25 = 1;
    }
  }
  threadData->lastEquationSolved = 2379;
}

/*
equation index: 2380
type: ALGORITHM

  assert(bouOut.T >= 1.0 and bouOut.T <= 1e4, "Variable violating min/max constraint: 1.0 <= bouOut.T <= 1e4, has value: " + String(bouOut.T, "g"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2380(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2380};
  modelica_boolean tmp26;
  modelica_boolean tmp27;
  static const MMC_DEFSTRINGLIT(tmp28,74,"Variable violating min/max constraint: 1.0 <= bouOut.T <= 1e4, has value: ");
  modelica_string tmp29;
  modelica_metatype tmpMeta30;
  static int tmp31 = 0;
  if(!tmp31)
  {
    tmp26 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[8]] /* bouOut.T PARAM */),1.0);
    tmp27 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[8]] /* bouOut.T PARAM */),1e4);
    if(!(tmp26 && tmp27))
    {
      tmp29 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[8]] /* bouOut.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta30 = stringAppend(MMC_REFSTRINGLIT(tmp28),tmp29);
      {
        const char* assert_cond = "(bouOut.T >= 1.0 and bouOut.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/Fluid/Sources/Boundary_pT.mo",16,3,18,68,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta30));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/Fluid/Sources/Boundary_pT.mo",16,3,18,68,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta30));
        }
      }
      tmp31 = 1;
    }
  }
  threadData->lastEquationSolved = 2380;
}

/*
equation index: 2381
type: ALGORITHM

  assert(bouOut.p >= 0.0 and bouOut.p <= 1e8, "Variable violating min/max constraint: 0.0 <= bouOut.p <= 1e8, has value: " + String(bouOut.p, "g"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2381(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2381};
  modelica_boolean tmp32;
  modelica_boolean tmp33;
  static const MMC_DEFSTRINGLIT(tmp34,74,"Variable violating min/max constraint: 0.0 <= bouOut.p <= 1e8, has value: ");
  modelica_string tmp35;
  modelica_metatype tmpMeta36;
  static int tmp37 = 0;
  if(!tmp37)
  {
    tmp32 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[11]] /* bouOut.p PARAM */),0.0);
    tmp33 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[11]] /* bouOut.p PARAM */),1e8);
    if(!(tmp32 && tmp33))
    {
      tmp35 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[11]] /* bouOut.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta36 = stringAppend(MMC_REFSTRINGLIT(tmp34),tmp35);
      {
        const char* assert_cond = "(bouOut.p >= 0.0 and bouOut.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/Fluid/Sources/Boundary_pT.mo",9,3,11,69,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta36));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/Fluid/Sources/Boundary_pT.mo",9,3,11,69,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta36));
        }
      }
      tmp37 = 1;
    }
  }
  threadData->lastEquationSolved = 2381;
}

/*
equation index: 2382
type: ALGORITHM

  assert(bouOut.X[2] >= 0.0 and bouOut.X[2] <= 1.0, "Variable violating min/max constraint: 0.0 <= bouOut.X[2] <= 1.0, has value: " + String(bouOut.X[2], "g"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2382(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2382};
  modelica_boolean tmp38;
  modelica_boolean tmp39;
  static const MMC_DEFSTRINGLIT(tmp40,77,"Variable violating min/max constraint: 0.0 <= bouOut.X[2] <= 1.0, has value: ");
  modelica_string tmp41;
  modelica_metatype tmpMeta42;
  static int tmp43 = 0;
  if(!tmp43)
  {
    tmp38 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[10]] /* bouOut.X[2] PARAM */),0.0);
    tmp39 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[10]] /* bouOut.X[2] PARAM */),1.0);
    if(!(tmp38 && tmp39))
    {
      tmp41 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[10]] /* bouOut.X[2] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta42 = stringAppend(MMC_REFSTRINGLIT(tmp40),tmp41);
      {
        const char* assert_cond = "(bouOut.X[2] >= 0.0 and bouOut.X[2] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/Fluid/Sources/BaseClasses/PartialSource_Xi_C.mo",15,3,18,90,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta42));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/Fluid/Sources/BaseClasses/PartialSource_Xi_C.mo",15,3,18,90,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta42));
        }
      }
      tmp43 = 1;
    }
  }
  threadData->lastEquationSolved = 2382;
}

/*
equation index: 2383
type: ALGORITHM

  assert(bouOut.X[1] >= 0.0 and bouOut.X[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= bouOut.X[1] <= 1.0, has value: " + String(bouOut.X[1], "g"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2383(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2383};
  modelica_boolean tmp44;
  modelica_boolean tmp45;
  static const MMC_DEFSTRINGLIT(tmp46,77,"Variable violating min/max constraint: 0.0 <= bouOut.X[1] <= 1.0, has value: ");
  modelica_string tmp47;
  modelica_metatype tmpMeta48;
  static int tmp49 = 0;
  if(!tmp49)
  {
    tmp44 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[9]] /* bouOut.X[1] PARAM */),0.0);
    tmp45 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[9]] /* bouOut.X[1] PARAM */),1.0);
    if(!(tmp44 && tmp45))
    {
      tmp47 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[9]] /* bouOut.X[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta48 = stringAppend(MMC_REFSTRINGLIT(tmp46),tmp47);
      {
        const char* assert_cond = "(bouOut.X[1] >= 0.0 and bouOut.X[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/Fluid/Sources/BaseClasses/PartialSource_Xi_C.mo",15,3,18,90,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta48));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/Fluid/Sources/BaseClasses/PartialSource_Xi_C.mo",15,3,18,90,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta48));
        }
      }
      tmp49 = 1;
    }
  }
  threadData->lastEquationSolved = 2383;
}

/*
equation index: 2384
type: ALGORITHM

  assert(bouOut.flowDirection >= Modelica.Fluid.Types.PortFlowDirection.Entering and bouOut.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, "Variable violating min/max constraint: Modelica.Fluid.Types.PortFlowDirection.Entering <= bouOut.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, has value: " + String(bouOut.flowDirection, "d"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2384(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2384};
  modelica_boolean tmp50;
  modelica_boolean tmp51;
  static const MMC_DEFSTRINGLIT(tmp52,179,"Variable violating min/max constraint: Modelica.Fluid.Types.PortFlowDirection.Entering <= bouOut.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, has value: ");
  modelica_string tmp53;
  modelica_metatype tmpMeta54;
  static int tmp55 = 0;
  if(!tmp55)
  {
    tmp50 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[0]] /* bouOut.flowDirection PARAM */),1);
    tmp51 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[0]] /* bouOut.flowDirection PARAM */),3);
    if(!(tmp50 && tmp51))
    {
      tmp53 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[0]] /* bouOut.flowDirection PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta54 = stringAppend(MMC_REFSTRINGLIT(tmp52),tmp53);
      {
        const char* assert_cond = "(bouOut.flowDirection >= Modelica.Fluid.Types.PortFlowDirection.Entering and bouOut.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/Fluid/Sources/BaseClasses/PartialSource.mo",31,3,32,80,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta54));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/Fluid/Sources/BaseClasses/PartialSource.mo",31,3,32,80,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta54));
        }
      }
      tmp55 = 1;
    }
  }
  threadData->lastEquationSolved = 2384;
}

/*
equation index: 2385
type: ALGORITHM

  assert(TWal[6].T >= 0.0, "Variable violating min constraint: 0.0 <= TWal[6].T, has value: " + String(TWal[6].T, "g"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2385(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2385};
  modelica_boolean tmp56;
  static const MMC_DEFSTRINGLIT(tmp57,64,"Variable violating min constraint: 0.0 <= TWal[6].T, has value: ");
  modelica_string tmp58;
  modelica_metatype tmpMeta59;
  static int tmp60 = 0;
  if(!tmp60)
  {
    tmp56 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[7]] /* TWal[6].T PARAM */),0.0);
    if(!tmp56)
    {
      tmp58 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[7]] /* TWal[6].T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta59 = stringAppend(MMC_REFSTRINGLIT(tmp57),tmp58);
      {
        const char* assert_cond = "(TWal[6].T >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Sources/FixedTemperature.mo",4,3,4,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta59));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Sources/FixedTemperature.mo",4,3,4,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta59));
        }
      }
      tmp60 = 1;
    }
  }
  threadData->lastEquationSolved = 2385;
}

/*
equation index: 2386
type: ALGORITHM

  assert(TWal[5].T >= 0.0, "Variable violating min constraint: 0.0 <= TWal[5].T, has value: " + String(TWal[5].T, "g"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2386(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2386};
  modelica_boolean tmp61;
  static const MMC_DEFSTRINGLIT(tmp62,64,"Variable violating min constraint: 0.0 <= TWal[5].T, has value: ");
  modelica_string tmp63;
  modelica_metatype tmpMeta64;
  static int tmp65 = 0;
  if(!tmp65)
  {
    tmp61 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[6]] /* TWal[5].T PARAM */),0.0);
    if(!tmp61)
    {
      tmp63 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[6]] /* TWal[5].T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta64 = stringAppend(MMC_REFSTRINGLIT(tmp62),tmp63);
      {
        const char* assert_cond = "(TWal[5].T >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Sources/FixedTemperature.mo",4,3,4,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta64));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Sources/FixedTemperature.mo",4,3,4,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta64));
        }
      }
      tmp65 = 1;
    }
  }
  threadData->lastEquationSolved = 2386;
}

/*
equation index: 2387
type: ALGORITHM

  assert(TWal[4].T >= 0.0, "Variable violating min constraint: 0.0 <= TWal[4].T, has value: " + String(TWal[4].T, "g"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2387(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2387};
  modelica_boolean tmp66;
  static const MMC_DEFSTRINGLIT(tmp67,64,"Variable violating min constraint: 0.0 <= TWal[4].T, has value: ");
  modelica_string tmp68;
  modelica_metatype tmpMeta69;
  static int tmp70 = 0;
  if(!tmp70)
  {
    tmp66 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5]] /* TWal[4].T PARAM */),0.0);
    if(!tmp66)
    {
      tmp68 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5]] /* TWal[4].T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta69 = stringAppend(MMC_REFSTRINGLIT(tmp67),tmp68);
      {
        const char* assert_cond = "(TWal[4].T >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Sources/FixedTemperature.mo",4,3,4,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta69));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Sources/FixedTemperature.mo",4,3,4,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta69));
        }
      }
      tmp70 = 1;
    }
  }
  threadData->lastEquationSolved = 2387;
}

/*
equation index: 2388
type: ALGORITHM

  assert(TWal[3].T >= 0.0, "Variable violating min constraint: 0.0 <= TWal[3].T, has value: " + String(TWal[3].T, "g"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2388(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2388};
  modelica_boolean tmp71;
  static const MMC_DEFSTRINGLIT(tmp72,64,"Variable violating min constraint: 0.0 <= TWal[3].T, has value: ");
  modelica_string tmp73;
  modelica_metatype tmpMeta74;
  static int tmp75 = 0;
  if(!tmp75)
  {
    tmp71 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4]] /* TWal[3].T PARAM */),0.0);
    if(!tmp71)
    {
      tmp73 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4]] /* TWal[3].T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta74 = stringAppend(MMC_REFSTRINGLIT(tmp72),tmp73);
      {
        const char* assert_cond = "(TWal[3].T >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Sources/FixedTemperature.mo",4,3,4,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta74));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Sources/FixedTemperature.mo",4,3,4,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta74));
        }
      }
      tmp75 = 1;
    }
  }
  threadData->lastEquationSolved = 2388;
}

/*
equation index: 2389
type: ALGORITHM

  assert(TWal[2].T >= 0.0, "Variable violating min constraint: 0.0 <= TWal[2].T, has value: " + String(TWal[2].T, "g"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2389(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2389};
  modelica_boolean tmp76;
  static const MMC_DEFSTRINGLIT(tmp77,64,"Variable violating min constraint: 0.0 <= TWal[2].T, has value: ");
  modelica_string tmp78;
  modelica_metatype tmpMeta79;
  static int tmp80 = 0;
  if(!tmp80)
  {
    tmp76 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3]] /* TWal[2].T PARAM */),0.0);
    if(!tmp76)
    {
      tmp78 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3]] /* TWal[2].T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta79 = stringAppend(MMC_REFSTRINGLIT(tmp77),tmp78);
      {
        const char* assert_cond = "(TWal[2].T >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Sources/FixedTemperature.mo",4,3,4,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta79));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Sources/FixedTemperature.mo",4,3,4,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta79));
        }
      }
      tmp80 = 1;
    }
  }
  threadData->lastEquationSolved = 2389;
}

/*
equation index: 2390
type: ALGORITHM

  assert(TWal[1].T >= 0.0, "Variable violating min constraint: 0.0 <= TWal[1].T, has value: " + String(TWal[1].T, "g"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2390(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2390};
  modelica_boolean tmp81;
  static const MMC_DEFSTRINGLIT(tmp82,64,"Variable violating min constraint: 0.0 <= TWal[1].T, has value: ");
  modelica_string tmp83;
  modelica_metatype tmpMeta84;
  static int tmp85 = 0;
  if(!tmp85)
  {
    tmp81 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2]] /* TWal[1].T PARAM */),0.0);
    if(!tmp81)
    {
      tmp83 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2]] /* TWal[1].T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta84 = stringAppend(MMC_REFSTRINGLIT(tmp82),tmp83);
      {
        const char* assert_cond = "(TWal[1].T >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Sources/FixedTemperature.mo",4,3,4,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta84));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Sources/FixedTemperature.mo",4,3,4,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta84));
        }
      }
      tmp85 = 1;
    }
  }
  threadData->lastEquationSolved = 2390;
}

/*
equation index: 2391
type: ALGORITHM

  assert(weaDat.cheTemBlaSky.TMax >= 0.0, "Variable violating min constraint: 0.0 <= weaDat.cheTemBlaSky.TMax, has value: " + String(weaDat.cheTemBlaSky.TMax, "g"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2391(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2391};
  modelica_boolean tmp86;
  static const MMC_DEFSTRINGLIT(tmp87,79,"Variable violating min constraint: 0.0 <= weaDat.cheTemBlaSky.TMax, has value: ");
  modelica_string tmp88;
  modelica_metatype tmpMeta89;
  static int tmp90 = 0;
  if(!tmp90)
  {
    tmp86 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1288]] /* weaDat.cheTemBlaSky.TMax PARAM */),0.0);
    if(!tmp86)
    {
      tmp88 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1288]] /* weaDat.cheTemBlaSky.TMax PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta89 = stringAppend(MMC_REFSTRINGLIT(tmp87),tmp88);
      {
        const char* assert_cond = "(weaDat.cheTemBlaSky.TMax >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckBlackBodySkyTemperature.mo",8,3,9,34,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta89));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckBlackBodySkyTemperature.mo",8,3,9,34,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta89));
        }
      }
      tmp90 = 1;
    }
  }
  threadData->lastEquationSolved = 2391;
}

/*
equation index: 2392
type: ALGORITHM

  assert(weaDat.cheTemBlaSky.TMin >= 0.0, "Variable violating min constraint: 0.0 <= weaDat.cheTemBlaSky.TMin, has value: " + String(weaDat.cheTemBlaSky.TMin, "g"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2392(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2392};
  modelica_boolean tmp91;
  static const MMC_DEFSTRINGLIT(tmp92,79,"Variable violating min constraint: 0.0 <= weaDat.cheTemBlaSky.TMin, has value: ");
  modelica_string tmp93;
  modelica_metatype tmpMeta94;
  static int tmp95 = 0;
  if(!tmp95)
  {
    tmp91 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1289]] /* weaDat.cheTemBlaSky.TMin PARAM */),0.0);
    if(!tmp91)
    {
      tmp93 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1289]] /* weaDat.cheTemBlaSky.TMin PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta94 = stringAppend(MMC_REFSTRINGLIT(tmp92),tmp93);
      {
        const char* assert_cond = "(weaDat.cheTemBlaSky.TMin >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckBlackBodySkyTemperature.mo",6,3,7,34,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta94));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckBlackBodySkyTemperature.mo",6,3,7,34,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta94));
        }
      }
      tmp95 = 1;
    }
  }
  threadData->lastEquationSolved = 2392;
}

/*
equation index: 2393
type: ALGORITHM

  assert(weaDat.datRea30Min.extrapolation >= Modelica.Blocks.Types.Extrapolation.HoldLastPoint and weaDat.datRea30Min.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation, "Variable violating min/max constraint: Modelica.Blocks.Types.Extrapolation.HoldLastPoint <= weaDat.datRea30Min.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation, has value: " + String(weaDat.datRea30Min.extrapolation, "d"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2393(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2393};
  modelica_boolean tmp96;
  modelica_boolean tmp97;
  static const MMC_DEFSTRINGLIT(tmp98,192,"Variable violating min/max constraint: Modelica.Blocks.Types.Extrapolation.HoldLastPoint <= weaDat.datRea30Min.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation, has value: ");
  modelica_string tmp99;
  modelica_metatype tmpMeta100;
  static int tmp101 = 0;
  if(!tmp101)
  {
    tmp96 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[366]] /* weaDat.datRea30Min.extrapolation PARAM */),1);
    tmp97 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[366]] /* weaDat.datRea30Min.extrapolation PARAM */),4);
    if(!(tmp96 && tmp97))
    {
      tmp99 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[366]] /* weaDat.datRea30Min.extrapolation PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta100 = stringAppend(MMC_REFSTRINGLIT(tmp98),tmp99);
      {
        const char* assert_cond = "(weaDat.datRea30Min.extrapolation >= Modelica.Blocks.Types.Extrapolation.HoldLastPoint and weaDat.datRea30Min.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/cfd/.openmodelica/libraries/Modelica 4.0.0+maint.om/Blocks/Tables.mo",32,5,34,61,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta100));
        } else {
          FILE_INFO info = {"/home/cfd/.openmodelica/libraries/Modelica 4.0.0+maint.om/Blocks/Tables.mo",32,5,34,61,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta100));
        }
      }
      tmp101 = 1;
    }
  }
  threadData->lastEquationSolved = 2393;
}

/*
equation index: 2394
type: ALGORITHM

  assert(weaDat.datRea30Min.smoothness >= Modelica.Blocks.Types.Smoothness.LinearSegments and weaDat.datRea30Min.smoothness <= Modelica.Blocks.Types.Smoothness.ModifiedContinuousDerivative, "Variable violating min/max constraint: Modelica.Blocks.Types.Smoothness.LinearSegments <= weaDat.datRea30Min.smoothness <= Modelica.Blocks.Types.Smoothness.ModifiedContinuousDerivative, has value: " + String(weaDat.datRea30Min.smoothness, "d"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2394(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2394};
  modelica_boolean tmp102;
  modelica_boolean tmp103;
  static const MMC_DEFSTRINGLIT(tmp104,197,"Variable violating min/max constraint: Modelica.Blocks.Types.Smoothness.LinearSegments <= weaDat.datRea30Min.smoothness <= Modelica.Blocks.Types.Smoothness.ModifiedContinuousDerivative, has value: ");
  modelica_string tmp105;
  modelica_metatype tmpMeta106;
  static int tmp107 = 0;
  if(!tmp107)
  {
    tmp102 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[368]] /* weaDat.datRea30Min.smoothness PARAM */),1);
    tmp103 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[368]] /* weaDat.datRea30Min.smoothness PARAM */),6);
    if(!(tmp102 && tmp103))
    {
      tmp105 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[368]] /* weaDat.datRea30Min.smoothness PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta106 = stringAppend(MMC_REFSTRINGLIT(tmp104),tmp105);
      {
        const char* assert_cond = "(weaDat.datRea30Min.smoothness >= Modelica.Blocks.Types.Smoothness.LinearSegments and weaDat.datRea30Min.smoothness <= Modelica.Blocks.Types.Smoothness.ModifiedContinuousDerivative)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/cfd/.openmodelica/libraries/Modelica 4.0.0+maint.om/Blocks/Tables.mo",29,5,31,61,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta106));
        } else {
          FILE_INFO info = {"/home/cfd/.openmodelica/libraries/Modelica 4.0.0+maint.om/Blocks/Tables.mo",29,5,31,61,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta106));
        }
      }
      tmp107 = 1;
    }
  }
  threadData->lastEquationSolved = 2394;
}

/*
equation index: 2395
type: ALGORITHM

  assert(weaDat.TBlaSkyCom.calTSky >= Buildings.BoundaryConditions.Types.SkyTemperatureCalculation.HorizontalRadiation and weaDat.TBlaSkyCom.calTSky <= Buildings.BoundaryConditions.Types.SkyTemperatureCalculation.TemperaturesAndSkyCover, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.SkyTemperatureCalculation.HorizontalRadiation <= weaDat.TBlaSkyCom.calTSky <= Buildings.BoundaryConditions.Types.SkyTemperatureCalculation.TemperaturesAndSkyCover, has value: " + String(weaDat.TBlaSkyCom.calTSky, "d"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2395(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2395};
  modelica_boolean tmp108;
  modelica_boolean tmp109;
  static const MMC_DEFSTRINGLIT(tmp110,249,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.SkyTemperatureCalculation.HorizontalRadiation <= weaDat.TBlaSkyCom.calTSky <= Buildings.BoundaryConditions.Types.SkyTemperatureCalculation.TemperaturesAndSkyCover, has value: ");
  modelica_string tmp111;
  modelica_metatype tmpMeta112;
  static int tmp113 = 0;
  if(!tmp113)
  {
    tmp108 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[324]] /* weaDat.TBlaSkyCom.calTSky PARAM */),1);
    tmp109 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[324]] /* weaDat.TBlaSkyCom.calTSky PARAM */),2);
    if(!(tmp108 && tmp109))
    {
      tmp111 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[324]] /* weaDat.TBlaSkyCom.calTSky PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta112 = stringAppend(MMC_REFSTRINGLIT(tmp110),tmp111);
      {
        const char* assert_cond = "(weaDat.TBlaSkyCom.calTSky >= Buildings.BoundaryConditions.Types.SkyTemperatureCalculation.HorizontalRadiation and weaDat.TBlaSkyCom.calTSky <= Buildings.BoundaryConditions.Types.SkyTemperatureCalculation.TemperaturesAndSkyCover)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/SkyTemperature/BlackBody.mo",5,3,9,30,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta112));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/SkyTemperature/BlackBody.mo",5,3,9,30,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta112));
        }
      }
      tmp113 = 1;
    }
  }
  threadData->lastEquationSolved = 2395;
}

/*
equation index: 2396
type: ALGORITHM

  assert(weaDat.cheTemDewPoi.TMax >= 0.0, "Variable violating min constraint: 0.0 <= weaDat.cheTemDewPoi.TMax, has value: " + String(weaDat.cheTemDewPoi.TMax, "g"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2396(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2396};
  modelica_boolean tmp114;
  static const MMC_DEFSTRINGLIT(tmp115,79,"Variable violating min constraint: 0.0 <= weaDat.cheTemDewPoi.TMax, has value: ");
  modelica_string tmp116;
  modelica_metatype tmpMeta117;
  static int tmp118 = 0;
  if(!tmp118)
  {
    tmp114 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1290]] /* weaDat.cheTemDewPoi.TMax PARAM */),0.0);
    if(!tmp114)
    {
      tmp116 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1290]] /* weaDat.cheTemDewPoi.TMax PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta117 = stringAppend(MMC_REFSTRINGLIT(tmp115),tmp116);
      {
        const char* assert_cond = "(weaDat.cheTemDewPoi.TMax >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckDewPointTemperature.mo",18,3,19,34,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta117));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckDewPointTemperature.mo",18,3,19,34,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta117));
        }
      }
      tmp118 = 1;
    }
  }
  threadData->lastEquationSolved = 2396;
}

/*
equation index: 2397
type: ALGORITHM

  assert(weaDat.cheTemDewPoi.TMin >= 0.0, "Variable violating min constraint: 0.0 <= weaDat.cheTemDewPoi.TMin, has value: " + String(weaDat.cheTemDewPoi.TMin, "g"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2397(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2397};
  modelica_boolean tmp119;
  static const MMC_DEFSTRINGLIT(tmp120,79,"Variable violating min constraint: 0.0 <= weaDat.cheTemDewPoi.TMin, has value: ");
  modelica_string tmp121;
  modelica_metatype tmpMeta122;
  static int tmp123 = 0;
  if(!tmp123)
  {
    tmp119 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1291]] /* weaDat.cheTemDewPoi.TMin PARAM */),0.0);
    if(!tmp119)
    {
      tmp121 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1291]] /* weaDat.cheTemDewPoi.TMin PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta122 = stringAppend(MMC_REFSTRINGLIT(tmp120),tmp121);
      {
        const char* assert_cond = "(weaDat.cheTemDewPoi.TMin >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckDewPointTemperature.mo",16,3,17,34,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta122));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckDewPointTemperature.mo",16,3,17,34,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta122));
        }
      }
      tmp123 = 1;
    }
  }
  threadData->lastEquationSolved = 2397;
}

/*
equation index: 2398
type: ALGORITHM

  assert(weaDat.cheTemDryBul.TMax >= 0.0, "Variable violating min constraint: 0.0 <= weaDat.cheTemDryBul.TMax, has value: " + String(weaDat.cheTemDryBul.TMax, "g"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2398(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2398};
  modelica_boolean tmp124;
  static const MMC_DEFSTRINGLIT(tmp125,79,"Variable violating min constraint: 0.0 <= weaDat.cheTemDryBul.TMax, has value: ");
  modelica_string tmp126;
  modelica_metatype tmpMeta127;
  static int tmp128 = 0;
  if(!tmp128)
  {
    tmp124 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1292]] /* weaDat.cheTemDryBul.TMax PARAM */),0.0);
    if(!tmp124)
    {
      tmp126 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1292]] /* weaDat.cheTemDryBul.TMax PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta127 = stringAppend(MMC_REFSTRINGLIT(tmp125),tmp126);
      {
        const char* assert_cond = "(weaDat.cheTemDryBul.TMax >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckDryBulbTemperature.mo",18,3,19,34,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta127));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckDryBulbTemperature.mo",18,3,19,34,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta127));
        }
      }
      tmp128 = 1;
    }
  }
  threadData->lastEquationSolved = 2398;
}

/*
equation index: 2399
type: ALGORITHM

  assert(weaDat.cheTemDryBul.TMin >= 0.0, "Variable violating min constraint: 0.0 <= weaDat.cheTemDryBul.TMin, has value: " + String(weaDat.cheTemDryBul.TMin, "g"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2399(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2399};
  modelica_boolean tmp129;
  static const MMC_DEFSTRINGLIT(tmp130,79,"Variable violating min constraint: 0.0 <= weaDat.cheTemDryBul.TMin, has value: ");
  modelica_string tmp131;
  modelica_metatype tmpMeta132;
  static int tmp133 = 0;
  if(!tmp133)
  {
    tmp129 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1293]] /* weaDat.cheTemDryBul.TMin PARAM */),0.0);
    if(!tmp129)
    {
      tmp131 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1293]] /* weaDat.cheTemDryBul.TMin PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta132 = stringAppend(MMC_REFSTRINGLIT(tmp130),tmp131);
      {
        const char* assert_cond = "(weaDat.cheTemDryBul.TMin >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckDryBulbTemperature.mo",16,3,17,34,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta132));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckDryBulbTemperature.mo",16,3,17,34,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta132));
        }
      }
      tmp133 = 1;
    }
  }
  threadData->lastEquationSolved = 2399;
}

/*
equation index: 2400
type: ALGORITHM

  assert(weaDat.souSelRad.datSou >= Buildings.BoundaryConditions.Types.RadiationDataSource.File and weaDat.souSelRad.datSou <= Buildings.BoundaryConditions.Types.RadiationDataSource.Input_HDirNor_HGloHor, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.RadiationDataSource.File <= weaDat.souSelRad.datSou <= Buildings.BoundaryConditions.Types.RadiationDataSource.Input_HDirNor_HGloHor, has value: " + String(weaDat.souSelRad.datSou, "d"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2400(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2400};
  modelica_boolean tmp134;
  modelica_boolean tmp135;
  static const MMC_DEFSTRINGLIT(tmp136,218,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.RadiationDataSource.File <= weaDat.souSelRad.datSou <= Buildings.BoundaryConditions.Types.RadiationDataSource.Input_HDirNor_HGloHor, has value: ");
  modelica_string tmp137;
  modelica_metatype tmpMeta138;
  static int tmp139 = 0;
  if(!tmp139)
  {
    tmp134 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[376]] /* weaDat.souSelRad.datSou PARAM */),1);
    tmp135 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[376]] /* weaDat.souSelRad.datSou PARAM */),4);
    if(!(tmp134 && tmp135))
    {
      tmp137 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[376]] /* weaDat.souSelRad.datSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta138 = stringAppend(MMC_REFSTRINGLIT(tmp136),tmp137);
      {
        const char* assert_cond = "(weaDat.souSelRad.datSou >= Buildings.BoundaryConditions.Types.RadiationDataSource.File and weaDat.souSelRad.datSou <= Buildings.BoundaryConditions.Types.RadiationDataSource.Input_HDirNor_HGloHor)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelectorRadiation.mo",5,3,6,30,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta138));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelectorRadiation.mo",5,3,6,30,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta138));
        }
      }
      tmp139 = 1;
    }
  }
  threadData->lastEquationSolved = 2400;
}

/*
equation index: 2401
type: ALGORITHM

  assert(weaDat.horInfRadSel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.horInfRadSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.horInfRadSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.horInfRadSel.datSou, "d"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2401(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2401};
  modelica_boolean tmp140;
  modelica_boolean tmp141;
  static const MMC_DEFSTRINGLIT(tmp142,187,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.horInfRadSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp143;
  modelica_metatype tmpMeta144;
  static int tmp145 = 0;
  if(!tmp145)
  {
    tmp140 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[369]] /* weaDat.horInfRadSel.datSou PARAM */),1);
    tmp141 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[369]] /* weaDat.horInfRadSel.datSou PARAM */),3);
    if(!(tmp140 && tmp141))
    {
      tmp143 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[369]] /* weaDat.horInfRadSel.datSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta144 = stringAppend(MMC_REFSTRINGLIT(tmp142),tmp143);
      {
        const char* assert_cond = "(weaDat.horInfRadSel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.horInfRadSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta144));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta144));
        }
      }
      tmp145 = 1;
    }
  }
  threadData->lastEquationSolved = 2401;
}

/*
equation index: 2402
type: ALGORITHM

  assert(weaDat.winDirSel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.winDirSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.winDirSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.winDirSel.datSou, "d"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2402(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2402};
  modelica_boolean tmp146;
  modelica_boolean tmp147;
  static const MMC_DEFSTRINGLIT(tmp148,184,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.winDirSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp149;
  modelica_metatype tmpMeta150;
  static int tmp151 = 0;
  if(!tmp151)
  {
    tmp146 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[379]] /* weaDat.winDirSel.datSou PARAM */),1);
    tmp147 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[379]] /* weaDat.winDirSel.datSou PARAM */),3);
    if(!(tmp146 && tmp147))
    {
      tmp149 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[379]] /* weaDat.winDirSel.datSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta150 = stringAppend(MMC_REFSTRINGLIT(tmp148),tmp149);
      {
        const char* assert_cond = "(weaDat.winDirSel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.winDirSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta150));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta150));
        }
      }
      tmp151 = 1;
    }
  }
  threadData->lastEquationSolved = 2402;
}

/*
equation index: 2403
type: ALGORITHM

  assert(weaDat.winSpe >= 0.0, "Variable violating min constraint: 0.0 <= weaDat.winSpe, has value: " + String(weaDat.winSpe, "g"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2403(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2403};
  modelica_boolean tmp152;
  static const MMC_DEFSTRINGLIT(tmp153,68,"Variable violating min constraint: 0.0 <= weaDat.winSpe, has value: ");
  modelica_string tmp154;
  modelica_metatype tmpMeta155;
  static int tmp156 = 0;
  if(!tmp156)
  {
    tmp152 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1329]] /* weaDat.winSpe PARAM */),0.0);
    if(!tmp152)
    {
      tmp154 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1329]] /* weaDat.winSpe PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta155 = stringAppend(MMC_REFSTRINGLIT(tmp153),tmp154);
      {
        const char* assert_cond = "(weaDat.winSpe >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",97,3,99,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta155));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",97,3,99,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta155));
        }
      }
      tmp156 = 1;
    }
  }
  threadData->lastEquationSolved = 2403;
}

/*
equation index: 2404
type: ALGORITHM

  assert(weaDat.winSpeSel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.winSpeSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.winSpeSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.winSpeSel.datSou, "d"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2404(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2404};
  modelica_boolean tmp157;
  modelica_boolean tmp158;
  static const MMC_DEFSTRINGLIT(tmp159,184,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.winSpeSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp160;
  modelica_metatype tmpMeta161;
  static int tmp162 = 0;
  if(!tmp162)
  {
    tmp157 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[381]] /* weaDat.winSpeSel.datSou PARAM */),1);
    tmp158 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[381]] /* weaDat.winSpeSel.datSou PARAM */),3);
    if(!(tmp157 && tmp158))
    {
      tmp160 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[381]] /* weaDat.winSpeSel.datSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta161 = stringAppend(MMC_REFSTRINGLIT(tmp159),tmp160);
      {
        const char* assert_cond = "(weaDat.winSpeSel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.winSpeSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta161));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta161));
        }
      }
      tmp162 = 1;
    }
  }
  threadData->lastEquationSolved = 2404;
}

/*
equation index: 2405
type: ALGORITHM

  assert(weaDat.totSkyCov >= 0.0 and weaDat.totSkyCov <= 1.0, "Variable violating min/max constraint: 0.0 <= weaDat.totSkyCov <= 1.0, has value: " + String(weaDat.totSkyCov, "g"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2405(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2405};
  modelica_boolean tmp163;
  modelica_boolean tmp164;
  static const MMC_DEFSTRINGLIT(tmp165,82,"Variable violating min/max constraint: 0.0 <= weaDat.totSkyCov <= 1.0, has value: ");
  modelica_string tmp166;
  modelica_metatype tmpMeta167;
  static int tmp168 = 0;
  if(!tmp168)
  {
    tmp163 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1325]] /* weaDat.totSkyCov PARAM */),0.0);
    tmp164 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1325]] /* weaDat.totSkyCov PARAM */),1.0);
    if(!(tmp163 && tmp164))
    {
      tmp166 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1325]] /* weaDat.totSkyCov PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta167 = stringAppend(MMC_REFSTRINGLIT(tmp165),tmp166);
      {
        const char* assert_cond = "(weaDat.totSkyCov >= 0.0 and weaDat.totSkyCov <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",188,3,193,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta167));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",188,3,193,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta167));
        }
      }
      tmp168 = 1;
    }
  }
  threadData->lastEquationSolved = 2405;
}

/*
equation index: 2406
type: ALGORITHM

  assert(weaDat.totSkyCovSel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.totSkyCovSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.totSkyCovSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.totSkyCovSel.datSou, "d"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2406(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2406};
  modelica_boolean tmp169;
  modelica_boolean tmp170;
  static const MMC_DEFSTRINGLIT(tmp171,187,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.totSkyCovSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp172;
  modelica_metatype tmpMeta173;
  static int tmp174 = 0;
  if(!tmp174)
  {
    tmp169 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[377]] /* weaDat.totSkyCovSel.datSou PARAM */),1);
    tmp170 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[377]] /* weaDat.totSkyCovSel.datSou PARAM */),3);
    if(!(tmp169 && tmp170))
    {
      tmp172 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[377]] /* weaDat.totSkyCovSel.datSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta173 = stringAppend(MMC_REFSTRINGLIT(tmp171),tmp172);
      {
        const char* assert_cond = "(weaDat.totSkyCovSel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.totSkyCovSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta173));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta173));
        }
      }
      tmp174 = 1;
    }
  }
  threadData->lastEquationSolved = 2406;
}

/*
equation index: 2407
type: ALGORITHM

  assert(weaDat.ceiHeiSel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.ceiHeiSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.ceiHeiSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.ceiHeiSel.datSou, "d"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2407(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2407};
  modelica_boolean tmp175;
  modelica_boolean tmp176;
  static const MMC_DEFSTRINGLIT(tmp177,184,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.ceiHeiSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp178;
  modelica_metatype tmpMeta179;
  static int tmp180 = 0;
  if(!tmp180)
  {
    tmp175 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[332]] /* weaDat.ceiHeiSel.datSou PARAM */),1);
    tmp176 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[332]] /* weaDat.ceiHeiSel.datSou PARAM */),3);
    if(!(tmp175 && tmp176))
    {
      tmp178 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[332]] /* weaDat.ceiHeiSel.datSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta179 = stringAppend(MMC_REFSTRINGLIT(tmp177),tmp178);
      {
        const char* assert_cond = "(weaDat.ceiHeiSel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.ceiHeiSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta179));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta179));
        }
      }
      tmp180 = 1;
    }
  }
  threadData->lastEquationSolved = 2407;
}

/*
equation index: 2408
type: ALGORITHM

  assert(weaDat.opaSkyCov >= 0.0 and weaDat.opaSkyCov <= 1.0, "Variable violating min/max constraint: 0.0 <= weaDat.opaSkyCov <= 1.0, has value: " + String(weaDat.opaSkyCov, "g"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2408(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2408};
  modelica_boolean tmp181;
  modelica_boolean tmp182;
  static const MMC_DEFSTRINGLIT(tmp183,82,"Variable violating min/max constraint: 0.0 <= weaDat.opaSkyCov <= 1.0, has value: ");
  modelica_string tmp184;
  modelica_metatype tmpMeta185;
  static int tmp186 = 0;
  if(!tmp186)
  {
    tmp181 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1316]] /* weaDat.opaSkyCov PARAM */),0.0);
    tmp182 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1316]] /* weaDat.opaSkyCov PARAM */),1.0);
    if(!(tmp181 && tmp182))
    {
      tmp184 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1316]] /* weaDat.opaSkyCov PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta185 = stringAppend(MMC_REFSTRINGLIT(tmp183),tmp184);
      {
        const char* assert_cond = "(weaDat.opaSkyCov >= 0.0 and weaDat.opaSkyCov <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",204,3,209,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta185));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",204,3,209,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta185));
        }
      }
      tmp186 = 1;
    }
  }
  threadData->lastEquationSolved = 2408;
}

/*
equation index: 2409
type: ALGORITHM

  assert(weaDat.opaSkyCovSel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.opaSkyCovSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.opaSkyCovSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.opaSkyCovSel.datSou, "d"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2409(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2409};
  modelica_boolean tmp187;
  modelica_boolean tmp188;
  static const MMC_DEFSTRINGLIT(tmp189,187,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.opaSkyCovSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp190;
  modelica_metatype tmpMeta191;
  static int tmp192 = 0;
  if(!tmp192)
  {
    tmp187 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[370]] /* weaDat.opaSkyCovSel.datSou PARAM */),1);
    tmp188 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[370]] /* weaDat.opaSkyCovSel.datSou PARAM */),3);
    if(!(tmp187 && tmp188))
    {
      tmp190 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[370]] /* weaDat.opaSkyCovSel.datSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta191 = stringAppend(MMC_REFSTRINGLIT(tmp189),tmp190);
      {
        const char* assert_cond = "(weaDat.opaSkyCovSel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.opaSkyCovSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta191));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta191));
        }
      }
      tmp192 = 1;
    }
  }
  threadData->lastEquationSolved = 2409;
}

/*
equation index: 2410
type: ALGORITHM

  assert(weaDat.relHum >= 0.0 and weaDat.relHum <= 1.0, "Variable violating min/max constraint: 0.0 <= weaDat.relHum <= 1.0, has value: " + String(weaDat.relHum, "g"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2410(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2410};
  modelica_boolean tmp193;
  modelica_boolean tmp194;
  static const MMC_DEFSTRINGLIT(tmp195,79,"Variable violating min/max constraint: 0.0 <= weaDat.relHum <= 1.0, has value: ");
  modelica_string tmp196;
  modelica_metatype tmpMeta197;
  static int tmp198 = 0;
  if(!tmp198)
  {
    tmp193 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1320]] /* weaDat.relHum PARAM */),0.0);
    tmp194 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1320]] /* weaDat.relHum PARAM */),1.0);
    if(!(tmp193 && tmp194))
    {
      tmp196 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1320]] /* weaDat.relHum PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta197 = stringAppend(MMC_REFSTRINGLIT(tmp195),tmp196);
      {
        const char* assert_cond = "(weaDat.relHum >= 0.0 and weaDat.relHum <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",81,3,85,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta197));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",81,3,85,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta197));
        }
      }
      tmp198 = 1;
    }
  }
  threadData->lastEquationSolved = 2410;
}

/*
equation index: 2411
type: ALGORITHM

  assert(weaDat.relHumSel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.relHumSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.relHumSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.relHumSel.datSou, "d"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2411(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2411};
  modelica_boolean tmp199;
  modelica_boolean tmp200;
  static const MMC_DEFSTRINGLIT(tmp201,184,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.relHumSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp202;
  modelica_metatype tmpMeta203;
  static int tmp204 = 0;
  if(!tmp204)
  {
    tmp199 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[374]] /* weaDat.relHumSel.datSou PARAM */),1);
    tmp200 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[374]] /* weaDat.relHumSel.datSou PARAM */),3);
    if(!(tmp199 && tmp200))
    {
      tmp202 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[374]] /* weaDat.relHumSel.datSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta203 = stringAppend(MMC_REFSTRINGLIT(tmp201),tmp202);
      {
        const char* assert_cond = "(weaDat.relHumSel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.relHumSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta203));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta203));
        }
      }
      tmp204 = 1;
    }
  }
  threadData->lastEquationSolved = 2411;
}

/*
equation index: 2412
type: ALGORITHM

  assert(weaDat.TBlaSky >= 0.0, "Variable violating min constraint: 0.0 <= weaDat.TBlaSky, has value: " + String(weaDat.TBlaSky, "g"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2412(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2412};
  modelica_boolean tmp205;
  static const MMC_DEFSTRINGLIT(tmp206,69,"Variable violating min constraint: 0.0 <= weaDat.TBlaSky, has value: ");
  modelica_string tmp207;
  modelica_metatype tmpMeta208;
  static int tmp209 = 0;
  if(!tmp209)
  {
    tmp205 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1276]] /* weaDat.TBlaSky PARAM */),0.0);
    if(!tmp205)
    {
      tmp207 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1276]] /* weaDat.TBlaSky PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta208 = stringAppend(MMC_REFSTRINGLIT(tmp206),tmp207);
      {
        const char* assert_cond = "(weaDat.TBlaSky >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",66,3,68,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta208));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",66,3,68,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta208));
        }
      }
      tmp209 = 1;
    }
  }
  threadData->lastEquationSolved = 2412;
}

/*
equation index: 2413
type: ALGORITHM

  assert(weaDat.TBlaSkySel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.TBlaSkySel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.TBlaSkySel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.TBlaSkySel.datSou, "d"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2413(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2413};
  modelica_boolean tmp210;
  modelica_boolean tmp211;
  static const MMC_DEFSTRINGLIT(tmp212,185,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.TBlaSkySel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp213;
  modelica_metatype tmpMeta214;
  static int tmp215 = 0;
  if(!tmp215)
  {
    tmp210 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[325]] /* weaDat.TBlaSkySel.datSou PARAM */),1);
    tmp211 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[325]] /* weaDat.TBlaSkySel.datSou PARAM */),3);
    if(!(tmp210 && tmp211))
    {
      tmp213 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[325]] /* weaDat.TBlaSkySel.datSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta214 = stringAppend(MMC_REFSTRINGLIT(tmp212),tmp213);
      {
        const char* assert_cond = "(weaDat.TBlaSkySel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.TBlaSkySel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta214));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta214));
        }
      }
      tmp215 = 1;
    }
  }
  threadData->lastEquationSolved = 2413;
}

/*
equation index: 2414
type: ALGORITHM

  assert(weaDat.TDryBul >= 0.0, "Variable violating min constraint: 0.0 <= weaDat.TDryBul, has value: " + String(weaDat.TDryBul, "g"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2414(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2414};
  modelica_boolean tmp216;
  static const MMC_DEFSTRINGLIT(tmp217,69,"Variable violating min constraint: 0.0 <= weaDat.TDryBul, has value: ");
  modelica_string tmp218;
  modelica_metatype tmpMeta219;
  static int tmp220 = 0;
  if(!tmp220)
  {
    tmp216 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1280]] /* weaDat.TDryBul PARAM */),0.0);
    if(!tmp216)
    {
      tmp218 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1280]] /* weaDat.TDryBul PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta219 = stringAppend(MMC_REFSTRINGLIT(tmp217),tmp218);
      {
        const char* assert_cond = "(weaDat.TDryBul >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",37,3,39,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta219));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",37,3,39,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta219));
        }
      }
      tmp220 = 1;
    }
  }
  threadData->lastEquationSolved = 2414;
}

/*
equation index: 2415
type: ALGORITHM

  assert(weaDat.TDryBulSel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.TDryBulSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.TDryBulSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.TDryBulSel.datSou, "d"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2415(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2415};
  modelica_boolean tmp221;
  modelica_boolean tmp222;
  static const MMC_DEFSTRINGLIT(tmp223,185,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.TDryBulSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp224;
  modelica_metatype tmpMeta225;
  static int tmp226 = 0;
  if(!tmp226)
  {
    tmp221 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[329]] /* weaDat.TDryBulSel.datSou PARAM */),1);
    tmp222 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[329]] /* weaDat.TDryBulSel.datSou PARAM */),3);
    if(!(tmp221 && tmp222))
    {
      tmp224 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[329]] /* weaDat.TDryBulSel.datSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta225 = stringAppend(MMC_REFSTRINGLIT(tmp223),tmp224);
      {
        const char* assert_cond = "(weaDat.TDryBulSel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.TDryBulSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta225));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta225));
        }
      }
      tmp226 = 1;
    }
  }
  threadData->lastEquationSolved = 2415;
}

/*
equation index: 2416
type: ALGORITHM

  assert(weaDat.TDewPoi >= 0.0, "Variable violating min constraint: 0.0 <= weaDat.TDewPoi, has value: " + String(weaDat.TDewPoi, "g"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2416(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2416};
  modelica_boolean tmp227;
  static const MMC_DEFSTRINGLIT(tmp228,69,"Variable violating min constraint: 0.0 <= weaDat.TDewPoi, has value: ");
  modelica_string tmp229;
  modelica_metatype tmpMeta230;
  static int tmp231 = 0;
  if(!tmp231)
  {
    tmp227 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1278]] /* weaDat.TDewPoi PARAM */),0.0);
    if(!tmp227)
    {
      tmp229 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1278]] /* weaDat.TDewPoi PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta230 = stringAppend(MMC_REFSTRINGLIT(tmp228),tmp229);
      {
        const char* assert_cond = "(weaDat.TDewPoi >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",52,3,54,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta230));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",52,3,54,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta230));
        }
      }
      tmp231 = 1;
    }
  }
  threadData->lastEquationSolved = 2416;
}

/*
equation index: 2417
type: ALGORITHM

  assert(weaDat.TDewPoiSel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.TDewPoiSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.TDewPoiSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.TDewPoiSel.datSou, "d"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2417(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2417};
  modelica_boolean tmp232;
  modelica_boolean tmp233;
  static const MMC_DEFSTRINGLIT(tmp234,185,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.TDewPoiSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp235;
  modelica_metatype tmpMeta236;
  static int tmp237 = 0;
  if(!tmp237)
  {
    tmp232 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[327]] /* weaDat.TDewPoiSel.datSou PARAM */),1);
    tmp233 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[327]] /* weaDat.TDewPoiSel.datSou PARAM */),3);
    if(!(tmp232 && tmp233))
    {
      tmp235 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[327]] /* weaDat.TDewPoiSel.datSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta236 = stringAppend(MMC_REFSTRINGLIT(tmp234),tmp235);
      {
        const char* assert_cond = "(weaDat.TDewPoiSel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.TDewPoiSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta236));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta236));
        }
      }
      tmp237 = 1;
    }
  }
  threadData->lastEquationSolved = 2417;
}

/*
equation index: 2418
type: ALGORITHM

  assert(weaDat.pAtmSel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.pAtmSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.pAtmSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.pAtmSel.datSou, "d"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2418(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2418};
  modelica_boolean tmp238;
  modelica_boolean tmp239;
  static const MMC_DEFSTRINGLIT(tmp240,182,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.pAtmSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp241;
  modelica_metatype tmpMeta242;
  static int tmp243 = 0;
  if(!tmp243)
  {
    tmp238 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[372]] /* weaDat.pAtmSel.datSou PARAM */),1);
    tmp239 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[372]] /* weaDat.pAtmSel.datSou PARAM */),3);
    if(!(tmp238 && tmp239))
    {
      tmp241 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[372]] /* weaDat.pAtmSel.datSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta242 = stringAppend(MMC_REFSTRINGLIT(tmp240),tmp241);
      {
        const char* assert_cond = "(weaDat.pAtmSel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.pAtmSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta242));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta242));
        }
      }
      tmp243 = 1;
    }
  }
  threadData->lastEquationSolved = 2418;
}

/*
equation index: 2419
type: ALGORITHM

  assert(weaDat.datRea.extrapolation >= Modelica.Blocks.Types.Extrapolation.HoldLastPoint and weaDat.datRea.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation, "Variable violating min/max constraint: Modelica.Blocks.Types.Extrapolation.HoldLastPoint <= weaDat.datRea.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation, has value: " + String(weaDat.datRea.extrapolation, "d"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2419(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2419};
  modelica_boolean tmp244;
  modelica_boolean tmp245;
  static const MMC_DEFSTRINGLIT(tmp246,187,"Variable violating min/max constraint: Modelica.Blocks.Types.Extrapolation.HoldLastPoint <= weaDat.datRea.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation, has value: ");
  modelica_string tmp247;
  modelica_metatype tmpMeta248;
  static int tmp249 = 0;
  if(!tmp249)
  {
    tmp244 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[360]] /* weaDat.datRea.extrapolation PARAM */),1);
    tmp245 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[360]] /* weaDat.datRea.extrapolation PARAM */),4);
    if(!(tmp244 && tmp245))
    {
      tmp247 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[360]] /* weaDat.datRea.extrapolation PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta248 = stringAppend(MMC_REFSTRINGLIT(tmp246),tmp247);
      {
        const char* assert_cond = "(weaDat.datRea.extrapolation >= Modelica.Blocks.Types.Extrapolation.HoldLastPoint and weaDat.datRea.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/cfd/.openmodelica/libraries/Modelica 4.0.0+maint.om/Blocks/Tables.mo",32,5,34,61,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta248));
        } else {
          FILE_INFO info = {"/home/cfd/.openmodelica/libraries/Modelica 4.0.0+maint.om/Blocks/Tables.mo",32,5,34,61,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta248));
        }
      }
      tmp249 = 1;
    }
  }
  threadData->lastEquationSolved = 2419;
}

/*
equation index: 2420
type: ALGORITHM

  assert(weaDat.datRea.smoothness >= Modelica.Blocks.Types.Smoothness.LinearSegments and weaDat.datRea.smoothness <= Modelica.Blocks.Types.Smoothness.ModifiedContinuousDerivative, "Variable violating min/max constraint: Modelica.Blocks.Types.Smoothness.LinearSegments <= weaDat.datRea.smoothness <= Modelica.Blocks.Types.Smoothness.ModifiedContinuousDerivative, has value: " + String(weaDat.datRea.smoothness, "d"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2420(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2420};
  modelica_boolean tmp250;
  modelica_boolean tmp251;
  static const MMC_DEFSTRINGLIT(tmp252,192,"Variable violating min/max constraint: Modelica.Blocks.Types.Smoothness.LinearSegments <= weaDat.datRea.smoothness <= Modelica.Blocks.Types.Smoothness.ModifiedContinuousDerivative, has value: ");
  modelica_string tmp253;
  modelica_metatype tmpMeta254;
  static int tmp255 = 0;
  if(!tmp255)
  {
    tmp250 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[362]] /* weaDat.datRea.smoothness PARAM */),1);
    tmp251 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[362]] /* weaDat.datRea.smoothness PARAM */),6);
    if(!(tmp250 && tmp251))
    {
      tmp253 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[362]] /* weaDat.datRea.smoothness PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta254 = stringAppend(MMC_REFSTRINGLIT(tmp252),tmp253);
      {
        const char* assert_cond = "(weaDat.datRea.smoothness >= Modelica.Blocks.Types.Smoothness.LinearSegments and weaDat.datRea.smoothness <= Modelica.Blocks.Types.Smoothness.ModifiedContinuousDerivative)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/cfd/.openmodelica/libraries/Modelica 4.0.0+maint.om/Blocks/Tables.mo",29,5,31,61,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta254));
        } else {
          FILE_INFO info = {"/home/cfd/.openmodelica/libraries/Modelica 4.0.0+maint.om/Blocks/Tables.mo",29,5,31,61,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta254));
        }
      }
      tmp255 = 1;
    }
  }
  threadData->lastEquationSolved = 2420;
}

/*
equation index: 2421
type: ALGORITHM

  assert(weaDat.calTSky >= Buildings.BoundaryConditions.Types.SkyTemperatureCalculation.HorizontalRadiation and weaDat.calTSky <= Buildings.BoundaryConditions.Types.SkyTemperatureCalculation.TemperaturesAndSkyCover, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.SkyTemperatureCalculation.HorizontalRadiation <= weaDat.calTSky <= Buildings.BoundaryConditions.Types.SkyTemperatureCalculation.TemperaturesAndSkyCover, has value: " + String(weaDat.calTSky, "d"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2421(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2421};
  modelica_boolean tmp256;
  modelica_boolean tmp257;
  static const MMC_DEFSTRINGLIT(tmp258,238,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.SkyTemperatureCalculation.HorizontalRadiation <= weaDat.calTSky <= Buildings.BoundaryConditions.Types.SkyTemperatureCalculation.TemperaturesAndSkyCover, has value: ");
  modelica_string tmp259;
  modelica_metatype tmpMeta260;
  static int tmp261 = 0;
  if(!tmp261)
  {
    tmp256 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[331]] /* weaDat.calTSky PARAM */),1);
    tmp257 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[331]] /* weaDat.calTSky PARAM */),2);
    if(!(tmp256 && tmp257))
    {
      tmp259 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[331]] /* weaDat.calTSky PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta260 = stringAppend(MMC_REFSTRINGLIT(tmp258),tmp259);
      {
        const char* assert_cond = "(weaDat.calTSky >= Buildings.BoundaryConditions.Types.SkyTemperatureCalculation.HorizontalRadiation and weaDat.calTSky <= Buildings.BoundaryConditions.Types.SkyTemperatureCalculation.TemperaturesAndSkyCover)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",218,3,223,53,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta260));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",218,3,223,53,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta260));
        }
      }
      tmp261 = 1;
    }
  }
  threadData->lastEquationSolved = 2421;
}

/*
equation index: 2422
type: ALGORITHM

  assert(weaDat.opaSkyCovSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.opaSkyCovSou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.opaSkyCovSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.opaSkyCovSou, "d"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2422(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2422};
  modelica_boolean tmp262;
  modelica_boolean tmp263;
  static const MMC_DEFSTRINGLIT(tmp264,180,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.opaSkyCovSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp265;
  modelica_metatype tmpMeta266;
  static int tmp267 = 0;
  if(!tmp267)
  {
    tmp262 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[371]] /* weaDat.opaSkyCovSou PARAM */),1);
    tmp263 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[371]] /* weaDat.opaSkyCovSou PARAM */),3);
    if(!(tmp262 && tmp263))
    {
      tmp265 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[371]] /* weaDat.opaSkyCovSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta266 = stringAppend(MMC_REFSTRINGLIT(tmp264),tmp265);
      {
        const char* assert_cond = "(weaDat.opaSkyCovSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.opaSkyCovSou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",202,3,203,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta266));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",202,3,203,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta266));
        }
      }
      tmp267 = 1;
    }
  }
  threadData->lastEquationSolved = 2422;
}

/*
equation index: 2423
type: ALGORITHM

  assert(weaDat.totSkyCovSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.totSkyCovSou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.totSkyCovSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.totSkyCovSou, "d"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2423(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2423};
  modelica_boolean tmp268;
  modelica_boolean tmp269;
  static const MMC_DEFSTRINGLIT(tmp270,180,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.totSkyCovSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp271;
  modelica_metatype tmpMeta272;
  static int tmp273 = 0;
  if(!tmp273)
  {
    tmp268 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[378]] /* weaDat.totSkyCovSou PARAM */),1);
    tmp269 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[378]] /* weaDat.totSkyCovSou PARAM */),3);
    if(!(tmp268 && tmp269))
    {
      tmp271 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[378]] /* weaDat.totSkyCovSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta272 = stringAppend(MMC_REFSTRINGLIT(tmp270),tmp271);
      {
        const char* assert_cond = "(weaDat.totSkyCovSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.totSkyCovSou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",186,3,187,93,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta272));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",186,3,187,93,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta272));
        }
      }
      tmp273 = 1;
    }
  }
  threadData->lastEquationSolved = 2423;
}

/*
equation index: 2424
type: ALGORITHM

  assert(weaDat.ceiHeiSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.ceiHeiSou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.ceiHeiSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.ceiHeiSou, "d"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2424(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2424};
  modelica_boolean tmp274;
  modelica_boolean tmp275;
  static const MMC_DEFSTRINGLIT(tmp276,177,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.ceiHeiSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp277;
  modelica_metatype tmpMeta278;
  static int tmp279 = 0;
  if(!tmp279)
  {
    tmp274 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[333]] /* weaDat.ceiHeiSou PARAM */),1);
    tmp275 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[333]] /* weaDat.ceiHeiSou PARAM */),3);
    if(!(tmp274 && tmp275))
    {
      tmp277 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[333]] /* weaDat.ceiHeiSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta278 = stringAppend(MMC_REFSTRINGLIT(tmp276),tmp277);
      {
        const char* assert_cond = "(weaDat.ceiHeiSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.ceiHeiSou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",170,3,171,92,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta278));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",170,3,171,92,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta278));
        }
      }
      tmp279 = 1;
    }
  }
  threadData->lastEquationSolved = 2424;
}

/*
equation index: 2425
type: ALGORITHM

  assert(weaDat.HSou >= Buildings.BoundaryConditions.Types.RadiationDataSource.File and weaDat.HSou <= Buildings.BoundaryConditions.Types.RadiationDataSource.Input_HDirNor_HGloHor, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.RadiationDataSource.File <= weaDat.HSou <= Buildings.BoundaryConditions.Types.RadiationDataSource.Input_HDirNor_HGloHor, has value: " + String(weaDat.HSou, "d"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2425(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2425};
  modelica_boolean tmp280;
  modelica_boolean tmp281;
  static const MMC_DEFSTRINGLIT(tmp282,206,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.RadiationDataSource.File <= weaDat.HSou <= Buildings.BoundaryConditions.Types.RadiationDataSource.Input_HDirNor_HGloHor, has value: ");
  modelica_string tmp283;
  modelica_metatype tmpMeta284;
  static int tmp285 = 0;
  if(!tmp285)
  {
    tmp280 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[323]] /* weaDat.HSou PARAM */),1);
    tmp281 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[323]] /* weaDat.HSou PARAM */),4);
    if(!(tmp280 && tmp281))
    {
      tmp283 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[323]] /* weaDat.HSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta284 = stringAppend(MMC_REFSTRINGLIT(tmp282),tmp283);
      {
        const char* assert_cond = "(weaDat.HSou >= Buildings.BoundaryConditions.Types.RadiationDataSource.File and weaDat.HSou <= Buildings.BoundaryConditions.Types.RadiationDataSource.Input_HDirNor_HGloHor)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",135,4,137,76,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta284));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",135,4,137,76,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta284));
        }
      }
      tmp285 = 1;
    }
  }
  threadData->lastEquationSolved = 2425;
}

/*
equation index: 2426
type: ALGORITHM

  assert(weaDat.HInfHorSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.HInfHorSou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.HInfHorSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.HInfHorSou, "d"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2426(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2426};
  modelica_boolean tmp286;
  modelica_boolean tmp287;
  static const MMC_DEFSTRINGLIT(tmp288,178,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.HInfHorSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp289;
  modelica_metatype tmpMeta290;
  static int tmp291 = 0;
  if(!tmp291)
  {
    tmp286 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[322]] /* weaDat.HInfHorSou PARAM */),1);
    tmp287 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[322]] /* weaDat.HInfHorSou PARAM */),3);
    if(!(tmp286 && tmp287))
    {
      tmp289 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[322]] /* weaDat.HInfHorSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta290 = stringAppend(MMC_REFSTRINGLIT(tmp288),tmp289);
      {
        const char* assert_cond = "(weaDat.HInfHorSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.HInfHorSou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",123,3,124,107,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta290));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",123,3,124,107,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta290));
        }
      }
      tmp291 = 1;
    }
  }
  threadData->lastEquationSolved = 2426;
}

/*
equation index: 2427
type: ALGORITHM

  assert(weaDat.winDirSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.winDirSou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.winDirSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.winDirSou, "d"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2427(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2427};
  modelica_boolean tmp292;
  modelica_boolean tmp293;
  static const MMC_DEFSTRINGLIT(tmp294,177,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.winDirSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp295;
  modelica_metatype tmpMeta296;
  static int tmp297 = 0;
  if(!tmp297)
  {
    tmp292 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[380]] /* weaDat.winDirSou PARAM */),1);
    tmp293 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[380]] /* weaDat.winDirSou PARAM */),3);
    if(!(tmp292 && tmp293))
    {
      tmp295 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[380]] /* weaDat.winDirSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta296 = stringAppend(MMC_REFSTRINGLIT(tmp294),tmp295);
      {
        const char* assert_cond = "(weaDat.winDirSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.winDirSou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",109,3,110,92,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta296));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",109,3,110,92,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta296));
        }
      }
      tmp297 = 1;
    }
  }
  threadData->lastEquationSolved = 2427;
}

/*
equation index: 2428
type: ALGORITHM

  assert(weaDat.winSpeSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.winSpeSou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.winSpeSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.winSpeSou, "d"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2428(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2428};
  modelica_boolean tmp298;
  modelica_boolean tmp299;
  static const MMC_DEFSTRINGLIT(tmp300,177,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.winSpeSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp301;
  modelica_metatype tmpMeta302;
  static int tmp303 = 0;
  if(!tmp303)
  {
    tmp298 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[382]] /* weaDat.winSpeSou PARAM */),1);
    tmp299 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[382]] /* weaDat.winSpeSou PARAM */),3);
    if(!(tmp298 && tmp299))
    {
      tmp301 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[382]] /* weaDat.winSpeSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta302 = stringAppend(MMC_REFSTRINGLIT(tmp300),tmp301);
      {
        const char* assert_cond = "(weaDat.winSpeSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.winSpeSou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",95,3,96,88,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta302));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",95,3,96,88,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta302));
        }
      }
      tmp303 = 1;
    }
  }
  threadData->lastEquationSolved = 2428;
}

/*
equation index: 2429
type: ALGORITHM

  assert(weaDat.relHumSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.relHumSou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.relHumSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.relHumSou, "d"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2429(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2429};
  modelica_boolean tmp304;
  modelica_boolean tmp305;
  static const MMC_DEFSTRINGLIT(tmp306,177,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.relHumSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp307;
  modelica_metatype tmpMeta308;
  static int tmp309 = 0;
  if(!tmp309)
  {
    tmp304 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[375]] /* weaDat.relHumSou PARAM */),1);
    tmp305 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[375]] /* weaDat.relHumSou PARAM */),3);
    if(!(tmp304 && tmp305))
    {
      tmp307 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[375]] /* weaDat.relHumSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta308 = stringAppend(MMC_REFSTRINGLIT(tmp306),tmp307);
      {
        const char* assert_cond = "(weaDat.relHumSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.relHumSou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",79,3,80,95,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta308));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",79,3,80,95,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta308));
        }
      }
      tmp309 = 1;
    }
  }
  threadData->lastEquationSolved = 2429;
}

/*
equation index: 2430
type: ALGORITHM

  assert(weaDat.TBlaSkySou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.TBlaSkySou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.TBlaSkySou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.TBlaSkySou, "d"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2430(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2430};
  modelica_boolean tmp310;
  modelica_boolean tmp311;
  static const MMC_DEFSTRINGLIT(tmp312,178,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.TBlaSkySou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp313;
  modelica_metatype tmpMeta314;
  static int tmp315 = 0;
  if(!tmp315)
  {
    tmp310 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[326]] /* weaDat.TBlaSkySou PARAM */),1);
    tmp311 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[326]] /* weaDat.TBlaSkySou PARAM */),3);
    if(!(tmp310 && tmp311))
    {
      tmp313 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[326]] /* weaDat.TBlaSkySou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta314 = stringAppend(MMC_REFSTRINGLIT(tmp312),tmp313);
      {
        const char* assert_cond = "(weaDat.TBlaSkySou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.TBlaSkySou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",64,3,65,104,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta314));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",64,3,65,104,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta314));
        }
      }
      tmp315 = 1;
    }
  }
  threadData->lastEquationSolved = 2430;
}

/*
equation index: 2431
type: ALGORITHM

  assert(weaDat.TDewPoiSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.TDewPoiSou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.TDewPoiSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.TDewPoiSou, "d"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2431(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2431};
  modelica_boolean tmp316;
  modelica_boolean tmp317;
  static const MMC_DEFSTRINGLIT(tmp318,178,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.TDewPoiSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp319;
  modelica_metatype tmpMeta320;
  static int tmp321 = 0;
  if(!tmp321)
  {
    tmp316 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[328]] /* weaDat.TDewPoiSou PARAM */),1);
    tmp317 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[328]] /* weaDat.TDewPoiSou PARAM */),3);
    if(!(tmp316 && tmp317))
    {
      tmp319 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[328]] /* weaDat.TDewPoiSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta320 = stringAppend(MMC_REFSTRINGLIT(tmp318),tmp319);
      {
        const char* assert_cond = "(weaDat.TDewPoiSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.TDewPoiSou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",49,3,51,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta320));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",49,3,51,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta320));
        }
      }
      tmp321 = 1;
    }
  }
  threadData->lastEquationSolved = 2431;
}

/*
equation index: 2432
type: ALGORITHM

  assert(weaDat.TDryBulSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.TDryBulSou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.TDryBulSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.TDryBulSou, "d"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2432(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2432};
  modelica_boolean tmp322;
  modelica_boolean tmp323;
  static const MMC_DEFSTRINGLIT(tmp324,178,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.TDryBulSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp325;
  modelica_metatype tmpMeta326;
  static int tmp327 = 0;
  if(!tmp327)
  {
    tmp322 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[330]] /* weaDat.TDryBulSou PARAM */),1);
    tmp323 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[330]] /* weaDat.TDryBulSou PARAM */),3);
    if(!(tmp322 && tmp323))
    {
      tmp325 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[330]] /* weaDat.TDryBulSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta326 = stringAppend(MMC_REFSTRINGLIT(tmp324),tmp325);
      {
        const char* assert_cond = "(weaDat.TDryBulSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.TDryBulSou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",34,3,36,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta326));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",34,3,36,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta326));
        }
      }
      tmp327 = 1;
    }
  }
  threadData->lastEquationSolved = 2432;
}

/*
equation index: 2433
type: ALGORITHM

  assert(weaDat.pAtmSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.pAtmSou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.pAtmSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.pAtmSou, "d"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2433(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2433};
  modelica_boolean tmp328;
  modelica_boolean tmp329;
  static const MMC_DEFSTRINGLIT(tmp330,175,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.pAtmSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp331;
  modelica_metatype tmpMeta332;
  static int tmp333 = 0;
  if(!tmp333)
  {
    tmp328 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[373]] /* weaDat.pAtmSou PARAM */),1);
    tmp329 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[373]] /* weaDat.pAtmSou PARAM */),3);
    if(!(tmp328 && tmp329))
    {
      tmp331 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[373]] /* weaDat.pAtmSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta332 = stringAppend(MMC_REFSTRINGLIT(tmp330),tmp331);
      {
        const char* assert_cond = "(weaDat.pAtmSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.pAtmSou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",18,3,20,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta332));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",18,3,20,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta332));
        }
      }
      tmp333 = 1;
    }
  }
  threadData->lastEquationSolved = 2433;
}

/*
equation index: 2434
type: ALGORITHM

  assert(roo.nSen >= 0, "Variable violating min constraint: 0 <= roo.nSen, has value: " + String(roo.nSen, "d"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2434(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2434};
  modelica_boolean tmp334;
  static const MMC_DEFSTRINGLIT(tmp335,61,"Variable violating min constraint: 0 <= roo.nSen, has value: ");
  modelica_string tmp336;
  modelica_metatype tmpMeta337;
  static int tmp338 = 0;
  if(!tmp338)
  {
    tmp334 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[266]] /* roo.nSen PARAM */),((modelica_integer) 0));
    if(!tmp334)
    {
      tmp336 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[266]] /* roo.nSen PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta337 = stringAppend(MMC_REFSTRINGLIT(tmp335),tmp336);
      {
        const char* assert_cond = "(roo.nSen >= 0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/CFD.mo",54,3,55,57,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta337));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/CFD.mo",54,3,55,57,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta337));
        }
      }
      tmp338 = 1;
    }
  }
  threadData->lastEquationSolved = 2434;
}

/*
equation index: 2435
type: ALGORITHM

  assert(roo.samplePeriod >= 1e-13, "Variable violating min constraint: 1e-13 <= roo.samplePeriod, has value: " + String(roo.samplePeriod, "g"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2435(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2435};
  modelica_boolean tmp339;
  static const MMC_DEFSTRINGLIT(tmp340,73,"Variable violating min constraint: 1e-13 <= roo.samplePeriod, has value: ");
  modelica_string tmp341;
  modelica_metatype tmpMeta342;
  static int tmp343 = 0;
  if(!tmp343)
  {
    tmp339 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1248]] /* roo.samplePeriod PARAM */),1e-13);
    if(!tmp339)
    {
      tmp341 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1248]] /* roo.samplePeriod PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta342 = stringAppend(MMC_REFSTRINGLIT(tmp340),tmp341);
      {
        const char* assert_cond = "(roo.samplePeriod >= 1e-13)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/CFD.mo",29,3,30,71,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta342));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/CFD.mo",29,3,30,71,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta342));
        }
      }
      tmp343 = 1;
    }
  }
  threadData->lastEquationSolved = 2435;
}

/*
equation index: 2436
type: ALGORITHM

  assert(roo.p_start >= 0.0 and roo.p_start <= 1e8, "Variable violating min/max constraint: 0.0 <= roo.p_start <= 1e8, has value: " + String(roo.p_start, "g"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2436(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2436};
  modelica_boolean tmp344;
  modelica_boolean tmp345;
  static const MMC_DEFSTRINGLIT(tmp346,77,"Variable violating min/max constraint: 0.0 <= roo.p_start <= 1e8, has value: ");
  modelica_string tmp347;
  modelica_metatype tmpMeta348;
  static int tmp349 = 0;
  if(!tmp349)
  {
    tmp344 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1008]] /* roo.p_start PARAM */),0.0);
    tmp345 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1008]] /* roo.p_start PARAM */),1e8);
    if(!(tmp344 && tmp345))
    {
      tmp347 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1008]] /* roo.p_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta348 = stringAppend(MMC_REFSTRINGLIT(tmp346),tmp347);
      {
        const char* assert_cond = "(roo.p_start >= 0.0 and roo.p_start <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/CFD.mo",22,3,24,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta348));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/CFD.mo",22,3,24,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta348));
        }
      }
      tmp349 = 1;
    }
  }
  threadData->lastEquationSolved = 2436;
}

/*
equation index: 2437
type: ALGORITHM

  assert(roo.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and roo.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= roo.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(roo.massDynamics, "d"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2437(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2437};
  modelica_boolean tmp350;
  modelica_boolean tmp351;
  static const MMC_DEFSTRINGLIT(tmp352,165,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= roo.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp353;
  modelica_metatype tmpMeta354;
  static int tmp355 = 0;
  if(!tmp355)
  {
    tmp350 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[260]] /* roo.massDynamics PARAM */),1);
    tmp351 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[260]] /* roo.massDynamics PARAM */),4);
    if(!(tmp350 && tmp351))
    {
      tmp353 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[260]] /* roo.massDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta354 = stringAppend(MMC_REFSTRINGLIT(tmp352),tmp353);
      {
        const char* assert_cond = "(roo.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and roo.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/CFD.mo",18,3,20,88,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta354));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/CFD.mo",18,3,20,88,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta354));
        }
      }
      tmp355 = 1;
    }
  }
  threadData->lastEquationSolved = 2437;
}

/*
equation index: 2438
type: ALGORITHM

  assert(roo.radTem.tauSha[1] >= 0.0 and roo.radTem.tauSha[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= roo.radTem.tauSha[1] <= 1.0, has value: " + String(roo.radTem.tauSha[1], "g"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2438(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2438};
  modelica_boolean tmp356;
  modelica_boolean tmp357;
  static const MMC_DEFSTRINGLIT(tmp358,86,"Variable violating min/max constraint: 0.0 <= roo.radTem.tauSha[1] <= 1.0, has value: ");
  modelica_string tmp359;
  modelica_metatype tmpMeta360;
  static int tmp361 = 0;
  if(!tmp361)
  {
    tmp356 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1247]] /* roo.radTem.tauSha[1] PARAM */),0.0);
    tmp357 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1247]] /* roo.radTem.tauSha[1] PARAM */),1.0);
    if(!(tmp356 && tmp357))
    {
      tmp359 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1247]] /* roo.radTem.tauSha[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta360 = stringAppend(MMC_REFSTRINGLIT(tmp358),tmp359);
      {
        const char* assert_cond = "(roo.radTem.tauSha[1] >= 0.0 and roo.radTem.tauSha[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/RadiationTemperature.mo",46,3,49,30,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta360));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/RadiationTemperature.mo",46,3,49,30,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta360));
        }
      }
      tmp361 = 1;
    }
  }
  threadData->lastEquationSolved = 2438;
}

/*
equation index: 2439
type: ALGORITHM

  assert(roo.radTem.epsSha[1] >= 0.0 and roo.radTem.epsSha[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= roo.radTem.epsSha[1] <= 1.0, has value: " + String(roo.radTem.epsSha[1], "g"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2439(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2439};
  modelica_boolean tmp362;
  modelica_boolean tmp363;
  static const MMC_DEFSTRINGLIT(tmp364,86,"Variable violating min/max constraint: 0.0 <= roo.radTem.epsSha[1] <= 1.0, has value: ");
  modelica_string tmp365;
  modelica_metatype tmpMeta366;
  static int tmp367 = 0;
  if(!tmp367)
  {
    tmp362 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1215]] /* roo.radTem.epsSha[1] PARAM */),0.0);
    tmp363 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1215]] /* roo.radTem.epsSha[1] PARAM */),1.0);
    if(!(tmp362 && tmp363))
    {
      tmp365 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1215]] /* roo.radTem.epsSha[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta366 = stringAppend(MMC_REFSTRINGLIT(tmp364),tmp365);
      {
        const char* assert_cond = "(roo.radTem.epsSha[1] >= 0.0 and roo.radTem.epsSha[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/RadiationTemperature.mo",43,3,45,28,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta366));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/RadiationTemperature.mo",43,3,45,28,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta366));
        }
      }
      tmp367 = 1;
    }
  }
  threadData->lastEquationSolved = 2439;
}

/*
equation index: 2440
type: ALGORITHM

  assert(roo.radTem.epsGla[1] >= 0.0 and roo.radTem.epsGla[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= roo.radTem.epsGla[1] <= 1.0, has value: " + String(roo.radTem.epsGla[1], "g"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2440(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2440};
  modelica_boolean tmp368;
  modelica_boolean tmp369;
  static const MMC_DEFSTRINGLIT(tmp370,86,"Variable violating min/max constraint: 0.0 <= roo.radTem.epsGla[1] <= 1.0, has value: ");
  modelica_string tmp371;
  modelica_metatype tmpMeta372;
  static int tmp373 = 0;
  if(!tmp373)
  {
    tmp368 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1214]] /* roo.radTem.epsGla[1] PARAM */),0.0);
    tmp369 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1214]] /* roo.radTem.epsGla[1] PARAM */),1.0);
    if(!(tmp368 && tmp369))
    {
      tmp371 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1214]] /* roo.radTem.epsGla[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta372 = stringAppend(MMC_REFSTRINGLIT(tmp370),tmp371);
      {
        const char* assert_cond = "(roo.radTem.epsGla[1] >= 0.0 and roo.radTem.epsGla[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/RadiationTemperature.mo",40,3,42,28,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta372));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/RadiationTemperature.mo",40,3,42,28,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta372));
        }
      }
      tmp373 = 1;
    }
  }
  threadData->lastEquationSolved = 2440;
}

/*
equation index: 2441
type: ALGORITHM

  assert(roo.datConExtWin[1].fFra >= 0.0 and roo.datConExtWin[1].fFra <= 1.0, "Variable violating min/max constraint: 0.0 <= roo.datConExtWin[1].fFra <= 1.0, has value: " + String(roo.datConExtWin[1].fFra, "g"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2441(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2441};
  modelica_boolean tmp374;
  modelica_boolean tmp375;
  static const MMC_DEFSTRINGLIT(tmp376,90,"Variable violating min/max constraint: 0.0 <= roo.datConExtWin[1].fFra <= 1.0, has value: ");
  modelica_string tmp377;
  modelica_metatype tmpMeta378;
  static int tmp379 = 0;
  if(!tmp379)
  {
    tmp374 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[355]] /* roo.datConExtWin[1].fFra PARAM */),0.0);
    tmp375 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[355]] /* roo.datConExtWin[1].fFra PARAM */),1.0);
    if(!(tmp374 && tmp375))
    {
      tmp377 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[355]] /* roo.datConExtWin[1].fFra PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta378 = stringAppend(MMC_REFSTRINGLIT(tmp376),tmp377);
      {
        const char* assert_cond = "(roo.datConExtWin[1].fFra >= 0.0 and roo.datConExtWin[1].fFra <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ParameterConstructionWithWindow.mo",19,3,22,48,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta378));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ParameterConstructionWithWindow.mo",19,3,22,48,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta378));
        }
      }
      tmp379 = 1;
    }
  }
  threadData->lastEquationSolved = 2441;
}

/*
equation index: 2442
type: ALGORITHM

  assert(roo.radTem.datConExtWin[1].fFra >= 0.0 and roo.radTem.datConExtWin[1].fFra <= 1.0, "Variable violating min/max constraint: 0.0 <= roo.radTem.datConExtWin[1].fFra <= 1.0, has value: " + String(roo.radTem.datConExtWin[1].fFra, "g"));
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_2442(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2442};
  modelica_boolean tmp380;
  modelica_boolean tmp381;
  static const MMC_DEFSTRINGLIT(tmp382,97,"Variable violating min/max constraint: 0.0 <= roo.radTem.datConExtWin[1].fFra <= 1.0, has value: ");
  modelica_string tmp383;
  modelica_metatype tmpMeta384;
  static int tmp385 = 0;
  if(!tmp385)
  {
    tmp380 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1072]] /* roo.radTem.datConExtWin[1].fFra PARAM */),0.0);
    tmp381 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1072]] /* roo.radTem.datConExtWin[1].fFra PARAM */),1.0);
    if(!(tmp380 && tmp381))
    {
      tmp383 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1072]] /* roo.radTem.datConExtWin[1].fFra PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta384 = stringAppend(MMC_REFSTRINGLIT(tmp382),tmp383);
      {
        const char* assert_cond = "(roo.radTem.datConExtWin[1].fFra >= 0.0 and roo.radTem.datConExtWin[1].fFra <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ParameterConstructionWithWindow.mo",19,3,22,48,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta384));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ParameterConstructionWithWindow.mo",19,3,22,48,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta384));
        }
      }
      tmp385 = 1;
    }
  }
  threadData->lastEquationSolved = 2442;
}
OMC_DISABLE_OPT
void ForcedConvection_30s_updateBoundParameters_1(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[468])(DATA*, threadData_t*) = {
    ForcedConvection_30s_eqFunction_1547,
    ForcedConvection_30s_eqFunction_1548,
    ForcedConvection_30s_eqFunction_1549,
    ForcedConvection_30s_eqFunction_1550,
    ForcedConvection_30s_eqFunction_1552,
    ForcedConvection_30s_eqFunction_1553,
    ForcedConvection_30s_eqFunction_1554,
    ForcedConvection_30s_eqFunction_1555,
    ForcedConvection_30s_eqFunction_1556,
    ForcedConvection_30s_eqFunction_1557,
    ForcedConvection_30s_eqFunction_1563,
    ForcedConvection_30s_eqFunction_1569,
    ForcedConvection_30s_eqFunction_1570,
    ForcedConvection_30s_eqFunction_1572,
    ForcedConvection_30s_eqFunction_1574,
    ForcedConvection_30s_eqFunction_1575,
    ForcedConvection_30s_eqFunction_1577,
    ForcedConvection_30s_eqFunction_1579,
    ForcedConvection_30s_eqFunction_1580,
    ForcedConvection_30s_eqFunction_1582,
    ForcedConvection_30s_eqFunction_1584,
    ForcedConvection_30s_eqFunction_1585,
    ForcedConvection_30s_eqFunction_1587,
    ForcedConvection_30s_eqFunction_1589,
    ForcedConvection_30s_eqFunction_1590,
    ForcedConvection_30s_eqFunction_1592,
    ForcedConvection_30s_eqFunction_1594,
    ForcedConvection_30s_eqFunction_1595,
    ForcedConvection_30s_eqFunction_1597,
    ForcedConvection_30s_eqFunction_1599,
    ForcedConvection_30s_eqFunction_1602,
    ForcedConvection_30s_eqFunction_1603,
    ForcedConvection_30s_eqFunction_1607,
    ForcedConvection_30s_eqFunction_1609,
    ForcedConvection_30s_eqFunction_1610,
    ForcedConvection_30s_eqFunction_1611,
    ForcedConvection_30s_eqFunction_1612,
    ForcedConvection_30s_eqFunction_1615,
    ForcedConvection_30s_eqFunction_1618,
    ForcedConvection_30s_eqFunction_1619,
    ForcedConvection_30s_eqFunction_1620,
    ForcedConvection_30s_eqFunction_1623,
    ForcedConvection_30s_eqFunction_1624,
    ForcedConvection_30s_eqFunction_1625,
    ForcedConvection_30s_eqFunction_1626,
    ForcedConvection_30s_eqFunction_1627,
    ForcedConvection_30s_eqFunction_1628,
    ForcedConvection_30s_eqFunction_1630,
    ForcedConvection_30s_eqFunction_1631,
    ForcedConvection_30s_eqFunction_1634,
    ForcedConvection_30s_eqFunction_1635,
    ForcedConvection_30s_eqFunction_1639,
    ForcedConvection_30s_eqFunction_1641,
    ForcedConvection_30s_eqFunction_1642,
    ForcedConvection_30s_eqFunction_1643,
    ForcedConvection_30s_eqFunction_1646,
    ForcedConvection_30s_eqFunction_1649,
    ForcedConvection_30s_eqFunction_1650,
    ForcedConvection_30s_eqFunction_1651,
    ForcedConvection_30s_eqFunction_1654,
    ForcedConvection_30s_eqFunction_1655,
    ForcedConvection_30s_eqFunction_1656,
    ForcedConvection_30s_eqFunction_1657,
    ForcedConvection_30s_eqFunction_1658,
    ForcedConvection_30s_eqFunction_1659,
    ForcedConvection_30s_eqFunction_1661,
    ForcedConvection_30s_eqFunction_1665,
    ForcedConvection_30s_eqFunction_1666,
    ForcedConvection_30s_eqFunction_1667,
    ForcedConvection_30s_eqFunction_1668,
    ForcedConvection_30s_eqFunction_1669,
    ForcedConvection_30s_eqFunction_1670,
    ForcedConvection_30s_eqFunction_1671,
    ForcedConvection_30s_eqFunction_1672,
    ForcedConvection_30s_eqFunction_1673,
    ForcedConvection_30s_eqFunction_1674,
    ForcedConvection_30s_eqFunction_1675,
    ForcedConvection_30s_eqFunction_1676,
    ForcedConvection_30s_eqFunction_1677,
    ForcedConvection_30s_eqFunction_1678,
    ForcedConvection_30s_eqFunction_1679,
    ForcedConvection_30s_eqFunction_1680,
    ForcedConvection_30s_eqFunction_1681,
    ForcedConvection_30s_eqFunction_1682,
    ForcedConvection_30s_eqFunction_1683,
    ForcedConvection_30s_eqFunction_1684,
    ForcedConvection_30s_eqFunction_1685,
    ForcedConvection_30s_eqFunction_1686,
    ForcedConvection_30s_eqFunction_1687,
    ForcedConvection_30s_eqFunction_1688,
    ForcedConvection_30s_eqFunction_1689,
    ForcedConvection_30s_eqFunction_1692,
    ForcedConvection_30s_eqFunction_1693,
    ForcedConvection_30s_eqFunction_1695,
    ForcedConvection_30s_eqFunction_1697,
    ForcedConvection_30s_eqFunction_1699,
    ForcedConvection_30s_eqFunction_1701,
    ForcedConvection_30s_eqFunction_1702,
    ForcedConvection_30s_eqFunction_1703,
    ForcedConvection_30s_eqFunction_1704,
    ForcedConvection_30s_eqFunction_1705,
    ForcedConvection_30s_eqFunction_1706,
    ForcedConvection_30s_eqFunction_1709,
    ForcedConvection_30s_eqFunction_1710,
    ForcedConvection_30s_eqFunction_1714,
    ForcedConvection_30s_eqFunction_1716,
    ForcedConvection_30s_eqFunction_1717,
    ForcedConvection_30s_eqFunction_1718,
    ForcedConvection_30s_eqFunction_1719,
    ForcedConvection_30s_eqFunction_1722,
    ForcedConvection_30s_eqFunction_1725,
    ForcedConvection_30s_eqFunction_1726,
    ForcedConvection_30s_eqFunction_1727,
    ForcedConvection_30s_eqFunction_1730,
    ForcedConvection_30s_eqFunction_1731,
    ForcedConvection_30s_eqFunction_1732,
    ForcedConvection_30s_eqFunction_1733,
    ForcedConvection_30s_eqFunction_1734,
    ForcedConvection_30s_eqFunction_1735,
    ForcedConvection_30s_eqFunction_1737,
    ForcedConvection_30s_eqFunction_1738,
    ForcedConvection_30s_eqFunction_1741,
    ForcedConvection_30s_eqFunction_1742,
    ForcedConvection_30s_eqFunction_1746,
    ForcedConvection_30s_eqFunction_1748,
    ForcedConvection_30s_eqFunction_1749,
    ForcedConvection_30s_eqFunction_1750,
    ForcedConvection_30s_eqFunction_1751,
    ForcedConvection_30s_eqFunction_1754,
    ForcedConvection_30s_eqFunction_1757,
    ForcedConvection_30s_eqFunction_1758,
    ForcedConvection_30s_eqFunction_1759,
    ForcedConvection_30s_eqFunction_1762,
    ForcedConvection_30s_eqFunction_1763,
    ForcedConvection_30s_eqFunction_1764,
    ForcedConvection_30s_eqFunction_1765,
    ForcedConvection_30s_eqFunction_1766,
    ForcedConvection_30s_eqFunction_1767,
    ForcedConvection_30s_eqFunction_1769,
    ForcedConvection_30s_eqFunction_1810,
    ForcedConvection_30s_eqFunction_1811,
    ForcedConvection_30s_eqFunction_1812,
    ForcedConvection_30s_eqFunction_1813,
    ForcedConvection_30s_eqFunction_1814,
    ForcedConvection_30s_eqFunction_1815,
    ForcedConvection_30s_eqFunction_1816,
    ForcedConvection_30s_eqFunction_1818,
    ForcedConvection_30s_eqFunction_1829,
    ForcedConvection_30s_eqFunction_1833,
    ForcedConvection_30s_eqFunction_1837,
    ForcedConvection_30s_eqFunction_1841,
    ForcedConvection_30s_eqFunction_1845,
    ForcedConvection_30s_eqFunction_1849,
    ForcedConvection_30s_eqFunction_1862,
    ForcedConvection_30s_eqFunction_1864,
    ForcedConvection_30s_eqFunction_1865,
    ForcedConvection_30s_eqFunction_1866,
    ForcedConvection_30s_eqFunction_1867,
    ForcedConvection_30s_eqFunction_1868,
    ForcedConvection_30s_eqFunction_1869,
    ForcedConvection_30s_eqFunction_1875,
    ForcedConvection_30s_eqFunction_1879,
    ForcedConvection_30s_eqFunction_1883,
    ForcedConvection_30s_eqFunction_1887,
    ForcedConvection_30s_eqFunction_1891,
    ForcedConvection_30s_eqFunction_1895,
    ForcedConvection_30s_eqFunction_1918,
    ForcedConvection_30s_eqFunction_1919,
    ForcedConvection_30s_eqFunction_1920,
    ForcedConvection_30s_eqFunction_1921,
    ForcedConvection_30s_eqFunction_1922,
    ForcedConvection_30s_eqFunction_1923,
    ForcedConvection_30s_eqFunction_1928,
    ForcedConvection_30s_eqFunction_1929,
    ForcedConvection_30s_eqFunction_1930,
    ForcedConvection_30s_eqFunction_1931,
    ForcedConvection_30s_eqFunction_1932,
    ForcedConvection_30s_eqFunction_1933,
    ForcedConvection_30s_eqFunction_1934,
    ForcedConvection_30s_eqFunction_1935,
    ForcedConvection_30s_eqFunction_1936,
    ForcedConvection_30s_eqFunction_1937,
    ForcedConvection_30s_eqFunction_1938,
    ForcedConvection_30s_eqFunction_1939,
    ForcedConvection_30s_eqFunction_1940,
    ForcedConvection_30s_eqFunction_1941,
    ForcedConvection_30s_eqFunction_1942,
    ForcedConvection_30s_eqFunction_1943,
    ForcedConvection_30s_eqFunction_1944,
    ForcedConvection_30s_eqFunction_1945,
    ForcedConvection_30s_eqFunction_1946,
    ForcedConvection_30s_eqFunction_1947,
    ForcedConvection_30s_eqFunction_1948,
    ForcedConvection_30s_eqFunction_1949,
    ForcedConvection_30s_eqFunction_1950,
    ForcedConvection_30s_eqFunction_1951,
    ForcedConvection_30s_eqFunction_1959,
    ForcedConvection_30s_eqFunction_1966,
    ForcedConvection_30s_eqFunction_1968,
    ForcedConvection_30s_eqFunction_1969,
    ForcedConvection_30s_eqFunction_1972,
    ForcedConvection_30s_eqFunction_1974,
    ForcedConvection_30s_eqFunction_1975,
    ForcedConvection_30s_eqFunction_1978,
    ForcedConvection_30s_eqFunction_1980,
    ForcedConvection_30s_eqFunction_1981,
    ForcedConvection_30s_eqFunction_1984,
    ForcedConvection_30s_eqFunction_1986,
    ForcedConvection_30s_eqFunction_1987,
    ForcedConvection_30s_eqFunction_1990,
    ForcedConvection_30s_eqFunction_1992,
    ForcedConvection_30s_eqFunction_1993,
    ForcedConvection_30s_eqFunction_1996,
    ForcedConvection_30s_eqFunction_1998,
    ForcedConvection_30s_eqFunction_1999,
    ForcedConvection_30s_eqFunction_2004,
    ForcedConvection_30s_eqFunction_2005,
    ForcedConvection_30s_eqFunction_2009,
    ForcedConvection_30s_eqFunction_2011,
    ForcedConvection_30s_eqFunction_2012,
    ForcedConvection_30s_eqFunction_2013,
    ForcedConvection_30s_eqFunction_2014,
    ForcedConvection_30s_eqFunction_2015,
    ForcedConvection_30s_eqFunction_2018,
    ForcedConvection_30s_eqFunction_2021,
    ForcedConvection_30s_eqFunction_2022,
    ForcedConvection_30s_eqFunction_2023,
    ForcedConvection_30s_eqFunction_2026,
    ForcedConvection_30s_eqFunction_2027,
    ForcedConvection_30s_eqFunction_2028,
    ForcedConvection_30s_eqFunction_2029,
    ForcedConvection_30s_eqFunction_2030,
    ForcedConvection_30s_eqFunction_2031,
    ForcedConvection_30s_eqFunction_2033,
    ForcedConvection_30s_eqFunction_2037,
    ForcedConvection_30s_eqFunction_2038,
    ForcedConvection_30s_eqFunction_2042,
    ForcedConvection_30s_eqFunction_2044,
    ForcedConvection_30s_eqFunction_2045,
    ForcedConvection_30s_eqFunction_2046,
    ForcedConvection_30s_eqFunction_2047,
    ForcedConvection_30s_eqFunction_2048,
    ForcedConvection_30s_eqFunction_2051,
    ForcedConvection_30s_eqFunction_2054,
    ForcedConvection_30s_eqFunction_2055,
    ForcedConvection_30s_eqFunction_2056,
    ForcedConvection_30s_eqFunction_2059,
    ForcedConvection_30s_eqFunction_2060,
    ForcedConvection_30s_eqFunction_2061,
    ForcedConvection_30s_eqFunction_2062,
    ForcedConvection_30s_eqFunction_2063,
    ForcedConvection_30s_eqFunction_2064,
    ForcedConvection_30s_eqFunction_2066,
    ForcedConvection_30s_eqFunction_2070,
    ForcedConvection_30s_eqFunction_2071,
    ForcedConvection_30s_eqFunction_2072,
    ForcedConvection_30s_eqFunction_2073,
    ForcedConvection_30s_eqFunction_2074,
    ForcedConvection_30s_eqFunction_2075,
    ForcedConvection_30s_eqFunction_2076,
    ForcedConvection_30s_eqFunction_2077,
    ForcedConvection_30s_eqFunction_2078,
    ForcedConvection_30s_eqFunction_2079,
    ForcedConvection_30s_eqFunction_2080,
    ForcedConvection_30s_eqFunction_2081,
    ForcedConvection_30s_eqFunction_2082,
    ForcedConvection_30s_eqFunction_2083,
    ForcedConvection_30s_eqFunction_2084,
    ForcedConvection_30s_eqFunction_2085,
    ForcedConvection_30s_eqFunction_2086,
    ForcedConvection_30s_eqFunction_2087,
    ForcedConvection_30s_eqFunction_2088,
    ForcedConvection_30s_eqFunction_2089,
    ForcedConvection_30s_eqFunction_2090,
    ForcedConvection_30s_eqFunction_2091,
    ForcedConvection_30s_eqFunction_2092,
    ForcedConvection_30s_eqFunction_2093,
    ForcedConvection_30s_eqFunction_2094,
    ForcedConvection_30s_eqFunction_2095,
    ForcedConvection_30s_eqFunction_2096,
    ForcedConvection_30s_eqFunction_2097,
    ForcedConvection_30s_eqFunction_2100,
    ForcedConvection_30s_eqFunction_2101,
    ForcedConvection_30s_eqFunction_2103,
    ForcedConvection_30s_eqFunction_2105,
    ForcedConvection_30s_eqFunction_2107,
    ForcedConvection_30s_eqFunction_2109,
    ForcedConvection_30s_eqFunction_2110,
    ForcedConvection_30s_eqFunction_2111,
    ForcedConvection_30s_eqFunction_2112,
    ForcedConvection_30s_eqFunction_2113,
    ForcedConvection_30s_eqFunction_2117,
    ForcedConvection_30s_eqFunction_2118,
    ForcedConvection_30s_eqFunction_2122,
    ForcedConvection_30s_eqFunction_2124,
    ForcedConvection_30s_eqFunction_2125,
    ForcedConvection_30s_eqFunction_2126,
    ForcedConvection_30s_eqFunction_2127,
    ForcedConvection_30s_eqFunction_2128,
    ForcedConvection_30s_eqFunction_2131,
    ForcedConvection_30s_eqFunction_2134,
    ForcedConvection_30s_eqFunction_2135,
    ForcedConvection_30s_eqFunction_2136,
    ForcedConvection_30s_eqFunction_2139,
    ForcedConvection_30s_eqFunction_2140,
    ForcedConvection_30s_eqFunction_2141,
    ForcedConvection_30s_eqFunction_2142,
    ForcedConvection_30s_eqFunction_2143,
    ForcedConvection_30s_eqFunction_2144,
    ForcedConvection_30s_eqFunction_2146,
    ForcedConvection_30s_eqFunction_2150,
    ForcedConvection_30s_eqFunction_2151,
    ForcedConvection_30s_eqFunction_2155,
    ForcedConvection_30s_eqFunction_2157,
    ForcedConvection_30s_eqFunction_2158,
    ForcedConvection_30s_eqFunction_2159,
    ForcedConvection_30s_eqFunction_2160,
    ForcedConvection_30s_eqFunction_2161,
    ForcedConvection_30s_eqFunction_2164,
    ForcedConvection_30s_eqFunction_2167,
    ForcedConvection_30s_eqFunction_2168,
    ForcedConvection_30s_eqFunction_2169,
    ForcedConvection_30s_eqFunction_2172,
    ForcedConvection_30s_eqFunction_2173,
    ForcedConvection_30s_eqFunction_2174,
    ForcedConvection_30s_eqFunction_2175,
    ForcedConvection_30s_eqFunction_2176,
    ForcedConvection_30s_eqFunction_2177,
    ForcedConvection_30s_eqFunction_2179,
    ForcedConvection_30s_eqFunction_2196,
    ForcedConvection_30s_eqFunction_270,
    ForcedConvection_30s_eqFunction_269,
    ForcedConvection_30s_eqFunction_268,
    ForcedConvection_30s_eqFunction_267,
    ForcedConvection_30s_eqFunction_266,
    ForcedConvection_30s_eqFunction_265,
    ForcedConvection_30s_eqFunction_264,
    ForcedConvection_30s_eqFunction_263,
    ForcedConvection_30s_eqFunction_262,
    ForcedConvection_30s_eqFunction_261,
    ForcedConvection_30s_eqFunction_260,
    ForcedConvection_30s_eqFunction_259,
    ForcedConvection_30s_eqFunction_258,
    ForcedConvection_30s_eqFunction_257,
    ForcedConvection_30s_eqFunction_256,
    ForcedConvection_30s_eqFunction_255,
    ForcedConvection_30s_eqFunction_254,
    ForcedConvection_30s_eqFunction_227,
    ForcedConvection_30s_eqFunction_54,
    ForcedConvection_30s_eqFunction_226,
    ForcedConvection_30s_eqFunction_53,
    ForcedConvection_30s_eqFunction_52,
    ForcedConvection_30s_eqFunction_51,
    ForcedConvection_30s_eqFunction_50,
    ForcedConvection_30s_eqFunction_49,
    ForcedConvection_30s_eqFunction_48,
    ForcedConvection_30s_eqFunction_46,
    ForcedConvection_30s_eqFunction_41,
    ForcedConvection_30s_eqFunction_222,
    ForcedConvection_30s_eqFunction_47,
    ForcedConvection_30s_eqFunction_42,
    ForcedConvection_30s_eqFunction_40,
    ForcedConvection_30s_eqFunction_39,
    ForcedConvection_30s_eqFunction_38,
    ForcedConvection_30s_eqFunction_37,
    ForcedConvection_30s_eqFunction_36,
    ForcedConvection_30s_eqFunction_35,
    ForcedConvection_30s_eqFunction_34,
    ForcedConvection_30s_eqFunction_33,
    ForcedConvection_30s_eqFunction_32,
    ForcedConvection_30s_eqFunction_31,
    ForcedConvection_30s_eqFunction_30,
    ForcedConvection_30s_eqFunction_29,
    ForcedConvection_30s_eqFunction_28,
    ForcedConvection_30s_eqFunction_27,
    ForcedConvection_30s_eqFunction_26,
    ForcedConvection_30s_eqFunction_25,
    ForcedConvection_30s_eqFunction_24,
    ForcedConvection_30s_eqFunction_23,
    ForcedConvection_30s_eqFunction_22,
    ForcedConvection_30s_eqFunction_21,
    ForcedConvection_30s_eqFunction_20,
    ForcedConvection_30s_eqFunction_19,
    ForcedConvection_30s_eqFunction_18,
    ForcedConvection_30s_eqFunction_17,
    ForcedConvection_30s_eqFunction_16,
    ForcedConvection_30s_eqFunction_15,
    ForcedConvection_30s_eqFunction_14,
    ForcedConvection_30s_eqFunction_13,
    ForcedConvection_30s_eqFunction_12,
    ForcedConvection_30s_eqFunction_11,
    ForcedConvection_30s_eqFunction_10,
    ForcedConvection_30s_eqFunction_9,
    ForcedConvection_30s_eqFunction_8,
    ForcedConvection_30s_eqFunction_7,
    ForcedConvection_30s_eqFunction_6,
    ForcedConvection_30s_eqFunction_5,
    ForcedConvection_30s_eqFunction_4,
    ForcedConvection_30s_eqFunction_3,
    ForcedConvection_30s_eqFunction_2,
    ForcedConvection_30s_eqFunction_1,
    ForcedConvection_30s_eqFunction_2376,
    ForcedConvection_30s_eqFunction_2377,
    ForcedConvection_30s_eqFunction_2378,
    ForcedConvection_30s_eqFunction_2379,
    ForcedConvection_30s_eqFunction_2380,
    ForcedConvection_30s_eqFunction_2381,
    ForcedConvection_30s_eqFunction_2382,
    ForcedConvection_30s_eqFunction_2383,
    ForcedConvection_30s_eqFunction_2384,
    ForcedConvection_30s_eqFunction_2385,
    ForcedConvection_30s_eqFunction_2386,
    ForcedConvection_30s_eqFunction_2387,
    ForcedConvection_30s_eqFunction_2388,
    ForcedConvection_30s_eqFunction_2389,
    ForcedConvection_30s_eqFunction_2390,
    ForcedConvection_30s_eqFunction_2391,
    ForcedConvection_30s_eqFunction_2392,
    ForcedConvection_30s_eqFunction_2393,
    ForcedConvection_30s_eqFunction_2394,
    ForcedConvection_30s_eqFunction_2395,
    ForcedConvection_30s_eqFunction_2396,
    ForcedConvection_30s_eqFunction_2397,
    ForcedConvection_30s_eqFunction_2398,
    ForcedConvection_30s_eqFunction_2399,
    ForcedConvection_30s_eqFunction_2400,
    ForcedConvection_30s_eqFunction_2401,
    ForcedConvection_30s_eqFunction_2402,
    ForcedConvection_30s_eqFunction_2403,
    ForcedConvection_30s_eqFunction_2404,
    ForcedConvection_30s_eqFunction_2405,
    ForcedConvection_30s_eqFunction_2406,
    ForcedConvection_30s_eqFunction_2407,
    ForcedConvection_30s_eqFunction_2408,
    ForcedConvection_30s_eqFunction_2409,
    ForcedConvection_30s_eqFunction_2410,
    ForcedConvection_30s_eqFunction_2411,
    ForcedConvection_30s_eqFunction_2412,
    ForcedConvection_30s_eqFunction_2413,
    ForcedConvection_30s_eqFunction_2414,
    ForcedConvection_30s_eqFunction_2415,
    ForcedConvection_30s_eqFunction_2416,
    ForcedConvection_30s_eqFunction_2417,
    ForcedConvection_30s_eqFunction_2418,
    ForcedConvection_30s_eqFunction_2419,
    ForcedConvection_30s_eqFunction_2420,
    ForcedConvection_30s_eqFunction_2421,
    ForcedConvection_30s_eqFunction_2422,
    ForcedConvection_30s_eqFunction_2423,
    ForcedConvection_30s_eqFunction_2424,
    ForcedConvection_30s_eqFunction_2425,
    ForcedConvection_30s_eqFunction_2426,
    ForcedConvection_30s_eqFunction_2427,
    ForcedConvection_30s_eqFunction_2428,
    ForcedConvection_30s_eqFunction_2429,
    ForcedConvection_30s_eqFunction_2430,
    ForcedConvection_30s_eqFunction_2431,
    ForcedConvection_30s_eqFunction_2432,
    ForcedConvection_30s_eqFunction_2433,
    ForcedConvection_30s_eqFunction_2434,
    ForcedConvection_30s_eqFunction_2435,
    ForcedConvection_30s_eqFunction_2436,
    ForcedConvection_30s_eqFunction_2437,
    ForcedConvection_30s_eqFunction_2438,
    ForcedConvection_30s_eqFunction_2439,
    ForcedConvection_30s_eqFunction_2440,
    ForcedConvection_30s_eqFunction_2441,
    ForcedConvection_30s_eqFunction_2442
  };
  
  for (int id = 0; id < 468; id++) {
    eqFunctions[id](data, threadData);
  }
}
#if defined(__cplusplus)
}
#endif