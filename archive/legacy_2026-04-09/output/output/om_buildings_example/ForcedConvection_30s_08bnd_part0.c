#include "ForcedConvection_30s_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 746
type: SIMPLE_ASSIGN
weaDat.lat = Buildings.BoundaryConditions.WeatherData.BaseClasses.getLatitudeTMY3(weaDat.filNam)
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_746(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,746};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1309]] /* weaDat.lat PARAM */) = omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLatitudeTMY3(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[85]] /* weaDat.filNam PARAM */));
  threadData->lastEquationSolved = 746;
}

/*
equation index: 747
type: SIMPLE_ASSIGN
weaDat.latitude.latitude = weaDat.lat
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_747(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,747};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1310]] /* weaDat.latitude.latitude PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1309]] /* weaDat.lat PARAM */);
  threadData->lastEquationSolved = 747;
}

/*
equation index: 748
type: SIMPLE_ASSIGN
$cse5 = cos(weaDat.latitude.latitude)
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_748(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,748};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[0]] /* $cse5 PARAM */) = cos((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1310]] /* weaDat.latitude.latitude PARAM */));
  threadData->lastEquationSolved = 748;
}

/*
equation index: 749
type: SIMPLE_ASSIGN
$cse8 = sin(weaDat.latitude.latitude)
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_749(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,749};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1]] /* $cse8 PARAM */) = sin((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1310]] /* weaDat.latitude.latitude PARAM */));
  threadData->lastEquationSolved = 749;
}

/*
equation index: 750
type: SIMPLE_ASSIGN
roo.air.cfd.CFDThre = Buildings.ThermalZones.Detailed.BaseClasses.CFDThread.constructor()
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_750(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,750};
  (data->simulationInfo->extObjs[0]) = omc_Buildings_ThermalZones_Detailed_BaseClasses_CFDThread_constructor(threadData);
  threadData->lastEquationSolved = 750;
}

/*
equation index: 751
type: SIMPLE_ASSIGN
weaDat.datRea.fileName = weaDat.filNam
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_751(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,751};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[81]] /* weaDat.datRea.fileName PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[85]] /* weaDat.filNam PARAM */);
  threadData->lastEquationSolved = 751;
}

/*
equation index: 753
type: SIMPLE_ASSIGN
weaDat.datRea.tableID = Modelica.Blocks.Types.ExternalCombiTable1D.constructor("tab1", if weaDat.datRea.fileName <> "NoName" and not Modelica.Utilities.Strings.isEmpty(weaDat.datRea.fileName) then weaDat.datRea.fileName else "NoName", {}, {2, 3, 4, 5, 6, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 8}, Modelica.Blocks.Types.Smoothness.ContinuousDerivative, Modelica.Blocks.Types.Extrapolation.LastTwoPoints, weaDat.datRea.verboseRead)
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_753(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,753};
  (data->simulationInfo->extObjs[1]) = omc_Modelica_Blocks_Types_ExternalCombiTable1D_constructor(threadData, _OMC_LIT73, (((!stringEqual((data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[81]] /* weaDat.datRea.fileName PARAM */), _OMC_LIT74)) && (!omc_Modelica_Utilities_Strings_isEmpty(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[81]] /* weaDat.datRea.fileName PARAM */))))?(data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[81]] /* weaDat.datRea.fileName PARAM */):_OMC_LIT74), _OMC_LIT75, _OMC_LIT76, 2, 2, (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[284]] /* weaDat.datRea.verboseRead PARAM */));
  threadData->lastEquationSolved = 753;
}

/*
equation index: 754
type: SIMPLE_ASSIGN
weaDat.datRea30Min.fileName = weaDat.filNam
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_754(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,754};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[83]] /* weaDat.datRea30Min.fileName PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[85]] /* weaDat.filNam PARAM */);
  threadData->lastEquationSolved = 754;
}

/*
equation index: 756
type: SIMPLE_ASSIGN
weaDat.datRea30Min.tableID = Modelica.Blocks.Types.ExternalCombiTable1D.constructor("tab1", if weaDat.datRea30Min.fileName <> "NoName" and not Modelica.Utilities.Strings.isEmpty(weaDat.datRea30Min.fileName) then weaDat.datRea30Min.fileName else "NoName", {}, {9, 10, 11}, Modelica.Blocks.Types.Smoothness.ContinuousDerivative, Modelica.Blocks.Types.Extrapolation.LastTwoPoints, weaDat.datRea30Min.verboseRead)
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_756(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,756};
  (data->simulationInfo->extObjs[2]) = omc_Modelica_Blocks_Types_ExternalCombiTable1D_constructor(threadData, _OMC_LIT73, (((!stringEqual((data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[83]] /* weaDat.datRea30Min.fileName PARAM */), _OMC_LIT74)) && (!omc_Modelica_Utilities_Strings_isEmpty(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[83]] /* weaDat.datRea30Min.fileName PARAM */))))?(data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[83]] /* weaDat.datRea30Min.fileName PARAM */):_OMC_LIT74), _OMC_LIT75, _OMC_LIT77, 2, 2, (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[287]] /* weaDat.datRea30Min.verboseRead PARAM */));
  threadData->lastEquationSolved = 756;
}

/*
equation index: 779
type: SIMPLE_ASSIGN
weaDat.alt = Buildings.BoundaryConditions.WeatherData.BaseClasses.getAltitudeLocationTMY3(weaDat.filNam)
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_779(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,779};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1284]] /* weaDat.alt PARAM */) = omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getAltitudeLocationTMY3(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[85]] /* weaDat.filNam PARAM */));
  threadData->lastEquationSolved = 779;
}

/*
equation index: 780
type: SIMPLE_ASSIGN
weaDat.altitude.Altitude = weaDat.alt
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_780(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,780};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1285]] /* weaDat.altitude.Altitude PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1284]] /* weaDat.alt PARAM */);
  threadData->lastEquationSolved = 780;
}

/*
equation index: 781
type: SIMPLE_ASSIGN
weaDat.lon = Buildings.BoundaryConditions.WeatherData.BaseClasses.getLongitudeTMY3(weaDat.filNam)
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_781(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,781};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1314]] /* weaDat.lon PARAM */) = omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLongitudeTMY3(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[85]] /* weaDat.filNam PARAM */));
  threadData->lastEquationSolved = 781;
}

/*
equation index: 782
type: SIMPLE_ASSIGN
weaDat.longitude.longitude = weaDat.lon
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_782(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,782};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1315]] /* weaDat.longitude.longitude PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1314]] /* weaDat.lon PARAM */);
  threadData->lastEquationSolved = 782;
}

/*
equation index: 783
type: SIMPLE_ASSIGN
weaDat.datRea30Min.u_max = Modelica.Blocks.Tables.Internal.getTable1DAbscissaUmax(weaDat.datRea30Min.tableID)
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_783(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,783};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1306]] /* weaDat.datRea30Min.u_max PARAM */) = omc_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmax(threadData, (data->simulationInfo->extObjs[2]));
  threadData->lastEquationSolved = 783;
}

/*
equation index: 784
type: SIMPLE_ASSIGN
weaDat.datRea30Min.u_min = Modelica.Blocks.Tables.Internal.getTable1DAbscissaUmin(weaDat.datRea30Min.tableID)
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_784(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,784};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1307]] /* weaDat.datRea30Min.u_min PARAM */) = omc_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmin(threadData, (data->simulationInfo->extObjs[2]));
  threadData->lastEquationSolved = 784;
}

/*
equation index: 791
type: SIMPLE_ASSIGN
weaDat.datRea30Min.tableName = "tab1"
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_791(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,791};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[84]] /* weaDat.datRea30Min.tableName PARAM */) = _OMC_LIT73;
  threadData->lastEquationSolved = 791;
}

/*
equation index: 794
type: SIMPLE_ASSIGN
weaDat.timZon = Buildings.BoundaryConditions.WeatherData.BaseClasses.getTimeZoneTMY3(weaDat.filNam)
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_794(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,794};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1322]] /* weaDat.timZon PARAM */) = omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getTimeZoneTMY3(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[85]] /* weaDat.filNam PARAM */));
  threadData->lastEquationSolved = 794;
}

/*
equation index: 795
type: SIMPLE_ASSIGN
weaDat.locTim.timZon = weaDat.timZon
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_795(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,795};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1313]] /* weaDat.locTim.timZon PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1322]] /* weaDat.timZon PARAM */);
  threadData->lastEquationSolved = 795;
}

/*
equation index: 796
type: SIMPLE_ASSIGN
weaDat.locTim.lon = weaDat.lon
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_796(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,796};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1312]] /* weaDat.locTim.lon PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1314]] /* weaDat.lon PARAM */);
  threadData->lastEquationSolved = 796;
}

/*
equation index: 797
type: SIMPLE_ASSIGN
weaDat.locTim.diff = 13750.987083139758 * weaDat.locTim.lon - weaDat.locTim.timZon
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_797(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,797};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1311]] /* weaDat.locTim.diff PARAM */) = (13750.987083139758) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1312]] /* weaDat.locTim.lon PARAM */)) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1313]] /* weaDat.locTim.timZon PARAM */);
  threadData->lastEquationSolved = 797;
}

/*
equation index: 808
type: SIMPLE_ASSIGN
weaDat.horInfRadSel.p = weaDat.HInfHor
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_808(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,808};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1308]] /* weaDat.horInfRadSel.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1275]] /* weaDat.HInfHor PARAM */);
  threadData->lastEquationSolved = 808;
}

/*
equation index: 810
type: SIMPLE_ASSIGN
weaDat.winDirSel.p = weaDat.winDir
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_810(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,810};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1328]] /* weaDat.winDirSel.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1327]] /* weaDat.winDir PARAM */);
  threadData->lastEquationSolved = 810;
}

/*
equation index: 812
type: SIMPLE_ASSIGN
weaDat.winSpeSel.p = weaDat.winSpe
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_812(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,812};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1330]] /* weaDat.winSpeSel.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1329]] /* weaDat.winSpe PARAM */);
  threadData->lastEquationSolved = 812;
}

/*
equation index: 814
type: SIMPLE_ASSIGN
weaDat.totSkyCovSel.p = weaDat.totSkyCov
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_814(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,814};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1326]] /* weaDat.totSkyCovSel.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1325]] /* weaDat.totSkyCov PARAM */);
  threadData->lastEquationSolved = 814;
}

/*
equation index: 816
type: SIMPLE_ASSIGN
weaDat.ceiHeiSel.p = weaDat.ceiHei
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_816(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,816};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1287]] /* weaDat.ceiHeiSel.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1286]] /* weaDat.ceiHei PARAM */);
  threadData->lastEquationSolved = 816;
}

/*
equation index: 818
type: SIMPLE_ASSIGN
weaDat.opaSkyCovSel.p = weaDat.opaSkyCov
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_818(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,818};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1317]] /* weaDat.opaSkyCovSel.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1316]] /* weaDat.opaSkyCov PARAM */);
  threadData->lastEquationSolved = 818;
}

/*
equation index: 820
type: SIMPLE_ASSIGN
weaDat.relHumSel.p = weaDat.relHum
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_820(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,820};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1321]] /* weaDat.relHumSel.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1320]] /* weaDat.relHum PARAM */);
  threadData->lastEquationSolved = 820;
}

/*
equation index: 822
type: SIMPLE_ASSIGN
weaDat.TBlaSkySel.p = weaDat.TBlaSky
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_822(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,822};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1277]] /* weaDat.TBlaSkySel.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1276]] /* weaDat.TBlaSky PARAM */);
  threadData->lastEquationSolved = 822;
}

/*
equation index: 824
type: SIMPLE_ASSIGN
weaDat.TDryBulSel.p = weaDat.TDryBul
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_824(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,824};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1281]] /* weaDat.TDryBulSel.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1280]] /* weaDat.TDryBul PARAM */);
  threadData->lastEquationSolved = 824;
}

/*
equation index: 826
type: SIMPLE_ASSIGN
weaDat.TDewPoiSel.p = weaDat.TDewPoi
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_826(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,826};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1279]] /* weaDat.TDewPoiSel.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1278]] /* weaDat.TDewPoi PARAM */);
  threadData->lastEquationSolved = 826;
}

/*
equation index: 828
type: SIMPLE_ASSIGN
weaDat.pAtmSel.p = weaDat.pAtm
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_828(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,828};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1319]] /* weaDat.pAtmSel.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1318]] /* weaDat.pAtm PARAM */);
  threadData->lastEquationSolved = 828;
}

/*
equation index: 830
type: SIMPLE_ASSIGN
weaDat.datRea.u_max = Modelica.Blocks.Tables.Internal.getTable1DAbscissaUmax(weaDat.datRea.tableID)
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_830(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,830};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1304]] /* weaDat.datRea.u_max PARAM */) = omc_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmax(threadData, (data->simulationInfo->extObjs[1]));
  threadData->lastEquationSolved = 830;
}

/*
equation index: 831
type: SIMPLE_ASSIGN
weaDat.datRea.u_min = Modelica.Blocks.Tables.Internal.getTable1DAbscissaUmin(weaDat.datRea.tableID)
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_831(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,831};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1305]] /* weaDat.datRea.u_min PARAM */) = omc_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmin(threadData, (data->simulationInfo->extObjs[1]));
  threadData->lastEquationSolved = 831;
}

/*
equation index: 861
type: SIMPLE_ASSIGN
weaDat.datRea.tableName = "tab1"
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_861(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,861};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[82]] /* weaDat.datRea.tableName PARAM */) = _OMC_LIT73;
  threadData->lastEquationSolved = 861;
}

/*
equation index: 864
type: ARRAY_CALL_ASSIGN

weaDat.timeSpan = Buildings.BoundaryConditions.WeatherData.BaseClasses.getTimeSpanTMY3(weaDat.filNam, "tab1")
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_864(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,864};
  real_array tmp0;
  real_array_create(&tmp0, ((modelica_real*)&((&(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1323]] /* weaDat.timeSpan[1] PARAM */))[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  real_array_copy_data(omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getTimeSpanTMY3(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[85]] /* weaDat.filNam PARAM */), _OMC_LIT73), tmp0);
  threadData->lastEquationSolved = 864;
}

/*
equation index: 884
type: SIMPLE_ASSIGN
roo.absCfdFilNam = Buildings.BoundaryConditions.WeatherData.BaseClasses.getAbsolutePath(roo.cfdFilNam)
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_884(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,884};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[0]] /* roo.absCfdFilNam PARAM */) = omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getAbsolutePath(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[33]] /* roo.cfdFilNam PARAM */));
  threadData->lastEquationSolved = 884;
}

/*
equation index: 885
type: SIMPLE_ASSIGN
roo.sensorName[2] = "Velocity"
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_885(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,885};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[74]] /* roo.sensorName[2] PARAM */) = _OMC_LIT78;
  threadData->lastEquationSolved = 885;
}

/*
equation index: 886
type: SIMPLE_ASSIGN
roo.sensorName[1] = "Occupied zone air temperature"
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_886(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,886};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[73]] /* roo.sensorName[1] PARAM */) = _OMC_LIT79;
  threadData->lastEquationSolved = 886;
}

/*
equation index: 891
type: SIMPLE_ASSIGN
roo.heaGai.AFlo = roo.AFlo
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_891(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,891};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[478]] /* roo.heaGai.AFlo PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[19]] /* roo.AFlo PARAM */);
  threadData->lastEquationSolved = 891;
}

/*
equation index: 907
type: SIMPLE_ASSIGN
roo.tauIRSha_glass[1] = roo.datConExtWin[1].glaSys.shade.tauIR_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_907(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,907};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1274]] /* roo.tauIRSha_glass[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[381]] /* roo.datConExtWin[1].glaSys.shade.tauIR_b PARAM */);
  threadData->lastEquationSolved = 907;
}

/*
equation index: 908
type: SIMPLE_ASSIGN
roo.tauIRSha_air[1] = roo.datConExtWin[1].glaSys.shade.tauIR_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_908(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,908};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1273]] /* roo.tauIRSha_air[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[380]] /* roo.datConExtWin[1].glaSys.shade.tauIR_a PARAM */);
  threadData->lastEquationSolved = 908;
}

/*
equation index: 910
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.shade.absIR_a = roo.datConExtWin[1].glaSys.shade.absIR_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_910(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,910};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1093]] /* roo.radTem.datConExtWin[1].glaSys.shade.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[376]] /* roo.datConExtWin[1].glaSys.shade.absIR_a PARAM */);
  threadData->lastEquationSolved = 910;
}

/*
equation index: 911
type: SIMPLE_ASSIGN
roo.radTem.epsSha[1] = roo.radTem.datConExtWin[1].glaSys.shade.absIR_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_911(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,911};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1215]] /* roo.radTem.epsSha[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1093]] /* roo.radTem.datConExtWin[1].glaSys.shade.absIR_a PARAM */);
  threadData->lastEquationSolved = 911;
}

/*
equation index: 912
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.glass[1].absIR_b = roo.datConExtWin[1].glaSys.glass[1].absIR_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_912(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,912};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1086]] /* roo.radTem.datConExtWin[1].glaSys.glass[1].absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[369]] /* roo.datConExtWin[1].glaSys.glass[1].absIR_b PARAM */);
  threadData->lastEquationSolved = 912;
}

/*
equation index: 913
type: SIMPLE_ASSIGN
roo.radTem.epsGla[1] = roo.radTem.datConExtWin[1].glaSys.glass[1].absIR_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_913(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,913};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1214]] /* roo.radTem.epsGla[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1086]] /* roo.radTem.datConExtWin[1].glaSys.glass[1].absIR_b PARAM */);
  threadData->lastEquationSolved = 913;
}

/*
equation index: 914
type: SIMPLE_ASSIGN
roo.datConExtWin[1].AWin = roo.datConExtWin[1].hWin * roo.datConExtWin[1].wWin
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_914(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,914};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[351]] /* roo.datConExtWin[1].AWin PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[384]] /* roo.datConExtWin[1].hWin PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[409]] /* roo.datConExtWin[1].wWin PARAM */));
  threadData->lastEquationSolved = 914;
}

/*
equation index: 915
type: SIMPLE_ASSIGN
roo.datConExtWin[1].AFra = roo.datConExtWin[1].fFra * roo.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_915(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,915};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[348]] /* roo.datConExtWin[1].AFra PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[355]] /* roo.datConExtWin[1].fFra PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[351]] /* roo.datConExtWin[1].AWin PARAM */));
  threadData->lastEquationSolved = 915;
}

/*
equation index: 916
type: SIMPLE_ASSIGN
roo.datConExtWin[1].AGla = roo.datConExtWin[1].AWin - roo.datConExtWin[1].AFra
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_916(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,916};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[349]] /* roo.datConExtWin[1].AGla PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[351]] /* roo.datConExtWin[1].AWin PARAM */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[348]] /* roo.datConExtWin[1].AFra PARAM */);
  threadData->lastEquationSolved = 916;
}

/*
equation index: 917
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].AGla = roo.datConExtWin[1].AGla
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_917(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,917};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1066]] /* roo.radTem.datConExtWin[1].AGla PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[349]] /* roo.datConExtWin[1].AGla PARAM */);
  threadData->lastEquationSolved = 917;
}

/*
equation index: 918
type: SIMPLE_ASSIGN
roo.radTem.AGla[1] = roo.radTem.datConExtWin[1].AGla
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_918(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,918};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1015]] /* roo.radTem.AGla[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1066]] /* roo.radTem.datConExtWin[1].AGla PARAM */);
  threadData->lastEquationSolved = 918;
}

/*
equation index: 923
type: SIMPLE_ASSIGN
roo.radTem.surBou[6].absIR = roo.surBou[6].absIR
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_923(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,923};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1234]] /* roo.radTem.surBou[6].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1260]] /* roo.surBou[6].absIR PARAM */);
  threadData->lastEquationSolved = 923;
}

/*
equation index: 924
type: SIMPLE_ASSIGN
roo.radTem.epsSurBou[6] = roo.radTem.surBou[6].absIR
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_924(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,924};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1221]] /* roo.radTem.epsSurBou[6] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1234]] /* roo.radTem.surBou[6].absIR PARAM */);
  threadData->lastEquationSolved = 924;
}

/*
equation index: 925
type: SIMPLE_ASSIGN
roo.radTem.surBou[5].absIR = roo.surBou[5].absIR
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_925(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,925};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1233]] /* roo.radTem.surBou[5].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1259]] /* roo.surBou[5].absIR PARAM */);
  threadData->lastEquationSolved = 925;
}

/*
equation index: 926
type: SIMPLE_ASSIGN
roo.radTem.epsSurBou[5] = roo.radTem.surBou[5].absIR
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_926(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,926};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1220]] /* roo.radTem.epsSurBou[5] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1233]] /* roo.radTem.surBou[5].absIR PARAM */);
  threadData->lastEquationSolved = 926;
}

/*
equation index: 927
type: SIMPLE_ASSIGN
roo.radTem.surBou[4].absIR = roo.surBou[4].absIR
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_927(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,927};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1232]] /* roo.radTem.surBou[4].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1258]] /* roo.surBou[4].absIR PARAM */);
  threadData->lastEquationSolved = 927;
}

/*
equation index: 928
type: SIMPLE_ASSIGN
roo.radTem.epsSurBou[4] = roo.radTem.surBou[4].absIR
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_928(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,928};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1219]] /* roo.radTem.epsSurBou[4] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1232]] /* roo.radTem.surBou[4].absIR PARAM */);
  threadData->lastEquationSolved = 928;
}

/*
equation index: 929
type: SIMPLE_ASSIGN
roo.radTem.surBou[3].absIR = roo.surBou[3].absIR
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_929(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,929};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1231]] /* roo.radTem.surBou[3].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1257]] /* roo.surBou[3].absIR PARAM */);
  threadData->lastEquationSolved = 929;
}

/*
equation index: 930
type: SIMPLE_ASSIGN
roo.radTem.epsSurBou[3] = roo.radTem.surBou[3].absIR
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_930(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,930};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1218]] /* roo.radTem.epsSurBou[3] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1231]] /* roo.radTem.surBou[3].absIR PARAM */);
  threadData->lastEquationSolved = 930;
}

/*
equation index: 931
type: SIMPLE_ASSIGN
roo.radTem.surBou[2].absIR = roo.surBou[2].absIR
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_931(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,931};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1230]] /* roo.radTem.surBou[2].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1256]] /* roo.surBou[2].absIR PARAM */);
  threadData->lastEquationSolved = 931;
}

/*
equation index: 932
type: SIMPLE_ASSIGN
roo.radTem.epsSurBou[2] = roo.radTem.surBou[2].absIR
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_932(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,932};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1217]] /* roo.radTem.epsSurBou[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1230]] /* roo.radTem.surBou[2].absIR PARAM */);
  threadData->lastEquationSolved = 932;
}

/*
equation index: 933
type: SIMPLE_ASSIGN
roo.radTem.surBou[1].absIR = roo.surBou[1].absIR
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_933(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,933};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1229]] /* roo.radTem.surBou[1].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1255]] /* roo.surBou[1].absIR PARAM */);
  threadData->lastEquationSolved = 933;
}

/*
equation index: 934
type: SIMPLE_ASSIGN
roo.radTem.epsSurBou[1] = roo.radTem.surBou[1].absIR
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_934(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,934};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1216]] /* roo.radTem.epsSurBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1229]] /* roo.radTem.surBou[1].absIR PARAM */);
  threadData->lastEquationSolved = 934;
}

/*
equation index: 935
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].layers.absIR_b = roo.datConBou[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_935(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,935};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1028]] /* roo.radTem.datConBou[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[311]] /* roo.datConBou[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 935;
}

/*
equation index: 936
type: SIMPLE_ASSIGN
roo.radTem.epsConBou[1] = roo.radTem.datConBou[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_936(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,936};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1206]] /* roo.radTem.epsConBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1028]] /* roo.radTem.datConBou[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 936;
}

/*
equation index: 937
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].layers.absIR_b = roo.datConPar[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_937(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,937};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1133]] /* roo.radTem.datConPar[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[416]] /* roo.datConPar[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 937;
}

/*
equation index: 938
type: SIMPLE_ASSIGN
roo.radTem.epsConPar_b[1] = roo.radTem.datConPar[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_938(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,938};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1213]] /* roo.radTem.epsConPar_b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1133]] /* roo.radTem.datConPar[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 938;
}

/*
equation index: 939
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].layers.absIR_a = roo.datConPar[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_939(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,939};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1132]] /* roo.radTem.datConPar[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[415]] /* roo.datConPar[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 939;
}

/*
equation index: 940
type: SIMPLE_ASSIGN
roo.radTem.epsConPar_a[1] = roo.radTem.datConPar[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_940(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,940};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1212]] /* roo.radTem.epsConPar_a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1132]] /* roo.radTem.datConPar[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 940;
}

/*
equation index: 941
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.absIRFra = roo.datConExtWin[1].glaSys.absIRFra
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_941(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,941};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1074]] /* roo.radTem.datConExtWin[1].glaSys.absIRFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[357]] /* roo.datConExtWin[1].glaSys.absIRFra PARAM */);
  threadData->lastEquationSolved = 941;
}

/*
equation index: 942
type: SIMPLE_ASSIGN
roo.radTem.epsConExtWinFra[1] = roo.radTem.datConExtWin[1].glaSys.absIRFra
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_942(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,942};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1208]] /* roo.radTem.epsConExtWinFra[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1074]] /* roo.radTem.datConExtWin[1].glaSys.absIRFra PARAM */);
  threadData->lastEquationSolved = 942;
}

/*
equation index: 943
type: SIMPLE_ASSIGN
roo.radTem.epsConExtWinSha[1] = roo.radTem.datConExtWin[1].glaSys.shade.absIR_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_943(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,943};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1210]] /* roo.radTem.epsConExtWinSha[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1093]] /* roo.radTem.datConExtWin[1].glaSys.shade.absIR_a PARAM */);
  threadData->lastEquationSolved = 943;
}

/*
equation index: 944
type: SIMPLE_ASSIGN
roo.radTem.epsConExtWinUns[1] = roo.radTem.datConExtWin[1].glaSys.glass[1].absIR_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_944(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,944};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1211]] /* roo.radTem.epsConExtWinUns[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1086]] /* roo.radTem.datConExtWin[1].glaSys.glass[1].absIR_b PARAM */);
  threadData->lastEquationSolved = 944;
}

/*
equation index: 945
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].layers.absIR_b = roo.datConExtWin[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_945(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,945};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1104]] /* roo.radTem.datConExtWin[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[387]] /* roo.datConExtWin[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 945;
}

/*
equation index: 946
type: SIMPLE_ASSIGN
roo.radTem.epsConExtWinOpa[1] = roo.radTem.datConExtWin[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_946(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,946};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1209]] /* roo.radTem.epsConExtWinOpa[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1104]] /* roo.radTem.datConExtWin[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 946;
}

/*
equation index: 947
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].layers.absIR_b = roo.datConExt[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_947(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,947};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1049]] /* roo.radTem.datConExt[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[332]] /* roo.datConExt[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 947;
}

/*
equation index: 948
type: SIMPLE_ASSIGN
roo.radTem.epsConExt[1] = roo.radTem.datConExt[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_948(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,948};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1207]] /* roo.radTem.epsConExt[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1049]] /* roo.radTem.datConExt[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 948;
}

/*
equation index: 949
type: SIMPLE_ASSIGN
roo.radTem.surBou[6].A = roo.surBou[6].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_949(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,949};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1228]] /* roo.radTem.surBou[6].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1254]] /* roo.surBou[6].A PARAM */);
  threadData->lastEquationSolved = 949;
}

/*
equation index: 950
type: SIMPLE_ASSIGN
roo.radTem.ASurBou[6] = roo.radTem.surBou[6].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_950(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,950};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1021]] /* roo.radTem.ASurBou[6] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1228]] /* roo.radTem.surBou[6].A PARAM */);
  threadData->lastEquationSolved = 950;
}

/*
equation index: 951
type: SIMPLE_ASSIGN
roo.radTem.surBou[5].A = roo.surBou[5].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_951(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,951};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1227]] /* roo.radTem.surBou[5].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1253]] /* roo.surBou[5].A PARAM */);
  threadData->lastEquationSolved = 951;
}

/*
equation index: 952
type: SIMPLE_ASSIGN
roo.radTem.ASurBou[5] = roo.radTem.surBou[5].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_952(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,952};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1020]] /* roo.radTem.ASurBou[5] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1227]] /* roo.radTem.surBou[5].A PARAM */);
  threadData->lastEquationSolved = 952;
}

/*
equation index: 953
type: SIMPLE_ASSIGN
roo.radTem.surBou[4].A = roo.surBou[4].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_953(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,953};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1226]] /* roo.radTem.surBou[4].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1252]] /* roo.surBou[4].A PARAM */);
  threadData->lastEquationSolved = 953;
}

/*
equation index: 954
type: SIMPLE_ASSIGN
roo.radTem.ASurBou[4] = roo.radTem.surBou[4].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_954(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,954};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1019]] /* roo.radTem.ASurBou[4] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1226]] /* roo.radTem.surBou[4].A PARAM */);
  threadData->lastEquationSolved = 954;
}

/*
equation index: 955
type: SIMPLE_ASSIGN
roo.radTem.surBou[3].A = roo.surBou[3].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_955(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,955};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1225]] /* roo.radTem.surBou[3].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1251]] /* roo.surBou[3].A PARAM */);
  threadData->lastEquationSolved = 955;
}

/*
equation index: 956
type: SIMPLE_ASSIGN
roo.radTem.ASurBou[3] = roo.radTem.surBou[3].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_956(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,956};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1018]] /* roo.radTem.ASurBou[3] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1225]] /* roo.radTem.surBou[3].A PARAM */);
  threadData->lastEquationSolved = 956;
}

/*
equation index: 957
type: SIMPLE_ASSIGN
roo.radTem.surBou[2].A = roo.surBou[2].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_957(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,957};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1224]] /* roo.radTem.surBou[2].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1250]] /* roo.surBou[2].A PARAM */);
  threadData->lastEquationSolved = 957;
}

/*
equation index: 958
type: SIMPLE_ASSIGN
roo.radTem.ASurBou[2] = roo.radTem.surBou[2].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_958(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,958};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1017]] /* roo.radTem.ASurBou[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1224]] /* roo.radTem.surBou[2].A PARAM */);
  threadData->lastEquationSolved = 958;
}

/*
equation index: 959
type: SIMPLE_ASSIGN
roo.radTem.surBou[1].A = roo.surBou[1].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_959(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,959};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1223]] /* roo.radTem.surBou[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1249]] /* roo.surBou[1].A PARAM */);
  threadData->lastEquationSolved = 959;
}

/*
equation index: 960
type: SIMPLE_ASSIGN
roo.radTem.ASurBou[1] = roo.radTem.surBou[1].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_960(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,960};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1016]] /* roo.radTem.ASurBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1223]] /* roo.radTem.surBou[1].A PARAM */);
  threadData->lastEquationSolved = 960;
}

/*
equation index: 961
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].A = roo.datConBou[1].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_961(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,961};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1022]] /* roo.radTem.datConBou[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[305]] /* roo.datConBou[1].A PARAM */);
  threadData->lastEquationSolved = 961;
}

/*
equation index: 962
type: SIMPLE_ASSIGN
roo.radTem.AConBou[1] = roo.radTem.datConBou[1].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_962(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,962};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1009]] /* roo.radTem.AConBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1022]] /* roo.radTem.datConBou[1].A PARAM */);
  threadData->lastEquationSolved = 962;
}

/*
equation index: 963
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].A = roo.datConPar[1].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_963(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,963};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1127]] /* roo.radTem.datConPar[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[410]] /* roo.datConPar[1].A PARAM */);
  threadData->lastEquationSolved = 963;
}

/*
equation index: 964
type: SIMPLE_ASSIGN
roo.radTem.AConPar[1] = roo.radTem.datConPar[1].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_964(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,964};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1014]] /* roo.radTem.AConPar[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1127]] /* roo.radTem.datConPar[1].A PARAM */);
  threadData->lastEquationSolved = 964;
}

/*
equation index: 965
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].AWin = roo.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_965(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,965};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1068]] /* roo.radTem.datConExtWin[1].AWin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[351]] /* roo.datConExtWin[1].AWin PARAM */);
  threadData->lastEquationSolved = 965;
}

/*
equation index: 966
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].fFra = roo.datConExtWin[1].fFra
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_966(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,966};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1072]] /* roo.radTem.datConExtWin[1].fFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[355]] /* roo.datConExtWin[1].fFra PARAM */);
  threadData->lastEquationSolved = 966;
}

/*
equation index: 967
type: SIMPLE_ASSIGN
roo.radTem.AConExtWinFra[1] = roo.radTem.datConExtWin[1].fFra * roo.radTem.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_967(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,967};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1011]] /* roo.radTem.AConExtWinFra[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1072]] /* roo.radTem.datConExtWin[1].fFra PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1068]] /* roo.radTem.datConExtWin[1].AWin PARAM */));
  threadData->lastEquationSolved = 967;
}

/*
equation index: 968
type: SIMPLE_ASSIGN
roo.radTem.AConExtWinGla[1] = (1.0 - roo.radTem.datConExtWin[1].fFra) * roo.radTem.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_968(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,968};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1012]] /* roo.radTem.AConExtWinGla[1] PARAM */) = (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1072]] /* roo.radTem.datConExtWin[1].fFra PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1068]] /* roo.radTem.datConExtWin[1].AWin PARAM */));
  threadData->lastEquationSolved = 968;
}

/*
equation index: 969
type: SIMPLE_ASSIGN
roo.datConExtWin[1].AOpa = roo.datConExtWin[1].A - roo.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_969(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,969};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[350]] /* roo.datConExtWin[1].AOpa PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[347]] /* roo.datConExtWin[1].A PARAM */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[351]] /* roo.datConExtWin[1].AWin PARAM */);
  threadData->lastEquationSolved = 969;
}

/*
equation index: 970
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].AOpa = roo.datConExtWin[1].AOpa
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_970(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,970};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1067]] /* roo.radTem.datConExtWin[1].AOpa PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[350]] /* roo.datConExtWin[1].AOpa PARAM */);
  threadData->lastEquationSolved = 970;
}

/*
equation index: 971
type: SIMPLE_ASSIGN
roo.radTem.AConExtWinOpa[1] = roo.radTem.datConExtWin[1].AOpa
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_971(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,971};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1013]] /* roo.radTem.AConExtWinOpa[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1067]] /* roo.radTem.datConExtWin[1].AOpa PARAM */);
  threadData->lastEquationSolved = 971;
}

/*
equation index: 972
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].A = roo.datConExt[1].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_972(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,972};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1043]] /* roo.radTem.datConExt[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[326]] /* roo.datConExt[1].A PARAM */);
  threadData->lastEquationSolved = 972;
}

/*
equation index: 973
type: SIMPLE_ASSIGN
roo.radTem.AConExt[1] = roo.radTem.datConExt[1].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_973(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,973};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1010]] /* roo.radTem.AConExt[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1043]] /* roo.radTem.datConExt[1].A PARAM */);
  threadData->lastEquationSolved = 973;
}

/*
equation index: 974
type: SIMPLE_ASSIGN
roo.radTem.instanceName = "ForcedConvection.roo.radTem"
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_974(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,974};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[66]] /* roo.radTem.instanceName PARAM */) = _OMC_LIT80;
  threadData->lastEquationSolved = 974;
}

/*
equation index: 980
type: SIMPLE_ASSIGN
roo.radTem.dummyCon.R = roo.radTem.dummyCon.material[1].R
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_980(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,980};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1148]] /* roo.radTem.dummyCon.R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1154]] /* roo.radTem.dummyCon.material[1].R PARAM */);
  threadData->lastEquationSolved = 980;
}

/*
equation index: 986
type: SIMPLE_ASSIGN
roo.radTem.surBou[6].boundaryCondition = roo.surBou[6].boundaryCondition
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_986(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,986};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[315]] /* roo.radTem.surBou[6].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[321]] /* roo.surBou[6].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 986;
}

/*
equation index: 987
type: SIMPLE_ASSIGN
roo.radTem.surBou[6].name = roo.surBou[6].name
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_987(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,987};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[72]] /* roo.radTem.surBou[6].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[80]] /* roo.surBou[6].name PARAM */);
  threadData->lastEquationSolved = 987;
}

/*
equation index: 989
type: SIMPLE_ASSIGN
roo.radTem.surBou[6].absSol = roo.surBou[6].absSol
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_989(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,989};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1240]] /* roo.radTem.surBou[6].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1266]] /* roo.surBou[6].absSol PARAM */);
  threadData->lastEquationSolved = 989;
}

/*
equation index: 991
type: SIMPLE_ASSIGN
roo.radTem.surBou[5].boundaryCondition = roo.surBou[5].boundaryCondition
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_991(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,991};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[314]] /* roo.radTem.surBou[5].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[320]] /* roo.surBou[5].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 991;
}

/*
equation index: 992
type: SIMPLE_ASSIGN
roo.radTem.surBou[5].name = roo.surBou[5].name
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_992(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,992};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[71]] /* roo.radTem.surBou[5].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[79]] /* roo.surBou[5].name PARAM */);
  threadData->lastEquationSolved = 992;
}

/*
equation index: 994
type: SIMPLE_ASSIGN
roo.radTem.surBou[5].absSol = roo.surBou[5].absSol
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_994(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,994};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1239]] /* roo.radTem.surBou[5].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1265]] /* roo.surBou[5].absSol PARAM */);
  threadData->lastEquationSolved = 994;
}

/*
equation index: 996
type: SIMPLE_ASSIGN
roo.radTem.surBou[4].boundaryCondition = roo.surBou[4].boundaryCondition
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_996(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,996};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[313]] /* roo.radTem.surBou[4].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[319]] /* roo.surBou[4].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 996;
}

/*
equation index: 997
type: SIMPLE_ASSIGN
roo.radTem.surBou[4].name = roo.surBou[4].name
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_997(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,997};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[70]] /* roo.radTem.surBou[4].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[78]] /* roo.surBou[4].name PARAM */);
  threadData->lastEquationSolved = 997;
}

/*
equation index: 999
type: SIMPLE_ASSIGN
roo.radTem.surBou[4].absSol = roo.surBou[4].absSol
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_999(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,999};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1238]] /* roo.radTem.surBou[4].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1264]] /* roo.surBou[4].absSol PARAM */);
  threadData->lastEquationSolved = 999;
}

/*
equation index: 1001
type: SIMPLE_ASSIGN
roo.radTem.surBou[3].boundaryCondition = roo.surBou[3].boundaryCondition
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1001(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1001};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[312]] /* roo.radTem.surBou[3].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[318]] /* roo.surBou[3].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1001;
}

/*
equation index: 1002
type: SIMPLE_ASSIGN
roo.radTem.surBou[3].name = roo.surBou[3].name
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1002(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1002};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[69]] /* roo.radTem.surBou[3].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[77]] /* roo.surBou[3].name PARAM */);
  threadData->lastEquationSolved = 1002;
}

/*
equation index: 1004
type: SIMPLE_ASSIGN
roo.radTem.surBou[3].absSol = roo.surBou[3].absSol
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1004(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1004};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1237]] /* roo.radTem.surBou[3].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1263]] /* roo.surBou[3].absSol PARAM */);
  threadData->lastEquationSolved = 1004;
}

/*
equation index: 1006
type: SIMPLE_ASSIGN
roo.radTem.surBou[2].boundaryCondition = roo.surBou[2].boundaryCondition
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1006(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1006};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[311]] /* roo.radTem.surBou[2].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[317]] /* roo.surBou[2].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1006;
}

/*
equation index: 1007
type: SIMPLE_ASSIGN
roo.radTem.surBou[2].name = roo.surBou[2].name
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1007(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1007};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[68]] /* roo.radTem.surBou[2].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[76]] /* roo.surBou[2].name PARAM */);
  threadData->lastEquationSolved = 1007;
}

/*
equation index: 1009
type: SIMPLE_ASSIGN
roo.radTem.surBou[2].absSol = roo.surBou[2].absSol
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1009(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1009};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1236]] /* roo.radTem.surBou[2].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1262]] /* roo.surBou[2].absSol PARAM */);
  threadData->lastEquationSolved = 1009;
}

/*
equation index: 1011
type: SIMPLE_ASSIGN
roo.radTem.surBou[1].boundaryCondition = roo.surBou[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1011(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1011};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[310]] /* roo.radTem.surBou[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[316]] /* roo.surBou[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1011;
}

/*
equation index: 1012
type: SIMPLE_ASSIGN
roo.radTem.surBou[1].name = roo.surBou[1].name
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1012(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1012};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[67]] /* roo.radTem.surBou[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[75]] /* roo.surBou[1].name PARAM */);
  threadData->lastEquationSolved = 1012;
}

/*
equation index: 1014
type: SIMPLE_ASSIGN
roo.radTem.surBou[1].absSol = roo.surBou[1].absSol
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1014(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1014};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1235]] /* roo.radTem.surBou[1].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1261]] /* roo.surBou[1].absSol PARAM */);
  threadData->lastEquationSolved = 1014;
}

/*
equation index: 1016
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].boundaryCondition = roo.datConBou[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1016(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1016};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[276]] /* roo.radTem.datConBou[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[133]] /* roo.datConBou[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1016;
}

/*
equation index: 1019
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].T_b_start = roo.datConBou[1].T_b_start
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1019(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1019};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1024]] /* roo.radTem.datConBou[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[307]] /* roo.datConBou[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 1019;
}

/*
equation index: 1020
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].T_a_start = roo.datConBou[1].T_a_start
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1020(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1020};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1023]] /* roo.radTem.datConBou[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[306]] /* roo.datConBou[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 1020;
}

/*
equation index: 1024
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].azi = roo.datConBou[1].azi
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1024(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1024};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1025]] /* roo.radTem.datConBou[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[308]] /* roo.datConBou[1].azi PARAM */);
  threadData->lastEquationSolved = 1024;
}

/*
equation index: 1026
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].layers.roughness_a = roo.datConBou[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1026(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1026};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[281]] /* roo.radTem.datConBou[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[138]] /* roo.datConBou[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 1026;
}

/*
equation index: 1027
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].layers.absSol_b = roo.datConBou[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1027(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1027};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1030]] /* roo.radTem.datConBou[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[313]] /* roo.datConBou[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 1027;
}

/*
equation index: 1028
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].layers.absSol_a = roo.datConBou[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1028(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1028};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1029]] /* roo.radTem.datConBou[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[312]] /* roo.datConBou[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 1028;
}

/*
equation index: 1029
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].layers.absIR_a = roo.datConBou[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1029(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1029};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1027]] /* roo.radTem.datConBou[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[310]] /* roo.datConBou[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 1029;
}

/*
equation index: 1032
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].layers.material[1].LHea = roo.datConBou[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1032(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1032};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1031]] /* roo.radTem.datConBou[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[314]] /* roo.datConBou[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 1032;
}

/*
equation index: 1035
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].layers.material[1].nStaReal = roo.datConBou[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1035(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1035};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1038]] /* roo.radTem.datConBou[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[321]] /* roo.datConBou[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 1035;
}

/*
equation index: 1036
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].layers.material[1].piMat = roo.datConBou[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1036(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1036};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1039]] /* roo.radTem.datConBou[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[322]] /* roo.datConBou[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 1036;
}

/*
equation index: 1037
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].layers.material[1].piRef = roo.datConBou[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1037(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1037};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1040]] /* roo.radTem.datConBou[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[323]] /* roo.datConBou[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 1037;
}

/*
equation index: 1040
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].layers.material[1].nStaRef = roo.datConBou[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1040(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1040};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[278]] /* roo.radTem.datConBou[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[135]] /* roo.datConBou[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 1040;
}

/*
equation index: 1041
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].layers.material[1].R = roo.datConBou[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1041(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1041};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1032]] /* roo.radTem.datConBou[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[315]] /* roo.datConBou[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 1041;
}

/*
equation index: 1042
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].layers.material[1].d = roo.datConBou[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1042(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1042};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1036]] /* roo.radTem.datConBou[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[319]] /* roo.datConBou[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 1042;
}

/*
equation index: 1043
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].layers.material[1].c = roo.datConBou[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1043(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1043};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1035]] /* roo.radTem.datConBou[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[318]] /* roo.datConBou[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 1043;
}

/*
equation index: 1044
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].layers.material[1].k = roo.datConBou[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1044(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1044};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1037]] /* roo.radTem.datConBou[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[320]] /* roo.datConBou[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 1044;
}

/*
equation index: 1045
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].layers.material[1].x = roo.datConBou[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1045(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1045};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1041]] /* roo.radTem.datConBou[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[324]] /* roo.datConBou[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 1045;
}

/*
equation index: 1047
type: SIMPLE_ASSIGN
roo.radTem.datConBou[1].name = roo.datConBou[1].name
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1047(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1047};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[62]] /* roo.radTem.datConBou[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[34]] /* roo.datConBou[1].name PARAM */);
  threadData->lastEquationSolved = 1047;
}

/*
equation index: 1048
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].boundaryCondition = roo.datConPar[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1048(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1048};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[294]] /* roo.radTem.datConPar[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[151]] /* roo.datConPar[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1048;
}

/*
equation index: 1051
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].T_b_start = roo.datConPar[1].T_b_start
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1051(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1051};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1129]] /* roo.radTem.datConPar[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[412]] /* roo.datConPar[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 1051;
}

/*
equation index: 1052
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].T_a_start = roo.datConPar[1].T_a_start
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1052(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1052};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1128]] /* roo.radTem.datConPar[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[411]] /* roo.datConPar[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 1052;
}

/*
equation index: 1056
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].azi = roo.datConPar[1].azi
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1056(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1056};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1130]] /* roo.radTem.datConPar[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[413]] /* roo.datConPar[1].azi PARAM */);
  threadData->lastEquationSolved = 1056;
}

/*
equation index: 1058
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].layers.roughness_a = roo.datConPar[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1058(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1058};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[299]] /* roo.radTem.datConPar[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[156]] /* roo.datConPar[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 1058;
}

/*
equation index: 1059
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].layers.absSol_b = roo.datConPar[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1059(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1059};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1135]] /* roo.radTem.datConPar[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[418]] /* roo.datConPar[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 1059;
}

/*
equation index: 1060
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].layers.absSol_a = roo.datConPar[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1060(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1060};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1134]] /* roo.radTem.datConPar[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[417]] /* roo.datConPar[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 1060;
}

/*
equation index: 1063
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].layers.material[1].LHea = roo.datConPar[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1063(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1063};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1136]] /* roo.radTem.datConPar[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[419]] /* roo.datConPar[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 1063;
}

/*
equation index: 1066
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].layers.material[1].nStaReal = roo.datConPar[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1066(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1066};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1143]] /* roo.radTem.datConPar[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[426]] /* roo.datConPar[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 1066;
}

/*
equation index: 1067
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].layers.material[1].piMat = roo.datConPar[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1067(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1067};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1144]] /* roo.radTem.datConPar[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[427]] /* roo.datConPar[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 1067;
}

/*
equation index: 1068
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].layers.material[1].piRef = roo.datConPar[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1068(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1068};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1145]] /* roo.radTem.datConPar[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[428]] /* roo.datConPar[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 1068;
}

/*
equation index: 1071
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].layers.material[1].nStaRef = roo.datConPar[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1071(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1071};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[296]] /* roo.radTem.datConPar[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[153]] /* roo.datConPar[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 1071;
}

/*
equation index: 1072
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].layers.material[1].R = roo.datConPar[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1072(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1072};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1137]] /* roo.radTem.datConPar[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[420]] /* roo.datConPar[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 1072;
}

/*
equation index: 1073
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].layers.material[1].d = roo.datConPar[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1073(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1073};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1141]] /* roo.radTem.datConPar[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[424]] /* roo.datConPar[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 1073;
}

/*
equation index: 1074
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].layers.material[1].c = roo.datConPar[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1074(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1074};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1140]] /* roo.radTem.datConPar[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[423]] /* roo.datConPar[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 1074;
}

/*
equation index: 1075
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].layers.material[1].k = roo.datConPar[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1075(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1075};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1142]] /* roo.radTem.datConPar[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[425]] /* roo.datConPar[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 1075;
}

/*
equation index: 1076
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].layers.material[1].x = roo.datConPar[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1076(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1076};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1146]] /* roo.radTem.datConPar[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[429]] /* roo.datConPar[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 1076;
}

/*
equation index: 1078
type: SIMPLE_ASSIGN
roo.radTem.datConPar[1].name = roo.datConPar[1].name
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1078(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1078};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[65]] /* roo.radTem.datConPar[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[37]] /* roo.datConPar[1].name PARAM */);
  threadData->lastEquationSolved = 1078;
}

/*
equation index: 1082
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.absSolFra = roo.datConExtWin[1].glaSys.absSolFra
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1082(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1082};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1075]] /* roo.radTem.datConExtWin[1].glaSys.absSolFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[358]] /* roo.datConExtWin[1].glaSys.absSolFra PARAM */);
  threadData->lastEquationSolved = 1082;
}

/*
equation index: 1083
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.UFra = roo.datConExtWin[1].glaSys.UFra
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1083(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1083};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1073]] /* roo.radTem.datConExtWin[1].glaSys.UFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[356]] /* roo.datConExtWin[1].glaSys.UFra PARAM */);
  threadData->lastEquationSolved = 1083;
}

/*
equation index: 1084
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.shade.tauIR_b = roo.datConExtWin[1].glaSys.shade.tauIR_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1084(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1084};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1098]] /* roo.radTem.datConExtWin[1].glaSys.shade.tauIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[381]] /* roo.datConExtWin[1].glaSys.shade.tauIR_b PARAM */);
  threadData->lastEquationSolved = 1084;
}

/*
equation index: 1085
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.shade.tauIR_a = roo.datConExtWin[1].glaSys.shade.tauIR_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1085(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1085};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1097]] /* roo.radTem.datConExtWin[1].glaSys.shade.tauIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[380]] /* roo.datConExtWin[1].glaSys.shade.tauIR_a PARAM */);
  threadData->lastEquationSolved = 1085;
}

/*
equation index: 1086
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.shade.absIR_b = roo.datConExtWin[1].glaSys.shade.absIR_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1086(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1086};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1094]] /* roo.radTem.datConExtWin[1].glaSys.shade.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[377]] /* roo.datConExtWin[1].glaSys.shade.absIR_b PARAM */);
  threadData->lastEquationSolved = 1086;
}

/*
equation index: 1087
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.shade.rhoSol_b = roo.datConExtWin[1].glaSys.shade.rhoSol_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1087(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1087};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1096]] /* roo.radTem.datConExtWin[1].glaSys.shade.rhoSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[379]] /* roo.datConExtWin[1].glaSys.shade.rhoSol_b PARAM */);
  threadData->lastEquationSolved = 1087;
}

/*
equation index: 1088
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.shade.rhoSol_a = roo.datConExtWin[1].glaSys.shade.rhoSol_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1088(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1088};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1095]] /* roo.radTem.datConExtWin[1].glaSys.shade.rhoSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[378]] /* roo.datConExtWin[1].glaSys.shade.rhoSol_a PARAM */);
  threadData->lastEquationSolved = 1088;
}

/*
equation index: 1089
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.shade.tauSol_b = roo.datConExtWin[1].glaSys.shade.tauSol_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1089(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1089};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1100]] /* roo.radTem.datConExtWin[1].glaSys.shade.tauSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[383]] /* roo.datConExtWin[1].glaSys.shade.tauSol_b PARAM */);
  threadData->lastEquationSolved = 1089;
}

/*
equation index: 1090
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.shade.tauSol_a = roo.datConExtWin[1].glaSys.shade.tauSol_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1090(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1090};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1099]] /* roo.radTem.datConExtWin[1].glaSys.shade.tauSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[382]] /* roo.datConExtWin[1].glaSys.shade.tauSol_a PARAM */);
  threadData->lastEquationSolved = 1090;
}

/*
equation index: 1091
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.gas[1].P0 = roo.datConExtWin[1].glaSys.gas[1].P0
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1091(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1091};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1077]] /* roo.radTem.datConExtWin[1].glaSys.gas[1].P0 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[360]] /* roo.datConExtWin[1].glaSys.gas[1].P0 PARAM */);
  threadData->lastEquationSolved = 1091;
}

/*
equation index: 1092
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.gas[1].MM = roo.datConExtWin[1].glaSys.gas[1].MM
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1092(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1092};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1076]] /* roo.radTem.datConExtWin[1].glaSys.gas[1].MM PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[359]] /* roo.datConExtWin[1].glaSys.gas[1].MM PARAM */);
  threadData->lastEquationSolved = 1092;
}

/*
equation index: 1093
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.gas[1].b_c = roo.datConExtWin[1].glaSys.gas[1].b_c
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1093(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1093};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1081]] /* roo.radTem.datConExtWin[1].glaSys.gas[1].b_c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[364]] /* roo.datConExtWin[1].glaSys.gas[1].b_c PARAM */);
  threadData->lastEquationSolved = 1093;
}

/*
equation index: 1094
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.gas[1].a_c = roo.datConExtWin[1].glaSys.gas[1].a_c
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1094(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1094};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1078]] /* roo.radTem.datConExtWin[1].glaSys.gas[1].a_c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[361]] /* roo.datConExtWin[1].glaSys.gas[1].a_c PARAM */);
  threadData->lastEquationSolved = 1094;
}

/*
equation index: 1095
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.gas[1].b_mu = roo.datConExtWin[1].glaSys.gas[1].b_mu
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1095(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1095};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1083]] /* roo.radTem.datConExtWin[1].glaSys.gas[1].b_mu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[366]] /* roo.datConExtWin[1].glaSys.gas[1].b_mu PARAM */);
  threadData->lastEquationSolved = 1095;
}

/*
equation index: 1096
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.gas[1].a_mu = roo.datConExtWin[1].glaSys.gas[1].a_mu
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1096(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1096};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1080]] /* roo.radTem.datConExtWin[1].glaSys.gas[1].a_mu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[363]] /* roo.datConExtWin[1].glaSys.gas[1].a_mu PARAM */);
  threadData->lastEquationSolved = 1096;
}

/*
equation index: 1097
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.gas[1].b_k = roo.datConExtWin[1].glaSys.gas[1].b_k
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1097(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1097};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1082]] /* roo.radTem.datConExtWin[1].glaSys.gas[1].b_k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[365]] /* roo.datConExtWin[1].glaSys.gas[1].b_k PARAM */);
  threadData->lastEquationSolved = 1097;
}

/*
equation index: 1098
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.gas[1].a_k = roo.datConExtWin[1].glaSys.gas[1].a_k
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1098(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1098};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1079]] /* roo.radTem.datConExtWin[1].glaSys.gas[1].a_k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[362]] /* roo.datConExtWin[1].glaSys.gas[1].a_k PARAM */);
  threadData->lastEquationSolved = 1098;
}

/*
equation index: 1099
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.gas[1].x = roo.datConExtWin[1].glaSys.gas[1].x
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1099(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1099};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1084]] /* roo.radTem.datConExtWin[1].glaSys.gas[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[367]] /* roo.datConExtWin[1].glaSys.gas[1].x PARAM */);
  threadData->lastEquationSolved = 1099;
}

/*
equation index: 1100
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.glass[1].absIR_a = roo.datConExtWin[1].glaSys.glass[1].absIR_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1100(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1100};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1085]] /* roo.radTem.datConExtWin[1].glaSys.glass[1].absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[368]] /* roo.datConExtWin[1].glaSys.glass[1].absIR_a PARAM */);
  threadData->lastEquationSolved = 1100;
}

/*
equation index: 1101
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.glass[1].tauIR = roo.datConExtWin[1].glaSys.glass[1].tauIR
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1101(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1101};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1090]] /* roo.radTem.datConExtWin[1].glaSys.glass[1].tauIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[373]] /* roo.datConExtWin[1].glaSys.glass[1].tauIR PARAM */);
  threadData->lastEquationSolved = 1101;
}

/*
equation index: 1102
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.glass[1].rhoSol_b[1] = roo.datConExtWin[1].glaSys.glass[1].rhoSol_b[1]
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1102(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1102};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1089]] /* roo.radTem.datConExtWin[1].glaSys.glass[1].rhoSol_b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[372]] /* roo.datConExtWin[1].glaSys.glass[1].rhoSol_b[1] PARAM */);
  threadData->lastEquationSolved = 1102;
}

/*
equation index: 1103
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.glass[1].rhoSol_a[1] = roo.datConExtWin[1].glaSys.glass[1].rhoSol_a[1]
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1103(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1103};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1088]] /* roo.radTem.datConExtWin[1].glaSys.glass[1].rhoSol_a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[371]] /* roo.datConExtWin[1].glaSys.glass[1].rhoSol_a[1] PARAM */);
  threadData->lastEquationSolved = 1103;
}

/*
equation index: 1104
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.glass[1].tauSol[1] = roo.datConExtWin[1].glaSys.glass[1].tauSol[1]
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1104(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1104};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1091]] /* roo.radTem.datConExtWin[1].glaSys.glass[1].tauSol[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[374]] /* roo.datConExtWin[1].glaSys.glass[1].tauSol[1] PARAM */);
  threadData->lastEquationSolved = 1104;
}

/*
equation index: 1105
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.glass[1].k = roo.datConExtWin[1].glaSys.glass[1].k
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1105(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1105};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1087]] /* roo.radTem.datConExtWin[1].glaSys.glass[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[370]] /* roo.datConExtWin[1].glaSys.glass[1].k PARAM */);
  threadData->lastEquationSolved = 1105;
}

/*
equation index: 1106
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].glaSys.glass[1].x = roo.datConExtWin[1].glaSys.glass[1].x
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1106(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1106};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1092]] /* roo.radTem.datConExtWin[1].glaSys.glass[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[375]] /* roo.datConExtWin[1].glaSys.glass[1].x PARAM */);
  threadData->lastEquationSolved = 1106;
}

/*
equation index: 1109
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].AFra = roo.datConExtWin[1].AFra
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1109(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1109};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1065]] /* roo.radTem.datConExtWin[1].AFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[348]] /* roo.datConExtWin[1].AFra PARAM */);
  threadData->lastEquationSolved = 1109;
}

/*
equation index: 1111
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].sidFin.gap = roo.datConExtWin[1].sidFin.gap
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1111(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1111};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1123]] /* roo.radTem.datConExtWin[1].sidFin.gap PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[406]] /* roo.datConExtWin[1].sidFin.gap PARAM */);
  threadData->lastEquationSolved = 1111;
}

/*
equation index: 1113
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].sidFin.h = roo.datConExtWin[1].sidFin.h
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1113(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1113};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1124]] /* roo.radTem.datConExtWin[1].sidFin.h PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[407]] /* roo.datConExtWin[1].sidFin.h PARAM */);
  threadData->lastEquationSolved = 1113;
}

/*
equation index: 1115
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].ove.gap = roo.datConExtWin[1].ove.gap
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1115(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1115};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1119]] /* roo.radTem.datConExtWin[1].ove.gap PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[402]] /* roo.datConExtWin[1].ove.gap PARAM */);
  threadData->lastEquationSolved = 1115;
}

/*
equation index: 1117
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].ove.wR = roo.datConExtWin[1].ove.wR
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1117(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1117};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1121]] /* roo.radTem.datConExtWin[1].ove.wR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[404]] /* roo.datConExtWin[1].ove.wR PARAM */);
  threadData->lastEquationSolved = 1117;
}

/*
equation index: 1118
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].ove.wL = roo.datConExtWin[1].ove.wL
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1118(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1118};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1120]] /* roo.radTem.datConExtWin[1].ove.wL PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[403]] /* roo.datConExtWin[1].ove.wL PARAM */);
  threadData->lastEquationSolved = 1118;
}

/*
equation index: 1119
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].wWin = roo.datConExtWin[1].wWin
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1119(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1119};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1126]] /* roo.radTem.datConExtWin[1].wWin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[409]] /* roo.datConExtWin[1].wWin PARAM */);
  threadData->lastEquationSolved = 1119;
}

/*
equation index: 1120
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].hWin = roo.datConExtWin[1].hWin
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1120(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1120};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1101]] /* roo.radTem.datConExtWin[1].hWin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[384]] /* roo.datConExtWin[1].hWin PARAM */);
  threadData->lastEquationSolved = 1120;
}

/*
equation index: 1121
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].A = roo.datConExtWin[1].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1121(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1121};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1064]] /* roo.radTem.datConExtWin[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[347]] /* roo.datConExtWin[1].A PARAM */);
  threadData->lastEquationSolved = 1121;
}

/*
equation index: 1122
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].boundaryCondition = roo.datConExtWin[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1122(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1122};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[288]] /* roo.radTem.datConExtWin[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[145]] /* roo.datConExtWin[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1122;
}

/*
equation index: 1125
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].T_b_start = roo.datConExtWin[1].T_b_start
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1125(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1125};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1070]] /* roo.radTem.datConExtWin[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[353]] /* roo.datConExtWin[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 1125;
}

/*
equation index: 1126
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].T_a_start = roo.datConExtWin[1].T_a_start
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1126(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1126};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1069]] /* roo.radTem.datConExtWin[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[352]] /* roo.datConExtWin[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 1126;
}

/*
equation index: 1130
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].azi = roo.datConExtWin[1].azi
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1130(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1130};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1071]] /* roo.radTem.datConExtWin[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[354]] /* roo.datConExtWin[1].azi PARAM */);
  threadData->lastEquationSolved = 1130;
}

/*
equation index: 1132
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].layers.roughness_a = roo.datConExtWin[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1132(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1132};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[293]] /* roo.radTem.datConExtWin[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[150]] /* roo.datConExtWin[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 1132;
}

/*
equation index: 1133
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].layers.absSol_b = roo.datConExtWin[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1133(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1133};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1106]] /* roo.radTem.datConExtWin[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[389]] /* roo.datConExtWin[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 1133;
}

/*
equation index: 1134
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].layers.absSol_a = roo.datConExtWin[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1134(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1134};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1105]] /* roo.radTem.datConExtWin[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[388]] /* roo.datConExtWin[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 1134;
}

/*
equation index: 1135
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].layers.absIR_a = roo.datConExtWin[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1135(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1135};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1103]] /* roo.radTem.datConExtWin[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[386]] /* roo.datConExtWin[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 1135;
}

/*
equation index: 1138
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].layers.material[1].LHea = roo.datConExtWin[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1138(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1138};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1107]] /* roo.radTem.datConExtWin[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[390]] /* roo.datConExtWin[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 1138;
}

/*
equation index: 1141
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].layers.material[1].nStaReal = roo.datConExtWin[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1141(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1141};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1114]] /* roo.radTem.datConExtWin[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[397]] /* roo.datConExtWin[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 1141;
}

/*
equation index: 1142
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].layers.material[1].piMat = roo.datConExtWin[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1142(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1142};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1115]] /* roo.radTem.datConExtWin[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[398]] /* roo.datConExtWin[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 1142;
}

/*
equation index: 1143
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].layers.material[1].piRef = roo.datConExtWin[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1143(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1143};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1116]] /* roo.radTem.datConExtWin[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[399]] /* roo.datConExtWin[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 1143;
}

/*
equation index: 1146
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].layers.material[1].nStaRef = roo.datConExtWin[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1146(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1146};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[290]] /* roo.radTem.datConExtWin[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[147]] /* roo.datConExtWin[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 1146;
}

/*
equation index: 1147
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].layers.material[1].R = roo.datConExtWin[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1147(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1147};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1108]] /* roo.radTem.datConExtWin[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[391]] /* roo.datConExtWin[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 1147;
}

/*
equation index: 1148
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].layers.material[1].d = roo.datConExtWin[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1148(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1148};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1112]] /* roo.radTem.datConExtWin[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[395]] /* roo.datConExtWin[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 1148;
}

/*
equation index: 1149
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].layers.material[1].c = roo.datConExtWin[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1149(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1149};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1111]] /* roo.radTem.datConExtWin[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[394]] /* roo.datConExtWin[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 1149;
}

/*
equation index: 1150
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].layers.material[1].k = roo.datConExtWin[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1150(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1150};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1113]] /* roo.radTem.datConExtWin[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[396]] /* roo.datConExtWin[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 1150;
}

/*
equation index: 1151
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].layers.material[1].x = roo.datConExtWin[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1151(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1151};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1117]] /* roo.radTem.datConExtWin[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[400]] /* roo.datConExtWin[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 1151;
}

/*
equation index: 1153
type: SIMPLE_ASSIGN
roo.radTem.datConExtWin[1].name = roo.datConExtWin[1].name
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1153(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1153};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[64]] /* roo.radTem.datConExtWin[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[36]] /* roo.datConExtWin[1].name PARAM */);
  threadData->lastEquationSolved = 1153;
}

/*
equation index: 1154
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].boundaryCondition = roo.datConExt[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1154(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1154};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[282]] /* roo.radTem.datConExt[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[139]] /* roo.datConExt[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1154;
}

/*
equation index: 1157
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].T_b_start = roo.datConExt[1].T_b_start
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1157(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1157};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1045]] /* roo.radTem.datConExt[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[328]] /* roo.datConExt[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 1157;
}

/*
equation index: 1158
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].T_a_start = roo.datConExt[1].T_a_start
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1158(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1158};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1044]] /* roo.radTem.datConExt[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[327]] /* roo.datConExt[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 1158;
}

/*
equation index: 1162
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].azi = roo.datConExt[1].azi
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1162(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1162};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1046]] /* roo.radTem.datConExt[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[329]] /* roo.datConExt[1].azi PARAM */);
  threadData->lastEquationSolved = 1162;
}

/*
equation index: 1164
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].layers.roughness_a = roo.datConExt[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1164(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1164};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[287]] /* roo.radTem.datConExt[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[144]] /* roo.datConExt[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 1164;
}

/*
equation index: 1165
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].layers.absSol_b = roo.datConExt[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1165(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1165};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1051]] /* roo.radTem.datConExt[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[334]] /* roo.datConExt[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 1165;
}

/*
equation index: 1166
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].layers.absSol_a = roo.datConExt[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1166(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1166};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1050]] /* roo.radTem.datConExt[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[333]] /* roo.datConExt[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 1166;
}

/*
equation index: 1167
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].layers.absIR_a = roo.datConExt[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1167(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1167};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1048]] /* roo.radTem.datConExt[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[331]] /* roo.datConExt[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 1167;
}

/*
equation index: 1170
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].layers.material[1].LHea = roo.datConExt[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1170(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1170};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1052]] /* roo.radTem.datConExt[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[335]] /* roo.datConExt[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 1170;
}

/*
equation index: 1173
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].layers.material[1].nStaReal = roo.datConExt[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1173(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1173};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1059]] /* roo.radTem.datConExt[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[342]] /* roo.datConExt[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 1173;
}

/*
equation index: 1174
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].layers.material[1].piMat = roo.datConExt[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1174(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1174};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1060]] /* roo.radTem.datConExt[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[343]] /* roo.datConExt[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 1174;
}

/*
equation index: 1175
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].layers.material[1].piRef = roo.datConExt[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1175(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1175};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1061]] /* roo.radTem.datConExt[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[344]] /* roo.datConExt[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 1175;
}

/*
equation index: 1178
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].layers.material[1].nStaRef = roo.datConExt[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1178(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1178};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[284]] /* roo.radTem.datConExt[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[141]] /* roo.datConExt[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 1178;
}

/*
equation index: 1179
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].layers.material[1].R = roo.datConExt[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1179(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1179};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1053]] /* roo.radTem.datConExt[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[336]] /* roo.datConExt[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 1179;
}

/*
equation index: 1180
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].layers.material[1].d = roo.datConExt[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1180(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1180};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1057]] /* roo.radTem.datConExt[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[340]] /* roo.datConExt[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 1180;
}

/*
equation index: 1181
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].layers.material[1].c = roo.datConExt[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1181(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1181};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1056]] /* roo.radTem.datConExt[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[339]] /* roo.datConExt[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 1181;
}

/*
equation index: 1182
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].layers.material[1].k = roo.datConExt[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1182(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1182};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1058]] /* roo.radTem.datConExt[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[341]] /* roo.datConExt[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 1182;
}

/*
equation index: 1183
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].layers.material[1].x = roo.datConExt[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1183(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1183};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1062]] /* roo.radTem.datConExt[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[345]] /* roo.datConExt[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 1183;
}

/*
equation index: 1185
type: SIMPLE_ASSIGN
roo.radTem.datConExt[1].name = roo.datConExt[1].name
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1185(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1185};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[63]] /* roo.radTem.datConExt[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[35]] /* roo.datConExt[1].name PARAM */);
  threadData->lastEquationSolved = 1185;
}

/*
equation index: 1202
type: SIMPLE_ASSIGN
roo.irRadExc.T03 = roo.irRadExc.T0 ^ 3.0
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1202(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1202};
  modelica_real tmp1;
  tmp1 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[539]] /* roo.irRadExc.T0 PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[540]] /* roo.irRadExc.T03 PARAM */) = (tmp1 * tmp1 * tmp1);
  threadData->lastEquationSolved = 1202;
}

/*
equation index: 1211
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[6].absIR = roo.surBou[6].absIR
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1211(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1211};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[760]] /* roo.irRadExc.surBou[6].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1260]] /* roo.surBou[6].absIR PARAM */);
  threadData->lastEquationSolved = 1211;
}

/*
equation index: 1212
type: SIMPLE_ASSIGN
roo.irRadExc.epsSurBou[6] = roo.irRadExc.surBou[6].absIR
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1212(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1212};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[730]] /* roo.irRadExc.epsSurBou[6] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[760]] /* roo.irRadExc.surBou[6].absIR PARAM */);
  threadData->lastEquationSolved = 1212;
}

/*
equation index: 1213
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[5].absIR = roo.surBou[5].absIR
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1213(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1213};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[759]] /* roo.irRadExc.surBou[5].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1259]] /* roo.surBou[5].absIR PARAM */);
  threadData->lastEquationSolved = 1213;
}

/*
equation index: 1214
type: SIMPLE_ASSIGN
roo.irRadExc.epsSurBou[5] = roo.irRadExc.surBou[5].absIR
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1214(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1214};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[729]] /* roo.irRadExc.epsSurBou[5] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[759]] /* roo.irRadExc.surBou[5].absIR PARAM */);
  threadData->lastEquationSolved = 1214;
}

/*
equation index: 1215
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[4].absIR = roo.surBou[4].absIR
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1215(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1215};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[758]] /* roo.irRadExc.surBou[4].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1258]] /* roo.surBou[4].absIR PARAM */);
  threadData->lastEquationSolved = 1215;
}

/*
equation index: 1216
type: SIMPLE_ASSIGN
roo.irRadExc.epsSurBou[4] = roo.irRadExc.surBou[4].absIR
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1216(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1216};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[728]] /* roo.irRadExc.epsSurBou[4] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[758]] /* roo.irRadExc.surBou[4].absIR PARAM */);
  threadData->lastEquationSolved = 1216;
}

/*
equation index: 1217
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[3].absIR = roo.surBou[3].absIR
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1217(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1217};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[757]] /* roo.irRadExc.surBou[3].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1257]] /* roo.surBou[3].absIR PARAM */);
  threadData->lastEquationSolved = 1217;
}

/*
equation index: 1218
type: SIMPLE_ASSIGN
roo.irRadExc.epsSurBou[3] = roo.irRadExc.surBou[3].absIR
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1218(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1218};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[727]] /* roo.irRadExc.epsSurBou[3] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[757]] /* roo.irRadExc.surBou[3].absIR PARAM */);
  threadData->lastEquationSolved = 1218;
}

/*
equation index: 1219
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[2].absIR = roo.surBou[2].absIR
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1219(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1219};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[756]] /* roo.irRadExc.surBou[2].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1256]] /* roo.surBou[2].absIR PARAM */);
  threadData->lastEquationSolved = 1219;
}

/*
equation index: 1220
type: SIMPLE_ASSIGN
roo.irRadExc.epsSurBou[2] = roo.irRadExc.surBou[2].absIR
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1220(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1220};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[726]] /* roo.irRadExc.epsSurBou[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[756]] /* roo.irRadExc.surBou[2].absIR PARAM */);
  threadData->lastEquationSolved = 1220;
}

/*
equation index: 1221
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[1].absIR = roo.surBou[1].absIR
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1221(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1221};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[755]] /* roo.irRadExc.surBou[1].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1255]] /* roo.surBou[1].absIR PARAM */);
  threadData->lastEquationSolved = 1221;
}

/*
equation index: 1222
type: SIMPLE_ASSIGN
roo.irRadExc.epsSurBou[1] = roo.irRadExc.surBou[1].absIR
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1222(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1222};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[725]] /* roo.irRadExc.epsSurBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[755]] /* roo.irRadExc.surBou[1].absIR PARAM */);
  threadData->lastEquationSolved = 1222;
}

/*
equation index: 1223
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].layers.absIR_b = roo.datConBou[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1223(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1223};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[547]] /* roo.irRadExc.datConBou[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[311]] /* roo.datConBou[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 1223;
}

/*
equation index: 1224
type: SIMPLE_ASSIGN
roo.irRadExc.epsConBou[1] = roo.irRadExc.datConBou[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1224(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1224};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[711]] /* roo.irRadExc.epsConBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[547]] /* roo.irRadExc.datConBou[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 1224;
}

/*
equation index: 1225
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].layers.absIR_b = roo.datConPar[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1225(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1225};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[652]] /* roo.irRadExc.datConPar[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[416]] /* roo.datConPar[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 1225;
}

/*
equation index: 1226
type: SIMPLE_ASSIGN
roo.irRadExc.epsConPar_b[1] = roo.irRadExc.datConPar[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1226(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1226};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[718]] /* roo.irRadExc.epsConPar_b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[652]] /* roo.irRadExc.datConPar[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 1226;
}

/*
equation index: 1227
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].layers.absIR_a = roo.datConPar[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1227(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1227};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[651]] /* roo.irRadExc.datConPar[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[415]] /* roo.datConPar[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 1227;
}

/*
equation index: 1228
type: SIMPLE_ASSIGN
roo.irRadExc.epsConPar_a[1] = roo.irRadExc.datConPar[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1228(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1228};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[717]] /* roo.irRadExc.epsConPar_a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[651]] /* roo.irRadExc.datConPar[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 1228;
}

/*
equation index: 1229
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.absIRFra = roo.datConExtWin[1].glaSys.absIRFra
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1229(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1229};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[593]] /* roo.irRadExc.datConExtWin[1].glaSys.absIRFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[357]] /* roo.datConExtWin[1].glaSys.absIRFra PARAM */);
  threadData->lastEquationSolved = 1229;
}

/*
equation index: 1230
type: SIMPLE_ASSIGN
roo.irRadExc.epsConExtWinFra[1] = roo.irRadExc.datConExtWin[1].glaSys.absIRFra
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1230(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1230};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[713]] /* roo.irRadExc.epsConExtWinFra[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[593]] /* roo.irRadExc.datConExtWin[1].glaSys.absIRFra PARAM */);
  threadData->lastEquationSolved = 1230;
}

/*
equation index: 1231
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.shade.absIR_a = roo.datConExtWin[1].glaSys.shade.absIR_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1231(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1231};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[612]] /* roo.irRadExc.datConExtWin[1].glaSys.shade.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[376]] /* roo.datConExtWin[1].glaSys.shade.absIR_a PARAM */);
  threadData->lastEquationSolved = 1231;
}

/*
equation index: 1232
type: SIMPLE_ASSIGN
roo.irRadExc.epsConExtWinSha[1] = roo.irRadExc.datConExtWin[1].glaSys.shade.absIR_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1232(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1232};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[715]] /* roo.irRadExc.epsConExtWinSha[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[612]] /* roo.irRadExc.datConExtWin[1].glaSys.shade.absIR_a PARAM */);
  threadData->lastEquationSolved = 1232;
}

/*
equation index: 1233
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.glass[1].absIR_b = roo.datConExtWin[1].glaSys.glass[1].absIR_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1233(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1233};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[605]] /* roo.irRadExc.datConExtWin[1].glaSys.glass[1].absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[369]] /* roo.datConExtWin[1].glaSys.glass[1].absIR_b PARAM */);
  threadData->lastEquationSolved = 1233;
}

/*
equation index: 1234
type: SIMPLE_ASSIGN
roo.irRadExc.epsConExtWinUns[1] = roo.irRadExc.datConExtWin[1].glaSys.glass[1].absIR_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1234(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1234};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[716]] /* roo.irRadExc.epsConExtWinUns[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[605]] /* roo.irRadExc.datConExtWin[1].glaSys.glass[1].absIR_b PARAM */);
  threadData->lastEquationSolved = 1234;
}

/*
equation index: 1235
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].layers.absIR_b = roo.datConExtWin[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1235(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1235};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[623]] /* roo.irRadExc.datConExtWin[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[387]] /* roo.datConExtWin[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 1235;
}

/*
equation index: 1236
type: SIMPLE_ASSIGN
roo.irRadExc.epsConExtWinOpa[1] = roo.irRadExc.datConExtWin[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1236(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1236};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[714]] /* roo.irRadExc.epsConExtWinOpa[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[623]] /* roo.irRadExc.datConExtWin[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 1236;
}

/*
equation index: 1237
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].layers.absIR_b = roo.datConExt[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1237(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1237};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[568]] /* roo.irRadExc.datConExt[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[332]] /* roo.datConExt[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 1237;
}

/*
equation index: 1238
type: SIMPLE_ASSIGN
roo.irRadExc.epsConExt[1] = roo.irRadExc.datConExt[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1238(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1238};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[712]] /* roo.irRadExc.epsConExt[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[568]] /* roo.irRadExc.datConExt[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 1238;
}

/*
equation index: 1239
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[6].A = roo.surBou[6].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1239(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1239};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[754]] /* roo.irRadExc.surBou[6].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1254]] /* roo.surBou[6].A PARAM */);
  threadData->lastEquationSolved = 1239;
}

/*
equation index: 1240
type: SIMPLE_ASSIGN
roo.irRadExc.ASurBou[6] = roo.irRadExc.surBou[6].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1240(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1240};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[502]] /* roo.irRadExc.ASurBou[6] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[754]] /* roo.irRadExc.surBou[6].A PARAM */);
  threadData->lastEquationSolved = 1240;
}

/*
equation index: 1241
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[5].A = roo.surBou[5].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1241(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1241};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[753]] /* roo.irRadExc.surBou[5].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1253]] /* roo.surBou[5].A PARAM */);
  threadData->lastEquationSolved = 1241;
}

/*
equation index: 1242
type: SIMPLE_ASSIGN
roo.irRadExc.ASurBou[5] = roo.irRadExc.surBou[5].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1242(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1242};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[501]] /* roo.irRadExc.ASurBou[5] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[753]] /* roo.irRadExc.surBou[5].A PARAM */);
  threadData->lastEquationSolved = 1242;
}

/*
equation index: 1243
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[4].A = roo.surBou[4].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1243(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1243};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[752]] /* roo.irRadExc.surBou[4].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1252]] /* roo.surBou[4].A PARAM */);
  threadData->lastEquationSolved = 1243;
}

/*
equation index: 1244
type: SIMPLE_ASSIGN
roo.irRadExc.ASurBou[4] = roo.irRadExc.surBou[4].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1244(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1244};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[500]] /* roo.irRadExc.ASurBou[4] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[752]] /* roo.irRadExc.surBou[4].A PARAM */);
  threadData->lastEquationSolved = 1244;
}

/*
equation index: 1245
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[3].A = roo.surBou[3].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1245(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1245};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[751]] /* roo.irRadExc.surBou[3].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1251]] /* roo.surBou[3].A PARAM */);
  threadData->lastEquationSolved = 1245;
}

/*
equation index: 1246
type: SIMPLE_ASSIGN
roo.irRadExc.ASurBou[3] = roo.irRadExc.surBou[3].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1246(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1246};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[499]] /* roo.irRadExc.ASurBou[3] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[751]] /* roo.irRadExc.surBou[3].A PARAM */);
  threadData->lastEquationSolved = 1246;
}

/*
equation index: 1247
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[2].A = roo.surBou[2].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1247(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1247};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[750]] /* roo.irRadExc.surBou[2].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1250]] /* roo.surBou[2].A PARAM */);
  threadData->lastEquationSolved = 1247;
}

/*
equation index: 1248
type: SIMPLE_ASSIGN
roo.irRadExc.ASurBou[2] = roo.irRadExc.surBou[2].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1248(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1248};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[498]] /* roo.irRadExc.ASurBou[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[750]] /* roo.irRadExc.surBou[2].A PARAM */);
  threadData->lastEquationSolved = 1248;
}

/*
equation index: 1249
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[1].A = roo.surBou[1].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1249(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1249};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[749]] /* roo.irRadExc.surBou[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1249]] /* roo.surBou[1].A PARAM */);
  threadData->lastEquationSolved = 1249;
}

/*
equation index: 1250
type: SIMPLE_ASSIGN
roo.irRadExc.ASurBou[1] = roo.irRadExc.surBou[1].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1250(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1250};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[497]] /* roo.irRadExc.ASurBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[749]] /* roo.irRadExc.surBou[1].A PARAM */);
  threadData->lastEquationSolved = 1250;
}

/*
equation index: 1251
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].A = roo.datConBou[1].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1251(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1251};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[541]] /* roo.irRadExc.datConBou[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[305]] /* roo.datConBou[1].A PARAM */);
  threadData->lastEquationSolved = 1251;
}

/*
equation index: 1252
type: SIMPLE_ASSIGN
roo.irRadExc.AConBou[1] = roo.irRadExc.datConBou[1].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1252(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1252};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[485]] /* roo.irRadExc.AConBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[541]] /* roo.irRadExc.datConBou[1].A PARAM */);
  threadData->lastEquationSolved = 1252;
}

/*
equation index: 1253
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].A = roo.datConPar[1].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1253(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1253};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[646]] /* roo.irRadExc.datConPar[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[410]] /* roo.datConPar[1].A PARAM */);
  threadData->lastEquationSolved = 1253;
}

/*
equation index: 1254
type: SIMPLE_ASSIGN
roo.irRadExc.AConPar[1] = roo.irRadExc.datConPar[1].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1254(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1254};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[490]] /* roo.irRadExc.AConPar[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[646]] /* roo.irRadExc.datConPar[1].A PARAM */);
  threadData->lastEquationSolved = 1254;
}

/*
equation index: 1255
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].AWin = roo.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1255(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1255};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[587]] /* roo.irRadExc.datConExtWin[1].AWin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[351]] /* roo.datConExtWin[1].AWin PARAM */);
  threadData->lastEquationSolved = 1255;
}

/*
equation index: 1256
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].fFra = roo.datConExtWin[1].fFra
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1256(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1256};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[591]] /* roo.irRadExc.datConExtWin[1].fFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[355]] /* roo.datConExtWin[1].fFra PARAM */);
  threadData->lastEquationSolved = 1256;
}

/*
equation index: 1257
type: SIMPLE_ASSIGN
roo.irRadExc.AConExtWinFra[1] = roo.irRadExc.datConExtWin[1].fFra * roo.irRadExc.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1257(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1257};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[487]] /* roo.irRadExc.AConExtWinFra[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[591]] /* roo.irRadExc.datConExtWin[1].fFra PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[587]] /* roo.irRadExc.datConExtWin[1].AWin PARAM */));
  threadData->lastEquationSolved = 1257;
}

/*
equation index: 1258
type: SIMPLE_ASSIGN
roo.irRadExc.AConExtWinGla[1] = (1.0 - roo.irRadExc.datConExtWin[1].fFra) * roo.irRadExc.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1258(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1258};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[488]] /* roo.irRadExc.AConExtWinGla[1] PARAM */) = (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[591]] /* roo.irRadExc.datConExtWin[1].fFra PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[587]] /* roo.irRadExc.datConExtWin[1].AWin PARAM */));
  threadData->lastEquationSolved = 1258;
}

/*
equation index: 1259
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].AOpa = roo.datConExtWin[1].AOpa
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1259(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1259};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[586]] /* roo.irRadExc.datConExtWin[1].AOpa PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[350]] /* roo.datConExtWin[1].AOpa PARAM */);
  threadData->lastEquationSolved = 1259;
}

/*
equation index: 1260
type: SIMPLE_ASSIGN
roo.irRadExc.AConExtWinOpa[1] = roo.irRadExc.datConExtWin[1].AOpa
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1260(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1260};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[489]] /* roo.irRadExc.AConExtWinOpa[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[586]] /* roo.irRadExc.datConExtWin[1].AOpa PARAM */);
  threadData->lastEquationSolved = 1260;
}

/*
equation index: 1261
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].A = roo.datConExt[1].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1261(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1261};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[562]] /* roo.irRadExc.datConExt[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[326]] /* roo.datConExt[1].A PARAM */);
  threadData->lastEquationSolved = 1261;
}

/*
equation index: 1262
type: SIMPLE_ASSIGN
roo.irRadExc.AConExt[1] = roo.irRadExc.datConExt[1].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1262(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1262};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[486]] /* roo.irRadExc.AConExt[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[562]] /* roo.irRadExc.datConExt[1].A PARAM */);
  threadData->lastEquationSolved = 1262;
}

/*
equation index: 1263
type: SIMPLE_ASSIGN
roo.irRadExc.instanceName = "ForcedConvection.roo.irRadExc"
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1263(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1263};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[42]] /* roo.irRadExc.instanceName PARAM */) = _OMC_LIT81;
  threadData->lastEquationSolved = 1263;
}

/*
equation index: 1269
type: SIMPLE_ASSIGN
roo.irRadExc.dummyCon.R = roo.irRadExc.dummyCon.material[1].R
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1269(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1269};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[667]] /* roo.irRadExc.dummyCon.R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[673]] /* roo.irRadExc.dummyCon.material[1].R PARAM */);
  threadData->lastEquationSolved = 1269;
}

/*
equation index: 1275
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[6].boundaryCondition = roo.surBou[6].boundaryCondition
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1275(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1275};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[214]] /* roo.irRadExc.surBou[6].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[321]] /* roo.surBou[6].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1275;
}

/*
equation index: 1276
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[6].name = roo.surBou[6].name
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1276(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1276};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[48]] /* roo.irRadExc.surBou[6].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[80]] /* roo.surBou[6].name PARAM */);
  threadData->lastEquationSolved = 1276;
}

/*
equation index: 1278
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[6].absSol = roo.surBou[6].absSol
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1278(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1278};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[766]] /* roo.irRadExc.surBou[6].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1266]] /* roo.surBou[6].absSol PARAM */);
  threadData->lastEquationSolved = 1278;
}

/*
equation index: 1280
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[5].boundaryCondition = roo.surBou[5].boundaryCondition
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1280(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1280};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[213]] /* roo.irRadExc.surBou[5].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[320]] /* roo.surBou[5].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1280;
}

/*
equation index: 1281
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[5].name = roo.surBou[5].name
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1281(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1281};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[47]] /* roo.irRadExc.surBou[5].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[79]] /* roo.surBou[5].name PARAM */);
  threadData->lastEquationSolved = 1281;
}

/*
equation index: 1283
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[5].absSol = roo.surBou[5].absSol
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1283(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1283};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[765]] /* roo.irRadExc.surBou[5].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1265]] /* roo.surBou[5].absSol PARAM */);
  threadData->lastEquationSolved = 1283;
}

/*
equation index: 1285
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[4].boundaryCondition = roo.surBou[4].boundaryCondition
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1285(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1285};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[212]] /* roo.irRadExc.surBou[4].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[319]] /* roo.surBou[4].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1285;
}

/*
equation index: 1286
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[4].name = roo.surBou[4].name
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1286(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1286};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[46]] /* roo.irRadExc.surBou[4].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[78]] /* roo.surBou[4].name PARAM */);
  threadData->lastEquationSolved = 1286;
}

/*
equation index: 1288
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[4].absSol = roo.surBou[4].absSol
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1288(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1288};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[764]] /* roo.irRadExc.surBou[4].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1264]] /* roo.surBou[4].absSol PARAM */);
  threadData->lastEquationSolved = 1288;
}

/*
equation index: 1290
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[3].boundaryCondition = roo.surBou[3].boundaryCondition
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1290(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1290};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[211]] /* roo.irRadExc.surBou[3].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[318]] /* roo.surBou[3].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1290;
}

/*
equation index: 1291
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[3].name = roo.surBou[3].name
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1291(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1291};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[45]] /* roo.irRadExc.surBou[3].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[77]] /* roo.surBou[3].name PARAM */);
  threadData->lastEquationSolved = 1291;
}

/*
equation index: 1293
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[3].absSol = roo.surBou[3].absSol
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1293(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1293};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[763]] /* roo.irRadExc.surBou[3].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1263]] /* roo.surBou[3].absSol PARAM */);
  threadData->lastEquationSolved = 1293;
}

/*
equation index: 1295
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[2].boundaryCondition = roo.surBou[2].boundaryCondition
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1295(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1295};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[210]] /* roo.irRadExc.surBou[2].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[317]] /* roo.surBou[2].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1295;
}

/*
equation index: 1296
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[2].name = roo.surBou[2].name
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1296(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1296};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[44]] /* roo.irRadExc.surBou[2].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[76]] /* roo.surBou[2].name PARAM */);
  threadData->lastEquationSolved = 1296;
}

/*
equation index: 1298
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[2].absSol = roo.surBou[2].absSol
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1298(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1298};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[762]] /* roo.irRadExc.surBou[2].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1262]] /* roo.surBou[2].absSol PARAM */);
  threadData->lastEquationSolved = 1298;
}

/*
equation index: 1300
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[1].boundaryCondition = roo.surBou[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1300(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1300};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[209]] /* roo.irRadExc.surBou[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[316]] /* roo.surBou[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1300;
}

/*
equation index: 1301
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[1].name = roo.surBou[1].name
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1301(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1301};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[43]] /* roo.irRadExc.surBou[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[75]] /* roo.surBou[1].name PARAM */);
  threadData->lastEquationSolved = 1301;
}

/*
equation index: 1303
type: SIMPLE_ASSIGN
roo.irRadExc.surBou[1].absSol = roo.surBou[1].absSol
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1303(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1303};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[761]] /* roo.irRadExc.surBou[1].absSol PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1261]] /* roo.surBou[1].absSol PARAM */);
  threadData->lastEquationSolved = 1303;
}

/*
equation index: 1305
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].boundaryCondition = roo.datConBou[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1305(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1305};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[172]] /* roo.irRadExc.datConBou[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[133]] /* roo.datConBou[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1305;
}

/*
equation index: 1308
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].T_b_start = roo.datConBou[1].T_b_start
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1308(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1308};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[543]] /* roo.irRadExc.datConBou[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[307]] /* roo.datConBou[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 1308;
}

/*
equation index: 1309
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].T_a_start = roo.datConBou[1].T_a_start
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1309(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1309};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[542]] /* roo.irRadExc.datConBou[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[306]] /* roo.datConBou[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 1309;
}

/*
equation index: 1313
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].azi = roo.datConBou[1].azi
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1313(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1313};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[544]] /* roo.irRadExc.datConBou[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[308]] /* roo.datConBou[1].azi PARAM */);
  threadData->lastEquationSolved = 1313;
}

/*
equation index: 1315
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].layers.roughness_a = roo.datConBou[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1315(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1315};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[177]] /* roo.irRadExc.datConBou[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[138]] /* roo.datConBou[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 1315;
}

/*
equation index: 1316
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].layers.absSol_b = roo.datConBou[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1316(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1316};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[549]] /* roo.irRadExc.datConBou[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[313]] /* roo.datConBou[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 1316;
}

/*
equation index: 1317
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].layers.absSol_a = roo.datConBou[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1317(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1317};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[548]] /* roo.irRadExc.datConBou[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[312]] /* roo.datConBou[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 1317;
}

/*
equation index: 1318
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].layers.absIR_a = roo.datConBou[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1318(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1318};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[546]] /* roo.irRadExc.datConBou[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[310]] /* roo.datConBou[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 1318;
}

/*
equation index: 1321
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].layers.material[1].LHea = roo.datConBou[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1321(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1321};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[550]] /* roo.irRadExc.datConBou[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[314]] /* roo.datConBou[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 1321;
}

/*
equation index: 1324
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].layers.material[1].nStaReal = roo.datConBou[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1324(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1324};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[557]] /* roo.irRadExc.datConBou[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[321]] /* roo.datConBou[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 1324;
}

/*
equation index: 1325
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].layers.material[1].piMat = roo.datConBou[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1325(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1325};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[558]] /* roo.irRadExc.datConBou[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[322]] /* roo.datConBou[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 1325;
}

/*
equation index: 1326
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].layers.material[1].piRef = roo.datConBou[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1326(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1326};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[559]] /* roo.irRadExc.datConBou[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[323]] /* roo.datConBou[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 1326;
}

/*
equation index: 1329
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].layers.material[1].nStaRef = roo.datConBou[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1329(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1329};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[174]] /* roo.irRadExc.datConBou[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[135]] /* roo.datConBou[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 1329;
}

/*
equation index: 1330
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].layers.material[1].R = roo.datConBou[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1330(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1330};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[551]] /* roo.irRadExc.datConBou[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[315]] /* roo.datConBou[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 1330;
}

/*
equation index: 1331
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].layers.material[1].d = roo.datConBou[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1331(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1331};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[555]] /* roo.irRadExc.datConBou[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[319]] /* roo.datConBou[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 1331;
}

/*
equation index: 1332
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].layers.material[1].c = roo.datConBou[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1332(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1332};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[554]] /* roo.irRadExc.datConBou[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[318]] /* roo.datConBou[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 1332;
}

/*
equation index: 1333
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].layers.material[1].k = roo.datConBou[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1333(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1333};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[556]] /* roo.irRadExc.datConBou[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[320]] /* roo.datConBou[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 1333;
}

/*
equation index: 1334
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].layers.material[1].x = roo.datConBou[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1334(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1334};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[560]] /* roo.irRadExc.datConBou[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[324]] /* roo.datConBou[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 1334;
}

/*
equation index: 1336
type: SIMPLE_ASSIGN
roo.irRadExc.datConBou[1].name = roo.datConBou[1].name
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1336(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1336};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[38]] /* roo.irRadExc.datConBou[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[34]] /* roo.datConBou[1].name PARAM */);
  threadData->lastEquationSolved = 1336;
}

/*
equation index: 1337
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].boundaryCondition = roo.datConPar[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1337(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1337};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[190]] /* roo.irRadExc.datConPar[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[151]] /* roo.datConPar[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1337;
}

/*
equation index: 1340
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].T_b_start = roo.datConPar[1].T_b_start
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1340(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1340};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[648]] /* roo.irRadExc.datConPar[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[412]] /* roo.datConPar[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 1340;
}

/*
equation index: 1341
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].T_a_start = roo.datConPar[1].T_a_start
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1341(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1341};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[647]] /* roo.irRadExc.datConPar[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[411]] /* roo.datConPar[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 1341;
}

/*
equation index: 1345
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].azi = roo.datConPar[1].azi
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1345(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1345};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[649]] /* roo.irRadExc.datConPar[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[413]] /* roo.datConPar[1].azi PARAM */);
  threadData->lastEquationSolved = 1345;
}

/*
equation index: 1347
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].layers.roughness_a = roo.datConPar[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1347(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1347};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[195]] /* roo.irRadExc.datConPar[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[156]] /* roo.datConPar[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 1347;
}

/*
equation index: 1348
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].layers.absSol_b = roo.datConPar[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1348(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1348};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[654]] /* roo.irRadExc.datConPar[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[418]] /* roo.datConPar[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 1348;
}

/*
equation index: 1349
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].layers.absSol_a = roo.datConPar[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1349(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1349};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[653]] /* roo.irRadExc.datConPar[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[417]] /* roo.datConPar[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 1349;
}

/*
equation index: 1352
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].layers.material[1].LHea = roo.datConPar[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1352(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1352};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[655]] /* roo.irRadExc.datConPar[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[419]] /* roo.datConPar[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 1352;
}

/*
equation index: 1355
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].layers.material[1].nStaReal = roo.datConPar[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1355(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1355};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[662]] /* roo.irRadExc.datConPar[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[426]] /* roo.datConPar[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 1355;
}

/*
equation index: 1356
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].layers.material[1].piMat = roo.datConPar[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1356(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1356};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[663]] /* roo.irRadExc.datConPar[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[427]] /* roo.datConPar[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 1356;
}

/*
equation index: 1357
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].layers.material[1].piRef = roo.datConPar[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1357(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1357};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[664]] /* roo.irRadExc.datConPar[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[428]] /* roo.datConPar[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 1357;
}

/*
equation index: 1360
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].layers.material[1].nStaRef = roo.datConPar[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1360(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1360};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[192]] /* roo.irRadExc.datConPar[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[153]] /* roo.datConPar[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 1360;
}

/*
equation index: 1361
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].layers.material[1].R = roo.datConPar[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1361(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1361};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[656]] /* roo.irRadExc.datConPar[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[420]] /* roo.datConPar[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 1361;
}

/*
equation index: 1362
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].layers.material[1].d = roo.datConPar[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1362(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1362};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[660]] /* roo.irRadExc.datConPar[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[424]] /* roo.datConPar[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 1362;
}

/*
equation index: 1363
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].layers.material[1].c = roo.datConPar[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1363(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1363};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[659]] /* roo.irRadExc.datConPar[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[423]] /* roo.datConPar[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 1363;
}

/*
equation index: 1364
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].layers.material[1].k = roo.datConPar[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1364(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1364};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[661]] /* roo.irRadExc.datConPar[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[425]] /* roo.datConPar[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 1364;
}

/*
equation index: 1365
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].layers.material[1].x = roo.datConPar[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1365(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1365};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[665]] /* roo.irRadExc.datConPar[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[429]] /* roo.datConPar[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 1365;
}

/*
equation index: 1367
type: SIMPLE_ASSIGN
roo.irRadExc.datConPar[1].name = roo.datConPar[1].name
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1367(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1367};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[41]] /* roo.irRadExc.datConPar[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[37]] /* roo.datConPar[1].name PARAM */);
  threadData->lastEquationSolved = 1367;
}

/*
equation index: 1371
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.absSolFra = roo.datConExtWin[1].glaSys.absSolFra
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1371(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1371};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[594]] /* roo.irRadExc.datConExtWin[1].glaSys.absSolFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[358]] /* roo.datConExtWin[1].glaSys.absSolFra PARAM */);
  threadData->lastEquationSolved = 1371;
}

/*
equation index: 1372
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.UFra = roo.datConExtWin[1].glaSys.UFra
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1372(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1372};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[592]] /* roo.irRadExc.datConExtWin[1].glaSys.UFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[356]] /* roo.datConExtWin[1].glaSys.UFra PARAM */);
  threadData->lastEquationSolved = 1372;
}

/*
equation index: 1373
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.shade.tauIR_b = roo.datConExtWin[1].glaSys.shade.tauIR_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1373(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1373};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[617]] /* roo.irRadExc.datConExtWin[1].glaSys.shade.tauIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[381]] /* roo.datConExtWin[1].glaSys.shade.tauIR_b PARAM */);
  threadData->lastEquationSolved = 1373;
}

/*
equation index: 1374
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.shade.tauIR_a = roo.datConExtWin[1].glaSys.shade.tauIR_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1374(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1374};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[616]] /* roo.irRadExc.datConExtWin[1].glaSys.shade.tauIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[380]] /* roo.datConExtWin[1].glaSys.shade.tauIR_a PARAM */);
  threadData->lastEquationSolved = 1374;
}

/*
equation index: 1375
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.shade.absIR_b = roo.datConExtWin[1].glaSys.shade.absIR_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1375(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1375};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[613]] /* roo.irRadExc.datConExtWin[1].glaSys.shade.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[377]] /* roo.datConExtWin[1].glaSys.shade.absIR_b PARAM */);
  threadData->lastEquationSolved = 1375;
}

/*
equation index: 1376
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.shade.rhoSol_b = roo.datConExtWin[1].glaSys.shade.rhoSol_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1376(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1376};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[615]] /* roo.irRadExc.datConExtWin[1].glaSys.shade.rhoSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[379]] /* roo.datConExtWin[1].glaSys.shade.rhoSol_b PARAM */);
  threadData->lastEquationSolved = 1376;
}

/*
equation index: 1377
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.shade.rhoSol_a = roo.datConExtWin[1].glaSys.shade.rhoSol_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1377(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1377};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[614]] /* roo.irRadExc.datConExtWin[1].glaSys.shade.rhoSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[378]] /* roo.datConExtWin[1].glaSys.shade.rhoSol_a PARAM */);
  threadData->lastEquationSolved = 1377;
}

/*
equation index: 1378
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.shade.tauSol_b = roo.datConExtWin[1].glaSys.shade.tauSol_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1378(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1378};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[619]] /* roo.irRadExc.datConExtWin[1].glaSys.shade.tauSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[383]] /* roo.datConExtWin[1].glaSys.shade.tauSol_b PARAM */);
  threadData->lastEquationSolved = 1378;
}

/*
equation index: 1379
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.shade.tauSol_a = roo.datConExtWin[1].glaSys.shade.tauSol_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1379(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1379};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[618]] /* roo.irRadExc.datConExtWin[1].glaSys.shade.tauSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[382]] /* roo.datConExtWin[1].glaSys.shade.tauSol_a PARAM */);
  threadData->lastEquationSolved = 1379;
}

/*
equation index: 1380
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.gas[1].P0 = roo.datConExtWin[1].glaSys.gas[1].P0
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1380(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1380};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[596]] /* roo.irRadExc.datConExtWin[1].glaSys.gas[1].P0 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[360]] /* roo.datConExtWin[1].glaSys.gas[1].P0 PARAM */);
  threadData->lastEquationSolved = 1380;
}

/*
equation index: 1381
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.gas[1].MM = roo.datConExtWin[1].glaSys.gas[1].MM
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1381(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1381};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[595]] /* roo.irRadExc.datConExtWin[1].glaSys.gas[1].MM PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[359]] /* roo.datConExtWin[1].glaSys.gas[1].MM PARAM */);
  threadData->lastEquationSolved = 1381;
}

/*
equation index: 1382
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.gas[1].b_c = roo.datConExtWin[1].glaSys.gas[1].b_c
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1382(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1382};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[600]] /* roo.irRadExc.datConExtWin[1].glaSys.gas[1].b_c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[364]] /* roo.datConExtWin[1].glaSys.gas[1].b_c PARAM */);
  threadData->lastEquationSolved = 1382;
}

/*
equation index: 1383
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.gas[1].a_c = roo.datConExtWin[1].glaSys.gas[1].a_c
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1383(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1383};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[597]] /* roo.irRadExc.datConExtWin[1].glaSys.gas[1].a_c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[361]] /* roo.datConExtWin[1].glaSys.gas[1].a_c PARAM */);
  threadData->lastEquationSolved = 1383;
}

/*
equation index: 1384
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.gas[1].b_mu = roo.datConExtWin[1].glaSys.gas[1].b_mu
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1384(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1384};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[602]] /* roo.irRadExc.datConExtWin[1].glaSys.gas[1].b_mu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[366]] /* roo.datConExtWin[1].glaSys.gas[1].b_mu PARAM */);
  threadData->lastEquationSolved = 1384;
}

/*
equation index: 1385
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.gas[1].a_mu = roo.datConExtWin[1].glaSys.gas[1].a_mu
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1385(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1385};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[599]] /* roo.irRadExc.datConExtWin[1].glaSys.gas[1].a_mu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[363]] /* roo.datConExtWin[1].glaSys.gas[1].a_mu PARAM */);
  threadData->lastEquationSolved = 1385;
}

/*
equation index: 1386
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.gas[1].b_k = roo.datConExtWin[1].glaSys.gas[1].b_k
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1386(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1386};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[601]] /* roo.irRadExc.datConExtWin[1].glaSys.gas[1].b_k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[365]] /* roo.datConExtWin[1].glaSys.gas[1].b_k PARAM */);
  threadData->lastEquationSolved = 1386;
}

/*
equation index: 1387
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.gas[1].a_k = roo.datConExtWin[1].glaSys.gas[1].a_k
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1387(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1387};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[598]] /* roo.irRadExc.datConExtWin[1].glaSys.gas[1].a_k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[362]] /* roo.datConExtWin[1].glaSys.gas[1].a_k PARAM */);
  threadData->lastEquationSolved = 1387;
}

/*
equation index: 1388
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.gas[1].x = roo.datConExtWin[1].glaSys.gas[1].x
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1388(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1388};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[603]] /* roo.irRadExc.datConExtWin[1].glaSys.gas[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[367]] /* roo.datConExtWin[1].glaSys.gas[1].x PARAM */);
  threadData->lastEquationSolved = 1388;
}

/*
equation index: 1389
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.glass[1].absIR_a = roo.datConExtWin[1].glaSys.glass[1].absIR_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1389(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1389};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[604]] /* roo.irRadExc.datConExtWin[1].glaSys.glass[1].absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[368]] /* roo.datConExtWin[1].glaSys.glass[1].absIR_a PARAM */);
  threadData->lastEquationSolved = 1389;
}

/*
equation index: 1390
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.glass[1].tauIR = roo.datConExtWin[1].glaSys.glass[1].tauIR
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1390(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1390};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[609]] /* roo.irRadExc.datConExtWin[1].glaSys.glass[1].tauIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[373]] /* roo.datConExtWin[1].glaSys.glass[1].tauIR PARAM */);
  threadData->lastEquationSolved = 1390;
}

/*
equation index: 1391
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.glass[1].rhoSol_b[1] = roo.datConExtWin[1].glaSys.glass[1].rhoSol_b[1]
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1391(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1391};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[608]] /* roo.irRadExc.datConExtWin[1].glaSys.glass[1].rhoSol_b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[372]] /* roo.datConExtWin[1].glaSys.glass[1].rhoSol_b[1] PARAM */);
  threadData->lastEquationSolved = 1391;
}

/*
equation index: 1392
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.glass[1].rhoSol_a[1] = roo.datConExtWin[1].glaSys.glass[1].rhoSol_a[1]
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1392(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1392};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[607]] /* roo.irRadExc.datConExtWin[1].glaSys.glass[1].rhoSol_a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[371]] /* roo.datConExtWin[1].glaSys.glass[1].rhoSol_a[1] PARAM */);
  threadData->lastEquationSolved = 1392;
}

/*
equation index: 1393
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.glass[1].tauSol[1] = roo.datConExtWin[1].glaSys.glass[1].tauSol[1]
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1393(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1393};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[610]] /* roo.irRadExc.datConExtWin[1].glaSys.glass[1].tauSol[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[374]] /* roo.datConExtWin[1].glaSys.glass[1].tauSol[1] PARAM */);
  threadData->lastEquationSolved = 1393;
}

/*
equation index: 1394
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.glass[1].k = roo.datConExtWin[1].glaSys.glass[1].k
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1394(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1394};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[606]] /* roo.irRadExc.datConExtWin[1].glaSys.glass[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[370]] /* roo.datConExtWin[1].glaSys.glass[1].k PARAM */);
  threadData->lastEquationSolved = 1394;
}

/*
equation index: 1395
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].glaSys.glass[1].x = roo.datConExtWin[1].glaSys.glass[1].x
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1395(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1395};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[611]] /* roo.irRadExc.datConExtWin[1].glaSys.glass[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[375]] /* roo.datConExtWin[1].glaSys.glass[1].x PARAM */);
  threadData->lastEquationSolved = 1395;
}

/*
equation index: 1398
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].AGla = roo.datConExtWin[1].AGla
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1398(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1398};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[585]] /* roo.irRadExc.datConExtWin[1].AGla PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[349]] /* roo.datConExtWin[1].AGla PARAM */);
  threadData->lastEquationSolved = 1398;
}

/*
equation index: 1399
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].AFra = roo.datConExtWin[1].AFra
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1399(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1399};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[584]] /* roo.irRadExc.datConExtWin[1].AFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[348]] /* roo.datConExtWin[1].AFra PARAM */);
  threadData->lastEquationSolved = 1399;
}

/*
equation index: 1401
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].sidFin.gap = roo.datConExtWin[1].sidFin.gap
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1401(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1401};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[642]] /* roo.irRadExc.datConExtWin[1].sidFin.gap PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[406]] /* roo.datConExtWin[1].sidFin.gap PARAM */);
  threadData->lastEquationSolved = 1401;
}

/*
equation index: 1403
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].sidFin.h = roo.datConExtWin[1].sidFin.h
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1403(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1403};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[643]] /* roo.irRadExc.datConExtWin[1].sidFin.h PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[407]] /* roo.datConExtWin[1].sidFin.h PARAM */);
  threadData->lastEquationSolved = 1403;
}

/*
equation index: 1405
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].ove.gap = roo.datConExtWin[1].ove.gap
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1405(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1405};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[638]] /* roo.irRadExc.datConExtWin[1].ove.gap PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[402]] /* roo.datConExtWin[1].ove.gap PARAM */);
  threadData->lastEquationSolved = 1405;
}

/*
equation index: 1407
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].ove.wR = roo.datConExtWin[1].ove.wR
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1407(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1407};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[640]] /* roo.irRadExc.datConExtWin[1].ove.wR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[404]] /* roo.datConExtWin[1].ove.wR PARAM */);
  threadData->lastEquationSolved = 1407;
}

/*
equation index: 1408
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].ove.wL = roo.datConExtWin[1].ove.wL
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1408(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1408};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[639]] /* roo.irRadExc.datConExtWin[1].ove.wL PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[403]] /* roo.datConExtWin[1].ove.wL PARAM */);
  threadData->lastEquationSolved = 1408;
}

/*
equation index: 1409
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].wWin = roo.datConExtWin[1].wWin
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1409(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1409};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[645]] /* roo.irRadExc.datConExtWin[1].wWin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[409]] /* roo.datConExtWin[1].wWin PARAM */);
  threadData->lastEquationSolved = 1409;
}

/*
equation index: 1410
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].hWin = roo.datConExtWin[1].hWin
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1410(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1410};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[620]] /* roo.irRadExc.datConExtWin[1].hWin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[384]] /* roo.datConExtWin[1].hWin PARAM */);
  threadData->lastEquationSolved = 1410;
}

/*
equation index: 1411
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].A = roo.datConExtWin[1].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1411(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1411};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[583]] /* roo.irRadExc.datConExtWin[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[347]] /* roo.datConExtWin[1].A PARAM */);
  threadData->lastEquationSolved = 1411;
}

/*
equation index: 1412
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].boundaryCondition = roo.datConExtWin[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1412(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1412};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[184]] /* roo.irRadExc.datConExtWin[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[145]] /* roo.datConExtWin[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1412;
}

/*
equation index: 1415
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].T_b_start = roo.datConExtWin[1].T_b_start
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1415(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1415};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[589]] /* roo.irRadExc.datConExtWin[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[353]] /* roo.datConExtWin[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 1415;
}

/*
equation index: 1416
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].T_a_start = roo.datConExtWin[1].T_a_start
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1416(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1416};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[588]] /* roo.irRadExc.datConExtWin[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[352]] /* roo.datConExtWin[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 1416;
}

/*
equation index: 1420
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].azi = roo.datConExtWin[1].azi
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1420(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1420};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[590]] /* roo.irRadExc.datConExtWin[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[354]] /* roo.datConExtWin[1].azi PARAM */);
  threadData->lastEquationSolved = 1420;
}

/*
equation index: 1422
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].layers.roughness_a = roo.datConExtWin[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1422(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1422};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[189]] /* roo.irRadExc.datConExtWin[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[150]] /* roo.datConExtWin[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 1422;
}

/*
equation index: 1423
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].layers.absSol_b = roo.datConExtWin[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1423(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1423};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[625]] /* roo.irRadExc.datConExtWin[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[389]] /* roo.datConExtWin[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 1423;
}

/*
equation index: 1424
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].layers.absSol_a = roo.datConExtWin[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1424(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1424};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[624]] /* roo.irRadExc.datConExtWin[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[388]] /* roo.datConExtWin[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 1424;
}

/*
equation index: 1425
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].layers.absIR_a = roo.datConExtWin[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1425(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1425};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[622]] /* roo.irRadExc.datConExtWin[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[386]] /* roo.datConExtWin[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 1425;
}

/*
equation index: 1428
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].layers.material[1].LHea = roo.datConExtWin[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1428(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1428};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[626]] /* roo.irRadExc.datConExtWin[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[390]] /* roo.datConExtWin[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 1428;
}

/*
equation index: 1431
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].layers.material[1].nStaReal = roo.datConExtWin[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1431(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1431};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[633]] /* roo.irRadExc.datConExtWin[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[397]] /* roo.datConExtWin[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 1431;
}

/*
equation index: 1432
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].layers.material[1].piMat = roo.datConExtWin[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1432(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1432};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[634]] /* roo.irRadExc.datConExtWin[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[398]] /* roo.datConExtWin[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 1432;
}

/*
equation index: 1433
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].layers.material[1].piRef = roo.datConExtWin[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1433(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1433};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[635]] /* roo.irRadExc.datConExtWin[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[399]] /* roo.datConExtWin[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 1433;
}

/*
equation index: 1436
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].layers.material[1].nStaRef = roo.datConExtWin[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1436(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1436};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[186]] /* roo.irRadExc.datConExtWin[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[147]] /* roo.datConExtWin[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 1436;
}

/*
equation index: 1437
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].layers.material[1].R = roo.datConExtWin[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1437(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1437};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[627]] /* roo.irRadExc.datConExtWin[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[391]] /* roo.datConExtWin[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 1437;
}

/*
equation index: 1438
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].layers.material[1].d = roo.datConExtWin[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1438(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1438};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[631]] /* roo.irRadExc.datConExtWin[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[395]] /* roo.datConExtWin[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 1438;
}

/*
equation index: 1439
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].layers.material[1].c = roo.datConExtWin[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1439(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1439};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[630]] /* roo.irRadExc.datConExtWin[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[394]] /* roo.datConExtWin[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 1439;
}

/*
equation index: 1440
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].layers.material[1].k = roo.datConExtWin[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1440(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1440};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[632]] /* roo.irRadExc.datConExtWin[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[396]] /* roo.datConExtWin[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 1440;
}

/*
equation index: 1441
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].layers.material[1].x = roo.datConExtWin[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1441(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1441};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[636]] /* roo.irRadExc.datConExtWin[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[400]] /* roo.datConExtWin[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 1441;
}

/*
equation index: 1443
type: SIMPLE_ASSIGN
roo.irRadExc.datConExtWin[1].name = roo.datConExtWin[1].name
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1443(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1443};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[40]] /* roo.irRadExc.datConExtWin[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[36]] /* roo.datConExtWin[1].name PARAM */);
  threadData->lastEquationSolved = 1443;
}

/*
equation index: 1444
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].boundaryCondition = roo.datConExt[1].boundaryCondition
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1444(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1444};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[178]] /* roo.irRadExc.datConExt[1].boundaryCondition PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[139]] /* roo.datConExt[1].boundaryCondition PARAM */);
  threadData->lastEquationSolved = 1444;
}

/*
equation index: 1447
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].T_b_start = roo.datConExt[1].T_b_start
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1447(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1447};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[564]] /* roo.irRadExc.datConExt[1].T_b_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[328]] /* roo.datConExt[1].T_b_start PARAM */);
  threadData->lastEquationSolved = 1447;
}

/*
equation index: 1448
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].T_a_start = roo.datConExt[1].T_a_start
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1448(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1448};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[563]] /* roo.irRadExc.datConExt[1].T_a_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[327]] /* roo.datConExt[1].T_a_start PARAM */);
  threadData->lastEquationSolved = 1448;
}

/*
equation index: 1452
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].azi = roo.datConExt[1].azi
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1452(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1452};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[565]] /* roo.irRadExc.datConExt[1].azi PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[329]] /* roo.datConExt[1].azi PARAM */);
  threadData->lastEquationSolved = 1452;
}

/*
equation index: 1454
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].layers.roughness_a = roo.datConExt[1].layers.roughness_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1454(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1454};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[183]] /* roo.irRadExc.datConExt[1].layers.roughness_a PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[144]] /* roo.datConExt[1].layers.roughness_a PARAM */);
  threadData->lastEquationSolved = 1454;
}

/*
equation index: 1455
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].layers.absSol_b = roo.datConExt[1].layers.absSol_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1455(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1455};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[570]] /* roo.irRadExc.datConExt[1].layers.absSol_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[334]] /* roo.datConExt[1].layers.absSol_b PARAM */);
  threadData->lastEquationSolved = 1455;
}

/*
equation index: 1456
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].layers.absSol_a = roo.datConExt[1].layers.absSol_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1456(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1456};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[569]] /* roo.irRadExc.datConExt[1].layers.absSol_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[333]] /* roo.datConExt[1].layers.absSol_a PARAM */);
  threadData->lastEquationSolved = 1456;
}

/*
equation index: 1457
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].layers.absIR_a = roo.datConExt[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1457(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1457};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[567]] /* roo.irRadExc.datConExt[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[331]] /* roo.datConExt[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 1457;
}

/*
equation index: 1460
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].layers.material[1].LHea = roo.datConExt[1].layers.material[1].LHea
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1460(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1460};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[571]] /* roo.irRadExc.datConExt[1].layers.material[1].LHea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[335]] /* roo.datConExt[1].layers.material[1].LHea PARAM */);
  threadData->lastEquationSolved = 1460;
}

/*
equation index: 1463
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].layers.material[1].nStaReal = roo.datConExt[1].layers.material[1].nStaReal
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1463(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1463};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[578]] /* roo.irRadExc.datConExt[1].layers.material[1].nStaReal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[342]] /* roo.datConExt[1].layers.material[1].nStaReal PARAM */);
  threadData->lastEquationSolved = 1463;
}

/*
equation index: 1464
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].layers.material[1].piMat = roo.datConExt[1].layers.material[1].piMat
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1464(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1464};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[579]] /* roo.irRadExc.datConExt[1].layers.material[1].piMat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[343]] /* roo.datConExt[1].layers.material[1].piMat PARAM */);
  threadData->lastEquationSolved = 1464;
}

/*
equation index: 1465
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].layers.material[1].piRef = roo.datConExt[1].layers.material[1].piRef
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1465(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1465};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[580]] /* roo.irRadExc.datConExt[1].layers.material[1].piRef PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[344]] /* roo.datConExt[1].layers.material[1].piRef PARAM */);
  threadData->lastEquationSolved = 1465;
}

/*
equation index: 1468
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].layers.material[1].nStaRef = roo.datConExt[1].layers.material[1].nStaRef
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1468(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1468};
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[180]] /* roo.irRadExc.datConExt[1].layers.material[1].nStaRef PARAM */) = (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[141]] /* roo.datConExt[1].layers.material[1].nStaRef PARAM */);
  threadData->lastEquationSolved = 1468;
}

/*
equation index: 1469
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].layers.material[1].R = roo.datConExt[1].layers.material[1].R
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1469(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1469};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[572]] /* roo.irRadExc.datConExt[1].layers.material[1].R PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[336]] /* roo.datConExt[1].layers.material[1].R PARAM */);
  threadData->lastEquationSolved = 1469;
}

/*
equation index: 1470
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].layers.material[1].d = roo.datConExt[1].layers.material[1].d
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1470(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1470};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[576]] /* roo.irRadExc.datConExt[1].layers.material[1].d PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[340]] /* roo.datConExt[1].layers.material[1].d PARAM */);
  threadData->lastEquationSolved = 1470;
}

/*
equation index: 1471
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].layers.material[1].c = roo.datConExt[1].layers.material[1].c
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1471(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1471};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[575]] /* roo.irRadExc.datConExt[1].layers.material[1].c PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[339]] /* roo.datConExt[1].layers.material[1].c PARAM */);
  threadData->lastEquationSolved = 1471;
}

/*
equation index: 1472
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].layers.material[1].k = roo.datConExt[1].layers.material[1].k
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1472(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1472};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[577]] /* roo.irRadExc.datConExt[1].layers.material[1].k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[341]] /* roo.datConExt[1].layers.material[1].k PARAM */);
  threadData->lastEquationSolved = 1472;
}

/*
equation index: 1473
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].layers.material[1].x = roo.datConExt[1].layers.material[1].x
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1473(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1473};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[581]] /* roo.irRadExc.datConExt[1].layers.material[1].x PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[345]] /* roo.datConExt[1].layers.material[1].x PARAM */);
  threadData->lastEquationSolved = 1473;
}

/*
equation index: 1475
type: SIMPLE_ASSIGN
roo.irRadExc.datConExt[1].name = roo.datConExt[1].name
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1475(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1475};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[39]] /* roo.irRadExc.datConExt[1].name PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[35]] /* roo.datConExt[1].name PARAM */);
  threadData->lastEquationSolved = 1475;
}

/*
equation index: 1492
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[6].A = roo.surBou[6].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1492(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1492};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[988]] /* roo.irRadGai.surBou[6].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1254]] /* roo.surBou[6].A PARAM */);
  threadData->lastEquationSolved = 1492;
}

/*
equation index: 1493
type: SIMPLE_ASSIGN
roo.irRadGai.ASurBou[6] = roo.irRadGai.surBou[6].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1493(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1493};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[797]] /* roo.irRadGai.ASurBou[6] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[988]] /* roo.irRadGai.surBou[6].A PARAM */);
  threadData->lastEquationSolved = 1493;
}

/*
equation index: 1494
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[6].absIR = roo.surBou[6].absIR
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1494(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1494};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[994]] /* roo.irRadGai.surBou[6].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1260]] /* roo.surBou[6].absIR PARAM */);
  threadData->lastEquationSolved = 1494;
}

/*
equation index: 1495
type: SIMPLE_ASSIGN
roo.irRadGai.epsSurBou[6] = roo.irRadGai.surBou[6].absIR
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1495(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1495};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[981]] /* roo.irRadGai.epsSurBou[6] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[994]] /* roo.irRadGai.surBou[6].absIR PARAM */);
  threadData->lastEquationSolved = 1495;
}

/*
equation index: 1496
type: SIMPLE_ASSIGN
roo.irRadGai.AEpsSurBou[6] = roo.irRadGai.ASurBou[6] * roo.irRadGai.epsSurBou[6]
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1496(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1496};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[791]] /* roo.irRadGai.AEpsSurBou[6] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[797]] /* roo.irRadGai.ASurBou[6] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[981]] /* roo.irRadGai.epsSurBou[6] PARAM */));
  threadData->lastEquationSolved = 1496;
}

/*
equation index: 1497
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[5].A = roo.surBou[5].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1497(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1497};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[987]] /* roo.irRadGai.surBou[5].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1253]] /* roo.surBou[5].A PARAM */);
  threadData->lastEquationSolved = 1497;
}

/*
equation index: 1498
type: SIMPLE_ASSIGN
roo.irRadGai.ASurBou[5] = roo.irRadGai.surBou[5].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1498(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1498};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[796]] /* roo.irRadGai.ASurBou[5] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[987]] /* roo.irRadGai.surBou[5].A PARAM */);
  threadData->lastEquationSolved = 1498;
}

/*
equation index: 1499
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[5].absIR = roo.surBou[5].absIR
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1499(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1499};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[993]] /* roo.irRadGai.surBou[5].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1259]] /* roo.surBou[5].absIR PARAM */);
  threadData->lastEquationSolved = 1499;
}

/*
equation index: 1500
type: SIMPLE_ASSIGN
roo.irRadGai.epsSurBou[5] = roo.irRadGai.surBou[5].absIR
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1500(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1500};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[980]] /* roo.irRadGai.epsSurBou[5] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[993]] /* roo.irRadGai.surBou[5].absIR PARAM */);
  threadData->lastEquationSolved = 1500;
}

/*
equation index: 1501
type: SIMPLE_ASSIGN
roo.irRadGai.AEpsSurBou[5] = roo.irRadGai.ASurBou[5] * roo.irRadGai.epsSurBou[5]
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1501(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1501};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[790]] /* roo.irRadGai.AEpsSurBou[5] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[796]] /* roo.irRadGai.ASurBou[5] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[980]] /* roo.irRadGai.epsSurBou[5] PARAM */));
  threadData->lastEquationSolved = 1501;
}

/*
equation index: 1502
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[4].A = roo.surBou[4].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1502(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1502};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[986]] /* roo.irRadGai.surBou[4].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1252]] /* roo.surBou[4].A PARAM */);
  threadData->lastEquationSolved = 1502;
}

/*
equation index: 1503
type: SIMPLE_ASSIGN
roo.irRadGai.ASurBou[4] = roo.irRadGai.surBou[4].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1503(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1503};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[795]] /* roo.irRadGai.ASurBou[4] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[986]] /* roo.irRadGai.surBou[4].A PARAM */);
  threadData->lastEquationSolved = 1503;
}

/*
equation index: 1504
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[4].absIR = roo.surBou[4].absIR
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1504(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1504};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[992]] /* roo.irRadGai.surBou[4].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1258]] /* roo.surBou[4].absIR PARAM */);
  threadData->lastEquationSolved = 1504;
}

/*
equation index: 1505
type: SIMPLE_ASSIGN
roo.irRadGai.epsSurBou[4] = roo.irRadGai.surBou[4].absIR
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1505(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1505};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[979]] /* roo.irRadGai.epsSurBou[4] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[992]] /* roo.irRadGai.surBou[4].absIR PARAM */);
  threadData->lastEquationSolved = 1505;
}

/*
equation index: 1506
type: SIMPLE_ASSIGN
roo.irRadGai.AEpsSurBou[4] = roo.irRadGai.ASurBou[4] * roo.irRadGai.epsSurBou[4]
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1506(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1506};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[789]] /* roo.irRadGai.AEpsSurBou[4] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[795]] /* roo.irRadGai.ASurBou[4] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[979]] /* roo.irRadGai.epsSurBou[4] PARAM */));
  threadData->lastEquationSolved = 1506;
}

/*
equation index: 1507
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[3].A = roo.surBou[3].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1507(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1507};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[985]] /* roo.irRadGai.surBou[3].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1251]] /* roo.surBou[3].A PARAM */);
  threadData->lastEquationSolved = 1507;
}

/*
equation index: 1508
type: SIMPLE_ASSIGN
roo.irRadGai.ASurBou[3] = roo.irRadGai.surBou[3].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1508(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1508};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[794]] /* roo.irRadGai.ASurBou[3] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[985]] /* roo.irRadGai.surBou[3].A PARAM */);
  threadData->lastEquationSolved = 1508;
}

/*
equation index: 1509
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[3].absIR = roo.surBou[3].absIR
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1509(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1509};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[991]] /* roo.irRadGai.surBou[3].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1257]] /* roo.surBou[3].absIR PARAM */);
  threadData->lastEquationSolved = 1509;
}

/*
equation index: 1510
type: SIMPLE_ASSIGN
roo.irRadGai.epsSurBou[3] = roo.irRadGai.surBou[3].absIR
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1510(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1510};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[978]] /* roo.irRadGai.epsSurBou[3] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[991]] /* roo.irRadGai.surBou[3].absIR PARAM */);
  threadData->lastEquationSolved = 1510;
}

/*
equation index: 1511
type: SIMPLE_ASSIGN
roo.irRadGai.AEpsSurBou[3] = roo.irRadGai.ASurBou[3] * roo.irRadGai.epsSurBou[3]
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1511(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1511};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[788]] /* roo.irRadGai.AEpsSurBou[3] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[794]] /* roo.irRadGai.ASurBou[3] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[978]] /* roo.irRadGai.epsSurBou[3] PARAM */));
  threadData->lastEquationSolved = 1511;
}

/*
equation index: 1512
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[2].A = roo.surBou[2].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1512(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1512};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[984]] /* roo.irRadGai.surBou[2].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1250]] /* roo.surBou[2].A PARAM */);
  threadData->lastEquationSolved = 1512;
}

/*
equation index: 1513
type: SIMPLE_ASSIGN
roo.irRadGai.ASurBou[2] = roo.irRadGai.surBou[2].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1513(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1513};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[793]] /* roo.irRadGai.ASurBou[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[984]] /* roo.irRadGai.surBou[2].A PARAM */);
  threadData->lastEquationSolved = 1513;
}

/*
equation index: 1514
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[2].absIR = roo.surBou[2].absIR
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1514(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1514};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[990]] /* roo.irRadGai.surBou[2].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1256]] /* roo.surBou[2].absIR PARAM */);
  threadData->lastEquationSolved = 1514;
}

/*
equation index: 1515
type: SIMPLE_ASSIGN
roo.irRadGai.epsSurBou[2] = roo.irRadGai.surBou[2].absIR
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1515(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1515};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[977]] /* roo.irRadGai.epsSurBou[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[990]] /* roo.irRadGai.surBou[2].absIR PARAM */);
  threadData->lastEquationSolved = 1515;
}

/*
equation index: 1516
type: SIMPLE_ASSIGN
roo.irRadGai.AEpsSurBou[2] = roo.irRadGai.ASurBou[2] * roo.irRadGai.epsSurBou[2]
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1516(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1516};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[787]] /* roo.irRadGai.AEpsSurBou[2] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[793]] /* roo.irRadGai.ASurBou[2] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[977]] /* roo.irRadGai.epsSurBou[2] PARAM */));
  threadData->lastEquationSolved = 1516;
}

/*
equation index: 1517
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[1].A = roo.surBou[1].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1517(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1517};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[983]] /* roo.irRadGai.surBou[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1249]] /* roo.surBou[1].A PARAM */);
  threadData->lastEquationSolved = 1517;
}

/*
equation index: 1518
type: SIMPLE_ASSIGN
roo.irRadGai.ASurBou[1] = roo.irRadGai.surBou[1].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1518(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1518};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[792]] /* roo.irRadGai.ASurBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[983]] /* roo.irRadGai.surBou[1].A PARAM */);
  threadData->lastEquationSolved = 1518;
}

/*
equation index: 1519
type: SIMPLE_ASSIGN
roo.irRadGai.surBou[1].absIR = roo.surBou[1].absIR
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1519(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1519};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[989]] /* roo.irRadGai.surBou[1].absIR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1255]] /* roo.surBou[1].absIR PARAM */);
  threadData->lastEquationSolved = 1519;
}

/*
equation index: 1520
type: SIMPLE_ASSIGN
roo.irRadGai.epsSurBou[1] = roo.irRadGai.surBou[1].absIR
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1520(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1520};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[976]] /* roo.irRadGai.epsSurBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[989]] /* roo.irRadGai.surBou[1].absIR PARAM */);
  threadData->lastEquationSolved = 1520;
}

/*
equation index: 1521
type: SIMPLE_ASSIGN
roo.irRadGai.AEpsSurBou[1] = roo.irRadGai.ASurBou[1] * roo.irRadGai.epsSurBou[1]
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1521(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1521};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[786]] /* roo.irRadGai.AEpsSurBou[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[792]] /* roo.irRadGai.ASurBou[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[976]] /* roo.irRadGai.epsSurBou[1] PARAM */));
  threadData->lastEquationSolved = 1521;
}

/*
equation index: 1522
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].A = roo.datConBou[1].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1522(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1522};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[798]] /* roo.irRadGai.datConBou[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[305]] /* roo.datConBou[1].A PARAM */);
  threadData->lastEquationSolved = 1522;
}

/*
equation index: 1523
type: SIMPLE_ASSIGN
roo.irRadGai.AConBou[1] = roo.irRadGai.datConBou[1].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1523(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1523};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[774]] /* roo.irRadGai.AConBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[798]] /* roo.irRadGai.datConBou[1].A PARAM */);
  threadData->lastEquationSolved = 1523;
}

/*
equation index: 1524
type: SIMPLE_ASSIGN
roo.irRadGai.datConBou[1].layers.absIR_b = roo.datConBou[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1524(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1524};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[804]] /* roo.irRadGai.datConBou[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[311]] /* roo.datConBou[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 1524;
}

/*
equation index: 1525
type: SIMPLE_ASSIGN
roo.irRadGai.epsConBou[1] = roo.irRadGai.datConBou[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1525(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1525};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[968]] /* roo.irRadGai.epsConBou[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[804]] /* roo.irRadGai.datConBou[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 1525;
}

/*
equation index: 1526
type: SIMPLE_ASSIGN
roo.irRadGai.AEpsConBou[1] = roo.irRadGai.AConBou[1] * roo.irRadGai.epsConBou[1]
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1526(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1526};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[780]] /* roo.irRadGai.AEpsConBou[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[774]] /* roo.irRadGai.AConBou[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[968]] /* roo.irRadGai.epsConBou[1] PARAM */));
  threadData->lastEquationSolved = 1526;
}

/*
equation index: 1527
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].A = roo.datConPar[1].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1527(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1527};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[903]] /* roo.irRadGai.datConPar[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[410]] /* roo.datConPar[1].A PARAM */);
  threadData->lastEquationSolved = 1527;
}

/*
equation index: 1528
type: SIMPLE_ASSIGN
roo.irRadGai.AConPar[1] = roo.irRadGai.datConPar[1].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1528(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1528};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[779]] /* roo.irRadGai.AConPar[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[903]] /* roo.irRadGai.datConPar[1].A PARAM */);
  threadData->lastEquationSolved = 1528;
}

/*
equation index: 1529
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].layers.absIR_b = roo.datConPar[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1529(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1529};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[909]] /* roo.irRadGai.datConPar[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[416]] /* roo.datConPar[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 1529;
}

/*
equation index: 1530
type: SIMPLE_ASSIGN
roo.irRadGai.epsConPar_b[1] = roo.irRadGai.datConPar[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1530(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1530};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[975]] /* roo.irRadGai.epsConPar_b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[909]] /* roo.irRadGai.datConPar[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 1530;
}

/*
equation index: 1531
type: SIMPLE_ASSIGN
roo.irRadGai.AEpsConPar_b[1] = roo.irRadGai.AConPar[1] * roo.irRadGai.epsConPar_b[1]
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1531(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1531};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[785]] /* roo.irRadGai.AEpsConPar_b[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[779]] /* roo.irRadGai.AConPar[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[975]] /* roo.irRadGai.epsConPar_b[1] PARAM */));
  threadData->lastEquationSolved = 1531;
}

/*
equation index: 1532
type: SIMPLE_ASSIGN
roo.irRadGai.datConPar[1].layers.absIR_a = roo.datConPar[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1532(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1532};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[908]] /* roo.irRadGai.datConPar[1].layers.absIR_a PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[415]] /* roo.datConPar[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 1532;
}

/*
equation index: 1533
type: SIMPLE_ASSIGN
roo.irRadGai.epsConPar_a[1] = roo.irRadGai.datConPar[1].layers.absIR_a
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1533(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1533};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[974]] /* roo.irRadGai.epsConPar_a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[908]] /* roo.irRadGai.datConPar[1].layers.absIR_a PARAM */);
  threadData->lastEquationSolved = 1533;
}

/*
equation index: 1534
type: SIMPLE_ASSIGN
roo.irRadGai.AEpsConPar_a[1] = roo.irRadGai.AConPar[1] * roo.irRadGai.epsConPar_a[1]
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1534(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1534};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[784]] /* roo.irRadGai.AEpsConPar_a[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[779]] /* roo.irRadGai.AConPar[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[974]] /* roo.irRadGai.epsConPar_a[1] PARAM */));
  threadData->lastEquationSolved = 1534;
}

/*
equation index: 1535
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].AWin = roo.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1535(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1535};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[844]] /* roo.irRadGai.datConExtWin[1].AWin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[351]] /* roo.datConExtWin[1].AWin PARAM */);
  threadData->lastEquationSolved = 1535;
}

/*
equation index: 1536
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].fFra = roo.datConExtWin[1].fFra
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1536(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1536};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[848]] /* roo.irRadGai.datConExtWin[1].fFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[355]] /* roo.datConExtWin[1].fFra PARAM */);
  threadData->lastEquationSolved = 1536;
}

/*
equation index: 1537
type: SIMPLE_ASSIGN
roo.irRadGai.AConExtWinFra[1] = roo.irRadGai.datConExtWin[1].fFra * roo.irRadGai.datConExtWin[1].AWin
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1537(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1537};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[776]] /* roo.irRadGai.AConExtWinFra[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[848]] /* roo.irRadGai.datConExtWin[1].fFra PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[844]] /* roo.irRadGai.datConExtWin[1].AWin PARAM */));
  threadData->lastEquationSolved = 1537;
}

/*
equation index: 1538
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].glaSys.absIRFra = roo.datConExtWin[1].glaSys.absIRFra
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1538(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1538};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[850]] /* roo.irRadGai.datConExtWin[1].glaSys.absIRFra PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[357]] /* roo.datConExtWin[1].glaSys.absIRFra PARAM */);
  threadData->lastEquationSolved = 1538;
}

/*
equation index: 1539
type: SIMPLE_ASSIGN
roo.irRadGai.epsConExtWinFra[1] = roo.irRadGai.datConExtWin[1].glaSys.absIRFra
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1539(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1539};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[970]] /* roo.irRadGai.epsConExtWinFra[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[850]] /* roo.irRadGai.datConExtWin[1].glaSys.absIRFra PARAM */);
  threadData->lastEquationSolved = 1539;
}

/*
equation index: 1540
type: SIMPLE_ASSIGN
roo.irRadGai.AEpsConExtWinFra[1] = roo.irRadGai.AConExtWinFra[1] * roo.irRadGai.epsConExtWinFra[1]
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1540(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1540};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[782]] /* roo.irRadGai.AEpsConExtWinFra[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[776]] /* roo.irRadGai.AConExtWinFra[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[970]] /* roo.irRadGai.epsConExtWinFra[1] PARAM */));
  threadData->lastEquationSolved = 1540;
}

/*
equation index: 1541
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].AOpa = roo.datConExtWin[1].AOpa
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1541(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1541};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[843]] /* roo.irRadGai.datConExtWin[1].AOpa PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[350]] /* roo.datConExtWin[1].AOpa PARAM */);
  threadData->lastEquationSolved = 1541;
}

/*
equation index: 1542
type: SIMPLE_ASSIGN
roo.irRadGai.AConExtWinOpa[1] = roo.irRadGai.datConExtWin[1].AOpa
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1542(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1542};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[778]] /* roo.irRadGai.AConExtWinOpa[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[843]] /* roo.irRadGai.datConExtWin[1].AOpa PARAM */);
  threadData->lastEquationSolved = 1542;
}

/*
equation index: 1543
type: SIMPLE_ASSIGN
roo.irRadGai.datConExtWin[1].layers.absIR_b = roo.datConExtWin[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1543(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1543};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[880]] /* roo.irRadGai.datConExtWin[1].layers.absIR_b PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[387]] /* roo.datConExtWin[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 1543;
}

/*
equation index: 1544
type: SIMPLE_ASSIGN
roo.irRadGai.epsConExtWinOpa[1] = roo.irRadGai.datConExtWin[1].layers.absIR_b
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1544(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1544};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[971]] /* roo.irRadGai.epsConExtWinOpa[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[880]] /* roo.irRadGai.datConExtWin[1].layers.absIR_b PARAM */);
  threadData->lastEquationSolved = 1544;
}

/*
equation index: 1545
type: SIMPLE_ASSIGN
roo.irRadGai.AEpsConExtWinOpa[1] = roo.irRadGai.AConExtWinOpa[1] * roo.irRadGai.epsConExtWinOpa[1]
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1545(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1545};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[783]] /* roo.irRadGai.AEpsConExtWinOpa[1] PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[778]] /* roo.irRadGai.AConExtWinOpa[1] PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[971]] /* roo.irRadGai.epsConExtWinOpa[1] PARAM */));
  threadData->lastEquationSolved = 1545;
}

/*
equation index: 1546
type: SIMPLE_ASSIGN
roo.irRadGai.datConExt[1].A = roo.datConExt[1].A
*/
OMC_DISABLE_OPT
static void ForcedConvection_30s_eqFunction_1546(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1546};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[819]] /* roo.irRadGai.datConExt[1].A PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[326]] /* roo.datConExt[1].A PARAM */);
  threadData->lastEquationSolved = 1546;
}
OMC_DISABLE_OPT
void ForcedConvection_30s_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[468])(DATA*, threadData_t*) = {
    ForcedConvection_30s_eqFunction_746,
    ForcedConvection_30s_eqFunction_747,
    ForcedConvection_30s_eqFunction_748,
    ForcedConvection_30s_eqFunction_749,
    ForcedConvection_30s_eqFunction_750,
    ForcedConvection_30s_eqFunction_751,
    ForcedConvection_30s_eqFunction_753,
    ForcedConvection_30s_eqFunction_754,
    ForcedConvection_30s_eqFunction_756,
    ForcedConvection_30s_eqFunction_779,
    ForcedConvection_30s_eqFunction_780,
    ForcedConvection_30s_eqFunction_781,
    ForcedConvection_30s_eqFunction_782,
    ForcedConvection_30s_eqFunction_783,
    ForcedConvection_30s_eqFunction_784,
    ForcedConvection_30s_eqFunction_791,
    ForcedConvection_30s_eqFunction_794,
    ForcedConvection_30s_eqFunction_795,
    ForcedConvection_30s_eqFunction_796,
    ForcedConvection_30s_eqFunction_797,
    ForcedConvection_30s_eqFunction_808,
    ForcedConvection_30s_eqFunction_810,
    ForcedConvection_30s_eqFunction_812,
    ForcedConvection_30s_eqFunction_814,
    ForcedConvection_30s_eqFunction_816,
    ForcedConvection_30s_eqFunction_818,
    ForcedConvection_30s_eqFunction_820,
    ForcedConvection_30s_eqFunction_822,
    ForcedConvection_30s_eqFunction_824,
    ForcedConvection_30s_eqFunction_826,
    ForcedConvection_30s_eqFunction_828,
    ForcedConvection_30s_eqFunction_830,
    ForcedConvection_30s_eqFunction_831,
    ForcedConvection_30s_eqFunction_861,
    ForcedConvection_30s_eqFunction_864,
    ForcedConvection_30s_eqFunction_884,
    ForcedConvection_30s_eqFunction_885,
    ForcedConvection_30s_eqFunction_886,
    ForcedConvection_30s_eqFunction_891,
    ForcedConvection_30s_eqFunction_907,
    ForcedConvection_30s_eqFunction_908,
    ForcedConvection_30s_eqFunction_910,
    ForcedConvection_30s_eqFunction_911,
    ForcedConvection_30s_eqFunction_912,
    ForcedConvection_30s_eqFunction_913,
    ForcedConvection_30s_eqFunction_914,
    ForcedConvection_30s_eqFunction_915,
    ForcedConvection_30s_eqFunction_916,
    ForcedConvection_30s_eqFunction_917,
    ForcedConvection_30s_eqFunction_918,
    ForcedConvection_30s_eqFunction_923,
    ForcedConvection_30s_eqFunction_924,
    ForcedConvection_30s_eqFunction_925,
    ForcedConvection_30s_eqFunction_926,
    ForcedConvection_30s_eqFunction_927,
    ForcedConvection_30s_eqFunction_928,
    ForcedConvection_30s_eqFunction_929,
    ForcedConvection_30s_eqFunction_930,
    ForcedConvection_30s_eqFunction_931,
    ForcedConvection_30s_eqFunction_932,
    ForcedConvection_30s_eqFunction_933,
    ForcedConvection_30s_eqFunction_934,
    ForcedConvection_30s_eqFunction_935,
    ForcedConvection_30s_eqFunction_936,
    ForcedConvection_30s_eqFunction_937,
    ForcedConvection_30s_eqFunction_938,
    ForcedConvection_30s_eqFunction_939,
    ForcedConvection_30s_eqFunction_940,
    ForcedConvection_30s_eqFunction_941,
    ForcedConvection_30s_eqFunction_942,
    ForcedConvection_30s_eqFunction_943,
    ForcedConvection_30s_eqFunction_944,
    ForcedConvection_30s_eqFunction_945,
    ForcedConvection_30s_eqFunction_946,
    ForcedConvection_30s_eqFunction_947,
    ForcedConvection_30s_eqFunction_948,
    ForcedConvection_30s_eqFunction_949,
    ForcedConvection_30s_eqFunction_950,
    ForcedConvection_30s_eqFunction_951,
    ForcedConvection_30s_eqFunction_952,
    ForcedConvection_30s_eqFunction_953,
    ForcedConvection_30s_eqFunction_954,
    ForcedConvection_30s_eqFunction_955,
    ForcedConvection_30s_eqFunction_956,
    ForcedConvection_30s_eqFunction_957,
    ForcedConvection_30s_eqFunction_958,
    ForcedConvection_30s_eqFunction_959,
    ForcedConvection_30s_eqFunction_960,
    ForcedConvection_30s_eqFunction_961,
    ForcedConvection_30s_eqFunction_962,
    ForcedConvection_30s_eqFunction_963,
    ForcedConvection_30s_eqFunction_964,
    ForcedConvection_30s_eqFunction_965,
    ForcedConvection_30s_eqFunction_966,
    ForcedConvection_30s_eqFunction_967,
    ForcedConvection_30s_eqFunction_968,
    ForcedConvection_30s_eqFunction_969,
    ForcedConvection_30s_eqFunction_970,
    ForcedConvection_30s_eqFunction_971,
    ForcedConvection_30s_eqFunction_972,
    ForcedConvection_30s_eqFunction_973,
    ForcedConvection_30s_eqFunction_974,
    ForcedConvection_30s_eqFunction_980,
    ForcedConvection_30s_eqFunction_986,
    ForcedConvection_30s_eqFunction_987,
    ForcedConvection_30s_eqFunction_989,
    ForcedConvection_30s_eqFunction_991,
    ForcedConvection_30s_eqFunction_992,
    ForcedConvection_30s_eqFunction_994,
    ForcedConvection_30s_eqFunction_996,
    ForcedConvection_30s_eqFunction_997,
    ForcedConvection_30s_eqFunction_999,
    ForcedConvection_30s_eqFunction_1001,
    ForcedConvection_30s_eqFunction_1002,
    ForcedConvection_30s_eqFunction_1004,
    ForcedConvection_30s_eqFunction_1006,
    ForcedConvection_30s_eqFunction_1007,
    ForcedConvection_30s_eqFunction_1009,
    ForcedConvection_30s_eqFunction_1011,
    ForcedConvection_30s_eqFunction_1012,
    ForcedConvection_30s_eqFunction_1014,
    ForcedConvection_30s_eqFunction_1016,
    ForcedConvection_30s_eqFunction_1019,
    ForcedConvection_30s_eqFunction_1020,
    ForcedConvection_30s_eqFunction_1024,
    ForcedConvection_30s_eqFunction_1026,
    ForcedConvection_30s_eqFunction_1027,
    ForcedConvection_30s_eqFunction_1028,
    ForcedConvection_30s_eqFunction_1029,
    ForcedConvection_30s_eqFunction_1032,
    ForcedConvection_30s_eqFunction_1035,
    ForcedConvection_30s_eqFunction_1036,
    ForcedConvection_30s_eqFunction_1037,
    ForcedConvection_30s_eqFunction_1040,
    ForcedConvection_30s_eqFunction_1041,
    ForcedConvection_30s_eqFunction_1042,
    ForcedConvection_30s_eqFunction_1043,
    ForcedConvection_30s_eqFunction_1044,
    ForcedConvection_30s_eqFunction_1045,
    ForcedConvection_30s_eqFunction_1047,
    ForcedConvection_30s_eqFunction_1048,
    ForcedConvection_30s_eqFunction_1051,
    ForcedConvection_30s_eqFunction_1052,
    ForcedConvection_30s_eqFunction_1056,
    ForcedConvection_30s_eqFunction_1058,
    ForcedConvection_30s_eqFunction_1059,
    ForcedConvection_30s_eqFunction_1060,
    ForcedConvection_30s_eqFunction_1063,
    ForcedConvection_30s_eqFunction_1066,
    ForcedConvection_30s_eqFunction_1067,
    ForcedConvection_30s_eqFunction_1068,
    ForcedConvection_30s_eqFunction_1071,
    ForcedConvection_30s_eqFunction_1072,
    ForcedConvection_30s_eqFunction_1073,
    ForcedConvection_30s_eqFunction_1074,
    ForcedConvection_30s_eqFunction_1075,
    ForcedConvection_30s_eqFunction_1076,
    ForcedConvection_30s_eqFunction_1078,
    ForcedConvection_30s_eqFunction_1082,
    ForcedConvection_30s_eqFunction_1083,
    ForcedConvection_30s_eqFunction_1084,
    ForcedConvection_30s_eqFunction_1085,
    ForcedConvection_30s_eqFunction_1086,
    ForcedConvection_30s_eqFunction_1087,
    ForcedConvection_30s_eqFunction_1088,
    ForcedConvection_30s_eqFunction_1089,
    ForcedConvection_30s_eqFunction_1090,
    ForcedConvection_30s_eqFunction_1091,
    ForcedConvection_30s_eqFunction_1092,
    ForcedConvection_30s_eqFunction_1093,
    ForcedConvection_30s_eqFunction_1094,
    ForcedConvection_30s_eqFunction_1095,
    ForcedConvection_30s_eqFunction_1096,
    ForcedConvection_30s_eqFunction_1097,
    ForcedConvection_30s_eqFunction_1098,
    ForcedConvection_30s_eqFunction_1099,
    ForcedConvection_30s_eqFunction_1100,
    ForcedConvection_30s_eqFunction_1101,
    ForcedConvection_30s_eqFunction_1102,
    ForcedConvection_30s_eqFunction_1103,
    ForcedConvection_30s_eqFunction_1104,
    ForcedConvection_30s_eqFunction_1105,
    ForcedConvection_30s_eqFunction_1106,
    ForcedConvection_30s_eqFunction_1109,
    ForcedConvection_30s_eqFunction_1111,
    ForcedConvection_30s_eqFunction_1113,
    ForcedConvection_30s_eqFunction_1115,
    ForcedConvection_30s_eqFunction_1117,
    ForcedConvection_30s_eqFunction_1118,
    ForcedConvection_30s_eqFunction_1119,
    ForcedConvection_30s_eqFunction_1120,
    ForcedConvection_30s_eqFunction_1121,
    ForcedConvection_30s_eqFunction_1122,
    ForcedConvection_30s_eqFunction_1125,
    ForcedConvection_30s_eqFunction_1126,
    ForcedConvection_30s_eqFunction_1130,
    ForcedConvection_30s_eqFunction_1132,
    ForcedConvection_30s_eqFunction_1133,
    ForcedConvection_30s_eqFunction_1134,
    ForcedConvection_30s_eqFunction_1135,
    ForcedConvection_30s_eqFunction_1138,
    ForcedConvection_30s_eqFunction_1141,
    ForcedConvection_30s_eqFunction_1142,
    ForcedConvection_30s_eqFunction_1143,
    ForcedConvection_30s_eqFunction_1146,
    ForcedConvection_30s_eqFunction_1147,
    ForcedConvection_30s_eqFunction_1148,
    ForcedConvection_30s_eqFunction_1149,
    ForcedConvection_30s_eqFunction_1150,
    ForcedConvection_30s_eqFunction_1151,
    ForcedConvection_30s_eqFunction_1153,
    ForcedConvection_30s_eqFunction_1154,
    ForcedConvection_30s_eqFunction_1157,
    ForcedConvection_30s_eqFunction_1158,
    ForcedConvection_30s_eqFunction_1162,
    ForcedConvection_30s_eqFunction_1164,
    ForcedConvection_30s_eqFunction_1165,
    ForcedConvection_30s_eqFunction_1166,
    ForcedConvection_30s_eqFunction_1167,
    ForcedConvection_30s_eqFunction_1170,
    ForcedConvection_30s_eqFunction_1173,
    ForcedConvection_30s_eqFunction_1174,
    ForcedConvection_30s_eqFunction_1175,
    ForcedConvection_30s_eqFunction_1178,
    ForcedConvection_30s_eqFunction_1179,
    ForcedConvection_30s_eqFunction_1180,
    ForcedConvection_30s_eqFunction_1181,
    ForcedConvection_30s_eqFunction_1182,
    ForcedConvection_30s_eqFunction_1183,
    ForcedConvection_30s_eqFunction_1185,
    ForcedConvection_30s_eqFunction_1202,
    ForcedConvection_30s_eqFunction_1211,
    ForcedConvection_30s_eqFunction_1212,
    ForcedConvection_30s_eqFunction_1213,
    ForcedConvection_30s_eqFunction_1214,
    ForcedConvection_30s_eqFunction_1215,
    ForcedConvection_30s_eqFunction_1216,
    ForcedConvection_30s_eqFunction_1217,
    ForcedConvection_30s_eqFunction_1218,
    ForcedConvection_30s_eqFunction_1219,
    ForcedConvection_30s_eqFunction_1220,
    ForcedConvection_30s_eqFunction_1221,
    ForcedConvection_30s_eqFunction_1222,
    ForcedConvection_30s_eqFunction_1223,
    ForcedConvection_30s_eqFunction_1224,
    ForcedConvection_30s_eqFunction_1225,
    ForcedConvection_30s_eqFunction_1226,
    ForcedConvection_30s_eqFunction_1227,
    ForcedConvection_30s_eqFunction_1228,
    ForcedConvection_30s_eqFunction_1229,
    ForcedConvection_30s_eqFunction_1230,
    ForcedConvection_30s_eqFunction_1231,
    ForcedConvection_30s_eqFunction_1232,
    ForcedConvection_30s_eqFunction_1233,
    ForcedConvection_30s_eqFunction_1234,
    ForcedConvection_30s_eqFunction_1235,
    ForcedConvection_30s_eqFunction_1236,
    ForcedConvection_30s_eqFunction_1237,
    ForcedConvection_30s_eqFunction_1238,
    ForcedConvection_30s_eqFunction_1239,
    ForcedConvection_30s_eqFunction_1240,
    ForcedConvection_30s_eqFunction_1241,
    ForcedConvection_30s_eqFunction_1242,
    ForcedConvection_30s_eqFunction_1243,
    ForcedConvection_30s_eqFunction_1244,
    ForcedConvection_30s_eqFunction_1245,
    ForcedConvection_30s_eqFunction_1246,
    ForcedConvection_30s_eqFunction_1247,
    ForcedConvection_30s_eqFunction_1248,
    ForcedConvection_30s_eqFunction_1249,
    ForcedConvection_30s_eqFunction_1250,
    ForcedConvection_30s_eqFunction_1251,
    ForcedConvection_30s_eqFunction_1252,
    ForcedConvection_30s_eqFunction_1253,
    ForcedConvection_30s_eqFunction_1254,
    ForcedConvection_30s_eqFunction_1255,
    ForcedConvection_30s_eqFunction_1256,
    ForcedConvection_30s_eqFunction_1257,
    ForcedConvection_30s_eqFunction_1258,
    ForcedConvection_30s_eqFunction_1259,
    ForcedConvection_30s_eqFunction_1260,
    ForcedConvection_30s_eqFunction_1261,
    ForcedConvection_30s_eqFunction_1262,
    ForcedConvection_30s_eqFunction_1263,
    ForcedConvection_30s_eqFunction_1269,
    ForcedConvection_30s_eqFunction_1275,
    ForcedConvection_30s_eqFunction_1276,
    ForcedConvection_30s_eqFunction_1278,
    ForcedConvection_30s_eqFunction_1280,
    ForcedConvection_30s_eqFunction_1281,
    ForcedConvection_30s_eqFunction_1283,
    ForcedConvection_30s_eqFunction_1285,
    ForcedConvection_30s_eqFunction_1286,
    ForcedConvection_30s_eqFunction_1288,
    ForcedConvection_30s_eqFunction_1290,
    ForcedConvection_30s_eqFunction_1291,
    ForcedConvection_30s_eqFunction_1293,
    ForcedConvection_30s_eqFunction_1295,
    ForcedConvection_30s_eqFunction_1296,
    ForcedConvection_30s_eqFunction_1298,
    ForcedConvection_30s_eqFunction_1300,
    ForcedConvection_30s_eqFunction_1301,
    ForcedConvection_30s_eqFunction_1303,
    ForcedConvection_30s_eqFunction_1305,
    ForcedConvection_30s_eqFunction_1308,
    ForcedConvection_30s_eqFunction_1309,
    ForcedConvection_30s_eqFunction_1313,
    ForcedConvection_30s_eqFunction_1315,
    ForcedConvection_30s_eqFunction_1316,
    ForcedConvection_30s_eqFunction_1317,
    ForcedConvection_30s_eqFunction_1318,
    ForcedConvection_30s_eqFunction_1321,
    ForcedConvection_30s_eqFunction_1324,
    ForcedConvection_30s_eqFunction_1325,
    ForcedConvection_30s_eqFunction_1326,
    ForcedConvection_30s_eqFunction_1329,
    ForcedConvection_30s_eqFunction_1330,
    ForcedConvection_30s_eqFunction_1331,
    ForcedConvection_30s_eqFunction_1332,
    ForcedConvection_30s_eqFunction_1333,
    ForcedConvection_30s_eqFunction_1334,
    ForcedConvection_30s_eqFunction_1336,
    ForcedConvection_30s_eqFunction_1337,
    ForcedConvection_30s_eqFunction_1340,
    ForcedConvection_30s_eqFunction_1341,
    ForcedConvection_30s_eqFunction_1345,
    ForcedConvection_30s_eqFunction_1347,
    ForcedConvection_30s_eqFunction_1348,
    ForcedConvection_30s_eqFunction_1349,
    ForcedConvection_30s_eqFunction_1352,
    ForcedConvection_30s_eqFunction_1355,
    ForcedConvection_30s_eqFunction_1356,
    ForcedConvection_30s_eqFunction_1357,
    ForcedConvection_30s_eqFunction_1360,
    ForcedConvection_30s_eqFunction_1361,
    ForcedConvection_30s_eqFunction_1362,
    ForcedConvection_30s_eqFunction_1363,
    ForcedConvection_30s_eqFunction_1364,
    ForcedConvection_30s_eqFunction_1365,
    ForcedConvection_30s_eqFunction_1367,
    ForcedConvection_30s_eqFunction_1371,
    ForcedConvection_30s_eqFunction_1372,
    ForcedConvection_30s_eqFunction_1373,
    ForcedConvection_30s_eqFunction_1374,
    ForcedConvection_30s_eqFunction_1375,
    ForcedConvection_30s_eqFunction_1376,
    ForcedConvection_30s_eqFunction_1377,
    ForcedConvection_30s_eqFunction_1378,
    ForcedConvection_30s_eqFunction_1379,
    ForcedConvection_30s_eqFunction_1380,
    ForcedConvection_30s_eqFunction_1381,
    ForcedConvection_30s_eqFunction_1382,
    ForcedConvection_30s_eqFunction_1383,
    ForcedConvection_30s_eqFunction_1384,
    ForcedConvection_30s_eqFunction_1385,
    ForcedConvection_30s_eqFunction_1386,
    ForcedConvection_30s_eqFunction_1387,
    ForcedConvection_30s_eqFunction_1388,
    ForcedConvection_30s_eqFunction_1389,
    ForcedConvection_30s_eqFunction_1390,
    ForcedConvection_30s_eqFunction_1391,
    ForcedConvection_30s_eqFunction_1392,
    ForcedConvection_30s_eqFunction_1393,
    ForcedConvection_30s_eqFunction_1394,
    ForcedConvection_30s_eqFunction_1395,
    ForcedConvection_30s_eqFunction_1398,
    ForcedConvection_30s_eqFunction_1399,
    ForcedConvection_30s_eqFunction_1401,
    ForcedConvection_30s_eqFunction_1403,
    ForcedConvection_30s_eqFunction_1405,
    ForcedConvection_30s_eqFunction_1407,
    ForcedConvection_30s_eqFunction_1408,
    ForcedConvection_30s_eqFunction_1409,
    ForcedConvection_30s_eqFunction_1410,
    ForcedConvection_30s_eqFunction_1411,
    ForcedConvection_30s_eqFunction_1412,
    ForcedConvection_30s_eqFunction_1415,
    ForcedConvection_30s_eqFunction_1416,
    ForcedConvection_30s_eqFunction_1420,
    ForcedConvection_30s_eqFunction_1422,
    ForcedConvection_30s_eqFunction_1423,
    ForcedConvection_30s_eqFunction_1424,
    ForcedConvection_30s_eqFunction_1425,
    ForcedConvection_30s_eqFunction_1428,
    ForcedConvection_30s_eqFunction_1431,
    ForcedConvection_30s_eqFunction_1432,
    ForcedConvection_30s_eqFunction_1433,
    ForcedConvection_30s_eqFunction_1436,
    ForcedConvection_30s_eqFunction_1437,
    ForcedConvection_30s_eqFunction_1438,
    ForcedConvection_30s_eqFunction_1439,
    ForcedConvection_30s_eqFunction_1440,
    ForcedConvection_30s_eqFunction_1441,
    ForcedConvection_30s_eqFunction_1443,
    ForcedConvection_30s_eqFunction_1444,
    ForcedConvection_30s_eqFunction_1447,
    ForcedConvection_30s_eqFunction_1448,
    ForcedConvection_30s_eqFunction_1452,
    ForcedConvection_30s_eqFunction_1454,
    ForcedConvection_30s_eqFunction_1455,
    ForcedConvection_30s_eqFunction_1456,
    ForcedConvection_30s_eqFunction_1457,
    ForcedConvection_30s_eqFunction_1460,
    ForcedConvection_30s_eqFunction_1463,
    ForcedConvection_30s_eqFunction_1464,
    ForcedConvection_30s_eqFunction_1465,
    ForcedConvection_30s_eqFunction_1468,
    ForcedConvection_30s_eqFunction_1469,
    ForcedConvection_30s_eqFunction_1470,
    ForcedConvection_30s_eqFunction_1471,
    ForcedConvection_30s_eqFunction_1472,
    ForcedConvection_30s_eqFunction_1473,
    ForcedConvection_30s_eqFunction_1475,
    ForcedConvection_30s_eqFunction_1492,
    ForcedConvection_30s_eqFunction_1493,
    ForcedConvection_30s_eqFunction_1494,
    ForcedConvection_30s_eqFunction_1495,
    ForcedConvection_30s_eqFunction_1496,
    ForcedConvection_30s_eqFunction_1497,
    ForcedConvection_30s_eqFunction_1498,
    ForcedConvection_30s_eqFunction_1499,
    ForcedConvection_30s_eqFunction_1500,
    ForcedConvection_30s_eqFunction_1501,
    ForcedConvection_30s_eqFunction_1502,
    ForcedConvection_30s_eqFunction_1503,
    ForcedConvection_30s_eqFunction_1504,
    ForcedConvection_30s_eqFunction_1505,
    ForcedConvection_30s_eqFunction_1506,
    ForcedConvection_30s_eqFunction_1507,
    ForcedConvection_30s_eqFunction_1508,
    ForcedConvection_30s_eqFunction_1509,
    ForcedConvection_30s_eqFunction_1510,
    ForcedConvection_30s_eqFunction_1511,
    ForcedConvection_30s_eqFunction_1512,
    ForcedConvection_30s_eqFunction_1513,
    ForcedConvection_30s_eqFunction_1514,
    ForcedConvection_30s_eqFunction_1515,
    ForcedConvection_30s_eqFunction_1516,
    ForcedConvection_30s_eqFunction_1517,
    ForcedConvection_30s_eqFunction_1518,
    ForcedConvection_30s_eqFunction_1519,
    ForcedConvection_30s_eqFunction_1520,
    ForcedConvection_30s_eqFunction_1521,
    ForcedConvection_30s_eqFunction_1522,
    ForcedConvection_30s_eqFunction_1523,
    ForcedConvection_30s_eqFunction_1524,
    ForcedConvection_30s_eqFunction_1525,
    ForcedConvection_30s_eqFunction_1526,
    ForcedConvection_30s_eqFunction_1527,
    ForcedConvection_30s_eqFunction_1528,
    ForcedConvection_30s_eqFunction_1529,
    ForcedConvection_30s_eqFunction_1530,
    ForcedConvection_30s_eqFunction_1531,
    ForcedConvection_30s_eqFunction_1532,
    ForcedConvection_30s_eqFunction_1533,
    ForcedConvection_30s_eqFunction_1534,
    ForcedConvection_30s_eqFunction_1535,
    ForcedConvection_30s_eqFunction_1536,
    ForcedConvection_30s_eqFunction_1537,
    ForcedConvection_30s_eqFunction_1538,
    ForcedConvection_30s_eqFunction_1539,
    ForcedConvection_30s_eqFunction_1540,
    ForcedConvection_30s_eqFunction_1541,
    ForcedConvection_30s_eqFunction_1542,
    ForcedConvection_30s_eqFunction_1543,
    ForcedConvection_30s_eqFunction_1544,
    ForcedConvection_30s_eqFunction_1545,
    ForcedConvection_30s_eqFunction_1546
  };
  
  for (int id = 0; id < 468; id++) {
    eqFunctions[id](data, threadData);
  }
}
#if defined(__cplusplus)
}
#endif