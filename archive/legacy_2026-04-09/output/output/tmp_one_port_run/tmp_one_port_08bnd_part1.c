#include "tmp_one_port_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 1551
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].AOpa = roo.datConExtWin[1].AOpa
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1551(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1551};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[834]] /* roo.irRadGai.datConExtWin[1].AOpa PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[341]] /* roo.datConExtWin[1].AOpa PARAM */);
  threadData->lastEquationSolved = 1551;
}

/*
equation index: 1552
type: SIMPLE_ASSIGN
roo.irRadGai.AConExtWinOpa[1] = roo.irRadGai.datConExtWin[1].AOpa
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1552(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1552};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[769]] /* roo.irRadGai.AConExtWinOpa[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[834]] /* roo.irRadGai.datConExtWin[1].AOpa PARAM */);
  threadData->lastEquationSolved = 1552;
}

/*
equation index: 1553
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].layers.absIR_b = roo.datConExtWin[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1553(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1553};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[871]] /* roo.irRadGai.datConExtWin[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[378]] /* roo.datConExtWin[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 1553;
}

/*
equation index: 1554
type: SIMPLE_ASSIGN
roo.irRadGai.epsConExtWinOpa[1] = roo.irRadGai.datConExtWin[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1554(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1554};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[962]] /* roo.irRadGai.epsConExtWinOpa[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[871]] /* roo.irRadGai.datConExtWin[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 1554;
}

/*
equation index: 1555
type: SIMPLE_ASSIGN
roo.irRadGai.AEpsConExtWinOpa[1] = roo.irRadGai.AConExtWinOpa[1] * roo.irRadGai.epsConExtWinOpa[1]
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1555(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1555};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[774]] /* roo.irRadGai.AEpsConExtWinOpa[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[769]] /* roo.irRadGai.AConExtWinOpa[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[962]] /* roo.irRadGai.epsConExtWinOpa[1] PARAM */));
  threadData->lastEquationSolved = 1555;
}

/*
equation index: 1556
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].A = roo.datConExt[1].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1556(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1556};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[810]] /* roo.irRadGai.datConExt[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[317]] /* roo.datConExt[1].A PARAM */);
  threadData->lastEquationSolved = 1556;
}

/*
equation index: 1557
type: SIMPLE_ASSIGN
roo.irRadGai.AConExt[1] = roo.irRadGai.datConExt[1].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1557(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1557};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[766]] /* roo.irRadGai.AConExt[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[810]] /* roo.irRadGai.datConExt[1].A PARAM */);
  threadData->lastEquationSolved = 1557;
}

/*
equation index: 1558
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].layers.absIR_b = roo.datConExt[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1558(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1558};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[816]] /* roo.irRadGai.datConExt[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[323]] /* roo.datConExt[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 1558;
}

/*
equation index: 1559
type: SIMPLE_ASSIGN
roo.irRadGai.epsConExt[1] = roo.irRadGai.datConExt[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1559(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1559};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[960]] /* roo.irRadGai.epsConExt[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[816]] /* roo.irRadGai.datConExt[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 1559;
}

/*
equation index: 1560
type: SIMPLE_ASSIGN
roo.irRadGai.AEpsConExt[1] = roo.irRadGai.AConExt[1] * roo.irRadGai.epsConExt[1]
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1560(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1560};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[772]] /* roo.irRadGai.AEpsConExt[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[766]] /* roo.irRadGai.AConExt[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[960]] /* roo.irRadGai.epsConExt[1] PARAM */));
  threadData->lastEquationSolved = 1560;
}

/*
equation index: 1562
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.shade.absIR_a = roo.datConExtWin[1].glaSys.shade.absIR_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1562(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1562};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[860]] /* roo.irRadGai.datConExtWin[1].glaSys.shade.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[367]] /* roo.datConExtWin[1].glaSys.shade.absIR_a PARAM */);
  threadData->lastEquationSolved = 1562;
}

/*
equation index: 1563
type: SIMPLE_ASSIGN
roo.irRadGai.epsConExtWinSha[1] = roo.irRadGai.datConExtWin[1].glaSys.shade.absIR_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1563(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1563};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[963]] /* roo.irRadGai.epsConExtWinSha[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[860]] /* roo.irRadGai.datConExtWin[1].glaSys.shade.absIR_a PARAM */);
  threadData->lastEquationSolved = 1563;
}

/*
equation index: 1564
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.glass[1].absIR_b = roo.datConExtWin[1].glaSys.glass[1].absIR_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1564(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1564};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[853]] /* roo.irRadGai.datConExtWin[1].glaSys.glass[1].absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[360]] /* roo.datConExtWin[1].glaSys.glass[1].absIR_b PARAM */);
  threadData->lastEquationSolved = 1564;
}

/*
equation index: 1565
type: SIMPLE_ASSIGN
roo.irRadGai.epsConExtWinUns[1] = roo.irRadGai.datConExtWin[1].glaSys.glass[1].absIR_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1565(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1565};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[964]] /* roo.irRadGai.epsConExtWinUns[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[853]] /* roo.irRadGai.datConExtWin[1].glaSys.glass[1].absIR_b PARAM */);
  threadData->lastEquationSolved = 1565;
}

/*
equation index: 1566
type: SIMPLE_ASSIGN
roo.irRadGai.AConExtWinGla[1] = (1.0 - roo.irRadGai.datConExtWin[1].fFra) * roo.irRadGai.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1566(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1566};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[768]] /* roo.irRadGai.AConExtWinGla[1] PARAM */) = (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[839]] /* roo.irRadGai.datConExtWin[1].fFra PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[835]] /* roo.irRadGai.datConExtWin[1].AWin PARAM */));
  threadData->lastEquationSolved = 1566;
}

/*
equation index: 1567
type: SIMPLE_ASSIGN
roo.irRadGai.instanceName = "TmpOnePort.roo.irRadGai"
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1567(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1567};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[51]] /* roo.irRadGai.instanceName PARAM */) = _OMC_LIT82;
  threadData->lastEquationSolved = 1567;
}

/*
equation index: 1573
type: SIMPLE_ASSIGN
roo.irRadGai.dummyCon.R = roo.irRadGai.dummyCon.material[1].R
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1573(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1573};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[915]] /* roo.irRadGai.dummyCon.R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[921]] /* roo.irRadGai.dummyCon.material[1].R PARAM */);
  threadData->lastEquationSolved = 1573;
}

/*
equation index: 1579
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[6].boundaryCondition = roo.surBou[6].boundaryCondition
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1579(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1579};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[252]] /* roo.irRadGai.surBou[6].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[314]] /* roo.surBou[6].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1579;
}

/*
equation index: 1580
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[6].name = roo.surBou[6].name
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1580(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1580};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[57]] /* roo.irRadGai.surBou[6].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[77]] /* roo.surBou[6].name PARAM */);
  threadData->lastEquationSolved = 1580;
}

/*
equation index: 1582
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[6].absSol = roo.surBou[6].absSol
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1582(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1582};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[991]] /* roo.irRadGai.surBou[6].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1257]] /* roo.surBou[6].absSol PARAM */);
  threadData->lastEquationSolved = 1582;
}

/*
equation index: 1584
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[5].boundaryCondition = roo.surBou[5].boundaryCondition
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1584(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1584};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[251]] /* roo.irRadGai.surBou[5].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[313]] /* roo.surBou[5].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1584;
}

/*
equation index: 1585
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[5].name = roo.surBou[5].name
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1585(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1585};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[56]] /* roo.irRadGai.surBou[5].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[76]] /* roo.surBou[5].name PARAM */);
  threadData->lastEquationSolved = 1585;
}

/*
equation index: 1587
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[5].absSol = roo.surBou[5].absSol
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1587(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1587};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[990]] /* roo.irRadGai.surBou[5].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1256]] /* roo.surBou[5].absSol PARAM */);
  threadData->lastEquationSolved = 1587;
}

/*
equation index: 1589
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[4].boundaryCondition = roo.surBou[4].boundaryCondition
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1589(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1589};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[250]] /* roo.irRadGai.surBou[4].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[312]] /* roo.surBou[4].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1589;
}

/*
equation index: 1590
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[4].name = roo.surBou[4].name
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1590(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1590};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[55]] /* roo.irRadGai.surBou[4].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[75]] /* roo.surBou[4].name PARAM */);
  threadData->lastEquationSolved = 1590;
}

/*
equation index: 1592
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[4].absSol = roo.surBou[4].absSol
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1592(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1592};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[989]] /* roo.irRadGai.surBou[4].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1255]] /* roo.surBou[4].absSol PARAM */);
  threadData->lastEquationSolved = 1592;
}

/*
equation index: 1594
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[3].boundaryCondition = roo.surBou[3].boundaryCondition
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1594(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1594};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[249]] /* roo.irRadGai.surBou[3].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[311]] /* roo.surBou[3].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1594;
}

/*
equation index: 1595
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[3].name = roo.surBou[3].name
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1595(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1595};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[54]] /* roo.irRadGai.surBou[3].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[74]] /* roo.surBou[3].name PARAM */);
  threadData->lastEquationSolved = 1595;
}

/*
equation index: 1597
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[3].absSol = roo.surBou[3].absSol
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1597(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1597};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[988]] /* roo.irRadGai.surBou[3].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1254]] /* roo.surBou[3].absSol PARAM */);
  threadData->lastEquationSolved = 1597;
}

/*
equation index: 1599
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[2].boundaryCondition = roo.surBou[2].boundaryCondition
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1599(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1599};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[248]] /* roo.irRadGai.surBou[2].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[310]] /* roo.surBou[2].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1599;
}

/*
equation index: 1600
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[2].name = roo.surBou[2].name
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1600(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1600};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[53]] /* roo.irRadGai.surBou[2].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[73]] /* roo.surBou[2].name PARAM */);
  threadData->lastEquationSolved = 1600;
}

/*
equation index: 1602
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[2].absSol = roo.surBou[2].absSol
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1602(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1602};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[987]] /* roo.irRadGai.surBou[2].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1253]] /* roo.surBou[2].absSol PARAM */);
  threadData->lastEquationSolved = 1602;
}

/*
equation index: 1604
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[1].boundaryCondition = roo.surBou[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1604(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1604};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[247]] /* roo.irRadGai.surBou[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[309]] /* roo.surBou[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1604;
}

/*
equation index: 1605
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[1].name = roo.surBou[1].name
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1605(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1605};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[52]] /* roo.irRadGai.surBou[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[72]] /* roo.surBou[1].name PARAM */);
  threadData->lastEquationSolved = 1605;
}

/*
equation index: 1607
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[1].absSol = roo.surBou[1].absSol
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1607(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1607};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[986]] /* roo.irRadGai.surBou[1].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1252]] /* roo.surBou[1].absSol PARAM */);
  threadData->lastEquationSolved = 1607;
}

/*
equation index: 1609
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].boundaryCondition = roo.datConBou[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1609(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1609};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[213]] /* roo.irRadGai.datConBou[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[126]] /* roo.datConBou[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1609;
}

/*
equation index: 1612
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].T_b_start = roo.datConBou[1].T_b_start
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1612(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1612};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[791]] /* roo.irRadGai.datConBou[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[298]] /* roo.datConBou[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 1612;
}

/*
equation index: 1613
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].T_a_start = roo.datConBou[1].T_a_start
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1613(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1613};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[790]] /* roo.irRadGai.datConBou[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[297]] /* roo.datConBou[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 1613;
}

/*
equation index: 1617
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].azi = roo.datConBou[1].azi
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1617(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1617};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[792]] /* roo.irRadGai.datConBou[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[299]] /* roo.datConBou[1].azi PARAM */);
  threadData->lastEquationSolved = 1617;
}

/*
equation index: 1619
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].layers.roughness_a = roo.datConBou[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1619(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1619};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[218]] /* roo.irRadGai.datConBou[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[131]] /* roo.datConBou[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 1619;
}

/*
equation index: 1620
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].layers.absSol_b = roo.datConBou[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1620(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1620};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[797]] /* roo.irRadGai.datConBou[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[304]] /* roo.datConBou[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 1620;
}

/*
equation index: 1621
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].layers.absSol_a = roo.datConBou[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1621(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1621};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[796]] /* roo.irRadGai.datConBou[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[303]] /* roo.datConBou[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 1621;
}

/*
equation index: 1622
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].layers.absIR_a = roo.datConBou[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1622(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1622};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[794]] /* roo.irRadGai.datConBou[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[301]] /* roo.datConBou[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 1622;
}

/*
equation index: 1625
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].layers.material[1].LHea = roo.datConBou[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1625(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1625};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[798]] /* roo.irRadGai.datConBou[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[305]] /* roo.datConBou[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 1625;
}

/*
equation index: 1628
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].layers.material[1].nStaReal = roo.datConBou[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1628(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1628};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[805]] /* roo.irRadGai.datConBou[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[312]] /* roo.datConBou[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 1628;
}

/*
equation index: 1629
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].layers.material[1].piMat = roo.datConBou[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1629(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1629};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[806]] /* roo.irRadGai.datConBou[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[313]] /* roo.datConBou[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 1629;
}

/*
equation index: 1630
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].layers.material[1].piRef = roo.datConBou[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1630(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1630};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[807]] /* roo.irRadGai.datConBou[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[314]] /* roo.datConBou[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 1630;
}

/*
equation index: 1633
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].layers.material[1].nStaRef = roo.datConBou[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1633(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1633};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[215]] /* roo.irRadGai.datConBou[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[128]] /* roo.datConBou[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 1633;
}

/*
equation index: 1634
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].layers.material[1].R = roo.datConBou[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1634(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1634};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[799]] /* roo.irRadGai.datConBou[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[306]] /* roo.datConBou[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 1634;
}

/*
equation index: 1635
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].layers.material[1].d = roo.datConBou[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1635(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1635};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[803]] /* roo.irRadGai.datConBou[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[310]] /* roo.datConBou[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 1635;
}

/*
equation index: 1636
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].layers.material[1].c = roo.datConBou[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1636(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1636};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[802]] /* roo.irRadGai.datConBou[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[309]] /* roo.datConBou[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 1636;
}

/*
equation index: 1637
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].layers.material[1].k = roo.datConBou[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1637(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1637};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[804]] /* roo.irRadGai.datConBou[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[311]] /* roo.datConBou[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 1637;
}

/*
equation index: 1638
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].layers.material[1].x = roo.datConBou[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1638(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1638};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[808]] /* roo.irRadGai.datConBou[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[315]] /* roo.datConBou[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 1638;
}

/*
equation index: 1640
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].name = roo.datConBou[1].name
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1640(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1640};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[47]] /* roo.irRadGai.datConBou[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[32]] /* roo.datConBou[1].name PARAM */);
  threadData->lastEquationSolved = 1640;
}

/*
equation index: 1641
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].boundaryCondition = roo.datConPar[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1641(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1641};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[231]] /* roo.irRadGai.datConPar[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[144]] /* roo.datConPar[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1641;
}

/*
equation index: 1644
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].T_b_start = roo.datConPar[1].T_b_start
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1644(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1644};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[896]] /* roo.irRadGai.datConPar[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[403]] /* roo.datConPar[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 1644;
}

/*
equation index: 1645
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].T_a_start = roo.datConPar[1].T_a_start
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1645(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1645};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[895]] /* roo.irRadGai.datConPar[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[402]] /* roo.datConPar[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 1645;
}

/*
equation index: 1649
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].azi = roo.datConPar[1].azi
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1649(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1649};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[897]] /* roo.irRadGai.datConPar[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[404]] /* roo.datConPar[1].azi PARAM */);
  threadData->lastEquationSolved = 1649;
}

/*
equation index: 1651
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].layers.roughness_a = roo.datConPar[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1651(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1651};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[236]] /* roo.irRadGai.datConPar[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[149]] /* roo.datConPar[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 1651;
}

/*
equation index: 1652
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].layers.absSol_b = roo.datConPar[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1652(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1652};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[902]] /* roo.irRadGai.datConPar[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[409]] /* roo.datConPar[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 1652;
}

/*
equation index: 1653
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].layers.absSol_a = roo.datConPar[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1653(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1653};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[901]] /* roo.irRadGai.datConPar[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[408]] /* roo.datConPar[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 1653;
}

/*
equation index: 1656
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].layers.material[1].LHea = roo.datConPar[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1656(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1656};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[903]] /* roo.irRadGai.datConPar[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[410]] /* roo.datConPar[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 1656;
}

/*
equation index: 1659
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].layers.material[1].nStaReal = roo.datConPar[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1659(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1659};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[910]] /* roo.irRadGai.datConPar[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[417]] /* roo.datConPar[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 1659;
}

/*
equation index: 1660
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].layers.material[1].piMat = roo.datConPar[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1660(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1660};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[911]] /* roo.irRadGai.datConPar[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[418]] /* roo.datConPar[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 1660;
}

/*
equation index: 1661
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].layers.material[1].piRef = roo.datConPar[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1661(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1661};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[912]] /* roo.irRadGai.datConPar[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[419]] /* roo.datConPar[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 1661;
}

/*
equation index: 1664
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].layers.material[1].nStaRef = roo.datConPar[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1664(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1664};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[233]] /* roo.irRadGai.datConPar[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[146]] /* roo.datConPar[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 1664;
}

/*
equation index: 1665
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].layers.material[1].R = roo.datConPar[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1665(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1665};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[904]] /* roo.irRadGai.datConPar[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[411]] /* roo.datConPar[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 1665;
}

/*
equation index: 1666
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].layers.material[1].d = roo.datConPar[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1666(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1666};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[908]] /* roo.irRadGai.datConPar[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[415]] /* roo.datConPar[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 1666;
}

/*
equation index: 1667
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].layers.material[1].c = roo.datConPar[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1667(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1667};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[907]] /* roo.irRadGai.datConPar[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[414]] /* roo.datConPar[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 1667;
}

/*
equation index: 1668
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].layers.material[1].k = roo.datConPar[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1668(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1668};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[909]] /* roo.irRadGai.datConPar[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[416]] /* roo.datConPar[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 1668;
}

/*
equation index: 1669
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].layers.material[1].x = roo.datConPar[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1669(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1669};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[913]] /* roo.irRadGai.datConPar[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[420]] /* roo.datConPar[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 1669;
}

/*
equation index: 1671
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].name = roo.datConPar[1].name
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1671(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1671};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[50]] /* roo.irRadGai.datConPar[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[35]] /* roo.datConPar[1].name PARAM */);
  threadData->lastEquationSolved = 1671;
}

/*
equation index: 1675
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.absSolFra = roo.datConExtWin[1].glaSys.absSolFra
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1675(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1675};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[842]] /* roo.irRadGai.datConExtWin[1].glaSys.absSolFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[349]] /* roo.datConExtWin[1].glaSys.absSolFra PARAM */);
  threadData->lastEquationSolved = 1675;
}

/*
equation index: 1676
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.UFra = roo.datConExtWin[1].glaSys.UFra
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1676(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1676};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[840]] /* roo.irRadGai.datConExtWin[1].glaSys.UFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[347]] /* roo.datConExtWin[1].glaSys.UFra PARAM */);
  threadData->lastEquationSolved = 1676;
}

/*
equation index: 1677
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.shade.tauIR_b = roo.datConExtWin[1].glaSys.shade.tauIR_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1677(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1677};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[865]] /* roo.irRadGai.datConExtWin[1].glaSys.shade.tauIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[372]] /* roo.datConExtWin[1].glaSys.shade.tauIR_b PARAM */);
  threadData->lastEquationSolved = 1677;
}

/*
equation index: 1678
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.shade.tauIR_a = roo.datConExtWin[1].glaSys.shade.tauIR_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1678(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1678};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[864]] /* roo.irRadGai.datConExtWin[1].glaSys.shade.tauIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[371]] /* roo.datConExtWin[1].glaSys.shade.tauIR_a PARAM */);
  threadData->lastEquationSolved = 1678;
}

/*
equation index: 1679
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.shade.absIR_b = roo.datConExtWin[1].glaSys.shade.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1679(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1679};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[861]] /* roo.irRadGai.datConExtWin[1].glaSys.shade.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[368]] /* roo.datConExtWin[1].glaSys.shade.absIR_b PARAM */);
  threadData->lastEquationSolved = 1679;
}

/*
equation index: 1680
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.shade.rhoSol_b = roo.datConExtWin[1].glaSys.shade.rhoSol_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1680(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1680};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[863]] /* roo.irRadGai.datConExtWin[1].glaSys.shade.rhoSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[370]] /* roo.datConExtWin[1].glaSys.shade.rhoSol_b PARAM */);
  threadData->lastEquationSolved = 1680;
}

/*
equation index: 1681
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.shade.rhoSol_a = roo.datConExtWin[1].glaSys.shade.rhoSol_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1681(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1681};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[862]] /* roo.irRadGai.datConExtWin[1].glaSys.shade.rhoSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[369]] /* roo.datConExtWin[1].glaSys.shade.rhoSol_a PARAM */);
  threadData->lastEquationSolved = 1681;
}

/*
equation index: 1682
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.shade.tauSol_b = roo.datConExtWin[1].glaSys.shade.tauSol_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1682(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1682};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[867]] /* roo.irRadGai.datConExtWin[1].glaSys.shade.tauSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[374]] /* roo.datConExtWin[1].glaSys.shade.tauSol_b PARAM */);
  threadData->lastEquationSolved = 1682;
}

/*
equation index: 1683
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.shade.tauSol_a = roo.datConExtWin[1].glaSys.shade.tauSol_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1683(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1683};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[866]] /* roo.irRadGai.datConExtWin[1].glaSys.shade.tauSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[373]] /* roo.datConExtWin[1].glaSys.shade.tauSol_a PARAM */);
  threadData->lastEquationSolved = 1683;
}

/*
equation index: 1684
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.gas[1].P0 = roo.datConExtWin[1].glaSys.gas[1].P0
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1684(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1684};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[844]] /* roo.irRadGai.datConExtWin[1].glaSys.gas[1].P0 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[351]] /* roo.datConExtWin[1].glaSys.gas[1].P0 PARAM */);
  threadData->lastEquationSolved = 1684;
}

/*
equation index: 1685
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.gas[1].MM = roo.datConExtWin[1].glaSys.gas[1].MM
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1685(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1685};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[843]] /* roo.irRadGai.datConExtWin[1].glaSys.gas[1].MM PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[350]] /* roo.datConExtWin[1].glaSys.gas[1].MM PARAM */);
  threadData->lastEquationSolved = 1685;
}

/*
equation index: 1686
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.gas[1].b_c = roo.datConExtWin[1].glaSys.gas[1].b_c
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1686(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1686};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[848]] /* roo.irRadGai.datConExtWin[1].glaSys.gas[1].b_c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[355]] /* roo.datConExtWin[1].glaSys.gas[1].b_c PARAM */);
  threadData->lastEquationSolved = 1686;
}

/*
equation index: 1687
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.gas[1].a_c = roo.datConExtWin[1].glaSys.gas[1].a_c
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1687(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1687};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[845]] /* roo.irRadGai.datConExtWin[1].glaSys.gas[1].a_c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[352]] /* roo.datConExtWin[1].glaSys.gas[1].a_c PARAM */);
  threadData->lastEquationSolved = 1687;
}

/*
equation index: 1688
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.gas[1].b_mu = roo.datConExtWin[1].glaSys.gas[1].b_mu
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1688(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1688};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[850]] /* roo.irRadGai.datConExtWin[1].glaSys.gas[1].b_mu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[357]] /* roo.datConExtWin[1].glaSys.gas[1].b_mu PARAM */);
  threadData->lastEquationSolved = 1688;
}

/*
equation index: 1689
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.gas[1].a_mu = roo.datConExtWin[1].glaSys.gas[1].a_mu
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1689(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1689};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[847]] /* roo.irRadGai.datConExtWin[1].glaSys.gas[1].a_mu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[354]] /* roo.datConExtWin[1].glaSys.gas[1].a_mu PARAM */);
  threadData->lastEquationSolved = 1689;
}

/*
equation index: 1690
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.gas[1].b_k = roo.datConExtWin[1].glaSys.gas[1].b_k
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1690(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1690};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[849]] /* roo.irRadGai.datConExtWin[1].glaSys.gas[1].b_k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[356]] /* roo.datConExtWin[1].glaSys.gas[1].b_k PARAM */);
  threadData->lastEquationSolved = 1690;
}

/*
equation index: 1691
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.gas[1].a_k = roo.datConExtWin[1].glaSys.gas[1].a_k
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1691(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1691};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[846]] /* roo.irRadGai.datConExtWin[1].glaSys.gas[1].a_k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[353]] /* roo.datConExtWin[1].glaSys.gas[1].a_k PARAM */);
  threadData->lastEquationSolved = 1691;
}

/*
equation index: 1692
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.gas[1].x = roo.datConExtWin[1].glaSys.gas[1].x
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1692(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1692};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[851]] /* roo.irRadGai.datConExtWin[1].glaSys.gas[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[358]] /* roo.datConExtWin[1].glaSys.gas[1].x PARAM */);
  threadData->lastEquationSolved = 1692;
}

/*
equation index: 1693
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.glass[1].absIR_a = roo.datConExtWin[1].glaSys.glass[1].absIR_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1693(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1693};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[852]] /* roo.irRadGai.datConExtWin[1].glaSys.glass[1].absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[359]] /* roo.datConExtWin[1].glaSys.glass[1].absIR_a PARAM */);
  threadData->lastEquationSolved = 1693;
}

/*
equation index: 1694
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.glass[1].tauIR = roo.datConExtWin[1].glaSys.glass[1].tauIR
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1694(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1694};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[857]] /* roo.irRadGai.datConExtWin[1].glaSys.glass[1].tauIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[364]] /* roo.datConExtWin[1].glaSys.glass[1].tauIR PARAM */);
  threadData->lastEquationSolved = 1694;
}

/*
equation index: 1695
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.glass[1].rhoSol_b[1] = roo.datConExtWin[1].glaSys.glass[1].rhoSol_b[1]
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1695(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1695};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[856]] /* roo.irRadGai.datConExtWin[1].glaSys.glass[1].rhoSol_b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[363]] /* roo.datConExtWin[1].glaSys.glass[1].rhoSol_b[1] PARAM */);
  threadData->lastEquationSolved = 1695;
}

/*
equation index: 1696
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.glass[1].rhoSol_a[1] = roo.datConExtWin[1].glaSys.glass[1].rhoSol_a[1]
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1696(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1696};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[855]] /* roo.irRadGai.datConExtWin[1].glaSys.glass[1].rhoSol_a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[362]] /* roo.datConExtWin[1].glaSys.glass[1].rhoSol_a[1] PARAM */);
  threadData->lastEquationSolved = 1696;
}

/*
equation index: 1697
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.glass[1].tauSol[1] = roo.datConExtWin[1].glaSys.glass[1].tauSol[1]
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1697(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1697};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[858]] /* roo.irRadGai.datConExtWin[1].glaSys.glass[1].tauSol[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[365]] /* roo.datConExtWin[1].glaSys.glass[1].tauSol[1] PARAM */);
  threadData->lastEquationSolved = 1697;
}

/*
equation index: 1698
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.glass[1].k = roo.datConExtWin[1].glaSys.glass[1].k
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1698(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1698};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[854]] /* roo.irRadGai.datConExtWin[1].glaSys.glass[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[361]] /* roo.datConExtWin[1].glaSys.glass[1].k PARAM */);
  threadData->lastEquationSolved = 1698;
}

/*
equation index: 1699
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.glass[1].x = roo.datConExtWin[1].glaSys.glass[1].x
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1699(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1699};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[859]] /* roo.irRadGai.datConExtWin[1].glaSys.glass[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[366]] /* roo.datConExtWin[1].glaSys.glass[1].x PARAM */);
  threadData->lastEquationSolved = 1699;
}

/*
equation index: 1702
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].AGla = roo.datConExtWin[1].AGla
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1702(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1702};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[833]] /* roo.irRadGai.datConExtWin[1].AGla PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[340]] /* roo.datConExtWin[1].AGla PARAM */);
  threadData->lastEquationSolved = 1702;
}

/*
equation index: 1703
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].AFra = roo.datConExtWin[1].AFra
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1703(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1703};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[832]] /* roo.irRadGai.datConExtWin[1].AFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[339]] /* roo.datConExtWin[1].AFra PARAM */);
  threadData->lastEquationSolved = 1703;
}

/*
equation index: 1705
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].sidFin.gap = roo.datConExtWin[1].sidFin.gap
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1705(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1705};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[890]] /* roo.irRadGai.datConExtWin[1].sidFin.gap PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[397]] /* roo.datConExtWin[1].sidFin.gap PARAM */);
  threadData->lastEquationSolved = 1705;
}

/*
equation index: 1707
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].sidFin.h = roo.datConExtWin[1].sidFin.h
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1707(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1707};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[891]] /* roo.irRadGai.datConExtWin[1].sidFin.h PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[398]] /* roo.datConExtWin[1].sidFin.h PARAM */);
  threadData->lastEquationSolved = 1707;
}

/*
equation index: 1709
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].ove.gap = roo.datConExtWin[1].ove.gap
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1709(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1709};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[886]] /* roo.irRadGai.datConExtWin[1].ove.gap PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[393]] /* roo.datConExtWin[1].ove.gap PARAM */);
  threadData->lastEquationSolved = 1709;
}

/*
equation index: 1711
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].ove.wR = roo.datConExtWin[1].ove.wR
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1711(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1711};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[888]] /* roo.irRadGai.datConExtWin[1].ove.wR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[395]] /* roo.datConExtWin[1].ove.wR PARAM */);
  threadData->lastEquationSolved = 1711;
}

/*
equation index: 1712
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].ove.wL = roo.datConExtWin[1].ove.wL
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1712(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1712};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[887]] /* roo.irRadGai.datConExtWin[1].ove.wL PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[394]] /* roo.datConExtWin[1].ove.wL PARAM */);
  threadData->lastEquationSolved = 1712;
}

/*
equation index: 1713
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].wWin = roo.datConExtWin[1].wWin
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1713(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1713};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[893]] /* roo.irRadGai.datConExtWin[1].wWin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[400]] /* roo.datConExtWin[1].wWin PARAM */);
  threadData->lastEquationSolved = 1713;
}

/*
equation index: 1714
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].hWin = roo.datConExtWin[1].hWin
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1714(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1714};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[868]] /* roo.irRadGai.datConExtWin[1].hWin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[375]] /* roo.datConExtWin[1].hWin PARAM */);
  threadData->lastEquationSolved = 1714;
}

/*
equation index: 1715
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].A = roo.datConExtWin[1].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1715(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1715};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[831]] /* roo.irRadGai.datConExtWin[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[338]] /* roo.datConExtWin[1].A PARAM */);
  threadData->lastEquationSolved = 1715;
}

/*
equation index: 1716
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].boundaryCondition = roo.datConExtWin[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1716(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1716};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[225]] /* roo.irRadGai.datConExtWin[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[138]] /* roo.datConExtWin[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1716;
}

/*
equation index: 1719
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].T_b_start = roo.datConExtWin[1].T_b_start
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1719(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1719};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[837]] /* roo.irRadGai.datConExtWin[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[344]] /* roo.datConExtWin[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 1719;
}

/*
equation index: 1720
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].T_a_start = roo.datConExtWin[1].T_a_start
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1720(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1720};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[836]] /* roo.irRadGai.datConExtWin[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[343]] /* roo.datConExtWin[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 1720;
}

/*
equation index: 1724
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].azi = roo.datConExtWin[1].azi
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1724(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1724};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[838]] /* roo.irRadGai.datConExtWin[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[345]] /* roo.datConExtWin[1].azi PARAM */);
  threadData->lastEquationSolved = 1724;
}

/*
equation index: 1726
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].layers.roughness_a = roo.datConExtWin[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1726(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1726};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[230]] /* roo.irRadGai.datConExtWin[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[143]] /* roo.datConExtWin[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 1726;
}

/*
equation index: 1727
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].layers.absSol_b = roo.datConExtWin[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1727(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1727};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[873]] /* roo.irRadGai.datConExtWin[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[380]] /* roo.datConExtWin[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 1727;
}

/*
equation index: 1728
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].layers.absSol_a = roo.datConExtWin[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1728(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1728};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[872]] /* roo.irRadGai.datConExtWin[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[379]] /* roo.datConExtWin[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 1728;
}

/*
equation index: 1729
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].layers.absIR_a = roo.datConExtWin[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1729(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1729};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[870]] /* roo.irRadGai.datConExtWin[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[377]] /* roo.datConExtWin[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 1729;
}

/*
equation index: 1732
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].layers.material[1].LHea = roo.datConExtWin[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1732(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1732};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[874]] /* roo.irRadGai.datConExtWin[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[381]] /* roo.datConExtWin[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 1732;
}

/*
equation index: 1735
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].layers.material[1].nStaReal = roo.datConExtWin[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1735(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1735};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[881]] /* roo.irRadGai.datConExtWin[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[388]] /* roo.datConExtWin[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 1735;
}

/*
equation index: 1736
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].layers.material[1].piMat = roo.datConExtWin[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1736(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1736};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[882]] /* roo.irRadGai.datConExtWin[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[389]] /* roo.datConExtWin[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 1736;
}

/*
equation index: 1737
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].layers.material[1].piRef = roo.datConExtWin[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1737(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1737};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[883]] /* roo.irRadGai.datConExtWin[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[390]] /* roo.datConExtWin[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 1737;
}

/*
equation index: 1740
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].layers.material[1].nStaRef = roo.datConExtWin[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1740(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1740};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[227]] /* roo.irRadGai.datConExtWin[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[140]] /* roo.datConExtWin[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 1740;
}

/*
equation index: 1741
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].layers.material[1].R = roo.datConExtWin[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1741(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1741};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[875]] /* roo.irRadGai.datConExtWin[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[382]] /* roo.datConExtWin[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 1741;
}

/*
equation index: 1742
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].layers.material[1].d = roo.datConExtWin[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1742(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1742};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[879]] /* roo.irRadGai.datConExtWin[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[386]] /* roo.datConExtWin[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 1742;
}

/*
equation index: 1743
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].layers.material[1].c = roo.datConExtWin[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1743(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1743};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[878]] /* roo.irRadGai.datConExtWin[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[385]] /* roo.datConExtWin[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 1743;
}

/*
equation index: 1744
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].layers.material[1].k = roo.datConExtWin[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1744(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1744};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[880]] /* roo.irRadGai.datConExtWin[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[387]] /* roo.datConExtWin[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 1744;
}

/*
equation index: 1745
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].layers.material[1].x = roo.datConExtWin[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1745(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1745};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[884]] /* roo.irRadGai.datConExtWin[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[391]] /* roo.datConExtWin[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 1745;
}

/*
equation index: 1747
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].name = roo.datConExtWin[1].name
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1747(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1747};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[49]] /* roo.irRadGai.datConExtWin[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[34]] /* roo.datConExtWin[1].name PARAM */);
  threadData->lastEquationSolved = 1747;
}

/*
equation index: 1748
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].boundaryCondition = roo.datConExt[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1748(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1748};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[219]] /* roo.irRadGai.datConExt[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[132]] /* roo.datConExt[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1748;
}

/*
equation index: 1751
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].T_b_start = roo.datConExt[1].T_b_start
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1751(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1751};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[812]] /* roo.irRadGai.datConExt[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[319]] /* roo.datConExt[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 1751;
}

/*
equation index: 1752
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].T_a_start = roo.datConExt[1].T_a_start
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1752(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1752};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[811]] /* roo.irRadGai.datConExt[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[318]] /* roo.datConExt[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 1752;
}

/*
equation index: 1756
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].azi = roo.datConExt[1].azi
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1756(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1756};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[813]] /* roo.irRadGai.datConExt[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[320]] /* roo.datConExt[1].azi PARAM */);
  threadData->lastEquationSolved = 1756;
}

/*
equation index: 1758
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].layers.roughness_a = roo.datConExt[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1758(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1758};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[224]] /* roo.irRadGai.datConExt[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[137]] /* roo.datConExt[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 1758;
}

/*
equation index: 1759
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].layers.absSol_b = roo.datConExt[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1759(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1759};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[818]] /* roo.irRadGai.datConExt[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[325]] /* roo.datConExt[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 1759;
}

/*
equation index: 1760
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].layers.absSol_a = roo.datConExt[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1760(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1760};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[817]] /* roo.irRadGai.datConExt[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[324]] /* roo.datConExt[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 1760;
}

/*
equation index: 1761
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].layers.absIR_a = roo.datConExt[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1761(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1761};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[815]] /* roo.irRadGai.datConExt[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[322]] /* roo.datConExt[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 1761;
}

/*
equation index: 1764
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].layers.material[1].LHea = roo.datConExt[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1764(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1764};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[819]] /* roo.irRadGai.datConExt[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[326]] /* roo.datConExt[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 1764;
}

/*
equation index: 1767
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].layers.material[1].nStaReal = roo.datConExt[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1767(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1767};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[826]] /* roo.irRadGai.datConExt[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[333]] /* roo.datConExt[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 1767;
}

/*
equation index: 1768
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].layers.material[1].piMat = roo.datConExt[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1768(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1768};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[827]] /* roo.irRadGai.datConExt[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[334]] /* roo.datConExt[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 1768;
}

/*
equation index: 1769
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].layers.material[1].piRef = roo.datConExt[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1769(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1769};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[828]] /* roo.irRadGai.datConExt[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[335]] /* roo.datConExt[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 1769;
}

/*
equation index: 1772
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].layers.material[1].nStaRef = roo.datConExt[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1772(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1772};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[221]] /* roo.irRadGai.datConExt[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[134]] /* roo.datConExt[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 1772;
}

/*
equation index: 1773
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].layers.material[1].R = roo.datConExt[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1773(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1773};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[820]] /* roo.irRadGai.datConExt[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[327]] /* roo.datConExt[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 1773;
}

/*
equation index: 1774
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].layers.material[1].d = roo.datConExt[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1774(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1774};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[824]] /* roo.irRadGai.datConExt[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[331]] /* roo.datConExt[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 1774;
}

/*
equation index: 1775
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].layers.material[1].c = roo.datConExt[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1775(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1775};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[823]] /* roo.irRadGai.datConExt[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[330]] /* roo.datConExt[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 1775;
}

/*
equation index: 1776
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].layers.material[1].k = roo.datConExt[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1776(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1776};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[825]] /* roo.irRadGai.datConExt[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[332]] /* roo.datConExt[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 1776;
}

/*
equation index: 1777
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].layers.material[1].x = roo.datConExt[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1777(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1777};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[829]] /* roo.irRadGai.datConExt[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[336]] /* roo.datConExt[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 1777;
}

/*
equation index: 1779
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].name = roo.datConExt[1].name
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1779(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1779};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[48]] /* roo.irRadGai.datConExt[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[33]] /* roo.datConExt[1].name PARAM */);
  threadData->lastEquationSolved = 1779;
}

/*
equation index: 1820
type: SIMPLE_ASSIGN
roo.air.p_start = roo.p_start
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1820(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1820};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[244]] /* roo.air.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[999]] /* roo.p_start PARAM */);
  threadData->lastEquationSolved = 1820;
}

/*
equation index: 1821
type: SIMPLE_ASSIGN
roo.air.rho_start = 1.1843079200592153e-5 * roo.air.p_start
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1821(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1821};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[245]] /* roo.air.rho_start PARAM */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[244]] /* roo.air.p_start PARAM */));
  threadData->lastEquationSolved = 1821;
}

/*
equation index: 1822
type: SIMPLE_ASSIGN
roo.air.fluInt.rho_start = roo.air.rho_start
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1822(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1822};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[243]] /* roo.air.fluInt.rho_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[245]] /* roo.air.rho_start PARAM */);
  threadData->lastEquationSolved = 1822;
}

/*
equation index: 1823
type: SIMPLE_ASSIGN
roo.V = roo.AFlo * roo.hRoo
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1823(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1823};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[13]] /* roo.V PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[12]] /* roo.AFlo PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[468]] /* roo.hRoo PARAM */));
  threadData->lastEquationSolved = 1823;
}

/*
equation index: 1824
type: SIMPLE_ASSIGN
roo.air.V = roo.V
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1824(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1824};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[40]] /* roo.air.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[13]] /* roo.V PARAM */);
  threadData->lastEquationSolved = 1824;
}

/*
equation index: 1825
type: SIMPLE_ASSIGN
roo.air.fluInt.V = roo.air.V
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1825(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1825};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[240]] /* roo.air.fluInt.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[40]] /* roo.air.V PARAM */);
  threadData->lastEquationSolved = 1825;
}

/*
equation index: 1826
type: SIMPLE_ASSIGN
roo.air.fluInt.m_start = roo.air.fluInt.rho_start * roo.air.fluInt.V
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1826(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1826};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[241]] /* roo.air.fluInt.m_start PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[243]] /* roo.air.fluInt.rho_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[240]] /* roo.air.fluInt.V PARAM */));
  threadData->lastEquationSolved = 1826;
}

/*
equation index: 1828
type: SIMPLE_ASSIGN
roo.air.fluInt.p_start = roo.air.p_start
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1828(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1828};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[242]] /* roo.air.fluInt.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[244]] /* roo.air.p_start PARAM */);
  threadData->lastEquationSolved = 1828;
}

/*
equation index: 1839
type: SIMPLE_ASSIGN
roo.air.surIde[6].name = "east_wall"
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1839(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1839};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[30]] /* roo.air.surIde[6].name PARAM */) = _OMC_LIT83;
  threadData->lastEquationSolved = 1839;
}

/*
equation index: 1843
type: SIMPLE_ASSIGN
roo.air.surIde[5].name = "west_wall"
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1843(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1843};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[29]] /* roo.air.surIde[5].name PARAM */) = _OMC_LIT84;
  threadData->lastEquationSolved = 1843;
}

/*
equation index: 1847
type: SIMPLE_ASSIGN
roo.air.surIde[4].name = "north_wall"
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1847(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1847};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[28]] /* roo.air.surIde[4].name PARAM */) = _OMC_LIT85;
  threadData->lastEquationSolved = 1847;
}

/*
equation index: 1851
type: SIMPLE_ASSIGN
roo.air.surIde[3].name = "south_wall"
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1851(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1851};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[27]] /* roo.air.surIde[3].name PARAM */) = _OMC_LIT86;
  threadData->lastEquationSolved = 1851;
}

/*
equation index: 1855
type: SIMPLE_ASSIGN
roo.air.surIde[2].name = "ceiling"
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1855(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1855};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[26]] /* roo.air.surIde[2].name PARAM */) = _OMC_LIT87;
  threadData->lastEquationSolved = 1855;
}

/*
equation index: 1859
type: SIMPLE_ASSIGN
roo.air.surIde[1].name = "floor"
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1859(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1859};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[25]] /* roo.air.surIde[1].name PARAM */) = _OMC_LIT88;
  threadData->lastEquationSolved = 1859;
}

/*
equation index: 1872
type: SIMPLE_ASSIGN
roo.air.cfd.rho_start = roo.air.rho_start
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1872(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1872};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[43]] /* roo.air.cfd.rho_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[245]] /* roo.air.rho_start PARAM */);
  threadData->lastEquationSolved = 1872;
}

/*
equation index: 1874
type: SIMPLE_ASSIGN
roo.air.portName[2] = roo.portName[2]
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1874(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1874};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[17]] /* roo.air.portName[2] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[59]] /* roo.portName[2] PARAM */);
  threadData->lastEquationSolved = 1874;
}

/*
equation index: 1875
type: SIMPLE_ASSIGN
roo.air.cfd.portName[2] = roo.air.portName[2]
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1875(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1875};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[3]] /* roo.air.cfd.portName[2] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[17]] /* roo.air.portName[2] PARAM */);
  threadData->lastEquationSolved = 1875;
}

/*
equation index: 1876
type: SIMPLE_ASSIGN
roo.air.portName[1] = roo.portName[1]
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1876(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1876};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[16]] /* roo.air.portName[1] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[58]] /* roo.portName[1] PARAM */);
  threadData->lastEquationSolved = 1876;
}

/*
equation index: 1877
type: SIMPLE_ASSIGN
roo.air.cfd.portName[1] = roo.air.portName[1]
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1877(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1877};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[2]] /* roo.air.cfd.portName[1] PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[16]] /* roo.air.portName[1] PARAM */);
  threadData->lastEquationSolved = 1877;
}

/*
equation index: 1878
type: SIMPLE_ASSIGN
roo.air.cfd.sensorName[1] = ""
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1878(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1878};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[4]] /* roo.air.cfd.sensorName[1] PARAM */) = _OMC_LIT46;
  threadData->lastEquationSolved = 1878;
}

/*
equation index: 1884
type: SIMPLE_ASSIGN
roo.air.cfd.surIde[6].name = "east_wall"
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1884(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1884};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[10]] /* roo.air.cfd.surIde[6].name PARAM */) = _OMC_LIT83;
  threadData->lastEquationSolved = 1884;
}

/*
equation index: 1888
type: SIMPLE_ASSIGN
roo.air.cfd.surIde[5].name = "west_wall"
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1888(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1888};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[9]] /* roo.air.cfd.surIde[5].name PARAM */) = _OMC_LIT84;
  threadData->lastEquationSolved = 1888;
}

/*
equation index: 1892
type: SIMPLE_ASSIGN
roo.air.cfd.surIde[4].name = "north_wall"
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1892(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1892};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[8]] /* roo.air.cfd.surIde[4].name PARAM */) = _OMC_LIT85;
  threadData->lastEquationSolved = 1892;
}

/*
equation index: 1896
type: SIMPLE_ASSIGN
roo.air.cfd.surIde[3].name = "south_wall"
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1896(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1896};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[7]] /* roo.air.cfd.surIde[3].name PARAM */) = _OMC_LIT86;
  threadData->lastEquationSolved = 1896;
}

/*
equation index: 1900
type: SIMPLE_ASSIGN
roo.air.cfd.surIde[2].name = "ceiling"
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1900(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1900};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[6]] /* roo.air.cfd.surIde[2].name PARAM */) = _OMC_LIT87;
  threadData->lastEquationSolved = 1900;
}

/*
equation index: 1904
type: SIMPLE_ASSIGN
roo.air.cfd.surIde[1].name = "floor"
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1904(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1904};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[5]] /* roo.air.cfd.surIde[1].name PARAM */) = _OMC_LIT88;
  threadData->lastEquationSolved = 1904;
}

/*
equation index: 1927
type: SIMPLE_ASSIGN
roo.air.cfdFilNam = roo.absCfdFilNam
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1927(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1927};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[11]] /* roo.air.cfdFilNam PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[0]] /* roo.absCfdFilNam PARAM */);
  threadData->lastEquationSolved = 1927;
}

/*
equation index: 1928
type: SIMPLE_ASSIGN
roo.air.cfd.cfdFilNam = roo.air.cfdFilNam
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1928(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1928};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[1]] /* roo.air.cfd.cfdFilNam PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[11]] /* roo.air.cfdFilNam PARAM */);
  threadData->lastEquationSolved = 1928;
}

/*
equation index: 1929
type: SIMPLE_ASSIGN
roo.air.samplePeriod = roo.samplePeriod
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1929(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1929};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[246]] /* roo.air.samplePeriod PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1239]] /* roo.samplePeriod PARAM */);
  threadData->lastEquationSolved = 1929;
}

/*
equation index: 1930
type: SIMPLE_ASSIGN
roo.air.cfd.samplePeriod = roo.air.samplePeriod
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1930(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1930};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[44]] /* roo.air.cfd.samplePeriod PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[246]] /* roo.air.samplePeriod PARAM */);
  threadData->lastEquationSolved = 1930;
}

/*
equation index: 1931
type: SIMPLE_ASSIGN
roo.air.sensorName[1] = ""
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1931(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1931};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[18]] /* roo.air.sensorName[1] PARAM */) = _OMC_LIT46;
  threadData->lastEquationSolved = 1931;
}

/*
equation index: 1936
type: SIMPLE_ASSIGN
roo.air.surBou[6].A = roo.surBou[6].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1936(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1936};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[253]] /* roo.air.surBou[6].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1245]] /* roo.surBou[6].A PARAM */);
  threadData->lastEquationSolved = 1936;
}

/*
equation index: 1937
type: SIMPLE_ASSIGN
roo.air.ASurBou[6] = roo.air.surBou[6].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1937(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1937};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[27]] /* roo.air.ASurBou[6] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[253]] /* roo.air.surBou[6].A PARAM */);
  threadData->lastEquationSolved = 1937;
}

/*
equation index: 1938
type: SIMPLE_ASSIGN
roo.air.surBou[5].A = roo.surBou[5].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1938(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1938};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[252]] /* roo.air.surBou[5].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1244]] /* roo.surBou[5].A PARAM */);
  threadData->lastEquationSolved = 1938;
}

/*
equation index: 1939
type: SIMPLE_ASSIGN
roo.air.ASurBou[5] = roo.air.surBou[5].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1939(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1939};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[26]] /* roo.air.ASurBou[5] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[252]] /* roo.air.surBou[5].A PARAM */);
  threadData->lastEquationSolved = 1939;
}

/*
equation index: 1940
type: SIMPLE_ASSIGN
roo.air.surBou[4].A = roo.surBou[4].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1940(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1940};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[251]] /* roo.air.surBou[4].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1243]] /* roo.surBou[4].A PARAM */);
  threadData->lastEquationSolved = 1940;
}

/*
equation index: 1941
type: SIMPLE_ASSIGN
roo.air.ASurBou[4] = roo.air.surBou[4].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1941(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1941};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[25]] /* roo.air.ASurBou[4] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[251]] /* roo.air.surBou[4].A PARAM */);
  threadData->lastEquationSolved = 1941;
}

/*
equation index: 1942
type: SIMPLE_ASSIGN
roo.air.surBou[3].A = roo.surBou[3].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1942(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1942};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[250]] /* roo.air.surBou[3].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1242]] /* roo.surBou[3].A PARAM */);
  threadData->lastEquationSolved = 1942;
}

/*
equation index: 1943
type: SIMPLE_ASSIGN
roo.air.ASurBou[3] = roo.air.surBou[3].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1943(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1943};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[24]] /* roo.air.ASurBou[3] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[250]] /* roo.air.surBou[3].A PARAM */);
  threadData->lastEquationSolved = 1943;
}

/*
equation index: 1944
type: SIMPLE_ASSIGN
roo.air.surBou[2].A = roo.surBou[2].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1944(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1944};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[249]] /* roo.air.surBou[2].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1241]] /* roo.surBou[2].A PARAM */);
  threadData->lastEquationSolved = 1944;
}

/*
equation index: 1945
type: SIMPLE_ASSIGN
roo.air.ASurBou[2] = roo.air.surBou[2].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1945(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1945};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[23]] /* roo.air.ASurBou[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[249]] /* roo.air.surBou[2].A PARAM */);
  threadData->lastEquationSolved = 1945;
}

/*
equation index: 1946
type: SIMPLE_ASSIGN
roo.air.surBou[1].A = roo.surBou[1].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1946(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1946};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[248]] /* roo.air.surBou[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1240]] /* roo.surBou[1].A PARAM */);
  threadData->lastEquationSolved = 1946;
}

/*
equation index: 1947
type: SIMPLE_ASSIGN
roo.air.ASurBou[1] = roo.air.surBou[1].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1947(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1947};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[22]] /* roo.air.ASurBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[248]] /* roo.air.surBou[1].A PARAM */);
  threadData->lastEquationSolved = 1947;
}

/*
equation index: 1948
type: SIMPLE_ASSIGN
roo.air.datConBou[1].A = roo.datConBou[1].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1948(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1948};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[70]] /* roo.air.datConBou[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[296]] /* roo.datConBou[1].A PARAM */);
  threadData->lastEquationSolved = 1948;
}

/*
equation index: 1949
type: SIMPLE_ASSIGN
roo.air.AConBou[1] = roo.air.datConBou[1].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1949(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1949};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[16]] /* roo.air.AConBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[70]] /* roo.air.datConBou[1].A PARAM */);
  threadData->lastEquationSolved = 1949;
}

/*
equation index: 1950
type: SIMPLE_ASSIGN
roo.air.datConPar[1].A = roo.datConPar[1].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1950(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1950};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[175]] /* roo.air.datConPar[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[401]] /* roo.datConPar[1].A PARAM */);
  threadData->lastEquationSolved = 1950;
}

/*
equation index: 1951
type: SIMPLE_ASSIGN
roo.air.AConPar[1] = roo.air.datConPar[1].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1951(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1951};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[21]] /* roo.air.AConPar[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[175]] /* roo.air.datConPar[1].A PARAM */);
  threadData->lastEquationSolved = 1951;
}

/*
equation index: 1952
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].AWin = roo.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1952(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1952};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[116]] /* roo.air.datConExtWin[1].AWin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[342]] /* roo.datConExtWin[1].AWin PARAM */);
  threadData->lastEquationSolved = 1952;
}

/*
equation index: 1953
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].fFra = roo.datConExtWin[1].fFra
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1953(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1953};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[120]] /* roo.air.datConExtWin[1].fFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[346]] /* roo.datConExtWin[1].fFra PARAM */);
  threadData->lastEquationSolved = 1953;
}

/*
equation index: 1954
type: SIMPLE_ASSIGN
roo.air.AConExtWinFra[1] = roo.air.datConExtWin[1].fFra * roo.air.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1954(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1954};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[18]] /* roo.air.AConExtWinFra[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[120]] /* roo.air.datConExtWin[1].fFra PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[116]] /* roo.air.datConExtWin[1].AWin PARAM */));
  threadData->lastEquationSolved = 1954;
}

/*
equation index: 1955
type: SIMPLE_ASSIGN
roo.air.AConExtWinGla[1] = (1.0 - roo.air.datConExtWin[1].fFra) * roo.air.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1955(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1955};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[19]] /* roo.air.AConExtWinGla[1] PARAM */) = (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[120]] /* roo.air.datConExtWin[1].fFra PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[116]] /* roo.air.datConExtWin[1].AWin PARAM */));
  threadData->lastEquationSolved = 1955;
}

/*
equation index: 1956
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].AOpa = roo.datConExtWin[1].AOpa
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1956(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1956};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[115]] /* roo.air.datConExtWin[1].AOpa PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[341]] /* roo.datConExtWin[1].AOpa PARAM */);
  threadData->lastEquationSolved = 1956;
}

/*
equation index: 1957
type: SIMPLE_ASSIGN
roo.air.AConExtWinOpa[1] = roo.air.datConExtWin[1].AOpa
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1957(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1957};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[20]] /* roo.air.AConExtWinOpa[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[115]] /* roo.air.datConExtWin[1].AOpa PARAM */);
  threadData->lastEquationSolved = 1957;
}

/*
equation index: 1958
type: SIMPLE_ASSIGN
roo.air.datConExt[1].A = roo.datConExt[1].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1958(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1958};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[91]] /* roo.air.datConExt[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[317]] /* roo.datConExt[1].A PARAM */);
  threadData->lastEquationSolved = 1958;
}

/*
equation index: 1959
type: SIMPLE_ASSIGN
roo.air.AConExt[1] = roo.air.datConExt[1].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1959(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1959};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[17]] /* roo.air.AConExt[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[91]] /* roo.air.datConExt[1].A PARAM */);
  threadData->lastEquationSolved = 1959;
}

/*
equation index: 1967
type: SIMPLE_ASSIGN
roo.air.dummyCon.R = roo.air.dummyCon.material[1].R
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1967(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1967};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[196]] /* roo.air.dummyCon.R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[202]] /* roo.air.dummyCon.material[1].R PARAM */);
  threadData->lastEquationSolved = 1967;
}

/*
equation index: 1974
type: SIMPLE_ASSIGN
roo.air.surBou[6].name = roo.surBou[6].name
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1974(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1974};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[24]] /* roo.air.surBou[6].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[77]] /* roo.surBou[6].name PARAM */);
  threadData->lastEquationSolved = 1974;
}

/*
equation index: 1976
type: SIMPLE_ASSIGN
roo.air.surBou[6].absSol = roo.surBou[6].absSol
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1976(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1976};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[265]] /* roo.air.surBou[6].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1257]] /* roo.surBou[6].absSol PARAM */);
  threadData->lastEquationSolved = 1976;
}

/*
equation index: 1977
type: SIMPLE_ASSIGN
roo.air.surBou[6].absIR = roo.surBou[6].absIR
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1977(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1977};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[259]] /* roo.air.surBou[6].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1251]] /* roo.surBou[6].absIR PARAM */);
  threadData->lastEquationSolved = 1977;
}

/*
equation index: 1980
type: SIMPLE_ASSIGN
roo.air.surBou[5].name = roo.surBou[5].name
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1980(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1980};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[23]] /* roo.air.surBou[5].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[76]] /* roo.surBou[5].name PARAM */);
  threadData->lastEquationSolved = 1980;
}

/*
equation index: 1982
type: SIMPLE_ASSIGN
roo.air.surBou[5].absSol = roo.surBou[5].absSol
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1982(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1982};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[264]] /* roo.air.surBou[5].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1256]] /* roo.surBou[5].absSol PARAM */);
  threadData->lastEquationSolved = 1982;
}

/*
equation index: 1983
type: SIMPLE_ASSIGN
roo.air.surBou[5].absIR = roo.surBou[5].absIR
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1983(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1983};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[258]] /* roo.air.surBou[5].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1250]] /* roo.surBou[5].absIR PARAM */);
  threadData->lastEquationSolved = 1983;
}

/*
equation index: 1986
type: SIMPLE_ASSIGN
roo.air.surBou[4].name = roo.surBou[4].name
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1986(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1986};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[22]] /* roo.air.surBou[4].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[75]] /* roo.surBou[4].name PARAM */);
  threadData->lastEquationSolved = 1986;
}

/*
equation index: 1988
type: SIMPLE_ASSIGN
roo.air.surBou[4].absSol = roo.surBou[4].absSol
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1988(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1988};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[263]] /* roo.air.surBou[4].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1255]] /* roo.surBou[4].absSol PARAM */);
  threadData->lastEquationSolved = 1988;
}

/*
equation index: 1989
type: SIMPLE_ASSIGN
roo.air.surBou[4].absIR = roo.surBou[4].absIR
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1989(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1989};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[257]] /* roo.air.surBou[4].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1249]] /* roo.surBou[4].absIR PARAM */);
  threadData->lastEquationSolved = 1989;
}

/*
equation index: 1992
type: SIMPLE_ASSIGN
roo.air.surBou[3].name = roo.surBou[3].name
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1992(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1992};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[21]] /* roo.air.surBou[3].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[74]] /* roo.surBou[3].name PARAM */);
  threadData->lastEquationSolved = 1992;
}

/*
equation index: 1994
type: SIMPLE_ASSIGN
roo.air.surBou[3].absSol = roo.surBou[3].absSol
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1994(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1994};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[262]] /* roo.air.surBou[3].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1254]] /* roo.surBou[3].absSol PARAM */);
  threadData->lastEquationSolved = 1994;
}

/*
equation index: 1995
type: SIMPLE_ASSIGN
roo.air.surBou[3].absIR = roo.surBou[3].absIR
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1995(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1995};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[256]] /* roo.air.surBou[3].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1248]] /* roo.surBou[3].absIR PARAM */);
  threadData->lastEquationSolved = 1995;
}

/*
equation index: 1998
type: SIMPLE_ASSIGN
roo.air.surBou[2].name = roo.surBou[2].name
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_1998(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1998};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[20]] /* roo.air.surBou[2].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[73]] /* roo.surBou[2].name PARAM */);
  threadData->lastEquationSolved = 1998;
}

/*
equation index: 2000
type: SIMPLE_ASSIGN
roo.air.surBou[2].absSol = roo.surBou[2].absSol
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2000(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2000};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[261]] /* roo.air.surBou[2].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1253]] /* roo.surBou[2].absSol PARAM */);
  threadData->lastEquationSolved = 2000;
}

/*
equation index: 2001
type: SIMPLE_ASSIGN
roo.air.surBou[2].absIR = roo.surBou[2].absIR
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2001(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2001};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[255]] /* roo.air.surBou[2].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1247]] /* roo.surBou[2].absIR PARAM */);
  threadData->lastEquationSolved = 2001;
}

/*
equation index: 2004
type: SIMPLE_ASSIGN
roo.air.surBou[1].name = roo.surBou[1].name
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2004(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2004};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[19]] /* roo.air.surBou[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[72]] /* roo.surBou[1].name PARAM */);
  threadData->lastEquationSolved = 2004;
}

/*
equation index: 2006
type: SIMPLE_ASSIGN
roo.air.surBou[1].absSol = roo.surBou[1].absSol
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2006(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2006};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[260]] /* roo.air.surBou[1].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1252]] /* roo.surBou[1].absSol PARAM */);
  threadData->lastEquationSolved = 2006;
}

/*
equation index: 2007
type: SIMPLE_ASSIGN
roo.air.surBou[1].absIR = roo.surBou[1].absIR
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2007(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2007};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[254]] /* roo.air.surBou[1].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1246]] /* roo.surBou[1].absIR PARAM */);
  threadData->lastEquationSolved = 2007;
}

/*
equation index: 2012
type: SIMPLE_ASSIGN
roo.air.datConBou[1].T_b_start = roo.datConBou[1].T_b_start
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2012(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2012};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[72]] /* roo.air.datConBou[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[298]] /* roo.datConBou[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 2012;
}

/*
equation index: 2013
type: SIMPLE_ASSIGN
roo.air.datConBou[1].T_a_start = roo.datConBou[1].T_a_start
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2013(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2013};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[71]] /* roo.air.datConBou[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[297]] /* roo.datConBou[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 2013;
}

/*
equation index: 2017
type: SIMPLE_ASSIGN
roo.air.datConBou[1].azi = roo.datConBou[1].azi
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2017(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2017};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[73]] /* roo.air.datConBou[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[299]] /* roo.datConBou[1].azi PARAM */);
  threadData->lastEquationSolved = 2017;
}

/*
equation index: 2019
type: SIMPLE_ASSIGN
roo.air.datConBou[1].layers.roughness_a = roo.datConBou[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2019(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2019};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[55]] /* roo.air.datConBou[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[131]] /* roo.datConBou[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 2019;
}

/*
equation index: 2020
type: SIMPLE_ASSIGN
roo.air.datConBou[1].layers.absSol_b = roo.datConBou[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2020(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2020};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[78]] /* roo.air.datConBou[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[304]] /* roo.datConBou[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 2020;
}

/*
equation index: 2021
type: SIMPLE_ASSIGN
roo.air.datConBou[1].layers.absSol_a = roo.datConBou[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2021(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2021};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[77]] /* roo.air.datConBou[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[303]] /* roo.datConBou[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 2021;
}

/*
equation index: 2022
type: SIMPLE_ASSIGN
roo.air.datConBou[1].layers.absIR_b = roo.datConBou[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2022(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2022};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[76]] /* roo.air.datConBou[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[302]] /* roo.datConBou[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 2022;
}

/*
equation index: 2023
type: SIMPLE_ASSIGN
roo.air.datConBou[1].layers.absIR_a = roo.datConBou[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2023(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2023};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[75]] /* roo.air.datConBou[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[301]] /* roo.datConBou[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 2023;
}

/*
equation index: 2026
type: SIMPLE_ASSIGN
roo.air.datConBou[1].layers.material[1].LHea = roo.datConBou[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2026(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2026};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[79]] /* roo.air.datConBou[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[305]] /* roo.datConBou[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 2026;
}

/*
equation index: 2029
type: SIMPLE_ASSIGN
roo.air.datConBou[1].layers.material[1].nStaReal = roo.datConBou[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2029(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2029};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[86]] /* roo.air.datConBou[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[312]] /* roo.datConBou[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 2029;
}

/*
equation index: 2030
type: SIMPLE_ASSIGN
roo.air.datConBou[1].layers.material[1].piMat = roo.datConBou[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2030(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2030};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[87]] /* roo.air.datConBou[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[313]] /* roo.datConBou[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 2030;
}

/*
equation index: 2031
type: SIMPLE_ASSIGN
roo.air.datConBou[1].layers.material[1].piRef = roo.datConBou[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2031(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2031};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[88]] /* roo.air.datConBou[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[314]] /* roo.datConBou[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 2031;
}

/*
equation index: 2034
type: SIMPLE_ASSIGN
roo.air.datConBou[1].layers.material[1].nStaRef = roo.datConBou[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2034(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2034};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[52]] /* roo.air.datConBou[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[128]] /* roo.datConBou[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 2034;
}

/*
equation index: 2035
type: SIMPLE_ASSIGN
roo.air.datConBou[1].layers.material[1].R = roo.datConBou[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2035(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2035};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[80]] /* roo.air.datConBou[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[306]] /* roo.datConBou[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 2035;
}

/*
equation index: 2036
type: SIMPLE_ASSIGN
roo.air.datConBou[1].layers.material[1].d = roo.datConBou[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2036(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2036};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[84]] /* roo.air.datConBou[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[310]] /* roo.datConBou[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 2036;
}

/*
equation index: 2037
type: SIMPLE_ASSIGN
roo.air.datConBou[1].layers.material[1].c = roo.datConBou[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2037(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2037};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* roo.air.datConBou[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[309]] /* roo.datConBou[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 2037;
}

/*
equation index: 2038
type: SIMPLE_ASSIGN
roo.air.datConBou[1].layers.material[1].k = roo.datConBou[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2038(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2038};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[85]] /* roo.air.datConBou[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[311]] /* roo.datConBou[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 2038;
}

/*
equation index: 2039
type: SIMPLE_ASSIGN
roo.air.datConBou[1].layers.material[1].x = roo.datConBou[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2039(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2039};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[89]] /* roo.air.datConBou[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[315]] /* roo.datConBou[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 2039;
}

/*
equation index: 2041
type: SIMPLE_ASSIGN
roo.air.datConBou[1].name = roo.datConBou[1].name
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2041(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2041};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[12]] /* roo.air.datConBou[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[32]] /* roo.datConBou[1].name PARAM */);
  threadData->lastEquationSolved = 2041;
}

/*
equation index: 2045
type: SIMPLE_ASSIGN
roo.air.datConPar[1].T_b_start = roo.datConPar[1].T_b_start
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2045(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2045};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[177]] /* roo.air.datConPar[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[403]] /* roo.datConPar[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 2045;
}

/*
equation index: 2046
type: SIMPLE_ASSIGN
roo.air.datConPar[1].T_a_start = roo.datConPar[1].T_a_start
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2046(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2046};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[176]] /* roo.air.datConPar[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[402]] /* roo.datConPar[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 2046;
}

/*
equation index: 2050
type: SIMPLE_ASSIGN
roo.air.datConPar[1].azi = roo.datConPar[1].azi
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2050(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2050};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[178]] /* roo.air.datConPar[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[404]] /* roo.datConPar[1].azi PARAM */);
  threadData->lastEquationSolved = 2050;
}

/*
equation index: 2052
type: SIMPLE_ASSIGN
roo.air.datConPar[1].layers.roughness_a = roo.datConPar[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2052(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2052};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[73]] /* roo.air.datConPar[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[149]] /* roo.datConPar[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 2052;
}

/*
equation index: 2053
type: SIMPLE_ASSIGN
roo.air.datConPar[1].layers.absSol_b = roo.datConPar[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2053(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2053};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[183]] /* roo.air.datConPar[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[409]] /* roo.datConPar[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 2053;
}

/*
equation index: 2054
type: SIMPLE_ASSIGN
roo.air.datConPar[1].layers.absSol_a = roo.datConPar[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2054(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2054};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[182]] /* roo.air.datConPar[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[408]] /* roo.datConPar[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 2054;
}

/*
equation index: 2055
type: SIMPLE_ASSIGN
roo.air.datConPar[1].layers.absIR_b = roo.datConPar[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2055(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2055};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[181]] /* roo.air.datConPar[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[407]] /* roo.datConPar[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 2055;
}

/*
equation index: 2056
type: SIMPLE_ASSIGN
roo.air.datConPar[1].layers.absIR_a = roo.datConPar[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2056(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2056};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[180]] /* roo.air.datConPar[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[406]] /* roo.datConPar[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 2056;
}

/*
equation index: 2059
type: SIMPLE_ASSIGN
roo.air.datConPar[1].layers.material[1].LHea = roo.datConPar[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2059(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2059};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[184]] /* roo.air.datConPar[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[410]] /* roo.datConPar[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 2059;
}

/*
equation index: 2062
type: SIMPLE_ASSIGN
roo.air.datConPar[1].layers.material[1].nStaReal = roo.datConPar[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2062(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2062};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[191]] /* roo.air.datConPar[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[417]] /* roo.datConPar[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 2062;
}

/*
equation index: 2063
type: SIMPLE_ASSIGN
roo.air.datConPar[1].layers.material[1].piMat = roo.datConPar[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2063(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2063};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[192]] /* roo.air.datConPar[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[418]] /* roo.datConPar[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 2063;
}

/*
equation index: 2064
type: SIMPLE_ASSIGN
roo.air.datConPar[1].layers.material[1].piRef = roo.datConPar[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2064(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2064};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[193]] /* roo.air.datConPar[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[419]] /* roo.datConPar[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 2064;
}

/*
equation index: 2067
type: SIMPLE_ASSIGN
roo.air.datConPar[1].layers.material[1].nStaRef = roo.datConPar[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2067(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2067};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[70]] /* roo.air.datConPar[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[146]] /* roo.datConPar[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 2067;
}

/*
equation index: 2068
type: SIMPLE_ASSIGN
roo.air.datConPar[1].layers.material[1].R = roo.datConPar[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2068(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2068};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[185]] /* roo.air.datConPar[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[411]] /* roo.datConPar[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 2068;
}

/*
equation index: 2069
type: SIMPLE_ASSIGN
roo.air.datConPar[1].layers.material[1].d = roo.datConPar[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2069(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2069};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[189]] /* roo.air.datConPar[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[415]] /* roo.datConPar[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 2069;
}

/*
equation index: 2070
type: SIMPLE_ASSIGN
roo.air.datConPar[1].layers.material[1].c = roo.datConPar[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2070(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2070};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[188]] /* roo.air.datConPar[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[414]] /* roo.datConPar[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 2070;
}

/*
equation index: 2071
type: SIMPLE_ASSIGN
roo.air.datConPar[1].layers.material[1].k = roo.datConPar[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2071(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2071};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[190]] /* roo.air.datConPar[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[416]] /* roo.datConPar[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 2071;
}

/*
equation index: 2072
type: SIMPLE_ASSIGN
roo.air.datConPar[1].layers.material[1].x = roo.datConPar[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2072(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2072};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* roo.air.datConPar[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[420]] /* roo.datConPar[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 2072;
}

/*
equation index: 2074
type: SIMPLE_ASSIGN
roo.air.datConPar[1].name = roo.datConPar[1].name
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2074(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2074};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[15]] /* roo.air.datConPar[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[35]] /* roo.datConPar[1].name PARAM */);
  threadData->lastEquationSolved = 2074;
}

/*
equation index: 2078
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.absSolFra = roo.datConExtWin[1].glaSys.absSolFra
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2078(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2078};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* roo.air.datConExtWin[1].glaSys.absSolFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[349]] /* roo.datConExtWin[1].glaSys.absSolFra PARAM */);
  threadData->lastEquationSolved = 2078;
}

/*
equation index: 2079
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.absIRFra = roo.datConExtWin[1].glaSys.absIRFra
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2079(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2079};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[122]] /* roo.air.datConExtWin[1].glaSys.absIRFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[348]] /* roo.datConExtWin[1].glaSys.absIRFra PARAM */);
  threadData->lastEquationSolved = 2079;
}

/*
equation index: 2080
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.UFra = roo.datConExtWin[1].glaSys.UFra
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2080(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2080};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[121]] /* roo.air.datConExtWin[1].glaSys.UFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[347]] /* roo.datConExtWin[1].glaSys.UFra PARAM */);
  threadData->lastEquationSolved = 2080;
}

/*
equation index: 2081
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.shade.tauIR_b = roo.datConExtWin[1].glaSys.shade.tauIR_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2081(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2081};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[146]] /* roo.air.datConExtWin[1].glaSys.shade.tauIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[372]] /* roo.datConExtWin[1].glaSys.shade.tauIR_b PARAM */);
  threadData->lastEquationSolved = 2081;
}

/*
equation index: 2082
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.shade.tauIR_a = roo.datConExtWin[1].glaSys.shade.tauIR_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2082(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2082};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[145]] /* roo.air.datConExtWin[1].glaSys.shade.tauIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[371]] /* roo.datConExtWin[1].glaSys.shade.tauIR_a PARAM */);
  threadData->lastEquationSolved = 2082;
}

/*
equation index: 2083
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.shade.absIR_b = roo.datConExtWin[1].glaSys.shade.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2083(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2083};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[142]] /* roo.air.datConExtWin[1].glaSys.shade.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[368]] /* roo.datConExtWin[1].glaSys.shade.absIR_b PARAM */);
  threadData->lastEquationSolved = 2083;
}

/*
equation index: 2084
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.shade.absIR_a = roo.datConExtWin[1].glaSys.shade.absIR_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2084(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2084};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[141]] /* roo.air.datConExtWin[1].glaSys.shade.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[367]] /* roo.datConExtWin[1].glaSys.shade.absIR_a PARAM */);
  threadData->lastEquationSolved = 2084;
}

/*
equation index: 2085
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.shade.rhoSol_b = roo.datConExtWin[1].glaSys.shade.rhoSol_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2085(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2085};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[144]] /* roo.air.datConExtWin[1].glaSys.shade.rhoSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[370]] /* roo.datConExtWin[1].glaSys.shade.rhoSol_b PARAM */);
  threadData->lastEquationSolved = 2085;
}

/*
equation index: 2086
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.shade.rhoSol_a = roo.datConExtWin[1].glaSys.shade.rhoSol_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2086(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2086};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[143]] /* roo.air.datConExtWin[1].glaSys.shade.rhoSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[369]] /* roo.datConExtWin[1].glaSys.shade.rhoSol_a PARAM */);
  threadData->lastEquationSolved = 2086;
}

/*
equation index: 2087
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.shade.tauSol_b = roo.datConExtWin[1].glaSys.shade.tauSol_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2087(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2087};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[148]] /* roo.air.datConExtWin[1].glaSys.shade.tauSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[374]] /* roo.datConExtWin[1].glaSys.shade.tauSol_b PARAM */);
  threadData->lastEquationSolved = 2087;
}

/*
equation index: 2088
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.shade.tauSol_a = roo.datConExtWin[1].glaSys.shade.tauSol_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2088(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2088};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[147]] /* roo.air.datConExtWin[1].glaSys.shade.tauSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[373]] /* roo.datConExtWin[1].glaSys.shade.tauSol_a PARAM */);
  threadData->lastEquationSolved = 2088;
}

/*
equation index: 2089
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.gas[1].P0 = roo.datConExtWin[1].glaSys.gas[1].P0
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2089(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2089};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[125]] /* roo.air.datConExtWin[1].glaSys.gas[1].P0 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[351]] /* roo.datConExtWin[1].glaSys.gas[1].P0 PARAM */);
  threadData->lastEquationSolved = 2089;
}

/*
equation index: 2090
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.gas[1].MM = roo.datConExtWin[1].glaSys.gas[1].MM
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2090(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2090};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[124]] /* roo.air.datConExtWin[1].glaSys.gas[1].MM PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[350]] /* roo.datConExtWin[1].glaSys.gas[1].MM PARAM */);
  threadData->lastEquationSolved = 2090;
}

/*
equation index: 2091
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.gas[1].b_c = roo.datConExtWin[1].glaSys.gas[1].b_c
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2091(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2091};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[129]] /* roo.air.datConExtWin[1].glaSys.gas[1].b_c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[355]] /* roo.datConExtWin[1].glaSys.gas[1].b_c PARAM */);
  threadData->lastEquationSolved = 2091;
}

/*
equation index: 2092
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.gas[1].a_c = roo.datConExtWin[1].glaSys.gas[1].a_c
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2092(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2092};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[126]] /* roo.air.datConExtWin[1].glaSys.gas[1].a_c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[352]] /* roo.datConExtWin[1].glaSys.gas[1].a_c PARAM */);
  threadData->lastEquationSolved = 2092;
}

/*
equation index: 2093
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.gas[1].b_mu = roo.datConExtWin[1].glaSys.gas[1].b_mu
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2093(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2093};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[131]] /* roo.air.datConExtWin[1].glaSys.gas[1].b_mu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[357]] /* roo.datConExtWin[1].glaSys.gas[1].b_mu PARAM */);
  threadData->lastEquationSolved = 2093;
}

/*
equation index: 2094
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.gas[1].a_mu = roo.datConExtWin[1].glaSys.gas[1].a_mu
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2094(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2094};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[128]] /* roo.air.datConExtWin[1].glaSys.gas[1].a_mu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[354]] /* roo.datConExtWin[1].glaSys.gas[1].a_mu PARAM */);
  threadData->lastEquationSolved = 2094;
}

/*
equation index: 2095
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.gas[1].b_k = roo.datConExtWin[1].glaSys.gas[1].b_k
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2095(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2095};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[130]] /* roo.air.datConExtWin[1].glaSys.gas[1].b_k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[356]] /* roo.datConExtWin[1].glaSys.gas[1].b_k PARAM */);
  threadData->lastEquationSolved = 2095;
}

/*
equation index: 2096
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.gas[1].a_k = roo.datConExtWin[1].glaSys.gas[1].a_k
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2096(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2096};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[127]] /* roo.air.datConExtWin[1].glaSys.gas[1].a_k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[353]] /* roo.datConExtWin[1].glaSys.gas[1].a_k PARAM */);
  threadData->lastEquationSolved = 2096;
}

/*
equation index: 2097
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.gas[1].x = roo.datConExtWin[1].glaSys.gas[1].x
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2097(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2097};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[132]] /* roo.air.datConExtWin[1].glaSys.gas[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[358]] /* roo.datConExtWin[1].glaSys.gas[1].x PARAM */);
  threadData->lastEquationSolved = 2097;
}

/*
equation index: 2098
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.glass[1].absIR_b = roo.datConExtWin[1].glaSys.glass[1].absIR_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2098(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2098};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[134]] /* roo.air.datConExtWin[1].glaSys.glass[1].absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[360]] /* roo.datConExtWin[1].glaSys.glass[1].absIR_b PARAM */);
  threadData->lastEquationSolved = 2098;
}

/*
equation index: 2099
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.glass[1].absIR_a = roo.datConExtWin[1].glaSys.glass[1].absIR_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2099(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2099};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[133]] /* roo.air.datConExtWin[1].glaSys.glass[1].absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[359]] /* roo.datConExtWin[1].glaSys.glass[1].absIR_a PARAM */);
  threadData->lastEquationSolved = 2099;
}

/*
equation index: 2100
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.glass[1].tauIR = roo.datConExtWin[1].glaSys.glass[1].tauIR
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2100(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2100};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[138]] /* roo.air.datConExtWin[1].glaSys.glass[1].tauIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[364]] /* roo.datConExtWin[1].glaSys.glass[1].tauIR PARAM */);
  threadData->lastEquationSolved = 2100;
}

/*
equation index: 2101
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.glass[1].rhoSol_b[1] = roo.datConExtWin[1].glaSys.glass[1].rhoSol_b[1]
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2101(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2101};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[137]] /* roo.air.datConExtWin[1].glaSys.glass[1].rhoSol_b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[363]] /* roo.datConExtWin[1].glaSys.glass[1].rhoSol_b[1] PARAM */);
  threadData->lastEquationSolved = 2101;
}

/*
equation index: 2102
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.glass[1].rhoSol_a[1] = roo.datConExtWin[1].glaSys.glass[1].rhoSol_a[1]
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2102(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2102};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[136]] /* roo.air.datConExtWin[1].glaSys.glass[1].rhoSol_a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[362]] /* roo.datConExtWin[1].glaSys.glass[1].rhoSol_a[1] PARAM */);
  threadData->lastEquationSolved = 2102;
}

/*
equation index: 2103
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.glass[1].tauSol[1] = roo.datConExtWin[1].glaSys.glass[1].tauSol[1]
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2103(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2103};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[139]] /* roo.air.datConExtWin[1].glaSys.glass[1].tauSol[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[365]] /* roo.datConExtWin[1].glaSys.glass[1].tauSol[1] PARAM */);
  threadData->lastEquationSolved = 2103;
}

/*
equation index: 2104
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.glass[1].k = roo.datConExtWin[1].glaSys.glass[1].k
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2104(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2104};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[135]] /* roo.air.datConExtWin[1].glaSys.glass[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[361]] /* roo.datConExtWin[1].glaSys.glass[1].k PARAM */);
  threadData->lastEquationSolved = 2104;
}

/*
equation index: 2105
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].glaSys.glass[1].x = roo.datConExtWin[1].glaSys.glass[1].x
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2105(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2105};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[140]] /* roo.air.datConExtWin[1].glaSys.glass[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[366]] /* roo.datConExtWin[1].glaSys.glass[1].x PARAM */);
  threadData->lastEquationSolved = 2105;
}

/*
equation index: 2108
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].AGla = roo.datConExtWin[1].AGla
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2108(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2108};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[114]] /* roo.air.datConExtWin[1].AGla PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[340]] /* roo.datConExtWin[1].AGla PARAM */);
  threadData->lastEquationSolved = 2108;
}

/*
equation index: 2109
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].AFra = roo.datConExtWin[1].AFra
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2109(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2109};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[113]] /* roo.air.datConExtWin[1].AFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[339]] /* roo.datConExtWin[1].AFra PARAM */);
  threadData->lastEquationSolved = 2109;
}

/*
equation index: 2111
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].sidFin.gap = roo.datConExtWin[1].sidFin.gap
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2111(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2111};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[171]] /* roo.air.datConExtWin[1].sidFin.gap PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[397]] /* roo.datConExtWin[1].sidFin.gap PARAM */);
  threadData->lastEquationSolved = 2111;
}

/*
equation index: 2113
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].sidFin.h = roo.datConExtWin[1].sidFin.h
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2113(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2113};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[172]] /* roo.air.datConExtWin[1].sidFin.h PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[398]] /* roo.datConExtWin[1].sidFin.h PARAM */);
  threadData->lastEquationSolved = 2113;
}

/*
equation index: 2115
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].ove.gap = roo.datConExtWin[1].ove.gap
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2115(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2115};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[167]] /* roo.air.datConExtWin[1].ove.gap PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[393]] /* roo.datConExtWin[1].ove.gap PARAM */);
  threadData->lastEquationSolved = 2115;
}

/*
equation index: 2117
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].ove.wR = roo.datConExtWin[1].ove.wR
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2117(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2117};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[169]] /* roo.air.datConExtWin[1].ove.wR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[395]] /* roo.datConExtWin[1].ove.wR PARAM */);
  threadData->lastEquationSolved = 2117;
}

/*
equation index: 2118
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].ove.wL = roo.datConExtWin[1].ove.wL
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2118(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2118};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[168]] /* roo.air.datConExtWin[1].ove.wL PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[394]] /* roo.datConExtWin[1].ove.wL PARAM */);
  threadData->lastEquationSolved = 2118;
}

/*
equation index: 2119
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].wWin = roo.datConExtWin[1].wWin
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2119(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2119};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[174]] /* roo.air.datConExtWin[1].wWin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[400]] /* roo.datConExtWin[1].wWin PARAM */);
  threadData->lastEquationSolved = 2119;
}

/*
equation index: 2120
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].hWin = roo.datConExtWin[1].hWin
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2120(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2120};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[149]] /* roo.air.datConExtWin[1].hWin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[375]] /* roo.datConExtWin[1].hWin PARAM */);
  threadData->lastEquationSolved = 2120;
}

/*
equation index: 2121
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].A = roo.datConExtWin[1].A
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2121(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2121};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[112]] /* roo.air.datConExtWin[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[338]] /* roo.datConExtWin[1].A PARAM */);
  threadData->lastEquationSolved = 2121;
}

/*
equation index: 2125
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].T_b_start = roo.datConExtWin[1].T_b_start
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2125(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2125};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[118]] /* roo.air.datConExtWin[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[344]] /* roo.datConExtWin[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 2125;
}

/*
equation index: 2126
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].T_a_start = roo.datConExtWin[1].T_a_start
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2126(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2126};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[117]] /* roo.air.datConExtWin[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[343]] /* roo.datConExtWin[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 2126;
}

/*
equation index: 2130
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].azi = roo.datConExtWin[1].azi
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2130(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2130};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[119]] /* roo.air.datConExtWin[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[345]] /* roo.datConExtWin[1].azi PARAM */);
  threadData->lastEquationSolved = 2130;
}

/*
equation index: 2132
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].layers.roughness_a = roo.datConExtWin[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2132(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2132};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[67]] /* roo.air.datConExtWin[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[143]] /* roo.datConExtWin[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 2132;
}

/*
equation index: 2133
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].layers.absSol_b = roo.datConExtWin[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2133(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2133};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[154]] /* roo.air.datConExtWin[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[380]] /* roo.datConExtWin[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 2133;
}

/*
equation index: 2134
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].layers.absSol_a = roo.datConExtWin[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2134(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2134};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[153]] /* roo.air.datConExtWin[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[379]] /* roo.datConExtWin[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 2134;
}

/*
equation index: 2135
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].layers.absIR_b = roo.datConExtWin[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2135(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2135};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[152]] /* roo.air.datConExtWin[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[378]] /* roo.datConExtWin[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 2135;
}

/*
equation index: 2136
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].layers.absIR_a = roo.datConExtWin[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2136(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2136};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[151]] /* roo.air.datConExtWin[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[377]] /* roo.datConExtWin[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 2136;
}

/*
equation index: 2139
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].layers.material[1].LHea = roo.datConExtWin[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2139(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2139};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[155]] /* roo.air.datConExtWin[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[381]] /* roo.datConExtWin[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 2139;
}

/*
equation index: 2142
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].layers.material[1].nStaReal = roo.datConExtWin[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2142(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2142};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[162]] /* roo.air.datConExtWin[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[388]] /* roo.datConExtWin[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 2142;
}

/*
equation index: 2143
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].layers.material[1].piMat = roo.datConExtWin[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2143(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2143};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[163]] /* roo.air.datConExtWin[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[389]] /* roo.datConExtWin[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 2143;
}

/*
equation index: 2144
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].layers.material[1].piRef = roo.datConExtWin[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2144(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2144};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[164]] /* roo.air.datConExtWin[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[390]] /* roo.datConExtWin[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 2144;
}

/*
equation index: 2147
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].layers.material[1].nStaRef = roo.datConExtWin[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2147(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2147};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[64]] /* roo.air.datConExtWin[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[140]] /* roo.datConExtWin[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 2147;
}

/*
equation index: 2148
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].layers.material[1].R = roo.datConExtWin[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2148(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2148};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[156]] /* roo.air.datConExtWin[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[382]] /* roo.datConExtWin[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 2148;
}

/*
equation index: 2149
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].layers.material[1].d = roo.datConExtWin[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2149(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2149};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[160]] /* roo.air.datConExtWin[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[386]] /* roo.datConExtWin[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 2149;
}

/*
equation index: 2150
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].layers.material[1].c = roo.datConExtWin[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2150(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2150};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[159]] /* roo.air.datConExtWin[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[385]] /* roo.datConExtWin[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 2150;
}

/*
equation index: 2151
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].layers.material[1].k = roo.datConExtWin[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2151(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2151};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[161]] /* roo.air.datConExtWin[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[387]] /* roo.datConExtWin[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 2151;
}

/*
equation index: 2152
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].layers.material[1].x = roo.datConExtWin[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2152(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2152};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[165]] /* roo.air.datConExtWin[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[391]] /* roo.datConExtWin[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 2152;
}

/*
equation index: 2154
type: SIMPLE_ASSIGN
roo.air.datConExtWin[1].name = roo.datConExtWin[1].name
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2154(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2154};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[14]] /* roo.air.datConExtWin[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[34]] /* roo.datConExtWin[1].name PARAM */);
  threadData->lastEquationSolved = 2154;
}

/*
equation index: 2158
type: SIMPLE_ASSIGN
roo.air.datConExt[1].T_b_start = roo.datConExt[1].T_b_start
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2158(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2158};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[93]] /* roo.air.datConExt[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[319]] /* roo.datConExt[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 2158;
}

/*
equation index: 2159
type: SIMPLE_ASSIGN
roo.air.datConExt[1].T_a_start = roo.datConExt[1].T_a_start
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2159(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2159};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[92]] /* roo.air.datConExt[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[318]] /* roo.datConExt[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 2159;
}

/*
equation index: 2163
type: SIMPLE_ASSIGN
roo.air.datConExt[1].azi = roo.datConExt[1].azi
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2163(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2163};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[94]] /* roo.air.datConExt[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[320]] /* roo.datConExt[1].azi PARAM */);
  threadData->lastEquationSolved = 2163;
}

/*
equation index: 2165
type: SIMPLE_ASSIGN
roo.air.datConExt[1].layers.roughness_a = roo.datConExt[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2165(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2165};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[61]] /* roo.air.datConExt[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[137]] /* roo.datConExt[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 2165;
}

/*
equation index: 2166
type: SIMPLE_ASSIGN
roo.air.datConExt[1].layers.absSol_b = roo.datConExt[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2166(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2166};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[99]] /* roo.air.datConExt[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[325]] /* roo.datConExt[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 2166;
}

/*
equation index: 2167
type: SIMPLE_ASSIGN
roo.air.datConExt[1].layers.absSol_a = roo.datConExt[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2167(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2167};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[98]] /* roo.air.datConExt[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[324]] /* roo.datConExt[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 2167;
}

/*
equation index: 2168
type: SIMPLE_ASSIGN
roo.air.datConExt[1].layers.absIR_b = roo.datConExt[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2168(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2168};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[97]] /* roo.air.datConExt[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[323]] /* roo.datConExt[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 2168;
}

/*
equation index: 2169
type: SIMPLE_ASSIGN
roo.air.datConExt[1].layers.absIR_a = roo.datConExt[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2169(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2169};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[96]] /* roo.air.datConExt[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[322]] /* roo.datConExt[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 2169;
}

/*
equation index: 2172
type: SIMPLE_ASSIGN
roo.air.datConExt[1].layers.material[1].LHea = roo.datConExt[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2172(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2172};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[100]] /* roo.air.datConExt[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[326]] /* roo.datConExt[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 2172;
}

/*
equation index: 2175
type: SIMPLE_ASSIGN
roo.air.datConExt[1].layers.material[1].nStaReal = roo.datConExt[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2175(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2175};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[107]] /* roo.air.datConExt[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[333]] /* roo.datConExt[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 2175;
}

/*
equation index: 2176
type: SIMPLE_ASSIGN
roo.air.datConExt[1].layers.material[1].piMat = roo.datConExt[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2176(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2176};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[108]] /* roo.air.datConExt[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[334]] /* roo.datConExt[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 2176;
}

/*
equation index: 2177
type: SIMPLE_ASSIGN
roo.air.datConExt[1].layers.material[1].piRef = roo.datConExt[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2177(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2177};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[109]] /* roo.air.datConExt[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[335]] /* roo.datConExt[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 2177;
}

/*
equation index: 2180
type: SIMPLE_ASSIGN
roo.air.datConExt[1].layers.material[1].nStaRef = roo.datConExt[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2180(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2180};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[58]] /* roo.air.datConExt[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[134]] /* roo.datConExt[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 2180;
}

/*
equation index: 2181
type: SIMPLE_ASSIGN
roo.air.datConExt[1].layers.material[1].R = roo.datConExt[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2181(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2181};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[101]] /* roo.air.datConExt[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[327]] /* roo.datConExt[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 2181;
}

/*
equation index: 2182
type: SIMPLE_ASSIGN
roo.air.datConExt[1].layers.material[1].d = roo.datConExt[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2182(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2182};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[105]] /* roo.air.datConExt[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[331]] /* roo.datConExt[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 2182;
}

/*
equation index: 2183
type: SIMPLE_ASSIGN
roo.air.datConExt[1].layers.material[1].c = roo.datConExt[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2183(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2183};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[104]] /* roo.air.datConExt[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[330]] /* roo.datConExt[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 2183;
}

/*
equation index: 2184
type: SIMPLE_ASSIGN
roo.air.datConExt[1].layers.material[1].k = roo.datConExt[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2184(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2184};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[106]] /* roo.air.datConExt[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[332]] /* roo.datConExt[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 2184;
}

/*
equation index: 2185
type: SIMPLE_ASSIGN
roo.air.datConExt[1].layers.material[1].x = roo.datConExt[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2185(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2185};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[110]] /* roo.air.datConExt[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[336]] /* roo.datConExt[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 2185;
}

/*
equation index: 2187
type: SIMPLE_ASSIGN
roo.air.datConExt[1].name = roo.datConExt[1].name
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2187(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2187};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[13]] /* roo.air.datConExt[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[33]] /* roo.datConExt[1].name PARAM */);
  threadData->lastEquationSolved = 2187;
}

/*
equation index: 2204
type: SIMPLE_ASSIGN
roo.m_flow_nominal = 3.333333333333333e-4 * roo.V
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2204(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2204};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[998]] /* roo.m_flow_nominal PARAM */) = (3.333333333333333e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[13]] /* roo.V PARAM */));
  threadData->lastEquationSolved = 2204;
}
extern void tmp_one_port_eqFunction_281(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_280(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_279(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_278(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_277(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_276(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_275(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_274(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_273(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_272(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_271(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_270(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_269(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_268(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_267(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_266(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_265(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_264(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_263(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_262(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_261(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_260(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_259(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_48(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_258(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_46(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_41(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_254(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_47(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_42(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_40(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_39(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_38(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_37(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_36(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_35(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_34(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_33(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_32(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_31(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_30(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_29(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_28(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_27(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_26(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_25(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_24(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_23(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_22(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_21(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_20(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_19(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_18(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_17(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_16(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_15(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_14(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_13(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_12(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_11(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_10(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_9(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_8(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_7(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_6(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_5(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_4(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_3(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_2(DATA *data, threadData_t *threadData);

extern void tmp_one_port_eqFunction_1(DATA *data, threadData_t *threadData);


/*
equation index: 2378
type: ALGORITHM

  assert(retSink.T >= 1.0 and retSink.T <= 1e4, "Variable violating min/max constraint: 1.0 <= retSink.T <= 1e4, has value: " + String(retSink.T, "g"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2378(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2378};
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  static const MMC_DEFSTRINGLIT(tmp4,75,"Variable violating min/max constraint: 1.0 <= retSink.T <= 1e4, has value: ");
  modelica_string tmp5;
  modelica_metatype tmpMeta6;
  static int tmp7 = 0;
  if(!tmp7)
  {
    tmp2 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[8]] /* retSink.T PARAM */),1.0);
    tmp3 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[8]] /* retSink.T PARAM */),1e4);
    if(!(tmp2 && tmp3))
    {
      tmp5 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[8]] /* retSink.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta6 = stringAppend(MMC_REFSTRINGLIT(tmp4),tmp5);
      {
        const char* assert_cond = "(retSink.T >= 1.0 and retSink.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/Sources/Boundary_pT.mo",16,3,18,68,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta6));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/Sources/Boundary_pT.mo",16,3,18,68,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta6));
        }
      }
      tmp7 = 1;
    }
  }
  threadData->lastEquationSolved = 2378;
}

/*
equation index: 2379
type: ALGORITHM

  assert(retSink.p >= 0.0 and retSink.p <= 1e8, "Variable violating min/max constraint: 0.0 <= retSink.p <= 1e8, has value: " + String(retSink.p, "g"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2379(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2379};
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  static const MMC_DEFSTRINGLIT(tmp10,75,"Variable violating min/max constraint: 0.0 <= retSink.p <= 1e8, has value: ");
  modelica_string tmp11;
  modelica_metatype tmpMeta12;
  static int tmp13 = 0;
  if(!tmp13)
  {
    tmp8 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[11]] /* retSink.p PARAM */),0.0);
    tmp9 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[11]] /* retSink.p PARAM */),1e8);
    if(!(tmp8 && tmp9))
    {
      tmp11 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[11]] /* retSink.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta12 = stringAppend(MMC_REFSTRINGLIT(tmp10),tmp11);
      {
        const char* assert_cond = "(retSink.p >= 0.0 and retSink.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/Sources/Boundary_pT.mo",9,3,11,69,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta12));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/Sources/Boundary_pT.mo",9,3,11,69,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta12));
        }
      }
      tmp13 = 1;
    }
  }
  threadData->lastEquationSolved = 2379;
}

/*
equation index: 2380
type: ALGORITHM

  assert(retSink.X[2] >= 0.0 and retSink.X[2] <= 1.0, "Variable violating min/max constraint: 0.0 <= retSink.X[2] <= 1.0, has value: " + String(retSink.X[2], "g"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2380(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2380};
  modelica_boolean tmp14;
  modelica_boolean tmp15;
  static const MMC_DEFSTRINGLIT(tmp16,78,"Variable violating min/max constraint: 0.0 <= retSink.X[2] <= 1.0, has value: ");
  modelica_string tmp17;
  modelica_metatype tmpMeta18;
  static int tmp19 = 0;
  if(!tmp19)
  {
    tmp14 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[10]] /* retSink.X[2] PARAM */),0.0);
    tmp15 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[10]] /* retSink.X[2] PARAM */),1.0);
    if(!(tmp14 && tmp15))
    {
      tmp17 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[10]] /* retSink.X[2] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta18 = stringAppend(MMC_REFSTRINGLIT(tmp16),tmp17);
      {
        const char* assert_cond = "(retSink.X[2] >= 0.0 and retSink.X[2] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/Sources/BaseClasses/PartialSource_Xi_C.mo",15,3,18,90,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta18));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/Sources/BaseClasses/PartialSource_Xi_C.mo",15,3,18,90,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta18));
        }
      }
      tmp19 = 1;
    }
  }
  threadData->lastEquationSolved = 2380;
}

/*
equation index: 2381
type: ALGORITHM

  assert(retSink.X[1] >= 0.0 and retSink.X[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= retSink.X[1] <= 1.0, has value: " + String(retSink.X[1], "g"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2381(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2381};
  modelica_boolean tmp20;
  modelica_boolean tmp21;
  static const MMC_DEFSTRINGLIT(tmp22,78,"Variable violating min/max constraint: 0.0 <= retSink.X[1] <= 1.0, has value: ");
  modelica_string tmp23;
  modelica_metatype tmpMeta24;
  static int tmp25 = 0;
  if(!tmp25)
  {
    tmp20 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[9]] /* retSink.X[1] PARAM */),0.0);
    tmp21 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[9]] /* retSink.X[1] PARAM */),1.0);
    if(!(tmp20 && tmp21))
    {
      tmp23 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[9]] /* retSink.X[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta24 = stringAppend(MMC_REFSTRINGLIT(tmp22),tmp23);
      {
        const char* assert_cond = "(retSink.X[1] >= 0.0 and retSink.X[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/Sources/BaseClasses/PartialSource_Xi_C.mo",15,3,18,90,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta24));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/Sources/BaseClasses/PartialSource_Xi_C.mo",15,3,18,90,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta24));
        }
      }
      tmp25 = 1;
    }
  }
  threadData->lastEquationSolved = 2381;
}

/*
equation index: 2382
type: ALGORITHM

  assert(retSink.flowDirection >= Modelica.Fluid.Types.PortFlowDirection.Entering and retSink.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, "Variable violating min/max constraint: Modelica.Fluid.Types.PortFlowDirection.Entering <= retSink.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, has value: " + String(retSink.flowDirection, "d"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2382(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2382};
  modelica_boolean tmp26;
  modelica_boolean tmp27;
  static const MMC_DEFSTRINGLIT(tmp28,180,"Variable violating min/max constraint: Modelica.Fluid.Types.PortFlowDirection.Entering <= retSink.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, has value: ");
  modelica_string tmp29;
  modelica_metatype tmpMeta30;
  static int tmp31 = 0;
  if(!tmp31)
  {
    tmp26 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[3]] /* retSink.flowDirection PARAM */),1);
    tmp27 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[3]] /* retSink.flowDirection PARAM */),3);
    if(!(tmp26 && tmp27))
    {
      tmp29 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[3]] /* retSink.flowDirection PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta30 = stringAppend(MMC_REFSTRINGLIT(tmp28),tmp29);
      {
        const char* assert_cond = "(retSink.flowDirection >= Modelica.Fluid.Types.PortFlowDirection.Entering and retSink.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/Sources/BaseClasses/PartialSource.mo",31,3,32,80,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta30));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/Sources/BaseClasses/PartialSource.mo",31,3,32,80,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta30));
        }
      }
      tmp31 = 1;
    }
  }
  threadData->lastEquationSolved = 2382;
}

/*
equation index: 2383
type: ALGORITHM

  assert(sup.T >= 1.0 and sup.T <= 1e4, "Variable violating min/max constraint: 1.0 <= sup.T <= 1e4, has value: " + String(sup.T, "g"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2383(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2383};
  modelica_boolean tmp32;
  modelica_boolean tmp33;
  static const MMC_DEFSTRINGLIT(tmp34,71,"Variable violating min/max constraint: 1.0 <= sup.T <= 1e4, has value: ");
  modelica_string tmp35;
  modelica_metatype tmpMeta36;
  static int tmp37 = 0;
  if(!tmp37)
  {
    tmp32 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1267]] /* sup.T PARAM */),1.0);
    tmp33 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1267]] /* sup.T PARAM */),1e4);
    if(!(tmp32 && tmp33))
    {
      tmp35 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1267]] /* sup.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta36 = stringAppend(MMC_REFSTRINGLIT(tmp34),tmp35);
      {
        const char* assert_cond = "(sup.T >= 1.0 and sup.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/Sources/MassFlowSource_T.mo",15,3,17,68,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta36));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/Sources/MassFlowSource_T.mo",15,3,17,68,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta36));
        }
      }
      tmp37 = 1;
    }
  }
  threadData->lastEquationSolved = 2383;
}

/*
equation index: 2384
type: ALGORITHM

  assert(sup.X[2] >= 0.0 and sup.X[2] <= 1.0, "Variable violating min/max constraint: 0.0 <= sup.X[2] <= 1.0, has value: " + String(sup.X[2], "g"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2384(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2384};
  modelica_boolean tmp38;
  modelica_boolean tmp39;
  static const MMC_DEFSTRINGLIT(tmp40,74,"Variable violating min/max constraint: 0.0 <= sup.X[2] <= 1.0, has value: ");
  modelica_string tmp41;
  modelica_metatype tmpMeta42;
  static int tmp43 = 0;
  if(!tmp43)
  {
    tmp38 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1269]] /* sup.X[2] PARAM */),0.0);
    tmp39 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1269]] /* sup.X[2] PARAM */),1.0);
    if(!(tmp38 && tmp39))
    {
      tmp41 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1269]] /* sup.X[2] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta42 = stringAppend(MMC_REFSTRINGLIT(tmp40),tmp41);
      {
        const char* assert_cond = "(sup.X[2] >= 0.0 and sup.X[2] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/Sources/BaseClasses/PartialSource_Xi_C.mo",15,3,18,90,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta42));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/Sources/BaseClasses/PartialSource_Xi_C.mo",15,3,18,90,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta42));
        }
      }
      tmp43 = 1;
    }
  }
  threadData->lastEquationSolved = 2384;
}

/*
equation index: 2385
type: ALGORITHM

  assert(sup.X[1] >= 0.0 and sup.X[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= sup.X[1] <= 1.0, has value: " + String(sup.X[1], "g"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2385(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2385};
  modelica_boolean tmp44;
  modelica_boolean tmp45;
  static const MMC_DEFSTRINGLIT(tmp46,74,"Variable violating min/max constraint: 0.0 <= sup.X[1] <= 1.0, has value: ");
  modelica_string tmp47;
  modelica_metatype tmpMeta48;
  static int tmp49 = 0;
  if(!tmp49)
  {
    tmp44 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1268]] /* sup.X[1] PARAM */),0.0);
    tmp45 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1268]] /* sup.X[1] PARAM */),1.0);
    if(!(tmp44 && tmp45))
    {
      tmp47 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1268]] /* sup.X[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta48 = stringAppend(MMC_REFSTRINGLIT(tmp46),tmp47);
      {
        const char* assert_cond = "(sup.X[1] >= 0.0 and sup.X[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/Sources/BaseClasses/PartialSource_Xi_C.mo",15,3,18,90,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta48));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/Sources/BaseClasses/PartialSource_Xi_C.mo",15,3,18,90,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta48));
        }
      }
      tmp49 = 1;
    }
  }
  threadData->lastEquationSolved = 2385;
}

/*
equation index: 2386
type: ALGORITHM

  assert(sup.flowDirection >= Modelica.Fluid.Types.PortFlowDirection.Entering and sup.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, "Variable violating min/max constraint: Modelica.Fluid.Types.PortFlowDirection.Entering <= sup.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, has value: " + String(sup.flowDirection, "d"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2386(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2386};
  modelica_boolean tmp50;
  modelica_boolean tmp51;
  static const MMC_DEFSTRINGLIT(tmp52,176,"Variable violating min/max constraint: Modelica.Fluid.Types.PortFlowDirection.Entering <= sup.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, has value: ");
  modelica_string tmp53;
  modelica_metatype tmpMeta54;
  static int tmp55 = 0;
  if(!tmp55)
  {
    tmp50 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[315]] /* sup.flowDirection PARAM */),1);
    tmp51 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[315]] /* sup.flowDirection PARAM */),3);
    if(!(tmp50 && tmp51))
    {
      tmp53 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[315]] /* sup.flowDirection PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta54 = stringAppend(MMC_REFSTRINGLIT(tmp52),tmp53);
      {
        const char* assert_cond = "(sup.flowDirection >= Modelica.Fluid.Types.PortFlowDirection.Entering and sup.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/Sources/BaseClasses/PartialSource.mo",31,3,32,80,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta54));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Fluid/Sources/BaseClasses/PartialSource.mo",31,3,32,80,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta54));
        }
      }
      tmp55 = 1;
    }
  }
  threadData->lastEquationSolved = 2386;
}

/*
equation index: 2387
type: ALGORITHM

  assert(weaDat.cheTemBlaSky.TMax >= 0.0, "Variable violating min constraint: 0.0 <= weaDat.cheTemBlaSky.TMax, has value: " + String(weaDat.cheTemBlaSky.TMax, "g"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2387(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2387};
  modelica_boolean tmp56;
  static const MMC_DEFSTRINGLIT(tmp57,79,"Variable violating min constraint: 0.0 <= weaDat.cheTemBlaSky.TMax, has value: ");
  modelica_string tmp58;
  modelica_metatype tmpMeta59;
  static int tmp60 = 0;
  if(!tmp60)
  {
    tmp56 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1284]] /* weaDat.cheTemBlaSky.TMax PARAM */),0.0);
    if(!tmp56)
    {
      tmp58 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1284]] /* weaDat.cheTemBlaSky.TMax PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta59 = stringAppend(MMC_REFSTRINGLIT(tmp57),tmp58);
      {
        const char* assert_cond = "(weaDat.cheTemBlaSky.TMax >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckBlackBodySkyTemperature.mo",8,3,9,34,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta59));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckBlackBodySkyTemperature.mo",8,3,9,34,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta59));
        }
      }
      tmp60 = 1;
    }
  }
  threadData->lastEquationSolved = 2387;
}

/*
equation index: 2388
type: ALGORITHM

  assert(weaDat.cheTemBlaSky.TMin >= 0.0, "Variable violating min constraint: 0.0 <= weaDat.cheTemBlaSky.TMin, has value: " + String(weaDat.cheTemBlaSky.TMin, "g"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2388(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2388};
  modelica_boolean tmp61;
  static const MMC_DEFSTRINGLIT(tmp62,79,"Variable violating min constraint: 0.0 <= weaDat.cheTemBlaSky.TMin, has value: ");
  modelica_string tmp63;
  modelica_metatype tmpMeta64;
  static int tmp65 = 0;
  if(!tmp65)
  {
    tmp61 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1285]] /* weaDat.cheTemBlaSky.TMin PARAM */),0.0);
    if(!tmp61)
    {
      tmp63 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1285]] /* weaDat.cheTemBlaSky.TMin PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta64 = stringAppend(MMC_REFSTRINGLIT(tmp62),tmp63);
      {
        const char* assert_cond = "(weaDat.cheTemBlaSky.TMin >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckBlackBodySkyTemperature.mo",6,3,7,34,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta64));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckBlackBodySkyTemperature.mo",6,3,7,34,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta64));
        }
      }
      tmp65 = 1;
    }
  }
  threadData->lastEquationSolved = 2388;
}

/*
equation index: 2389
type: ALGORITHM

  assert(weaDat.datRea30Min.extrapolation >= Modelica.Blocks.Types.Extrapolation.HoldLastPoint and weaDat.datRea30Min.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation, "Variable violating min/max constraint: Modelica.Blocks.Types.Extrapolation.HoldLastPoint <= weaDat.datRea30Min.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation, has value: " + String(weaDat.datRea30Min.extrapolation, "d"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2389(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2389};
  modelica_boolean tmp66;
  modelica_boolean tmp67;
  static const MMC_DEFSTRINGLIT(tmp68,192,"Variable violating min/max constraint: Modelica.Blocks.Types.Extrapolation.HoldLastPoint <= weaDat.datRea30Min.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation, has value: ");
  modelica_string tmp69;
  modelica_metatype tmpMeta70;
  static int tmp71 = 0;
  if(!tmp71)
  {
    tmp66 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[362]] /* weaDat.datRea30Min.extrapolation PARAM */),1);
    tmp67 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[362]] /* weaDat.datRea30Min.extrapolation PARAM */),4);
    if(!(tmp66 && tmp67))
    {
      tmp69 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[362]] /* weaDat.datRea30Min.extrapolation PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta70 = stringAppend(MMC_REFSTRINGLIT(tmp68),tmp69);
      {
        const char* assert_cond = "(weaDat.datRea30Min.extrapolation >= Modelica.Blocks.Types.Extrapolation.HoldLastPoint and weaDat.datRea30Min.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Tables.mo",39,5,41,61,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta70));
        } else {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Tables.mo",39,5,41,61,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta70));
        }
      }
      tmp71 = 1;
    }
  }
  threadData->lastEquationSolved = 2389;
}

/*
equation index: 2390
type: ALGORITHM

  assert(weaDat.datRea30Min.smoothness >= Modelica.Blocks.Types.Smoothness.LinearSegments and weaDat.datRea30Min.smoothness <= Modelica.Blocks.Types.Smoothness.ModifiedContinuousDerivative, "Variable violating min/max constraint: Modelica.Blocks.Types.Smoothness.LinearSegments <= weaDat.datRea30Min.smoothness <= Modelica.Blocks.Types.Smoothness.ModifiedContinuousDerivative, has value: " + String(weaDat.datRea30Min.smoothness, "d"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2390(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2390};
  modelica_boolean tmp72;
  modelica_boolean tmp73;
  static const MMC_DEFSTRINGLIT(tmp74,197,"Variable violating min/max constraint: Modelica.Blocks.Types.Smoothness.LinearSegments <= weaDat.datRea30Min.smoothness <= Modelica.Blocks.Types.Smoothness.ModifiedContinuousDerivative, has value: ");
  modelica_string tmp75;
  modelica_metatype tmpMeta76;
  static int tmp77 = 0;
  if(!tmp77)
  {
    tmp72 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[365]] /* weaDat.datRea30Min.smoothness PARAM */),1);
    tmp73 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[365]] /* weaDat.datRea30Min.smoothness PARAM */),6);
    if(!(tmp72 && tmp73))
    {
      tmp75 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[365]] /* weaDat.datRea30Min.smoothness PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta76 = stringAppend(MMC_REFSTRINGLIT(tmp74),tmp75);
      {
        const char* assert_cond = "(weaDat.datRea30Min.smoothness >= Modelica.Blocks.Types.Smoothness.LinearSegments and weaDat.datRea30Min.smoothness <= Modelica.Blocks.Types.Smoothness.ModifiedContinuousDerivative)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Tables.mo",36,5,38,61,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta76));
        } else {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Tables.mo",36,5,38,61,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta76));
        }
      }
      tmp77 = 1;
    }
  }
  threadData->lastEquationSolved = 2390;
}

/*
equation index: 2391
type: ALGORITHM

  assert(weaDat.TBlaSkyCom.calTSky >= Buildings.BoundaryConditions.Types.SkyTemperatureCalculation.HorizontalRadiation and weaDat.TBlaSkyCom.calTSky <= Buildings.BoundaryConditions.Types.SkyTemperatureCalculation.TemperaturesAndSkyCover, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.SkyTemperatureCalculation.HorizontalRadiation <= weaDat.TBlaSkyCom.calTSky <= Buildings.BoundaryConditions.Types.SkyTemperatureCalculation.TemperaturesAndSkyCover, has value: " + String(weaDat.TBlaSkyCom.calTSky, "d"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2391(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2391};
  modelica_boolean tmp78;
  modelica_boolean tmp79;
  static const MMC_DEFSTRINGLIT(tmp80,249,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.SkyTemperatureCalculation.HorizontalRadiation <= weaDat.TBlaSkyCom.calTSky <= Buildings.BoundaryConditions.Types.SkyTemperatureCalculation.TemperaturesAndSkyCover, has value: ");
  modelica_string tmp81;
  modelica_metatype tmpMeta82;
  static int tmp83 = 0;
  if(!tmp83)
  {
    tmp78 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[319]] /* weaDat.TBlaSkyCom.calTSky PARAM */),1);
    tmp79 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[319]] /* weaDat.TBlaSkyCom.calTSky PARAM */),2);
    if(!(tmp78 && tmp79))
    {
      tmp81 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[319]] /* weaDat.TBlaSkyCom.calTSky PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta82 = stringAppend(MMC_REFSTRINGLIT(tmp80),tmp81);
      {
        const char* assert_cond = "(weaDat.TBlaSkyCom.calTSky >= Buildings.BoundaryConditions.Types.SkyTemperatureCalculation.HorizontalRadiation and weaDat.TBlaSkyCom.calTSky <= Buildings.BoundaryConditions.Types.SkyTemperatureCalculation.TemperaturesAndSkyCover)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/SkyTemperature/BlackBody.mo",5,3,9,30,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta82));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/SkyTemperature/BlackBody.mo",5,3,9,30,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta82));
        }
      }
      tmp83 = 1;
    }
  }
  threadData->lastEquationSolved = 2391;
}

/*
equation index: 2392
type: ALGORITHM

  assert(weaDat.cheTemDewPoi.TMax >= 0.0, "Variable violating min constraint: 0.0 <= weaDat.cheTemDewPoi.TMax, has value: " + String(weaDat.cheTemDewPoi.TMax, "g"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2392(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2392};
  modelica_boolean tmp84;
  static const MMC_DEFSTRINGLIT(tmp85,79,"Variable violating min constraint: 0.0 <= weaDat.cheTemDewPoi.TMax, has value: ");
  modelica_string tmp86;
  modelica_metatype tmpMeta87;
  static int tmp88 = 0;
  if(!tmp88)
  {
    tmp84 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1286]] /* weaDat.cheTemDewPoi.TMax PARAM */),0.0);
    if(!tmp84)
    {
      tmp86 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1286]] /* weaDat.cheTemDewPoi.TMax PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta87 = stringAppend(MMC_REFSTRINGLIT(tmp85),tmp86);
      {
        const char* assert_cond = "(weaDat.cheTemDewPoi.TMax >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckDewPointTemperature.mo",18,3,19,34,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta87));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckDewPointTemperature.mo",18,3,19,34,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta87));
        }
      }
      tmp88 = 1;
    }
  }
  threadData->lastEquationSolved = 2392;
}

/*
equation index: 2393
type: ALGORITHM

  assert(weaDat.cheTemDewPoi.TMin >= 0.0, "Variable violating min constraint: 0.0 <= weaDat.cheTemDewPoi.TMin, has value: " + String(weaDat.cheTemDewPoi.TMin, "g"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2393(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2393};
  modelica_boolean tmp89;
  static const MMC_DEFSTRINGLIT(tmp90,79,"Variable violating min constraint: 0.0 <= weaDat.cheTemDewPoi.TMin, has value: ");
  modelica_string tmp91;
  modelica_metatype tmpMeta92;
  static int tmp93 = 0;
  if(!tmp93)
  {
    tmp89 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1287]] /* weaDat.cheTemDewPoi.TMin PARAM */),0.0);
    if(!tmp89)
    {
      tmp91 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1287]] /* weaDat.cheTemDewPoi.TMin PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta92 = stringAppend(MMC_REFSTRINGLIT(tmp90),tmp91);
      {
        const char* assert_cond = "(weaDat.cheTemDewPoi.TMin >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckDewPointTemperature.mo",16,3,17,34,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta92));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckDewPointTemperature.mo",16,3,17,34,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta92));
        }
      }
      tmp93 = 1;
    }
  }
  threadData->lastEquationSolved = 2393;
}

/*
equation index: 2394
type: ALGORITHM

  assert(weaDat.cheTemDryBul.TMax >= 0.0, "Variable violating min constraint: 0.0 <= weaDat.cheTemDryBul.TMax, has value: " + String(weaDat.cheTemDryBul.TMax, "g"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2394(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2394};
  modelica_boolean tmp94;
  static const MMC_DEFSTRINGLIT(tmp95,79,"Variable violating min constraint: 0.0 <= weaDat.cheTemDryBul.TMax, has value: ");
  modelica_string tmp96;
  modelica_metatype tmpMeta97;
  static int tmp98 = 0;
  if(!tmp98)
  {
    tmp94 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1288]] /* weaDat.cheTemDryBul.TMax PARAM */),0.0);
    if(!tmp94)
    {
      tmp96 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1288]] /* weaDat.cheTemDryBul.TMax PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta97 = stringAppend(MMC_REFSTRINGLIT(tmp95),tmp96);
      {
        const char* assert_cond = "(weaDat.cheTemDryBul.TMax >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckDryBulbTemperature.mo",18,3,19,34,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta97));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckDryBulbTemperature.mo",18,3,19,34,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta97));
        }
      }
      tmp98 = 1;
    }
  }
  threadData->lastEquationSolved = 2394;
}

/*
equation index: 2395
type: ALGORITHM

  assert(weaDat.cheTemDryBul.TMin >= 0.0, "Variable violating min constraint: 0.0 <= weaDat.cheTemDryBul.TMin, has value: " + String(weaDat.cheTemDryBul.TMin, "g"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2395(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2395};
  modelica_boolean tmp99;
  static const MMC_DEFSTRINGLIT(tmp100,79,"Variable violating min constraint: 0.0 <= weaDat.cheTemDryBul.TMin, has value: ");
  modelica_string tmp101;
  modelica_metatype tmpMeta102;
  static int tmp103 = 0;
  if(!tmp103)
  {
    tmp99 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1289]] /* weaDat.cheTemDryBul.TMin PARAM */),0.0);
    if(!tmp99)
    {
      tmp101 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1289]] /* weaDat.cheTemDryBul.TMin PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta102 = stringAppend(MMC_REFSTRINGLIT(tmp100),tmp101);
      {
        const char* assert_cond = "(weaDat.cheTemDryBul.TMin >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckDryBulbTemperature.mo",16,3,17,34,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta102));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/CheckDryBulbTemperature.mo",16,3,17,34,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta102));
        }
      }
      tmp103 = 1;
    }
  }
  threadData->lastEquationSolved = 2395;
}

/*
equation index: 2396
type: ALGORITHM

  assert(weaDat.souSelRad.datSou >= Buildings.BoundaryConditions.Types.RadiationDataSource.File and weaDat.souSelRad.datSou <= Buildings.BoundaryConditions.Types.RadiationDataSource.Input_HDirNor_HGloHor, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.RadiationDataSource.File <= weaDat.souSelRad.datSou <= Buildings.BoundaryConditions.Types.RadiationDataSource.Input_HDirNor_HGloHor, has value: " + String(weaDat.souSelRad.datSou, "d"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2396(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2396};
  modelica_boolean tmp104;
  modelica_boolean tmp105;
  static const MMC_DEFSTRINGLIT(tmp106,218,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.RadiationDataSource.File <= weaDat.souSelRad.datSou <= Buildings.BoundaryConditions.Types.RadiationDataSource.Input_HDirNor_HGloHor, has value: ");
  modelica_string tmp107;
  modelica_metatype tmpMeta108;
  static int tmp109 = 0;
  if(!tmp109)
  {
    tmp104 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[373]] /* weaDat.souSelRad.datSou PARAM */),1);
    tmp105 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[373]] /* weaDat.souSelRad.datSou PARAM */),4);
    if(!(tmp104 && tmp105))
    {
      tmp107 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[373]] /* weaDat.souSelRad.datSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta108 = stringAppend(MMC_REFSTRINGLIT(tmp106),tmp107);
      {
        const char* assert_cond = "(weaDat.souSelRad.datSou >= Buildings.BoundaryConditions.Types.RadiationDataSource.File and weaDat.souSelRad.datSou <= Buildings.BoundaryConditions.Types.RadiationDataSource.Input_HDirNor_HGloHor)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelectorRadiation.mo",5,3,6,30,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta108));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelectorRadiation.mo",5,3,6,30,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta108));
        }
      }
      tmp109 = 1;
    }
  }
  threadData->lastEquationSolved = 2396;
}

/*
equation index: 2397
type: ALGORITHM

  assert(weaDat.horInfRadSel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.horInfRadSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.horInfRadSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.horInfRadSel.datSou, "d"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2397(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2397};
  modelica_boolean tmp110;
  modelica_boolean tmp111;
  static const MMC_DEFSTRINGLIT(tmp112,187,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.horInfRadSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp113;
  modelica_metatype tmpMeta114;
  static int tmp115 = 0;
  if(!tmp115)
  {
    tmp110 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[366]] /* weaDat.horInfRadSel.datSou PARAM */),1);
    tmp111 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[366]] /* weaDat.horInfRadSel.datSou PARAM */),3);
    if(!(tmp110 && tmp111))
    {
      tmp113 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[366]] /* weaDat.horInfRadSel.datSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta114 = stringAppend(MMC_REFSTRINGLIT(tmp112),tmp113);
      {
        const char* assert_cond = "(weaDat.horInfRadSel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.horInfRadSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta114));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta114));
        }
      }
      tmp115 = 1;
    }
  }
  threadData->lastEquationSolved = 2397;
}

/*
equation index: 2398
type: ALGORITHM

  assert(weaDat.winDirSel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.winDirSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.winDirSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.winDirSel.datSou, "d"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2398(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2398};
  modelica_boolean tmp116;
  modelica_boolean tmp117;
  static const MMC_DEFSTRINGLIT(tmp118,184,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.winDirSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp119;
  modelica_metatype tmpMeta120;
  static int tmp121 = 0;
  if(!tmp121)
  {
    tmp116 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[376]] /* weaDat.winDirSel.datSou PARAM */),1);
    tmp117 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[376]] /* weaDat.winDirSel.datSou PARAM */),3);
    if(!(tmp116 && tmp117))
    {
      tmp119 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[376]] /* weaDat.winDirSel.datSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta120 = stringAppend(MMC_REFSTRINGLIT(tmp118),tmp119);
      {
        const char* assert_cond = "(weaDat.winDirSel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.winDirSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta120));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta120));
        }
      }
      tmp121 = 1;
    }
  }
  threadData->lastEquationSolved = 2398;
}

/*
equation index: 2399
type: ALGORITHM

  assert(weaDat.winSpe >= 0.0, "Variable violating min constraint: 0.0 <= weaDat.winSpe, has value: " + String(weaDat.winSpe, "g"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2399(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2399};
  modelica_boolean tmp122;
  static const MMC_DEFSTRINGLIT(tmp123,68,"Variable violating min constraint: 0.0 <= weaDat.winSpe, has value: ");
  modelica_string tmp124;
  modelica_metatype tmpMeta125;
  static int tmp126 = 0;
  if(!tmp126)
  {
    tmp122 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1325]] /* weaDat.winSpe PARAM */),0.0);
    if(!tmp122)
    {
      tmp124 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1325]] /* weaDat.winSpe PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta125 = stringAppend(MMC_REFSTRINGLIT(tmp123),tmp124);
      {
        const char* assert_cond = "(weaDat.winSpe >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",97,3,99,43,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta125));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",97,3,99,43,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta125));
        }
      }
      tmp126 = 1;
    }
  }
  threadData->lastEquationSolved = 2399;
}

/*
equation index: 2400
type: ALGORITHM

  assert(weaDat.winSpeSel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.winSpeSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.winSpeSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.winSpeSel.datSou, "d"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2400(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2400};
  modelica_boolean tmp127;
  modelica_boolean tmp128;
  static const MMC_DEFSTRINGLIT(tmp129,184,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.winSpeSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp130;
  modelica_metatype tmpMeta131;
  static int tmp132 = 0;
  if(!tmp132)
  {
    tmp127 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[378]] /* weaDat.winSpeSel.datSou PARAM */),1);
    tmp128 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[378]] /* weaDat.winSpeSel.datSou PARAM */),3);
    if(!(tmp127 && tmp128))
    {
      tmp130 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[378]] /* weaDat.winSpeSel.datSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta131 = stringAppend(MMC_REFSTRINGLIT(tmp129),tmp130);
      {
        const char* assert_cond = "(weaDat.winSpeSel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.winSpeSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta131));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta131));
        }
      }
      tmp132 = 1;
    }
  }
  threadData->lastEquationSolved = 2400;
}

/*
equation index: 2401
type: ALGORITHM

  assert(weaDat.totSkyCov >= 0.0 and weaDat.totSkyCov <= 1.0, "Variable violating min/max constraint: 0.0 <= weaDat.totSkyCov <= 1.0, has value: " + String(weaDat.totSkyCov, "g"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2401(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2401};
  modelica_boolean tmp133;
  modelica_boolean tmp134;
  static const MMC_DEFSTRINGLIT(tmp135,82,"Variable violating min/max constraint: 0.0 <= weaDat.totSkyCov <= 1.0, has value: ");
  modelica_string tmp136;
  modelica_metatype tmpMeta137;
  static int tmp138 = 0;
  if(!tmp138)
  {
    tmp133 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1321]] /* weaDat.totSkyCov PARAM */),0.0);
    tmp134 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1321]] /* weaDat.totSkyCov PARAM */),1.0);
    if(!(tmp133 && tmp134))
    {
      tmp136 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1321]] /* weaDat.totSkyCov PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta137 = stringAppend(MMC_REFSTRINGLIT(tmp135),tmp136);
      {
        const char* assert_cond = "(weaDat.totSkyCov >= 0.0 and weaDat.totSkyCov <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",188,3,193,43,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta137));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",188,3,193,43,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta137));
        }
      }
      tmp138 = 1;
    }
  }
  threadData->lastEquationSolved = 2401;
}

/*
equation index: 2402
type: ALGORITHM

  assert(weaDat.totSkyCovSel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.totSkyCovSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.totSkyCovSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.totSkyCovSel.datSou, "d"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2402(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2402};
  modelica_boolean tmp139;
  modelica_boolean tmp140;
  static const MMC_DEFSTRINGLIT(tmp141,187,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.totSkyCovSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp142;
  modelica_metatype tmpMeta143;
  static int tmp144 = 0;
  if(!tmp144)
  {
    tmp139 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[374]] /* weaDat.totSkyCovSel.datSou PARAM */),1);
    tmp140 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[374]] /* weaDat.totSkyCovSel.datSou PARAM */),3);
    if(!(tmp139 && tmp140))
    {
      tmp142 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[374]] /* weaDat.totSkyCovSel.datSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta143 = stringAppend(MMC_REFSTRINGLIT(tmp141),tmp142);
      {
        const char* assert_cond = "(weaDat.totSkyCovSel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.totSkyCovSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta143));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta143));
        }
      }
      tmp144 = 1;
    }
  }
  threadData->lastEquationSolved = 2402;
}

/*
equation index: 2403
type: ALGORITHM

  assert(weaDat.ceiHeiSel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.ceiHeiSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.ceiHeiSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.ceiHeiSel.datSou, "d"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2403(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2403};
  modelica_boolean tmp145;
  modelica_boolean tmp146;
  static const MMC_DEFSTRINGLIT(tmp147,184,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.ceiHeiSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp148;
  modelica_metatype tmpMeta149;
  static int tmp150 = 0;
  if(!tmp150)
  {
    tmp145 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[327]] /* weaDat.ceiHeiSel.datSou PARAM */),1);
    tmp146 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[327]] /* weaDat.ceiHeiSel.datSou PARAM */),3);
    if(!(tmp145 && tmp146))
    {
      tmp148 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[327]] /* weaDat.ceiHeiSel.datSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta149 = stringAppend(MMC_REFSTRINGLIT(tmp147),tmp148);
      {
        const char* assert_cond = "(weaDat.ceiHeiSel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.ceiHeiSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta149));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta149));
        }
      }
      tmp150 = 1;
    }
  }
  threadData->lastEquationSolved = 2403;
}

/*
equation index: 2404
type: ALGORITHM

  assert(weaDat.opaSkyCov >= 0.0 and weaDat.opaSkyCov <= 1.0, "Variable violating min/max constraint: 0.0 <= weaDat.opaSkyCov <= 1.0, has value: " + String(weaDat.opaSkyCov, "g"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2404(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2404};
  modelica_boolean tmp151;
  modelica_boolean tmp152;
  static const MMC_DEFSTRINGLIT(tmp153,82,"Variable violating min/max constraint: 0.0 <= weaDat.opaSkyCov <= 1.0, has value: ");
  modelica_string tmp154;
  modelica_metatype tmpMeta155;
  static int tmp156 = 0;
  if(!tmp156)
  {
    tmp151 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1312]] /* weaDat.opaSkyCov PARAM */),0.0);
    tmp152 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1312]] /* weaDat.opaSkyCov PARAM */),1.0);
    if(!(tmp151 && tmp152))
    {
      tmp154 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1312]] /* weaDat.opaSkyCov PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta155 = stringAppend(MMC_REFSTRINGLIT(tmp153),tmp154);
      {
        const char* assert_cond = "(weaDat.opaSkyCov >= 0.0 and weaDat.opaSkyCov <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",204,3,209,43,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta155));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",204,3,209,43,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta155));
        }
      }
      tmp156 = 1;
    }
  }
  threadData->lastEquationSolved = 2404;
}

/*
equation index: 2405
type: ALGORITHM

  assert(weaDat.opaSkyCovSel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.opaSkyCovSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.opaSkyCovSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.opaSkyCovSel.datSou, "d"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2405(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2405};
  modelica_boolean tmp157;
  modelica_boolean tmp158;
  static const MMC_DEFSTRINGLIT(tmp159,187,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.opaSkyCovSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp160;
  modelica_metatype tmpMeta161;
  static int tmp162 = 0;
  if(!tmp162)
  {
    tmp157 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[367]] /* weaDat.opaSkyCovSel.datSou PARAM */),1);
    tmp158 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[367]] /* weaDat.opaSkyCovSel.datSou PARAM */),3);
    if(!(tmp157 && tmp158))
    {
      tmp160 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[367]] /* weaDat.opaSkyCovSel.datSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta161 = stringAppend(MMC_REFSTRINGLIT(tmp159),tmp160);
      {
        const char* assert_cond = "(weaDat.opaSkyCovSel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.opaSkyCovSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta161));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta161));
        }
      }
      tmp162 = 1;
    }
  }
  threadData->lastEquationSolved = 2405;
}

/*
equation index: 2406
type: ALGORITHM

  assert(weaDat.relHum >= 0.0 and weaDat.relHum <= 1.0, "Variable violating min/max constraint: 0.0 <= weaDat.relHum <= 1.0, has value: " + String(weaDat.relHum, "g"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2406(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2406};
  modelica_boolean tmp163;
  modelica_boolean tmp164;
  static const MMC_DEFSTRINGLIT(tmp165,79,"Variable violating min/max constraint: 0.0 <= weaDat.relHum <= 1.0, has value: ");
  modelica_string tmp166;
  modelica_metatype tmpMeta167;
  static int tmp168 = 0;
  if(!tmp168)
  {
    tmp163 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1316]] /* weaDat.relHum PARAM */),0.0);
    tmp164 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1316]] /* weaDat.relHum PARAM */),1.0);
    if(!(tmp163 && tmp164))
    {
      tmp166 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1316]] /* weaDat.relHum PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta167 = stringAppend(MMC_REFSTRINGLIT(tmp165),tmp166);
      {
        const char* assert_cond = "(weaDat.relHum >= 0.0 and weaDat.relHum <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",81,3,85,43,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta167));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",81,3,85,43,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta167));
        }
      }
      tmp168 = 1;
    }
  }
  threadData->lastEquationSolved = 2406;
}

/*
equation index: 2407
type: ALGORITHM

  assert(weaDat.relHumSel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.relHumSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.relHumSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.relHumSel.datSou, "d"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2407(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2407};
  modelica_boolean tmp169;
  modelica_boolean tmp170;
  static const MMC_DEFSTRINGLIT(tmp171,184,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.relHumSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp172;
  modelica_metatype tmpMeta173;
  static int tmp174 = 0;
  if(!tmp174)
  {
    tmp169 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[371]] /* weaDat.relHumSel.datSou PARAM */),1);
    tmp170 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[371]] /* weaDat.relHumSel.datSou PARAM */),3);
    if(!(tmp169 && tmp170))
    {
      tmp172 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[371]] /* weaDat.relHumSel.datSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta173 = stringAppend(MMC_REFSTRINGLIT(tmp171),tmp172);
      {
        const char* assert_cond = "(weaDat.relHumSel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.relHumSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta173));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta173));
        }
      }
      tmp174 = 1;
    }
  }
  threadData->lastEquationSolved = 2407;
}

/*
equation index: 2408
type: ALGORITHM

  assert(weaDat.TBlaSky >= 0.0, "Variable violating min constraint: 0.0 <= weaDat.TBlaSky, has value: " + String(weaDat.TBlaSky, "g"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2408(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2408};
  modelica_boolean tmp175;
  static const MMC_DEFSTRINGLIT(tmp176,69,"Variable violating min constraint: 0.0 <= weaDat.TBlaSky, has value: ");
  modelica_string tmp177;
  modelica_metatype tmpMeta178;
  static int tmp179 = 0;
  if(!tmp179)
  {
    tmp175 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1272]] /* weaDat.TBlaSky PARAM */),0.0);
    if(!tmp175)
    {
      tmp177 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1272]] /* weaDat.TBlaSky PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta178 = stringAppend(MMC_REFSTRINGLIT(tmp176),tmp177);
      {
        const char* assert_cond = "(weaDat.TBlaSky >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",66,3,68,43,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta178));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",66,3,68,43,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta178));
        }
      }
      tmp179 = 1;
    }
  }
  threadData->lastEquationSolved = 2408;
}

/*
equation index: 2409
type: ALGORITHM

  assert(weaDat.TBlaSkySel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.TBlaSkySel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.TBlaSkySel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.TBlaSkySel.datSou, "d"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2409(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2409};
  modelica_boolean tmp180;
  modelica_boolean tmp181;
  static const MMC_DEFSTRINGLIT(tmp182,185,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.TBlaSkySel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp183;
  modelica_metatype tmpMeta184;
  static int tmp185 = 0;
  if(!tmp185)
  {
    tmp180 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[320]] /* weaDat.TBlaSkySel.datSou PARAM */),1);
    tmp181 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[320]] /* weaDat.TBlaSkySel.datSou PARAM */),3);
    if(!(tmp180 && tmp181))
    {
      tmp183 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[320]] /* weaDat.TBlaSkySel.datSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta184 = stringAppend(MMC_REFSTRINGLIT(tmp182),tmp183);
      {
        const char* assert_cond = "(weaDat.TBlaSkySel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.TBlaSkySel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta184));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta184));
        }
      }
      tmp185 = 1;
    }
  }
  threadData->lastEquationSolved = 2409;
}

/*
equation index: 2410
type: ALGORITHM

  assert(T_init >= 0.0, "Variable violating min constraint: 0.0 <= T_init, has value: " + String(T_init, "g"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2410(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2410};
  modelica_boolean tmp186;
  static const MMC_DEFSTRINGLIT(tmp187,61,"Variable violating min constraint: 0.0 <= T_init, has value: ");
  modelica_string tmp188;
  modelica_metatype tmpMeta189;
  static int tmp190 = 0;
  if(!tmp190)
  {
    tmp186 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2]] /* T_init PARAM */),0.0);
    if(!tmp186)
    {
      tmp188 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2]] /* T_init PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta189 = stringAppend(MMC_REFSTRINGLIT(tmp187),tmp188);
      {
        const char* assert_cond = "(T_init >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"c:/Users/ZacharyCooper-Baldoc/Desktop/Repositories/CFD/output/tmp_one_port.mo",5,3,5,58,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta189));
        } else {
          FILE_INFO info = {"c:/Users/ZacharyCooper-Baldoc/Desktop/Repositories/CFD/output/tmp_one_port.mo",5,3,5,58,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta189));
        }
      }
      tmp190 = 1;
    }
  }
  threadData->lastEquationSolved = 2410;
}

/*
equation index: 2411
type: ALGORITHM

  assert(weaDat.TDryBul >= 0.0, "Variable violating min constraint: 0.0 <= weaDat.TDryBul, has value: " + String(weaDat.TDryBul, "g"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2411(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2411};
  modelica_boolean tmp191;
  static const MMC_DEFSTRINGLIT(tmp192,69,"Variable violating min constraint: 0.0 <= weaDat.TDryBul, has value: ");
  modelica_string tmp193;
  modelica_metatype tmpMeta194;
  static int tmp195 = 0;
  if(!tmp195)
  {
    tmp191 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1276]] /* weaDat.TDryBul PARAM */),0.0);
    if(!tmp191)
    {
      tmp193 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1276]] /* weaDat.TDryBul PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta194 = stringAppend(MMC_REFSTRINGLIT(tmp192),tmp193);
      {
        const char* assert_cond = "(weaDat.TDryBul >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",37,3,39,43,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta194));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",37,3,39,43,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta194));
        }
      }
      tmp195 = 1;
    }
  }
  threadData->lastEquationSolved = 2411;
}

/*
equation index: 2412
type: ALGORITHM

  assert(weaDat.TDryBulSel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.TDryBulSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.TDryBulSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.TDryBulSel.datSou, "d"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2412(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2412};
  modelica_boolean tmp196;
  modelica_boolean tmp197;
  static const MMC_DEFSTRINGLIT(tmp198,185,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.TDryBulSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp199;
  modelica_metatype tmpMeta200;
  static int tmp201 = 0;
  if(!tmp201)
  {
    tmp196 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[324]] /* weaDat.TDryBulSel.datSou PARAM */),1);
    tmp197 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[324]] /* weaDat.TDryBulSel.datSou PARAM */),3);
    if(!(tmp196 && tmp197))
    {
      tmp199 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[324]] /* weaDat.TDryBulSel.datSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta200 = stringAppend(MMC_REFSTRINGLIT(tmp198),tmp199);
      {
        const char* assert_cond = "(weaDat.TDryBulSel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.TDryBulSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta200));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta200));
        }
      }
      tmp201 = 1;
    }
  }
  threadData->lastEquationSolved = 2412;
}

/*
equation index: 2413
type: ALGORITHM

  assert(weaDat.TDewPoi >= 0.0, "Variable violating min constraint: 0.0 <= weaDat.TDewPoi, has value: " + String(weaDat.TDewPoi, "g"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2413(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2413};
  modelica_boolean tmp202;
  static const MMC_DEFSTRINGLIT(tmp203,69,"Variable violating min constraint: 0.0 <= weaDat.TDewPoi, has value: ");
  modelica_string tmp204;
  modelica_metatype tmpMeta205;
  static int tmp206 = 0;
  if(!tmp206)
  {
    tmp202 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1274]] /* weaDat.TDewPoi PARAM */),0.0);
    if(!tmp202)
    {
      tmp204 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1274]] /* weaDat.TDewPoi PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta205 = stringAppend(MMC_REFSTRINGLIT(tmp203),tmp204);
      {
        const char* assert_cond = "(weaDat.TDewPoi >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",52,3,54,43,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta205));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",52,3,54,43,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta205));
        }
      }
      tmp206 = 1;
    }
  }
  threadData->lastEquationSolved = 2413;
}

/*
equation index: 2414
type: ALGORITHM

  assert(weaDat.TDewPoiSel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.TDewPoiSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.TDewPoiSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.TDewPoiSel.datSou, "d"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2414(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2414};
  modelica_boolean tmp207;
  modelica_boolean tmp208;
  static const MMC_DEFSTRINGLIT(tmp209,185,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.TDewPoiSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp210;
  modelica_metatype tmpMeta211;
  static int tmp212 = 0;
  if(!tmp212)
  {
    tmp207 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[322]] /* weaDat.TDewPoiSel.datSou PARAM */),1);
    tmp208 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[322]] /* weaDat.TDewPoiSel.datSou PARAM */),3);
    if(!(tmp207 && tmp208))
    {
      tmp210 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[322]] /* weaDat.TDewPoiSel.datSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta211 = stringAppend(MMC_REFSTRINGLIT(tmp209),tmp210);
      {
        const char* assert_cond = "(weaDat.TDewPoiSel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.TDewPoiSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta211));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta211));
        }
      }
      tmp212 = 1;
    }
  }
  threadData->lastEquationSolved = 2414;
}

/*
equation index: 2415
type: ALGORITHM

  assert(weaDat.pAtmSel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.pAtmSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.pAtmSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.pAtmSel.datSou, "d"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2415(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2415};
  modelica_boolean tmp213;
  modelica_boolean tmp214;
  static const MMC_DEFSTRINGLIT(tmp215,182,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.pAtmSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp216;
  modelica_metatype tmpMeta217;
  static int tmp218 = 0;
  if(!tmp218)
  {
    tmp213 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[369]] /* weaDat.pAtmSel.datSou PARAM */),1);
    tmp214 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[369]] /* weaDat.pAtmSel.datSou PARAM */),3);
    if(!(tmp213 && tmp214))
    {
      tmp216 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[369]] /* weaDat.pAtmSel.datSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta217 = stringAppend(MMC_REFSTRINGLIT(tmp215),tmp216);
      {
        const char* assert_cond = "(weaDat.pAtmSel.datSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.pAtmSel.datSou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta217));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/BaseClasses/SourceSelector.mo",5,3,6,30,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta217));
        }
      }
      tmp218 = 1;
    }
  }
  threadData->lastEquationSolved = 2415;
}

/*
equation index: 2416
type: ALGORITHM

  assert(weaDat.datRea.extrapolation >= Modelica.Blocks.Types.Extrapolation.HoldLastPoint and weaDat.datRea.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation, "Variable violating min/max constraint: Modelica.Blocks.Types.Extrapolation.HoldLastPoint <= weaDat.datRea.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation, has value: " + String(weaDat.datRea.extrapolation, "d"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2416(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2416};
  modelica_boolean tmp219;
  modelica_boolean tmp220;
  static const MMC_DEFSTRINGLIT(tmp221,187,"Variable violating min/max constraint: Modelica.Blocks.Types.Extrapolation.HoldLastPoint <= weaDat.datRea.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation, has value: ");
  modelica_string tmp222;
  modelica_metatype tmpMeta223;
  static int tmp224 = 0;
  if(!tmp224)
  {
    tmp219 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[355]] /* weaDat.datRea.extrapolation PARAM */),1);
    tmp220 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[355]] /* weaDat.datRea.extrapolation PARAM */),4);
    if(!(tmp219 && tmp220))
    {
      tmp222 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[355]] /* weaDat.datRea.extrapolation PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta223 = stringAppend(MMC_REFSTRINGLIT(tmp221),tmp222);
      {
        const char* assert_cond = "(weaDat.datRea.extrapolation >= Modelica.Blocks.Types.Extrapolation.HoldLastPoint and weaDat.datRea.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Tables.mo",39,5,41,61,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta223));
        } else {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Tables.mo",39,5,41,61,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta223));
        }
      }
      tmp224 = 1;
    }
  }
  threadData->lastEquationSolved = 2416;
}

/*
equation index: 2417
type: ALGORITHM

  assert(weaDat.datRea.smoothness >= Modelica.Blocks.Types.Smoothness.LinearSegments and weaDat.datRea.smoothness <= Modelica.Blocks.Types.Smoothness.ModifiedContinuousDerivative, "Variable violating min/max constraint: Modelica.Blocks.Types.Smoothness.LinearSegments <= weaDat.datRea.smoothness <= Modelica.Blocks.Types.Smoothness.ModifiedContinuousDerivative, has value: " + String(weaDat.datRea.smoothness, "d"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2417(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2417};
  modelica_boolean tmp225;
  modelica_boolean tmp226;
  static const MMC_DEFSTRINGLIT(tmp227,192,"Variable violating min/max constraint: Modelica.Blocks.Types.Smoothness.LinearSegments <= weaDat.datRea.smoothness <= Modelica.Blocks.Types.Smoothness.ModifiedContinuousDerivative, has value: ");
  modelica_string tmp228;
  modelica_metatype tmpMeta229;
  static int tmp230 = 0;
  if(!tmp230)
  {
    tmp225 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[358]] /* weaDat.datRea.smoothness PARAM */),1);
    tmp226 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[358]] /* weaDat.datRea.smoothness PARAM */),6);
    if(!(tmp225 && tmp226))
    {
      tmp228 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[358]] /* weaDat.datRea.smoothness PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta229 = stringAppend(MMC_REFSTRINGLIT(tmp227),tmp228);
      {
        const char* assert_cond = "(weaDat.datRea.smoothness >= Modelica.Blocks.Types.Smoothness.LinearSegments and weaDat.datRea.smoothness <= Modelica.Blocks.Types.Smoothness.ModifiedContinuousDerivative)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Tables.mo",36,5,38,61,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta229));
        } else {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Tables.mo",36,5,38,61,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta229));
        }
      }
      tmp230 = 1;
    }
  }
  threadData->lastEquationSolved = 2417;
}

/*
equation index: 2418
type: ALGORITHM

  assert(weaDat.calTSky >= Buildings.BoundaryConditions.Types.SkyTemperatureCalculation.HorizontalRadiation and weaDat.calTSky <= Buildings.BoundaryConditions.Types.SkyTemperatureCalculation.TemperaturesAndSkyCover, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.SkyTemperatureCalculation.HorizontalRadiation <= weaDat.calTSky <= Buildings.BoundaryConditions.Types.SkyTemperatureCalculation.TemperaturesAndSkyCover, has value: " + String(weaDat.calTSky, "d"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2418(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2418};
  modelica_boolean tmp231;
  modelica_boolean tmp232;
  static const MMC_DEFSTRINGLIT(tmp233,238,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.SkyTemperatureCalculation.HorizontalRadiation <= weaDat.calTSky <= Buildings.BoundaryConditions.Types.SkyTemperatureCalculation.TemperaturesAndSkyCover, has value: ");
  modelica_string tmp234;
  modelica_metatype tmpMeta235;
  static int tmp236 = 0;
  if(!tmp236)
  {
    tmp231 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[326]] /* weaDat.calTSky PARAM */),1);
    tmp232 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[326]] /* weaDat.calTSky PARAM */),2);
    if(!(tmp231 && tmp232))
    {
      tmp234 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[326]] /* weaDat.calTSky PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta235 = stringAppend(MMC_REFSTRINGLIT(tmp233),tmp234);
      {
        const char* assert_cond = "(weaDat.calTSky >= Buildings.BoundaryConditions.Types.SkyTemperatureCalculation.HorizontalRadiation and weaDat.calTSky <= Buildings.BoundaryConditions.Types.SkyTemperatureCalculation.TemperaturesAndSkyCover)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",218,3,223,53,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta235));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",218,3,223,53,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta235));
        }
      }
      tmp236 = 1;
    }
  }
  threadData->lastEquationSolved = 2418;
}

/*
equation index: 2419
type: ALGORITHM

  assert(weaDat.opaSkyCovSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.opaSkyCovSou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.opaSkyCovSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.opaSkyCovSou, "d"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2419(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2419};
  modelica_boolean tmp237;
  modelica_boolean tmp238;
  static const MMC_DEFSTRINGLIT(tmp239,180,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.opaSkyCovSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp240;
  modelica_metatype tmpMeta241;
  static int tmp242 = 0;
  if(!tmp242)
  {
    tmp237 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[368]] /* weaDat.opaSkyCovSou PARAM */),1);
    tmp238 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[368]] /* weaDat.opaSkyCovSou PARAM */),3);
    if(!(tmp237 && tmp238))
    {
      tmp240 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[368]] /* weaDat.opaSkyCovSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta241 = stringAppend(MMC_REFSTRINGLIT(tmp239),tmp240);
      {
        const char* assert_cond = "(weaDat.opaSkyCovSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.opaSkyCovSou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",202,3,203,94,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta241));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",202,3,203,94,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta241));
        }
      }
      tmp242 = 1;
    }
  }
  threadData->lastEquationSolved = 2419;
}

/*
equation index: 2420
type: ALGORITHM

  assert(weaDat.totSkyCovSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.totSkyCovSou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.totSkyCovSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.totSkyCovSou, "d"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2420(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2420};
  modelica_boolean tmp243;
  modelica_boolean tmp244;
  static const MMC_DEFSTRINGLIT(tmp245,180,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.totSkyCovSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp246;
  modelica_metatype tmpMeta247;
  static int tmp248 = 0;
  if(!tmp248)
  {
    tmp243 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[375]] /* weaDat.totSkyCovSou PARAM */),1);
    tmp244 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[375]] /* weaDat.totSkyCovSou PARAM */),3);
    if(!(tmp243 && tmp244))
    {
      tmp246 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[375]] /* weaDat.totSkyCovSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta247 = stringAppend(MMC_REFSTRINGLIT(tmp245),tmp246);
      {
        const char* assert_cond = "(weaDat.totSkyCovSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.totSkyCovSou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",186,3,187,93,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta247));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",186,3,187,93,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta247));
        }
      }
      tmp248 = 1;
    }
  }
  threadData->lastEquationSolved = 2420;
}

/*
equation index: 2421
type: ALGORITHM

  assert(weaDat.ceiHeiSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.ceiHeiSou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.ceiHeiSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.ceiHeiSou, "d"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2421(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2421};
  modelica_boolean tmp249;
  modelica_boolean tmp250;
  static const MMC_DEFSTRINGLIT(tmp251,177,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.ceiHeiSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp252;
  modelica_metatype tmpMeta253;
  static int tmp254 = 0;
  if(!tmp254)
  {
    tmp249 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[328]] /* weaDat.ceiHeiSou PARAM */),1);
    tmp250 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[328]] /* weaDat.ceiHeiSou PARAM */),3);
    if(!(tmp249 && tmp250))
    {
      tmp252 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[328]] /* weaDat.ceiHeiSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta253 = stringAppend(MMC_REFSTRINGLIT(tmp251),tmp252);
      {
        const char* assert_cond = "(weaDat.ceiHeiSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.ceiHeiSou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",170,3,171,92,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta253));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",170,3,171,92,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta253));
        }
      }
      tmp254 = 1;
    }
  }
  threadData->lastEquationSolved = 2421;
}

/*
equation index: 2422
type: ALGORITHM

  assert(weaDat.HSou >= Buildings.BoundaryConditions.Types.RadiationDataSource.File and weaDat.HSou <= Buildings.BoundaryConditions.Types.RadiationDataSource.Input_HDirNor_HGloHor, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.RadiationDataSource.File <= weaDat.HSou <= Buildings.BoundaryConditions.Types.RadiationDataSource.Input_HDirNor_HGloHor, has value: " + String(weaDat.HSou, "d"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2422(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2422};
  modelica_boolean tmp255;
  modelica_boolean tmp256;
  static const MMC_DEFSTRINGLIT(tmp257,206,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.RadiationDataSource.File <= weaDat.HSou <= Buildings.BoundaryConditions.Types.RadiationDataSource.Input_HDirNor_HGloHor, has value: ");
  modelica_string tmp258;
  modelica_metatype tmpMeta259;
  static int tmp260 = 0;
  if(!tmp260)
  {
    tmp255 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[318]] /* weaDat.HSou PARAM */),1);
    tmp256 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[318]] /* weaDat.HSou PARAM */),4);
    if(!(tmp255 && tmp256))
    {
      tmp258 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[318]] /* weaDat.HSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta259 = stringAppend(MMC_REFSTRINGLIT(tmp257),tmp258);
      {
        const char* assert_cond = "(weaDat.HSou >= Buildings.BoundaryConditions.Types.RadiationDataSource.File and weaDat.HSou <= Buildings.BoundaryConditions.Types.RadiationDataSource.Input_HDirNor_HGloHor)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",135,4,137,76,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta259));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",135,4,137,76,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta259));
        }
      }
      tmp260 = 1;
    }
  }
  threadData->lastEquationSolved = 2422;
}

/*
equation index: 2423
type: ALGORITHM

  assert(weaDat.HInfHorSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.HInfHorSou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.HInfHorSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.HInfHorSou, "d"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2423(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2423};
  modelica_boolean tmp261;
  modelica_boolean tmp262;
  static const MMC_DEFSTRINGLIT(tmp263,178,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.HInfHorSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp264;
  modelica_metatype tmpMeta265;
  static int tmp266 = 0;
  if(!tmp266)
  {
    tmp261 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[317]] /* weaDat.HInfHorSou PARAM */),1);
    tmp262 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[317]] /* weaDat.HInfHorSou PARAM */),3);
    if(!(tmp261 && tmp262))
    {
      tmp264 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[317]] /* weaDat.HInfHorSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta265 = stringAppend(MMC_REFSTRINGLIT(tmp263),tmp264);
      {
        const char* assert_cond = "(weaDat.HInfHorSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.HInfHorSou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",123,3,124,107,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta265));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",123,3,124,107,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta265));
        }
      }
      tmp266 = 1;
    }
  }
  threadData->lastEquationSolved = 2423;
}

/*
equation index: 2424
type: ALGORITHM

  assert(weaDat.winDirSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.winDirSou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.winDirSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.winDirSou, "d"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2424(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2424};
  modelica_boolean tmp267;
  modelica_boolean tmp268;
  static const MMC_DEFSTRINGLIT(tmp269,177,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.winDirSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp270;
  modelica_metatype tmpMeta271;
  static int tmp272 = 0;
  if(!tmp272)
  {
    tmp267 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[377]] /* weaDat.winDirSou PARAM */),1);
    tmp268 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[377]] /* weaDat.winDirSou PARAM */),3);
    if(!(tmp267 && tmp268))
    {
      tmp270 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[377]] /* weaDat.winDirSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta271 = stringAppend(MMC_REFSTRINGLIT(tmp269),tmp270);
      {
        const char* assert_cond = "(weaDat.winDirSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.winDirSou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",109,3,110,92,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta271));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",109,3,110,92,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta271));
        }
      }
      tmp272 = 1;
    }
  }
  threadData->lastEquationSolved = 2424;
}

/*
equation index: 2425
type: ALGORITHM

  assert(weaDat.winSpeSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.winSpeSou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.winSpeSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.winSpeSou, "d"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2425(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2425};
  modelica_boolean tmp273;
  modelica_boolean tmp274;
  static const MMC_DEFSTRINGLIT(tmp275,177,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.winSpeSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp276;
  modelica_metatype tmpMeta277;
  static int tmp278 = 0;
  if(!tmp278)
  {
    tmp273 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[379]] /* weaDat.winSpeSou PARAM */),1);
    tmp274 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[379]] /* weaDat.winSpeSou PARAM */),3);
    if(!(tmp273 && tmp274))
    {
      tmp276 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[379]] /* weaDat.winSpeSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta277 = stringAppend(MMC_REFSTRINGLIT(tmp275),tmp276);
      {
        const char* assert_cond = "(weaDat.winSpeSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.winSpeSou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",95,3,96,88,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta277));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",95,3,96,88,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta277));
        }
      }
      tmp278 = 1;
    }
  }
  threadData->lastEquationSolved = 2425;
}

/*
equation index: 2426
type: ALGORITHM

  assert(weaDat.relHumSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.relHumSou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.relHumSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.relHumSou, "d"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2426(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2426};
  modelica_boolean tmp279;
  modelica_boolean tmp280;
  static const MMC_DEFSTRINGLIT(tmp281,177,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.relHumSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp282;
  modelica_metatype tmpMeta283;
  static int tmp284 = 0;
  if(!tmp284)
  {
    tmp279 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[372]] /* weaDat.relHumSou PARAM */),1);
    tmp280 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[372]] /* weaDat.relHumSou PARAM */),3);
    if(!(tmp279 && tmp280))
    {
      tmp282 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[372]] /* weaDat.relHumSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta283 = stringAppend(MMC_REFSTRINGLIT(tmp281),tmp282);
      {
        const char* assert_cond = "(weaDat.relHumSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.relHumSou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",79,3,80,95,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta283));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",79,3,80,95,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta283));
        }
      }
      tmp284 = 1;
    }
  }
  threadData->lastEquationSolved = 2426;
}

/*
equation index: 2427
type: ALGORITHM

  assert(weaDat.TBlaSkySou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.TBlaSkySou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.TBlaSkySou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.TBlaSkySou, "d"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2427(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2427};
  modelica_boolean tmp285;
  modelica_boolean tmp286;
  static const MMC_DEFSTRINGLIT(tmp287,178,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.TBlaSkySou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp288;
  modelica_metatype tmpMeta289;
  static int tmp290 = 0;
  if(!tmp290)
  {
    tmp285 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[321]] /* weaDat.TBlaSkySou PARAM */),1);
    tmp286 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[321]] /* weaDat.TBlaSkySou PARAM */),3);
    if(!(tmp285 && tmp286))
    {
      tmp288 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[321]] /* weaDat.TBlaSkySou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta289 = stringAppend(MMC_REFSTRINGLIT(tmp287),tmp288);
      {
        const char* assert_cond = "(weaDat.TBlaSkySou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.TBlaSkySou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",64,3,65,104,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta289));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",64,3,65,104,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta289));
        }
      }
      tmp290 = 1;
    }
  }
  threadData->lastEquationSolved = 2427;
}

/*
equation index: 2428
type: ALGORITHM

  assert(weaDat.TDewPoiSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.TDewPoiSou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.TDewPoiSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.TDewPoiSou, "d"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2428(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2428};
  modelica_boolean tmp291;
  modelica_boolean tmp292;
  static const MMC_DEFSTRINGLIT(tmp293,178,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.TDewPoiSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp294;
  modelica_metatype tmpMeta295;
  static int tmp296 = 0;
  if(!tmp296)
  {
    tmp291 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[323]] /* weaDat.TDewPoiSou PARAM */),1);
    tmp292 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[323]] /* weaDat.TDewPoiSou PARAM */),3);
    if(!(tmp291 && tmp292))
    {
      tmp294 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[323]] /* weaDat.TDewPoiSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta295 = stringAppend(MMC_REFSTRINGLIT(tmp293),tmp294);
      {
        const char* assert_cond = "(weaDat.TDewPoiSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.TDewPoiSou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",49,3,51,75,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta295));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",49,3,51,75,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta295));
        }
      }
      tmp296 = 1;
    }
  }
  threadData->lastEquationSolved = 2428;
}

/*
equation index: 2429
type: ALGORITHM

  assert(weaDat.TDryBulSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.TDryBulSou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.TDryBulSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.TDryBulSou, "d"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2429(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2429};
  modelica_boolean tmp297;
  modelica_boolean tmp298;
  static const MMC_DEFSTRINGLIT(tmp299,178,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.TDryBulSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp300;
  modelica_metatype tmpMeta301;
  static int tmp302 = 0;
  if(!tmp302)
  {
    tmp297 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[325]] /* weaDat.TDryBulSou PARAM */),1);
    tmp298 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[325]] /* weaDat.TDryBulSou PARAM */),3);
    if(!(tmp297 && tmp298))
    {
      tmp300 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[325]] /* weaDat.TDryBulSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta301 = stringAppend(MMC_REFSTRINGLIT(tmp299),tmp300);
      {
        const char* assert_cond = "(weaDat.TDryBulSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.TDryBulSou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",34,3,36,75,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta301));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",34,3,36,75,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta301));
        }
      }
      tmp302 = 1;
    }
  }
  threadData->lastEquationSolved = 2429;
}

/*
equation index: 2430
type: ALGORITHM

  assert(weaDat.pAtmSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.pAtmSou <= Buildings.BoundaryConditions.Types.DataSource.Input, "Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.pAtmSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: " + String(weaDat.pAtmSou, "d"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2430(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2430};
  modelica_boolean tmp303;
  modelica_boolean tmp304;
  static const MMC_DEFSTRINGLIT(tmp305,175,"Variable violating min/max constraint: Buildings.BoundaryConditions.Types.DataSource.File <= weaDat.pAtmSou <= Buildings.BoundaryConditions.Types.DataSource.Input, has value: ");
  modelica_string tmp306;
  modelica_metatype tmpMeta307;
  static int tmp308 = 0;
  if(!tmp308)
  {
    tmp303 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[370]] /* weaDat.pAtmSou PARAM */),1);
    tmp304 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[370]] /* weaDat.pAtmSou PARAM */),3);
    if(!(tmp303 && tmp304))
    {
      tmp306 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[370]] /* weaDat.pAtmSou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta307 = stringAppend(MMC_REFSTRINGLIT(tmp305),tmp306);
      {
        const char* assert_cond = "(weaDat.pAtmSou >= Buildings.BoundaryConditions.Types.DataSource.File and weaDat.pAtmSou <= Buildings.BoundaryConditions.Types.DataSource.Input)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",18,3,20,75,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta307));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",18,3,20,75,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta307));
        }
      }
      tmp308 = 1;
    }
  }
  threadData->lastEquationSolved = 2430;
}

/*
equation index: 2431
type: ALGORITHM

  assert(roo.nSen >= 0, "Variable violating min constraint: 0 <= roo.nSen, has value: " + String(roo.nSen, "d"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2431(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2431};
  modelica_boolean tmp309;
  static const MMC_DEFSTRINGLIT(tmp310,61,"Variable violating min constraint: 0 <= roo.nSen, has value: ");
  modelica_string tmp311;
  modelica_metatype tmpMeta312;
  static int tmp313 = 0;
  if(!tmp313)
  {
    tmp309 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[259]] /* roo.nSen PARAM */),((modelica_integer) 0));
    if(!tmp309)
    {
      tmp311 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[259]] /* roo.nSen PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta312 = stringAppend(MMC_REFSTRINGLIT(tmp310),tmp311);
      {
        const char* assert_cond = "(roo.nSen >= 0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/CFD.mo",53,3,54,57,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta312));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/CFD.mo",53,3,54,57,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta312));
        }
      }
      tmp313 = 1;
    }
  }
  threadData->lastEquationSolved = 2431;
}

/*
equation index: 2432
type: ALGORITHM

  assert(roo.samplePeriod >= 2.220446049250313e-14, "Variable violating min constraint: 2.220446049250313e-14 <= roo.samplePeriod, has value: " + String(roo.samplePeriod, "g"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2432(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2432};
  modelica_boolean tmp314;
  static const MMC_DEFSTRINGLIT(tmp315,89,"Variable violating min constraint: 2.220446049250313e-14 <= roo.samplePeriod, has value: ");
  modelica_string tmp316;
  modelica_metatype tmpMeta317;
  static int tmp318 = 0;
  if(!tmp318)
  {
    tmp314 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1239]] /* roo.samplePeriod PARAM */),2.220446049250313e-14);
    if(!tmp314)
    {
      tmp316 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1239]] /* roo.samplePeriod PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta317 = stringAppend(MMC_REFSTRINGLIT(tmp315),tmp316);
      {
        const char* assert_cond = "(roo.samplePeriod >= 2.220446049250313e-14)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/CFD.mo",29,3,30,71,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta317));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/CFD.mo",29,3,30,71,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta317));
        }
      }
      tmp318 = 1;
    }
  }
  threadData->lastEquationSolved = 2432;
}

/*
equation index: 2433
type: ALGORITHM

  assert(roo.p_start >= 0.0 and roo.p_start <= 1e8, "Variable violating min/max constraint: 0.0 <= roo.p_start <= 1e8, has value: " + String(roo.p_start, "g"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2433(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2433};
  modelica_boolean tmp319;
  modelica_boolean tmp320;
  static const MMC_DEFSTRINGLIT(tmp321,77,"Variable violating min/max constraint: 0.0 <= roo.p_start <= 1e8, has value: ");
  modelica_string tmp322;
  modelica_metatype tmpMeta323;
  static int tmp324 = 0;
  if(!tmp324)
  {
    tmp319 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[999]] /* roo.p_start PARAM */),0.0);
    tmp320 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[999]] /* roo.p_start PARAM */),1e8);
    if(!(tmp319 && tmp320))
    {
      tmp322 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[999]] /* roo.p_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta323 = stringAppend(MMC_REFSTRINGLIT(tmp321),tmp322);
      {
        const char* assert_cond = "(roo.p_start >= 0.0 and roo.p_start <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/CFD.mo",22,3,24,47,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta323));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/CFD.mo",22,3,24,47,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta323));
        }
      }
      tmp324 = 1;
    }
  }
  threadData->lastEquationSolved = 2433;
}

/*
equation index: 2434
type: ALGORITHM

  assert(roo.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and roo.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= roo.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(roo.massDynamics, "d"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2434(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2434};
  modelica_boolean tmp325;
  modelica_boolean tmp326;
  static const MMC_DEFSTRINGLIT(tmp327,165,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= roo.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp328;
  modelica_metatype tmpMeta329;
  static int tmp330 = 0;
  if(!tmp330)
  {
    tmp325 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[253]] /* roo.massDynamics PARAM */),1);
    tmp326 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[253]] /* roo.massDynamics PARAM */),4);
    if(!(tmp325 && tmp326))
    {
      tmp328 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[253]] /* roo.massDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta329 = stringAppend(MMC_REFSTRINGLIT(tmp327),tmp328);
      {
        const char* assert_cond = "(roo.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and roo.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/CFD.mo",18,3,20,88,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta329));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/CFD.mo",18,3,20,88,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta329));
        }
      }
      tmp330 = 1;
    }
  }
  threadData->lastEquationSolved = 2434;
}

/*
equation index: 2435
type: ALGORITHM

  assert(roo.radTem.tauSha[1] >= 0.0 and roo.radTem.tauSha[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= roo.radTem.tauSha[1] <= 1.0, has value: " + String(roo.radTem.tauSha[1], "g"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2435(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2435};
  modelica_boolean tmp331;
  modelica_boolean tmp332;
  static const MMC_DEFSTRINGLIT(tmp333,86,"Variable violating min/max constraint: 0.0 <= roo.radTem.tauSha[1] <= 1.0, has value: ");
  modelica_string tmp334;
  modelica_metatype tmpMeta335;
  static int tmp336 = 0;
  if(!tmp336)
  {
    tmp331 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1238]] /* roo.radTem.tauSha[1] PARAM */),0.0);
    tmp332 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1238]] /* roo.radTem.tauSha[1] PARAM */),1.0);
    if(!(tmp331 && tmp332))
    {
      tmp334 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1238]] /* roo.radTem.tauSha[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta335 = stringAppend(MMC_REFSTRINGLIT(tmp333),tmp334);
      {
        const char* assert_cond = "(roo.radTem.tauSha[1] >= 0.0 and roo.radTem.tauSha[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/RadiationTemperature.mo",46,3,49,30,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta335));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/RadiationTemperature.mo",46,3,49,30,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta335));
        }
      }
      tmp336 = 1;
    }
  }
  threadData->lastEquationSolved = 2435;
}

/*
equation index: 2436
type: ALGORITHM

  assert(roo.radTem.epsSha[1] >= 0.0 and roo.radTem.epsSha[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= roo.radTem.epsSha[1] <= 1.0, has value: " + String(roo.radTem.epsSha[1], "g"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2436(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2436};
  modelica_boolean tmp337;
  modelica_boolean tmp338;
  static const MMC_DEFSTRINGLIT(tmp339,86,"Variable violating min/max constraint: 0.0 <= roo.radTem.epsSha[1] <= 1.0, has value: ");
  modelica_string tmp340;
  modelica_metatype tmpMeta341;
  static int tmp342 = 0;
  if(!tmp342)
  {
    tmp337 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1206]] /* roo.radTem.epsSha[1] PARAM */),0.0);
    tmp338 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1206]] /* roo.radTem.epsSha[1] PARAM */),1.0);
    if(!(tmp337 && tmp338))
    {
      tmp340 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1206]] /* roo.radTem.epsSha[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta341 = stringAppend(MMC_REFSTRINGLIT(tmp339),tmp340);
      {
        const char* assert_cond = "(roo.radTem.epsSha[1] >= 0.0 and roo.radTem.epsSha[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/RadiationTemperature.mo",43,3,45,28,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta341));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/RadiationTemperature.mo",43,3,45,28,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta341));
        }
      }
      tmp342 = 1;
    }
  }
  threadData->lastEquationSolved = 2436;
}

/*
equation index: 2437
type: ALGORITHM

  assert(roo.radTem.epsGla[1] >= 0.0 and roo.radTem.epsGla[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= roo.radTem.epsGla[1] <= 1.0, has value: " + String(roo.radTem.epsGla[1], "g"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2437(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2437};
  modelica_boolean tmp343;
  modelica_boolean tmp344;
  static const MMC_DEFSTRINGLIT(tmp345,86,"Variable violating min/max constraint: 0.0 <= roo.radTem.epsGla[1] <= 1.0, has value: ");
  modelica_string tmp346;
  modelica_metatype tmpMeta347;
  static int tmp348 = 0;
  if(!tmp348)
  {
    tmp343 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1205]] /* roo.radTem.epsGla[1] PARAM */),0.0);
    tmp344 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1205]] /* roo.radTem.epsGla[1] PARAM */),1.0);
    if(!(tmp343 && tmp344))
    {
      tmp346 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1205]] /* roo.radTem.epsGla[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta347 = stringAppend(MMC_REFSTRINGLIT(tmp345),tmp346);
      {
        const char* assert_cond = "(roo.radTem.epsGla[1] >= 0.0 and roo.radTem.epsGla[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/RadiationTemperature.mo",40,3,42,28,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta347));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/RadiationTemperature.mo",40,3,42,28,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta347));
        }
      }
      tmp348 = 1;
    }
  }
  threadData->lastEquationSolved = 2437;
}

/*
equation index: 2438
type: ALGORITHM

  assert(roo.datConExtWin[1].fFra >= 0.0 and roo.datConExtWin[1].fFra <= 1.0, "Variable violating min/max constraint: 0.0 <= roo.datConExtWin[1].fFra <= 1.0, has value: " + String(roo.datConExtWin[1].fFra, "g"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2438(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2438};
  modelica_boolean tmp349;
  modelica_boolean tmp350;
  static const MMC_DEFSTRINGLIT(tmp351,90,"Variable violating min/max constraint: 0.0 <= roo.datConExtWin[1].fFra <= 1.0, has value: ");
  modelica_string tmp352;
  modelica_metatype tmpMeta353;
  static int tmp354 = 0;
  if(!tmp354)
  {
    tmp349 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[346]] /* roo.datConExtWin[1].fFra PARAM */),0.0);
    tmp350 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[346]] /* roo.datConExtWin[1].fFra PARAM */),1.0);
    if(!(tmp349 && tmp350))
    {
      tmp352 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[346]] /* roo.datConExtWin[1].fFra PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta353 = stringAppend(MMC_REFSTRINGLIT(tmp351),tmp352);
      {
        const char* assert_cond = "(roo.datConExtWin[1].fFra >= 0.0 and roo.datConExtWin[1].fFra <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ParameterConstructionWithWindow.mo",19,3,22,48,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta353));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ParameterConstructionWithWindow.mo",19,3,22,48,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta353));
        }
      }
      tmp354 = 1;
    }
  }
  threadData->lastEquationSolved = 2438;
}

/*
equation index: 2439
type: ALGORITHM

  assert(roo.radTem.datConExtWin[1].fFra >= 0.0 and roo.radTem.datConExtWin[1].fFra <= 1.0, "Variable violating min/max constraint: 0.0 <= roo.radTem.datConExtWin[1].fFra <= 1.0, has value: " + String(roo.radTem.datConExtWin[1].fFra, "g"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2439(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2439};
  modelica_boolean tmp355;
  modelica_boolean tmp356;
  static const MMC_DEFSTRINGLIT(tmp357,97,"Variable violating min/max constraint: 0.0 <= roo.radTem.datConExtWin[1].fFra <= 1.0, has value: ");
  modelica_string tmp358;
  modelica_metatype tmpMeta359;
  static int tmp360 = 0;
  if(!tmp360)
  {
    tmp355 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1063]] /* roo.radTem.datConExtWin[1].fFra PARAM */),0.0);
    tmp356 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1063]] /* roo.radTem.datConExtWin[1].fFra PARAM */),1.0);
    if(!(tmp355 && tmp356))
    {
      tmp358 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1063]] /* roo.radTem.datConExtWin[1].fFra PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta359 = stringAppend(MMC_REFSTRINGLIT(tmp357),tmp358);
      {
        const char* assert_cond = "(roo.radTem.datConExtWin[1].fFra >= 0.0 and roo.radTem.datConExtWin[1].fFra <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ParameterConstructionWithWindow.mo",19,3,22,48,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta359));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ParameterConstructionWithWindow.mo",19,3,22,48,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta359));
        }
      }
      tmp360 = 1;
    }
  }
  threadData->lastEquationSolved = 2439;
}

/*
equation index: 2440
type: ALGORITHM

  assert(roo.radTem.dummyGlaSys.gas[1].MM >= 0.0, "Variable violating min constraint: 0.0 <= roo.radTem.dummyGlaSys.gas[1].MM, has value: " + String(roo.radTem.dummyGlaSys.gas[1].MM, "g"));
*/
OMC_DISABLE_OPT
static void tmp_one_port_eqFunction_2440(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2440};
  modelica_boolean tmp361;
  static const MMC_DEFSTRINGLIT(tmp362,87,"Variable violating min constraint: 0.0 <= roo.radTem.dummyGlaSys.gas[1].MM, has value: ");
  modelica_string tmp363;
  modelica_metatype tmpMeta364;
  static int tmp365 = 0;
  if(!tmp365)
  {
    tmp361 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1158]] /* roo.radTem.dummyGlaSys.gas[1].MM PARAM */),0.0);
    if(!tmp361)
    {
      tmp363 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1158]] /* roo.radTem.dummyGlaSys.gas[1].MM PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta364 = stringAppend(MMC_REFSTRINGLIT(tmp362),tmp363);
      {
        const char* assert_cond = "(roo.radTem.dummyGlaSys.gas[1].MM >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/HeatTransfer/Data/Gases.mo",21,5,22,48,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta364));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/HeatTransfer/Data/Gases.mo",21,5,22,48,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta364));
        }
      }
      tmp365 = 1;
    }
  }
  threadData->lastEquationSolved = 2440;
}
OMC_DISABLE_OPT
void tmp_one_port_updateBoundParameters_1(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[467])(DATA*, threadData_t*) = {
    tmp_one_port_eqFunction_1551,
    tmp_one_port_eqFunction_1552,
    tmp_one_port_eqFunction_1553,
    tmp_one_port_eqFunction_1554,
    tmp_one_port_eqFunction_1555,
    tmp_one_port_eqFunction_1556,
    tmp_one_port_eqFunction_1557,
    tmp_one_port_eqFunction_1558,
    tmp_one_port_eqFunction_1559,
    tmp_one_port_eqFunction_1560,
    tmp_one_port_eqFunction_1562,
    tmp_one_port_eqFunction_1563,
    tmp_one_port_eqFunction_1564,
    tmp_one_port_eqFunction_1565,
    tmp_one_port_eqFunction_1566,
    tmp_one_port_eqFunction_1567,
    tmp_one_port_eqFunction_1573,
    tmp_one_port_eqFunction_1579,
    tmp_one_port_eqFunction_1580,
    tmp_one_port_eqFunction_1582,
    tmp_one_port_eqFunction_1584,
    tmp_one_port_eqFunction_1585,
    tmp_one_port_eqFunction_1587,
    tmp_one_port_eqFunction_1589,
    tmp_one_port_eqFunction_1590,
    tmp_one_port_eqFunction_1592,
    tmp_one_port_eqFunction_1594,
    tmp_one_port_eqFunction_1595,
    tmp_one_port_eqFunction_1597,
    tmp_one_port_eqFunction_1599,
    tmp_one_port_eqFunction_1600,
    tmp_one_port_eqFunction_1602,
    tmp_one_port_eqFunction_1604,
    tmp_one_port_eqFunction_1605,
    tmp_one_port_eqFunction_1607,
    tmp_one_port_eqFunction_1609,
    tmp_one_port_eqFunction_1612,
    tmp_one_port_eqFunction_1613,
    tmp_one_port_eqFunction_1617,
    tmp_one_port_eqFunction_1619,
    tmp_one_port_eqFunction_1620,
    tmp_one_port_eqFunction_1621,
    tmp_one_port_eqFunction_1622,
    tmp_one_port_eqFunction_1625,
    tmp_one_port_eqFunction_1628,
    tmp_one_port_eqFunction_1629,
    tmp_one_port_eqFunction_1630,
    tmp_one_port_eqFunction_1633,
    tmp_one_port_eqFunction_1634,
    tmp_one_port_eqFunction_1635,
    tmp_one_port_eqFunction_1636,
    tmp_one_port_eqFunction_1637,
    tmp_one_port_eqFunction_1638,
    tmp_one_port_eqFunction_1640,
    tmp_one_port_eqFunction_1641,
    tmp_one_port_eqFunction_1644,
    tmp_one_port_eqFunction_1645,
    tmp_one_port_eqFunction_1649,
    tmp_one_port_eqFunction_1651,
    tmp_one_port_eqFunction_1652,
    tmp_one_port_eqFunction_1653,
    tmp_one_port_eqFunction_1656,
    tmp_one_port_eqFunction_1659,
    tmp_one_port_eqFunction_1660,
    tmp_one_port_eqFunction_1661,
    tmp_one_port_eqFunction_1664,
    tmp_one_port_eqFunction_1665,
    tmp_one_port_eqFunction_1666,
    tmp_one_port_eqFunction_1667,
    tmp_one_port_eqFunction_1668,
    tmp_one_port_eqFunction_1669,
    tmp_one_port_eqFunction_1671,
    tmp_one_port_eqFunction_1675,
    tmp_one_port_eqFunction_1676,
    tmp_one_port_eqFunction_1677,
    tmp_one_port_eqFunction_1678,
    tmp_one_port_eqFunction_1679,
    tmp_one_port_eqFunction_1680,
    tmp_one_port_eqFunction_1681,
    tmp_one_port_eqFunction_1682,
    tmp_one_port_eqFunction_1683,
    tmp_one_port_eqFunction_1684,
    tmp_one_port_eqFunction_1685,
    tmp_one_port_eqFunction_1686,
    tmp_one_port_eqFunction_1687,
    tmp_one_port_eqFunction_1688,
    tmp_one_port_eqFunction_1689,
    tmp_one_port_eqFunction_1690,
    tmp_one_port_eqFunction_1691,
    tmp_one_port_eqFunction_1692,
    tmp_one_port_eqFunction_1693,
    tmp_one_port_eqFunction_1694,
    tmp_one_port_eqFunction_1695,
    tmp_one_port_eqFunction_1696,
    tmp_one_port_eqFunction_1697,
    tmp_one_port_eqFunction_1698,
    tmp_one_port_eqFunction_1699,
    tmp_one_port_eqFunction_1702,
    tmp_one_port_eqFunction_1703,
    tmp_one_port_eqFunction_1705,
    tmp_one_port_eqFunction_1707,
    tmp_one_port_eqFunction_1709,
    tmp_one_port_eqFunction_1711,
    tmp_one_port_eqFunction_1712,
    tmp_one_port_eqFunction_1713,
    tmp_one_port_eqFunction_1714,
    tmp_one_port_eqFunction_1715,
    tmp_one_port_eqFunction_1716,
    tmp_one_port_eqFunction_1719,
    tmp_one_port_eqFunction_1720,
    tmp_one_port_eqFunction_1724,
    tmp_one_port_eqFunction_1726,
    tmp_one_port_eqFunction_1727,
    tmp_one_port_eqFunction_1728,
    tmp_one_port_eqFunction_1729,
    tmp_one_port_eqFunction_1732,
    tmp_one_port_eqFunction_1735,
    tmp_one_port_eqFunction_1736,
    tmp_one_port_eqFunction_1737,
    tmp_one_port_eqFunction_1740,
    tmp_one_port_eqFunction_1741,
    tmp_one_port_eqFunction_1742,
    tmp_one_port_eqFunction_1743,
    tmp_one_port_eqFunction_1744,
    tmp_one_port_eqFunction_1745,
    tmp_one_port_eqFunction_1747,
    tmp_one_port_eqFunction_1748,
    tmp_one_port_eqFunction_1751,
    tmp_one_port_eqFunction_1752,
    tmp_one_port_eqFunction_1756,
    tmp_one_port_eqFunction_1758,
    tmp_one_port_eqFunction_1759,
    tmp_one_port_eqFunction_1760,
    tmp_one_port_eqFunction_1761,
    tmp_one_port_eqFunction_1764,
    tmp_one_port_eqFunction_1767,
    tmp_one_port_eqFunction_1768,
    tmp_one_port_eqFunction_1769,
    tmp_one_port_eqFunction_1772,
    tmp_one_port_eqFunction_1773,
    tmp_one_port_eqFunction_1774,
    tmp_one_port_eqFunction_1775,
    tmp_one_port_eqFunction_1776,
    tmp_one_port_eqFunction_1777,
    tmp_one_port_eqFunction_1779,
    tmp_one_port_eqFunction_1820,
    tmp_one_port_eqFunction_1821,
    tmp_one_port_eqFunction_1822,
    tmp_one_port_eqFunction_1823,
    tmp_one_port_eqFunction_1824,
    tmp_one_port_eqFunction_1825,
    tmp_one_port_eqFunction_1826,
    tmp_one_port_eqFunction_1828,
    tmp_one_port_eqFunction_1839,
    tmp_one_port_eqFunction_1843,
    tmp_one_port_eqFunction_1847,
    tmp_one_port_eqFunction_1851,
    tmp_one_port_eqFunction_1855,
    tmp_one_port_eqFunction_1859,
    tmp_one_port_eqFunction_1872,
    tmp_one_port_eqFunction_1874,
    tmp_one_port_eqFunction_1875,
    tmp_one_port_eqFunction_1876,
    tmp_one_port_eqFunction_1877,
    tmp_one_port_eqFunction_1878,
    tmp_one_port_eqFunction_1884,
    tmp_one_port_eqFunction_1888,
    tmp_one_port_eqFunction_1892,
    tmp_one_port_eqFunction_1896,
    tmp_one_port_eqFunction_1900,
    tmp_one_port_eqFunction_1904,
    tmp_one_port_eqFunction_1927,
    tmp_one_port_eqFunction_1928,
    tmp_one_port_eqFunction_1929,
    tmp_one_port_eqFunction_1930,
    tmp_one_port_eqFunction_1931,
    tmp_one_port_eqFunction_1936,
    tmp_one_port_eqFunction_1937,
    tmp_one_port_eqFunction_1938,
    tmp_one_port_eqFunction_1939,
    tmp_one_port_eqFunction_1940,
    tmp_one_port_eqFunction_1941,
    tmp_one_port_eqFunction_1942,
    tmp_one_port_eqFunction_1943,
    tmp_one_port_eqFunction_1944,
    tmp_one_port_eqFunction_1945,
    tmp_one_port_eqFunction_1946,
    tmp_one_port_eqFunction_1947,
    tmp_one_port_eqFunction_1948,
    tmp_one_port_eqFunction_1949,
    tmp_one_port_eqFunction_1950,
    tmp_one_port_eqFunction_1951,
    tmp_one_port_eqFunction_1952,
    tmp_one_port_eqFunction_1953,
    tmp_one_port_eqFunction_1954,
    tmp_one_port_eqFunction_1955,
    tmp_one_port_eqFunction_1956,
    tmp_one_port_eqFunction_1957,
    tmp_one_port_eqFunction_1958,
    tmp_one_port_eqFunction_1959,
    tmp_one_port_eqFunction_1967,
    tmp_one_port_eqFunction_1974,
    tmp_one_port_eqFunction_1976,
    tmp_one_port_eqFunction_1977,
    tmp_one_port_eqFunction_1980,
    tmp_one_port_eqFunction_1982,
    tmp_one_port_eqFunction_1983,
    tmp_one_port_eqFunction_1986,
    tmp_one_port_eqFunction_1988,
    tmp_one_port_eqFunction_1989,
    tmp_one_port_eqFunction_1992,
    tmp_one_port_eqFunction_1994,
    tmp_one_port_eqFunction_1995,
    tmp_one_port_eqFunction_1998,
    tmp_one_port_eqFunction_2000,
    tmp_one_port_eqFunction_2001,
    tmp_one_port_eqFunction_2004,
    tmp_one_port_eqFunction_2006,
    tmp_one_port_eqFunction_2007,
    tmp_one_port_eqFunction_2012,
    tmp_one_port_eqFunction_2013,
    tmp_one_port_eqFunction_2017,
    tmp_one_port_eqFunction_2019,
    tmp_one_port_eqFunction_2020,
    tmp_one_port_eqFunction_2021,
    tmp_one_port_eqFunction_2022,
    tmp_one_port_eqFunction_2023,
    tmp_one_port_eqFunction_2026,
    tmp_one_port_eqFunction_2029,
    tmp_one_port_eqFunction_2030,
    tmp_one_port_eqFunction_2031,
    tmp_one_port_eqFunction_2034,
    tmp_one_port_eqFunction_2035,
    tmp_one_port_eqFunction_2036,
    tmp_one_port_eqFunction_2037,
    tmp_one_port_eqFunction_2038,
    tmp_one_port_eqFunction_2039,
    tmp_one_port_eqFunction_2041,
    tmp_one_port_eqFunction_2045,
    tmp_one_port_eqFunction_2046,
    tmp_one_port_eqFunction_2050,
    tmp_one_port_eqFunction_2052,
    tmp_one_port_eqFunction_2053,
    tmp_one_port_eqFunction_2054,
    tmp_one_port_eqFunction_2055,
    tmp_one_port_eqFunction_2056,
    tmp_one_port_eqFunction_2059,
    tmp_one_port_eqFunction_2062,
    tmp_one_port_eqFunction_2063,
    tmp_one_port_eqFunction_2064,
    tmp_one_port_eqFunction_2067,
    tmp_one_port_eqFunction_2068,
    tmp_one_port_eqFunction_2069,
    tmp_one_port_eqFunction_2070,
    tmp_one_port_eqFunction_2071,
    tmp_one_port_eqFunction_2072,
    tmp_one_port_eqFunction_2074,
    tmp_one_port_eqFunction_2078,
    tmp_one_port_eqFunction_2079,
    tmp_one_port_eqFunction_2080,
    tmp_one_port_eqFunction_2081,
    tmp_one_port_eqFunction_2082,
    tmp_one_port_eqFunction_2083,
    tmp_one_port_eqFunction_2084,
    tmp_one_port_eqFunction_2085,
    tmp_one_port_eqFunction_2086,
    tmp_one_port_eqFunction_2087,
    tmp_one_port_eqFunction_2088,
    tmp_one_port_eqFunction_2089,
    tmp_one_port_eqFunction_2090,
    tmp_one_port_eqFunction_2091,
    tmp_one_port_eqFunction_2092,
    tmp_one_port_eqFunction_2093,
    tmp_one_port_eqFunction_2094,
    tmp_one_port_eqFunction_2095,
    tmp_one_port_eqFunction_2096,
    tmp_one_port_eqFunction_2097,
    tmp_one_port_eqFunction_2098,
    tmp_one_port_eqFunction_2099,
    tmp_one_port_eqFunction_2100,
    tmp_one_port_eqFunction_2101,
    tmp_one_port_eqFunction_2102,
    tmp_one_port_eqFunction_2103,
    tmp_one_port_eqFunction_2104,
    tmp_one_port_eqFunction_2105,
    tmp_one_port_eqFunction_2108,
    tmp_one_port_eqFunction_2109,
    tmp_one_port_eqFunction_2111,
    tmp_one_port_eqFunction_2113,
    tmp_one_port_eqFunction_2115,
    tmp_one_port_eqFunction_2117,
    tmp_one_port_eqFunction_2118,
    tmp_one_port_eqFunction_2119,
    tmp_one_port_eqFunction_2120,
    tmp_one_port_eqFunction_2121,
    tmp_one_port_eqFunction_2125,
    tmp_one_port_eqFunction_2126,
    tmp_one_port_eqFunction_2130,
    tmp_one_port_eqFunction_2132,
    tmp_one_port_eqFunction_2133,
    tmp_one_port_eqFunction_2134,
    tmp_one_port_eqFunction_2135,
    tmp_one_port_eqFunction_2136,
    tmp_one_port_eqFunction_2139,
    tmp_one_port_eqFunction_2142,
    tmp_one_port_eqFunction_2143,
    tmp_one_port_eqFunction_2144,
    tmp_one_port_eqFunction_2147,
    tmp_one_port_eqFunction_2148,
    tmp_one_port_eqFunction_2149,
    tmp_one_port_eqFunction_2150,
    tmp_one_port_eqFunction_2151,
    tmp_one_port_eqFunction_2152,
    tmp_one_port_eqFunction_2154,
    tmp_one_port_eqFunction_2158,
    tmp_one_port_eqFunction_2159,
    tmp_one_port_eqFunction_2163,
    tmp_one_port_eqFunction_2165,
    tmp_one_port_eqFunction_2166,
    tmp_one_port_eqFunction_2167,
    tmp_one_port_eqFunction_2168,
    tmp_one_port_eqFunction_2169,
    tmp_one_port_eqFunction_2172,
    tmp_one_port_eqFunction_2175,
    tmp_one_port_eqFunction_2176,
    tmp_one_port_eqFunction_2177,
    tmp_one_port_eqFunction_2180,
    tmp_one_port_eqFunction_2181,
    tmp_one_port_eqFunction_2182,
    tmp_one_port_eqFunction_2183,
    tmp_one_port_eqFunction_2184,
    tmp_one_port_eqFunction_2185,
    tmp_one_port_eqFunction_2187,
    tmp_one_port_eqFunction_2204,
    tmp_one_port_eqFunction_281,
    tmp_one_port_eqFunction_280,
    tmp_one_port_eqFunction_279,
    tmp_one_port_eqFunction_278,
    tmp_one_port_eqFunction_277,
    tmp_one_port_eqFunction_276,
    tmp_one_port_eqFunction_275,
    tmp_one_port_eqFunction_274,
    tmp_one_port_eqFunction_273,
    tmp_one_port_eqFunction_272,
    tmp_one_port_eqFunction_271,
    tmp_one_port_eqFunction_270,
    tmp_one_port_eqFunction_269,
    tmp_one_port_eqFunction_268,
    tmp_one_port_eqFunction_267,
    tmp_one_port_eqFunction_266,
    tmp_one_port_eqFunction_265,
    tmp_one_port_eqFunction_264,
    tmp_one_port_eqFunction_263,
    tmp_one_port_eqFunction_262,
    tmp_one_port_eqFunction_261,
    tmp_one_port_eqFunction_260,
    tmp_one_port_eqFunction_259,
    tmp_one_port_eqFunction_48,
    tmp_one_port_eqFunction_258,
    tmp_one_port_eqFunction_46,
    tmp_one_port_eqFunction_41,
    tmp_one_port_eqFunction_254,
    tmp_one_port_eqFunction_47,
    tmp_one_port_eqFunction_42,
    tmp_one_port_eqFunction_40,
    tmp_one_port_eqFunction_39,
    tmp_one_port_eqFunction_38,
    tmp_one_port_eqFunction_37,
    tmp_one_port_eqFunction_36,
    tmp_one_port_eqFunction_35,
    tmp_one_port_eqFunction_34,
    tmp_one_port_eqFunction_33,
    tmp_one_port_eqFunction_32,
    tmp_one_port_eqFunction_31,
    tmp_one_port_eqFunction_30,
    tmp_one_port_eqFunction_29,
    tmp_one_port_eqFunction_28,
    tmp_one_port_eqFunction_27,
    tmp_one_port_eqFunction_26,
    tmp_one_port_eqFunction_25,
    tmp_one_port_eqFunction_24,
    tmp_one_port_eqFunction_23,
    tmp_one_port_eqFunction_22,
    tmp_one_port_eqFunction_21,
    tmp_one_port_eqFunction_20,
    tmp_one_port_eqFunction_19,
    tmp_one_port_eqFunction_18,
    tmp_one_port_eqFunction_17,
    tmp_one_port_eqFunction_16,
    tmp_one_port_eqFunction_15,
    tmp_one_port_eqFunction_14,
    tmp_one_port_eqFunction_13,
    tmp_one_port_eqFunction_12,
    tmp_one_port_eqFunction_11,
    tmp_one_port_eqFunction_10,
    tmp_one_port_eqFunction_9,
    tmp_one_port_eqFunction_8,
    tmp_one_port_eqFunction_7,
    tmp_one_port_eqFunction_6,
    tmp_one_port_eqFunction_5,
    tmp_one_port_eqFunction_4,
    tmp_one_port_eqFunction_3,
    tmp_one_port_eqFunction_2,
    tmp_one_port_eqFunction_1,
    tmp_one_port_eqFunction_2378,
    tmp_one_port_eqFunction_2379,
    tmp_one_port_eqFunction_2380,
    tmp_one_port_eqFunction_2381,
    tmp_one_port_eqFunction_2382,
    tmp_one_port_eqFunction_2383,
    tmp_one_port_eqFunction_2384,
    tmp_one_port_eqFunction_2385,
    tmp_one_port_eqFunction_2386,
    tmp_one_port_eqFunction_2387,
    tmp_one_port_eqFunction_2388,
    tmp_one_port_eqFunction_2389,
    tmp_one_port_eqFunction_2390,
    tmp_one_port_eqFunction_2391,
    tmp_one_port_eqFunction_2392,
    tmp_one_port_eqFunction_2393,
    tmp_one_port_eqFunction_2394,
    tmp_one_port_eqFunction_2395,
    tmp_one_port_eqFunction_2396,
    tmp_one_port_eqFunction_2397,
    tmp_one_port_eqFunction_2398,
    tmp_one_port_eqFunction_2399,
    tmp_one_port_eqFunction_2400,
    tmp_one_port_eqFunction_2401,
    tmp_one_port_eqFunction_2402,
    tmp_one_port_eqFunction_2403,
    tmp_one_port_eqFunction_2404,
    tmp_one_port_eqFunction_2405,
    tmp_one_port_eqFunction_2406,
    tmp_one_port_eqFunction_2407,
    tmp_one_port_eqFunction_2408,
    tmp_one_port_eqFunction_2409,
    tmp_one_port_eqFunction_2410,
    tmp_one_port_eqFunction_2411,
    tmp_one_port_eqFunction_2412,
    tmp_one_port_eqFunction_2413,
    tmp_one_port_eqFunction_2414,
    tmp_one_port_eqFunction_2415,
    tmp_one_port_eqFunction_2416,
    tmp_one_port_eqFunction_2417,
    tmp_one_port_eqFunction_2418,
    tmp_one_port_eqFunction_2419,
    tmp_one_port_eqFunction_2420,
    tmp_one_port_eqFunction_2421,
    tmp_one_port_eqFunction_2422,
    tmp_one_port_eqFunction_2423,
    tmp_one_port_eqFunction_2424,
    tmp_one_port_eqFunction_2425,
    tmp_one_port_eqFunction_2426,
    tmp_one_port_eqFunction_2427,
    tmp_one_port_eqFunction_2428,
    tmp_one_port_eqFunction_2429,
    tmp_one_port_eqFunction_2430,
    tmp_one_port_eqFunction_2431,
    tmp_one_port_eqFunction_2432,
    tmp_one_port_eqFunction_2433,
    tmp_one_port_eqFunction_2434,
    tmp_one_port_eqFunction_2435,
    tmp_one_port_eqFunction_2436,
    tmp_one_port_eqFunction_2437,
    tmp_one_port_eqFunction_2438,
    tmp_one_port_eqFunction_2439,
    tmp_one_port_eqFunction_2440
  };
  
  for (int id = 0; id < 467; id++) {
    eqFunctions[id](data, threadData);
  }
}
#if defined(__cplusplus)
}
#endif