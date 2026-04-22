#include "s000_baseline_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 4419
type: ALGORITHM

  assert(dc.roo.radTem.datConExtWin[1].ove.wL >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.radTem.datConExtWin[1].ove.wL, has value: " + String(dc.roo.radTem.datConExtWin[1].ove.wL, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4419(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4419};
  modelica_boolean tmp1201;
  static const MMC_DEFSTRINGLIT(tmp1202,91,"Variable violating min constraint: 0.0 <= dc.roo.radTem.datConExtWin[1].ove.wL, has value: ");
  modelica_string tmp1203;
  modelica_metatype tmpMeta1204;
  static int tmp1205 = 0;
  if(!tmp1205)
  {
    tmp1201 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1299]] /* dc.roo.radTem.datConExtWin[1].ove.wL PARAM */),0.0);
    if(!tmp1201)
    {
      tmp1203 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1299]] /* dc.roo.radTem.datConExtWin[1].ove.wL PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1204 = stringAppend(MMC_REFSTRINGLIT(tmp1202),tmp1203);
      {
        const char* assert_cond = "(dc.roo.radTem.datConExtWin[1].ove.wL >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/Overhang.mo",5,3,7,57,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1204));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/Overhang.mo",5,3,7,57,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1204));
        }
      }
      tmp1205 = 1;
    }
  }
  threadData->lastEquationSolved = 4419;
}

/*
equation index: 4420
type: ALGORITHM

  assert(dc.roo.datConExtWin[1].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.datConExtWin[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, "Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.datConExtWin[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: " + String(dc.roo.datConExtWin[1].boundaryCondition, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4420(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4420};
  modelica_boolean tmp1206;
  modelica_boolean tmp1207;
  static const MMC_DEFSTRINGLIT(tmp1208,243,"Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.datConExtWin[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: ");
  modelica_string tmp1209;
  modelica_metatype tmpMeta1210;
  static int tmp1211 = 0;
  if(!tmp1211)
  {
    tmp1206 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[179]] /* dc.roo.datConExtWin[1].boundaryCondition PARAM */),1);
    tmp1207 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[179]] /* dc.roo.datConExtWin[1].boundaryCondition PARAM */),2);
    if(!(tmp1206 && tmp1207))
    {
      tmp1209 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[179]] /* dc.roo.datConExtWin[1].boundaryCondition PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1210 = stringAppend(MMC_REFSTRINGLIT(tmp1208),tmp1209);
      {
        const char* assert_cond = "(dc.roo.datConExtWin[1].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.datConExtWin[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",43,3,46,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1210));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",43,3,46,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1210));
        }
      }
      tmp1211 = 1;
    }
  }
  threadData->lastEquationSolved = 4420;
}

/*
equation index: 4421
type: ALGORITHM

  assert(dc.roo.radTem.datConExtWin[1].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.radTem.datConExtWin[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, "Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.radTem.datConExtWin[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: " + String(dc.roo.radTem.datConExtWin[1].boundaryCondition, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4421(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4421};
  modelica_boolean tmp1212;
  modelica_boolean tmp1213;
  static const MMC_DEFSTRINGLIT(tmp1214,250,"Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.radTem.datConExtWin[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: ");
  modelica_string tmp1215;
  modelica_metatype tmpMeta1216;
  static int tmp1217 = 0;
  if(!tmp1217)
  {
    tmp1212 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[322]] /* dc.roo.radTem.datConExtWin[1].boundaryCondition PARAM */),1);
    tmp1213 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[322]] /* dc.roo.radTem.datConExtWin[1].boundaryCondition PARAM */),2);
    if(!(tmp1212 && tmp1213))
    {
      tmp1215 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[322]] /* dc.roo.radTem.datConExtWin[1].boundaryCondition PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1216 = stringAppend(MMC_REFSTRINGLIT(tmp1214),tmp1215);
      {
        const char* assert_cond = "(dc.roo.radTem.datConExtWin[1].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.radTem.datConExtWin[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",43,3,46,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1216));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",43,3,46,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1216));
        }
      }
      tmp1217 = 1;
    }
  }
  threadData->lastEquationSolved = 4421;
}

/*
equation index: 4422
type: ALGORITHM

  assert(dc.roo.datConExtWin[1].T_b_start >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.datConExtWin[1].T_b_start, has value: " + String(dc.roo.datConExtWin[1].T_b_start, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4422(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4422};
  modelica_boolean tmp1218;
  static const MMC_DEFSTRINGLIT(tmp1219,87,"Variable violating min constraint: 0.0 <= dc.roo.datConExtWin[1].T_b_start, has value: ");
  modelica_string tmp1220;
  modelica_metatype tmpMeta1221;
  static int tmp1222 = 0;
  if(!tmp1222)
  {
    tmp1218 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[532]] /* dc.roo.datConExtWin[1].T_b_start PARAM */),0.0);
    if(!tmp1218)
    {
      tmp1220 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[532]] /* dc.roo.datConExtWin[1].T_b_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1221 = stringAppend(MMC_REFSTRINGLIT(tmp1219),tmp1220);
      {
        const char* assert_cond = "(dc.roo.datConExtWin[1].T_b_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",30,3,32,79,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1221));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",30,3,32,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1221));
        }
      }
      tmp1222 = 1;
    }
  }
  threadData->lastEquationSolved = 4422;
}

/*
equation index: 4423
type: ALGORITHM

  assert(dc.roo.radTem.datConExtWin[1].T_b_start >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.radTem.datConExtWin[1].T_b_start, has value: " + String(dc.roo.radTem.datConExtWin[1].T_b_start, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4423(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4423};
  modelica_boolean tmp1223;
  static const MMC_DEFSTRINGLIT(tmp1224,94,"Variable violating min constraint: 0.0 <= dc.roo.radTem.datConExtWin[1].T_b_start, has value: ");
  modelica_string tmp1225;
  modelica_metatype tmpMeta1226;
  static int tmp1227 = 0;
  if(!tmp1227)
  {
    tmp1223 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1249]] /* dc.roo.radTem.datConExtWin[1].T_b_start PARAM */),0.0);
    if(!tmp1223)
    {
      tmp1225 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1249]] /* dc.roo.radTem.datConExtWin[1].T_b_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1226 = stringAppend(MMC_REFSTRINGLIT(tmp1224),tmp1225);
      {
        const char* assert_cond = "(dc.roo.radTem.datConExtWin[1].T_b_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",30,3,32,79,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1226));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",30,3,32,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1226));
        }
      }
      tmp1227 = 1;
    }
  }
  threadData->lastEquationSolved = 4423;
}

/*
equation index: 4424
type: ALGORITHM

  assert(dc.roo.datConExtWin[1].T_a_start >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.datConExtWin[1].T_a_start, has value: " + String(dc.roo.datConExtWin[1].T_a_start, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4424(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4424};
  modelica_boolean tmp1228;
  static const MMC_DEFSTRINGLIT(tmp1229,87,"Variable violating min constraint: 0.0 <= dc.roo.datConExtWin[1].T_a_start, has value: ");
  modelica_string tmp1230;
  modelica_metatype tmpMeta1231;
  static int tmp1232 = 0;
  if(!tmp1232)
  {
    tmp1228 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[531]] /* dc.roo.datConExtWin[1].T_a_start PARAM */),0.0);
    if(!tmp1228)
    {
      tmp1230 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[531]] /* dc.roo.datConExtWin[1].T_a_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1231 = stringAppend(MMC_REFSTRINGLIT(tmp1229),tmp1230);
      {
        const char* assert_cond = "(dc.roo.datConExtWin[1].T_a_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",27,3,29,79,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1231));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",27,3,29,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1231));
        }
      }
      tmp1232 = 1;
    }
  }
  threadData->lastEquationSolved = 4424;
}

/*
equation index: 4425
type: ALGORITHM

  assert(dc.roo.radTem.datConExtWin[1].T_a_start >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.radTem.datConExtWin[1].T_a_start, has value: " + String(dc.roo.radTem.datConExtWin[1].T_a_start, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4425(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4425};
  modelica_boolean tmp1233;
  static const MMC_DEFSTRINGLIT(tmp1234,94,"Variable violating min constraint: 0.0 <= dc.roo.radTem.datConExtWin[1].T_a_start, has value: ");
  modelica_string tmp1235;
  modelica_metatype tmpMeta1236;
  static int tmp1237 = 0;
  if(!tmp1237)
  {
    tmp1233 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1248]] /* dc.roo.radTem.datConExtWin[1].T_a_start PARAM */),0.0);
    if(!tmp1233)
    {
      tmp1235 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1248]] /* dc.roo.radTem.datConExtWin[1].T_a_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1236 = stringAppend(MMC_REFSTRINGLIT(tmp1234),tmp1235);
      {
        const char* assert_cond = "(dc.roo.radTem.datConExtWin[1].T_a_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",27,3,29,79,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1236));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",27,3,29,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1236));
        }
      }
      tmp1237 = 1;
    }
  }
  threadData->lastEquationSolved = 4425;
}

/*
equation index: 4426
type: ALGORITHM

  assert(dc.roo.datConExtWin[1].layers.roughness_a >= Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough and dc.roo.datConExtWin[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth, "Variable violating min/max constraint: Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough <= dc.roo.datConExtWin[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth, has value: " + String(dc.roo.datConExtWin[1].layers.roughness_a, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4426(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4426};
  modelica_boolean tmp1238;
  modelica_boolean tmp1239;
  static const MMC_DEFSTRINGLIT(tmp1240,212,"Variable violating min/max constraint: Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough <= dc.roo.datConExtWin[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth, has value: ");
  modelica_string tmp1241;
  modelica_metatype tmpMeta1242;
  static int tmp1243 = 0;
  if(!tmp1243)
  {
    tmp1238 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[184]] /* dc.roo.datConExtWin[1].layers.roughness_a PARAM */),1);
    tmp1239 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[184]] /* dc.roo.datConExtWin[1].layers.roughness_a PARAM */),6);
    if(!(tmp1238 && tmp1239))
    {
      tmp1241 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[184]] /* dc.roo.datConExtWin[1].layers.roughness_a PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1242 = stringAppend(MMC_REFSTRINGLIT(tmp1240),tmp1241);
      {
        const char* assert_cond = "(dc.roo.datConExtWin[1].layers.roughness_a >= Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough and dc.roo.datConExtWin[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",25,4,27,35,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1242));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",25,4,27,35,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1242));
        }
      }
      tmp1243 = 1;
    }
  }
  threadData->lastEquationSolved = 4426;
}

/*
equation index: 4427
type: ALGORITHM

  assert(dc.roo.radTem.datConExtWin[1].layers.roughness_a >= Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough and dc.roo.radTem.datConExtWin[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth, "Variable violating min/max constraint: Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough <= dc.roo.radTem.datConExtWin[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth, has value: " + String(dc.roo.radTem.datConExtWin[1].layers.roughness_a, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4427(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4427};
  modelica_boolean tmp1244;
  modelica_boolean tmp1245;
  static const MMC_DEFSTRINGLIT(tmp1246,219,"Variable violating min/max constraint: Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough <= dc.roo.radTem.datConExtWin[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth, has value: ");
  modelica_string tmp1247;
  modelica_metatype tmpMeta1248;
  static int tmp1249 = 0;
  if(!tmp1249)
  {
    tmp1244 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[327]] /* dc.roo.radTem.datConExtWin[1].layers.roughness_a PARAM */),1);
    tmp1245 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[327]] /* dc.roo.radTem.datConExtWin[1].layers.roughness_a PARAM */),6);
    if(!(tmp1244 && tmp1245))
    {
      tmp1247 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[327]] /* dc.roo.radTem.datConExtWin[1].layers.roughness_a PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1248 = stringAppend(MMC_REFSTRINGLIT(tmp1246),tmp1247);
      {
        const char* assert_cond = "(dc.roo.radTem.datConExtWin[1].layers.roughness_a >= Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough and dc.roo.radTem.datConExtWin[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",25,4,27,35,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1248));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",25,4,27,35,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1248));
        }
      }
      tmp1249 = 1;
    }
  }
  threadData->lastEquationSolved = 4427;
}

/*
equation index: 4428
type: ALGORITHM

  assert(dc.roo.radTem.datConExtWin[1].layers.nSta[1] >= 1, "Variable violating min constraint: 1 <= dc.roo.radTem.datConExtWin[1].layers.nSta[1], has value: " + String(dc.roo.radTem.datConExtWin[1].layers.nSta[1], "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4428(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4428};
  modelica_boolean tmp1250;
  static const MMC_DEFSTRINGLIT(tmp1251,97,"Variable violating min constraint: 1 <= dc.roo.radTem.datConExtWin[1].layers.nSta[1], has value: ");
  modelica_string tmp1252;
  modelica_metatype tmpMeta1253;
  static int tmp1254 = 0;
  if(!tmp1254)
  {
    tmp1250 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[326]] /* dc.roo.radTem.datConExtWin[1].layers.nSta[1] PARAM */),((modelica_integer) 1));
    if(!tmp1250)
    {
      tmp1252 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[326]] /* dc.roo.radTem.datConExtWin[1].layers.nSta[1] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1253 = stringAppend(MMC_REFSTRINGLIT(tmp1251),tmp1252);
      {
        const char* assert_cond = "(dc.roo.radTem.datConExtWin[1].layers.nSta[1] >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",14,4,16,59,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1253));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",14,4,16,59,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1253));
        }
      }
      tmp1254 = 1;
    }
  }
  threadData->lastEquationSolved = 4428;
}

/*
equation index: 4429
type: ALGORITHM

  assert(dc.roo.radTem.datConExtWin[1].layers.material[1].TLiq >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.radTem.datConExtWin[1].layers.material[1].TLiq, has value: " + String(dc.roo.radTem.datConExtWin[1].layers.material[1].TLiq, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4429(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4429};
  modelica_boolean tmp1255;
  static const MMC_DEFSTRINGLIT(tmp1256,108,"Variable violating min constraint: 0.0 <= dc.roo.radTem.datConExtWin[1].layers.material[1].TLiq, has value: ");
  modelica_string tmp1257;
  modelica_metatype tmpMeta1258;
  static int tmp1259 = 0;
  if(!tmp1259)
  {
    tmp1255 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1288]] /* dc.roo.radTem.datConExtWin[1].layers.material[1].TLiq PARAM */),0.0);
    if(!tmp1255)
    {
      tmp1257 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1288]] /* dc.roo.radTem.datConExtWin[1].layers.material[1].TLiq PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1258 = stringAppend(MMC_REFSTRINGLIT(tmp1256),tmp1257);
      {
        const char* assert_cond = "(dc.roo.radTem.datConExtWin[1].layers.material[1].TLiq >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",33,5,35,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1258));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",33,5,35,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1258));
        }
      }
      tmp1259 = 1;
    }
  }
  threadData->lastEquationSolved = 4429;
}

/*
equation index: 4430
type: ALGORITHM

  assert(dc.roo.radTem.datConExtWin[1].layers.material[1].TSol >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.radTem.datConExtWin[1].layers.material[1].TSol, has value: " + String(dc.roo.radTem.datConExtWin[1].layers.material[1].TSol, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4430(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4430};
  modelica_boolean tmp1260;
  static const MMC_DEFSTRINGLIT(tmp1261,108,"Variable violating min constraint: 0.0 <= dc.roo.radTem.datConExtWin[1].layers.material[1].TSol, has value: ");
  modelica_string tmp1262;
  modelica_metatype tmpMeta1263;
  static int tmp1264 = 0;
  if(!tmp1264)
  {
    tmp1260 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1289]] /* dc.roo.radTem.datConExtWin[1].layers.material[1].TSol PARAM */),0.0);
    if(!tmp1260)
    {
      tmp1262 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1289]] /* dc.roo.radTem.datConExtWin[1].layers.material[1].TSol PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1263 = stringAppend(MMC_REFSTRINGLIT(tmp1261),tmp1262);
      {
        const char* assert_cond = "(dc.roo.radTem.datConExtWin[1].layers.material[1].TSol >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",30,5,32,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1263));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",30,5,32,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1263));
        }
      }
      tmp1264 = 1;
    }
  }
  threadData->lastEquationSolved = 4430;
}

/*
equation index: 4431
type: ALGORITHM

  assert(dc.roo.datConExtWin[1].layers.material[1].nStaReal >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.datConExtWin[1].layers.material[1].nStaReal, has value: " + String(dc.roo.datConExtWin[1].layers.material[1].nStaReal, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4431(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4431};
  modelica_boolean tmp1265;
  static const MMC_DEFSTRINGLIT(tmp1266,105,"Variable violating min constraint: 0.0 <= dc.roo.datConExtWin[1].layers.material[1].nStaReal, has value: ");
  modelica_string tmp1267;
  modelica_metatype tmpMeta1268;
  static int tmp1269 = 0;
  if(!tmp1269)
  {
    tmp1265 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[576]] /* dc.roo.datConExtWin[1].layers.material[1].nStaReal PARAM */),0.0);
    if(!tmp1265)
    {
      tmp1267 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[576]] /* dc.roo.datConExtWin[1].layers.material[1].nStaReal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1268 = stringAppend(MMC_REFSTRINGLIT(tmp1266),tmp1267);
      {
        const char* assert_cond = "(dc.roo.datConExtWin[1].layers.material[1].nStaReal >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",26,5,28,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1268));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",26,5,28,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1268));
        }
      }
      tmp1269 = 1;
    }
  }
  threadData->lastEquationSolved = 4431;
}

/*
equation index: 4432
type: ALGORITHM

  assert(dc.roo.radTem.datConExtWin[1].layers.material[1].nStaReal >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.radTem.datConExtWin[1].layers.material[1].nStaReal, has value: " + String(dc.roo.radTem.datConExtWin[1].layers.material[1].nStaReal, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4432(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4432};
  modelica_boolean tmp1270;
  static const MMC_DEFSTRINGLIT(tmp1271,112,"Variable violating min constraint: 0.0 <= dc.roo.radTem.datConExtWin[1].layers.material[1].nStaReal, has value: ");
  modelica_string tmp1272;
  modelica_metatype tmpMeta1273;
  static int tmp1274 = 0;
  if(!tmp1274)
  {
    tmp1270 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1293]] /* dc.roo.radTem.datConExtWin[1].layers.material[1].nStaReal PARAM */),0.0);
    if(!tmp1270)
    {
      tmp1272 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1293]] /* dc.roo.radTem.datConExtWin[1].layers.material[1].nStaReal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1273 = stringAppend(MMC_REFSTRINGLIT(tmp1271),tmp1272);
      {
        const char* assert_cond = "(dc.roo.radTem.datConExtWin[1].layers.material[1].nStaReal >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",26,5,28,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1273));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",26,5,28,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1273));
        }
      }
      tmp1274 = 1;
    }
  }
  threadData->lastEquationSolved = 4432;
}

/*
equation index: 4433
type: ALGORITHM

  assert(dc.roo.radTem.datConExtWin[1].layers.material[1].nSta >= 1, "Variable violating min constraint: 1 <= dc.roo.radTem.datConExtWin[1].layers.material[1].nSta, has value: " + String(dc.roo.radTem.datConExtWin[1].layers.material[1].nSta, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4433(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4433};
  modelica_boolean tmp1275;
  static const MMC_DEFSTRINGLIT(tmp1276,106,"Variable violating min constraint: 1 <= dc.roo.radTem.datConExtWin[1].layers.material[1].nSta, has value: ");
  modelica_string tmp1277;
  modelica_metatype tmpMeta1278;
  static int tmp1279 = 0;
  if(!tmp1279)
  {
    tmp1275 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[323]] /* dc.roo.radTem.datConExtWin[1].layers.material[1].nSta PARAM */),((modelica_integer) 1));
    if(!tmp1275)
    {
      tmp1277 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[323]] /* dc.roo.radTem.datConExtWin[1].layers.material[1].nSta PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1278 = stringAppend(MMC_REFSTRINGLIT(tmp1276),tmp1277);
      {
        const char* assert_cond = "(dc.roo.radTem.datConExtWin[1].layers.material[1].nSta >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",14,5,16,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1278));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",14,5,16,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1278));
        }
      }
      tmp1279 = 1;
    }
  }
  threadData->lastEquationSolved = 4433;
}

/*
equation index: 4434
type: ALGORITHM

  assert(dc.roo.datConExtWin[1].layers.material[1].nStaRef >= 0, "Variable violating min constraint: 0 <= dc.roo.datConExtWin[1].layers.material[1].nStaRef, has value: " + String(dc.roo.datConExtWin[1].layers.material[1].nStaRef, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4434(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4434};
  modelica_boolean tmp1280;
  static const MMC_DEFSTRINGLIT(tmp1281,102,"Variable violating min constraint: 0 <= dc.roo.datConExtWin[1].layers.material[1].nStaRef, has value: ");
  modelica_string tmp1282;
  modelica_metatype tmpMeta1283;
  static int tmp1284 = 0;
  if(!tmp1284)
  {
    tmp1280 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[181]] /* dc.roo.datConExtWin[1].layers.material[1].nStaRef PARAM */),((modelica_integer) 0));
    if(!tmp1280)
    {
      tmp1282 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[181]] /* dc.roo.datConExtWin[1].layers.material[1].nStaRef PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1283 = stringAppend(MMC_REFSTRINGLIT(tmp1281),tmp1282);
      {
        const char* assert_cond = "(dc.roo.datConExtWin[1].layers.material[1].nStaRef >= 0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",12,5,13,76,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1283));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",12,5,13,76,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1283));
        }
      }
      tmp1284 = 1;
    }
  }
  threadData->lastEquationSolved = 4434;
}

/*
equation index: 4435
type: ALGORITHM

  assert(dc.roo.radTem.datConExtWin[1].layers.material[1].nStaRef >= 0, "Variable violating min constraint: 0 <= dc.roo.radTem.datConExtWin[1].layers.material[1].nStaRef, has value: " + String(dc.roo.radTem.datConExtWin[1].layers.material[1].nStaRef, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4435(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4435};
  modelica_boolean tmp1285;
  static const MMC_DEFSTRINGLIT(tmp1286,109,"Variable violating min constraint: 0 <= dc.roo.radTem.datConExtWin[1].layers.material[1].nStaRef, has value: ");
  modelica_string tmp1287;
  modelica_metatype tmpMeta1288;
  static int tmp1289 = 0;
  if(!tmp1289)
  {
    tmp1285 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[324]] /* dc.roo.radTem.datConExtWin[1].layers.material[1].nStaRef PARAM */),((modelica_integer) 0));
    if(!tmp1285)
    {
      tmp1287 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[324]] /* dc.roo.radTem.datConExtWin[1].layers.material[1].nStaRef PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1288 = stringAppend(MMC_REFSTRINGLIT(tmp1286),tmp1287);
      {
        const char* assert_cond = "(dc.roo.radTem.datConExtWin[1].layers.material[1].nStaRef >= 0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",12,5,13,76,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1288));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",12,5,13,76,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1288));
        }
      }
      tmp1289 = 1;
    }
  }
  threadData->lastEquationSolved = 4435;
}

/*
equation index: 4436
type: ALGORITHM

  assert(dc.roo.datConExtWin[1].layers.material[1].d >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.datConExtWin[1].layers.material[1].d, has value: " + String(dc.roo.datConExtWin[1].layers.material[1].d, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4436(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4436};
  modelica_boolean tmp1290;
  static const MMC_DEFSTRINGLIT(tmp1291,98,"Variable violating min constraint: 0.0 <= dc.roo.datConExtWin[1].layers.material[1].d, has value: ");
  modelica_string tmp1292;
  modelica_metatype tmpMeta1293;
  static int tmp1294 = 0;
  if(!tmp1294)
  {
    tmp1290 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[574]] /* dc.roo.datConExtWin[1].layers.material[1].d PARAM */),0.0);
    if(!tmp1290)
    {
      tmp1292 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[574]] /* dc.roo.datConExtWin[1].layers.material[1].d PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1293 = stringAppend(MMC_REFSTRINGLIT(tmp1291),tmp1292);
      {
        const char* assert_cond = "(dc.roo.datConExtWin[1].layers.material[1].d >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",9,5,9,57,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1293));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",9,5,9,57,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1293));
        }
      }
      tmp1294 = 1;
    }
  }
  threadData->lastEquationSolved = 4436;
}

/*
equation index: 4437
type: ALGORITHM

  assert(dc.roo.radTem.datConExtWin[1].layers.material[1].d >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.radTem.datConExtWin[1].layers.material[1].d, has value: " + String(dc.roo.radTem.datConExtWin[1].layers.material[1].d, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4437(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4437};
  modelica_boolean tmp1295;
  static const MMC_DEFSTRINGLIT(tmp1296,105,"Variable violating min constraint: 0.0 <= dc.roo.radTem.datConExtWin[1].layers.material[1].d, has value: ");
  modelica_string tmp1297;
  modelica_metatype tmpMeta1298;
  static int tmp1299 = 0;
  if(!tmp1299)
  {
    tmp1295 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1291]] /* dc.roo.radTem.datConExtWin[1].layers.material[1].d PARAM */),0.0);
    if(!tmp1295)
    {
      tmp1297 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1291]] /* dc.roo.radTem.datConExtWin[1].layers.material[1].d PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1298 = stringAppend(MMC_REFSTRINGLIT(tmp1296),tmp1297);
      {
        const char* assert_cond = "(dc.roo.radTem.datConExtWin[1].layers.material[1].d >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",9,5,9,57,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1298));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",9,5,9,57,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1298));
        }
      }
      tmp1299 = 1;
    }
  }
  threadData->lastEquationSolved = 4437;
}

/*
equation index: 4438
type: ALGORITHM

  assert(dc.roo.radTem.datConExtWin[1].layers.nLay >= 1, "Variable violating min constraint: 1 <= dc.roo.radTem.datConExtWin[1].layers.nLay, has value: " + String(dc.roo.radTem.datConExtWin[1].layers.nLay, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4438(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4438};
  modelica_boolean tmp1300;
  static const MMC_DEFSTRINGLIT(tmp1301,94,"Variable violating min constraint: 1 <= dc.roo.radTem.datConExtWin[1].layers.nLay, has value: ");
  modelica_string tmp1302;
  modelica_metatype tmpMeta1303;
  static int tmp1304 = 0;
  if(!tmp1304)
  {
    tmp1300 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[325]] /* dc.roo.radTem.datConExtWin[1].layers.nLay PARAM */),((modelica_integer) 1));
    if(!tmp1300)
    {
      tmp1302 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[325]] /* dc.roo.radTem.datConExtWin[1].layers.nLay PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1303 = stringAppend(MMC_REFSTRINGLIT(tmp1301),tmp1302);
      {
        const char* assert_cond = "(dc.roo.radTem.datConExtWin[1].layers.nLay >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",7,4,7,52,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1303));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",7,4,7,52,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1303));
        }
      }
      tmp1304 = 1;
    }
  }
  threadData->lastEquationSolved = 4438;
}

/*
equation index: 4439
type: ALGORITHM

  assert(dc.roo.datConExt[1].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.datConExt[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, "Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.datConExt[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: " + String(dc.roo.datConExt[1].boundaryCondition, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4439(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4439};
  modelica_boolean tmp1305;
  modelica_boolean tmp1306;
  static const MMC_DEFSTRINGLIT(tmp1307,240,"Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.datConExt[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: ");
  modelica_string tmp1308;
  modelica_metatype tmpMeta1309;
  static int tmp1310 = 0;
  if(!tmp1310)
  {
    tmp1305 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[173]] /* dc.roo.datConExt[1].boundaryCondition PARAM */),1);
    tmp1306 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[173]] /* dc.roo.datConExt[1].boundaryCondition PARAM */),2);
    if(!(tmp1305 && tmp1306))
    {
      tmp1308 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[173]] /* dc.roo.datConExt[1].boundaryCondition PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1309 = stringAppend(MMC_REFSTRINGLIT(tmp1307),tmp1308);
      {
        const char* assert_cond = "(dc.roo.datConExt[1].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.datConExt[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",43,3,46,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1309));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",43,3,46,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1309));
        }
      }
      tmp1310 = 1;
    }
  }
  threadData->lastEquationSolved = 4439;
}

/*
equation index: 4440
type: ALGORITHM

  assert(dc.roo.radTem.datConExt[1].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.radTem.datConExt[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, "Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.radTem.datConExt[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: " + String(dc.roo.radTem.datConExt[1].boundaryCondition, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4440(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4440};
  modelica_boolean tmp1311;
  modelica_boolean tmp1312;
  static const MMC_DEFSTRINGLIT(tmp1313,247,"Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.radTem.datConExt[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: ");
  modelica_string tmp1314;
  modelica_metatype tmpMeta1315;
  static int tmp1316 = 0;
  if(!tmp1316)
  {
    tmp1311 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[316]] /* dc.roo.radTem.datConExt[1].boundaryCondition PARAM */),1);
    tmp1312 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[316]] /* dc.roo.radTem.datConExt[1].boundaryCondition PARAM */),2);
    if(!(tmp1311 && tmp1312))
    {
      tmp1314 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[316]] /* dc.roo.radTem.datConExt[1].boundaryCondition PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1315 = stringAppend(MMC_REFSTRINGLIT(tmp1313),tmp1314);
      {
        const char* assert_cond = "(dc.roo.radTem.datConExt[1].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.radTem.datConExt[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",43,3,46,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1315));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",43,3,46,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1315));
        }
      }
      tmp1316 = 1;
    }
  }
  threadData->lastEquationSolved = 4440;
}

/*
equation index: 4441
type: ALGORITHM

  assert(dc.roo.datConExt[1].T_b_start >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.datConExt[1].T_b_start, has value: " + String(dc.roo.datConExt[1].T_b_start, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4441(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4441};
  modelica_boolean tmp1317;
  static const MMC_DEFSTRINGLIT(tmp1318,84,"Variable violating min constraint: 0.0 <= dc.roo.datConExt[1].T_b_start, has value: ");
  modelica_string tmp1319;
  modelica_metatype tmpMeta1320;
  static int tmp1321 = 0;
  if(!tmp1321)
  {
    tmp1317 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[507]] /* dc.roo.datConExt[1].T_b_start PARAM */),0.0);
    if(!tmp1317)
    {
      tmp1319 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[507]] /* dc.roo.datConExt[1].T_b_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1320 = stringAppend(MMC_REFSTRINGLIT(tmp1318),tmp1319);
      {
        const char* assert_cond = "(dc.roo.datConExt[1].T_b_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",30,3,32,79,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1320));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",30,3,32,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1320));
        }
      }
      tmp1321 = 1;
    }
  }
  threadData->lastEquationSolved = 4441;
}

/*
equation index: 4442
type: ALGORITHM

  assert(dc.roo.radTem.datConExt[1].T_b_start >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.radTem.datConExt[1].T_b_start, has value: " + String(dc.roo.radTem.datConExt[1].T_b_start, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4442(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4442};
  modelica_boolean tmp1322;
  static const MMC_DEFSTRINGLIT(tmp1323,91,"Variable violating min constraint: 0.0 <= dc.roo.radTem.datConExt[1].T_b_start, has value: ");
  modelica_string tmp1324;
  modelica_metatype tmpMeta1325;
  static int tmp1326 = 0;
  if(!tmp1326)
  {
    tmp1322 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1224]] /* dc.roo.radTem.datConExt[1].T_b_start PARAM */),0.0);
    if(!tmp1322)
    {
      tmp1324 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1224]] /* dc.roo.radTem.datConExt[1].T_b_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1325 = stringAppend(MMC_REFSTRINGLIT(tmp1323),tmp1324);
      {
        const char* assert_cond = "(dc.roo.radTem.datConExt[1].T_b_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",30,3,32,79,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1325));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",30,3,32,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1325));
        }
      }
      tmp1326 = 1;
    }
  }
  threadData->lastEquationSolved = 4442;
}

/*
equation index: 4443
type: ALGORITHM

  assert(dc.roo.datConExt[1].T_a_start >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.datConExt[1].T_a_start, has value: " + String(dc.roo.datConExt[1].T_a_start, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4443(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4443};
  modelica_boolean tmp1327;
  static const MMC_DEFSTRINGLIT(tmp1328,84,"Variable violating min constraint: 0.0 <= dc.roo.datConExt[1].T_a_start, has value: ");
  modelica_string tmp1329;
  modelica_metatype tmpMeta1330;
  static int tmp1331 = 0;
  if(!tmp1331)
  {
    tmp1327 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[506]] /* dc.roo.datConExt[1].T_a_start PARAM */),0.0);
    if(!tmp1327)
    {
      tmp1329 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[506]] /* dc.roo.datConExt[1].T_a_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1330 = stringAppend(MMC_REFSTRINGLIT(tmp1328),tmp1329);
      {
        const char* assert_cond = "(dc.roo.datConExt[1].T_a_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",27,3,29,79,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1330));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",27,3,29,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1330));
        }
      }
      tmp1331 = 1;
    }
  }
  threadData->lastEquationSolved = 4443;
}

/*
equation index: 4444
type: ALGORITHM

  assert(dc.roo.radTem.datConExt[1].T_a_start >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.radTem.datConExt[1].T_a_start, has value: " + String(dc.roo.radTem.datConExt[1].T_a_start, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4444(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4444};
  modelica_boolean tmp1332;
  static const MMC_DEFSTRINGLIT(tmp1333,91,"Variable violating min constraint: 0.0 <= dc.roo.radTem.datConExt[1].T_a_start, has value: ");
  modelica_string tmp1334;
  modelica_metatype tmpMeta1335;
  static int tmp1336 = 0;
  if(!tmp1336)
  {
    tmp1332 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1223]] /* dc.roo.radTem.datConExt[1].T_a_start PARAM */),0.0);
    if(!tmp1332)
    {
      tmp1334 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1223]] /* dc.roo.radTem.datConExt[1].T_a_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1335 = stringAppend(MMC_REFSTRINGLIT(tmp1333),tmp1334);
      {
        const char* assert_cond = "(dc.roo.radTem.datConExt[1].T_a_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",27,3,29,79,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1335));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",27,3,29,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1335));
        }
      }
      tmp1336 = 1;
    }
  }
  threadData->lastEquationSolved = 4444;
}

/*
equation index: 4445
type: ALGORITHM

  assert(dc.roo.datConExt[1].layers.roughness_a >= Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough and dc.roo.datConExt[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth, "Variable violating min/max constraint: Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough <= dc.roo.datConExt[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth, has value: " + String(dc.roo.datConExt[1].layers.roughness_a, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4445(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4445};
  modelica_boolean tmp1337;
  modelica_boolean tmp1338;
  static const MMC_DEFSTRINGLIT(tmp1339,209,"Variable violating min/max constraint: Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough <= dc.roo.datConExt[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth, has value: ");
  modelica_string tmp1340;
  modelica_metatype tmpMeta1341;
  static int tmp1342 = 0;
  if(!tmp1342)
  {
    tmp1337 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[178]] /* dc.roo.datConExt[1].layers.roughness_a PARAM */),1);
    tmp1338 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[178]] /* dc.roo.datConExt[1].layers.roughness_a PARAM */),6);
    if(!(tmp1337 && tmp1338))
    {
      tmp1340 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[178]] /* dc.roo.datConExt[1].layers.roughness_a PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1341 = stringAppend(MMC_REFSTRINGLIT(tmp1339),tmp1340);
      {
        const char* assert_cond = "(dc.roo.datConExt[1].layers.roughness_a >= Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough and dc.roo.datConExt[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",25,4,27,35,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1341));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",25,4,27,35,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1341));
        }
      }
      tmp1342 = 1;
    }
  }
  threadData->lastEquationSolved = 4445;
}

/*
equation index: 4446
type: ALGORITHM

  assert(dc.roo.radTem.datConExt[1].layers.roughness_a >= Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough and dc.roo.radTem.datConExt[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth, "Variable violating min/max constraint: Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough <= dc.roo.radTem.datConExt[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth, has value: " + String(dc.roo.radTem.datConExt[1].layers.roughness_a, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4446(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4446};
  modelica_boolean tmp1343;
  modelica_boolean tmp1344;
  static const MMC_DEFSTRINGLIT(tmp1345,216,"Variable violating min/max constraint: Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough <= dc.roo.radTem.datConExt[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth, has value: ");
  modelica_string tmp1346;
  modelica_metatype tmpMeta1347;
  static int tmp1348 = 0;
  if(!tmp1348)
  {
    tmp1343 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[321]] /* dc.roo.radTem.datConExt[1].layers.roughness_a PARAM */),1);
    tmp1344 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[321]] /* dc.roo.radTem.datConExt[1].layers.roughness_a PARAM */),6);
    if(!(tmp1343 && tmp1344))
    {
      tmp1346 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[321]] /* dc.roo.radTem.datConExt[1].layers.roughness_a PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1347 = stringAppend(MMC_REFSTRINGLIT(tmp1345),tmp1346);
      {
        const char* assert_cond = "(dc.roo.radTem.datConExt[1].layers.roughness_a >= Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough and dc.roo.radTem.datConExt[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",25,4,27,35,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1347));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",25,4,27,35,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1347));
        }
      }
      tmp1348 = 1;
    }
  }
  threadData->lastEquationSolved = 4446;
}

/*
equation index: 4447
type: ALGORITHM

  assert(dc.roo.radTem.datConExt[1].layers.nSta[1] >= 1, "Variable violating min constraint: 1 <= dc.roo.radTem.datConExt[1].layers.nSta[1], has value: " + String(dc.roo.radTem.datConExt[1].layers.nSta[1], "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4447(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4447};
  modelica_boolean tmp1349;
  static const MMC_DEFSTRINGLIT(tmp1350,94,"Variable violating min constraint: 1 <= dc.roo.radTem.datConExt[1].layers.nSta[1], has value: ");
  modelica_string tmp1351;
  modelica_metatype tmpMeta1352;
  static int tmp1353 = 0;
  if(!tmp1353)
  {
    tmp1349 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[320]] /* dc.roo.radTem.datConExt[1].layers.nSta[1] PARAM */),((modelica_integer) 1));
    if(!tmp1349)
    {
      tmp1351 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[320]] /* dc.roo.radTem.datConExt[1].layers.nSta[1] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1352 = stringAppend(MMC_REFSTRINGLIT(tmp1350),tmp1351);
      {
        const char* assert_cond = "(dc.roo.radTem.datConExt[1].layers.nSta[1] >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",14,4,16,59,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1352));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",14,4,16,59,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1352));
        }
      }
      tmp1353 = 1;
    }
  }
  threadData->lastEquationSolved = 4447;
}

/*
equation index: 4448
type: ALGORITHM

  assert(dc.roo.radTem.datConExt[1].layers.material[1].TLiq >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.radTem.datConExt[1].layers.material[1].TLiq, has value: " + String(dc.roo.radTem.datConExt[1].layers.material[1].TLiq, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4448(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4448};
  modelica_boolean tmp1354;
  static const MMC_DEFSTRINGLIT(tmp1355,105,"Variable violating min constraint: 0.0 <= dc.roo.radTem.datConExt[1].layers.material[1].TLiq, has value: ");
  modelica_string tmp1356;
  modelica_metatype tmpMeta1357;
  static int tmp1358 = 0;
  if(!tmp1358)
  {
    tmp1354 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1233]] /* dc.roo.radTem.datConExt[1].layers.material[1].TLiq PARAM */),0.0);
    if(!tmp1354)
    {
      tmp1356 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1233]] /* dc.roo.radTem.datConExt[1].layers.material[1].TLiq PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1357 = stringAppend(MMC_REFSTRINGLIT(tmp1355),tmp1356);
      {
        const char* assert_cond = "(dc.roo.radTem.datConExt[1].layers.material[1].TLiq >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",33,5,35,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1357));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",33,5,35,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1357));
        }
      }
      tmp1358 = 1;
    }
  }
  threadData->lastEquationSolved = 4448;
}

/*
equation index: 4449
type: ALGORITHM

  assert(dc.roo.radTem.datConExt[1].layers.material[1].TSol >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.radTem.datConExt[1].layers.material[1].TSol, has value: " + String(dc.roo.radTem.datConExt[1].layers.material[1].TSol, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4449(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4449};
  modelica_boolean tmp1359;
  static const MMC_DEFSTRINGLIT(tmp1360,105,"Variable violating min constraint: 0.0 <= dc.roo.radTem.datConExt[1].layers.material[1].TSol, has value: ");
  modelica_string tmp1361;
  modelica_metatype tmpMeta1362;
  static int tmp1363 = 0;
  if(!tmp1363)
  {
    tmp1359 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1234]] /* dc.roo.radTem.datConExt[1].layers.material[1].TSol PARAM */),0.0);
    if(!tmp1359)
    {
      tmp1361 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1234]] /* dc.roo.radTem.datConExt[1].layers.material[1].TSol PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1362 = stringAppend(MMC_REFSTRINGLIT(tmp1360),tmp1361);
      {
        const char* assert_cond = "(dc.roo.radTem.datConExt[1].layers.material[1].TSol >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",30,5,32,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1362));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",30,5,32,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1362));
        }
      }
      tmp1363 = 1;
    }
  }
  threadData->lastEquationSolved = 4449;
}

/*
equation index: 4450
type: ALGORITHM

  assert(dc.roo.datConExt[1].layers.material[1].nStaReal >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.datConExt[1].layers.material[1].nStaReal, has value: " + String(dc.roo.datConExt[1].layers.material[1].nStaReal, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4450(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4450};
  modelica_boolean tmp1364;
  static const MMC_DEFSTRINGLIT(tmp1365,102,"Variable violating min constraint: 0.0 <= dc.roo.datConExt[1].layers.material[1].nStaReal, has value: ");
  modelica_string tmp1366;
  modelica_metatype tmpMeta1367;
  static int tmp1368 = 0;
  if(!tmp1368)
  {
    tmp1364 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[521]] /* dc.roo.datConExt[1].layers.material[1].nStaReal PARAM */),0.0);
    if(!tmp1364)
    {
      tmp1366 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[521]] /* dc.roo.datConExt[1].layers.material[1].nStaReal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1367 = stringAppend(MMC_REFSTRINGLIT(tmp1365),tmp1366);
      {
        const char* assert_cond = "(dc.roo.datConExt[1].layers.material[1].nStaReal >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",26,5,28,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1367));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",26,5,28,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1367));
        }
      }
      tmp1368 = 1;
    }
  }
  threadData->lastEquationSolved = 4450;
}

/*
equation index: 4451
type: ALGORITHM

  assert(dc.roo.radTem.datConExt[1].layers.material[1].nStaReal >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.radTem.datConExt[1].layers.material[1].nStaReal, has value: " + String(dc.roo.radTem.datConExt[1].layers.material[1].nStaReal, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4451(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4451};
  modelica_boolean tmp1369;
  static const MMC_DEFSTRINGLIT(tmp1370,109,"Variable violating min constraint: 0.0 <= dc.roo.radTem.datConExt[1].layers.material[1].nStaReal, has value: ");
  modelica_string tmp1371;
  modelica_metatype tmpMeta1372;
  static int tmp1373 = 0;
  if(!tmp1373)
  {
    tmp1369 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1238]] /* dc.roo.radTem.datConExt[1].layers.material[1].nStaReal PARAM */),0.0);
    if(!tmp1369)
    {
      tmp1371 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1238]] /* dc.roo.radTem.datConExt[1].layers.material[1].nStaReal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1372 = stringAppend(MMC_REFSTRINGLIT(tmp1370),tmp1371);
      {
        const char* assert_cond = "(dc.roo.radTem.datConExt[1].layers.material[1].nStaReal >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",26,5,28,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1372));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",26,5,28,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1372));
        }
      }
      tmp1373 = 1;
    }
  }
  threadData->lastEquationSolved = 4451;
}

/*
equation index: 4452
type: ALGORITHM

  assert(dc.roo.radTem.datConExt[1].layers.material[1].nSta >= 1, "Variable violating min constraint: 1 <= dc.roo.radTem.datConExt[1].layers.material[1].nSta, has value: " + String(dc.roo.radTem.datConExt[1].layers.material[1].nSta, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4452(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4452};
  modelica_boolean tmp1374;
  static const MMC_DEFSTRINGLIT(tmp1375,103,"Variable violating min constraint: 1 <= dc.roo.radTem.datConExt[1].layers.material[1].nSta, has value: ");
  modelica_string tmp1376;
  modelica_metatype tmpMeta1377;
  static int tmp1378 = 0;
  if(!tmp1378)
  {
    tmp1374 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[317]] /* dc.roo.radTem.datConExt[1].layers.material[1].nSta PARAM */),((modelica_integer) 1));
    if(!tmp1374)
    {
      tmp1376 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[317]] /* dc.roo.radTem.datConExt[1].layers.material[1].nSta PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1377 = stringAppend(MMC_REFSTRINGLIT(tmp1375),tmp1376);
      {
        const char* assert_cond = "(dc.roo.radTem.datConExt[1].layers.material[1].nSta >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",14,5,16,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1377));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",14,5,16,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1377));
        }
      }
      tmp1378 = 1;
    }
  }
  threadData->lastEquationSolved = 4452;
}

/*
equation index: 4453
type: ALGORITHM

  assert(dc.roo.datConExt[1].layers.material[1].nStaRef >= 0, "Variable violating min constraint: 0 <= dc.roo.datConExt[1].layers.material[1].nStaRef, has value: " + String(dc.roo.datConExt[1].layers.material[1].nStaRef, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4453(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4453};
  modelica_boolean tmp1379;
  static const MMC_DEFSTRINGLIT(tmp1380,99,"Variable violating min constraint: 0 <= dc.roo.datConExt[1].layers.material[1].nStaRef, has value: ");
  modelica_string tmp1381;
  modelica_metatype tmpMeta1382;
  static int tmp1383 = 0;
  if(!tmp1383)
  {
    tmp1379 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[175]] /* dc.roo.datConExt[1].layers.material[1].nStaRef PARAM */),((modelica_integer) 0));
    if(!tmp1379)
    {
      tmp1381 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[175]] /* dc.roo.datConExt[1].layers.material[1].nStaRef PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1382 = stringAppend(MMC_REFSTRINGLIT(tmp1380),tmp1381);
      {
        const char* assert_cond = "(dc.roo.datConExt[1].layers.material[1].nStaRef >= 0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",12,5,13,76,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1382));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",12,5,13,76,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1382));
        }
      }
      tmp1383 = 1;
    }
  }
  threadData->lastEquationSolved = 4453;
}

/*
equation index: 4454
type: ALGORITHM

  assert(dc.roo.radTem.datConExt[1].layers.material[1].nStaRef >= 0, "Variable violating min constraint: 0 <= dc.roo.radTem.datConExt[1].layers.material[1].nStaRef, has value: " + String(dc.roo.radTem.datConExt[1].layers.material[1].nStaRef, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4454(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4454};
  modelica_boolean tmp1384;
  static const MMC_DEFSTRINGLIT(tmp1385,106,"Variable violating min constraint: 0 <= dc.roo.radTem.datConExt[1].layers.material[1].nStaRef, has value: ");
  modelica_string tmp1386;
  modelica_metatype tmpMeta1387;
  static int tmp1388 = 0;
  if(!tmp1388)
  {
    tmp1384 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[318]] /* dc.roo.radTem.datConExt[1].layers.material[1].nStaRef PARAM */),((modelica_integer) 0));
    if(!tmp1384)
    {
      tmp1386 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[318]] /* dc.roo.radTem.datConExt[1].layers.material[1].nStaRef PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1387 = stringAppend(MMC_REFSTRINGLIT(tmp1385),tmp1386);
      {
        const char* assert_cond = "(dc.roo.radTem.datConExt[1].layers.material[1].nStaRef >= 0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",12,5,13,76,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1387));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",12,5,13,76,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1387));
        }
      }
      tmp1388 = 1;
    }
  }
  threadData->lastEquationSolved = 4454;
}

/*
equation index: 4455
type: ALGORITHM

  assert(dc.roo.datConExt[1].layers.material[1].d >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.datConExt[1].layers.material[1].d, has value: " + String(dc.roo.datConExt[1].layers.material[1].d, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4455(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4455};
  modelica_boolean tmp1389;
  static const MMC_DEFSTRINGLIT(tmp1390,95,"Variable violating min constraint: 0.0 <= dc.roo.datConExt[1].layers.material[1].d, has value: ");
  modelica_string tmp1391;
  modelica_metatype tmpMeta1392;
  static int tmp1393 = 0;
  if(!tmp1393)
  {
    tmp1389 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[519]] /* dc.roo.datConExt[1].layers.material[1].d PARAM */),0.0);
    if(!tmp1389)
    {
      tmp1391 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[519]] /* dc.roo.datConExt[1].layers.material[1].d PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1392 = stringAppend(MMC_REFSTRINGLIT(tmp1390),tmp1391);
      {
        const char* assert_cond = "(dc.roo.datConExt[1].layers.material[1].d >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",9,5,9,57,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1392));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",9,5,9,57,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1392));
        }
      }
      tmp1393 = 1;
    }
  }
  threadData->lastEquationSolved = 4455;
}

/*
equation index: 4456
type: ALGORITHM

  assert(dc.roo.radTem.datConExt[1].layers.material[1].d >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.radTem.datConExt[1].layers.material[1].d, has value: " + String(dc.roo.radTem.datConExt[1].layers.material[1].d, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4456(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4456};
  modelica_boolean tmp1394;
  static const MMC_DEFSTRINGLIT(tmp1395,102,"Variable violating min constraint: 0.0 <= dc.roo.radTem.datConExt[1].layers.material[1].d, has value: ");
  modelica_string tmp1396;
  modelica_metatype tmpMeta1397;
  static int tmp1398 = 0;
  if(!tmp1398)
  {
    tmp1394 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1236]] /* dc.roo.radTem.datConExt[1].layers.material[1].d PARAM */),0.0);
    if(!tmp1394)
    {
      tmp1396 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1236]] /* dc.roo.radTem.datConExt[1].layers.material[1].d PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1397 = stringAppend(MMC_REFSTRINGLIT(tmp1395),tmp1396);
      {
        const char* assert_cond = "(dc.roo.radTem.datConExt[1].layers.material[1].d >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",9,5,9,57,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1397));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",9,5,9,57,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1397));
        }
      }
      tmp1398 = 1;
    }
  }
  threadData->lastEquationSolved = 4456;
}

/*
equation index: 4457
type: ALGORITHM

  assert(dc.roo.radTem.datConExt[1].layers.nLay >= 1, "Variable violating min constraint: 1 <= dc.roo.radTem.datConExt[1].layers.nLay, has value: " + String(dc.roo.radTem.datConExt[1].layers.nLay, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4457(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4457};
  modelica_boolean tmp1399;
  static const MMC_DEFSTRINGLIT(tmp1400,91,"Variable violating min constraint: 1 <= dc.roo.radTem.datConExt[1].layers.nLay, has value: ");
  modelica_string tmp1401;
  modelica_metatype tmpMeta1402;
  static int tmp1403 = 0;
  if(!tmp1403)
  {
    tmp1399 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[319]] /* dc.roo.radTem.datConExt[1].layers.nLay PARAM */),((modelica_integer) 1));
    if(!tmp1399)
    {
      tmp1401 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[319]] /* dc.roo.radTem.datConExt[1].layers.nLay PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1402 = stringAppend(MMC_REFSTRINGLIT(tmp1400),tmp1401);
      {
        const char* assert_cond = "(dc.roo.radTem.datConExt[1].layers.nLay >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",7,4,7,52,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1402));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",7,4,7,52,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1402));
        }
      }
      tmp1403 = 1;
    }
  }
  threadData->lastEquationSolved = 4457;
}

/*
equation index: 4458
type: ALGORITHM

  assert(dc.roo.radTem.NSurBou >= 1, "Variable violating min constraint: 1 <= dc.roo.radTem.NSurBou, has value: " + String(dc.roo.radTem.NSurBou, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4458(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4458};
  modelica_boolean tmp1404;
  static const MMC_DEFSTRINGLIT(tmp1405,74,"Variable violating min constraint: 1 <= dc.roo.radTem.NSurBou, has value: ");
  modelica_string tmp1406;
  modelica_metatype tmpMeta1407;
  static int tmp1408 = 0;
  if(!tmp1408)
  {
    tmp1404 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[307]] /* dc.roo.radTem.NSurBou PARAM */),((modelica_integer) 1));
    if(!tmp1404)
    {
      tmp1406 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[307]] /* dc.roo.radTem.NSurBou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1407 = stringAppend(MMC_REFSTRINGLIT(tmp1405),tmp1406);
      {
        const char* assert_cond = "(dc.roo.radTem.NSurBou >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",40,3,42,33,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1407));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",40,3,42,33,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1407));
        }
      }
      tmp1408 = 1;
    }
  }
  threadData->lastEquationSolved = 4458;
}

/*
equation index: 4459
type: ALGORITHM

  assert(dc.roo.radTem.NConBou >= 1, "Variable violating min constraint: 1 <= dc.roo.radTem.NConBou, has value: " + String(dc.roo.radTem.NConBou, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4459(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4459};
  modelica_boolean tmp1409;
  static const MMC_DEFSTRINGLIT(tmp1410,74,"Variable violating min constraint: 1 <= dc.roo.radTem.NConBou, has value: ");
  modelica_string tmp1411;
  modelica_metatype tmpMeta1412;
  static int tmp1413 = 0;
  if(!tmp1413)
  {
    tmp1409 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[302]] /* dc.roo.radTem.NConBou PARAM */),((modelica_integer) 1));
    if(!tmp1409)
    {
      tmp1411 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[302]] /* dc.roo.radTem.NConBou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1412 = stringAppend(MMC_REFSTRINGLIT(tmp1410),tmp1411);
      {
        const char* assert_cond = "(dc.roo.radTem.NConBou >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",36,3,38,33,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1412));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",36,3,38,33,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1412));
        }
      }
      tmp1413 = 1;
    }
  }
  threadData->lastEquationSolved = 4459;
}

/*
equation index: 4460
type: ALGORITHM

  assert(dc.roo.radTem.NConPar >= 1, "Variable violating min constraint: 1 <= dc.roo.radTem.NConPar, has value: " + String(dc.roo.radTem.NConPar, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4460(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4460};
  modelica_boolean tmp1414;
  static const MMC_DEFSTRINGLIT(tmp1415,74,"Variable violating min constraint: 1 <= dc.roo.radTem.NConPar, has value: ");
  modelica_string tmp1416;
  modelica_metatype tmpMeta1417;
  static int tmp1418 = 0;
  if(!tmp1418)
  {
    tmp1414 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[305]] /* dc.roo.radTem.NConPar PARAM */),((modelica_integer) 1));
    if(!tmp1414)
    {
      tmp1416 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[305]] /* dc.roo.radTem.NConPar PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1417 = stringAppend(MMC_REFSTRINGLIT(tmp1415),tmp1416);
      {
        const char* assert_cond = "(dc.roo.radTem.NConPar >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",32,3,34,33,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1417));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",32,3,34,33,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1417));
        }
      }
      tmp1418 = 1;
    }
  }
  threadData->lastEquationSolved = 4460;
}

/*
equation index: 4461
type: ALGORITHM

  assert(dc.roo.radTem.NConExtWin >= 1, "Variable violating min constraint: 1 <= dc.roo.radTem.NConExtWin, has value: " + String(dc.roo.radTem.NConExtWin, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4461(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4461};
  modelica_boolean tmp1419;
  static const MMC_DEFSTRINGLIT(tmp1420,77,"Variable violating min constraint: 1 <= dc.roo.radTem.NConExtWin, has value: ");
  modelica_string tmp1421;
  modelica_metatype tmpMeta1422;
  static int tmp1423 = 0;
  if(!tmp1423)
  {
    tmp1419 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[304]] /* dc.roo.radTem.NConExtWin PARAM */),((modelica_integer) 1));
    if(!tmp1419)
    {
      tmp1421 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[304]] /* dc.roo.radTem.NConExtWin PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1422 = stringAppend(MMC_REFSTRINGLIT(tmp1420),tmp1421);
      {
        const char* assert_cond = "(dc.roo.radTem.NConExtWin >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",28,3,30,33,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1422));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",28,3,30,33,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1422));
        }
      }
      tmp1423 = 1;
    }
  }
  threadData->lastEquationSolved = 4461;
}

/*
equation index: 4462
type: ALGORITHM

  assert(dc.roo.radTem.NConExt >= 1, "Variable violating min constraint: 1 <= dc.roo.radTem.NConExt, has value: " + String(dc.roo.radTem.NConExt, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4462(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4462};
  modelica_boolean tmp1424;
  static const MMC_DEFSTRINGLIT(tmp1425,74,"Variable violating min constraint: 1 <= dc.roo.radTem.NConExt, has value: ");
  modelica_string tmp1426;
  modelica_metatype tmpMeta1427;
  static int tmp1428 = 0;
  if(!tmp1428)
  {
    tmp1424 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[303]] /* dc.roo.radTem.NConExt PARAM */),((modelica_integer) 1));
    if(!tmp1424)
    {
      tmp1426 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[303]] /* dc.roo.radTem.NConExt PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1427 = stringAppend(MMC_REFSTRINGLIT(tmp1425),tmp1426);
      {
        const char* assert_cond = "(dc.roo.radTem.NConExt >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",24,3,26,33,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1427));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",24,3,26,33,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1427));
        }
      }
      tmp1428 = 1;
    }
  }
  threadData->lastEquationSolved = 4462;
}

/*
equation index: 4463
type: ALGORITHM

  assert(dc.roo.radTem.nSurBou >= 0, "Variable violating min constraint: 0 <= dc.roo.radTem.nSurBou, has value: " + String(dc.roo.radTem.nSurBou, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4463(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4463};
  modelica_boolean tmp1429;
  static const MMC_DEFSTRINGLIT(tmp1430,74,"Variable violating min constraint: 0 <= dc.roo.radTem.nSurBou, has value: ");
  modelica_string tmp1431;
  modelica_metatype tmpMeta1432;
  static int tmp1433 = 0;
  if(!tmp1433)
  {
    tmp1429 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[343]] /* dc.roo.radTem.nSurBou PARAM */),((modelica_integer) 0));
    if(!tmp1429)
    {
      tmp1431 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[343]] /* dc.roo.radTem.nSurBou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1432 = stringAppend(MMC_REFSTRINGLIT(tmp1430),tmp1431);
      {
        const char* assert_cond = "(dc.roo.radTem.nSurBou >= 0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",19,3,21,54,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1432));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",19,3,21,54,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1432));
        }
      }
      tmp1433 = 1;
    }
  }
  threadData->lastEquationSolved = 4463;
}

/*
equation index: 4464
type: ALGORITHM

  assert(dc.roo.radTem.nConBou >= 0, "Variable violating min constraint: 0 <= dc.roo.radTem.nConBou, has value: " + String(dc.roo.radTem.nConBou, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4464(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4464};
  modelica_boolean tmp1434;
  static const MMC_DEFSTRINGLIT(tmp1435,74,"Variable violating min constraint: 0 <= dc.roo.radTem.nConBou, has value: ");
  modelica_string tmp1436;
  modelica_metatype tmpMeta1437;
  static int tmp1438 = 0;
  if(!tmp1438)
  {
    tmp1434 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[339]] /* dc.roo.radTem.nConBou PARAM */),((modelica_integer) 0));
    if(!tmp1434)
    {
      tmp1436 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[339]] /* dc.roo.radTem.nConBou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1437 = stringAppend(MMC_REFSTRINGLIT(tmp1435),tmp1436);
      {
        const char* assert_cond = "(dc.roo.radTem.nConBou >= 0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",15,3,17,54,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1437));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",15,3,17,54,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1437));
        }
      }
      tmp1438 = 1;
    }
  }
  threadData->lastEquationSolved = 4464;
}

/*
equation index: 4465
type: ALGORITHM

  assert(dc.roo.radTem.nConPar >= 0, "Variable violating min constraint: 0 <= dc.roo.radTem.nConPar, has value: " + String(dc.roo.radTem.nConPar, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4465(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4465};
  modelica_boolean tmp1439;
  static const MMC_DEFSTRINGLIT(tmp1440,74,"Variable violating min constraint: 0 <= dc.roo.radTem.nConPar, has value: ");
  modelica_string tmp1441;
  modelica_metatype tmpMeta1442;
  static int tmp1443 = 0;
  if(!tmp1443)
  {
    tmp1439 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[342]] /* dc.roo.radTem.nConPar PARAM */),((modelica_integer) 0));
    if(!tmp1439)
    {
      tmp1441 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[342]] /* dc.roo.radTem.nConPar PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1442 = stringAppend(MMC_REFSTRINGLIT(tmp1440),tmp1441);
      {
        const char* assert_cond = "(dc.roo.radTem.nConPar >= 0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",12,3,13,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1442));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",12,3,13,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1442));
        }
      }
      tmp1443 = 1;
    }
  }
  threadData->lastEquationSolved = 4465;
}

/*
equation index: 4466
type: ALGORITHM

  assert(dc.roo.radTem.nConExtWin >= 0, "Variable violating min constraint: 0 <= dc.roo.radTem.nConExtWin, has value: " + String(dc.roo.radTem.nConExtWin, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4466(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4466};
  modelica_boolean tmp1444;
  static const MMC_DEFSTRINGLIT(tmp1445,77,"Variable violating min constraint: 0 <= dc.roo.radTem.nConExtWin, has value: ");
  modelica_string tmp1446;
  modelica_metatype tmpMeta1447;
  static int tmp1448 = 0;
  if(!tmp1448)
  {
    tmp1444 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[341]] /* dc.roo.radTem.nConExtWin PARAM */),((modelica_integer) 0));
    if(!tmp1444)
    {
      tmp1446 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[341]] /* dc.roo.radTem.nConExtWin PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1447 = stringAppend(MMC_REFSTRINGLIT(tmp1445),tmp1446);
      {
        const char* assert_cond = "(dc.roo.radTem.nConExtWin >= 0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",9,3,10,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1447));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",9,3,10,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1447));
        }
      }
      tmp1448 = 1;
    }
  }
  threadData->lastEquationSolved = 4466;
}

/*
equation index: 4467
type: ALGORITHM

  assert(dc.roo.radTem.nConExt >= 0, "Variable violating min constraint: 0 <= dc.roo.radTem.nConExt, has value: " + String(dc.roo.radTem.nConExt, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4467(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4467};
  modelica_boolean tmp1449;
  static const MMC_DEFSTRINGLIT(tmp1450,74,"Variable violating min constraint: 0 <= dc.roo.radTem.nConExt, has value: ");
  modelica_string tmp1451;
  modelica_metatype tmpMeta1452;
  static int tmp1453 = 0;
  if(!tmp1453)
  {
    tmp1449 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[340]] /* dc.roo.radTem.nConExt PARAM */),((modelica_integer) 0));
    if(!tmp1449)
    {
      tmp1451 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[340]] /* dc.roo.radTem.nConExt PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1452 = stringAppend(MMC_REFSTRINGLIT(tmp1450),tmp1451);
      {
        const char* assert_cond = "(dc.roo.radTem.nConExt >= 0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",7,3,8,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1452));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",7,3,8,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1452));
        }
      }
      tmp1453 = 1;
    }
  }
  threadData->lastEquationSolved = 4467;
}

/*
equation index: 4468
type: ALGORITHM

  assert(dc.roo.irRadExc.T0 >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadExc.T0, has value: " + String(dc.roo.irRadExc.T0, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4468(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4468};
  modelica_boolean tmp1454;
  static const MMC_DEFSTRINGLIT(tmp1455,73,"Variable violating min constraint: 0.0 <= dc.roo.irRadExc.T0, has value: ");
  modelica_string tmp1456;
  modelica_metatype tmpMeta1457;
  static int tmp1458 = 0;
  if(!tmp1458)
  {
    tmp1454 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[718]] /* dc.roo.irRadExc.T0 PARAM */),0.0);
    if(!tmp1454)
    {
      tmp1456 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[718]] /* dc.roo.irRadExc.T0 PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1457 = stringAppend(MMC_REFSTRINGLIT(tmp1455),tmp1456);
      {
        const char* assert_cond = "(dc.roo.irRadExc.T0 >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",84,3,85,60,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1457));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",84,3,85,60,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1457));
        }
      }
      tmp1458 = 1;
    }
  }
  threadData->lastEquationSolved = 4468;
}

/*
equation index: 4469
type: ALGORITHM

  assert(dc.roo.irRadExc.T03 >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadExc.T03, has value: " + String(dc.roo.irRadExc.T03, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4469(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4469};
  modelica_boolean tmp1459;
  static const MMC_DEFSTRINGLIT(tmp1460,74,"Variable violating min constraint: 0.0 <= dc.roo.irRadExc.T03, has value: ");
  modelica_string tmp1461;
  modelica_metatype tmpMeta1462;
  static int tmp1463 = 0;
  if(!tmp1463)
  {
    tmp1459 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[719]] /* dc.roo.irRadExc.T03 PARAM */),0.0);
    if(!tmp1459)
    {
      tmp1461 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[719]] /* dc.roo.irRadExc.T03 PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1462 = stringAppend(MMC_REFSTRINGLIT(tmp1460),tmp1461);
      {
        const char* assert_cond = "(dc.roo.irRadExc.T03 >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",86,3,88,52,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1462));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",86,3,88,52,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1462));
        }
      }
      tmp1463 = 1;
    }
  }
  threadData->lastEquationSolved = 4469;
}

/*
equation index: 4470
type: ALGORITHM

  assert(dc.roo.irRadExc.datConExtWin[1].fFra >= 0.0 and dc.roo.irRadExc.datConExtWin[1].fFra <= 1.0, "Variable violating min/max constraint: 0.0 <= dc.roo.irRadExc.datConExtWin[1].fFra <= 1.0, has value: " + String(dc.roo.irRadExc.datConExtWin[1].fFra, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4470(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4470};
  modelica_boolean tmp1464;
  modelica_boolean tmp1465;
  static const MMC_DEFSTRINGLIT(tmp1466,102,"Variable violating min/max constraint: 0.0 <= dc.roo.irRadExc.datConExtWin[1].fFra <= 1.0, has value: ");
  modelica_string tmp1467;
  modelica_metatype tmpMeta1468;
  static int tmp1469 = 0;
  if(!tmp1469)
  {
    tmp1464 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[770]] /* dc.roo.irRadExc.datConExtWin[1].fFra PARAM */),0.0);
    tmp1465 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[770]] /* dc.roo.irRadExc.datConExtWin[1].fFra PARAM */),1.0);
    if(!(tmp1464 && tmp1465))
    {
      tmp1467 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[770]] /* dc.roo.irRadExc.datConExtWin[1].fFra PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1468 = stringAppend(MMC_REFSTRINGLIT(tmp1466),tmp1467);
      {
        const char* assert_cond = "(dc.roo.irRadExc.datConExtWin[1].fFra >= 0.0 and dc.roo.irRadExc.datConExtWin[1].fFra <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ParameterConstructionWithWindow.mo",19,3,22,48,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1468));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ParameterConstructionWithWindow.mo",19,3,22,48,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1468));
        }
      }
      tmp1469 = 1;
    }
  }
  threadData->lastEquationSolved = 4470;
}

/*
equation index: 4471
type: ALGORITHM

  assert(dc.roo.irRadExc.dummyGlaSys.gas[1].MM >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadExc.dummyGlaSys.gas[1].MM, has value: " + String(dc.roo.irRadExc.dummyGlaSys.gas[1].MM, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4471(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4471};
  modelica_boolean tmp1470;
  static const MMC_DEFSTRINGLIT(tmp1471,92,"Variable violating min constraint: 0.0 <= dc.roo.irRadExc.dummyGlaSys.gas[1].MM, has value: ");
  modelica_string tmp1472;
  modelica_metatype tmpMeta1473;
  static int tmp1474 = 0;
  if(!tmp1474)
  {
    tmp1470 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[865]] /* dc.roo.irRadExc.dummyGlaSys.gas[1].MM PARAM */),0.0);
    if(!tmp1470)
    {
      tmp1472 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[865]] /* dc.roo.irRadExc.dummyGlaSys.gas[1].MM PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1473 = stringAppend(MMC_REFSTRINGLIT(tmp1471),tmp1472);
      {
        const char* assert_cond = "(dc.roo.irRadExc.dummyGlaSys.gas[1].MM >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/Gases.mo",21,5,22,48,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1473));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/Gases.mo",21,5,22,48,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1473));
        }
      }
      tmp1474 = 1;
    }
  }
  threadData->lastEquationSolved = 4471;
}

/*
equation index: 4472
type: ALGORITHM

  assert(dc.roo.irRadExc.dummyGlaSys.gas[1].a_mu >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadExc.dummyGlaSys.gas[1].a_mu, has value: " + String(dc.roo.irRadExc.dummyGlaSys.gas[1].a_mu, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4472(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4472};
  modelica_boolean tmp1475;
  static const MMC_DEFSTRINGLIT(tmp1476,94,"Variable violating min constraint: 0.0 <= dc.roo.irRadExc.dummyGlaSys.gas[1].a_mu, has value: ");
  modelica_string tmp1477;
  modelica_metatype tmpMeta1478;
  static int tmp1479 = 0;
  if(!tmp1479)
  {
    tmp1475 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[869]] /* dc.roo.irRadExc.dummyGlaSys.gas[1].a_mu PARAM */),0.0);
    if(!tmp1475)
    {
      tmp1477 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[869]] /* dc.roo.irRadExc.dummyGlaSys.gas[1].a_mu PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1478 = stringAppend(MMC_REFSTRINGLIT(tmp1476),tmp1477);
      {
        const char* assert_cond = "(dc.roo.irRadExc.dummyGlaSys.gas[1].a_mu >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/Gases.mo",12,5,13,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1478));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/Gases.mo",12,5,13,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1478));
        }
      }
      tmp1479 = 1;
    }
  }
  threadData->lastEquationSolved = 4472;
}

/*
equation index: 4473
type: ALGORITHM

  assert(dc.roo.irRadExc.dummyCon.roughness_a >= Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough and dc.roo.irRadExc.dummyCon.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth, "Variable violating min/max constraint: Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough <= dc.roo.irRadExc.dummyCon.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth, has value: " + String(dc.roo.irRadExc.dummyCon.roughness_a, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4473(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4473};
  modelica_boolean tmp1480;
  modelica_boolean tmp1481;
  static const MMC_DEFSTRINGLIT(tmp1482,207,"Variable violating min/max constraint: Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough <= dc.roo.irRadExc.dummyCon.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth, has value: ");
  modelica_string tmp1483;
  modelica_metatype tmpMeta1484;
  static int tmp1485 = 0;
  if(!tmp1485)
  {
    tmp1480 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[234]] /* dc.roo.irRadExc.dummyCon.roughness_a PARAM */),1);
    tmp1481 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[234]] /* dc.roo.irRadExc.dummyCon.roughness_a PARAM */),6);
    if(!(tmp1480 && tmp1481))
    {
      tmp1483 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[234]] /* dc.roo.irRadExc.dummyCon.roughness_a PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1484 = stringAppend(MMC_REFSTRINGLIT(tmp1482),tmp1483);
      {
        const char* assert_cond = "(dc.roo.irRadExc.dummyCon.roughness_a >= Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough and dc.roo.irRadExc.dummyCon.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",25,4,27,35,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1484));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",25,4,27,35,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1484));
        }
      }
      tmp1485 = 1;
    }
  }
  threadData->lastEquationSolved = 4473;
}

/*
equation index: 4474
type: ALGORITHM

  assert(dc.roo.irRadExc.dummyCon.nSta[1] >= 1, "Variable violating min constraint: 1 <= dc.roo.irRadExc.dummyCon.nSta[1], has value: " + String(dc.roo.irRadExc.dummyCon.nSta[1], "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4474(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4474};
  modelica_boolean tmp1486;
  static const MMC_DEFSTRINGLIT(tmp1487,85,"Variable violating min constraint: 1 <= dc.roo.irRadExc.dummyCon.nSta[1], has value: ");
  modelica_string tmp1488;
  modelica_metatype tmpMeta1489;
  static int tmp1490 = 0;
  if(!tmp1490)
  {
    tmp1486 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[233]] /* dc.roo.irRadExc.dummyCon.nSta[1] PARAM */),((modelica_integer) 1));
    if(!tmp1486)
    {
      tmp1488 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[233]] /* dc.roo.irRadExc.dummyCon.nSta[1] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1489 = stringAppend(MMC_REFSTRINGLIT(tmp1487),tmp1488);
      {
        const char* assert_cond = "(dc.roo.irRadExc.dummyCon.nSta[1] >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",14,4,16,59,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1489));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",14,4,16,59,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1489));
        }
      }
      tmp1490 = 1;
    }
  }
  threadData->lastEquationSolved = 4474;
}

/*
equation index: 4475
type: ALGORITHM

  assert(dc.roo.irRadExc.dummyCon.material[1].TLiq >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadExc.dummyCon.material[1].TLiq, has value: " + String(dc.roo.irRadExc.dummyCon.material[1].TLiq, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4475(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4475};
  modelica_boolean tmp1491;
  static const MMC_DEFSTRINGLIT(tmp1492,96,"Variable violating min constraint: 0.0 <= dc.roo.irRadExc.dummyCon.material[1].TLiq, has value: ");
  modelica_string tmp1493;
  modelica_metatype tmpMeta1494;
  static int tmp1495 = 0;
  if(!tmp1495)
  {
    tmp1491 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[853]] /* dc.roo.irRadExc.dummyCon.material[1].TLiq PARAM */),0.0);
    if(!tmp1491)
    {
      tmp1493 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[853]] /* dc.roo.irRadExc.dummyCon.material[1].TLiq PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1494 = stringAppend(MMC_REFSTRINGLIT(tmp1492),tmp1493);
      {
        const char* assert_cond = "(dc.roo.irRadExc.dummyCon.material[1].TLiq >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",33,5,35,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1494));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",33,5,35,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1494));
        }
      }
      tmp1495 = 1;
    }
  }
  threadData->lastEquationSolved = 4475;
}

/*
equation index: 4476
type: ALGORITHM

  assert(dc.roo.irRadExc.dummyCon.material[1].TSol >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadExc.dummyCon.material[1].TSol, has value: " + String(dc.roo.irRadExc.dummyCon.material[1].TSol, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4476(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4476};
  modelica_boolean tmp1496;
  static const MMC_DEFSTRINGLIT(tmp1497,96,"Variable violating min constraint: 0.0 <= dc.roo.irRadExc.dummyCon.material[1].TSol, has value: ");
  modelica_string tmp1498;
  modelica_metatype tmpMeta1499;
  static int tmp1500 = 0;
  if(!tmp1500)
  {
    tmp1496 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[854]] /* dc.roo.irRadExc.dummyCon.material[1].TSol PARAM */),0.0);
    if(!tmp1496)
    {
      tmp1498 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[854]] /* dc.roo.irRadExc.dummyCon.material[1].TSol PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1499 = stringAppend(MMC_REFSTRINGLIT(tmp1497),tmp1498);
      {
        const char* assert_cond = "(dc.roo.irRadExc.dummyCon.material[1].TSol >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",30,5,32,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1499));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",30,5,32,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1499));
        }
      }
      tmp1500 = 1;
    }
  }
  threadData->lastEquationSolved = 4476;
}

/*
equation index: 4477
type: ALGORITHM

  assert(dc.roo.irRadExc.dummyCon.material[1].nStaReal >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadExc.dummyCon.material[1].nStaReal, has value: " + String(dc.roo.irRadExc.dummyCon.material[1].nStaReal, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4477(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4477};
  modelica_boolean tmp1501;
  static const MMC_DEFSTRINGLIT(tmp1502,100,"Variable violating min constraint: 0.0 <= dc.roo.irRadExc.dummyCon.material[1].nStaReal, has value: ");
  modelica_string tmp1503;
  modelica_metatype tmpMeta1504;
  static int tmp1505 = 0;
  if(!tmp1505)
  {
    tmp1501 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[858]] /* dc.roo.irRadExc.dummyCon.material[1].nStaReal PARAM */),0.0);
    if(!tmp1501)
    {
      tmp1503 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[858]] /* dc.roo.irRadExc.dummyCon.material[1].nStaReal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1504 = stringAppend(MMC_REFSTRINGLIT(tmp1502),tmp1503);
      {
        const char* assert_cond = "(dc.roo.irRadExc.dummyCon.material[1].nStaReal >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",26,5,28,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1504));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",26,5,28,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1504));
        }
      }
      tmp1505 = 1;
    }
  }
  threadData->lastEquationSolved = 4477;
}

/*
equation index: 4478
type: ALGORITHM

  assert(dc.roo.irRadExc.dummyCon.material[1].nSta >= 1, "Variable violating min constraint: 1 <= dc.roo.irRadExc.dummyCon.material[1].nSta, has value: " + String(dc.roo.irRadExc.dummyCon.material[1].nSta, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4478(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4478};
  modelica_boolean tmp1506;
  static const MMC_DEFSTRINGLIT(tmp1507,94,"Variable violating min constraint: 1 <= dc.roo.irRadExc.dummyCon.material[1].nSta, has value: ");
  modelica_string tmp1508;
  modelica_metatype tmpMeta1509;
  static int tmp1510 = 0;
  if(!tmp1510)
  {
    tmp1506 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[230]] /* dc.roo.irRadExc.dummyCon.material[1].nSta PARAM */),((modelica_integer) 1));
    if(!tmp1506)
    {
      tmp1508 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[230]] /* dc.roo.irRadExc.dummyCon.material[1].nSta PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1509 = stringAppend(MMC_REFSTRINGLIT(tmp1507),tmp1508);
      {
        const char* assert_cond = "(dc.roo.irRadExc.dummyCon.material[1].nSta >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",14,5,16,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1509));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",14,5,16,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1509));
        }
      }
      tmp1510 = 1;
    }
  }
  threadData->lastEquationSolved = 4478;
}

/*
equation index: 4479
type: ALGORITHM

  assert(dc.roo.irRadExc.dummyCon.material[1].nStaRef >= 0, "Variable violating min constraint: 0 <= dc.roo.irRadExc.dummyCon.material[1].nStaRef, has value: " + String(dc.roo.irRadExc.dummyCon.material[1].nStaRef, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4479(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4479};
  modelica_boolean tmp1511;
  static const MMC_DEFSTRINGLIT(tmp1512,97,"Variable violating min constraint: 0 <= dc.roo.irRadExc.dummyCon.material[1].nStaRef, has value: ");
  modelica_string tmp1513;
  modelica_metatype tmpMeta1514;
  static int tmp1515 = 0;
  if(!tmp1515)
  {
    tmp1511 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[231]] /* dc.roo.irRadExc.dummyCon.material[1].nStaRef PARAM */),((modelica_integer) 0));
    if(!tmp1511)
    {
      tmp1513 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[231]] /* dc.roo.irRadExc.dummyCon.material[1].nStaRef PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1514 = stringAppend(MMC_REFSTRINGLIT(tmp1512),tmp1513);
      {
        const char* assert_cond = "(dc.roo.irRadExc.dummyCon.material[1].nStaRef >= 0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",12,5,13,76,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1514));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",12,5,13,76,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1514));
        }
      }
      tmp1515 = 1;
    }
  }
  threadData->lastEquationSolved = 4479;
}

/*
equation index: 4480
type: ALGORITHM

  assert(dc.roo.irRadExc.dummyCon.material[1].d >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadExc.dummyCon.material[1].d, has value: " + String(dc.roo.irRadExc.dummyCon.material[1].d, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4480(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4480};
  modelica_boolean tmp1516;
  static const MMC_DEFSTRINGLIT(tmp1517,93,"Variable violating min constraint: 0.0 <= dc.roo.irRadExc.dummyCon.material[1].d, has value: ");
  modelica_string tmp1518;
  modelica_metatype tmpMeta1519;
  static int tmp1520 = 0;
  if(!tmp1520)
  {
    tmp1516 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[856]] /* dc.roo.irRadExc.dummyCon.material[1].d PARAM */),0.0);
    if(!tmp1516)
    {
      tmp1518 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[856]] /* dc.roo.irRadExc.dummyCon.material[1].d PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1519 = stringAppend(MMC_REFSTRINGLIT(tmp1517),tmp1518);
      {
        const char* assert_cond = "(dc.roo.irRadExc.dummyCon.material[1].d >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",9,5,9,57,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1519));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",9,5,9,57,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1519));
        }
      }
      tmp1520 = 1;
    }
  }
  threadData->lastEquationSolved = 4480;
}

/*
equation index: 4481
type: ALGORITHM

  assert(dc.roo.irRadExc.dummyCon.nLay >= 1, "Variable violating min constraint: 1 <= dc.roo.irRadExc.dummyCon.nLay, has value: " + String(dc.roo.irRadExc.dummyCon.nLay, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4481(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4481};
  modelica_boolean tmp1521;
  static const MMC_DEFSTRINGLIT(tmp1522,82,"Variable violating min constraint: 1 <= dc.roo.irRadExc.dummyCon.nLay, has value: ");
  modelica_string tmp1523;
  modelica_metatype tmpMeta1524;
  static int tmp1525 = 0;
  if(!tmp1525)
  {
    tmp1521 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[232]] /* dc.roo.irRadExc.dummyCon.nLay PARAM */),((modelica_integer) 1));
    if(!tmp1521)
    {
      tmp1523 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[232]] /* dc.roo.irRadExc.dummyCon.nLay PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1524 = stringAppend(MMC_REFSTRINGLIT(tmp1522),tmp1523);
      {
        const char* assert_cond = "(dc.roo.irRadExc.dummyCon.nLay >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",7,4,7,52,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1524));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",7,4,7,52,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1524));
        }
      }
      tmp1525 = 1;
    }
  }
  threadData->lastEquationSolved = 4481;
}

/*
equation index: 4482
type: ALGORITHM

  assert(dc.roo.irRadExc.surBou[6].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.irRadExc.surBou[6].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, "Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.irRadExc.surBou[6].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: " + String(dc.roo.irRadExc.surBou[6].boundaryCondition, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4482(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4482};
  modelica_boolean tmp1526;
  modelica_boolean tmp1527;
  static const MMC_DEFSTRINGLIT(tmp1528,246,"Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.irRadExc.surBou[6].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: ");
  modelica_string tmp1529;
  modelica_metatype tmpMeta1530;
  static int tmp1531 = 0;
  if(!tmp1531)
  {
    tmp1526 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[248]] /* dc.roo.irRadExc.surBou[6].boundaryCondition PARAM */),1);
    tmp1527 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[248]] /* dc.roo.irRadExc.surBou[6].boundaryCondition PARAM */),2);
    if(!(tmp1526 && tmp1527))
    {
      tmp1529 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[248]] /* dc.roo.irRadExc.surBou[6].boundaryCondition PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1530 = stringAppend(MMC_REFSTRINGLIT(tmp1528),tmp1529);
      {
        const char* assert_cond = "(dc.roo.irRadExc.surBou[6].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.irRadExc.surBou[6].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/OpaqueSurface.mo",7,3,10,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1530));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/OpaqueSurface.mo",7,3,10,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1530));
        }
      }
      tmp1531 = 1;
    }
  }
  threadData->lastEquationSolved = 4482;
}

/*
equation index: 4483
type: ALGORITHM

  assert(dc.roo.irRadExc.surBou[5].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.irRadExc.surBou[5].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, "Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.irRadExc.surBou[5].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: " + String(dc.roo.irRadExc.surBou[5].boundaryCondition, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4483(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4483};
  modelica_boolean tmp1532;
  modelica_boolean tmp1533;
  static const MMC_DEFSTRINGLIT(tmp1534,246,"Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.irRadExc.surBou[5].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: ");
  modelica_string tmp1535;
  modelica_metatype tmpMeta1536;
  static int tmp1537 = 0;
  if(!tmp1537)
  {
    tmp1532 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[247]] /* dc.roo.irRadExc.surBou[5].boundaryCondition PARAM */),1);
    tmp1533 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[247]] /* dc.roo.irRadExc.surBou[5].boundaryCondition PARAM */),2);
    if(!(tmp1532 && tmp1533))
    {
      tmp1535 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[247]] /* dc.roo.irRadExc.surBou[5].boundaryCondition PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1536 = stringAppend(MMC_REFSTRINGLIT(tmp1534),tmp1535);
      {
        const char* assert_cond = "(dc.roo.irRadExc.surBou[5].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.irRadExc.surBou[5].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/OpaqueSurface.mo",7,3,10,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1536));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/OpaqueSurface.mo",7,3,10,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1536));
        }
      }
      tmp1537 = 1;
    }
  }
  threadData->lastEquationSolved = 4483;
}

/*
equation index: 4484
type: ALGORITHM

  assert(dc.roo.irRadExc.surBou[4].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.irRadExc.surBou[4].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, "Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.irRadExc.surBou[4].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: " + String(dc.roo.irRadExc.surBou[4].boundaryCondition, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4484(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4484};
  modelica_boolean tmp1538;
  modelica_boolean tmp1539;
  static const MMC_DEFSTRINGLIT(tmp1540,246,"Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.irRadExc.surBou[4].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: ");
  modelica_string tmp1541;
  modelica_metatype tmpMeta1542;
  static int tmp1543 = 0;
  if(!tmp1543)
  {
    tmp1538 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[246]] /* dc.roo.irRadExc.surBou[4].boundaryCondition PARAM */),1);
    tmp1539 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[246]] /* dc.roo.irRadExc.surBou[4].boundaryCondition PARAM */),2);
    if(!(tmp1538 && tmp1539))
    {
      tmp1541 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[246]] /* dc.roo.irRadExc.surBou[4].boundaryCondition PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1542 = stringAppend(MMC_REFSTRINGLIT(tmp1540),tmp1541);
      {
        const char* assert_cond = "(dc.roo.irRadExc.surBou[4].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.irRadExc.surBou[4].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/OpaqueSurface.mo",7,3,10,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1542));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/OpaqueSurface.mo",7,3,10,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1542));
        }
      }
      tmp1543 = 1;
    }
  }
  threadData->lastEquationSolved = 4484;
}

/*
equation index: 4485
type: ALGORITHM

  assert(dc.roo.irRadExc.surBou[3].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.irRadExc.surBou[3].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, "Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.irRadExc.surBou[3].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: " + String(dc.roo.irRadExc.surBou[3].boundaryCondition, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4485(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4485};
  modelica_boolean tmp1544;
  modelica_boolean tmp1545;
  static const MMC_DEFSTRINGLIT(tmp1546,246,"Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.irRadExc.surBou[3].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: ");
  modelica_string tmp1547;
  modelica_metatype tmpMeta1548;
  static int tmp1549 = 0;
  if(!tmp1549)
  {
    tmp1544 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[245]] /* dc.roo.irRadExc.surBou[3].boundaryCondition PARAM */),1);
    tmp1545 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[245]] /* dc.roo.irRadExc.surBou[3].boundaryCondition PARAM */),2);
    if(!(tmp1544 && tmp1545))
    {
      tmp1547 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[245]] /* dc.roo.irRadExc.surBou[3].boundaryCondition PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1548 = stringAppend(MMC_REFSTRINGLIT(tmp1546),tmp1547);
      {
        const char* assert_cond = "(dc.roo.irRadExc.surBou[3].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.irRadExc.surBou[3].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/OpaqueSurface.mo",7,3,10,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1548));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/OpaqueSurface.mo",7,3,10,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1548));
        }
      }
      tmp1549 = 1;
    }
  }
  threadData->lastEquationSolved = 4485;
}

/*
equation index: 4486
type: ALGORITHM

  assert(dc.roo.irRadExc.surBou[2].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.irRadExc.surBou[2].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, "Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.irRadExc.surBou[2].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: " + String(dc.roo.irRadExc.surBou[2].boundaryCondition, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4486(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4486};
  modelica_boolean tmp1550;
  modelica_boolean tmp1551;
  static const MMC_DEFSTRINGLIT(tmp1552,246,"Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.irRadExc.surBou[2].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: ");
  modelica_string tmp1553;
  modelica_metatype tmpMeta1554;
  static int tmp1555 = 0;
  if(!tmp1555)
  {
    tmp1550 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[244]] /* dc.roo.irRadExc.surBou[2].boundaryCondition PARAM */),1);
    tmp1551 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[244]] /* dc.roo.irRadExc.surBou[2].boundaryCondition PARAM */),2);
    if(!(tmp1550 && tmp1551))
    {
      tmp1553 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[244]] /* dc.roo.irRadExc.surBou[2].boundaryCondition PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1554 = stringAppend(MMC_REFSTRINGLIT(tmp1552),tmp1553);
      {
        const char* assert_cond = "(dc.roo.irRadExc.surBou[2].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.irRadExc.surBou[2].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/OpaqueSurface.mo",7,3,10,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1554));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/OpaqueSurface.mo",7,3,10,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1554));
        }
      }
      tmp1555 = 1;
    }
  }
  threadData->lastEquationSolved = 4486;
}

/*
equation index: 4487
type: ALGORITHM

  assert(dc.roo.irRadExc.surBou[1].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.irRadExc.surBou[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, "Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.irRadExc.surBou[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: " + String(dc.roo.irRadExc.surBou[1].boundaryCondition, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4487(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4487};
  modelica_boolean tmp1556;
  modelica_boolean tmp1557;
  static const MMC_DEFSTRINGLIT(tmp1558,246,"Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.irRadExc.surBou[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: ");
  modelica_string tmp1559;
  modelica_metatype tmpMeta1560;
  static int tmp1561 = 0;
  if(!tmp1561)
  {
    tmp1556 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[243]] /* dc.roo.irRadExc.surBou[1].boundaryCondition PARAM */),1);
    tmp1557 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[243]] /* dc.roo.irRadExc.surBou[1].boundaryCondition PARAM */),2);
    if(!(tmp1556 && tmp1557))
    {
      tmp1559 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[243]] /* dc.roo.irRadExc.surBou[1].boundaryCondition PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1560 = stringAppend(MMC_REFSTRINGLIT(tmp1558),tmp1559);
      {
        const char* assert_cond = "(dc.roo.irRadExc.surBou[1].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.irRadExc.surBou[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/OpaqueSurface.mo",7,3,10,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1560));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/OpaqueSurface.mo",7,3,10,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1560));
        }
      }
      tmp1561 = 1;
    }
  }
  threadData->lastEquationSolved = 4487;
}

/*
equation index: 4488
type: ALGORITHM

  assert(dc.roo.irRadExc.datConBou[1].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.irRadExc.datConBou[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, "Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.irRadExc.datConBou[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: " + String(dc.roo.irRadExc.datConBou[1].boundaryCondition, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4488(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4488};
  modelica_boolean tmp1562;
  modelica_boolean tmp1563;
  static const MMC_DEFSTRINGLIT(tmp1564,249,"Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.irRadExc.datConBou[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: ");
  modelica_string tmp1565;
  modelica_metatype tmpMeta1566;
  static int tmp1567 = 0;
  if(!tmp1567)
  {
    tmp1562 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[206]] /* dc.roo.irRadExc.datConBou[1].boundaryCondition PARAM */),1);
    tmp1563 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[206]] /* dc.roo.irRadExc.datConBou[1].boundaryCondition PARAM */),2);
    if(!(tmp1562 && tmp1563))
    {
      tmp1565 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[206]] /* dc.roo.irRadExc.datConBou[1].boundaryCondition PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1566 = stringAppend(MMC_REFSTRINGLIT(tmp1564),tmp1565);
      {
        const char* assert_cond = "(dc.roo.irRadExc.datConBou[1].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.irRadExc.datConBou[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",43,3,46,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1566));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",43,3,46,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1566));
        }
      }
      tmp1567 = 1;
    }
  }
  threadData->lastEquationSolved = 4488;
}

/*
equation index: 4489
type: ALGORITHM

  assert(dc.roo.irRadExc.datConBou[1].T_b_start >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConBou[1].T_b_start, has value: " + String(dc.roo.irRadExc.datConBou[1].T_b_start, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4489(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4489};
  modelica_boolean tmp1568;
  static const MMC_DEFSTRINGLIT(tmp1569,93,"Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConBou[1].T_b_start, has value: ");
  modelica_string tmp1570;
  modelica_metatype tmpMeta1571;
  static int tmp1572 = 0;
  if(!tmp1572)
  {
    tmp1568 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[722]] /* dc.roo.irRadExc.datConBou[1].T_b_start PARAM */),0.0);
    if(!tmp1568)
    {
      tmp1570 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[722]] /* dc.roo.irRadExc.datConBou[1].T_b_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1571 = stringAppend(MMC_REFSTRINGLIT(tmp1569),tmp1570);
      {
        const char* assert_cond = "(dc.roo.irRadExc.datConBou[1].T_b_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",30,3,32,79,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1571));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",30,3,32,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1571));
        }
      }
      tmp1572 = 1;
    }
  }
  threadData->lastEquationSolved = 4489;
}

/*
equation index: 4490
type: ALGORITHM

  assert(dc.roo.irRadExc.datConBou[1].T_a_start >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConBou[1].T_a_start, has value: " + String(dc.roo.irRadExc.datConBou[1].T_a_start, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4490(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4490};
  modelica_boolean tmp1573;
  static const MMC_DEFSTRINGLIT(tmp1574,93,"Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConBou[1].T_a_start, has value: ");
  modelica_string tmp1575;
  modelica_metatype tmpMeta1576;
  static int tmp1577 = 0;
  if(!tmp1577)
  {
    tmp1573 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[721]] /* dc.roo.irRadExc.datConBou[1].T_a_start PARAM */),0.0);
    if(!tmp1573)
    {
      tmp1575 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[721]] /* dc.roo.irRadExc.datConBou[1].T_a_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1576 = stringAppend(MMC_REFSTRINGLIT(tmp1574),tmp1575);
      {
        const char* assert_cond = "(dc.roo.irRadExc.datConBou[1].T_a_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",27,3,29,79,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1576));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",27,3,29,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1576));
        }
      }
      tmp1577 = 1;
    }
  }
  threadData->lastEquationSolved = 4490;
}

/*
equation index: 4491
type: ALGORITHM

  assert(dc.roo.irRadExc.datConBou[1].layers.roughness_a >= Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough and dc.roo.irRadExc.datConBou[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth, "Variable violating min/max constraint: Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough <= dc.roo.irRadExc.datConBou[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth, has value: " + String(dc.roo.irRadExc.datConBou[1].layers.roughness_a, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4491(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4491};
  modelica_boolean tmp1578;
  modelica_boolean tmp1579;
  static const MMC_DEFSTRINGLIT(tmp1580,218,"Variable violating min/max constraint: Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough <= dc.roo.irRadExc.datConBou[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth, has value: ");
  modelica_string tmp1581;
  modelica_metatype tmpMeta1582;
  static int tmp1583 = 0;
  if(!tmp1583)
  {
    tmp1578 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[211]] /* dc.roo.irRadExc.datConBou[1].layers.roughness_a PARAM */),1);
    tmp1579 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[211]] /* dc.roo.irRadExc.datConBou[1].layers.roughness_a PARAM */),6);
    if(!(tmp1578 && tmp1579))
    {
      tmp1581 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[211]] /* dc.roo.irRadExc.datConBou[1].layers.roughness_a PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1582 = stringAppend(MMC_REFSTRINGLIT(tmp1580),tmp1581);
      {
        const char* assert_cond = "(dc.roo.irRadExc.datConBou[1].layers.roughness_a >= Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough and dc.roo.irRadExc.datConBou[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",25,4,27,35,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1582));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",25,4,27,35,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1582));
        }
      }
      tmp1583 = 1;
    }
  }
  threadData->lastEquationSolved = 4491;
}

/*
equation index: 4492
type: ALGORITHM

  assert(dc.roo.irRadExc.datConBou[1].layers.nSta[1] >= 1, "Variable violating min constraint: 1 <= dc.roo.irRadExc.datConBou[1].layers.nSta[1], has value: " + String(dc.roo.irRadExc.datConBou[1].layers.nSta[1], "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4492(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4492};
  modelica_boolean tmp1584;
  static const MMC_DEFSTRINGLIT(tmp1585,96,"Variable violating min constraint: 1 <= dc.roo.irRadExc.datConBou[1].layers.nSta[1], has value: ");
  modelica_string tmp1586;
  modelica_metatype tmpMeta1587;
  static int tmp1588 = 0;
  if(!tmp1588)
  {
    tmp1584 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[210]] /* dc.roo.irRadExc.datConBou[1].layers.nSta[1] PARAM */),((modelica_integer) 1));
    if(!tmp1584)
    {
      tmp1586 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[210]] /* dc.roo.irRadExc.datConBou[1].layers.nSta[1] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1587 = stringAppend(MMC_REFSTRINGLIT(tmp1585),tmp1586);
      {
        const char* assert_cond = "(dc.roo.irRadExc.datConBou[1].layers.nSta[1] >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",14,4,16,59,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1587));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",14,4,16,59,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1587));
        }
      }
      tmp1588 = 1;
    }
  }
  threadData->lastEquationSolved = 4492;
}

/*
equation index: 4493
type: ALGORITHM

  assert(dc.roo.irRadExc.datConBou[1].layers.material[1].TLiq >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConBou[1].layers.material[1].TLiq, has value: " + String(dc.roo.irRadExc.datConBou[1].layers.material[1].TLiq, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4493(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4493};
  modelica_boolean tmp1589;
  static const MMC_DEFSTRINGLIT(tmp1590,107,"Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConBou[1].layers.material[1].TLiq, has value: ");
  modelica_string tmp1591;
  modelica_metatype tmpMeta1592;
  static int tmp1593 = 0;
  if(!tmp1593)
  {
    tmp1589 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[731]] /* dc.roo.irRadExc.datConBou[1].layers.material[1].TLiq PARAM */),0.0);
    if(!tmp1589)
    {
      tmp1591 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[731]] /* dc.roo.irRadExc.datConBou[1].layers.material[1].TLiq PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1592 = stringAppend(MMC_REFSTRINGLIT(tmp1590),tmp1591);
      {
        const char* assert_cond = "(dc.roo.irRadExc.datConBou[1].layers.material[1].TLiq >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",33,5,35,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1592));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",33,5,35,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1592));
        }
      }
      tmp1593 = 1;
    }
  }
  threadData->lastEquationSolved = 4493;
}

/*
equation index: 4494
type: ALGORITHM

  assert(dc.roo.irRadExc.datConBou[1].layers.material[1].TSol >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConBou[1].layers.material[1].TSol, has value: " + String(dc.roo.irRadExc.datConBou[1].layers.material[1].TSol, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4494(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4494};
  modelica_boolean tmp1594;
  static const MMC_DEFSTRINGLIT(tmp1595,107,"Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConBou[1].layers.material[1].TSol, has value: ");
  modelica_string tmp1596;
  modelica_metatype tmpMeta1597;
  static int tmp1598 = 0;
  if(!tmp1598)
  {
    tmp1594 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[732]] /* dc.roo.irRadExc.datConBou[1].layers.material[1].TSol PARAM */),0.0);
    if(!tmp1594)
    {
      tmp1596 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[732]] /* dc.roo.irRadExc.datConBou[1].layers.material[1].TSol PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1597 = stringAppend(MMC_REFSTRINGLIT(tmp1595),tmp1596);
      {
        const char* assert_cond = "(dc.roo.irRadExc.datConBou[1].layers.material[1].TSol >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",30,5,32,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1597));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",30,5,32,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1597));
        }
      }
      tmp1598 = 1;
    }
  }
  threadData->lastEquationSolved = 4494;
}

/*
equation index: 4495
type: ALGORITHM

  assert(dc.roo.irRadExc.datConBou[1].layers.material[1].nStaReal >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConBou[1].layers.material[1].nStaReal, has value: " + String(dc.roo.irRadExc.datConBou[1].layers.material[1].nStaReal, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4495(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4495};
  modelica_boolean tmp1599;
  static const MMC_DEFSTRINGLIT(tmp1600,111,"Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConBou[1].layers.material[1].nStaReal, has value: ");
  modelica_string tmp1601;
  modelica_metatype tmpMeta1602;
  static int tmp1603 = 0;
  if(!tmp1603)
  {
    tmp1599 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[736]] /* dc.roo.irRadExc.datConBou[1].layers.material[1].nStaReal PARAM */),0.0);
    if(!tmp1599)
    {
      tmp1601 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[736]] /* dc.roo.irRadExc.datConBou[1].layers.material[1].nStaReal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1602 = stringAppend(MMC_REFSTRINGLIT(tmp1600),tmp1601);
      {
        const char* assert_cond = "(dc.roo.irRadExc.datConBou[1].layers.material[1].nStaReal >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",26,5,28,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1602));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",26,5,28,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1602));
        }
      }
      tmp1603 = 1;
    }
  }
  threadData->lastEquationSolved = 4495;
}

/*
equation index: 4496
type: ALGORITHM

  assert(dc.roo.irRadExc.datConBou[1].layers.material[1].nSta >= 1, "Variable violating min constraint: 1 <= dc.roo.irRadExc.datConBou[1].layers.material[1].nSta, has value: " + String(dc.roo.irRadExc.datConBou[1].layers.material[1].nSta, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4496(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4496};
  modelica_boolean tmp1604;
  static const MMC_DEFSTRINGLIT(tmp1605,105,"Variable violating min constraint: 1 <= dc.roo.irRadExc.datConBou[1].layers.material[1].nSta, has value: ");
  modelica_string tmp1606;
  modelica_metatype tmpMeta1607;
  static int tmp1608 = 0;
  if(!tmp1608)
  {
    tmp1604 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[207]] /* dc.roo.irRadExc.datConBou[1].layers.material[1].nSta PARAM */),((modelica_integer) 1));
    if(!tmp1604)
    {
      tmp1606 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[207]] /* dc.roo.irRadExc.datConBou[1].layers.material[1].nSta PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1607 = stringAppend(MMC_REFSTRINGLIT(tmp1605),tmp1606);
      {
        const char* assert_cond = "(dc.roo.irRadExc.datConBou[1].layers.material[1].nSta >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",14,5,16,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1607));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",14,5,16,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1607));
        }
      }
      tmp1608 = 1;
    }
  }
  threadData->lastEquationSolved = 4496;
}

/*
equation index: 4497
type: ALGORITHM

  assert(dc.roo.irRadExc.datConBou[1].layers.material[1].nStaRef >= 0, "Variable violating min constraint: 0 <= dc.roo.irRadExc.datConBou[1].layers.material[1].nStaRef, has value: " + String(dc.roo.irRadExc.datConBou[1].layers.material[1].nStaRef, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4497(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4497};
  modelica_boolean tmp1609;
  static const MMC_DEFSTRINGLIT(tmp1610,108,"Variable violating min constraint: 0 <= dc.roo.irRadExc.datConBou[1].layers.material[1].nStaRef, has value: ");
  modelica_string tmp1611;
  modelica_metatype tmpMeta1612;
  static int tmp1613 = 0;
  if(!tmp1613)
  {
    tmp1609 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[208]] /* dc.roo.irRadExc.datConBou[1].layers.material[1].nStaRef PARAM */),((modelica_integer) 0));
    if(!tmp1609)
    {
      tmp1611 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[208]] /* dc.roo.irRadExc.datConBou[1].layers.material[1].nStaRef PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1612 = stringAppend(MMC_REFSTRINGLIT(tmp1610),tmp1611);
      {
        const char* assert_cond = "(dc.roo.irRadExc.datConBou[1].layers.material[1].nStaRef >= 0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",12,5,13,76,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1612));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",12,5,13,76,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1612));
        }
      }
      tmp1613 = 1;
    }
  }
  threadData->lastEquationSolved = 4497;
}

/*
equation index: 4498
type: ALGORITHM

  assert(dc.roo.irRadExc.datConBou[1].layers.material[1].d >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConBou[1].layers.material[1].d, has value: " + String(dc.roo.irRadExc.datConBou[1].layers.material[1].d, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4498(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4498};
  modelica_boolean tmp1614;
  static const MMC_DEFSTRINGLIT(tmp1615,104,"Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConBou[1].layers.material[1].d, has value: ");
  modelica_string tmp1616;
  modelica_metatype tmpMeta1617;
  static int tmp1618 = 0;
  if(!tmp1618)
  {
    tmp1614 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[734]] /* dc.roo.irRadExc.datConBou[1].layers.material[1].d PARAM */),0.0);
    if(!tmp1614)
    {
      tmp1616 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[734]] /* dc.roo.irRadExc.datConBou[1].layers.material[1].d PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1617 = stringAppend(MMC_REFSTRINGLIT(tmp1615),tmp1616);
      {
        const char* assert_cond = "(dc.roo.irRadExc.datConBou[1].layers.material[1].d >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",9,5,9,57,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1617));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",9,5,9,57,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1617));
        }
      }
      tmp1618 = 1;
    }
  }
  threadData->lastEquationSolved = 4498;
}

/*
equation index: 4499
type: ALGORITHM

  assert(dc.roo.irRadExc.datConBou[1].layers.nLay >= 1, "Variable violating min constraint: 1 <= dc.roo.irRadExc.datConBou[1].layers.nLay, has value: " + String(dc.roo.irRadExc.datConBou[1].layers.nLay, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4499(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4499};
  modelica_boolean tmp1619;
  static const MMC_DEFSTRINGLIT(tmp1620,93,"Variable violating min constraint: 1 <= dc.roo.irRadExc.datConBou[1].layers.nLay, has value: ");
  modelica_string tmp1621;
  modelica_metatype tmpMeta1622;
  static int tmp1623 = 0;
  if(!tmp1623)
  {
    tmp1619 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[209]] /* dc.roo.irRadExc.datConBou[1].layers.nLay PARAM */),((modelica_integer) 1));
    if(!tmp1619)
    {
      tmp1621 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[209]] /* dc.roo.irRadExc.datConBou[1].layers.nLay PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1622 = stringAppend(MMC_REFSTRINGLIT(tmp1620),tmp1621);
      {
        const char* assert_cond = "(dc.roo.irRadExc.datConBou[1].layers.nLay >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",7,4,7,52,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1622));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",7,4,7,52,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1622));
        }
      }
      tmp1623 = 1;
    }
  }
  threadData->lastEquationSolved = 4499;
}

/*
equation index: 4500
type: ALGORITHM

  assert(dc.roo.irRadExc.datConPar[1].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.irRadExc.datConPar[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, "Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.irRadExc.datConPar[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: " + String(dc.roo.irRadExc.datConPar[1].boundaryCondition, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4500(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4500};
  modelica_boolean tmp1624;
  modelica_boolean tmp1625;
  static const MMC_DEFSTRINGLIT(tmp1626,249,"Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.irRadExc.datConPar[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: ");
  modelica_string tmp1627;
  modelica_metatype tmpMeta1628;
  static int tmp1629 = 0;
  if(!tmp1629)
  {
    tmp1624 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[224]] /* dc.roo.irRadExc.datConPar[1].boundaryCondition PARAM */),1);
    tmp1625 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[224]] /* dc.roo.irRadExc.datConPar[1].boundaryCondition PARAM */),2);
    if(!(tmp1624 && tmp1625))
    {
      tmp1627 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[224]] /* dc.roo.irRadExc.datConPar[1].boundaryCondition PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1628 = stringAppend(MMC_REFSTRINGLIT(tmp1626),tmp1627);
      {
        const char* assert_cond = "(dc.roo.irRadExc.datConPar[1].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.irRadExc.datConPar[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",43,3,46,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1628));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",43,3,46,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1628));
        }
      }
      tmp1629 = 1;
    }
  }
  threadData->lastEquationSolved = 4500;
}

/*
equation index: 4501
type: ALGORITHM

  assert(dc.roo.irRadExc.datConPar[1].T_b_start >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConPar[1].T_b_start, has value: " + String(dc.roo.irRadExc.datConPar[1].T_b_start, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4501(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4501};
  modelica_boolean tmp1630;
  static const MMC_DEFSTRINGLIT(tmp1631,93,"Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConPar[1].T_b_start, has value: ");
  modelica_string tmp1632;
  modelica_metatype tmpMeta1633;
  static int tmp1634 = 0;
  if(!tmp1634)
  {
    tmp1630 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[827]] /* dc.roo.irRadExc.datConPar[1].T_b_start PARAM */),0.0);
    if(!tmp1630)
    {
      tmp1632 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[827]] /* dc.roo.irRadExc.datConPar[1].T_b_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1633 = stringAppend(MMC_REFSTRINGLIT(tmp1631),tmp1632);
      {
        const char* assert_cond = "(dc.roo.irRadExc.datConPar[1].T_b_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",30,3,32,79,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1633));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",30,3,32,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1633));
        }
      }
      tmp1634 = 1;
    }
  }
  threadData->lastEquationSolved = 4501;
}

/*
equation index: 4502
type: ALGORITHM

  assert(dc.roo.irRadExc.datConPar[1].T_a_start >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConPar[1].T_a_start, has value: " + String(dc.roo.irRadExc.datConPar[1].T_a_start, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4502(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4502};
  modelica_boolean tmp1635;
  static const MMC_DEFSTRINGLIT(tmp1636,93,"Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConPar[1].T_a_start, has value: ");
  modelica_string tmp1637;
  modelica_metatype tmpMeta1638;
  static int tmp1639 = 0;
  if(!tmp1639)
  {
    tmp1635 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[826]] /* dc.roo.irRadExc.datConPar[1].T_a_start PARAM */),0.0);
    if(!tmp1635)
    {
      tmp1637 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[826]] /* dc.roo.irRadExc.datConPar[1].T_a_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1638 = stringAppend(MMC_REFSTRINGLIT(tmp1636),tmp1637);
      {
        const char* assert_cond = "(dc.roo.irRadExc.datConPar[1].T_a_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",27,3,29,79,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1638));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",27,3,29,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1638));
        }
      }
      tmp1639 = 1;
    }
  }
  threadData->lastEquationSolved = 4502;
}

/*
equation index: 4503
type: ALGORITHM

  assert(dc.roo.irRadExc.datConPar[1].layers.roughness_a >= Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough and dc.roo.irRadExc.datConPar[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth, "Variable violating min/max constraint: Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough <= dc.roo.irRadExc.datConPar[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth, has value: " + String(dc.roo.irRadExc.datConPar[1].layers.roughness_a, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4503(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4503};
  modelica_boolean tmp1640;
  modelica_boolean tmp1641;
  static const MMC_DEFSTRINGLIT(tmp1642,218,"Variable violating min/max constraint: Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough <= dc.roo.irRadExc.datConPar[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth, has value: ");
  modelica_string tmp1643;
  modelica_metatype tmpMeta1644;
  static int tmp1645 = 0;
  if(!tmp1645)
  {
    tmp1640 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[229]] /* dc.roo.irRadExc.datConPar[1].layers.roughness_a PARAM */),1);
    tmp1641 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[229]] /* dc.roo.irRadExc.datConPar[1].layers.roughness_a PARAM */),6);
    if(!(tmp1640 && tmp1641))
    {
      tmp1643 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[229]] /* dc.roo.irRadExc.datConPar[1].layers.roughness_a PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1644 = stringAppend(MMC_REFSTRINGLIT(tmp1642),tmp1643);
      {
        const char* assert_cond = "(dc.roo.irRadExc.datConPar[1].layers.roughness_a >= Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough and dc.roo.irRadExc.datConPar[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",25,4,27,35,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1644));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",25,4,27,35,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1644));
        }
      }
      tmp1645 = 1;
    }
  }
  threadData->lastEquationSolved = 4503;
}

/*
equation index: 4504
type: ALGORITHM

  assert(dc.roo.irRadExc.datConPar[1].layers.nSta[1] >= 1, "Variable violating min constraint: 1 <= dc.roo.irRadExc.datConPar[1].layers.nSta[1], has value: " + String(dc.roo.irRadExc.datConPar[1].layers.nSta[1], "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4504(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4504};
  modelica_boolean tmp1646;
  static const MMC_DEFSTRINGLIT(tmp1647,96,"Variable violating min constraint: 1 <= dc.roo.irRadExc.datConPar[1].layers.nSta[1], has value: ");
  modelica_string tmp1648;
  modelica_metatype tmpMeta1649;
  static int tmp1650 = 0;
  if(!tmp1650)
  {
    tmp1646 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[228]] /* dc.roo.irRadExc.datConPar[1].layers.nSta[1] PARAM */),((modelica_integer) 1));
    if(!tmp1646)
    {
      tmp1648 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[228]] /* dc.roo.irRadExc.datConPar[1].layers.nSta[1] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1649 = stringAppend(MMC_REFSTRINGLIT(tmp1647),tmp1648);
      {
        const char* assert_cond = "(dc.roo.irRadExc.datConPar[1].layers.nSta[1] >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",14,4,16,59,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1649));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",14,4,16,59,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1649));
        }
      }
      tmp1650 = 1;
    }
  }
  threadData->lastEquationSolved = 4504;
}

/*
equation index: 4505
type: ALGORITHM

  assert(dc.roo.irRadExc.datConPar[1].layers.material[1].TLiq >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConPar[1].layers.material[1].TLiq, has value: " + String(dc.roo.irRadExc.datConPar[1].layers.material[1].TLiq, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4505(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4505};
  modelica_boolean tmp1651;
  static const MMC_DEFSTRINGLIT(tmp1652,107,"Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConPar[1].layers.material[1].TLiq, has value: ");
  modelica_string tmp1653;
  modelica_metatype tmpMeta1654;
  static int tmp1655 = 0;
  if(!tmp1655)
  {
    tmp1651 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[836]] /* dc.roo.irRadExc.datConPar[1].layers.material[1].TLiq PARAM */),0.0);
    if(!tmp1651)
    {
      tmp1653 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[836]] /* dc.roo.irRadExc.datConPar[1].layers.material[1].TLiq PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1654 = stringAppend(MMC_REFSTRINGLIT(tmp1652),tmp1653);
      {
        const char* assert_cond = "(dc.roo.irRadExc.datConPar[1].layers.material[1].TLiq >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",33,5,35,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1654));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",33,5,35,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1654));
        }
      }
      tmp1655 = 1;
    }
  }
  threadData->lastEquationSolved = 4505;
}

/*
equation index: 4506
type: ALGORITHM

  assert(dc.roo.irRadExc.datConPar[1].layers.material[1].TSol >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConPar[1].layers.material[1].TSol, has value: " + String(dc.roo.irRadExc.datConPar[1].layers.material[1].TSol, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4506(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4506};
  modelica_boolean tmp1656;
  static const MMC_DEFSTRINGLIT(tmp1657,107,"Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConPar[1].layers.material[1].TSol, has value: ");
  modelica_string tmp1658;
  modelica_metatype tmpMeta1659;
  static int tmp1660 = 0;
  if(!tmp1660)
  {
    tmp1656 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[837]] /* dc.roo.irRadExc.datConPar[1].layers.material[1].TSol PARAM */),0.0);
    if(!tmp1656)
    {
      tmp1658 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[837]] /* dc.roo.irRadExc.datConPar[1].layers.material[1].TSol PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1659 = stringAppend(MMC_REFSTRINGLIT(tmp1657),tmp1658);
      {
        const char* assert_cond = "(dc.roo.irRadExc.datConPar[1].layers.material[1].TSol >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",30,5,32,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1659));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",30,5,32,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1659));
        }
      }
      tmp1660 = 1;
    }
  }
  threadData->lastEquationSolved = 4506;
}

/*
equation index: 4507
type: ALGORITHM

  assert(dc.roo.irRadExc.datConPar[1].layers.material[1].nStaReal >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConPar[1].layers.material[1].nStaReal, has value: " + String(dc.roo.irRadExc.datConPar[1].layers.material[1].nStaReal, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4507(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4507};
  modelica_boolean tmp1661;
  static const MMC_DEFSTRINGLIT(tmp1662,111,"Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConPar[1].layers.material[1].nStaReal, has value: ");
  modelica_string tmp1663;
  modelica_metatype tmpMeta1664;
  static int tmp1665 = 0;
  if(!tmp1665)
  {
    tmp1661 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[841]] /* dc.roo.irRadExc.datConPar[1].layers.material[1].nStaReal PARAM */),0.0);
    if(!tmp1661)
    {
      tmp1663 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[841]] /* dc.roo.irRadExc.datConPar[1].layers.material[1].nStaReal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1664 = stringAppend(MMC_REFSTRINGLIT(tmp1662),tmp1663);
      {
        const char* assert_cond = "(dc.roo.irRadExc.datConPar[1].layers.material[1].nStaReal >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",26,5,28,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1664));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",26,5,28,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1664));
        }
      }
      tmp1665 = 1;
    }
  }
  threadData->lastEquationSolved = 4507;
}

/*
equation index: 4508
type: ALGORITHM

  assert(dc.roo.irRadExc.datConPar[1].layers.material[1].nSta >= 1, "Variable violating min constraint: 1 <= dc.roo.irRadExc.datConPar[1].layers.material[1].nSta, has value: " + String(dc.roo.irRadExc.datConPar[1].layers.material[1].nSta, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4508(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4508};
  modelica_boolean tmp1666;
  static const MMC_DEFSTRINGLIT(tmp1667,105,"Variable violating min constraint: 1 <= dc.roo.irRadExc.datConPar[1].layers.material[1].nSta, has value: ");
  modelica_string tmp1668;
  modelica_metatype tmpMeta1669;
  static int tmp1670 = 0;
  if(!tmp1670)
  {
    tmp1666 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[225]] /* dc.roo.irRadExc.datConPar[1].layers.material[1].nSta PARAM */),((modelica_integer) 1));
    if(!tmp1666)
    {
      tmp1668 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[225]] /* dc.roo.irRadExc.datConPar[1].layers.material[1].nSta PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1669 = stringAppend(MMC_REFSTRINGLIT(tmp1667),tmp1668);
      {
        const char* assert_cond = "(dc.roo.irRadExc.datConPar[1].layers.material[1].nSta >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",14,5,16,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1669));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",14,5,16,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1669));
        }
      }
      tmp1670 = 1;
    }
  }
  threadData->lastEquationSolved = 4508;
}

/*
equation index: 4509
type: ALGORITHM

  assert(dc.roo.irRadExc.datConPar[1].layers.material[1].nStaRef >= 0, "Variable violating min constraint: 0 <= dc.roo.irRadExc.datConPar[1].layers.material[1].nStaRef, has value: " + String(dc.roo.irRadExc.datConPar[1].layers.material[1].nStaRef, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4509(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4509};
  modelica_boolean tmp1671;
  static const MMC_DEFSTRINGLIT(tmp1672,108,"Variable violating min constraint: 0 <= dc.roo.irRadExc.datConPar[1].layers.material[1].nStaRef, has value: ");
  modelica_string tmp1673;
  modelica_metatype tmpMeta1674;
  static int tmp1675 = 0;
  if(!tmp1675)
  {
    tmp1671 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[226]] /* dc.roo.irRadExc.datConPar[1].layers.material[1].nStaRef PARAM */),((modelica_integer) 0));
    if(!tmp1671)
    {
      tmp1673 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[226]] /* dc.roo.irRadExc.datConPar[1].layers.material[1].nStaRef PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1674 = stringAppend(MMC_REFSTRINGLIT(tmp1672),tmp1673);
      {
        const char* assert_cond = "(dc.roo.irRadExc.datConPar[1].layers.material[1].nStaRef >= 0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",12,5,13,76,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1674));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",12,5,13,76,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1674));
        }
      }
      tmp1675 = 1;
    }
  }
  threadData->lastEquationSolved = 4509;
}

/*
equation index: 4510
type: ALGORITHM

  assert(dc.roo.irRadExc.datConPar[1].layers.material[1].d >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConPar[1].layers.material[1].d, has value: " + String(dc.roo.irRadExc.datConPar[1].layers.material[1].d, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4510(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4510};
  modelica_boolean tmp1676;
  static const MMC_DEFSTRINGLIT(tmp1677,104,"Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConPar[1].layers.material[1].d, has value: ");
  modelica_string tmp1678;
  modelica_metatype tmpMeta1679;
  static int tmp1680 = 0;
  if(!tmp1680)
  {
    tmp1676 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[839]] /* dc.roo.irRadExc.datConPar[1].layers.material[1].d PARAM */),0.0);
    if(!tmp1676)
    {
      tmp1678 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[839]] /* dc.roo.irRadExc.datConPar[1].layers.material[1].d PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1679 = stringAppend(MMC_REFSTRINGLIT(tmp1677),tmp1678);
      {
        const char* assert_cond = "(dc.roo.irRadExc.datConPar[1].layers.material[1].d >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",9,5,9,57,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1679));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",9,5,9,57,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1679));
        }
      }
      tmp1680 = 1;
    }
  }
  threadData->lastEquationSolved = 4510;
}

/*
equation index: 4511
type: ALGORITHM

  assert(dc.roo.irRadExc.datConPar[1].layers.nLay >= 1, "Variable violating min constraint: 1 <= dc.roo.irRadExc.datConPar[1].layers.nLay, has value: " + String(dc.roo.irRadExc.datConPar[1].layers.nLay, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4511(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4511};
  modelica_boolean tmp1681;
  static const MMC_DEFSTRINGLIT(tmp1682,93,"Variable violating min constraint: 1 <= dc.roo.irRadExc.datConPar[1].layers.nLay, has value: ");
  modelica_string tmp1683;
  modelica_metatype tmpMeta1684;
  static int tmp1685 = 0;
  if(!tmp1685)
  {
    tmp1681 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[227]] /* dc.roo.irRadExc.datConPar[1].layers.nLay PARAM */),((modelica_integer) 1));
    if(!tmp1681)
    {
      tmp1683 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[227]] /* dc.roo.irRadExc.datConPar[1].layers.nLay PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1684 = stringAppend(MMC_REFSTRINGLIT(tmp1682),tmp1683);
      {
        const char* assert_cond = "(dc.roo.irRadExc.datConPar[1].layers.nLay >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",7,4,7,52,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1684));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",7,4,7,52,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1684));
        }
      }
      tmp1685 = 1;
    }
  }
  threadData->lastEquationSolved = 4511;
}

/*
equation index: 4512
type: ALGORITHM

  assert(dc.roo.irRadExc.datConExtWin[1].glaSys.gas[1].MM >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConExtWin[1].glaSys.gas[1].MM, has value: " + String(dc.roo.irRadExc.datConExtWin[1].glaSys.gas[1].MM, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4512(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4512};
  modelica_boolean tmp1686;
  static const MMC_DEFSTRINGLIT(tmp1687,103,"Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConExtWin[1].glaSys.gas[1].MM, has value: ");
  modelica_string tmp1688;
  modelica_metatype tmpMeta1689;
  static int tmp1690 = 0;
  if(!tmp1690)
  {
    tmp1686 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[774]] /* dc.roo.irRadExc.datConExtWin[1].glaSys.gas[1].MM PARAM */),0.0);
    if(!tmp1686)
    {
      tmp1688 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[774]] /* dc.roo.irRadExc.datConExtWin[1].glaSys.gas[1].MM PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1689 = stringAppend(MMC_REFSTRINGLIT(tmp1687),tmp1688);
      {
        const char* assert_cond = "(dc.roo.irRadExc.datConExtWin[1].glaSys.gas[1].MM >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/Gases.mo",21,5,22,48,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1689));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/Gases.mo",21,5,22,48,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1689));
        }
      }
      tmp1690 = 1;
    }
  }
  threadData->lastEquationSolved = 4512;
}

/*
equation index: 4513
type: ALGORITHM

  assert(dc.roo.irRadExc.datConExtWin[1].glaSys.gas[1].a_mu >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConExtWin[1].glaSys.gas[1].a_mu, has value: " + String(dc.roo.irRadExc.datConExtWin[1].glaSys.gas[1].a_mu, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4513(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4513};
  modelica_boolean tmp1691;
  static const MMC_DEFSTRINGLIT(tmp1692,105,"Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConExtWin[1].glaSys.gas[1].a_mu, has value: ");
  modelica_string tmp1693;
  modelica_metatype tmpMeta1694;
  static int tmp1695 = 0;
  if(!tmp1695)
  {
    tmp1691 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[778]] /* dc.roo.irRadExc.datConExtWin[1].glaSys.gas[1].a_mu PARAM */),0.0);
    if(!tmp1691)
    {
      tmp1693 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[778]] /* dc.roo.irRadExc.datConExtWin[1].glaSys.gas[1].a_mu PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1694 = stringAppend(MMC_REFSTRINGLIT(tmp1692),tmp1693);
      {
        const char* assert_cond = "(dc.roo.irRadExc.datConExtWin[1].glaSys.gas[1].a_mu >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/Gases.mo",12,5,13,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1694));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/Gases.mo",12,5,13,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1694));
        }
      }
      tmp1695 = 1;
    }
  }
  threadData->lastEquationSolved = 4513;
}

/*
equation index: 4514
type: ALGORITHM

  assert(dc.roo.irRadExc.datConExtWin[1].sidFin.gap >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConExtWin[1].sidFin.gap, has value: " + String(dc.roo.irRadExc.datConExtWin[1].sidFin.gap, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4514(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4514};
  modelica_boolean tmp1696;
  static const MMC_DEFSTRINGLIT(tmp1697,97,"Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConExtWin[1].sidFin.gap, has value: ");
  modelica_string tmp1698;
  modelica_metatype tmpMeta1699;
  static int tmp1700 = 0;
  if(!tmp1700)
  {
    tmp1696 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[821]] /* dc.roo.irRadExc.datConExtWin[1].sidFin.gap PARAM */),0.0);
    if(!tmp1696)
    {
      tmp1698 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[821]] /* dc.roo.irRadExc.datConExtWin[1].sidFin.gap PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1699 = stringAppend(MMC_REFSTRINGLIT(tmp1697),tmp1698);
      {
        const char* assert_cond = "(dc.roo.irRadExc.datConExtWin[1].sidFin.gap >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/SideFins.mo",10,3,12,57,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1699));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/SideFins.mo",10,3,12,57,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1699));
        }
      }
      tmp1700 = 1;
    }
  }
  threadData->lastEquationSolved = 4514;
}

/*
equation index: 4515
type: ALGORITHM

  assert(dc.roo.irRadExc.datConExtWin[1].sidFin.dep >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConExtWin[1].sidFin.dep, has value: " + String(dc.roo.irRadExc.datConExtWin[1].sidFin.dep, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4515(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4515};
  modelica_boolean tmp1701;
  static const MMC_DEFSTRINGLIT(tmp1702,97,"Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConExtWin[1].sidFin.dep, has value: ");
  modelica_string tmp1703;
  modelica_metatype tmpMeta1704;
  static int tmp1705 = 0;
  if(!tmp1705)
  {
    tmp1701 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[820]] /* dc.roo.irRadExc.datConExtWin[1].sidFin.dep PARAM */),0.0);
    if(!tmp1701)
    {
      tmp1703 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[820]] /* dc.roo.irRadExc.datConExtWin[1].sidFin.dep PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1704 = stringAppend(MMC_REFSTRINGLIT(tmp1702),tmp1703);
      {
        const char* assert_cond = "(dc.roo.irRadExc.datConExtWin[1].sidFin.dep >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/SideFins.mo",7,3,9,57,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1704));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/SideFins.mo",7,3,9,57,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1704));
        }
      }
      tmp1705 = 1;
    }
  }
  threadData->lastEquationSolved = 4515;
}

/*
equation index: 4516
type: ALGORITHM

  assert(dc.roo.irRadExc.datConExtWin[1].sidFin.h >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConExtWin[1].sidFin.h, has value: " + String(dc.roo.irRadExc.datConExtWin[1].sidFin.h, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4516(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4516};
  modelica_boolean tmp1706;
  static const MMC_DEFSTRINGLIT(tmp1707,95,"Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConExtWin[1].sidFin.h, has value: ");
  modelica_string tmp1708;
  modelica_metatype tmpMeta1709;
  static int tmp1710 = 0;
  if(!tmp1710)
  {
    tmp1706 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[822]] /* dc.roo.irRadExc.datConExtWin[1].sidFin.h PARAM */),0.0);
    if(!tmp1706)
    {
      tmp1708 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[822]] /* dc.roo.irRadExc.datConExtWin[1].sidFin.h PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1709 = stringAppend(MMC_REFSTRINGLIT(tmp1707),tmp1708);
      {
        const char* assert_cond = "(dc.roo.irRadExc.datConExtWin[1].sidFin.h >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/SideFins.mo",4,3,6,57,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1709));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/SideFins.mo",4,3,6,57,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1709));
        }
      }
      tmp1710 = 1;
    }
  }
  threadData->lastEquationSolved = 4516;
}

/*
equation index: 4517
type: ALGORITHM

  assert(dc.roo.irRadExc.datConExtWin[1].ove.gap >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConExtWin[1].ove.gap, has value: " + String(dc.roo.irRadExc.datConExtWin[1].ove.gap, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4517(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4517};
  modelica_boolean tmp1711;
  static const MMC_DEFSTRINGLIT(tmp1712,94,"Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConExtWin[1].ove.gap, has value: ");
  modelica_string tmp1713;
  modelica_metatype tmpMeta1714;
  static int tmp1715 = 0;
  if(!tmp1715)
  {
    tmp1711 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[817]] /* dc.roo.irRadExc.datConExtWin[1].ove.gap PARAM */),0.0);
    if(!tmp1711)
    {
      tmp1713 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[817]] /* dc.roo.irRadExc.datConExtWin[1].ove.gap PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1714 = stringAppend(MMC_REFSTRINGLIT(tmp1712),tmp1713);
      {
        const char* assert_cond = "(dc.roo.irRadExc.datConExtWin[1].ove.gap >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/Overhang.mo",15,3,17,57,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1714));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/Overhang.mo",15,3,17,57,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1714));
        }
      }
      tmp1715 = 1;
    }
  }
  threadData->lastEquationSolved = 4517;
}

/*
equation index: 4518
type: ALGORITHM

  assert(dc.roo.irRadExc.datConExtWin[1].ove.dep >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConExtWin[1].ove.dep, has value: " + String(dc.roo.irRadExc.datConExtWin[1].ove.dep, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4518(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4518};
  modelica_boolean tmp1716;
  static const MMC_DEFSTRINGLIT(tmp1717,94,"Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConExtWin[1].ove.dep, has value: ");
  modelica_string tmp1718;
  modelica_metatype tmpMeta1719;
  static int tmp1720 = 0;
  if(!tmp1720)
  {
    tmp1716 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[816]] /* dc.roo.irRadExc.datConExtWin[1].ove.dep PARAM */),0.0);
    if(!tmp1716)
    {
      tmp1718 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[816]] /* dc.roo.irRadExc.datConExtWin[1].ove.dep PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1719 = stringAppend(MMC_REFSTRINGLIT(tmp1717),tmp1718);
      {
        const char* assert_cond = "(dc.roo.irRadExc.datConExtWin[1].ove.dep >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/Overhang.mo",12,3,14,57,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1719));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/Overhang.mo",12,3,14,57,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1719));
        }
      }
      tmp1720 = 1;
    }
  }
  threadData->lastEquationSolved = 4518;
}

/*
equation index: 4519
type: ALGORITHM

  assert(dc.roo.irRadExc.datConExtWin[1].ove.wR >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConExtWin[1].ove.wR, has value: " + String(dc.roo.irRadExc.datConExtWin[1].ove.wR, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4519(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4519};
  modelica_boolean tmp1721;
  static const MMC_DEFSTRINGLIT(tmp1722,93,"Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConExtWin[1].ove.wR, has value: ");
  modelica_string tmp1723;
  modelica_metatype tmpMeta1724;
  static int tmp1725 = 0;
  if(!tmp1725)
  {
    tmp1721 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[819]] /* dc.roo.irRadExc.datConExtWin[1].ove.wR PARAM */),0.0);
    if(!tmp1721)
    {
      tmp1723 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[819]] /* dc.roo.irRadExc.datConExtWin[1].ove.wR PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1724 = stringAppend(MMC_REFSTRINGLIT(tmp1722),tmp1723);
      {
        const char* assert_cond = "(dc.roo.irRadExc.datConExtWin[1].ove.wR >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/Overhang.mo",8,3,10,57,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1724));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/Overhang.mo",8,3,10,57,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1724));
        }
      }
      tmp1725 = 1;
    }
  }
  threadData->lastEquationSolved = 4519;
}

/*
equation index: 4520
type: ALGORITHM

  assert(dc.roo.irRadExc.datConExtWin[1].ove.wL >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConExtWin[1].ove.wL, has value: " + String(dc.roo.irRadExc.datConExtWin[1].ove.wL, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4520(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4520};
  modelica_boolean tmp1726;
  static const MMC_DEFSTRINGLIT(tmp1727,93,"Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConExtWin[1].ove.wL, has value: ");
  modelica_string tmp1728;
  modelica_metatype tmpMeta1729;
  static int tmp1730 = 0;
  if(!tmp1730)
  {
    tmp1726 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[818]] /* dc.roo.irRadExc.datConExtWin[1].ove.wL PARAM */),0.0);
    if(!tmp1726)
    {
      tmp1728 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[818]] /* dc.roo.irRadExc.datConExtWin[1].ove.wL PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1729 = stringAppend(MMC_REFSTRINGLIT(tmp1727),tmp1728);
      {
        const char* assert_cond = "(dc.roo.irRadExc.datConExtWin[1].ove.wL >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/Overhang.mo",5,3,7,57,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1729));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/Overhang.mo",5,3,7,57,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1729));
        }
      }
      tmp1730 = 1;
    }
  }
  threadData->lastEquationSolved = 4520;
}

/*
equation index: 4521
type: ALGORITHM

  assert(dc.roo.irRadExc.datConExtWin[1].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.irRadExc.datConExtWin[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, "Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.irRadExc.datConExtWin[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: " + String(dc.roo.irRadExc.datConExtWin[1].boundaryCondition, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4521(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4521};
  modelica_boolean tmp1731;
  modelica_boolean tmp1732;
  static const MMC_DEFSTRINGLIT(tmp1733,252,"Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.irRadExc.datConExtWin[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: ");
  modelica_string tmp1734;
  modelica_metatype tmpMeta1735;
  static int tmp1736 = 0;
  if(!tmp1736)
  {
    tmp1731 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[218]] /* dc.roo.irRadExc.datConExtWin[1].boundaryCondition PARAM */),1);
    tmp1732 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[218]] /* dc.roo.irRadExc.datConExtWin[1].boundaryCondition PARAM */),2);
    if(!(tmp1731 && tmp1732))
    {
      tmp1734 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[218]] /* dc.roo.irRadExc.datConExtWin[1].boundaryCondition PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1735 = stringAppend(MMC_REFSTRINGLIT(tmp1733),tmp1734);
      {
        const char* assert_cond = "(dc.roo.irRadExc.datConExtWin[1].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.irRadExc.datConExtWin[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",43,3,46,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1735));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",43,3,46,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1735));
        }
      }
      tmp1736 = 1;
    }
  }
  threadData->lastEquationSolved = 4521;
}

/*
equation index: 4522
type: ALGORITHM

  assert(dc.roo.irRadExc.datConExtWin[1].T_b_start >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConExtWin[1].T_b_start, has value: " + String(dc.roo.irRadExc.datConExtWin[1].T_b_start, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4522(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4522};
  modelica_boolean tmp1737;
  static const MMC_DEFSTRINGLIT(tmp1738,96,"Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConExtWin[1].T_b_start, has value: ");
  modelica_string tmp1739;
  modelica_metatype tmpMeta1740;
  static int tmp1741 = 0;
  if(!tmp1741)
  {
    tmp1737 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[768]] /* dc.roo.irRadExc.datConExtWin[1].T_b_start PARAM */),0.0);
    if(!tmp1737)
    {
      tmp1739 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[768]] /* dc.roo.irRadExc.datConExtWin[1].T_b_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1740 = stringAppend(MMC_REFSTRINGLIT(tmp1738),tmp1739);
      {
        const char* assert_cond = "(dc.roo.irRadExc.datConExtWin[1].T_b_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",30,3,32,79,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1740));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",30,3,32,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1740));
        }
      }
      tmp1741 = 1;
    }
  }
  threadData->lastEquationSolved = 4522;
}

/*
equation index: 4523
type: ALGORITHM

  assert(dc.roo.irRadExc.datConExtWin[1].T_a_start >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConExtWin[1].T_a_start, has value: " + String(dc.roo.irRadExc.datConExtWin[1].T_a_start, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4523(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4523};
  modelica_boolean tmp1742;
  static const MMC_DEFSTRINGLIT(tmp1743,96,"Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConExtWin[1].T_a_start, has value: ");
  modelica_string tmp1744;
  modelica_metatype tmpMeta1745;
  static int tmp1746 = 0;
  if(!tmp1746)
  {
    tmp1742 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[767]] /* dc.roo.irRadExc.datConExtWin[1].T_a_start PARAM */),0.0);
    if(!tmp1742)
    {
      tmp1744 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[767]] /* dc.roo.irRadExc.datConExtWin[1].T_a_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1745 = stringAppend(MMC_REFSTRINGLIT(tmp1743),tmp1744);
      {
        const char* assert_cond = "(dc.roo.irRadExc.datConExtWin[1].T_a_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",27,3,29,79,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1745));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",27,3,29,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1745));
        }
      }
      tmp1746 = 1;
    }
  }
  threadData->lastEquationSolved = 4523;
}

/*
equation index: 4524
type: ALGORITHM

  assert(dc.roo.irRadExc.datConExtWin[1].layers.roughness_a >= Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough and dc.roo.irRadExc.datConExtWin[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth, "Variable violating min/max constraint: Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough <= dc.roo.irRadExc.datConExtWin[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth, has value: " + String(dc.roo.irRadExc.datConExtWin[1].layers.roughness_a, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4524(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4524};
  modelica_boolean tmp1747;
  modelica_boolean tmp1748;
  static const MMC_DEFSTRINGLIT(tmp1749,221,"Variable violating min/max constraint: Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough <= dc.roo.irRadExc.datConExtWin[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth, has value: ");
  modelica_string tmp1750;
  modelica_metatype tmpMeta1751;
  static int tmp1752 = 0;
  if(!tmp1752)
  {
    tmp1747 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[223]] /* dc.roo.irRadExc.datConExtWin[1].layers.roughness_a PARAM */),1);
    tmp1748 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[223]] /* dc.roo.irRadExc.datConExtWin[1].layers.roughness_a PARAM */),6);
    if(!(tmp1747 && tmp1748))
    {
      tmp1750 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[223]] /* dc.roo.irRadExc.datConExtWin[1].layers.roughness_a PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1751 = stringAppend(MMC_REFSTRINGLIT(tmp1749),tmp1750);
      {
        const char* assert_cond = "(dc.roo.irRadExc.datConExtWin[1].layers.roughness_a >= Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough and dc.roo.irRadExc.datConExtWin[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",25,4,27,35,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1751));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",25,4,27,35,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1751));
        }
      }
      tmp1752 = 1;
    }
  }
  threadData->lastEquationSolved = 4524;
}

/*
equation index: 4525
type: ALGORITHM

  assert(dc.roo.irRadExc.datConExtWin[1].layers.nSta[1] >= 1, "Variable violating min constraint: 1 <= dc.roo.irRadExc.datConExtWin[1].layers.nSta[1], has value: " + String(dc.roo.irRadExc.datConExtWin[1].layers.nSta[1], "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4525(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4525};
  modelica_boolean tmp1753;
  static const MMC_DEFSTRINGLIT(tmp1754,99,"Variable violating min constraint: 1 <= dc.roo.irRadExc.datConExtWin[1].layers.nSta[1], has value: ");
  modelica_string tmp1755;
  modelica_metatype tmpMeta1756;
  static int tmp1757 = 0;
  if(!tmp1757)
  {
    tmp1753 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[222]] /* dc.roo.irRadExc.datConExtWin[1].layers.nSta[1] PARAM */),((modelica_integer) 1));
    if(!tmp1753)
    {
      tmp1755 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[222]] /* dc.roo.irRadExc.datConExtWin[1].layers.nSta[1] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1756 = stringAppend(MMC_REFSTRINGLIT(tmp1754),tmp1755);
      {
        const char* assert_cond = "(dc.roo.irRadExc.datConExtWin[1].layers.nSta[1] >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",14,4,16,59,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1756));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",14,4,16,59,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1756));
        }
      }
      tmp1757 = 1;
    }
  }
  threadData->lastEquationSolved = 4525;
}

/*
equation index: 4526
type: ALGORITHM

  assert(dc.roo.irRadExc.datConExtWin[1].layers.material[1].TLiq >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConExtWin[1].layers.material[1].TLiq, has value: " + String(dc.roo.irRadExc.datConExtWin[1].layers.material[1].TLiq, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4526(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4526};
  modelica_boolean tmp1758;
  static const MMC_DEFSTRINGLIT(tmp1759,110,"Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConExtWin[1].layers.material[1].TLiq, has value: ");
  modelica_string tmp1760;
  modelica_metatype tmpMeta1761;
  static int tmp1762 = 0;
  if(!tmp1762)
  {
    tmp1758 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[807]] /* dc.roo.irRadExc.datConExtWin[1].layers.material[1].TLiq PARAM */),0.0);
    if(!tmp1758)
    {
      tmp1760 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[807]] /* dc.roo.irRadExc.datConExtWin[1].layers.material[1].TLiq PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1761 = stringAppend(MMC_REFSTRINGLIT(tmp1759),tmp1760);
      {
        const char* assert_cond = "(dc.roo.irRadExc.datConExtWin[1].layers.material[1].TLiq >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",33,5,35,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1761));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",33,5,35,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1761));
        }
      }
      tmp1762 = 1;
    }
  }
  threadData->lastEquationSolved = 4526;
}

/*
equation index: 4527
type: ALGORITHM

  assert(dc.roo.irRadExc.datConExtWin[1].layers.material[1].TSol >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConExtWin[1].layers.material[1].TSol, has value: " + String(dc.roo.irRadExc.datConExtWin[1].layers.material[1].TSol, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4527(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4527};
  modelica_boolean tmp1763;
  static const MMC_DEFSTRINGLIT(tmp1764,110,"Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConExtWin[1].layers.material[1].TSol, has value: ");
  modelica_string tmp1765;
  modelica_metatype tmpMeta1766;
  static int tmp1767 = 0;
  if(!tmp1767)
  {
    tmp1763 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[808]] /* dc.roo.irRadExc.datConExtWin[1].layers.material[1].TSol PARAM */),0.0);
    if(!tmp1763)
    {
      tmp1765 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[808]] /* dc.roo.irRadExc.datConExtWin[1].layers.material[1].TSol PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1766 = stringAppend(MMC_REFSTRINGLIT(tmp1764),tmp1765);
      {
        const char* assert_cond = "(dc.roo.irRadExc.datConExtWin[1].layers.material[1].TSol >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",30,5,32,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1766));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",30,5,32,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1766));
        }
      }
      tmp1767 = 1;
    }
  }
  threadData->lastEquationSolved = 4527;
}

/*
equation index: 4528
type: ALGORITHM

  assert(dc.roo.irRadExc.datConExtWin[1].layers.material[1].nStaReal >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConExtWin[1].layers.material[1].nStaReal, has value: " + String(dc.roo.irRadExc.datConExtWin[1].layers.material[1].nStaReal, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4528(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4528};
  modelica_boolean tmp1768;
  static const MMC_DEFSTRINGLIT(tmp1769,114,"Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConExtWin[1].layers.material[1].nStaReal, has value: ");
  modelica_string tmp1770;
  modelica_metatype tmpMeta1771;
  static int tmp1772 = 0;
  if(!tmp1772)
  {
    tmp1768 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[812]] /* dc.roo.irRadExc.datConExtWin[1].layers.material[1].nStaReal PARAM */),0.0);
    if(!tmp1768)
    {
      tmp1770 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[812]] /* dc.roo.irRadExc.datConExtWin[1].layers.material[1].nStaReal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1771 = stringAppend(MMC_REFSTRINGLIT(tmp1769),tmp1770);
      {
        const char* assert_cond = "(dc.roo.irRadExc.datConExtWin[1].layers.material[1].nStaReal >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",26,5,28,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1771));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",26,5,28,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1771));
        }
      }
      tmp1772 = 1;
    }
  }
  threadData->lastEquationSolved = 4528;
}

/*
equation index: 4529
type: ALGORITHM

  assert(dc.roo.irRadExc.datConExtWin[1].layers.material[1].nSta >= 1, "Variable violating min constraint: 1 <= dc.roo.irRadExc.datConExtWin[1].layers.material[1].nSta, has value: " + String(dc.roo.irRadExc.datConExtWin[1].layers.material[1].nSta, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4529(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4529};
  modelica_boolean tmp1773;
  static const MMC_DEFSTRINGLIT(tmp1774,108,"Variable violating min constraint: 1 <= dc.roo.irRadExc.datConExtWin[1].layers.material[1].nSta, has value: ");
  modelica_string tmp1775;
  modelica_metatype tmpMeta1776;
  static int tmp1777 = 0;
  if(!tmp1777)
  {
    tmp1773 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[219]] /* dc.roo.irRadExc.datConExtWin[1].layers.material[1].nSta PARAM */),((modelica_integer) 1));
    if(!tmp1773)
    {
      tmp1775 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[219]] /* dc.roo.irRadExc.datConExtWin[1].layers.material[1].nSta PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1776 = stringAppend(MMC_REFSTRINGLIT(tmp1774),tmp1775);
      {
        const char* assert_cond = "(dc.roo.irRadExc.datConExtWin[1].layers.material[1].nSta >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",14,5,16,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1776));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",14,5,16,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1776));
        }
      }
      tmp1777 = 1;
    }
  }
  threadData->lastEquationSolved = 4529;
}

/*
equation index: 4530
type: ALGORITHM

  assert(dc.roo.irRadExc.datConExtWin[1].layers.material[1].nStaRef >= 0, "Variable violating min constraint: 0 <= dc.roo.irRadExc.datConExtWin[1].layers.material[1].nStaRef, has value: " + String(dc.roo.irRadExc.datConExtWin[1].layers.material[1].nStaRef, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4530(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4530};
  modelica_boolean tmp1778;
  static const MMC_DEFSTRINGLIT(tmp1779,111,"Variable violating min constraint: 0 <= dc.roo.irRadExc.datConExtWin[1].layers.material[1].nStaRef, has value: ");
  modelica_string tmp1780;
  modelica_metatype tmpMeta1781;
  static int tmp1782 = 0;
  if(!tmp1782)
  {
    tmp1778 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[220]] /* dc.roo.irRadExc.datConExtWin[1].layers.material[1].nStaRef PARAM */),((modelica_integer) 0));
    if(!tmp1778)
    {
      tmp1780 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[220]] /* dc.roo.irRadExc.datConExtWin[1].layers.material[1].nStaRef PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1781 = stringAppend(MMC_REFSTRINGLIT(tmp1779),tmp1780);
      {
        const char* assert_cond = "(dc.roo.irRadExc.datConExtWin[1].layers.material[1].nStaRef >= 0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",12,5,13,76,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1781));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",12,5,13,76,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1781));
        }
      }
      tmp1782 = 1;
    }
  }
  threadData->lastEquationSolved = 4530;
}

/*
equation index: 4531
type: ALGORITHM

  assert(dc.roo.irRadExc.datConExtWin[1].layers.material[1].d >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConExtWin[1].layers.material[1].d, has value: " + String(dc.roo.irRadExc.datConExtWin[1].layers.material[1].d, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4531(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4531};
  modelica_boolean tmp1783;
  static const MMC_DEFSTRINGLIT(tmp1784,107,"Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConExtWin[1].layers.material[1].d, has value: ");
  modelica_string tmp1785;
  modelica_metatype tmpMeta1786;
  static int tmp1787 = 0;
  if(!tmp1787)
  {
    tmp1783 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[810]] /* dc.roo.irRadExc.datConExtWin[1].layers.material[1].d PARAM */),0.0);
    if(!tmp1783)
    {
      tmp1785 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[810]] /* dc.roo.irRadExc.datConExtWin[1].layers.material[1].d PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1786 = stringAppend(MMC_REFSTRINGLIT(tmp1784),tmp1785);
      {
        const char* assert_cond = "(dc.roo.irRadExc.datConExtWin[1].layers.material[1].d >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",9,5,9,57,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1786));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",9,5,9,57,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1786));
        }
      }
      tmp1787 = 1;
    }
  }
  threadData->lastEquationSolved = 4531;
}

/*
equation index: 4532
type: ALGORITHM

  assert(dc.roo.irRadExc.datConExtWin[1].layers.nLay >= 1, "Variable violating min constraint: 1 <= dc.roo.irRadExc.datConExtWin[1].layers.nLay, has value: " + String(dc.roo.irRadExc.datConExtWin[1].layers.nLay, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4532(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4532};
  modelica_boolean tmp1788;
  static const MMC_DEFSTRINGLIT(tmp1789,96,"Variable violating min constraint: 1 <= dc.roo.irRadExc.datConExtWin[1].layers.nLay, has value: ");
  modelica_string tmp1790;
  modelica_metatype tmpMeta1791;
  static int tmp1792 = 0;
  if(!tmp1792)
  {
    tmp1788 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[221]] /* dc.roo.irRadExc.datConExtWin[1].layers.nLay PARAM */),((modelica_integer) 1));
    if(!tmp1788)
    {
      tmp1790 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[221]] /* dc.roo.irRadExc.datConExtWin[1].layers.nLay PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1791 = stringAppend(MMC_REFSTRINGLIT(tmp1789),tmp1790);
      {
        const char* assert_cond = "(dc.roo.irRadExc.datConExtWin[1].layers.nLay >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",7,4,7,52,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1791));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",7,4,7,52,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1791));
        }
      }
      tmp1792 = 1;
    }
  }
  threadData->lastEquationSolved = 4532;
}

/*
equation index: 4533
type: ALGORITHM

  assert(dc.roo.irRadExc.datConExt[1].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.irRadExc.datConExt[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, "Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.irRadExc.datConExt[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: " + String(dc.roo.irRadExc.datConExt[1].boundaryCondition, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4533(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4533};
  modelica_boolean tmp1793;
  modelica_boolean tmp1794;
  static const MMC_DEFSTRINGLIT(tmp1795,249,"Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.irRadExc.datConExt[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: ");
  modelica_string tmp1796;
  modelica_metatype tmpMeta1797;
  static int tmp1798 = 0;
  if(!tmp1798)
  {
    tmp1793 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[212]] /* dc.roo.irRadExc.datConExt[1].boundaryCondition PARAM */),1);
    tmp1794 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[212]] /* dc.roo.irRadExc.datConExt[1].boundaryCondition PARAM */),2);
    if(!(tmp1793 && tmp1794))
    {
      tmp1796 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[212]] /* dc.roo.irRadExc.datConExt[1].boundaryCondition PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1797 = stringAppend(MMC_REFSTRINGLIT(tmp1795),tmp1796);
      {
        const char* assert_cond = "(dc.roo.irRadExc.datConExt[1].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.irRadExc.datConExt[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",43,3,46,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1797));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",43,3,46,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1797));
        }
      }
      tmp1798 = 1;
    }
  }
  threadData->lastEquationSolved = 4533;
}

/*
equation index: 4534
type: ALGORITHM

  assert(dc.roo.irRadExc.datConExt[1].T_b_start >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConExt[1].T_b_start, has value: " + String(dc.roo.irRadExc.datConExt[1].T_b_start, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4534(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4534};
  modelica_boolean tmp1799;
  static const MMC_DEFSTRINGLIT(tmp1800,93,"Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConExt[1].T_b_start, has value: ");
  modelica_string tmp1801;
  modelica_metatype tmpMeta1802;
  static int tmp1803 = 0;
  if(!tmp1803)
  {
    tmp1799 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[743]] /* dc.roo.irRadExc.datConExt[1].T_b_start PARAM */),0.0);
    if(!tmp1799)
    {
      tmp1801 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[743]] /* dc.roo.irRadExc.datConExt[1].T_b_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1802 = stringAppend(MMC_REFSTRINGLIT(tmp1800),tmp1801);
      {
        const char* assert_cond = "(dc.roo.irRadExc.datConExt[1].T_b_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",30,3,32,79,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1802));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",30,3,32,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1802));
        }
      }
      tmp1803 = 1;
    }
  }
  threadData->lastEquationSolved = 4534;
}

/*
equation index: 4535
type: ALGORITHM

  assert(dc.roo.irRadExc.datConExt[1].T_a_start >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConExt[1].T_a_start, has value: " + String(dc.roo.irRadExc.datConExt[1].T_a_start, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4535(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4535};
  modelica_boolean tmp1804;
  static const MMC_DEFSTRINGLIT(tmp1805,93,"Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConExt[1].T_a_start, has value: ");
  modelica_string tmp1806;
  modelica_metatype tmpMeta1807;
  static int tmp1808 = 0;
  if(!tmp1808)
  {
    tmp1804 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[742]] /* dc.roo.irRadExc.datConExt[1].T_a_start PARAM */),0.0);
    if(!tmp1804)
    {
      tmp1806 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[742]] /* dc.roo.irRadExc.datConExt[1].T_a_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1807 = stringAppend(MMC_REFSTRINGLIT(tmp1805),tmp1806);
      {
        const char* assert_cond = "(dc.roo.irRadExc.datConExt[1].T_a_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",27,3,29,79,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1807));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",27,3,29,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1807));
        }
      }
      tmp1808 = 1;
    }
  }
  threadData->lastEquationSolved = 4535;
}

/*
equation index: 4536
type: ALGORITHM

  assert(dc.roo.irRadExc.datConExt[1].layers.roughness_a >= Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough and dc.roo.irRadExc.datConExt[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth, "Variable violating min/max constraint: Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough <= dc.roo.irRadExc.datConExt[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth, has value: " + String(dc.roo.irRadExc.datConExt[1].layers.roughness_a, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4536(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4536};
  modelica_boolean tmp1809;
  modelica_boolean tmp1810;
  static const MMC_DEFSTRINGLIT(tmp1811,218,"Variable violating min/max constraint: Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough <= dc.roo.irRadExc.datConExt[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth, has value: ");
  modelica_string tmp1812;
  modelica_metatype tmpMeta1813;
  static int tmp1814 = 0;
  if(!tmp1814)
  {
    tmp1809 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[217]] /* dc.roo.irRadExc.datConExt[1].layers.roughness_a PARAM */),1);
    tmp1810 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[217]] /* dc.roo.irRadExc.datConExt[1].layers.roughness_a PARAM */),6);
    if(!(tmp1809 && tmp1810))
    {
      tmp1812 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[217]] /* dc.roo.irRadExc.datConExt[1].layers.roughness_a PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1813 = stringAppend(MMC_REFSTRINGLIT(tmp1811),tmp1812);
      {
        const char* assert_cond = "(dc.roo.irRadExc.datConExt[1].layers.roughness_a >= Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough and dc.roo.irRadExc.datConExt[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",25,4,27,35,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1813));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",25,4,27,35,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1813));
        }
      }
      tmp1814 = 1;
    }
  }
  threadData->lastEquationSolved = 4536;
}

/*
equation index: 4537
type: ALGORITHM

  assert(dc.roo.irRadExc.datConExt[1].layers.nSta[1] >= 1, "Variable violating min constraint: 1 <= dc.roo.irRadExc.datConExt[1].layers.nSta[1], has value: " + String(dc.roo.irRadExc.datConExt[1].layers.nSta[1], "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4537(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4537};
  modelica_boolean tmp1815;
  static const MMC_DEFSTRINGLIT(tmp1816,96,"Variable violating min constraint: 1 <= dc.roo.irRadExc.datConExt[1].layers.nSta[1], has value: ");
  modelica_string tmp1817;
  modelica_metatype tmpMeta1818;
  static int tmp1819 = 0;
  if(!tmp1819)
  {
    tmp1815 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[216]] /* dc.roo.irRadExc.datConExt[1].layers.nSta[1] PARAM */),((modelica_integer) 1));
    if(!tmp1815)
    {
      tmp1817 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[216]] /* dc.roo.irRadExc.datConExt[1].layers.nSta[1] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1818 = stringAppend(MMC_REFSTRINGLIT(tmp1816),tmp1817);
      {
        const char* assert_cond = "(dc.roo.irRadExc.datConExt[1].layers.nSta[1] >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",14,4,16,59,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1818));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",14,4,16,59,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1818));
        }
      }
      tmp1819 = 1;
    }
  }
  threadData->lastEquationSolved = 4537;
}

/*
equation index: 4538
type: ALGORITHM

  assert(dc.roo.irRadExc.datConExt[1].layers.material[1].TLiq >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConExt[1].layers.material[1].TLiq, has value: " + String(dc.roo.irRadExc.datConExt[1].layers.material[1].TLiq, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4538(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4538};
  modelica_boolean tmp1820;
  static const MMC_DEFSTRINGLIT(tmp1821,107,"Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConExt[1].layers.material[1].TLiq, has value: ");
  modelica_string tmp1822;
  modelica_metatype tmpMeta1823;
  static int tmp1824 = 0;
  if(!tmp1824)
  {
    tmp1820 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[752]] /* dc.roo.irRadExc.datConExt[1].layers.material[1].TLiq PARAM */),0.0);
    if(!tmp1820)
    {
      tmp1822 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[752]] /* dc.roo.irRadExc.datConExt[1].layers.material[1].TLiq PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1823 = stringAppend(MMC_REFSTRINGLIT(tmp1821),tmp1822);
      {
        const char* assert_cond = "(dc.roo.irRadExc.datConExt[1].layers.material[1].TLiq >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",33,5,35,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1823));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",33,5,35,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1823));
        }
      }
      tmp1824 = 1;
    }
  }
  threadData->lastEquationSolved = 4538;
}

/*
equation index: 4539
type: ALGORITHM

  assert(dc.roo.irRadExc.datConExt[1].layers.material[1].TSol >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConExt[1].layers.material[1].TSol, has value: " + String(dc.roo.irRadExc.datConExt[1].layers.material[1].TSol, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4539(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4539};
  modelica_boolean tmp1825;
  static const MMC_DEFSTRINGLIT(tmp1826,107,"Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConExt[1].layers.material[1].TSol, has value: ");
  modelica_string tmp1827;
  modelica_metatype tmpMeta1828;
  static int tmp1829 = 0;
  if(!tmp1829)
  {
    tmp1825 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[753]] /* dc.roo.irRadExc.datConExt[1].layers.material[1].TSol PARAM */),0.0);
    if(!tmp1825)
    {
      tmp1827 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[753]] /* dc.roo.irRadExc.datConExt[1].layers.material[1].TSol PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1828 = stringAppend(MMC_REFSTRINGLIT(tmp1826),tmp1827);
      {
        const char* assert_cond = "(dc.roo.irRadExc.datConExt[1].layers.material[1].TSol >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",30,5,32,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1828));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",30,5,32,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1828));
        }
      }
      tmp1829 = 1;
    }
  }
  threadData->lastEquationSolved = 4539;
}

/*
equation index: 4540
type: ALGORITHM

  assert(dc.roo.irRadExc.datConExt[1].layers.material[1].nStaReal >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConExt[1].layers.material[1].nStaReal, has value: " + String(dc.roo.irRadExc.datConExt[1].layers.material[1].nStaReal, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4540(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4540};
  modelica_boolean tmp1830;
  static const MMC_DEFSTRINGLIT(tmp1831,111,"Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConExt[1].layers.material[1].nStaReal, has value: ");
  modelica_string tmp1832;
  modelica_metatype tmpMeta1833;
  static int tmp1834 = 0;
  if(!tmp1834)
  {
    tmp1830 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[757]] /* dc.roo.irRadExc.datConExt[1].layers.material[1].nStaReal PARAM */),0.0);
    if(!tmp1830)
    {
      tmp1832 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[757]] /* dc.roo.irRadExc.datConExt[1].layers.material[1].nStaReal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1833 = stringAppend(MMC_REFSTRINGLIT(tmp1831),tmp1832);
      {
        const char* assert_cond = "(dc.roo.irRadExc.datConExt[1].layers.material[1].nStaReal >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",26,5,28,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1833));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",26,5,28,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1833));
        }
      }
      tmp1834 = 1;
    }
  }
  threadData->lastEquationSolved = 4540;
}

/*
equation index: 4541
type: ALGORITHM

  assert(dc.roo.irRadExc.datConExt[1].layers.material[1].nSta >= 1, "Variable violating min constraint: 1 <= dc.roo.irRadExc.datConExt[1].layers.material[1].nSta, has value: " + String(dc.roo.irRadExc.datConExt[1].layers.material[1].nSta, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4541(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4541};
  modelica_boolean tmp1835;
  static const MMC_DEFSTRINGLIT(tmp1836,105,"Variable violating min constraint: 1 <= dc.roo.irRadExc.datConExt[1].layers.material[1].nSta, has value: ");
  modelica_string tmp1837;
  modelica_metatype tmpMeta1838;
  static int tmp1839 = 0;
  if(!tmp1839)
  {
    tmp1835 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[213]] /* dc.roo.irRadExc.datConExt[1].layers.material[1].nSta PARAM */),((modelica_integer) 1));
    if(!tmp1835)
    {
      tmp1837 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[213]] /* dc.roo.irRadExc.datConExt[1].layers.material[1].nSta PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1838 = stringAppend(MMC_REFSTRINGLIT(tmp1836),tmp1837);
      {
        const char* assert_cond = "(dc.roo.irRadExc.datConExt[1].layers.material[1].nSta >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",14,5,16,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1838));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",14,5,16,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1838));
        }
      }
      tmp1839 = 1;
    }
  }
  threadData->lastEquationSolved = 4541;
}

/*
equation index: 4542
type: ALGORITHM

  assert(dc.roo.irRadExc.datConExt[1].layers.material[1].nStaRef >= 0, "Variable violating min constraint: 0 <= dc.roo.irRadExc.datConExt[1].layers.material[1].nStaRef, has value: " + String(dc.roo.irRadExc.datConExt[1].layers.material[1].nStaRef, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4542(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4542};
  modelica_boolean tmp1840;
  static const MMC_DEFSTRINGLIT(tmp1841,108,"Variable violating min constraint: 0 <= dc.roo.irRadExc.datConExt[1].layers.material[1].nStaRef, has value: ");
  modelica_string tmp1842;
  modelica_metatype tmpMeta1843;
  static int tmp1844 = 0;
  if(!tmp1844)
  {
    tmp1840 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[214]] /* dc.roo.irRadExc.datConExt[1].layers.material[1].nStaRef PARAM */),((modelica_integer) 0));
    if(!tmp1840)
    {
      tmp1842 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[214]] /* dc.roo.irRadExc.datConExt[1].layers.material[1].nStaRef PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1843 = stringAppend(MMC_REFSTRINGLIT(tmp1841),tmp1842);
      {
        const char* assert_cond = "(dc.roo.irRadExc.datConExt[1].layers.material[1].nStaRef >= 0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",12,5,13,76,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1843));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",12,5,13,76,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1843));
        }
      }
      tmp1844 = 1;
    }
  }
  threadData->lastEquationSolved = 4542;
}

/*
equation index: 4543
type: ALGORITHM

  assert(dc.roo.irRadExc.datConExt[1].layers.material[1].d >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConExt[1].layers.material[1].d, has value: " + String(dc.roo.irRadExc.datConExt[1].layers.material[1].d, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4543(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4543};
  modelica_boolean tmp1845;
  static const MMC_DEFSTRINGLIT(tmp1846,104,"Variable violating min constraint: 0.0 <= dc.roo.irRadExc.datConExt[1].layers.material[1].d, has value: ");
  modelica_string tmp1847;
  modelica_metatype tmpMeta1848;
  static int tmp1849 = 0;
  if(!tmp1849)
  {
    tmp1845 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[755]] /* dc.roo.irRadExc.datConExt[1].layers.material[1].d PARAM */),0.0);
    if(!tmp1845)
    {
      tmp1847 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[755]] /* dc.roo.irRadExc.datConExt[1].layers.material[1].d PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1848 = stringAppend(MMC_REFSTRINGLIT(tmp1846),tmp1847);
      {
        const char* assert_cond = "(dc.roo.irRadExc.datConExt[1].layers.material[1].d >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",9,5,9,57,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1848));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",9,5,9,57,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1848));
        }
      }
      tmp1849 = 1;
    }
  }
  threadData->lastEquationSolved = 4543;
}

/*
equation index: 4544
type: ALGORITHM

  assert(dc.roo.irRadExc.datConExt[1].layers.nLay >= 1, "Variable violating min constraint: 1 <= dc.roo.irRadExc.datConExt[1].layers.nLay, has value: " + String(dc.roo.irRadExc.datConExt[1].layers.nLay, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4544(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4544};
  modelica_boolean tmp1850;
  static const MMC_DEFSTRINGLIT(tmp1851,93,"Variable violating min constraint: 1 <= dc.roo.irRadExc.datConExt[1].layers.nLay, has value: ");
  modelica_string tmp1852;
  modelica_metatype tmpMeta1853;
  static int tmp1854 = 0;
  if(!tmp1854)
  {
    tmp1850 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[215]] /* dc.roo.irRadExc.datConExt[1].layers.nLay PARAM */),((modelica_integer) 1));
    if(!tmp1850)
    {
      tmp1852 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[215]] /* dc.roo.irRadExc.datConExt[1].layers.nLay PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1853 = stringAppend(MMC_REFSTRINGLIT(tmp1851),tmp1852);
      {
        const char* assert_cond = "(dc.roo.irRadExc.datConExt[1].layers.nLay >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",7,4,7,52,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1853));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",7,4,7,52,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1853));
        }
      }
      tmp1854 = 1;
    }
  }
  threadData->lastEquationSolved = 4544;
}

/*
equation index: 4545
type: ALGORITHM

  assert(dc.roo.irRadExc.NSurBou >= 1, "Variable violating min constraint: 1 <= dc.roo.irRadExc.NSurBou, has value: " + String(dc.roo.irRadExc.NSurBou, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4545(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4545};
  modelica_boolean tmp1855;
  static const MMC_DEFSTRINGLIT(tmp1856,76,"Variable violating min constraint: 1 <= dc.roo.irRadExc.NSurBou, has value: ");
  modelica_string tmp1857;
  modelica_metatype tmpMeta1858;
  static int tmp1859 = 0;
  if(!tmp1859)
  {
    tmp1855 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[203]] /* dc.roo.irRadExc.NSurBou PARAM */),((modelica_integer) 1));
    if(!tmp1855)
    {
      tmp1857 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[203]] /* dc.roo.irRadExc.NSurBou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1858 = stringAppend(MMC_REFSTRINGLIT(tmp1856),tmp1857);
      {
        const char* assert_cond = "(dc.roo.irRadExc.NSurBou >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",40,3,42,33,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1858));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",40,3,42,33,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1858));
        }
      }
      tmp1859 = 1;
    }
  }
  threadData->lastEquationSolved = 4545;
}

/*
equation index: 4546
type: ALGORITHM

  assert(dc.roo.irRadExc.NConBou >= 1, "Variable violating min constraint: 1 <= dc.roo.irRadExc.NConBou, has value: " + String(dc.roo.irRadExc.NConBou, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4546(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4546};
  modelica_boolean tmp1860;
  static const MMC_DEFSTRINGLIT(tmp1861,76,"Variable violating min constraint: 1 <= dc.roo.irRadExc.NConBou, has value: ");
  modelica_string tmp1862;
  modelica_metatype tmpMeta1863;
  static int tmp1864 = 0;
  if(!tmp1864)
  {
    tmp1860 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[198]] /* dc.roo.irRadExc.NConBou PARAM */),((modelica_integer) 1));
    if(!tmp1860)
    {
      tmp1862 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[198]] /* dc.roo.irRadExc.NConBou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1863 = stringAppend(MMC_REFSTRINGLIT(tmp1861),tmp1862);
      {
        const char* assert_cond = "(dc.roo.irRadExc.NConBou >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",36,3,38,33,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1863));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",36,3,38,33,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1863));
        }
      }
      tmp1864 = 1;
    }
  }
  threadData->lastEquationSolved = 4546;
}

/*
equation index: 4547
type: ALGORITHM

  assert(dc.roo.irRadExc.NConPar >= 1, "Variable violating min constraint: 1 <= dc.roo.irRadExc.NConPar, has value: " + String(dc.roo.irRadExc.NConPar, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4547(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4547};
  modelica_boolean tmp1865;
  static const MMC_DEFSTRINGLIT(tmp1866,76,"Variable violating min constraint: 1 <= dc.roo.irRadExc.NConPar, has value: ");
  modelica_string tmp1867;
  modelica_metatype tmpMeta1868;
  static int tmp1869 = 0;
  if(!tmp1869)
  {
    tmp1865 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[201]] /* dc.roo.irRadExc.NConPar PARAM */),((modelica_integer) 1));
    if(!tmp1865)
    {
      tmp1867 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[201]] /* dc.roo.irRadExc.NConPar PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1868 = stringAppend(MMC_REFSTRINGLIT(tmp1866),tmp1867);
      {
        const char* assert_cond = "(dc.roo.irRadExc.NConPar >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",32,3,34,33,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1868));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",32,3,34,33,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1868));
        }
      }
      tmp1869 = 1;
    }
  }
  threadData->lastEquationSolved = 4547;
}

/*
equation index: 4548
type: ALGORITHM

  assert(dc.roo.irRadExc.NConExtWin >= 1, "Variable violating min constraint: 1 <= dc.roo.irRadExc.NConExtWin, has value: " + String(dc.roo.irRadExc.NConExtWin, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4548(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4548};
  modelica_boolean tmp1870;
  static const MMC_DEFSTRINGLIT(tmp1871,79,"Variable violating min constraint: 1 <= dc.roo.irRadExc.NConExtWin, has value: ");
  modelica_string tmp1872;
  modelica_metatype tmpMeta1873;
  static int tmp1874 = 0;
  if(!tmp1874)
  {
    tmp1870 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[200]] /* dc.roo.irRadExc.NConExtWin PARAM */),((modelica_integer) 1));
    if(!tmp1870)
    {
      tmp1872 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[200]] /* dc.roo.irRadExc.NConExtWin PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1873 = stringAppend(MMC_REFSTRINGLIT(tmp1871),tmp1872);
      {
        const char* assert_cond = "(dc.roo.irRadExc.NConExtWin >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",28,3,30,33,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1873));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",28,3,30,33,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1873));
        }
      }
      tmp1874 = 1;
    }
  }
  threadData->lastEquationSolved = 4548;
}

/*
equation index: 4549
type: ALGORITHM

  assert(dc.roo.irRadExc.NConExt >= 1, "Variable violating min constraint: 1 <= dc.roo.irRadExc.NConExt, has value: " + String(dc.roo.irRadExc.NConExt, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4549(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4549};
  modelica_boolean tmp1875;
  static const MMC_DEFSTRINGLIT(tmp1876,76,"Variable violating min constraint: 1 <= dc.roo.irRadExc.NConExt, has value: ");
  modelica_string tmp1877;
  modelica_metatype tmpMeta1878;
  static int tmp1879 = 0;
  if(!tmp1879)
  {
    tmp1875 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[199]] /* dc.roo.irRadExc.NConExt PARAM */),((modelica_integer) 1));
    if(!tmp1875)
    {
      tmp1877 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[199]] /* dc.roo.irRadExc.NConExt PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1878 = stringAppend(MMC_REFSTRINGLIT(tmp1876),tmp1877);
      {
        const char* assert_cond = "(dc.roo.irRadExc.NConExt >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",24,3,26,33,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1878));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",24,3,26,33,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1878));
        }
      }
      tmp1879 = 1;
    }
  }
  threadData->lastEquationSolved = 4549;
}

/*
equation index: 4550
type: ALGORITHM

  assert(dc.roo.irRadExc.nSurBou >= 0, "Variable violating min constraint: 0 <= dc.roo.irRadExc.nSurBou, has value: " + String(dc.roo.irRadExc.nSurBou, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4550(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4550};
  modelica_boolean tmp1880;
  static const MMC_DEFSTRINGLIT(tmp1881,76,"Variable violating min constraint: 0 <= dc.roo.irRadExc.nSurBou, has value: ");
  modelica_string tmp1882;
  modelica_metatype tmpMeta1883;
  static int tmp1884 = 0;
  if(!tmp1884)
  {
    tmp1880 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[240]] /* dc.roo.irRadExc.nSurBou PARAM */),((modelica_integer) 0));
    if(!tmp1880)
    {
      tmp1882 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[240]] /* dc.roo.irRadExc.nSurBou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1883 = stringAppend(MMC_REFSTRINGLIT(tmp1881),tmp1882);
      {
        const char* assert_cond = "(dc.roo.irRadExc.nSurBou >= 0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",19,3,21,54,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1883));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",19,3,21,54,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1883));
        }
      }
      tmp1884 = 1;
    }
  }
  threadData->lastEquationSolved = 4550;
}

/*
equation index: 4551
type: ALGORITHM

  assert(dc.roo.irRadExc.nConBou >= 0, "Variable violating min constraint: 0 <= dc.roo.irRadExc.nConBou, has value: " + String(dc.roo.irRadExc.nConBou, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4551(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4551};
  modelica_boolean tmp1885;
  static const MMC_DEFSTRINGLIT(tmp1886,76,"Variable violating min constraint: 0 <= dc.roo.irRadExc.nConBou, has value: ");
  modelica_string tmp1887;
  modelica_metatype tmpMeta1888;
  static int tmp1889 = 0;
  if(!tmp1889)
  {
    tmp1885 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[235]] /* dc.roo.irRadExc.nConBou PARAM */),((modelica_integer) 0));
    if(!tmp1885)
    {
      tmp1887 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[235]] /* dc.roo.irRadExc.nConBou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1888 = stringAppend(MMC_REFSTRINGLIT(tmp1886),tmp1887);
      {
        const char* assert_cond = "(dc.roo.irRadExc.nConBou >= 0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",15,3,17,54,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1888));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",15,3,17,54,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1888));
        }
      }
      tmp1889 = 1;
    }
  }
  threadData->lastEquationSolved = 4551;
}

/*
equation index: 4552
type: ALGORITHM

  assert(dc.roo.irRadExc.nConPar >= 0, "Variable violating min constraint: 0 <= dc.roo.irRadExc.nConPar, has value: " + String(dc.roo.irRadExc.nConPar, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4552(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4552};
  modelica_boolean tmp1890;
  static const MMC_DEFSTRINGLIT(tmp1891,76,"Variable violating min constraint: 0 <= dc.roo.irRadExc.nConPar, has value: ");
  modelica_string tmp1892;
  modelica_metatype tmpMeta1893;
  static int tmp1894 = 0;
  if(!tmp1894)
  {
    tmp1890 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[238]] /* dc.roo.irRadExc.nConPar PARAM */),((modelica_integer) 0));
    if(!tmp1890)
    {
      tmp1892 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[238]] /* dc.roo.irRadExc.nConPar PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1893 = stringAppend(MMC_REFSTRINGLIT(tmp1891),tmp1892);
      {
        const char* assert_cond = "(dc.roo.irRadExc.nConPar >= 0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",12,3,13,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1893));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",12,3,13,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1893));
        }
      }
      tmp1894 = 1;
    }
  }
  threadData->lastEquationSolved = 4552;
}

/*
equation index: 4553
type: ALGORITHM

  assert(dc.roo.irRadExc.nConExtWin >= 0, "Variable violating min constraint: 0 <= dc.roo.irRadExc.nConExtWin, has value: " + String(dc.roo.irRadExc.nConExtWin, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4553(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4553};
  modelica_boolean tmp1895;
  static const MMC_DEFSTRINGLIT(tmp1896,79,"Variable violating min constraint: 0 <= dc.roo.irRadExc.nConExtWin, has value: ");
  modelica_string tmp1897;
  modelica_metatype tmpMeta1898;
  static int tmp1899 = 0;
  if(!tmp1899)
  {
    tmp1895 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[237]] /* dc.roo.irRadExc.nConExtWin PARAM */),((modelica_integer) 0));
    if(!tmp1895)
    {
      tmp1897 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[237]] /* dc.roo.irRadExc.nConExtWin PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1898 = stringAppend(MMC_REFSTRINGLIT(tmp1896),tmp1897);
      {
        const char* assert_cond = "(dc.roo.irRadExc.nConExtWin >= 0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",9,3,10,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1898));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",9,3,10,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1898));
        }
      }
      tmp1899 = 1;
    }
  }
  threadData->lastEquationSolved = 4553;
}

/*
equation index: 4554
type: ALGORITHM

  assert(dc.roo.irRadExc.nConExt >= 0, "Variable violating min constraint: 0 <= dc.roo.irRadExc.nConExt, has value: " + String(dc.roo.irRadExc.nConExt, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4554(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4554};
  modelica_boolean tmp1900;
  static const MMC_DEFSTRINGLIT(tmp1901,76,"Variable violating min constraint: 0 <= dc.roo.irRadExc.nConExt, has value: ");
  modelica_string tmp1902;
  modelica_metatype tmpMeta1903;
  static int tmp1904 = 0;
  if(!tmp1904)
  {
    tmp1900 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[236]] /* dc.roo.irRadExc.nConExt PARAM */),((modelica_integer) 0));
    if(!tmp1900)
    {
      tmp1902 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[236]] /* dc.roo.irRadExc.nConExt PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1903 = stringAppend(MMC_REFSTRINGLIT(tmp1901),tmp1902);
      {
        const char* assert_cond = "(dc.roo.irRadExc.nConExt >= 0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",7,3,8,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1903));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",7,3,8,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1903));
        }
      }
      tmp1904 = 1;
    }
  }
  threadData->lastEquationSolved = 4554;
}

/*
equation index: 4555
type: ALGORITHM

  assert(dc.roo.irRadGai.datConExtWin[1].fFra >= 0.0 and dc.roo.irRadGai.datConExtWin[1].fFra <= 1.0, "Variable violating min/max constraint: 0.0 <= dc.roo.irRadGai.datConExtWin[1].fFra <= 1.0, has value: " + String(dc.roo.irRadGai.datConExtWin[1].fFra, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4555(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4555};
  modelica_boolean tmp1905;
  modelica_boolean tmp1906;
  static const MMC_DEFSTRINGLIT(tmp1907,102,"Variable violating min/max constraint: 0.0 <= dc.roo.irRadGai.datConExtWin[1].fFra <= 1.0, has value: ");
  modelica_string tmp1908;
  modelica_metatype tmpMeta1909;
  static int tmp1910 = 0;
  if(!tmp1910)
  {
    tmp1905 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1027]] /* dc.roo.irRadGai.datConExtWin[1].fFra PARAM */),0.0);
    tmp1906 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1027]] /* dc.roo.irRadGai.datConExtWin[1].fFra PARAM */),1.0);
    if(!(tmp1905 && tmp1906))
    {
      tmp1908 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1027]] /* dc.roo.irRadGai.datConExtWin[1].fFra PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1909 = stringAppend(MMC_REFSTRINGLIT(tmp1907),tmp1908);
      {
        const char* assert_cond = "(dc.roo.irRadGai.datConExtWin[1].fFra >= 0.0 and dc.roo.irRadGai.datConExtWin[1].fFra <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ParameterConstructionWithWindow.mo",19,3,22,48,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1909));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ParameterConstructionWithWindow.mo",19,3,22,48,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1909));
        }
      }
      tmp1910 = 1;
    }
  }
  threadData->lastEquationSolved = 4555;
}

/*
equation index: 4556
type: ALGORITHM

  assert(dc.roo.irRadGai.dummyGlaSys.gas[1].MM >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadGai.dummyGlaSys.gas[1].MM, has value: " + String(dc.roo.irRadGai.dummyGlaSys.gas[1].MM, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4556(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4556};
  modelica_boolean tmp1911;
  static const MMC_DEFSTRINGLIT(tmp1912,92,"Variable violating min constraint: 0.0 <= dc.roo.irRadGai.dummyGlaSys.gas[1].MM, has value: ");
  modelica_string tmp1913;
  modelica_metatype tmpMeta1914;
  static int tmp1915 = 0;
  if(!tmp1915)
  {
    tmp1911 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1122]] /* dc.roo.irRadGai.dummyGlaSys.gas[1].MM PARAM */),0.0);
    if(!tmp1911)
    {
      tmp1913 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1122]] /* dc.roo.irRadGai.dummyGlaSys.gas[1].MM PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1914 = stringAppend(MMC_REFSTRINGLIT(tmp1912),tmp1913);
      {
        const char* assert_cond = "(dc.roo.irRadGai.dummyGlaSys.gas[1].MM >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/Gases.mo",21,5,22,48,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1914));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/Gases.mo",21,5,22,48,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1914));
        }
      }
      tmp1915 = 1;
    }
  }
  threadData->lastEquationSolved = 4556;
}

/*
equation index: 4557
type: ALGORITHM

  assert(dc.roo.irRadGai.dummyGlaSys.gas[1].a_mu >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadGai.dummyGlaSys.gas[1].a_mu, has value: " + String(dc.roo.irRadGai.dummyGlaSys.gas[1].a_mu, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4557(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4557};
  modelica_boolean tmp1916;
  static const MMC_DEFSTRINGLIT(tmp1917,94,"Variable violating min constraint: 0.0 <= dc.roo.irRadGai.dummyGlaSys.gas[1].a_mu, has value: ");
  modelica_string tmp1918;
  modelica_metatype tmpMeta1919;
  static int tmp1920 = 0;
  if(!tmp1920)
  {
    tmp1916 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1126]] /* dc.roo.irRadGai.dummyGlaSys.gas[1].a_mu PARAM */),0.0);
    if(!tmp1916)
    {
      tmp1918 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1126]] /* dc.roo.irRadGai.dummyGlaSys.gas[1].a_mu PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1919 = stringAppend(MMC_REFSTRINGLIT(tmp1917),tmp1918);
      {
        const char* assert_cond = "(dc.roo.irRadGai.dummyGlaSys.gas[1].a_mu >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/Gases.mo",12,5,13,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1919));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/Gases.mo",12,5,13,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1919));
        }
      }
      tmp1920 = 1;
    }
  }
  threadData->lastEquationSolved = 4557;
}

/*
equation index: 4558
type: ALGORITHM

  assert(dc.roo.irRadGai.dummyCon.roughness_a >= Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough and dc.roo.irRadGai.dummyCon.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth, "Variable violating min/max constraint: Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough <= dc.roo.irRadGai.dummyCon.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth, has value: " + String(dc.roo.irRadGai.dummyCon.roughness_a, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4558(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4558};
  modelica_boolean tmp1921;
  modelica_boolean tmp1922;
  static const MMC_DEFSTRINGLIT(tmp1923,207,"Variable violating min/max constraint: Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough <= dc.roo.irRadGai.dummyCon.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth, has value: ");
  modelica_string tmp1924;
  modelica_metatype tmpMeta1925;
  static int tmp1926 = 0;
  if(!tmp1926)
  {
    tmp1921 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[282]] /* dc.roo.irRadGai.dummyCon.roughness_a PARAM */),1);
    tmp1922 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[282]] /* dc.roo.irRadGai.dummyCon.roughness_a PARAM */),6);
    if(!(tmp1921 && tmp1922))
    {
      tmp1924 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[282]] /* dc.roo.irRadGai.dummyCon.roughness_a PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1925 = stringAppend(MMC_REFSTRINGLIT(tmp1923),tmp1924);
      {
        const char* assert_cond = "(dc.roo.irRadGai.dummyCon.roughness_a >= Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough and dc.roo.irRadGai.dummyCon.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",25,4,27,35,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1925));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",25,4,27,35,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1925));
        }
      }
      tmp1926 = 1;
    }
  }
  threadData->lastEquationSolved = 4558;
}

/*
equation index: 4559
type: ALGORITHM

  assert(dc.roo.irRadGai.dummyCon.nSta[1] >= 1, "Variable violating min constraint: 1 <= dc.roo.irRadGai.dummyCon.nSta[1], has value: " + String(dc.roo.irRadGai.dummyCon.nSta[1], "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4559(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4559};
  modelica_boolean tmp1927;
  static const MMC_DEFSTRINGLIT(tmp1928,85,"Variable violating min constraint: 1 <= dc.roo.irRadGai.dummyCon.nSta[1], has value: ");
  modelica_string tmp1929;
  modelica_metatype tmpMeta1930;
  static int tmp1931 = 0;
  if(!tmp1931)
  {
    tmp1927 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[281]] /* dc.roo.irRadGai.dummyCon.nSta[1] PARAM */),((modelica_integer) 1));
    if(!tmp1927)
    {
      tmp1929 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[281]] /* dc.roo.irRadGai.dummyCon.nSta[1] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1930 = stringAppend(MMC_REFSTRINGLIT(tmp1928),tmp1929);
      {
        const char* assert_cond = "(dc.roo.irRadGai.dummyCon.nSta[1] >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",14,4,16,59,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1930));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",14,4,16,59,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1930));
        }
      }
      tmp1931 = 1;
    }
  }
  threadData->lastEquationSolved = 4559;
}

/*
equation index: 4560
type: ALGORITHM

  assert(dc.roo.irRadGai.dummyCon.material[1].TLiq >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadGai.dummyCon.material[1].TLiq, has value: " + String(dc.roo.irRadGai.dummyCon.material[1].TLiq, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4560(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4560};
  modelica_boolean tmp1932;
  static const MMC_DEFSTRINGLIT(tmp1933,96,"Variable violating min constraint: 0.0 <= dc.roo.irRadGai.dummyCon.material[1].TLiq, has value: ");
  modelica_string tmp1934;
  modelica_metatype tmpMeta1935;
  static int tmp1936 = 0;
  if(!tmp1936)
  {
    tmp1932 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1110]] /* dc.roo.irRadGai.dummyCon.material[1].TLiq PARAM */),0.0);
    if(!tmp1932)
    {
      tmp1934 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1110]] /* dc.roo.irRadGai.dummyCon.material[1].TLiq PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1935 = stringAppend(MMC_REFSTRINGLIT(tmp1933),tmp1934);
      {
        const char* assert_cond = "(dc.roo.irRadGai.dummyCon.material[1].TLiq >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",33,5,35,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1935));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",33,5,35,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1935));
        }
      }
      tmp1936 = 1;
    }
  }
  threadData->lastEquationSolved = 4560;
}

/*
equation index: 4561
type: ALGORITHM

  assert(dc.roo.irRadGai.dummyCon.material[1].TSol >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadGai.dummyCon.material[1].TSol, has value: " + String(dc.roo.irRadGai.dummyCon.material[1].TSol, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4561(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4561};
  modelica_boolean tmp1937;
  static const MMC_DEFSTRINGLIT(tmp1938,96,"Variable violating min constraint: 0.0 <= dc.roo.irRadGai.dummyCon.material[1].TSol, has value: ");
  modelica_string tmp1939;
  modelica_metatype tmpMeta1940;
  static int tmp1941 = 0;
  if(!tmp1941)
  {
    tmp1937 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1111]] /* dc.roo.irRadGai.dummyCon.material[1].TSol PARAM */),0.0);
    if(!tmp1937)
    {
      tmp1939 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1111]] /* dc.roo.irRadGai.dummyCon.material[1].TSol PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1940 = stringAppend(MMC_REFSTRINGLIT(tmp1938),tmp1939);
      {
        const char* assert_cond = "(dc.roo.irRadGai.dummyCon.material[1].TSol >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",30,5,32,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1940));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",30,5,32,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1940));
        }
      }
      tmp1941 = 1;
    }
  }
  threadData->lastEquationSolved = 4561;
}

/*
equation index: 4562
type: ALGORITHM

  assert(dc.roo.irRadGai.dummyCon.material[1].nStaReal >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadGai.dummyCon.material[1].nStaReal, has value: " + String(dc.roo.irRadGai.dummyCon.material[1].nStaReal, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4562(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4562};
  modelica_boolean tmp1942;
  static const MMC_DEFSTRINGLIT(tmp1943,100,"Variable violating min constraint: 0.0 <= dc.roo.irRadGai.dummyCon.material[1].nStaReal, has value: ");
  modelica_string tmp1944;
  modelica_metatype tmpMeta1945;
  static int tmp1946 = 0;
  if(!tmp1946)
  {
    tmp1942 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1115]] /* dc.roo.irRadGai.dummyCon.material[1].nStaReal PARAM */),0.0);
    if(!tmp1942)
    {
      tmp1944 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1115]] /* dc.roo.irRadGai.dummyCon.material[1].nStaReal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1945 = stringAppend(MMC_REFSTRINGLIT(tmp1943),tmp1944);
      {
        const char* assert_cond = "(dc.roo.irRadGai.dummyCon.material[1].nStaReal >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",26,5,28,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1945));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",26,5,28,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1945));
        }
      }
      tmp1946 = 1;
    }
  }
  threadData->lastEquationSolved = 4562;
}

/*
equation index: 4563
type: ALGORITHM

  assert(dc.roo.irRadGai.dummyCon.material[1].nSta >= 1, "Variable violating min constraint: 1 <= dc.roo.irRadGai.dummyCon.material[1].nSta, has value: " + String(dc.roo.irRadGai.dummyCon.material[1].nSta, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4563(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4563};
  modelica_boolean tmp1947;
  static const MMC_DEFSTRINGLIT(tmp1948,94,"Variable violating min constraint: 1 <= dc.roo.irRadGai.dummyCon.material[1].nSta, has value: ");
  modelica_string tmp1949;
  modelica_metatype tmpMeta1950;
  static int tmp1951 = 0;
  if(!tmp1951)
  {
    tmp1947 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[278]] /* dc.roo.irRadGai.dummyCon.material[1].nSta PARAM */),((modelica_integer) 1));
    if(!tmp1947)
    {
      tmp1949 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[278]] /* dc.roo.irRadGai.dummyCon.material[1].nSta PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1950 = stringAppend(MMC_REFSTRINGLIT(tmp1948),tmp1949);
      {
        const char* assert_cond = "(dc.roo.irRadGai.dummyCon.material[1].nSta >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",14,5,16,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1950));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",14,5,16,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1950));
        }
      }
      tmp1951 = 1;
    }
  }
  threadData->lastEquationSolved = 4563;
}

/*
equation index: 4564
type: ALGORITHM

  assert(dc.roo.irRadGai.dummyCon.material[1].nStaRef >= 0, "Variable violating min constraint: 0 <= dc.roo.irRadGai.dummyCon.material[1].nStaRef, has value: " + String(dc.roo.irRadGai.dummyCon.material[1].nStaRef, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4564(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4564};
  modelica_boolean tmp1952;
  static const MMC_DEFSTRINGLIT(tmp1953,97,"Variable violating min constraint: 0 <= dc.roo.irRadGai.dummyCon.material[1].nStaRef, has value: ");
  modelica_string tmp1954;
  modelica_metatype tmpMeta1955;
  static int tmp1956 = 0;
  if(!tmp1956)
  {
    tmp1952 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[279]] /* dc.roo.irRadGai.dummyCon.material[1].nStaRef PARAM */),((modelica_integer) 0));
    if(!tmp1952)
    {
      tmp1954 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[279]] /* dc.roo.irRadGai.dummyCon.material[1].nStaRef PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1955 = stringAppend(MMC_REFSTRINGLIT(tmp1953),tmp1954);
      {
        const char* assert_cond = "(dc.roo.irRadGai.dummyCon.material[1].nStaRef >= 0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",12,5,13,76,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1955));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",12,5,13,76,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1955));
        }
      }
      tmp1956 = 1;
    }
  }
  threadData->lastEquationSolved = 4564;
}

/*
equation index: 4565
type: ALGORITHM

  assert(dc.roo.irRadGai.dummyCon.material[1].d >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadGai.dummyCon.material[1].d, has value: " + String(dc.roo.irRadGai.dummyCon.material[1].d, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4565(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4565};
  modelica_boolean tmp1957;
  static const MMC_DEFSTRINGLIT(tmp1958,93,"Variable violating min constraint: 0.0 <= dc.roo.irRadGai.dummyCon.material[1].d, has value: ");
  modelica_string tmp1959;
  modelica_metatype tmpMeta1960;
  static int tmp1961 = 0;
  if(!tmp1961)
  {
    tmp1957 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1113]] /* dc.roo.irRadGai.dummyCon.material[1].d PARAM */),0.0);
    if(!tmp1957)
    {
      tmp1959 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1113]] /* dc.roo.irRadGai.dummyCon.material[1].d PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1960 = stringAppend(MMC_REFSTRINGLIT(tmp1958),tmp1959);
      {
        const char* assert_cond = "(dc.roo.irRadGai.dummyCon.material[1].d >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",9,5,9,57,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1960));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",9,5,9,57,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1960));
        }
      }
      tmp1961 = 1;
    }
  }
  threadData->lastEquationSolved = 4565;
}

/*
equation index: 4566
type: ALGORITHM

  assert(dc.roo.irRadGai.dummyCon.nLay >= 1, "Variable violating min constraint: 1 <= dc.roo.irRadGai.dummyCon.nLay, has value: " + String(dc.roo.irRadGai.dummyCon.nLay, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4566(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4566};
  modelica_boolean tmp1962;
  static const MMC_DEFSTRINGLIT(tmp1963,82,"Variable violating min constraint: 1 <= dc.roo.irRadGai.dummyCon.nLay, has value: ");
  modelica_string tmp1964;
  modelica_metatype tmpMeta1965;
  static int tmp1966 = 0;
  if(!tmp1966)
  {
    tmp1962 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[280]] /* dc.roo.irRadGai.dummyCon.nLay PARAM */),((modelica_integer) 1));
    if(!tmp1962)
    {
      tmp1964 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[280]] /* dc.roo.irRadGai.dummyCon.nLay PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1965 = stringAppend(MMC_REFSTRINGLIT(tmp1963),tmp1964);
      {
        const char* assert_cond = "(dc.roo.irRadGai.dummyCon.nLay >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",7,4,7,52,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1965));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",7,4,7,52,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1965));
        }
      }
      tmp1966 = 1;
    }
  }
  threadData->lastEquationSolved = 4566;
}

/*
equation index: 4567
type: ALGORITHM

  assert(dc.roo.irRadGai.surBou[6].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.irRadGai.surBou[6].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, "Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.irRadGai.surBou[6].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: " + String(dc.roo.irRadGai.surBou[6].boundaryCondition, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4567(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4567};
  modelica_boolean tmp1967;
  modelica_boolean tmp1968;
  static const MMC_DEFSTRINGLIT(tmp1969,246,"Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.irRadGai.surBou[6].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: ");
  modelica_string tmp1970;
  modelica_metatype tmpMeta1971;
  static int tmp1972 = 0;
  if(!tmp1972)
  {
    tmp1967 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[293]] /* dc.roo.irRadGai.surBou[6].boundaryCondition PARAM */),1);
    tmp1968 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[293]] /* dc.roo.irRadGai.surBou[6].boundaryCondition PARAM */),2);
    if(!(tmp1967 && tmp1968))
    {
      tmp1970 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[293]] /* dc.roo.irRadGai.surBou[6].boundaryCondition PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1971 = stringAppend(MMC_REFSTRINGLIT(tmp1969),tmp1970);
      {
        const char* assert_cond = "(dc.roo.irRadGai.surBou[6].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.irRadGai.surBou[6].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/OpaqueSurface.mo",7,3,10,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1971));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/OpaqueSurface.mo",7,3,10,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1971));
        }
      }
      tmp1972 = 1;
    }
  }
  threadData->lastEquationSolved = 4567;
}

/*
equation index: 4568
type: ALGORITHM

  assert(dc.roo.irRadGai.surBou[5].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.irRadGai.surBou[5].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, "Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.irRadGai.surBou[5].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: " + String(dc.roo.irRadGai.surBou[5].boundaryCondition, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4568(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4568};
  modelica_boolean tmp1973;
  modelica_boolean tmp1974;
  static const MMC_DEFSTRINGLIT(tmp1975,246,"Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.irRadGai.surBou[5].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: ");
  modelica_string tmp1976;
  modelica_metatype tmpMeta1977;
  static int tmp1978 = 0;
  if(!tmp1978)
  {
    tmp1973 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[292]] /* dc.roo.irRadGai.surBou[5].boundaryCondition PARAM */),1);
    tmp1974 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[292]] /* dc.roo.irRadGai.surBou[5].boundaryCondition PARAM */),2);
    if(!(tmp1973 && tmp1974))
    {
      tmp1976 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[292]] /* dc.roo.irRadGai.surBou[5].boundaryCondition PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1977 = stringAppend(MMC_REFSTRINGLIT(tmp1975),tmp1976);
      {
        const char* assert_cond = "(dc.roo.irRadGai.surBou[5].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.irRadGai.surBou[5].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/OpaqueSurface.mo",7,3,10,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1977));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/OpaqueSurface.mo",7,3,10,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1977));
        }
      }
      tmp1978 = 1;
    }
  }
  threadData->lastEquationSolved = 4568;
}

/*
equation index: 4569
type: ALGORITHM

  assert(dc.roo.irRadGai.surBou[4].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.irRadGai.surBou[4].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, "Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.irRadGai.surBou[4].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: " + String(dc.roo.irRadGai.surBou[4].boundaryCondition, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4569(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4569};
  modelica_boolean tmp1979;
  modelica_boolean tmp1980;
  static const MMC_DEFSTRINGLIT(tmp1981,246,"Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.irRadGai.surBou[4].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: ");
  modelica_string tmp1982;
  modelica_metatype tmpMeta1983;
  static int tmp1984 = 0;
  if(!tmp1984)
  {
    tmp1979 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[291]] /* dc.roo.irRadGai.surBou[4].boundaryCondition PARAM */),1);
    tmp1980 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[291]] /* dc.roo.irRadGai.surBou[4].boundaryCondition PARAM */),2);
    if(!(tmp1979 && tmp1980))
    {
      tmp1982 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[291]] /* dc.roo.irRadGai.surBou[4].boundaryCondition PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1983 = stringAppend(MMC_REFSTRINGLIT(tmp1981),tmp1982);
      {
        const char* assert_cond = "(dc.roo.irRadGai.surBou[4].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.irRadGai.surBou[4].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/OpaqueSurface.mo",7,3,10,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1983));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/OpaqueSurface.mo",7,3,10,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1983));
        }
      }
      tmp1984 = 1;
    }
  }
  threadData->lastEquationSolved = 4569;
}

/*
equation index: 4570
type: ALGORITHM

  assert(dc.roo.irRadGai.surBou[3].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.irRadGai.surBou[3].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, "Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.irRadGai.surBou[3].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: " + String(dc.roo.irRadGai.surBou[3].boundaryCondition, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4570(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4570};
  modelica_boolean tmp1985;
  modelica_boolean tmp1986;
  static const MMC_DEFSTRINGLIT(tmp1987,246,"Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.irRadGai.surBou[3].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: ");
  modelica_string tmp1988;
  modelica_metatype tmpMeta1989;
  static int tmp1990 = 0;
  if(!tmp1990)
  {
    tmp1985 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[290]] /* dc.roo.irRadGai.surBou[3].boundaryCondition PARAM */),1);
    tmp1986 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[290]] /* dc.roo.irRadGai.surBou[3].boundaryCondition PARAM */),2);
    if(!(tmp1985 && tmp1986))
    {
      tmp1988 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[290]] /* dc.roo.irRadGai.surBou[3].boundaryCondition PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1989 = stringAppend(MMC_REFSTRINGLIT(tmp1987),tmp1988);
      {
        const char* assert_cond = "(dc.roo.irRadGai.surBou[3].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.irRadGai.surBou[3].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/OpaqueSurface.mo",7,3,10,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1989));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/OpaqueSurface.mo",7,3,10,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1989));
        }
      }
      tmp1990 = 1;
    }
  }
  threadData->lastEquationSolved = 4570;
}

/*
equation index: 4571
type: ALGORITHM

  assert(dc.roo.irRadGai.surBou[2].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.irRadGai.surBou[2].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, "Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.irRadGai.surBou[2].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: " + String(dc.roo.irRadGai.surBou[2].boundaryCondition, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4571(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4571};
  modelica_boolean tmp1991;
  modelica_boolean tmp1992;
  static const MMC_DEFSTRINGLIT(tmp1993,246,"Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.irRadGai.surBou[2].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: ");
  modelica_string tmp1994;
  modelica_metatype tmpMeta1995;
  static int tmp1996 = 0;
  if(!tmp1996)
  {
    tmp1991 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[289]] /* dc.roo.irRadGai.surBou[2].boundaryCondition PARAM */),1);
    tmp1992 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[289]] /* dc.roo.irRadGai.surBou[2].boundaryCondition PARAM */),2);
    if(!(tmp1991 && tmp1992))
    {
      tmp1994 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[289]] /* dc.roo.irRadGai.surBou[2].boundaryCondition PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1995 = stringAppend(MMC_REFSTRINGLIT(tmp1993),tmp1994);
      {
        const char* assert_cond = "(dc.roo.irRadGai.surBou[2].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.irRadGai.surBou[2].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/OpaqueSurface.mo",7,3,10,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1995));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/OpaqueSurface.mo",7,3,10,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1995));
        }
      }
      tmp1996 = 1;
    }
  }
  threadData->lastEquationSolved = 4571;
}

/*
equation index: 4572
type: ALGORITHM

  assert(dc.roo.irRadGai.surBou[1].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.irRadGai.surBou[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, "Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.irRadGai.surBou[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: " + String(dc.roo.irRadGai.surBou[1].boundaryCondition, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4572(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4572};
  modelica_boolean tmp1997;
  modelica_boolean tmp1998;
  static const MMC_DEFSTRINGLIT(tmp1999,246,"Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.irRadGai.surBou[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: ");
  modelica_string tmp2000;
  modelica_metatype tmpMeta2001;
  static int tmp2002 = 0;
  if(!tmp2002)
  {
    tmp1997 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[288]] /* dc.roo.irRadGai.surBou[1].boundaryCondition PARAM */),1);
    tmp1998 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[288]] /* dc.roo.irRadGai.surBou[1].boundaryCondition PARAM */),2);
    if(!(tmp1997 && tmp1998))
    {
      tmp2000 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[288]] /* dc.roo.irRadGai.surBou[1].boundaryCondition PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2001 = stringAppend(MMC_REFSTRINGLIT(tmp1999),tmp2000);
      {
        const char* assert_cond = "(dc.roo.irRadGai.surBou[1].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.irRadGai.surBou[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/OpaqueSurface.mo",7,3,10,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2001));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/OpaqueSurface.mo",7,3,10,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2001));
        }
      }
      tmp2002 = 1;
    }
  }
  threadData->lastEquationSolved = 4572;
}

/*
equation index: 4573
type: ALGORITHM

  assert(dc.roo.irRadGai.datConBou[1].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.irRadGai.datConBou[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, "Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.irRadGai.datConBou[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: " + String(dc.roo.irRadGai.datConBou[1].boundaryCondition, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4573(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4573};
  modelica_boolean tmp2003;
  modelica_boolean tmp2004;
  static const MMC_DEFSTRINGLIT(tmp2005,249,"Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.irRadGai.datConBou[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: ");
  modelica_string tmp2006;
  modelica_metatype tmpMeta2007;
  static int tmp2008 = 0;
  if(!tmp2008)
  {
    tmp2003 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[254]] /* dc.roo.irRadGai.datConBou[1].boundaryCondition PARAM */),1);
    tmp2004 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[254]] /* dc.roo.irRadGai.datConBou[1].boundaryCondition PARAM */),2);
    if(!(tmp2003 && tmp2004))
    {
      tmp2006 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[254]] /* dc.roo.irRadGai.datConBou[1].boundaryCondition PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2007 = stringAppend(MMC_REFSTRINGLIT(tmp2005),tmp2006);
      {
        const char* assert_cond = "(dc.roo.irRadGai.datConBou[1].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.irRadGai.datConBou[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",43,3,46,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2007));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",43,3,46,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2007));
        }
      }
      tmp2008 = 1;
    }
  }
  threadData->lastEquationSolved = 4573;
}

/*
equation index: 4574
type: ALGORITHM

  assert(dc.roo.irRadGai.datConBou[1].T_b_start >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConBou[1].T_b_start, has value: " + String(dc.roo.irRadGai.datConBou[1].T_b_start, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4574(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4574};
  modelica_boolean tmp2009;
  static const MMC_DEFSTRINGLIT(tmp2010,93,"Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConBou[1].T_b_start, has value: ");
  modelica_string tmp2011;
  modelica_metatype tmpMeta2012;
  static int tmp2013 = 0;
  if(!tmp2013)
  {
    tmp2009 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[979]] /* dc.roo.irRadGai.datConBou[1].T_b_start PARAM */),0.0);
    if(!tmp2009)
    {
      tmp2011 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[979]] /* dc.roo.irRadGai.datConBou[1].T_b_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2012 = stringAppend(MMC_REFSTRINGLIT(tmp2010),tmp2011);
      {
        const char* assert_cond = "(dc.roo.irRadGai.datConBou[1].T_b_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",30,3,32,79,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2012));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",30,3,32,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2012));
        }
      }
      tmp2013 = 1;
    }
  }
  threadData->lastEquationSolved = 4574;
}

/*
equation index: 4575
type: ALGORITHM

  assert(dc.roo.irRadGai.datConBou[1].T_a_start >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConBou[1].T_a_start, has value: " + String(dc.roo.irRadGai.datConBou[1].T_a_start, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4575(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4575};
  modelica_boolean tmp2014;
  static const MMC_DEFSTRINGLIT(tmp2015,93,"Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConBou[1].T_a_start, has value: ");
  modelica_string tmp2016;
  modelica_metatype tmpMeta2017;
  static int tmp2018 = 0;
  if(!tmp2018)
  {
    tmp2014 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[978]] /* dc.roo.irRadGai.datConBou[1].T_a_start PARAM */),0.0);
    if(!tmp2014)
    {
      tmp2016 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[978]] /* dc.roo.irRadGai.datConBou[1].T_a_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2017 = stringAppend(MMC_REFSTRINGLIT(tmp2015),tmp2016);
      {
        const char* assert_cond = "(dc.roo.irRadGai.datConBou[1].T_a_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",27,3,29,79,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2017));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",27,3,29,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2017));
        }
      }
      tmp2018 = 1;
    }
  }
  threadData->lastEquationSolved = 4575;
}

/*
equation index: 4576
type: ALGORITHM

  assert(dc.roo.irRadGai.datConBou[1].layers.roughness_a >= Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough and dc.roo.irRadGai.datConBou[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth, "Variable violating min/max constraint: Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough <= dc.roo.irRadGai.datConBou[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth, has value: " + String(dc.roo.irRadGai.datConBou[1].layers.roughness_a, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4576(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4576};
  modelica_boolean tmp2019;
  modelica_boolean tmp2020;
  static const MMC_DEFSTRINGLIT(tmp2021,218,"Variable violating min/max constraint: Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough <= dc.roo.irRadGai.datConBou[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth, has value: ");
  modelica_string tmp2022;
  modelica_metatype tmpMeta2023;
  static int tmp2024 = 0;
  if(!tmp2024)
  {
    tmp2019 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[259]] /* dc.roo.irRadGai.datConBou[1].layers.roughness_a PARAM */),1);
    tmp2020 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[259]] /* dc.roo.irRadGai.datConBou[1].layers.roughness_a PARAM */),6);
    if(!(tmp2019 && tmp2020))
    {
      tmp2022 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[259]] /* dc.roo.irRadGai.datConBou[1].layers.roughness_a PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2023 = stringAppend(MMC_REFSTRINGLIT(tmp2021),tmp2022);
      {
        const char* assert_cond = "(dc.roo.irRadGai.datConBou[1].layers.roughness_a >= Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough and dc.roo.irRadGai.datConBou[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",25,4,27,35,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2023));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",25,4,27,35,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2023));
        }
      }
      tmp2024 = 1;
    }
  }
  threadData->lastEquationSolved = 4576;
}

/*
equation index: 4577
type: ALGORITHM

  assert(dc.roo.irRadGai.datConBou[1].layers.nSta[1] >= 1, "Variable violating min constraint: 1 <= dc.roo.irRadGai.datConBou[1].layers.nSta[1], has value: " + String(dc.roo.irRadGai.datConBou[1].layers.nSta[1], "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4577(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4577};
  modelica_boolean tmp2025;
  static const MMC_DEFSTRINGLIT(tmp2026,96,"Variable violating min constraint: 1 <= dc.roo.irRadGai.datConBou[1].layers.nSta[1], has value: ");
  modelica_string tmp2027;
  modelica_metatype tmpMeta2028;
  static int tmp2029 = 0;
  if(!tmp2029)
  {
    tmp2025 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[258]] /* dc.roo.irRadGai.datConBou[1].layers.nSta[1] PARAM */),((modelica_integer) 1));
    if(!tmp2025)
    {
      tmp2027 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[258]] /* dc.roo.irRadGai.datConBou[1].layers.nSta[1] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2028 = stringAppend(MMC_REFSTRINGLIT(tmp2026),tmp2027);
      {
        const char* assert_cond = "(dc.roo.irRadGai.datConBou[1].layers.nSta[1] >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",14,4,16,59,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2028));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",14,4,16,59,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2028));
        }
      }
      tmp2029 = 1;
    }
  }
  threadData->lastEquationSolved = 4577;
}

/*
equation index: 4578
type: ALGORITHM

  assert(dc.roo.irRadGai.datConBou[1].layers.material[1].TLiq >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConBou[1].layers.material[1].TLiq, has value: " + String(dc.roo.irRadGai.datConBou[1].layers.material[1].TLiq, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4578(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4578};
  modelica_boolean tmp2030;
  static const MMC_DEFSTRINGLIT(tmp2031,107,"Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConBou[1].layers.material[1].TLiq, has value: ");
  modelica_string tmp2032;
  modelica_metatype tmpMeta2033;
  static int tmp2034 = 0;
  if(!tmp2034)
  {
    tmp2030 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[988]] /* dc.roo.irRadGai.datConBou[1].layers.material[1].TLiq PARAM */),0.0);
    if(!tmp2030)
    {
      tmp2032 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[988]] /* dc.roo.irRadGai.datConBou[1].layers.material[1].TLiq PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2033 = stringAppend(MMC_REFSTRINGLIT(tmp2031),tmp2032);
      {
        const char* assert_cond = "(dc.roo.irRadGai.datConBou[1].layers.material[1].TLiq >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",33,5,35,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2033));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",33,5,35,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2033));
        }
      }
      tmp2034 = 1;
    }
  }
  threadData->lastEquationSolved = 4578;
}

/*
equation index: 4579
type: ALGORITHM

  assert(dc.roo.irRadGai.datConBou[1].layers.material[1].TSol >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConBou[1].layers.material[1].TSol, has value: " + String(dc.roo.irRadGai.datConBou[1].layers.material[1].TSol, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4579(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4579};
  modelica_boolean tmp2035;
  static const MMC_DEFSTRINGLIT(tmp2036,107,"Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConBou[1].layers.material[1].TSol, has value: ");
  modelica_string tmp2037;
  modelica_metatype tmpMeta2038;
  static int tmp2039 = 0;
  if(!tmp2039)
  {
    tmp2035 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[989]] /* dc.roo.irRadGai.datConBou[1].layers.material[1].TSol PARAM */),0.0);
    if(!tmp2035)
    {
      tmp2037 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[989]] /* dc.roo.irRadGai.datConBou[1].layers.material[1].TSol PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2038 = stringAppend(MMC_REFSTRINGLIT(tmp2036),tmp2037);
      {
        const char* assert_cond = "(dc.roo.irRadGai.datConBou[1].layers.material[1].TSol >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",30,5,32,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2038));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",30,5,32,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2038));
        }
      }
      tmp2039 = 1;
    }
  }
  threadData->lastEquationSolved = 4579;
}

/*
equation index: 4580
type: ALGORITHM

  assert(dc.roo.irRadGai.datConBou[1].layers.material[1].nStaReal >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConBou[1].layers.material[1].nStaReal, has value: " + String(dc.roo.irRadGai.datConBou[1].layers.material[1].nStaReal, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4580(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4580};
  modelica_boolean tmp2040;
  static const MMC_DEFSTRINGLIT(tmp2041,111,"Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConBou[1].layers.material[1].nStaReal, has value: ");
  modelica_string tmp2042;
  modelica_metatype tmpMeta2043;
  static int tmp2044 = 0;
  if(!tmp2044)
  {
    tmp2040 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[993]] /* dc.roo.irRadGai.datConBou[1].layers.material[1].nStaReal PARAM */),0.0);
    if(!tmp2040)
    {
      tmp2042 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[993]] /* dc.roo.irRadGai.datConBou[1].layers.material[1].nStaReal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2043 = stringAppend(MMC_REFSTRINGLIT(tmp2041),tmp2042);
      {
        const char* assert_cond = "(dc.roo.irRadGai.datConBou[1].layers.material[1].nStaReal >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",26,5,28,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2043));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",26,5,28,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2043));
        }
      }
      tmp2044 = 1;
    }
  }
  threadData->lastEquationSolved = 4580;
}

/*
equation index: 4581
type: ALGORITHM

  assert(dc.roo.irRadGai.datConBou[1].layers.material[1].nSta >= 1, "Variable violating min constraint: 1 <= dc.roo.irRadGai.datConBou[1].layers.material[1].nSta, has value: " + String(dc.roo.irRadGai.datConBou[1].layers.material[1].nSta, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4581(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4581};
  modelica_boolean tmp2045;
  static const MMC_DEFSTRINGLIT(tmp2046,105,"Variable violating min constraint: 1 <= dc.roo.irRadGai.datConBou[1].layers.material[1].nSta, has value: ");
  modelica_string tmp2047;
  modelica_metatype tmpMeta2048;
  static int tmp2049 = 0;
  if(!tmp2049)
  {
    tmp2045 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[255]] /* dc.roo.irRadGai.datConBou[1].layers.material[1].nSta PARAM */),((modelica_integer) 1));
    if(!tmp2045)
    {
      tmp2047 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[255]] /* dc.roo.irRadGai.datConBou[1].layers.material[1].nSta PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2048 = stringAppend(MMC_REFSTRINGLIT(tmp2046),tmp2047);
      {
        const char* assert_cond = "(dc.roo.irRadGai.datConBou[1].layers.material[1].nSta >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",14,5,16,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2048));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",14,5,16,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2048));
        }
      }
      tmp2049 = 1;
    }
  }
  threadData->lastEquationSolved = 4581;
}

/*
equation index: 4582
type: ALGORITHM

  assert(dc.roo.irRadGai.datConBou[1].layers.material[1].nStaRef >= 0, "Variable violating min constraint: 0 <= dc.roo.irRadGai.datConBou[1].layers.material[1].nStaRef, has value: " + String(dc.roo.irRadGai.datConBou[1].layers.material[1].nStaRef, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4582(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4582};
  modelica_boolean tmp2050;
  static const MMC_DEFSTRINGLIT(tmp2051,108,"Variable violating min constraint: 0 <= dc.roo.irRadGai.datConBou[1].layers.material[1].nStaRef, has value: ");
  modelica_string tmp2052;
  modelica_metatype tmpMeta2053;
  static int tmp2054 = 0;
  if(!tmp2054)
  {
    tmp2050 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[256]] /* dc.roo.irRadGai.datConBou[1].layers.material[1].nStaRef PARAM */),((modelica_integer) 0));
    if(!tmp2050)
    {
      tmp2052 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[256]] /* dc.roo.irRadGai.datConBou[1].layers.material[1].nStaRef PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2053 = stringAppend(MMC_REFSTRINGLIT(tmp2051),tmp2052);
      {
        const char* assert_cond = "(dc.roo.irRadGai.datConBou[1].layers.material[1].nStaRef >= 0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",12,5,13,76,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2053));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",12,5,13,76,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2053));
        }
      }
      tmp2054 = 1;
    }
  }
  threadData->lastEquationSolved = 4582;
}

/*
equation index: 4583
type: ALGORITHM

  assert(dc.roo.irRadGai.datConBou[1].layers.material[1].d >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConBou[1].layers.material[1].d, has value: " + String(dc.roo.irRadGai.datConBou[1].layers.material[1].d, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4583(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4583};
  modelica_boolean tmp2055;
  static const MMC_DEFSTRINGLIT(tmp2056,104,"Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConBou[1].layers.material[1].d, has value: ");
  modelica_string tmp2057;
  modelica_metatype tmpMeta2058;
  static int tmp2059 = 0;
  if(!tmp2059)
  {
    tmp2055 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[991]] /* dc.roo.irRadGai.datConBou[1].layers.material[1].d PARAM */),0.0);
    if(!tmp2055)
    {
      tmp2057 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[991]] /* dc.roo.irRadGai.datConBou[1].layers.material[1].d PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2058 = stringAppend(MMC_REFSTRINGLIT(tmp2056),tmp2057);
      {
        const char* assert_cond = "(dc.roo.irRadGai.datConBou[1].layers.material[1].d >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",9,5,9,57,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2058));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",9,5,9,57,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2058));
        }
      }
      tmp2059 = 1;
    }
  }
  threadData->lastEquationSolved = 4583;
}

/*
equation index: 4584
type: ALGORITHM

  assert(dc.roo.irRadGai.datConBou[1].layers.nLay >= 1, "Variable violating min constraint: 1 <= dc.roo.irRadGai.datConBou[1].layers.nLay, has value: " + String(dc.roo.irRadGai.datConBou[1].layers.nLay, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4584(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4584};
  modelica_boolean tmp2060;
  static const MMC_DEFSTRINGLIT(tmp2061,93,"Variable violating min constraint: 1 <= dc.roo.irRadGai.datConBou[1].layers.nLay, has value: ");
  modelica_string tmp2062;
  modelica_metatype tmpMeta2063;
  static int tmp2064 = 0;
  if(!tmp2064)
  {
    tmp2060 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[257]] /* dc.roo.irRadGai.datConBou[1].layers.nLay PARAM */),((modelica_integer) 1));
    if(!tmp2060)
    {
      tmp2062 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[257]] /* dc.roo.irRadGai.datConBou[1].layers.nLay PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2063 = stringAppend(MMC_REFSTRINGLIT(tmp2061),tmp2062);
      {
        const char* assert_cond = "(dc.roo.irRadGai.datConBou[1].layers.nLay >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",7,4,7,52,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2063));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",7,4,7,52,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2063));
        }
      }
      tmp2064 = 1;
    }
  }
  threadData->lastEquationSolved = 4584;
}

/*
equation index: 4585
type: ALGORITHM

  assert(dc.roo.irRadGai.datConPar[1].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.irRadGai.datConPar[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, "Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.irRadGai.datConPar[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: " + String(dc.roo.irRadGai.datConPar[1].boundaryCondition, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4585(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4585};
  modelica_boolean tmp2065;
  modelica_boolean tmp2066;
  static const MMC_DEFSTRINGLIT(tmp2067,249,"Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.irRadGai.datConPar[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: ");
  modelica_string tmp2068;
  modelica_metatype tmpMeta2069;
  static int tmp2070 = 0;
  if(!tmp2070)
  {
    tmp2065 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[272]] /* dc.roo.irRadGai.datConPar[1].boundaryCondition PARAM */),1);
    tmp2066 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[272]] /* dc.roo.irRadGai.datConPar[1].boundaryCondition PARAM */),2);
    if(!(tmp2065 && tmp2066))
    {
      tmp2068 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[272]] /* dc.roo.irRadGai.datConPar[1].boundaryCondition PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2069 = stringAppend(MMC_REFSTRINGLIT(tmp2067),tmp2068);
      {
        const char* assert_cond = "(dc.roo.irRadGai.datConPar[1].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.irRadGai.datConPar[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",43,3,46,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2069));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",43,3,46,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2069));
        }
      }
      tmp2070 = 1;
    }
  }
  threadData->lastEquationSolved = 4585;
}

/*
equation index: 4586
type: ALGORITHM

  assert(dc.roo.irRadGai.datConPar[1].T_b_start >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConPar[1].T_b_start, has value: " + String(dc.roo.irRadGai.datConPar[1].T_b_start, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4586(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4586};
  modelica_boolean tmp2071;
  static const MMC_DEFSTRINGLIT(tmp2072,93,"Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConPar[1].T_b_start, has value: ");
  modelica_string tmp2073;
  modelica_metatype tmpMeta2074;
  static int tmp2075 = 0;
  if(!tmp2075)
  {
    tmp2071 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1084]] /* dc.roo.irRadGai.datConPar[1].T_b_start PARAM */),0.0);
    if(!tmp2071)
    {
      tmp2073 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1084]] /* dc.roo.irRadGai.datConPar[1].T_b_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2074 = stringAppend(MMC_REFSTRINGLIT(tmp2072),tmp2073);
      {
        const char* assert_cond = "(dc.roo.irRadGai.datConPar[1].T_b_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",30,3,32,79,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2074));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",30,3,32,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2074));
        }
      }
      tmp2075 = 1;
    }
  }
  threadData->lastEquationSolved = 4586;
}

/*
equation index: 4587
type: ALGORITHM

  assert(dc.roo.irRadGai.datConPar[1].T_a_start >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConPar[1].T_a_start, has value: " + String(dc.roo.irRadGai.datConPar[1].T_a_start, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4587(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4587};
  modelica_boolean tmp2076;
  static const MMC_DEFSTRINGLIT(tmp2077,93,"Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConPar[1].T_a_start, has value: ");
  modelica_string tmp2078;
  modelica_metatype tmpMeta2079;
  static int tmp2080 = 0;
  if(!tmp2080)
  {
    tmp2076 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1083]] /* dc.roo.irRadGai.datConPar[1].T_a_start PARAM */),0.0);
    if(!tmp2076)
    {
      tmp2078 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1083]] /* dc.roo.irRadGai.datConPar[1].T_a_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2079 = stringAppend(MMC_REFSTRINGLIT(tmp2077),tmp2078);
      {
        const char* assert_cond = "(dc.roo.irRadGai.datConPar[1].T_a_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",27,3,29,79,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2079));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",27,3,29,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2079));
        }
      }
      tmp2080 = 1;
    }
  }
  threadData->lastEquationSolved = 4587;
}

/*
equation index: 4588
type: ALGORITHM

  assert(dc.roo.irRadGai.datConPar[1].layers.roughness_a >= Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough and dc.roo.irRadGai.datConPar[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth, "Variable violating min/max constraint: Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough <= dc.roo.irRadGai.datConPar[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth, has value: " + String(dc.roo.irRadGai.datConPar[1].layers.roughness_a, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4588(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4588};
  modelica_boolean tmp2081;
  modelica_boolean tmp2082;
  static const MMC_DEFSTRINGLIT(tmp2083,218,"Variable violating min/max constraint: Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough <= dc.roo.irRadGai.datConPar[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth, has value: ");
  modelica_string tmp2084;
  modelica_metatype tmpMeta2085;
  static int tmp2086 = 0;
  if(!tmp2086)
  {
    tmp2081 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[277]] /* dc.roo.irRadGai.datConPar[1].layers.roughness_a PARAM */),1);
    tmp2082 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[277]] /* dc.roo.irRadGai.datConPar[1].layers.roughness_a PARAM */),6);
    if(!(tmp2081 && tmp2082))
    {
      tmp2084 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[277]] /* dc.roo.irRadGai.datConPar[1].layers.roughness_a PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2085 = stringAppend(MMC_REFSTRINGLIT(tmp2083),tmp2084);
      {
        const char* assert_cond = "(dc.roo.irRadGai.datConPar[1].layers.roughness_a >= Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough and dc.roo.irRadGai.datConPar[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",25,4,27,35,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2085));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",25,4,27,35,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2085));
        }
      }
      tmp2086 = 1;
    }
  }
  threadData->lastEquationSolved = 4588;
}

/*
equation index: 4589
type: ALGORITHM

  assert(dc.roo.irRadGai.datConPar[1].layers.nSta[1] >= 1, "Variable violating min constraint: 1 <= dc.roo.irRadGai.datConPar[1].layers.nSta[1], has value: " + String(dc.roo.irRadGai.datConPar[1].layers.nSta[1], "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4589(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4589};
  modelica_boolean tmp2087;
  static const MMC_DEFSTRINGLIT(tmp2088,96,"Variable violating min constraint: 1 <= dc.roo.irRadGai.datConPar[1].layers.nSta[1], has value: ");
  modelica_string tmp2089;
  modelica_metatype tmpMeta2090;
  static int tmp2091 = 0;
  if(!tmp2091)
  {
    tmp2087 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[276]] /* dc.roo.irRadGai.datConPar[1].layers.nSta[1] PARAM */),((modelica_integer) 1));
    if(!tmp2087)
    {
      tmp2089 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[276]] /* dc.roo.irRadGai.datConPar[1].layers.nSta[1] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2090 = stringAppend(MMC_REFSTRINGLIT(tmp2088),tmp2089);
      {
        const char* assert_cond = "(dc.roo.irRadGai.datConPar[1].layers.nSta[1] >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",14,4,16,59,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2090));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",14,4,16,59,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2090));
        }
      }
      tmp2091 = 1;
    }
  }
  threadData->lastEquationSolved = 4589;
}

/*
equation index: 4590
type: ALGORITHM

  assert(dc.roo.irRadGai.datConPar[1].layers.material[1].TLiq >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConPar[1].layers.material[1].TLiq, has value: " + String(dc.roo.irRadGai.datConPar[1].layers.material[1].TLiq, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4590(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4590};
  modelica_boolean tmp2092;
  static const MMC_DEFSTRINGLIT(tmp2093,107,"Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConPar[1].layers.material[1].TLiq, has value: ");
  modelica_string tmp2094;
  modelica_metatype tmpMeta2095;
  static int tmp2096 = 0;
  if(!tmp2096)
  {
    tmp2092 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1093]] /* dc.roo.irRadGai.datConPar[1].layers.material[1].TLiq PARAM */),0.0);
    if(!tmp2092)
    {
      tmp2094 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1093]] /* dc.roo.irRadGai.datConPar[1].layers.material[1].TLiq PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2095 = stringAppend(MMC_REFSTRINGLIT(tmp2093),tmp2094);
      {
        const char* assert_cond = "(dc.roo.irRadGai.datConPar[1].layers.material[1].TLiq >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",33,5,35,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2095));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",33,5,35,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2095));
        }
      }
      tmp2096 = 1;
    }
  }
  threadData->lastEquationSolved = 4590;
}

/*
equation index: 4591
type: ALGORITHM

  assert(dc.roo.irRadGai.datConPar[1].layers.material[1].TSol >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConPar[1].layers.material[1].TSol, has value: " + String(dc.roo.irRadGai.datConPar[1].layers.material[1].TSol, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4591(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4591};
  modelica_boolean tmp2097;
  static const MMC_DEFSTRINGLIT(tmp2098,107,"Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConPar[1].layers.material[1].TSol, has value: ");
  modelica_string tmp2099;
  modelica_metatype tmpMeta2100;
  static int tmp2101 = 0;
  if(!tmp2101)
  {
    tmp2097 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1094]] /* dc.roo.irRadGai.datConPar[1].layers.material[1].TSol PARAM */),0.0);
    if(!tmp2097)
    {
      tmp2099 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1094]] /* dc.roo.irRadGai.datConPar[1].layers.material[1].TSol PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2100 = stringAppend(MMC_REFSTRINGLIT(tmp2098),tmp2099);
      {
        const char* assert_cond = "(dc.roo.irRadGai.datConPar[1].layers.material[1].TSol >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",30,5,32,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2100));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",30,5,32,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2100));
        }
      }
      tmp2101 = 1;
    }
  }
  threadData->lastEquationSolved = 4591;
}

/*
equation index: 4592
type: ALGORITHM

  assert(dc.roo.irRadGai.datConPar[1].layers.material[1].nStaReal >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConPar[1].layers.material[1].nStaReal, has value: " + String(dc.roo.irRadGai.datConPar[1].layers.material[1].nStaReal, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4592(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4592};
  modelica_boolean tmp2102;
  static const MMC_DEFSTRINGLIT(tmp2103,111,"Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConPar[1].layers.material[1].nStaReal, has value: ");
  modelica_string tmp2104;
  modelica_metatype tmpMeta2105;
  static int tmp2106 = 0;
  if(!tmp2106)
  {
    tmp2102 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1098]] /* dc.roo.irRadGai.datConPar[1].layers.material[1].nStaReal PARAM */),0.0);
    if(!tmp2102)
    {
      tmp2104 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1098]] /* dc.roo.irRadGai.datConPar[1].layers.material[1].nStaReal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2105 = stringAppend(MMC_REFSTRINGLIT(tmp2103),tmp2104);
      {
        const char* assert_cond = "(dc.roo.irRadGai.datConPar[1].layers.material[1].nStaReal >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",26,5,28,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2105));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",26,5,28,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2105));
        }
      }
      tmp2106 = 1;
    }
  }
  threadData->lastEquationSolved = 4592;
}

/*
equation index: 4593
type: ALGORITHM

  assert(dc.roo.irRadGai.datConPar[1].layers.material[1].nSta >= 1, "Variable violating min constraint: 1 <= dc.roo.irRadGai.datConPar[1].layers.material[1].nSta, has value: " + String(dc.roo.irRadGai.datConPar[1].layers.material[1].nSta, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4593(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4593};
  modelica_boolean tmp2107;
  static const MMC_DEFSTRINGLIT(tmp2108,105,"Variable violating min constraint: 1 <= dc.roo.irRadGai.datConPar[1].layers.material[1].nSta, has value: ");
  modelica_string tmp2109;
  modelica_metatype tmpMeta2110;
  static int tmp2111 = 0;
  if(!tmp2111)
  {
    tmp2107 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[273]] /* dc.roo.irRadGai.datConPar[1].layers.material[1].nSta PARAM */),((modelica_integer) 1));
    if(!tmp2107)
    {
      tmp2109 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[273]] /* dc.roo.irRadGai.datConPar[1].layers.material[1].nSta PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2110 = stringAppend(MMC_REFSTRINGLIT(tmp2108),tmp2109);
      {
        const char* assert_cond = "(dc.roo.irRadGai.datConPar[1].layers.material[1].nSta >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",14,5,16,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2110));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",14,5,16,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2110));
        }
      }
      tmp2111 = 1;
    }
  }
  threadData->lastEquationSolved = 4593;
}

/*
equation index: 4594
type: ALGORITHM

  assert(dc.roo.irRadGai.datConPar[1].layers.material[1].nStaRef >= 0, "Variable violating min constraint: 0 <= dc.roo.irRadGai.datConPar[1].layers.material[1].nStaRef, has value: " + String(dc.roo.irRadGai.datConPar[1].layers.material[1].nStaRef, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4594(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4594};
  modelica_boolean tmp2112;
  static const MMC_DEFSTRINGLIT(tmp2113,108,"Variable violating min constraint: 0 <= dc.roo.irRadGai.datConPar[1].layers.material[1].nStaRef, has value: ");
  modelica_string tmp2114;
  modelica_metatype tmpMeta2115;
  static int tmp2116 = 0;
  if(!tmp2116)
  {
    tmp2112 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[274]] /* dc.roo.irRadGai.datConPar[1].layers.material[1].nStaRef PARAM */),((modelica_integer) 0));
    if(!tmp2112)
    {
      tmp2114 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[274]] /* dc.roo.irRadGai.datConPar[1].layers.material[1].nStaRef PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2115 = stringAppend(MMC_REFSTRINGLIT(tmp2113),tmp2114);
      {
        const char* assert_cond = "(dc.roo.irRadGai.datConPar[1].layers.material[1].nStaRef >= 0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",12,5,13,76,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2115));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",12,5,13,76,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2115));
        }
      }
      tmp2116 = 1;
    }
  }
  threadData->lastEquationSolved = 4594;
}

/*
equation index: 4595
type: ALGORITHM

  assert(dc.roo.irRadGai.datConPar[1].layers.material[1].d >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConPar[1].layers.material[1].d, has value: " + String(dc.roo.irRadGai.datConPar[1].layers.material[1].d, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4595(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4595};
  modelica_boolean tmp2117;
  static const MMC_DEFSTRINGLIT(tmp2118,104,"Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConPar[1].layers.material[1].d, has value: ");
  modelica_string tmp2119;
  modelica_metatype tmpMeta2120;
  static int tmp2121 = 0;
  if(!tmp2121)
  {
    tmp2117 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1096]] /* dc.roo.irRadGai.datConPar[1].layers.material[1].d PARAM */),0.0);
    if(!tmp2117)
    {
      tmp2119 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1096]] /* dc.roo.irRadGai.datConPar[1].layers.material[1].d PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2120 = stringAppend(MMC_REFSTRINGLIT(tmp2118),tmp2119);
      {
        const char* assert_cond = "(dc.roo.irRadGai.datConPar[1].layers.material[1].d >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",9,5,9,57,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2120));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",9,5,9,57,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2120));
        }
      }
      tmp2121 = 1;
    }
  }
  threadData->lastEquationSolved = 4595;
}

/*
equation index: 4596
type: ALGORITHM

  assert(dc.roo.irRadGai.datConPar[1].layers.nLay >= 1, "Variable violating min constraint: 1 <= dc.roo.irRadGai.datConPar[1].layers.nLay, has value: " + String(dc.roo.irRadGai.datConPar[1].layers.nLay, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4596(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4596};
  modelica_boolean tmp2122;
  static const MMC_DEFSTRINGLIT(tmp2123,93,"Variable violating min constraint: 1 <= dc.roo.irRadGai.datConPar[1].layers.nLay, has value: ");
  modelica_string tmp2124;
  modelica_metatype tmpMeta2125;
  static int tmp2126 = 0;
  if(!tmp2126)
  {
    tmp2122 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[275]] /* dc.roo.irRadGai.datConPar[1].layers.nLay PARAM */),((modelica_integer) 1));
    if(!tmp2122)
    {
      tmp2124 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[275]] /* dc.roo.irRadGai.datConPar[1].layers.nLay PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2125 = stringAppend(MMC_REFSTRINGLIT(tmp2123),tmp2124);
      {
        const char* assert_cond = "(dc.roo.irRadGai.datConPar[1].layers.nLay >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",7,4,7,52,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2125));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",7,4,7,52,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2125));
        }
      }
      tmp2126 = 1;
    }
  }
  threadData->lastEquationSolved = 4596;
}

/*
equation index: 4597
type: ALGORITHM

  assert(dc.roo.irRadGai.datConExtWin[1].glaSys.gas[1].MM >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConExtWin[1].glaSys.gas[1].MM, has value: " + String(dc.roo.irRadGai.datConExtWin[1].glaSys.gas[1].MM, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4597(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4597};
  modelica_boolean tmp2127;
  static const MMC_DEFSTRINGLIT(tmp2128,103,"Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConExtWin[1].glaSys.gas[1].MM, has value: ");
  modelica_string tmp2129;
  modelica_metatype tmpMeta2130;
  static int tmp2131 = 0;
  if(!tmp2131)
  {
    tmp2127 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1031]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.gas[1].MM PARAM */),0.0);
    if(!tmp2127)
    {
      tmp2129 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1031]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.gas[1].MM PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2130 = stringAppend(MMC_REFSTRINGLIT(tmp2128),tmp2129);
      {
        const char* assert_cond = "(dc.roo.irRadGai.datConExtWin[1].glaSys.gas[1].MM >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/Gases.mo",21,5,22,48,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2130));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/Gases.mo",21,5,22,48,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2130));
        }
      }
      tmp2131 = 1;
    }
  }
  threadData->lastEquationSolved = 4597;
}

/*
equation index: 4598
type: ALGORITHM

  assert(dc.roo.irRadGai.datConExtWin[1].glaSys.gas[1].a_mu >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConExtWin[1].glaSys.gas[1].a_mu, has value: " + String(dc.roo.irRadGai.datConExtWin[1].glaSys.gas[1].a_mu, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4598(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4598};
  modelica_boolean tmp2132;
  static const MMC_DEFSTRINGLIT(tmp2133,105,"Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConExtWin[1].glaSys.gas[1].a_mu, has value: ");
  modelica_string tmp2134;
  modelica_metatype tmpMeta2135;
  static int tmp2136 = 0;
  if(!tmp2136)
  {
    tmp2132 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1035]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.gas[1].a_mu PARAM */),0.0);
    if(!tmp2132)
    {
      tmp2134 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1035]] /* dc.roo.irRadGai.datConExtWin[1].glaSys.gas[1].a_mu PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2135 = stringAppend(MMC_REFSTRINGLIT(tmp2133),tmp2134);
      {
        const char* assert_cond = "(dc.roo.irRadGai.datConExtWin[1].glaSys.gas[1].a_mu >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/Gases.mo",12,5,13,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2135));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/Gases.mo",12,5,13,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2135));
        }
      }
      tmp2136 = 1;
    }
  }
  threadData->lastEquationSolved = 4598;
}

/*
equation index: 4599
type: ALGORITHM

  assert(dc.roo.irRadGai.datConExtWin[1].sidFin.gap >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConExtWin[1].sidFin.gap, has value: " + String(dc.roo.irRadGai.datConExtWin[1].sidFin.gap, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4599(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4599};
  modelica_boolean tmp2137;
  static const MMC_DEFSTRINGLIT(tmp2138,97,"Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConExtWin[1].sidFin.gap, has value: ");
  modelica_string tmp2139;
  modelica_metatype tmpMeta2140;
  static int tmp2141 = 0;
  if(!tmp2141)
  {
    tmp2137 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1078]] /* dc.roo.irRadGai.datConExtWin[1].sidFin.gap PARAM */),0.0);
    if(!tmp2137)
    {
      tmp2139 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1078]] /* dc.roo.irRadGai.datConExtWin[1].sidFin.gap PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2140 = stringAppend(MMC_REFSTRINGLIT(tmp2138),tmp2139);
      {
        const char* assert_cond = "(dc.roo.irRadGai.datConExtWin[1].sidFin.gap >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/SideFins.mo",10,3,12,57,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2140));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/SideFins.mo",10,3,12,57,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2140));
        }
      }
      tmp2141 = 1;
    }
  }
  threadData->lastEquationSolved = 4599;
}

/*
equation index: 4600
type: ALGORITHM

  assert(dc.roo.irRadGai.datConExtWin[1].sidFin.dep >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConExtWin[1].sidFin.dep, has value: " + String(dc.roo.irRadGai.datConExtWin[1].sidFin.dep, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4600(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4600};
  modelica_boolean tmp2142;
  static const MMC_DEFSTRINGLIT(tmp2143,97,"Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConExtWin[1].sidFin.dep, has value: ");
  modelica_string tmp2144;
  modelica_metatype tmpMeta2145;
  static int tmp2146 = 0;
  if(!tmp2146)
  {
    tmp2142 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1077]] /* dc.roo.irRadGai.datConExtWin[1].sidFin.dep PARAM */),0.0);
    if(!tmp2142)
    {
      tmp2144 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1077]] /* dc.roo.irRadGai.datConExtWin[1].sidFin.dep PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2145 = stringAppend(MMC_REFSTRINGLIT(tmp2143),tmp2144);
      {
        const char* assert_cond = "(dc.roo.irRadGai.datConExtWin[1].sidFin.dep >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/SideFins.mo",7,3,9,57,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2145));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/SideFins.mo",7,3,9,57,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2145));
        }
      }
      tmp2146 = 1;
    }
  }
  threadData->lastEquationSolved = 4600;
}

/*
equation index: 4601
type: ALGORITHM

  assert(dc.roo.irRadGai.datConExtWin[1].sidFin.h >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConExtWin[1].sidFin.h, has value: " + String(dc.roo.irRadGai.datConExtWin[1].sidFin.h, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4601(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4601};
  modelica_boolean tmp2147;
  static const MMC_DEFSTRINGLIT(tmp2148,95,"Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConExtWin[1].sidFin.h, has value: ");
  modelica_string tmp2149;
  modelica_metatype tmpMeta2150;
  static int tmp2151 = 0;
  if(!tmp2151)
  {
    tmp2147 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1079]] /* dc.roo.irRadGai.datConExtWin[1].sidFin.h PARAM */),0.0);
    if(!tmp2147)
    {
      tmp2149 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1079]] /* dc.roo.irRadGai.datConExtWin[1].sidFin.h PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2150 = stringAppend(MMC_REFSTRINGLIT(tmp2148),tmp2149);
      {
        const char* assert_cond = "(dc.roo.irRadGai.datConExtWin[1].sidFin.h >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/SideFins.mo",4,3,6,57,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2150));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/SideFins.mo",4,3,6,57,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2150));
        }
      }
      tmp2151 = 1;
    }
  }
  threadData->lastEquationSolved = 4601;
}

/*
equation index: 4602
type: ALGORITHM

  assert(dc.roo.irRadGai.datConExtWin[1].ove.gap >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConExtWin[1].ove.gap, has value: " + String(dc.roo.irRadGai.datConExtWin[1].ove.gap, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4602(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4602};
  modelica_boolean tmp2152;
  static const MMC_DEFSTRINGLIT(tmp2153,94,"Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConExtWin[1].ove.gap, has value: ");
  modelica_string tmp2154;
  modelica_metatype tmpMeta2155;
  static int tmp2156 = 0;
  if(!tmp2156)
  {
    tmp2152 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1074]] /* dc.roo.irRadGai.datConExtWin[1].ove.gap PARAM */),0.0);
    if(!tmp2152)
    {
      tmp2154 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1074]] /* dc.roo.irRadGai.datConExtWin[1].ove.gap PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2155 = stringAppend(MMC_REFSTRINGLIT(tmp2153),tmp2154);
      {
        const char* assert_cond = "(dc.roo.irRadGai.datConExtWin[1].ove.gap >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/Overhang.mo",15,3,17,57,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2155));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/Overhang.mo",15,3,17,57,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2155));
        }
      }
      tmp2156 = 1;
    }
  }
  threadData->lastEquationSolved = 4602;
}

/*
equation index: 4603
type: ALGORITHM

  assert(dc.roo.irRadGai.datConExtWin[1].ove.dep >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConExtWin[1].ove.dep, has value: " + String(dc.roo.irRadGai.datConExtWin[1].ove.dep, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4603(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4603};
  modelica_boolean tmp2157;
  static const MMC_DEFSTRINGLIT(tmp2158,94,"Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConExtWin[1].ove.dep, has value: ");
  modelica_string tmp2159;
  modelica_metatype tmpMeta2160;
  static int tmp2161 = 0;
  if(!tmp2161)
  {
    tmp2157 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1073]] /* dc.roo.irRadGai.datConExtWin[1].ove.dep PARAM */),0.0);
    if(!tmp2157)
    {
      tmp2159 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1073]] /* dc.roo.irRadGai.datConExtWin[1].ove.dep PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2160 = stringAppend(MMC_REFSTRINGLIT(tmp2158),tmp2159);
      {
        const char* assert_cond = "(dc.roo.irRadGai.datConExtWin[1].ove.dep >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/Overhang.mo",12,3,14,57,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2160));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/Overhang.mo",12,3,14,57,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2160));
        }
      }
      tmp2161 = 1;
    }
  }
  threadData->lastEquationSolved = 4603;
}

/*
equation index: 4604
type: ALGORITHM

  assert(dc.roo.irRadGai.datConExtWin[1].ove.wR >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConExtWin[1].ove.wR, has value: " + String(dc.roo.irRadGai.datConExtWin[1].ove.wR, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4604(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4604};
  modelica_boolean tmp2162;
  static const MMC_DEFSTRINGLIT(tmp2163,93,"Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConExtWin[1].ove.wR, has value: ");
  modelica_string tmp2164;
  modelica_metatype tmpMeta2165;
  static int tmp2166 = 0;
  if(!tmp2166)
  {
    tmp2162 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1076]] /* dc.roo.irRadGai.datConExtWin[1].ove.wR PARAM */),0.0);
    if(!tmp2162)
    {
      tmp2164 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1076]] /* dc.roo.irRadGai.datConExtWin[1].ove.wR PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2165 = stringAppend(MMC_REFSTRINGLIT(tmp2163),tmp2164);
      {
        const char* assert_cond = "(dc.roo.irRadGai.datConExtWin[1].ove.wR >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/Overhang.mo",8,3,10,57,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2165));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/Overhang.mo",8,3,10,57,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2165));
        }
      }
      tmp2166 = 1;
    }
  }
  threadData->lastEquationSolved = 4604;
}

/*
equation index: 4605
type: ALGORITHM

  assert(dc.roo.irRadGai.datConExtWin[1].ove.wL >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConExtWin[1].ove.wL, has value: " + String(dc.roo.irRadGai.datConExtWin[1].ove.wL, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4605(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4605};
  modelica_boolean tmp2167;
  static const MMC_DEFSTRINGLIT(tmp2168,93,"Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConExtWin[1].ove.wL, has value: ");
  modelica_string tmp2169;
  modelica_metatype tmpMeta2170;
  static int tmp2171 = 0;
  if(!tmp2171)
  {
    tmp2167 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1075]] /* dc.roo.irRadGai.datConExtWin[1].ove.wL PARAM */),0.0);
    if(!tmp2167)
    {
      tmp2169 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1075]] /* dc.roo.irRadGai.datConExtWin[1].ove.wL PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2170 = stringAppend(MMC_REFSTRINGLIT(tmp2168),tmp2169);
      {
        const char* assert_cond = "(dc.roo.irRadGai.datConExtWin[1].ove.wL >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/Overhang.mo",5,3,7,57,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2170));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/Overhang.mo",5,3,7,57,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2170));
        }
      }
      tmp2171 = 1;
    }
  }
  threadData->lastEquationSolved = 4605;
}

/*
equation index: 4606
type: ALGORITHM

  assert(dc.roo.irRadGai.datConExtWin[1].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.irRadGai.datConExtWin[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, "Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.irRadGai.datConExtWin[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: " + String(dc.roo.irRadGai.datConExtWin[1].boundaryCondition, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4606(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4606};
  modelica_boolean tmp2172;
  modelica_boolean tmp2173;
  static const MMC_DEFSTRINGLIT(tmp2174,252,"Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.irRadGai.datConExtWin[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: ");
  modelica_string tmp2175;
  modelica_metatype tmpMeta2176;
  static int tmp2177 = 0;
  if(!tmp2177)
  {
    tmp2172 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[266]] /* dc.roo.irRadGai.datConExtWin[1].boundaryCondition PARAM */),1);
    tmp2173 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[266]] /* dc.roo.irRadGai.datConExtWin[1].boundaryCondition PARAM */),2);
    if(!(tmp2172 && tmp2173))
    {
      tmp2175 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[266]] /* dc.roo.irRadGai.datConExtWin[1].boundaryCondition PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2176 = stringAppend(MMC_REFSTRINGLIT(tmp2174),tmp2175);
      {
        const char* assert_cond = "(dc.roo.irRadGai.datConExtWin[1].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.irRadGai.datConExtWin[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",43,3,46,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2176));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",43,3,46,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2176));
        }
      }
      tmp2177 = 1;
    }
  }
  threadData->lastEquationSolved = 4606;
}

/*
equation index: 4607
type: ALGORITHM

  assert(dc.roo.irRadGai.datConExtWin[1].T_b_start >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConExtWin[1].T_b_start, has value: " + String(dc.roo.irRadGai.datConExtWin[1].T_b_start, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4607(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4607};
  modelica_boolean tmp2178;
  static const MMC_DEFSTRINGLIT(tmp2179,96,"Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConExtWin[1].T_b_start, has value: ");
  modelica_string tmp2180;
  modelica_metatype tmpMeta2181;
  static int tmp2182 = 0;
  if(!tmp2182)
  {
    tmp2178 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1025]] /* dc.roo.irRadGai.datConExtWin[1].T_b_start PARAM */),0.0);
    if(!tmp2178)
    {
      tmp2180 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1025]] /* dc.roo.irRadGai.datConExtWin[1].T_b_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2181 = stringAppend(MMC_REFSTRINGLIT(tmp2179),tmp2180);
      {
        const char* assert_cond = "(dc.roo.irRadGai.datConExtWin[1].T_b_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",30,3,32,79,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2181));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",30,3,32,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2181));
        }
      }
      tmp2182 = 1;
    }
  }
  threadData->lastEquationSolved = 4607;
}

/*
equation index: 4608
type: ALGORITHM

  assert(dc.roo.irRadGai.datConExtWin[1].T_a_start >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConExtWin[1].T_a_start, has value: " + String(dc.roo.irRadGai.datConExtWin[1].T_a_start, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4608(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4608};
  modelica_boolean tmp2183;
  static const MMC_DEFSTRINGLIT(tmp2184,96,"Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConExtWin[1].T_a_start, has value: ");
  modelica_string tmp2185;
  modelica_metatype tmpMeta2186;
  static int tmp2187 = 0;
  if(!tmp2187)
  {
    tmp2183 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1024]] /* dc.roo.irRadGai.datConExtWin[1].T_a_start PARAM */),0.0);
    if(!tmp2183)
    {
      tmp2185 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1024]] /* dc.roo.irRadGai.datConExtWin[1].T_a_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2186 = stringAppend(MMC_REFSTRINGLIT(tmp2184),tmp2185);
      {
        const char* assert_cond = "(dc.roo.irRadGai.datConExtWin[1].T_a_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",27,3,29,79,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2186));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",27,3,29,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2186));
        }
      }
      tmp2187 = 1;
    }
  }
  threadData->lastEquationSolved = 4608;
}

/*
equation index: 4609
type: ALGORITHM

  assert(dc.roo.irRadGai.datConExtWin[1].layers.roughness_a >= Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough and dc.roo.irRadGai.datConExtWin[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth, "Variable violating min/max constraint: Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough <= dc.roo.irRadGai.datConExtWin[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth, has value: " + String(dc.roo.irRadGai.datConExtWin[1].layers.roughness_a, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4609(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4609};
  modelica_boolean tmp2188;
  modelica_boolean tmp2189;
  static const MMC_DEFSTRINGLIT(tmp2190,221,"Variable violating min/max constraint: Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough <= dc.roo.irRadGai.datConExtWin[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth, has value: ");
  modelica_string tmp2191;
  modelica_metatype tmpMeta2192;
  static int tmp2193 = 0;
  if(!tmp2193)
  {
    tmp2188 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[271]] /* dc.roo.irRadGai.datConExtWin[1].layers.roughness_a PARAM */),1);
    tmp2189 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[271]] /* dc.roo.irRadGai.datConExtWin[1].layers.roughness_a PARAM */),6);
    if(!(tmp2188 && tmp2189))
    {
      tmp2191 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[271]] /* dc.roo.irRadGai.datConExtWin[1].layers.roughness_a PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2192 = stringAppend(MMC_REFSTRINGLIT(tmp2190),tmp2191);
      {
        const char* assert_cond = "(dc.roo.irRadGai.datConExtWin[1].layers.roughness_a >= Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough and dc.roo.irRadGai.datConExtWin[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",25,4,27,35,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2192));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",25,4,27,35,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2192));
        }
      }
      tmp2193 = 1;
    }
  }
  threadData->lastEquationSolved = 4609;
}

/*
equation index: 4610
type: ALGORITHM

  assert(dc.roo.irRadGai.datConExtWin[1].layers.nSta[1] >= 1, "Variable violating min constraint: 1 <= dc.roo.irRadGai.datConExtWin[1].layers.nSta[1], has value: " + String(dc.roo.irRadGai.datConExtWin[1].layers.nSta[1], "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4610(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4610};
  modelica_boolean tmp2194;
  static const MMC_DEFSTRINGLIT(tmp2195,99,"Variable violating min constraint: 1 <= dc.roo.irRadGai.datConExtWin[1].layers.nSta[1], has value: ");
  modelica_string tmp2196;
  modelica_metatype tmpMeta2197;
  static int tmp2198 = 0;
  if(!tmp2198)
  {
    tmp2194 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[270]] /* dc.roo.irRadGai.datConExtWin[1].layers.nSta[1] PARAM */),((modelica_integer) 1));
    if(!tmp2194)
    {
      tmp2196 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[270]] /* dc.roo.irRadGai.datConExtWin[1].layers.nSta[1] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2197 = stringAppend(MMC_REFSTRINGLIT(tmp2195),tmp2196);
      {
        const char* assert_cond = "(dc.roo.irRadGai.datConExtWin[1].layers.nSta[1] >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",14,4,16,59,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2197));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",14,4,16,59,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2197));
        }
      }
      tmp2198 = 1;
    }
  }
  threadData->lastEquationSolved = 4610;
}

/*
equation index: 4611
type: ALGORITHM

  assert(dc.roo.irRadGai.datConExtWin[1].layers.material[1].TLiq >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConExtWin[1].layers.material[1].TLiq, has value: " + String(dc.roo.irRadGai.datConExtWin[1].layers.material[1].TLiq, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4611(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4611};
  modelica_boolean tmp2199;
  static const MMC_DEFSTRINGLIT(tmp2200,110,"Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConExtWin[1].layers.material[1].TLiq, has value: ");
  modelica_string tmp2201;
  modelica_metatype tmpMeta2202;
  static int tmp2203 = 0;
  if(!tmp2203)
  {
    tmp2199 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1064]] /* dc.roo.irRadGai.datConExtWin[1].layers.material[1].TLiq PARAM */),0.0);
    if(!tmp2199)
    {
      tmp2201 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1064]] /* dc.roo.irRadGai.datConExtWin[1].layers.material[1].TLiq PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2202 = stringAppend(MMC_REFSTRINGLIT(tmp2200),tmp2201);
      {
        const char* assert_cond = "(dc.roo.irRadGai.datConExtWin[1].layers.material[1].TLiq >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",33,5,35,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2202));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",33,5,35,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2202));
        }
      }
      tmp2203 = 1;
    }
  }
  threadData->lastEquationSolved = 4611;
}

/*
equation index: 4612
type: ALGORITHM

  assert(dc.roo.irRadGai.datConExtWin[1].layers.material[1].TSol >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConExtWin[1].layers.material[1].TSol, has value: " + String(dc.roo.irRadGai.datConExtWin[1].layers.material[1].TSol, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4612(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4612};
  modelica_boolean tmp2204;
  static const MMC_DEFSTRINGLIT(tmp2205,110,"Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConExtWin[1].layers.material[1].TSol, has value: ");
  modelica_string tmp2206;
  modelica_metatype tmpMeta2207;
  static int tmp2208 = 0;
  if(!tmp2208)
  {
    tmp2204 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1065]] /* dc.roo.irRadGai.datConExtWin[1].layers.material[1].TSol PARAM */),0.0);
    if(!tmp2204)
    {
      tmp2206 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1065]] /* dc.roo.irRadGai.datConExtWin[1].layers.material[1].TSol PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2207 = stringAppend(MMC_REFSTRINGLIT(tmp2205),tmp2206);
      {
        const char* assert_cond = "(dc.roo.irRadGai.datConExtWin[1].layers.material[1].TSol >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",30,5,32,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2207));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",30,5,32,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2207));
        }
      }
      tmp2208 = 1;
    }
  }
  threadData->lastEquationSolved = 4612;
}

/*
equation index: 4613
type: ALGORITHM

  assert(dc.roo.irRadGai.datConExtWin[1].layers.material[1].nStaReal >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConExtWin[1].layers.material[1].nStaReal, has value: " + String(dc.roo.irRadGai.datConExtWin[1].layers.material[1].nStaReal, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4613(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4613};
  modelica_boolean tmp2209;
  static const MMC_DEFSTRINGLIT(tmp2210,114,"Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConExtWin[1].layers.material[1].nStaReal, has value: ");
  modelica_string tmp2211;
  modelica_metatype tmpMeta2212;
  static int tmp2213 = 0;
  if(!tmp2213)
  {
    tmp2209 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1069]] /* dc.roo.irRadGai.datConExtWin[1].layers.material[1].nStaReal PARAM */),0.0);
    if(!tmp2209)
    {
      tmp2211 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1069]] /* dc.roo.irRadGai.datConExtWin[1].layers.material[1].nStaReal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2212 = stringAppend(MMC_REFSTRINGLIT(tmp2210),tmp2211);
      {
        const char* assert_cond = "(dc.roo.irRadGai.datConExtWin[1].layers.material[1].nStaReal >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",26,5,28,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2212));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",26,5,28,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2212));
        }
      }
      tmp2213 = 1;
    }
  }
  threadData->lastEquationSolved = 4613;
}

/*
equation index: 4614
type: ALGORITHM

  assert(dc.roo.irRadGai.datConExtWin[1].layers.material[1].nSta >= 1, "Variable violating min constraint: 1 <= dc.roo.irRadGai.datConExtWin[1].layers.material[1].nSta, has value: " + String(dc.roo.irRadGai.datConExtWin[1].layers.material[1].nSta, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4614(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4614};
  modelica_boolean tmp2214;
  static const MMC_DEFSTRINGLIT(tmp2215,108,"Variable violating min constraint: 1 <= dc.roo.irRadGai.datConExtWin[1].layers.material[1].nSta, has value: ");
  modelica_string tmp2216;
  modelica_metatype tmpMeta2217;
  static int tmp2218 = 0;
  if(!tmp2218)
  {
    tmp2214 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[267]] /* dc.roo.irRadGai.datConExtWin[1].layers.material[1].nSta PARAM */),((modelica_integer) 1));
    if(!tmp2214)
    {
      tmp2216 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[267]] /* dc.roo.irRadGai.datConExtWin[1].layers.material[1].nSta PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2217 = stringAppend(MMC_REFSTRINGLIT(tmp2215),tmp2216);
      {
        const char* assert_cond = "(dc.roo.irRadGai.datConExtWin[1].layers.material[1].nSta >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",14,5,16,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2217));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",14,5,16,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2217));
        }
      }
      tmp2218 = 1;
    }
  }
  threadData->lastEquationSolved = 4614;
}

/*
equation index: 4615
type: ALGORITHM

  assert(dc.roo.irRadGai.datConExtWin[1].layers.material[1].nStaRef >= 0, "Variable violating min constraint: 0 <= dc.roo.irRadGai.datConExtWin[1].layers.material[1].nStaRef, has value: " + String(dc.roo.irRadGai.datConExtWin[1].layers.material[1].nStaRef, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4615(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4615};
  modelica_boolean tmp2219;
  static const MMC_DEFSTRINGLIT(tmp2220,111,"Variable violating min constraint: 0 <= dc.roo.irRadGai.datConExtWin[1].layers.material[1].nStaRef, has value: ");
  modelica_string tmp2221;
  modelica_metatype tmpMeta2222;
  static int tmp2223 = 0;
  if(!tmp2223)
  {
    tmp2219 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[268]] /* dc.roo.irRadGai.datConExtWin[1].layers.material[1].nStaRef PARAM */),((modelica_integer) 0));
    if(!tmp2219)
    {
      tmp2221 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[268]] /* dc.roo.irRadGai.datConExtWin[1].layers.material[1].nStaRef PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2222 = stringAppend(MMC_REFSTRINGLIT(tmp2220),tmp2221);
      {
        const char* assert_cond = "(dc.roo.irRadGai.datConExtWin[1].layers.material[1].nStaRef >= 0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",12,5,13,76,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2222));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",12,5,13,76,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2222));
        }
      }
      tmp2223 = 1;
    }
  }
  threadData->lastEquationSolved = 4615;
}

/*
equation index: 4616
type: ALGORITHM

  assert(dc.roo.irRadGai.datConExtWin[1].layers.material[1].d >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConExtWin[1].layers.material[1].d, has value: " + String(dc.roo.irRadGai.datConExtWin[1].layers.material[1].d, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4616(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4616};
  modelica_boolean tmp2224;
  static const MMC_DEFSTRINGLIT(tmp2225,107,"Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConExtWin[1].layers.material[1].d, has value: ");
  modelica_string tmp2226;
  modelica_metatype tmpMeta2227;
  static int tmp2228 = 0;
  if(!tmp2228)
  {
    tmp2224 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1067]] /* dc.roo.irRadGai.datConExtWin[1].layers.material[1].d PARAM */),0.0);
    if(!tmp2224)
    {
      tmp2226 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1067]] /* dc.roo.irRadGai.datConExtWin[1].layers.material[1].d PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2227 = stringAppend(MMC_REFSTRINGLIT(tmp2225),tmp2226);
      {
        const char* assert_cond = "(dc.roo.irRadGai.datConExtWin[1].layers.material[1].d >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",9,5,9,57,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2227));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",9,5,9,57,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2227));
        }
      }
      tmp2228 = 1;
    }
  }
  threadData->lastEquationSolved = 4616;
}

/*
equation index: 4617
type: ALGORITHM

  assert(dc.roo.irRadGai.datConExtWin[1].layers.nLay >= 1, "Variable violating min constraint: 1 <= dc.roo.irRadGai.datConExtWin[1].layers.nLay, has value: " + String(dc.roo.irRadGai.datConExtWin[1].layers.nLay, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4617(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4617};
  modelica_boolean tmp2229;
  static const MMC_DEFSTRINGLIT(tmp2230,96,"Variable violating min constraint: 1 <= dc.roo.irRadGai.datConExtWin[1].layers.nLay, has value: ");
  modelica_string tmp2231;
  modelica_metatype tmpMeta2232;
  static int tmp2233 = 0;
  if(!tmp2233)
  {
    tmp2229 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[269]] /* dc.roo.irRadGai.datConExtWin[1].layers.nLay PARAM */),((modelica_integer) 1));
    if(!tmp2229)
    {
      tmp2231 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[269]] /* dc.roo.irRadGai.datConExtWin[1].layers.nLay PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2232 = stringAppend(MMC_REFSTRINGLIT(tmp2230),tmp2231);
      {
        const char* assert_cond = "(dc.roo.irRadGai.datConExtWin[1].layers.nLay >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",7,4,7,52,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2232));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",7,4,7,52,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2232));
        }
      }
      tmp2233 = 1;
    }
  }
  threadData->lastEquationSolved = 4617;
}

/*
equation index: 4618
type: ALGORITHM

  assert(dc.roo.irRadGai.datConExt[1].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.irRadGai.datConExt[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, "Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.irRadGai.datConExt[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: " + String(dc.roo.irRadGai.datConExt[1].boundaryCondition, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4618(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4618};
  modelica_boolean tmp2234;
  modelica_boolean tmp2235;
  static const MMC_DEFSTRINGLIT(tmp2236,249,"Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.irRadGai.datConExt[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: ");
  modelica_string tmp2237;
  modelica_metatype tmpMeta2238;
  static int tmp2239 = 0;
  if(!tmp2239)
  {
    tmp2234 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[260]] /* dc.roo.irRadGai.datConExt[1].boundaryCondition PARAM */),1);
    tmp2235 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[260]] /* dc.roo.irRadGai.datConExt[1].boundaryCondition PARAM */),2);
    if(!(tmp2234 && tmp2235))
    {
      tmp2237 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[260]] /* dc.roo.irRadGai.datConExt[1].boundaryCondition PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2238 = stringAppend(MMC_REFSTRINGLIT(tmp2236),tmp2237);
      {
        const char* assert_cond = "(dc.roo.irRadGai.datConExt[1].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.irRadGai.datConExt[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",43,3,46,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2238));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",43,3,46,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2238));
        }
      }
      tmp2239 = 1;
    }
  }
  threadData->lastEquationSolved = 4618;
}

/*
equation index: 4619
type: ALGORITHM

  assert(dc.roo.irRadGai.datConExt[1].T_b_start >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConExt[1].T_b_start, has value: " + String(dc.roo.irRadGai.datConExt[1].T_b_start, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4619(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4619};
  modelica_boolean tmp2240;
  static const MMC_DEFSTRINGLIT(tmp2241,93,"Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConExt[1].T_b_start, has value: ");
  modelica_string tmp2242;
  modelica_metatype tmpMeta2243;
  static int tmp2244 = 0;
  if(!tmp2244)
  {
    tmp2240 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1000]] /* dc.roo.irRadGai.datConExt[1].T_b_start PARAM */),0.0);
    if(!tmp2240)
    {
      tmp2242 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1000]] /* dc.roo.irRadGai.datConExt[1].T_b_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2243 = stringAppend(MMC_REFSTRINGLIT(tmp2241),tmp2242);
      {
        const char* assert_cond = "(dc.roo.irRadGai.datConExt[1].T_b_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",30,3,32,79,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2243));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",30,3,32,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2243));
        }
      }
      tmp2244 = 1;
    }
  }
  threadData->lastEquationSolved = 4619;
}

/*
equation index: 4620
type: ALGORITHM

  assert(dc.roo.irRadGai.datConExt[1].T_a_start >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConExt[1].T_a_start, has value: " + String(dc.roo.irRadGai.datConExt[1].T_a_start, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4620(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4620};
  modelica_boolean tmp2245;
  static const MMC_DEFSTRINGLIT(tmp2246,93,"Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConExt[1].T_a_start, has value: ");
  modelica_string tmp2247;
  modelica_metatype tmpMeta2248;
  static int tmp2249 = 0;
  if(!tmp2249)
  {
    tmp2245 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[999]] /* dc.roo.irRadGai.datConExt[1].T_a_start PARAM */),0.0);
    if(!tmp2245)
    {
      tmp2247 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[999]] /* dc.roo.irRadGai.datConExt[1].T_a_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2248 = stringAppend(MMC_REFSTRINGLIT(tmp2246),tmp2247);
      {
        const char* assert_cond = "(dc.roo.irRadGai.datConExt[1].T_a_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",27,3,29,79,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2248));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",27,3,29,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2248));
        }
      }
      tmp2249 = 1;
    }
  }
  threadData->lastEquationSolved = 4620;
}

/*
equation index: 4621
type: ALGORITHM

  assert(dc.roo.irRadGai.datConExt[1].layers.roughness_a >= Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough and dc.roo.irRadGai.datConExt[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth, "Variable violating min/max constraint: Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough <= dc.roo.irRadGai.datConExt[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth, has value: " + String(dc.roo.irRadGai.datConExt[1].layers.roughness_a, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4621(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4621};
  modelica_boolean tmp2250;
  modelica_boolean tmp2251;
  static const MMC_DEFSTRINGLIT(tmp2252,218,"Variable violating min/max constraint: Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough <= dc.roo.irRadGai.datConExt[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth, has value: ");
  modelica_string tmp2253;
  modelica_metatype tmpMeta2254;
  static int tmp2255 = 0;
  if(!tmp2255)
  {
    tmp2250 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[265]] /* dc.roo.irRadGai.datConExt[1].layers.roughness_a PARAM */),1);
    tmp2251 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[265]] /* dc.roo.irRadGai.datConExt[1].layers.roughness_a PARAM */),6);
    if(!(tmp2250 && tmp2251))
    {
      tmp2253 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[265]] /* dc.roo.irRadGai.datConExt[1].layers.roughness_a PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2254 = stringAppend(MMC_REFSTRINGLIT(tmp2252),tmp2253);
      {
        const char* assert_cond = "(dc.roo.irRadGai.datConExt[1].layers.roughness_a >= Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough and dc.roo.irRadGai.datConExt[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",25,4,27,35,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2254));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",25,4,27,35,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2254));
        }
      }
      tmp2255 = 1;
    }
  }
  threadData->lastEquationSolved = 4621;
}

/*
equation index: 4622
type: ALGORITHM

  assert(dc.roo.irRadGai.datConExt[1].layers.nSta[1] >= 1, "Variable violating min constraint: 1 <= dc.roo.irRadGai.datConExt[1].layers.nSta[1], has value: " + String(dc.roo.irRadGai.datConExt[1].layers.nSta[1], "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4622(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4622};
  modelica_boolean tmp2256;
  static const MMC_DEFSTRINGLIT(tmp2257,96,"Variable violating min constraint: 1 <= dc.roo.irRadGai.datConExt[1].layers.nSta[1], has value: ");
  modelica_string tmp2258;
  modelica_metatype tmpMeta2259;
  static int tmp2260 = 0;
  if(!tmp2260)
  {
    tmp2256 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[264]] /* dc.roo.irRadGai.datConExt[1].layers.nSta[1] PARAM */),((modelica_integer) 1));
    if(!tmp2256)
    {
      tmp2258 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[264]] /* dc.roo.irRadGai.datConExt[1].layers.nSta[1] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2259 = stringAppend(MMC_REFSTRINGLIT(tmp2257),tmp2258);
      {
        const char* assert_cond = "(dc.roo.irRadGai.datConExt[1].layers.nSta[1] >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",14,4,16,59,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2259));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",14,4,16,59,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2259));
        }
      }
      tmp2260 = 1;
    }
  }
  threadData->lastEquationSolved = 4622;
}

/*
equation index: 4623
type: ALGORITHM

  assert(dc.roo.irRadGai.datConExt[1].layers.material[1].TLiq >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConExt[1].layers.material[1].TLiq, has value: " + String(dc.roo.irRadGai.datConExt[1].layers.material[1].TLiq, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4623(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4623};
  modelica_boolean tmp2261;
  static const MMC_DEFSTRINGLIT(tmp2262,107,"Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConExt[1].layers.material[1].TLiq, has value: ");
  modelica_string tmp2263;
  modelica_metatype tmpMeta2264;
  static int tmp2265 = 0;
  if(!tmp2265)
  {
    tmp2261 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1009]] /* dc.roo.irRadGai.datConExt[1].layers.material[1].TLiq PARAM */),0.0);
    if(!tmp2261)
    {
      tmp2263 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1009]] /* dc.roo.irRadGai.datConExt[1].layers.material[1].TLiq PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2264 = stringAppend(MMC_REFSTRINGLIT(tmp2262),tmp2263);
      {
        const char* assert_cond = "(dc.roo.irRadGai.datConExt[1].layers.material[1].TLiq >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",33,5,35,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2264));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",33,5,35,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2264));
        }
      }
      tmp2265 = 1;
    }
  }
  threadData->lastEquationSolved = 4623;
}

/*
equation index: 4624
type: ALGORITHM

  assert(dc.roo.irRadGai.datConExt[1].layers.material[1].TSol >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConExt[1].layers.material[1].TSol, has value: " + String(dc.roo.irRadGai.datConExt[1].layers.material[1].TSol, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4624(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4624};
  modelica_boolean tmp2266;
  static const MMC_DEFSTRINGLIT(tmp2267,107,"Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConExt[1].layers.material[1].TSol, has value: ");
  modelica_string tmp2268;
  modelica_metatype tmpMeta2269;
  static int tmp2270 = 0;
  if(!tmp2270)
  {
    tmp2266 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1010]] /* dc.roo.irRadGai.datConExt[1].layers.material[1].TSol PARAM */),0.0);
    if(!tmp2266)
    {
      tmp2268 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1010]] /* dc.roo.irRadGai.datConExt[1].layers.material[1].TSol PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2269 = stringAppend(MMC_REFSTRINGLIT(tmp2267),tmp2268);
      {
        const char* assert_cond = "(dc.roo.irRadGai.datConExt[1].layers.material[1].TSol >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",30,5,32,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2269));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",30,5,32,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2269));
        }
      }
      tmp2270 = 1;
    }
  }
  threadData->lastEquationSolved = 4624;
}

/*
equation index: 4625
type: ALGORITHM

  assert(dc.roo.irRadGai.datConExt[1].layers.material[1].nStaReal >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConExt[1].layers.material[1].nStaReal, has value: " + String(dc.roo.irRadGai.datConExt[1].layers.material[1].nStaReal, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4625(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4625};
  modelica_boolean tmp2271;
  static const MMC_DEFSTRINGLIT(tmp2272,111,"Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConExt[1].layers.material[1].nStaReal, has value: ");
  modelica_string tmp2273;
  modelica_metatype tmpMeta2274;
  static int tmp2275 = 0;
  if(!tmp2275)
  {
    tmp2271 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1014]] /* dc.roo.irRadGai.datConExt[1].layers.material[1].nStaReal PARAM */),0.0);
    if(!tmp2271)
    {
      tmp2273 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1014]] /* dc.roo.irRadGai.datConExt[1].layers.material[1].nStaReal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2274 = stringAppend(MMC_REFSTRINGLIT(tmp2272),tmp2273);
      {
        const char* assert_cond = "(dc.roo.irRadGai.datConExt[1].layers.material[1].nStaReal >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",26,5,28,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2274));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",26,5,28,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2274));
        }
      }
      tmp2275 = 1;
    }
  }
  threadData->lastEquationSolved = 4625;
}

/*
equation index: 4626
type: ALGORITHM

  assert(dc.roo.irRadGai.datConExt[1].layers.material[1].nSta >= 1, "Variable violating min constraint: 1 <= dc.roo.irRadGai.datConExt[1].layers.material[1].nSta, has value: " + String(dc.roo.irRadGai.datConExt[1].layers.material[1].nSta, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4626(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4626};
  modelica_boolean tmp2276;
  static const MMC_DEFSTRINGLIT(tmp2277,105,"Variable violating min constraint: 1 <= dc.roo.irRadGai.datConExt[1].layers.material[1].nSta, has value: ");
  modelica_string tmp2278;
  modelica_metatype tmpMeta2279;
  static int tmp2280 = 0;
  if(!tmp2280)
  {
    tmp2276 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[261]] /* dc.roo.irRadGai.datConExt[1].layers.material[1].nSta PARAM */),((modelica_integer) 1));
    if(!tmp2276)
    {
      tmp2278 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[261]] /* dc.roo.irRadGai.datConExt[1].layers.material[1].nSta PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2279 = stringAppend(MMC_REFSTRINGLIT(tmp2277),tmp2278);
      {
        const char* assert_cond = "(dc.roo.irRadGai.datConExt[1].layers.material[1].nSta >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",14,5,16,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2279));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",14,5,16,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2279));
        }
      }
      tmp2280 = 1;
    }
  }
  threadData->lastEquationSolved = 4626;
}

/*
equation index: 4627
type: ALGORITHM

  assert(dc.roo.irRadGai.datConExt[1].layers.material[1].nStaRef >= 0, "Variable violating min constraint: 0 <= dc.roo.irRadGai.datConExt[1].layers.material[1].nStaRef, has value: " + String(dc.roo.irRadGai.datConExt[1].layers.material[1].nStaRef, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4627(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4627};
  modelica_boolean tmp2281;
  static const MMC_DEFSTRINGLIT(tmp2282,108,"Variable violating min constraint: 0 <= dc.roo.irRadGai.datConExt[1].layers.material[1].nStaRef, has value: ");
  modelica_string tmp2283;
  modelica_metatype tmpMeta2284;
  static int tmp2285 = 0;
  if(!tmp2285)
  {
    tmp2281 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[262]] /* dc.roo.irRadGai.datConExt[1].layers.material[1].nStaRef PARAM */),((modelica_integer) 0));
    if(!tmp2281)
    {
      tmp2283 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[262]] /* dc.roo.irRadGai.datConExt[1].layers.material[1].nStaRef PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2284 = stringAppend(MMC_REFSTRINGLIT(tmp2282),tmp2283);
      {
        const char* assert_cond = "(dc.roo.irRadGai.datConExt[1].layers.material[1].nStaRef >= 0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",12,5,13,76,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2284));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",12,5,13,76,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2284));
        }
      }
      tmp2285 = 1;
    }
  }
  threadData->lastEquationSolved = 4627;
}

/*
equation index: 4628
type: ALGORITHM

  assert(dc.roo.irRadGai.datConExt[1].layers.material[1].d >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConExt[1].layers.material[1].d, has value: " + String(dc.roo.irRadGai.datConExt[1].layers.material[1].d, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4628(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4628};
  modelica_boolean tmp2286;
  static const MMC_DEFSTRINGLIT(tmp2287,104,"Variable violating min constraint: 0.0 <= dc.roo.irRadGai.datConExt[1].layers.material[1].d, has value: ");
  modelica_string tmp2288;
  modelica_metatype tmpMeta2289;
  static int tmp2290 = 0;
  if(!tmp2290)
  {
    tmp2286 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1012]] /* dc.roo.irRadGai.datConExt[1].layers.material[1].d PARAM */),0.0);
    if(!tmp2286)
    {
      tmp2288 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1012]] /* dc.roo.irRadGai.datConExt[1].layers.material[1].d PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2289 = stringAppend(MMC_REFSTRINGLIT(tmp2287),tmp2288);
      {
        const char* assert_cond = "(dc.roo.irRadGai.datConExt[1].layers.material[1].d >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",9,5,9,57,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2289));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",9,5,9,57,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2289));
        }
      }
      tmp2290 = 1;
    }
  }
  threadData->lastEquationSolved = 4628;
}

/*
equation index: 4629
type: ALGORITHM

  assert(dc.roo.irRadGai.datConExt[1].layers.nLay >= 1, "Variable violating min constraint: 1 <= dc.roo.irRadGai.datConExt[1].layers.nLay, has value: " + String(dc.roo.irRadGai.datConExt[1].layers.nLay, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4629(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4629};
  modelica_boolean tmp2291;
  static const MMC_DEFSTRINGLIT(tmp2292,93,"Variable violating min constraint: 1 <= dc.roo.irRadGai.datConExt[1].layers.nLay, has value: ");
  modelica_string tmp2293;
  modelica_metatype tmpMeta2294;
  static int tmp2295 = 0;
  if(!tmp2295)
  {
    tmp2291 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[263]] /* dc.roo.irRadGai.datConExt[1].layers.nLay PARAM */),((modelica_integer) 1));
    if(!tmp2291)
    {
      tmp2293 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[263]] /* dc.roo.irRadGai.datConExt[1].layers.nLay PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2294 = stringAppend(MMC_REFSTRINGLIT(tmp2292),tmp2293);
      {
        const char* assert_cond = "(dc.roo.irRadGai.datConExt[1].layers.nLay >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",7,4,7,52,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2294));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",7,4,7,52,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2294));
        }
      }
      tmp2295 = 1;
    }
  }
  threadData->lastEquationSolved = 4629;
}

/*
equation index: 4630
type: ALGORITHM

  assert(dc.roo.irRadGai.NSurBou >= 1, "Variable violating min constraint: 1 <= dc.roo.irRadGai.NSurBou, has value: " + String(dc.roo.irRadGai.NSurBou, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4630(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4630};
  modelica_boolean tmp2296;
  static const MMC_DEFSTRINGLIT(tmp2297,76,"Variable violating min constraint: 1 <= dc.roo.irRadGai.NSurBou, has value: ");
  modelica_string tmp2298;
  modelica_metatype tmpMeta2299;
  static int tmp2300 = 0;
  if(!tmp2300)
  {
    tmp2296 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[253]] /* dc.roo.irRadGai.NSurBou PARAM */),((modelica_integer) 1));
    if(!tmp2296)
    {
      tmp2298 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[253]] /* dc.roo.irRadGai.NSurBou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2299 = stringAppend(MMC_REFSTRINGLIT(tmp2297),tmp2298);
      {
        const char* assert_cond = "(dc.roo.irRadGai.NSurBou >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",40,3,42,33,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2299));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",40,3,42,33,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2299));
        }
      }
      tmp2300 = 1;
    }
  }
  threadData->lastEquationSolved = 4630;
}

/*
equation index: 4631
type: ALGORITHM

  assert(dc.roo.irRadGai.NConBou >= 1, "Variable violating min constraint: 1 <= dc.roo.irRadGai.NConBou, has value: " + String(dc.roo.irRadGai.NConBou, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4631(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4631};
  modelica_boolean tmp2301;
  static const MMC_DEFSTRINGLIT(tmp2302,76,"Variable violating min constraint: 1 <= dc.roo.irRadGai.NConBou, has value: ");
  modelica_string tmp2303;
  modelica_metatype tmpMeta2304;
  static int tmp2305 = 0;
  if(!tmp2305)
  {
    tmp2301 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[249]] /* dc.roo.irRadGai.NConBou PARAM */),((modelica_integer) 1));
    if(!tmp2301)
    {
      tmp2303 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[249]] /* dc.roo.irRadGai.NConBou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2304 = stringAppend(MMC_REFSTRINGLIT(tmp2302),tmp2303);
      {
        const char* assert_cond = "(dc.roo.irRadGai.NConBou >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",36,3,38,33,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2304));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",36,3,38,33,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2304));
        }
      }
      tmp2305 = 1;
    }
  }
  threadData->lastEquationSolved = 4631;
}

/*
equation index: 4632
type: ALGORITHM

  assert(dc.roo.irRadGai.NConPar >= 1, "Variable violating min constraint: 1 <= dc.roo.irRadGai.NConPar, has value: " + String(dc.roo.irRadGai.NConPar, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4632(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4632};
  modelica_boolean tmp2306;
  static const MMC_DEFSTRINGLIT(tmp2307,76,"Variable violating min constraint: 1 <= dc.roo.irRadGai.NConPar, has value: ");
  modelica_string tmp2308;
  modelica_metatype tmpMeta2309;
  static int tmp2310 = 0;
  if(!tmp2310)
  {
    tmp2306 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[252]] /* dc.roo.irRadGai.NConPar PARAM */),((modelica_integer) 1));
    if(!tmp2306)
    {
      tmp2308 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[252]] /* dc.roo.irRadGai.NConPar PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2309 = stringAppend(MMC_REFSTRINGLIT(tmp2307),tmp2308);
      {
        const char* assert_cond = "(dc.roo.irRadGai.NConPar >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",32,3,34,33,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2309));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",32,3,34,33,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2309));
        }
      }
      tmp2310 = 1;
    }
  }
  threadData->lastEquationSolved = 4632;
}

/*
equation index: 4633
type: ALGORITHM

  assert(dc.roo.irRadGai.NConExtWin >= 1, "Variable violating min constraint: 1 <= dc.roo.irRadGai.NConExtWin, has value: " + String(dc.roo.irRadGai.NConExtWin, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4633(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4633};
  modelica_boolean tmp2311;
  static const MMC_DEFSTRINGLIT(tmp2312,79,"Variable violating min constraint: 1 <= dc.roo.irRadGai.NConExtWin, has value: ");
  modelica_string tmp2313;
  modelica_metatype tmpMeta2314;
  static int tmp2315 = 0;
  if(!tmp2315)
  {
    tmp2311 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[251]] /* dc.roo.irRadGai.NConExtWin PARAM */),((modelica_integer) 1));
    if(!tmp2311)
    {
      tmp2313 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[251]] /* dc.roo.irRadGai.NConExtWin PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2314 = stringAppend(MMC_REFSTRINGLIT(tmp2312),tmp2313);
      {
        const char* assert_cond = "(dc.roo.irRadGai.NConExtWin >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",28,3,30,33,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2314));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",28,3,30,33,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2314));
        }
      }
      tmp2315 = 1;
    }
  }
  threadData->lastEquationSolved = 4633;
}

/*
equation index: 4634
type: ALGORITHM

  assert(dc.roo.irRadGai.NConExt >= 1, "Variable violating min constraint: 1 <= dc.roo.irRadGai.NConExt, has value: " + String(dc.roo.irRadGai.NConExt, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4634(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4634};
  modelica_boolean tmp2316;
  static const MMC_DEFSTRINGLIT(tmp2317,76,"Variable violating min constraint: 1 <= dc.roo.irRadGai.NConExt, has value: ");
  modelica_string tmp2318;
  modelica_metatype tmpMeta2319;
  static int tmp2320 = 0;
  if(!tmp2320)
  {
    tmp2316 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[250]] /* dc.roo.irRadGai.NConExt PARAM */),((modelica_integer) 1));
    if(!tmp2316)
    {
      tmp2318 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[250]] /* dc.roo.irRadGai.NConExt PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2319 = stringAppend(MMC_REFSTRINGLIT(tmp2317),tmp2318);
      {
        const char* assert_cond = "(dc.roo.irRadGai.NConExt >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",24,3,26,33,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2319));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",24,3,26,33,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2319));
        }
      }
      tmp2320 = 1;
    }
  }
  threadData->lastEquationSolved = 4634;
}

/*
equation index: 4635
type: ALGORITHM

  assert(dc.roo.irRadGai.nSurBou >= 0, "Variable violating min constraint: 0 <= dc.roo.irRadGai.nSurBou, has value: " + String(dc.roo.irRadGai.nSurBou, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4635(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4635};
  modelica_boolean tmp2321;
  static const MMC_DEFSTRINGLIT(tmp2322,76,"Variable violating min constraint: 0 <= dc.roo.irRadGai.nSurBou, has value: ");
  modelica_string tmp2323;
  modelica_metatype tmpMeta2324;
  static int tmp2325 = 0;
  if(!tmp2325)
  {
    tmp2321 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[287]] /* dc.roo.irRadGai.nSurBou PARAM */),((modelica_integer) 0));
    if(!tmp2321)
    {
      tmp2323 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[287]] /* dc.roo.irRadGai.nSurBou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2324 = stringAppend(MMC_REFSTRINGLIT(tmp2322),tmp2323);
      {
        const char* assert_cond = "(dc.roo.irRadGai.nSurBou >= 0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",19,3,21,54,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2324));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",19,3,21,54,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2324));
        }
      }
      tmp2325 = 1;
    }
  }
  threadData->lastEquationSolved = 4635;
}

/*
equation index: 4636
type: ALGORITHM

  assert(dc.roo.irRadGai.nConBou >= 0, "Variable violating min constraint: 0 <= dc.roo.irRadGai.nConBou, has value: " + String(dc.roo.irRadGai.nConBou, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4636(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4636};
  modelica_boolean tmp2326;
  static const MMC_DEFSTRINGLIT(tmp2327,76,"Variable violating min constraint: 0 <= dc.roo.irRadGai.nConBou, has value: ");
  modelica_string tmp2328;
  modelica_metatype tmpMeta2329;
  static int tmp2330 = 0;
  if(!tmp2330)
  {
    tmp2326 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[283]] /* dc.roo.irRadGai.nConBou PARAM */),((modelica_integer) 0));
    if(!tmp2326)
    {
      tmp2328 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[283]] /* dc.roo.irRadGai.nConBou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2329 = stringAppend(MMC_REFSTRINGLIT(tmp2327),tmp2328);
      {
        const char* assert_cond = "(dc.roo.irRadGai.nConBou >= 0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",15,3,17,54,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2329));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",15,3,17,54,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2329));
        }
      }
      tmp2330 = 1;
    }
  }
  threadData->lastEquationSolved = 4636;
}

/*
equation index: 4637
type: ALGORITHM

  assert(dc.roo.irRadGai.nConPar >= 0, "Variable violating min constraint: 0 <= dc.roo.irRadGai.nConPar, has value: " + String(dc.roo.irRadGai.nConPar, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4637(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4637};
  modelica_boolean tmp2331;
  static const MMC_DEFSTRINGLIT(tmp2332,76,"Variable violating min constraint: 0 <= dc.roo.irRadGai.nConPar, has value: ");
  modelica_string tmp2333;
  modelica_metatype tmpMeta2334;
  static int tmp2335 = 0;
  if(!tmp2335)
  {
    tmp2331 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[286]] /* dc.roo.irRadGai.nConPar PARAM */),((modelica_integer) 0));
    if(!tmp2331)
    {
      tmp2333 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[286]] /* dc.roo.irRadGai.nConPar PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2334 = stringAppend(MMC_REFSTRINGLIT(tmp2332),tmp2333);
      {
        const char* assert_cond = "(dc.roo.irRadGai.nConPar >= 0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",12,3,13,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2334));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",12,3,13,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2334));
        }
      }
      tmp2335 = 1;
    }
  }
  threadData->lastEquationSolved = 4637;
}

/*
equation index: 4638
type: ALGORITHM

  assert(dc.roo.irRadGai.nConExtWin >= 0, "Variable violating min constraint: 0 <= dc.roo.irRadGai.nConExtWin, has value: " + String(dc.roo.irRadGai.nConExtWin, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4638(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4638};
  modelica_boolean tmp2336;
  static const MMC_DEFSTRINGLIT(tmp2337,79,"Variable violating min constraint: 0 <= dc.roo.irRadGai.nConExtWin, has value: ");
  modelica_string tmp2338;
  modelica_metatype tmpMeta2339;
  static int tmp2340 = 0;
  if(!tmp2340)
  {
    tmp2336 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[285]] /* dc.roo.irRadGai.nConExtWin PARAM */),((modelica_integer) 0));
    if(!tmp2336)
    {
      tmp2338 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[285]] /* dc.roo.irRadGai.nConExtWin PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2339 = stringAppend(MMC_REFSTRINGLIT(tmp2337),tmp2338);
      {
        const char* assert_cond = "(dc.roo.irRadGai.nConExtWin >= 0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",9,3,10,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2339));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",9,3,10,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2339));
        }
      }
      tmp2340 = 1;
    }
  }
  threadData->lastEquationSolved = 4638;
}

/*
equation index: 4639
type: ALGORITHM

  assert(dc.roo.irRadGai.nConExt >= 0, "Variable violating min constraint: 0 <= dc.roo.irRadGai.nConExt, has value: " + String(dc.roo.irRadGai.nConExt, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4639(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4639};
  modelica_boolean tmp2341;
  static const MMC_DEFSTRINGLIT(tmp2342,76,"Variable violating min constraint: 0 <= dc.roo.irRadGai.nConExt, has value: ");
  modelica_string tmp2343;
  modelica_metatype tmpMeta2344;
  static int tmp2345 = 0;
  if(!tmp2345)
  {
    tmp2341 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[284]] /* dc.roo.irRadGai.nConExt PARAM */),((modelica_integer) 0));
    if(!tmp2341)
    {
      tmp2343 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[284]] /* dc.roo.irRadGai.nConExt PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2344 = stringAppend(MMC_REFSTRINGLIT(tmp2342),tmp2343);
      {
        const char* assert_cond = "(dc.roo.irRadGai.nConExt >= 0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",7,3,8,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2344));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",7,3,8,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2344));
        }
      }
      tmp2345 = 1;
    }
  }
  threadData->lastEquationSolved = 4639;
}

/*
equation index: 4640
type: ALGORITHM

  assert(dc.roo.air.p_start >= 0.0 and dc.roo.air.p_start <= 1e8, "Variable violating min/max constraint: 0.0 <= dc.roo.air.p_start <= 1e8, has value: " + String(dc.roo.air.p_start, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4640(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4640};
  modelica_boolean tmp2346;
  modelica_boolean tmp2347;
  static const MMC_DEFSTRINGLIT(tmp2348,84,"Variable violating min/max constraint: 0.0 <= dc.roo.air.p_start <= 1e8, has value: ");
  modelica_string tmp2349;
  modelica_metatype tmpMeta2350;
  static int tmp2351 = 0;
  if(!tmp2351)
  {
    tmp2346 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[413]] /* dc.roo.air.p_start PARAM */),0.0);
    tmp2347 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[413]] /* dc.roo.air.p_start PARAM */),1e8);
    if(!(tmp2346 && tmp2347))
    {
      tmp2349 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[413]] /* dc.roo.air.p_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2350 = stringAppend(MMC_REFSTRINGLIT(tmp2348),tmp2349);
      {
        const char* assert_cond = "(dc.roo.air.p_start >= 0.0 and dc.roo.air.p_start <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDAirHeatMassBalance.mo",15,3,16,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2350));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDAirHeatMassBalance.mo",15,3,16,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2350));
        }
      }
      tmp2351 = 1;
    }
  }
  threadData->lastEquationSolved = 4640;
}

/*
equation index: 4641
type: ALGORITHM

  assert(dc.roo.air.rho_start >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.rho_start, has value: " + String(dc.roo.air.rho_start, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4641(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4641};
  modelica_boolean tmp2352;
  static const MMC_DEFSTRINGLIT(tmp2353,75,"Variable violating min constraint: 0.0 <= dc.roo.air.rho_start, has value: ");
  modelica_string tmp2354;
  modelica_metatype tmpMeta2355;
  static int tmp2356 = 0;
  if(!tmp2356)
  {
    tmp2352 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[414]] /* dc.roo.air.rho_start PARAM */),0.0);
    if(!tmp2352)
    {
      tmp2354 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[414]] /* dc.roo.air.rho_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2355 = stringAppend(MMC_REFSTRINGLIT(tmp2353),tmp2354);
      {
        const char* assert_cond = "(dc.roo.air.rho_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDAirHeatMassBalance.mo",93,3,97,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2355));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDAirHeatMassBalance.mo",93,3,97,65,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2355));
        }
      }
      tmp2356 = 1;
    }
  }
  threadData->lastEquationSolved = 4641;
}

/*
equation index: 4642
type: ALGORITHM

  assert(dc.roo.air.fluInt.rho_start >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.fluInt.rho_start, has value: " + String(dc.roo.air.fluInt.rho_start, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4642(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4642};
  modelica_boolean tmp2357;
  static const MMC_DEFSTRINGLIT(tmp2358,82,"Variable violating min constraint: 0.0 <= dc.roo.air.fluInt.rho_start, has value: ");
  modelica_string tmp2359;
  modelica_metatype tmpMeta2360;
  static int tmp2361 = 0;
  if(!tmp2361)
  {
    tmp2357 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[412]] /* dc.roo.air.fluInt.rho_start PARAM */),0.0);
    if(!tmp2357)
    {
      tmp2359 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[412]] /* dc.roo.air.fluInt.rho_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2360 = stringAppend(MMC_REFSTRINGLIT(tmp2358),tmp2359);
      {
        const char* assert_cond = "(dc.roo.air.fluInt.rho_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDFluidInterface.mo",21,3,22,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2360));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDFluidInterface.mo",21,3,22,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2360));
        }
      }
      tmp2361 = 1;
    }
  }
  threadData->lastEquationSolved = 4642;
}

/*
equation index: 4643
type: ALGORITHM

  assert(dc.roo.air.fluInt.m_start >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.fluInt.m_start, has value: " + String(dc.roo.air.fluInt.m_start, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4643(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4643};
  modelica_boolean tmp2362;
  static const MMC_DEFSTRINGLIT(tmp2363,80,"Variable violating min constraint: 0.0 <= dc.roo.air.fluInt.m_start, has value: ");
  modelica_string tmp2364;
  modelica_metatype tmpMeta2365;
  static int tmp2366 = 0;
  if(!tmp2366)
  {
    tmp2362 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[410]] /* dc.roo.air.fluInt.m_start PARAM */),0.0);
    if(!tmp2362)
    {
      tmp2364 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[410]] /* dc.roo.air.fluInt.m_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2365 = stringAppend(MMC_REFSTRINGLIT(tmp2363),tmp2364);
      {
        const char* assert_cond = "(dc.roo.air.fluInt.m_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDFluidInterface.mo",24,3,25,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2365));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDFluidInterface.mo",24,3,25,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2365));
        }
      }
      tmp2366 = 1;
    }
  }
  threadData->lastEquationSolved = 4643;
}

/*
equation index: 4644
type: ALGORITHM

  assert(dc.roo.air.fluInt.nPorts >= 0, "Variable violating min constraint: 0 <= dc.roo.air.fluInt.nPorts, has value: " + String(dc.roo.air.fluInt.nPorts, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4644(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4644};
  modelica_boolean tmp2367;
  static const MMC_DEFSTRINGLIT(tmp2368,77,"Variable violating min constraint: 0 <= dc.roo.air.fluInt.nPorts, has value: ");
  modelica_string tmp2369;
  modelica_metatype tmpMeta2370;
  static int tmp2371 = 0;
  if(!tmp2371)
  {
    tmp2367 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[121]] /* dc.roo.air.fluInt.nPorts PARAM */),((modelica_integer) 0));
    if(!tmp2367)
    {
      tmp2369 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[121]] /* dc.roo.air.fluInt.nPorts PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2370 = stringAppend(MMC_REFSTRINGLIT(tmp2368),tmp2369);
      {
        const char* assert_cond = "(dc.roo.air.fluInt.nPorts >= 0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDFluidInterface.mo",19,3,20,89,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2370));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDFluidInterface.mo",19,3,20,89,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2370));
        }
      }
      tmp2371 = 1;
    }
  }
  threadData->lastEquationSolved = 4644;
}

/*
equation index: 4645
type: ALGORITHM

  assert(dc.roo.air.fluInt.p_start >= 0.0 and dc.roo.air.fluInt.p_start <= 1e8, "Variable violating min/max constraint: 0.0 <= dc.roo.air.fluInt.p_start <= 1e8, has value: " + String(dc.roo.air.fluInt.p_start, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4645(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4645};
  modelica_boolean tmp2372;
  modelica_boolean tmp2373;
  static const MMC_DEFSTRINGLIT(tmp2374,91,"Variable violating min/max constraint: 0.0 <= dc.roo.air.fluInt.p_start <= 1e8, has value: ");
  modelica_string tmp2375;
  modelica_metatype tmpMeta2376;
  static int tmp2377 = 0;
  if(!tmp2377)
  {
    tmp2372 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[411]] /* dc.roo.air.fluInt.p_start PARAM */),0.0);
    tmp2373 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[411]] /* dc.roo.air.fluInt.p_start PARAM */),1e8);
    if(!(tmp2372 && tmp2373))
    {
      tmp2375 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[411]] /* dc.roo.air.fluInt.p_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2376 = stringAppend(MMC_REFSTRINGLIT(tmp2374),tmp2375);
      {
        const char* assert_cond = "(dc.roo.air.fluInt.p_start >= 0.0 and dc.roo.air.fluInt.p_start <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDFluidInterface.mo",14,3,16,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2376));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDFluidInterface.mo",14,3,16,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2376));
        }
      }
      tmp2377 = 1;
    }
  }
  threadData->lastEquationSolved = 4645;
}

/*
equation index: 4646
type: ALGORITHM

  assert(dc.roo.air.fluInt.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and dc.roo.air.fluInt.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= dc.roo.air.fluInt.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(dc.roo.air.fluInt.massDynamics, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4646(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4646};
  modelica_boolean tmp2378;
  modelica_boolean tmp2379;
  static const MMC_DEFSTRINGLIT(tmp2380,179,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= dc.roo.air.fluInt.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp2381;
  modelica_metatype tmpMeta2382;
  static int tmp2383 = 0;
  if(!tmp2383)
  {
    tmp2378 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[120]] /* dc.roo.air.fluInt.massDynamics PARAM */),1);
    tmp2379 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[120]] /* dc.roo.air.fluInt.massDynamics PARAM */),4);
    if(!(tmp2378 && tmp2379))
    {
      tmp2381 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[120]] /* dc.roo.air.fluInt.massDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2382 = stringAppend(MMC_REFSTRINGLIT(tmp2380),tmp2381);
      {
        const char* assert_cond = "(dc.roo.air.fluInt.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and dc.roo.air.fluInt.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDFluidInterface.mo",10,3,12,88,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2382));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDFluidInterface.mo",10,3,12,88,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2382));
        }
      }
      tmp2383 = 1;
    }
  }
  threadData->lastEquationSolved = 4646;
}

/*
equation index: 4647
type: ALGORITHM

  assert(dc.roo.air.cfdSurBou[6].bouCon >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.air.cfdSurBou[6].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, "Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.air.cfdSurBou[6].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: " + String(dc.roo.air.cfdSurBou[6].bouCon, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4647(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4647};
  modelica_boolean tmp2384;
  modelica_boolean tmp2385;
  static const MMC_DEFSTRINGLIT(tmp2386,233,"Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.air.cfdSurBou[6].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: ");
  modelica_string tmp2387;
  modelica_metatype tmpMeta2388;
  static int tmp2389 = 0;
  if(!tmp2389)
  {
    tmp2384 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[90]] /* dc.roo.air.cfdSurBou[6].bouCon PARAM */),1);
    tmp2385 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[90]] /* dc.roo.air.cfdSurBou[6].bouCon PARAM */),2);
    if(!(tmp2384 && tmp2385))
    {
      tmp2387 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[90]] /* dc.roo.air.cfdSurBou[6].bouCon PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2388 = stringAppend(MMC_REFSTRINGLIT(tmp2386),tmp2387);
      {
        const char* assert_cond = "(dc.roo.air.cfdSurBou[6].bouCon >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.air.cfdSurBou[6].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDSurfaceInterface.mo",4,3,5,79,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2388));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDSurfaceInterface.mo",4,3,5,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2388));
        }
      }
      tmp2389 = 1;
    }
  }
  threadData->lastEquationSolved = 4647;
}

/*
equation index: 4648
type: ALGORITHM

  assert(dc.roo.air.cfdSurBou[5].bouCon >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.air.cfdSurBou[5].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, "Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.air.cfdSurBou[5].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: " + String(dc.roo.air.cfdSurBou[5].bouCon, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4648(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4648};
  modelica_boolean tmp2390;
  modelica_boolean tmp2391;
  static const MMC_DEFSTRINGLIT(tmp2392,233,"Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.air.cfdSurBou[5].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: ");
  modelica_string tmp2393;
  modelica_metatype tmpMeta2394;
  static int tmp2395 = 0;
  if(!tmp2395)
  {
    tmp2390 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[89]] /* dc.roo.air.cfdSurBou[5].bouCon PARAM */),1);
    tmp2391 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[89]] /* dc.roo.air.cfdSurBou[5].bouCon PARAM */),2);
    if(!(tmp2390 && tmp2391))
    {
      tmp2393 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[89]] /* dc.roo.air.cfdSurBou[5].bouCon PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2394 = stringAppend(MMC_REFSTRINGLIT(tmp2392),tmp2393);
      {
        const char* assert_cond = "(dc.roo.air.cfdSurBou[5].bouCon >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.air.cfdSurBou[5].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDSurfaceInterface.mo",4,3,5,79,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2394));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDSurfaceInterface.mo",4,3,5,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2394));
        }
      }
      tmp2395 = 1;
    }
  }
  threadData->lastEquationSolved = 4648;
}

/*
equation index: 4649
type: ALGORITHM

  assert(dc.roo.air.cfdSurBou[4].bouCon >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.air.cfdSurBou[4].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, "Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.air.cfdSurBou[4].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: " + String(dc.roo.air.cfdSurBou[4].bouCon, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4649(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4649};
  modelica_boolean tmp2396;
  modelica_boolean tmp2397;
  static const MMC_DEFSTRINGLIT(tmp2398,233,"Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.air.cfdSurBou[4].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: ");
  modelica_string tmp2399;
  modelica_metatype tmpMeta2400;
  static int tmp2401 = 0;
  if(!tmp2401)
  {
    tmp2396 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[88]] /* dc.roo.air.cfdSurBou[4].bouCon PARAM */),1);
    tmp2397 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[88]] /* dc.roo.air.cfdSurBou[4].bouCon PARAM */),2);
    if(!(tmp2396 && tmp2397))
    {
      tmp2399 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[88]] /* dc.roo.air.cfdSurBou[4].bouCon PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2400 = stringAppend(MMC_REFSTRINGLIT(tmp2398),tmp2399);
      {
        const char* assert_cond = "(dc.roo.air.cfdSurBou[4].bouCon >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.air.cfdSurBou[4].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDSurfaceInterface.mo",4,3,5,79,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2400));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDSurfaceInterface.mo",4,3,5,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2400));
        }
      }
      tmp2401 = 1;
    }
  }
  threadData->lastEquationSolved = 4649;
}

/*
equation index: 4650
type: ALGORITHM

  assert(dc.roo.air.cfdSurBou[3].bouCon >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.air.cfdSurBou[3].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, "Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.air.cfdSurBou[3].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: " + String(dc.roo.air.cfdSurBou[3].bouCon, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4650(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4650};
  modelica_boolean tmp2402;
  modelica_boolean tmp2403;
  static const MMC_DEFSTRINGLIT(tmp2404,233,"Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.air.cfdSurBou[3].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: ");
  modelica_string tmp2405;
  modelica_metatype tmpMeta2406;
  static int tmp2407 = 0;
  if(!tmp2407)
  {
    tmp2402 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[87]] /* dc.roo.air.cfdSurBou[3].bouCon PARAM */),1);
    tmp2403 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[87]] /* dc.roo.air.cfdSurBou[3].bouCon PARAM */),2);
    if(!(tmp2402 && tmp2403))
    {
      tmp2405 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[87]] /* dc.roo.air.cfdSurBou[3].bouCon PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2406 = stringAppend(MMC_REFSTRINGLIT(tmp2404),tmp2405);
      {
        const char* assert_cond = "(dc.roo.air.cfdSurBou[3].bouCon >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.air.cfdSurBou[3].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDSurfaceInterface.mo",4,3,5,79,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2406));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDSurfaceInterface.mo",4,3,5,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2406));
        }
      }
      tmp2407 = 1;
    }
  }
  threadData->lastEquationSolved = 4650;
}

/*
equation index: 4651
type: ALGORITHM

  assert(dc.roo.air.cfdSurBou[2].bouCon >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.air.cfdSurBou[2].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, "Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.air.cfdSurBou[2].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: " + String(dc.roo.air.cfdSurBou[2].bouCon, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4651(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4651};
  modelica_boolean tmp2408;
  modelica_boolean tmp2409;
  static const MMC_DEFSTRINGLIT(tmp2410,233,"Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.air.cfdSurBou[2].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: ");
  modelica_string tmp2411;
  modelica_metatype tmpMeta2412;
  static int tmp2413 = 0;
  if(!tmp2413)
  {
    tmp2408 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[86]] /* dc.roo.air.cfdSurBou[2].bouCon PARAM */),1);
    tmp2409 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[86]] /* dc.roo.air.cfdSurBou[2].bouCon PARAM */),2);
    if(!(tmp2408 && tmp2409))
    {
      tmp2411 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[86]] /* dc.roo.air.cfdSurBou[2].bouCon PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2412 = stringAppend(MMC_REFSTRINGLIT(tmp2410),tmp2411);
      {
        const char* assert_cond = "(dc.roo.air.cfdSurBou[2].bouCon >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.air.cfdSurBou[2].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDSurfaceInterface.mo",4,3,5,79,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2412));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDSurfaceInterface.mo",4,3,5,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2412));
        }
      }
      tmp2413 = 1;
    }
  }
  threadData->lastEquationSolved = 4651;
}

/*
equation index: 4652
type: ALGORITHM

  assert(dc.roo.air.cfdSurBou[1].bouCon >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.air.cfdSurBou[1].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, "Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.air.cfdSurBou[1].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: " + String(dc.roo.air.cfdSurBou[1].bouCon, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4652(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4652};
  modelica_boolean tmp2414;
  modelica_boolean tmp2415;
  static const MMC_DEFSTRINGLIT(tmp2416,233,"Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.air.cfdSurBou[1].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: ");
  modelica_string tmp2417;
  modelica_metatype tmpMeta2418;
  static int tmp2419 = 0;
  if(!tmp2419)
  {
    tmp2414 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[85]] /* dc.roo.air.cfdSurBou[1].bouCon PARAM */),1);
    tmp2415 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[85]] /* dc.roo.air.cfdSurBou[1].bouCon PARAM */),2);
    if(!(tmp2414 && tmp2415))
    {
      tmp2417 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[85]] /* dc.roo.air.cfdSurBou[1].bouCon PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2418 = stringAppend(MMC_REFSTRINGLIT(tmp2416),tmp2417);
      {
        const char* assert_cond = "(dc.roo.air.cfdSurBou[1].bouCon >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.air.cfdSurBou[1].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDSurfaceInterface.mo",4,3,5,79,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2418));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDSurfaceInterface.mo",4,3,5,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2418));
        }
      }
      tmp2419 = 1;
    }
  }
  threadData->lastEquationSolved = 4652;
}

/*
equation index: 4653
type: ALGORITHM

  assert(dc.roo.air.surIde[6].bouCon >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.air.surIde[6].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, "Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.air.surIde[6].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: " + String(dc.roo.air.surIde[6].bouCon, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4653(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4653};
  modelica_boolean tmp2420;
  modelica_boolean tmp2421;
  static const MMC_DEFSTRINGLIT(tmp2422,230,"Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.air.surIde[6].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: ");
  modelica_string tmp2423;
  modelica_metatype tmpMeta2424;
  static int tmp2425 = 0;
  if(!tmp2425)
  {
    tmp2420 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[166]] /* dc.roo.air.surIde[6].bouCon PARAM */),1);
    tmp2421 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[166]] /* dc.roo.air.surIde[6].bouCon PARAM */),2);
    if(!(tmp2420 && tmp2421))
    {
      tmp2423 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[166]] /* dc.roo.air.surIde[6].bouCon PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2424 = stringAppend(MMC_REFSTRINGLIT(tmp2422),tmp2423);
      {
        const char* assert_cond = "(dc.roo.air.surIde[6].bouCon >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.air.surIde[6].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDSurfaceIdentifier.mo",7,2,8,52,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2424));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDSurfaceIdentifier.mo",7,2,8,52,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2424));
        }
      }
      tmp2425 = 1;
    }
  }
  threadData->lastEquationSolved = 4653;
}

/*
equation index: 4654
type: ALGORITHM

  assert(dc.roo.air.surIde[5].bouCon >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.air.surIde[5].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, "Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.air.surIde[5].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: " + String(dc.roo.air.surIde[5].bouCon, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4654(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4654};
  modelica_boolean tmp2426;
  modelica_boolean tmp2427;
  static const MMC_DEFSTRINGLIT(tmp2428,230,"Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.air.surIde[5].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: ");
  modelica_string tmp2429;
  modelica_metatype tmpMeta2430;
  static int tmp2431 = 0;
  if(!tmp2431)
  {
    tmp2426 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[165]] /* dc.roo.air.surIde[5].bouCon PARAM */),1);
    tmp2427 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[165]] /* dc.roo.air.surIde[5].bouCon PARAM */),2);
    if(!(tmp2426 && tmp2427))
    {
      tmp2429 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[165]] /* dc.roo.air.surIde[5].bouCon PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2430 = stringAppend(MMC_REFSTRINGLIT(tmp2428),tmp2429);
      {
        const char* assert_cond = "(dc.roo.air.surIde[5].bouCon >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.air.surIde[5].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDSurfaceIdentifier.mo",7,2,8,52,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2430));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDSurfaceIdentifier.mo",7,2,8,52,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2430));
        }
      }
      tmp2431 = 1;
    }
  }
  threadData->lastEquationSolved = 4654;
}

/*
equation index: 4655
type: ALGORITHM

  assert(dc.roo.air.surIde[4].bouCon >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.air.surIde[4].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, "Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.air.surIde[4].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: " + String(dc.roo.air.surIde[4].bouCon, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4655(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4655};
  modelica_boolean tmp2432;
  modelica_boolean tmp2433;
  static const MMC_DEFSTRINGLIT(tmp2434,230,"Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.air.surIde[4].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: ");
  modelica_string tmp2435;
  modelica_metatype tmpMeta2436;
  static int tmp2437 = 0;
  if(!tmp2437)
  {
    tmp2432 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[164]] /* dc.roo.air.surIde[4].bouCon PARAM */),1);
    tmp2433 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[164]] /* dc.roo.air.surIde[4].bouCon PARAM */),2);
    if(!(tmp2432 && tmp2433))
    {
      tmp2435 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[164]] /* dc.roo.air.surIde[4].bouCon PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2436 = stringAppend(MMC_REFSTRINGLIT(tmp2434),tmp2435);
      {
        const char* assert_cond = "(dc.roo.air.surIde[4].bouCon >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.air.surIde[4].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDSurfaceIdentifier.mo",7,2,8,52,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2436));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDSurfaceIdentifier.mo",7,2,8,52,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2436));
        }
      }
      tmp2437 = 1;
    }
  }
  threadData->lastEquationSolved = 4655;
}

/*
equation index: 4656
type: ALGORITHM

  assert(dc.roo.air.surIde[3].bouCon >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.air.surIde[3].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, "Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.air.surIde[3].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: " + String(dc.roo.air.surIde[3].bouCon, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4656(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4656};
  modelica_boolean tmp2438;
  modelica_boolean tmp2439;
  static const MMC_DEFSTRINGLIT(tmp2440,230,"Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.air.surIde[3].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: ");
  modelica_string tmp2441;
  modelica_metatype tmpMeta2442;
  static int tmp2443 = 0;
  if(!tmp2443)
  {
    tmp2438 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[163]] /* dc.roo.air.surIde[3].bouCon PARAM */),1);
    tmp2439 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[163]] /* dc.roo.air.surIde[3].bouCon PARAM */),2);
    if(!(tmp2438 && tmp2439))
    {
      tmp2441 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[163]] /* dc.roo.air.surIde[3].bouCon PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2442 = stringAppend(MMC_REFSTRINGLIT(tmp2440),tmp2441);
      {
        const char* assert_cond = "(dc.roo.air.surIde[3].bouCon >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.air.surIde[3].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDSurfaceIdentifier.mo",7,2,8,52,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2442));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDSurfaceIdentifier.mo",7,2,8,52,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2442));
        }
      }
      tmp2443 = 1;
    }
  }
  threadData->lastEquationSolved = 4656;
}

/*
equation index: 4657
type: ALGORITHM

  assert(dc.roo.air.surIde[2].bouCon >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.air.surIde[2].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, "Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.air.surIde[2].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: " + String(dc.roo.air.surIde[2].bouCon, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4657(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4657};
  modelica_boolean tmp2444;
  modelica_boolean tmp2445;
  static const MMC_DEFSTRINGLIT(tmp2446,230,"Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.air.surIde[2].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: ");
  modelica_string tmp2447;
  modelica_metatype tmpMeta2448;
  static int tmp2449 = 0;
  if(!tmp2449)
  {
    tmp2444 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[162]] /* dc.roo.air.surIde[2].bouCon PARAM */),1);
    tmp2445 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[162]] /* dc.roo.air.surIde[2].bouCon PARAM */),2);
    if(!(tmp2444 && tmp2445))
    {
      tmp2447 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[162]] /* dc.roo.air.surIde[2].bouCon PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2448 = stringAppend(MMC_REFSTRINGLIT(tmp2446),tmp2447);
      {
        const char* assert_cond = "(dc.roo.air.surIde[2].bouCon >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.air.surIde[2].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDSurfaceIdentifier.mo",7,2,8,52,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2448));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDSurfaceIdentifier.mo",7,2,8,52,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2448));
        }
      }
      tmp2449 = 1;
    }
  }
  threadData->lastEquationSolved = 4657;
}

/*
equation index: 4658
type: ALGORITHM

  assert(dc.roo.air.surIde[1].bouCon >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.air.surIde[1].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, "Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.air.surIde[1].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: " + String(dc.roo.air.surIde[1].bouCon, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4658(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4658};
  modelica_boolean tmp2450;
  modelica_boolean tmp2451;
  static const MMC_DEFSTRINGLIT(tmp2452,230,"Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.air.surIde[1].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: ");
  modelica_string tmp2453;
  modelica_metatype tmpMeta2454;
  static int tmp2455 = 0;
  if(!tmp2455)
  {
    tmp2450 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[161]] /* dc.roo.air.surIde[1].bouCon PARAM */),1);
    tmp2451 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[161]] /* dc.roo.air.surIde[1].bouCon PARAM */),2);
    if(!(tmp2450 && tmp2451))
    {
      tmp2453 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[161]] /* dc.roo.air.surIde[1].bouCon PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2454 = stringAppend(MMC_REFSTRINGLIT(tmp2452),tmp2453);
      {
        const char* assert_cond = "(dc.roo.air.surIde[1].bouCon >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.air.surIde[1].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDSurfaceIdentifier.mo",7,2,8,52,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2454));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDSurfaceIdentifier.mo",7,2,8,52,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2454));
        }
      }
      tmp2455 = 1;
    }
  }
  threadData->lastEquationSolved = 4658;
}

/*
equation index: 4659
type: ALGORITHM

  assert(dc.roo.air.T_outflow_fixed[12] >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.T_outflow_fixed[12], has value: " + String(dc.roo.air.T_outflow_fixed[12], "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4659(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4659};
  modelica_boolean tmp2456;
  static const MMC_DEFSTRINGLIT(tmp2457,85,"Variable violating min constraint: 0.0 <= dc.roo.air.T_outflow_fixed[12], has value: ");
  modelica_string tmp2458;
  modelica_metatype tmpMeta2459;
  static int tmp2460 = 0;
  if(!tmp2460)
  {
    tmp2456 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[179]] /* dc.roo.air.T_outflow_fixed[12] PARAM */),0.0);
    if(!tmp2456)
    {
      tmp2458 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[179]] /* dc.roo.air.T_outflow_fixed[12] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2459 = stringAppend(MMC_REFSTRINGLIT(tmp2457),tmp2458);
      {
        const char* assert_cond = "(dc.roo.air.T_outflow_fixed[12] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDAirHeatMassBalance.mo",82,3,85,68,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2459));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDAirHeatMassBalance.mo",82,3,85,68,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2459));
        }
      }
      tmp2460 = 1;
    }
  }
  threadData->lastEquationSolved = 4659;
}

/*
equation index: 4660
type: ALGORITHM

  assert(dc.roo.air.T_outflow_fixed[11] >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.T_outflow_fixed[11], has value: " + String(dc.roo.air.T_outflow_fixed[11], "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4660(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4660};
  modelica_boolean tmp2461;
  static const MMC_DEFSTRINGLIT(tmp2462,85,"Variable violating min constraint: 0.0 <= dc.roo.air.T_outflow_fixed[11], has value: ");
  modelica_string tmp2463;
  modelica_metatype tmpMeta2464;
  static int tmp2465 = 0;
  if(!tmp2465)
  {
    tmp2461 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[178]] /* dc.roo.air.T_outflow_fixed[11] PARAM */),0.0);
    if(!tmp2461)
    {
      tmp2463 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[178]] /* dc.roo.air.T_outflow_fixed[11] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2464 = stringAppend(MMC_REFSTRINGLIT(tmp2462),tmp2463);
      {
        const char* assert_cond = "(dc.roo.air.T_outflow_fixed[11] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDAirHeatMassBalance.mo",82,3,85,68,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2464));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDAirHeatMassBalance.mo",82,3,85,68,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2464));
        }
      }
      tmp2465 = 1;
    }
  }
  threadData->lastEquationSolved = 4660;
}

/*
equation index: 4661
type: ALGORITHM

  assert(dc.roo.air.T_outflow_fixed[10] >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.T_outflow_fixed[10], has value: " + String(dc.roo.air.T_outflow_fixed[10], "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4661(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4661};
  modelica_boolean tmp2466;
  static const MMC_DEFSTRINGLIT(tmp2467,85,"Variable violating min constraint: 0.0 <= dc.roo.air.T_outflow_fixed[10], has value: ");
  modelica_string tmp2468;
  modelica_metatype tmpMeta2469;
  static int tmp2470 = 0;
  if(!tmp2470)
  {
    tmp2466 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[177]] /* dc.roo.air.T_outflow_fixed[10] PARAM */),0.0);
    if(!tmp2466)
    {
      tmp2468 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[177]] /* dc.roo.air.T_outflow_fixed[10] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2469 = stringAppend(MMC_REFSTRINGLIT(tmp2467),tmp2468);
      {
        const char* assert_cond = "(dc.roo.air.T_outflow_fixed[10] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDAirHeatMassBalance.mo",82,3,85,68,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2469));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDAirHeatMassBalance.mo",82,3,85,68,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2469));
        }
      }
      tmp2470 = 1;
    }
  }
  threadData->lastEquationSolved = 4661;
}

/*
equation index: 4662
type: ALGORITHM

  assert(dc.roo.air.T_outflow_fixed[9] >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.T_outflow_fixed[9], has value: " + String(dc.roo.air.T_outflow_fixed[9], "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4662(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4662};
  modelica_boolean tmp2471;
  static const MMC_DEFSTRINGLIT(tmp2472,84,"Variable violating min constraint: 0.0 <= dc.roo.air.T_outflow_fixed[9], has value: ");
  modelica_string tmp2473;
  modelica_metatype tmpMeta2474;
  static int tmp2475 = 0;
  if(!tmp2475)
  {
    tmp2471 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[176]] /* dc.roo.air.T_outflow_fixed[9] PARAM */),0.0);
    if(!tmp2471)
    {
      tmp2473 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[176]] /* dc.roo.air.T_outflow_fixed[9] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2474 = stringAppend(MMC_REFSTRINGLIT(tmp2472),tmp2473);
      {
        const char* assert_cond = "(dc.roo.air.T_outflow_fixed[9] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDAirHeatMassBalance.mo",82,3,85,68,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2474));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDAirHeatMassBalance.mo",82,3,85,68,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2474));
        }
      }
      tmp2475 = 1;
    }
  }
  threadData->lastEquationSolved = 4662;
}

/*
equation index: 4663
type: ALGORITHM

  assert(dc.roo.air.T_outflow_fixed[8] >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.T_outflow_fixed[8], has value: " + String(dc.roo.air.T_outflow_fixed[8], "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4663(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4663};
  modelica_boolean tmp2476;
  static const MMC_DEFSTRINGLIT(tmp2477,84,"Variable violating min constraint: 0.0 <= dc.roo.air.T_outflow_fixed[8], has value: ");
  modelica_string tmp2478;
  modelica_metatype tmpMeta2479;
  static int tmp2480 = 0;
  if(!tmp2480)
  {
    tmp2476 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[175]] /* dc.roo.air.T_outflow_fixed[8] PARAM */),0.0);
    if(!tmp2476)
    {
      tmp2478 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[175]] /* dc.roo.air.T_outflow_fixed[8] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2479 = stringAppend(MMC_REFSTRINGLIT(tmp2477),tmp2478);
      {
        const char* assert_cond = "(dc.roo.air.T_outflow_fixed[8] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDAirHeatMassBalance.mo",82,3,85,68,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2479));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDAirHeatMassBalance.mo",82,3,85,68,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2479));
        }
      }
      tmp2480 = 1;
    }
  }
  threadData->lastEquationSolved = 4663;
}

/*
equation index: 4664
type: ALGORITHM

  assert(dc.roo.air.T_outflow_fixed[7] >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.T_outflow_fixed[7], has value: " + String(dc.roo.air.T_outflow_fixed[7], "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4664(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4664};
  modelica_boolean tmp2481;
  static const MMC_DEFSTRINGLIT(tmp2482,84,"Variable violating min constraint: 0.0 <= dc.roo.air.T_outflow_fixed[7], has value: ");
  modelica_string tmp2483;
  modelica_metatype tmpMeta2484;
  static int tmp2485 = 0;
  if(!tmp2485)
  {
    tmp2481 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[174]] /* dc.roo.air.T_outflow_fixed[7] PARAM */),0.0);
    if(!tmp2481)
    {
      tmp2483 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[174]] /* dc.roo.air.T_outflow_fixed[7] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2484 = stringAppend(MMC_REFSTRINGLIT(tmp2482),tmp2483);
      {
        const char* assert_cond = "(dc.roo.air.T_outflow_fixed[7] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDAirHeatMassBalance.mo",82,3,85,68,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2484));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDAirHeatMassBalance.mo",82,3,85,68,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2484));
        }
      }
      tmp2485 = 1;
    }
  }
  threadData->lastEquationSolved = 4664;
}

/*
equation index: 4665
type: ALGORITHM

  assert(dc.roo.air.T_outflow_fixed[6] >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.T_outflow_fixed[6], has value: " + String(dc.roo.air.T_outflow_fixed[6], "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4665(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4665};
  modelica_boolean tmp2486;
  static const MMC_DEFSTRINGLIT(tmp2487,84,"Variable violating min constraint: 0.0 <= dc.roo.air.T_outflow_fixed[6], has value: ");
  modelica_string tmp2488;
  modelica_metatype tmpMeta2489;
  static int tmp2490 = 0;
  if(!tmp2490)
  {
    tmp2486 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[173]] /* dc.roo.air.T_outflow_fixed[6] PARAM */),0.0);
    if(!tmp2486)
    {
      tmp2488 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[173]] /* dc.roo.air.T_outflow_fixed[6] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2489 = stringAppend(MMC_REFSTRINGLIT(tmp2487),tmp2488);
      {
        const char* assert_cond = "(dc.roo.air.T_outflow_fixed[6] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDAirHeatMassBalance.mo",82,3,85,68,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2489));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDAirHeatMassBalance.mo",82,3,85,68,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2489));
        }
      }
      tmp2490 = 1;
    }
  }
  threadData->lastEquationSolved = 4665;
}

/*
equation index: 4666
type: ALGORITHM

  assert(dc.roo.air.T_outflow_fixed[5] >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.T_outflow_fixed[5], has value: " + String(dc.roo.air.T_outflow_fixed[5], "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4666(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4666};
  modelica_boolean tmp2491;
  static const MMC_DEFSTRINGLIT(tmp2492,84,"Variable violating min constraint: 0.0 <= dc.roo.air.T_outflow_fixed[5], has value: ");
  modelica_string tmp2493;
  modelica_metatype tmpMeta2494;
  static int tmp2495 = 0;
  if(!tmp2495)
  {
    tmp2491 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[172]] /* dc.roo.air.T_outflow_fixed[5] PARAM */),0.0);
    if(!tmp2491)
    {
      tmp2493 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[172]] /* dc.roo.air.T_outflow_fixed[5] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2494 = stringAppend(MMC_REFSTRINGLIT(tmp2492),tmp2493);
      {
        const char* assert_cond = "(dc.roo.air.T_outflow_fixed[5] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDAirHeatMassBalance.mo",82,3,85,68,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2494));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDAirHeatMassBalance.mo",82,3,85,68,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2494));
        }
      }
      tmp2495 = 1;
    }
  }
  threadData->lastEquationSolved = 4666;
}

/*
equation index: 4667
type: ALGORITHM

  assert(dc.roo.air.T_outflow_fixed[4] >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.T_outflow_fixed[4], has value: " + String(dc.roo.air.T_outflow_fixed[4], "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4667(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4667};
  modelica_boolean tmp2496;
  static const MMC_DEFSTRINGLIT(tmp2497,84,"Variable violating min constraint: 0.0 <= dc.roo.air.T_outflow_fixed[4], has value: ");
  modelica_string tmp2498;
  modelica_metatype tmpMeta2499;
  static int tmp2500 = 0;
  if(!tmp2500)
  {
    tmp2496 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[171]] /* dc.roo.air.T_outflow_fixed[4] PARAM */),0.0);
    if(!tmp2496)
    {
      tmp2498 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[171]] /* dc.roo.air.T_outflow_fixed[4] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2499 = stringAppend(MMC_REFSTRINGLIT(tmp2497),tmp2498);
      {
        const char* assert_cond = "(dc.roo.air.T_outflow_fixed[4] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDAirHeatMassBalance.mo",82,3,85,68,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2499));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDAirHeatMassBalance.mo",82,3,85,68,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2499));
        }
      }
      tmp2500 = 1;
    }
  }
  threadData->lastEquationSolved = 4667;
}

/*
equation index: 4668
type: ALGORITHM

  assert(dc.roo.air.T_outflow_fixed[3] >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.T_outflow_fixed[3], has value: " + String(dc.roo.air.T_outflow_fixed[3], "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4668(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4668};
  modelica_boolean tmp2501;
  static const MMC_DEFSTRINGLIT(tmp2502,84,"Variable violating min constraint: 0.0 <= dc.roo.air.T_outflow_fixed[3], has value: ");
  modelica_string tmp2503;
  modelica_metatype tmpMeta2504;
  static int tmp2505 = 0;
  if(!tmp2505)
  {
    tmp2501 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[170]] /* dc.roo.air.T_outflow_fixed[3] PARAM */),0.0);
    if(!tmp2501)
    {
      tmp2503 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[170]] /* dc.roo.air.T_outflow_fixed[3] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2504 = stringAppend(MMC_REFSTRINGLIT(tmp2502),tmp2503);
      {
        const char* assert_cond = "(dc.roo.air.T_outflow_fixed[3] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDAirHeatMassBalance.mo",82,3,85,68,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2504));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDAirHeatMassBalance.mo",82,3,85,68,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2504));
        }
      }
      tmp2505 = 1;
    }
  }
  threadData->lastEquationSolved = 4668;
}

/*
equation index: 4669
type: ALGORITHM

  assert(dc.roo.air.T_outflow_fixed[2] >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.T_outflow_fixed[2], has value: " + String(dc.roo.air.T_outflow_fixed[2], "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4669(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4669};
  modelica_boolean tmp2506;
  static const MMC_DEFSTRINGLIT(tmp2507,84,"Variable violating min constraint: 0.0 <= dc.roo.air.T_outflow_fixed[2], has value: ");
  modelica_string tmp2508;
  modelica_metatype tmpMeta2509;
  static int tmp2510 = 0;
  if(!tmp2510)
  {
    tmp2506 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[169]] /* dc.roo.air.T_outflow_fixed[2] PARAM */),0.0);
    if(!tmp2506)
    {
      tmp2508 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[169]] /* dc.roo.air.T_outflow_fixed[2] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2509 = stringAppend(MMC_REFSTRINGLIT(tmp2507),tmp2508);
      {
        const char* assert_cond = "(dc.roo.air.T_outflow_fixed[2] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDAirHeatMassBalance.mo",82,3,85,68,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2509));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDAirHeatMassBalance.mo",82,3,85,68,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2509));
        }
      }
      tmp2510 = 1;
    }
  }
  threadData->lastEquationSolved = 4669;
}

/*
equation index: 4670
type: ALGORITHM

  assert(dc.roo.air.T_outflow_fixed[1] >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.T_outflow_fixed[1], has value: " + String(dc.roo.air.T_outflow_fixed[1], "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4670(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4670};
  modelica_boolean tmp2511;
  static const MMC_DEFSTRINGLIT(tmp2512,84,"Variable violating min constraint: 0.0 <= dc.roo.air.T_outflow_fixed[1], has value: ");
  modelica_string tmp2513;
  modelica_metatype tmpMeta2514;
  static int tmp2515 = 0;
  if(!tmp2515)
  {
    tmp2511 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[168]] /* dc.roo.air.T_outflow_fixed[1] PARAM */),0.0);
    if(!tmp2511)
    {
      tmp2513 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[168]] /* dc.roo.air.T_outflow_fixed[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2514 = stringAppend(MMC_REFSTRINGLIT(tmp2512),tmp2513);
      {
        const char* assert_cond = "(dc.roo.air.T_outflow_fixed[1] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDAirHeatMassBalance.mo",82,3,85,68,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2514));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDAirHeatMassBalance.mo",82,3,85,68,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2514));
        }
      }
      tmp2515 = 1;
    }
  }
  threadData->lastEquationSolved = 4670;
}

/*
equation index: 4671
type: ALGORITHM

  assert(dc.roo.air.TSha_fixed[1] >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.TSha_fixed[1], has value: " + String(dc.roo.air.TSha_fixed[1], "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4671(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4671};
  modelica_boolean tmp2516;
  static const MMC_DEFSTRINGLIT(tmp2517,79,"Variable violating min constraint: 0.0 <= dc.roo.air.TSha_fixed[1], has value: ");
  modelica_string tmp2518;
  modelica_metatype tmpMeta2519;
  static int tmp2520 = 0;
  if(!tmp2520)
  {
    tmp2516 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[167]] /* dc.roo.air.TSha_fixed[1] PARAM */),0.0);
    if(!tmp2516)
    {
      tmp2518 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[167]] /* dc.roo.air.TSha_fixed[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2519 = stringAppend(MMC_REFSTRINGLIT(tmp2517),tmp2518);
      {
        const char* assert_cond = "(dc.roo.air.TSha_fixed[1] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDAirHeatMassBalance.mo",79,3,81,68,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2519));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDAirHeatMassBalance.mo",79,3,81,68,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2519));
        }
      }
      tmp2520 = 1;
    }
  }
  threadData->lastEquationSolved = 4671;
}

/*
equation index: 4672
type: ALGORITHM

  assert(dc.roo.air.TRooAve_fixed >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.TRooAve_fixed, has value: " + String(dc.roo.air.TRooAve_fixed, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4672(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4672};
  modelica_boolean tmp2521;
  static const MMC_DEFSTRINGLIT(tmp2522,79,"Variable violating min constraint: 0.0 <= dc.roo.air.TRooAve_fixed, has value: ");
  modelica_string tmp2523;
  modelica_metatype tmpMeta2524;
  static int tmp2525 = 0;
  if(!tmp2525)
  {
    tmp2521 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[166]] /* dc.roo.air.TRooAve_fixed PARAM */),0.0);
    if(!tmp2521)
    {
      tmp2523 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[166]] /* dc.roo.air.TRooAve_fixed PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2524 = stringAppend(MMC_REFSTRINGLIT(tmp2522),tmp2523);
      {
        const char* assert_cond = "(dc.roo.air.TRooAve_fixed >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDAirHeatMassBalance.mo",76,3,78,68,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2524));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDAirHeatMassBalance.mo",76,3,78,68,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2524));
        }
      }
      tmp2525 = 1;
    }
  }
  threadData->lastEquationSolved = 4672;
}

/*
equation index: 4673
type: ALGORITHM

  assert(dc.roo.air.cfd.nSen >= 0, "Variable violating min constraint: 0 <= dc.roo.air.cfd.nSen, has value: " + String(dc.roo.air.cfd.nSen, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4673(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4673};
  modelica_boolean tmp2526;
  static const MMC_DEFSTRINGLIT(tmp2527,72,"Variable violating min constraint: 0 <= dc.roo.air.cfd.nSen, has value: ");
  modelica_string tmp2528;
  modelica_metatype tmpMeta2529;
  static int tmp2530 = 0;
  if(!tmp2530)
  {
    tmp2526 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[75]] /* dc.roo.air.cfd.nSen PARAM */),((modelica_integer) 0));
    if(!tmp2526)
    {
      tmp2528 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[75]] /* dc.roo.air.cfd.nSen PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2529 = stringAppend(MMC_REFSTRINGLIT(tmp2527),tmp2528);
      {
        const char* assert_cond = "(dc.roo.air.cfd.nSen >= 0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",53,3,54,57,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2529));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",53,3,54,57,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2529));
        }
      }
      tmp2530 = 1;
    }
  }
  threadData->lastEquationSolved = 4673;
}

/*
equation index: 4674
type: ALGORITHM

  assert(dc.roo.air.cfd.rho_start >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.cfd.rho_start, has value: " + String(dc.roo.air.cfd.rho_start, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4674(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4674};
  modelica_boolean tmp2531;
  static const MMC_DEFSTRINGLIT(tmp2532,79,"Variable violating min constraint: 0.0 <= dc.roo.air.cfd.rho_start, has value: ");
  modelica_string tmp2533;
  modelica_metatype tmpMeta2534;
  static int tmp2535 = 0;
  if(!tmp2535)
  {
    tmp2531 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[193]] /* dc.roo.air.cfd.rho_start PARAM */),0.0);
    if(!tmp2531)
    {
      tmp2533 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[193]] /* dc.roo.air.cfd.rho_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2534 = stringAppend(MMC_REFSTRINGLIT(tmp2532),tmp2533);
      {
        const char* assert_cond = "(dc.roo.air.cfd.rho_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",37,3,37,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2534));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",37,3,37,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2534));
        }
      }
      tmp2535 = 1;
    }
  }
  threadData->lastEquationSolved = 4674;
}

/*
equation index: 4675
type: ALGORITHM

  assert(dc.roo.air.cfd.surIde[6].bouCon >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.air.cfd.surIde[6].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, "Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.air.cfd.surIde[6].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: " + String(dc.roo.air.cfd.surIde[6].bouCon, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4675(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4675};
  modelica_boolean tmp2536;
  modelica_boolean tmp2537;
  static const MMC_DEFSTRINGLIT(tmp2538,234,"Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.air.cfd.surIde[6].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: ");
  modelica_string tmp2539;
  modelica_metatype tmpMeta2540;
  static int tmp2541 = 0;
  if(!tmp2541)
  {
    tmp2536 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[84]] /* dc.roo.air.cfd.surIde[6].bouCon PARAM */),1);
    tmp2537 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[84]] /* dc.roo.air.cfd.surIde[6].bouCon PARAM */),2);
    if(!(tmp2536 && tmp2537))
    {
      tmp2539 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[84]] /* dc.roo.air.cfd.surIde[6].bouCon PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2540 = stringAppend(MMC_REFSTRINGLIT(tmp2538),tmp2539);
      {
        const char* assert_cond = "(dc.roo.air.cfd.surIde[6].bouCon >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.air.cfd.surIde[6].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDSurfaceIdentifier.mo",7,2,8,52,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2540));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDSurfaceIdentifier.mo",7,2,8,52,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2540));
        }
      }
      tmp2541 = 1;
    }
  }
  threadData->lastEquationSolved = 4675;
}

/*
equation index: 4676
type: ALGORITHM

  assert(dc.roo.air.cfd.surIde[5].bouCon >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.air.cfd.surIde[5].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, "Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.air.cfd.surIde[5].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: " + String(dc.roo.air.cfd.surIde[5].bouCon, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4676(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4676};
  modelica_boolean tmp2542;
  modelica_boolean tmp2543;
  static const MMC_DEFSTRINGLIT(tmp2544,234,"Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.air.cfd.surIde[5].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: ");
  modelica_string tmp2545;
  modelica_metatype tmpMeta2546;
  static int tmp2547 = 0;
  if(!tmp2547)
  {
    tmp2542 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[83]] /* dc.roo.air.cfd.surIde[5].bouCon PARAM */),1);
    tmp2543 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[83]] /* dc.roo.air.cfd.surIde[5].bouCon PARAM */),2);
    if(!(tmp2542 && tmp2543))
    {
      tmp2545 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[83]] /* dc.roo.air.cfd.surIde[5].bouCon PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2546 = stringAppend(MMC_REFSTRINGLIT(tmp2544),tmp2545);
      {
        const char* assert_cond = "(dc.roo.air.cfd.surIde[5].bouCon >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.air.cfd.surIde[5].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDSurfaceIdentifier.mo",7,2,8,52,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2546));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDSurfaceIdentifier.mo",7,2,8,52,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2546));
        }
      }
      tmp2547 = 1;
    }
  }
  threadData->lastEquationSolved = 4676;
}

/*
equation index: 4677
type: ALGORITHM

  assert(dc.roo.air.cfd.surIde[4].bouCon >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.air.cfd.surIde[4].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, "Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.air.cfd.surIde[4].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: " + String(dc.roo.air.cfd.surIde[4].bouCon, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4677(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4677};
  modelica_boolean tmp2548;
  modelica_boolean tmp2549;
  static const MMC_DEFSTRINGLIT(tmp2550,234,"Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.air.cfd.surIde[4].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: ");
  modelica_string tmp2551;
  modelica_metatype tmpMeta2552;
  static int tmp2553 = 0;
  if(!tmp2553)
  {
    tmp2548 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[82]] /* dc.roo.air.cfd.surIde[4].bouCon PARAM */),1);
    tmp2549 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[82]] /* dc.roo.air.cfd.surIde[4].bouCon PARAM */),2);
    if(!(tmp2548 && tmp2549))
    {
      tmp2551 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[82]] /* dc.roo.air.cfd.surIde[4].bouCon PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2552 = stringAppend(MMC_REFSTRINGLIT(tmp2550),tmp2551);
      {
        const char* assert_cond = "(dc.roo.air.cfd.surIde[4].bouCon >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.air.cfd.surIde[4].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDSurfaceIdentifier.mo",7,2,8,52,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2552));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDSurfaceIdentifier.mo",7,2,8,52,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2552));
        }
      }
      tmp2553 = 1;
    }
  }
  threadData->lastEquationSolved = 4677;
}

/*
equation index: 4678
type: ALGORITHM

  assert(dc.roo.air.cfd.surIde[3].bouCon >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.air.cfd.surIde[3].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, "Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.air.cfd.surIde[3].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: " + String(dc.roo.air.cfd.surIde[3].bouCon, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4678(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4678};
  modelica_boolean tmp2554;
  modelica_boolean tmp2555;
  static const MMC_DEFSTRINGLIT(tmp2556,234,"Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.air.cfd.surIde[3].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: ");
  modelica_string tmp2557;
  modelica_metatype tmpMeta2558;
  static int tmp2559 = 0;
  if(!tmp2559)
  {
    tmp2554 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[81]] /* dc.roo.air.cfd.surIde[3].bouCon PARAM */),1);
    tmp2555 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[81]] /* dc.roo.air.cfd.surIde[3].bouCon PARAM */),2);
    if(!(tmp2554 && tmp2555))
    {
      tmp2557 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[81]] /* dc.roo.air.cfd.surIde[3].bouCon PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2558 = stringAppend(MMC_REFSTRINGLIT(tmp2556),tmp2557);
      {
        const char* assert_cond = "(dc.roo.air.cfd.surIde[3].bouCon >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.air.cfd.surIde[3].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDSurfaceIdentifier.mo",7,2,8,52,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2558));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDSurfaceIdentifier.mo",7,2,8,52,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2558));
        }
      }
      tmp2559 = 1;
    }
  }
  threadData->lastEquationSolved = 4678;
}

/*
equation index: 4679
type: ALGORITHM

  assert(dc.roo.air.cfd.surIde[2].bouCon >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.air.cfd.surIde[2].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, "Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.air.cfd.surIde[2].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: " + String(dc.roo.air.cfd.surIde[2].bouCon, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4679(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4679};
  modelica_boolean tmp2560;
  modelica_boolean tmp2561;
  static const MMC_DEFSTRINGLIT(tmp2562,234,"Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.air.cfd.surIde[2].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: ");
  modelica_string tmp2563;
  modelica_metatype tmpMeta2564;
  static int tmp2565 = 0;
  if(!tmp2565)
  {
    tmp2560 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[80]] /* dc.roo.air.cfd.surIde[2].bouCon PARAM */),1);
    tmp2561 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[80]] /* dc.roo.air.cfd.surIde[2].bouCon PARAM */),2);
    if(!(tmp2560 && tmp2561))
    {
      tmp2563 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[80]] /* dc.roo.air.cfd.surIde[2].bouCon PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2564 = stringAppend(MMC_REFSTRINGLIT(tmp2562),tmp2563);
      {
        const char* assert_cond = "(dc.roo.air.cfd.surIde[2].bouCon >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.air.cfd.surIde[2].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDSurfaceIdentifier.mo",7,2,8,52,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2564));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDSurfaceIdentifier.mo",7,2,8,52,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2564));
        }
      }
      tmp2565 = 1;
    }
  }
  threadData->lastEquationSolved = 4679;
}

/*
equation index: 4680
type: ALGORITHM

  assert(dc.roo.air.cfd.surIde[1].bouCon >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.air.cfd.surIde[1].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, "Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.air.cfd.surIde[1].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: " + String(dc.roo.air.cfd.surIde[1].bouCon, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4680(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4680};
  modelica_boolean tmp2566;
  modelica_boolean tmp2567;
  static const MMC_DEFSTRINGLIT(tmp2568,234,"Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.air.cfd.surIde[1].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: ");
  modelica_string tmp2569;
  modelica_metatype tmpMeta2570;
  static int tmp2571 = 0;
  if(!tmp2571)
  {
    tmp2566 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[79]] /* dc.roo.air.cfd.surIde[1].bouCon PARAM */),1);
    tmp2567 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[79]] /* dc.roo.air.cfd.surIde[1].bouCon PARAM */),2);
    if(!(tmp2566 && tmp2567))
    {
      tmp2569 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[79]] /* dc.roo.air.cfd.surIde[1].bouCon PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2570 = stringAppend(MMC_REFSTRINGLIT(tmp2568),tmp2569);
      {
        const char* assert_cond = "(dc.roo.air.cfd.surIde[1].bouCon >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.air.cfd.surIde[1].bouCon <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDSurfaceIdentifier.mo",7,2,8,52,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2570));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDSurfaceIdentifier.mo",7,2,8,52,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2570));
        }
      }
      tmp2571 = 1;
    }
  }
  threadData->lastEquationSolved = 4680;
}

/*
equation index: 4681
type: ALGORITHM

  assert(dc.roo.air.cfd.nConExtWin >= 0, "Variable violating min constraint: 0 <= dc.roo.air.cfd.nConExtWin, has value: " + String(dc.roo.air.cfd.nConExtWin, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4681(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4681};
  modelica_boolean tmp2572;
  static const MMC_DEFSTRINGLIT(tmp2573,78,"Variable violating min constraint: 0 <= dc.roo.air.cfd.nConExtWin, has value: ");
  modelica_string tmp2574;
  modelica_metatype tmpMeta2575;
  static int tmp2576 = 0;
  if(!tmp2576)
  {
    tmp2572 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[72]] /* dc.roo.air.cfd.nConExtWin PARAM */),((modelica_integer) 0));
    if(!tmp2572)
    {
      tmp2574 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[72]] /* dc.roo.air.cfd.nConExtWin PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2575 = stringAppend(MMC_REFSTRINGLIT(tmp2573),tmp2574);
      {
        const char* assert_cond = "(dc.roo.air.cfd.nConExtWin >= 0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",25,3,26,50,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2575));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",25,3,26,50,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2575));
        }
      }
      tmp2576 = 1;
    }
  }
  threadData->lastEquationSolved = 4681;
}

/*
equation index: 4682
type: ALGORITHM

  assert(dc.roo.air.cfd.nSur >= 2, "Variable violating min constraint: 2 <= dc.roo.air.cfd.nSur, has value: " + String(dc.roo.air.cfd.nSur, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4682(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4682};
  modelica_boolean tmp2577;
  static const MMC_DEFSTRINGLIT(tmp2578,72,"Variable violating min constraint: 2 <= dc.roo.air.cfd.nSur, has value: ");
  modelica_string tmp2579;
  modelica_metatype tmpMeta2580;
  static int tmp2581 = 0;
  if(!tmp2581)
  {
    tmp2577 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[76]] /* dc.roo.air.cfd.nSur PARAM */),((modelica_integer) 2));
    if(!tmp2577)
    {
      tmp2579 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[76]] /* dc.roo.air.cfd.nSur PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2580 = stringAppend(MMC_REFSTRINGLIT(tmp2578),tmp2579);
      {
        const char* assert_cond = "(dc.roo.air.cfd.nSur >= 2)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",24,3,24,53,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2580));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",24,3,24,53,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2580));
        }
      }
      tmp2581 = 1;
    }
  }
  threadData->lastEquationSolved = 4682;
}

/*
equation index: 4683
type: ALGORITHM

  assert(dc.roo.air.cfd.nRea >= 0, "Variable violating min constraint: 0 <= dc.roo.air.cfd.nRea, has value: " + String(dc.roo.air.cfd.nRea, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4683(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4683};
  modelica_boolean tmp2582;
  static const MMC_DEFSTRINGLIT(tmp2583,72,"Variable violating min constraint: 0 <= dc.roo.air.cfd.nRea, has value: ");
  modelica_string tmp2584;
  modelica_metatype tmpMeta2585;
  static int tmp2586 = 0;
  if(!tmp2586)
  {
    tmp2582 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[74]] /* dc.roo.air.cfd.nRea PARAM */),((modelica_integer) 0));
    if(!tmp2582)
    {
      tmp2584 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[74]] /* dc.roo.air.cfd.nRea PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2585 = stringAppend(MMC_REFSTRINGLIT(tmp2583),tmp2584);
      {
        const char* assert_cond = "(dc.roo.air.cfd.nRea >= 0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",17,3,18,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2585));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",17,3,18,65,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2585));
        }
      }
      tmp2586 = 1;
    }
  }
  threadData->lastEquationSolved = 4683;
}

/*
equation index: 4684
type: ALGORITHM

  assert(dc.roo.air.cfd.nWri >= 0, "Variable violating min constraint: 0 <= dc.roo.air.cfd.nWri, has value: " + String(dc.roo.air.cfd.nWri, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4684(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4684};
  modelica_boolean tmp2587;
  static const MMC_DEFSTRINGLIT(tmp2588,72,"Variable violating min constraint: 0 <= dc.roo.air.cfd.nWri, has value: ");
  modelica_string tmp2589;
  modelica_metatype tmpMeta2590;
  static int tmp2591 = 0;
  if(!tmp2591)
  {
    tmp2587 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[77]] /* dc.roo.air.cfd.nWri PARAM */),((modelica_integer) 0));
    if(!tmp2587)
    {
      tmp2589 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[77]] /* dc.roo.air.cfd.nWri PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2590 = stringAppend(MMC_REFSTRINGLIT(tmp2588),tmp2589);
      {
        const char* assert_cond = "(dc.roo.air.cfd.nWri >= 0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",15,3,16,54,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2590));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",15,3,16,54,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2590));
        }
      }
      tmp2591 = 1;
    }
  }
  threadData->lastEquationSolved = 4684;
}

/*
equation index: 4685
type: ALGORITHM

  assert(dc.roo.air.samplePeriod >= 1e-13, "Variable violating min constraint: 1e-13 <= dc.roo.air.samplePeriod, has value: " + String(dc.roo.air.samplePeriod, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4685(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4685};
  modelica_boolean tmp2592;
  static const MMC_DEFSTRINGLIT(tmp2593,80,"Variable violating min constraint: 1e-13 <= dc.roo.air.samplePeriod, has value: ");
  modelica_string tmp2594;
  modelica_metatype tmpMeta2595;
  static int tmp2596 = 0;
  if(!tmp2596)
  {
    tmp2592 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[415]] /* dc.roo.air.samplePeriod PARAM */),1e-13);
    if(!tmp2592)
    {
      tmp2594 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[415]] /* dc.roo.air.samplePeriod PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2595 = stringAppend(MMC_REFSTRINGLIT(tmp2593),tmp2594);
      {
        const char* assert_cond = "(dc.roo.air.samplePeriod >= 1e-13)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDAirHeatMassBalance.mo",24,3,25,71,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2595));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDAirHeatMassBalance.mo",24,3,25,71,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2595));
        }
      }
      tmp2596 = 1;
    }
  }
  threadData->lastEquationSolved = 4685;
}

/*
equation index: 4686
type: ALGORITHM

  assert(dc.roo.air.cfd.samplePeriod >= 1e-13, "Variable violating min constraint: 1e-13 <= dc.roo.air.cfd.samplePeriod, has value: " + String(dc.roo.air.cfd.samplePeriod, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4686(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4686};
  modelica_boolean tmp2597;
  static const MMC_DEFSTRINGLIT(tmp2598,84,"Variable violating min constraint: 1e-13 <= dc.roo.air.cfd.samplePeriod, has value: ");
  modelica_string tmp2599;
  modelica_metatype tmpMeta2600;
  static int tmp2601 = 0;
  if(!tmp2601)
  {
    tmp2597 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */),1e-13);
    if(!tmp2597)
    {
      tmp2599 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* dc.roo.air.cfd.samplePeriod PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2600 = stringAppend(MMC_REFSTRINGLIT(tmp2598),tmp2599);
      {
        const char* assert_cond = "(dc.roo.air.cfd.samplePeriod >= 1e-13)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/cfd/.openmodelica/libraries/Modelica 4.0.0+maint.om/Blocks/Interfaces.mo",539,5,540,35,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2600));
        } else {
          FILE_INFO info = {"/home/cfd/.openmodelica/libraries/Modelica 4.0.0+maint.om/Blocks/Interfaces.mo",539,5,540,35,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2600));
        }
      }
      tmp2601 = 1;
    }
  }
  threadData->lastEquationSolved = 4686;
}

/*
equation index: 4687
type: ALGORITHM

  assert(dc.roo.air.nSen >= 0, "Variable violating min constraint: 0 <= dc.roo.air.nSen, has value: " + String(dc.roo.air.nSen, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4687(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4687};
  modelica_boolean tmp2602;
  static const MMC_DEFSTRINGLIT(tmp2603,68,"Variable violating min constraint: 0 <= dc.roo.air.nSen, has value: ");
  modelica_string tmp2604;
  modelica_metatype tmpMeta2605;
  static int tmp2606 = 0;
  if(!tmp2606)
  {
    tmp2602 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[152]] /* dc.roo.air.nSen PARAM */),((modelica_integer) 0));
    if(!tmp2602)
    {
      tmp2604 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[152]] /* dc.roo.air.nSen PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2605 = stringAppend(MMC_REFSTRINGLIT(tmp2603),tmp2604);
      {
        const char* assert_cond = "(dc.roo.air.nSen >= 0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDAirHeatMassBalance.mo",29,3,30,57,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2605));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDAirHeatMassBalance.mo",29,3,30,57,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2605));
        }
      }
      tmp2606 = 1;
    }
  }
  threadData->lastEquationSolved = 4687;
}

/*
equation index: 4688
type: ALGORITHM

  assert(dc.roo.air.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and dc.roo.air.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= dc.roo.air.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(dc.roo.air.massDynamics, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4688(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4688};
  modelica_boolean tmp2607;
  modelica_boolean tmp2608;
  static const MMC_DEFSTRINGLIT(tmp2609,172,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= dc.roo.air.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp2610;
  modelica_metatype tmpMeta2611;
  static int tmp2612 = 0;
  if(!tmp2612)
  {
    tmp2607 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[146]] /* dc.roo.air.massDynamics PARAM */),1);
    tmp2608 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[146]] /* dc.roo.air.massDynamics PARAM */),4);
    if(!(tmp2607 && tmp2608))
    {
      tmp2610 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[146]] /* dc.roo.air.massDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2611 = stringAppend(MMC_REFSTRINGLIT(tmp2609),tmp2610);
      {
        const char* assert_cond = "(dc.roo.air.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and dc.roo.air.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDAirHeatMassBalance.mo",11,3,13,88,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2611));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDAirHeatMassBalance.mo",11,3,13,88,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2611));
        }
      }
      tmp2612 = 1;
    }
  }
  threadData->lastEquationSolved = 4688;
}

/*
equation index: 4689
type: ALGORITHM

  assert(dc.roo.air.datConExtWin[1].fFra >= 0.0 and dc.roo.air.datConExtWin[1].fFra <= 1.0, "Variable violating min/max constraint: 0.0 <= dc.roo.air.datConExtWin[1].fFra <= 1.0, has value: " + String(dc.roo.air.datConExtWin[1].fFra, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4689(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4689};
  modelica_boolean tmp2613;
  modelica_boolean tmp2614;
  static const MMC_DEFSTRINGLIT(tmp2615,97,"Variable violating min/max constraint: 0.0 <= dc.roo.air.datConExtWin[1].fFra <= 1.0, has value: ");
  modelica_string tmp2616;
  modelica_metatype tmpMeta2617;
  static int tmp2618 = 0;
  if(!tmp2618)
  {
    tmp2613 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[289]] /* dc.roo.air.datConExtWin[1].fFra PARAM */),0.0);
    tmp2614 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[289]] /* dc.roo.air.datConExtWin[1].fFra PARAM */),1.0);
    if(!(tmp2613 && tmp2614))
    {
      tmp2616 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[289]] /* dc.roo.air.datConExtWin[1].fFra PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2617 = stringAppend(MMC_REFSTRINGLIT(tmp2615),tmp2616);
      {
        const char* assert_cond = "(dc.roo.air.datConExtWin[1].fFra >= 0.0 and dc.roo.air.datConExtWin[1].fFra <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ParameterConstructionWithWindow.mo",19,3,22,48,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2617));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ParameterConstructionWithWindow.mo",19,3,22,48,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2617));
        }
      }
      tmp2618 = 1;
    }
  }
  threadData->lastEquationSolved = 4689;
}

/*
equation index: 4690
type: ALGORITHM

  assert(dc.roo.air.dummyGlaSys.gas[1].MM >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.dummyGlaSys.gas[1].MM, has value: " + String(dc.roo.air.dummyGlaSys.gas[1].MM, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4690(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4690};
  modelica_boolean tmp2619;
  static const MMC_DEFSTRINGLIT(tmp2620,87,"Variable violating min constraint: 0.0 <= dc.roo.air.dummyGlaSys.gas[1].MM, has value: ");
  modelica_string tmp2621;
  modelica_metatype tmpMeta2622;
  static int tmp2623 = 0;
  if(!tmp2623)
  {
    tmp2619 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[384]] /* dc.roo.air.dummyGlaSys.gas[1].MM PARAM */),0.0);
    if(!tmp2619)
    {
      tmp2621 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[384]] /* dc.roo.air.dummyGlaSys.gas[1].MM PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2622 = stringAppend(MMC_REFSTRINGLIT(tmp2620),tmp2621);
      {
        const char* assert_cond = "(dc.roo.air.dummyGlaSys.gas[1].MM >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/Gases.mo",21,5,22,48,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2622));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/Gases.mo",21,5,22,48,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2622));
        }
      }
      tmp2623 = 1;
    }
  }
  threadData->lastEquationSolved = 4690;
}

/*
equation index: 4691
type: ALGORITHM

  assert(dc.roo.air.dummyGlaSys.gas[1].a_mu >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.dummyGlaSys.gas[1].a_mu, has value: " + String(dc.roo.air.dummyGlaSys.gas[1].a_mu, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4691(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4691};
  modelica_boolean tmp2624;
  static const MMC_DEFSTRINGLIT(tmp2625,89,"Variable violating min constraint: 0.0 <= dc.roo.air.dummyGlaSys.gas[1].a_mu, has value: ");
  modelica_string tmp2626;
  modelica_metatype tmpMeta2627;
  static int tmp2628 = 0;
  if(!tmp2628)
  {
    tmp2624 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[388]] /* dc.roo.air.dummyGlaSys.gas[1].a_mu PARAM */),0.0);
    if(!tmp2624)
    {
      tmp2626 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[388]] /* dc.roo.air.dummyGlaSys.gas[1].a_mu PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2627 = stringAppend(MMC_REFSTRINGLIT(tmp2625),tmp2626);
      {
        const char* assert_cond = "(dc.roo.air.dummyGlaSys.gas[1].a_mu >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/Gases.mo",12,5,13,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2627));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/Gases.mo",12,5,13,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2627));
        }
      }
      tmp2628 = 1;
    }
  }
  threadData->lastEquationSolved = 4691;
}

/*
equation index: 4692
type: ALGORITHM

  assert(dc.roo.air.dummyCon.roughness_a >= Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough and dc.roo.air.dummyCon.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth, "Variable violating min/max constraint: Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough <= dc.roo.air.dummyCon.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth, has value: " + String(dc.roo.air.dummyCon.roughness_a, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4692(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4692};
  modelica_boolean tmp2629;
  modelica_boolean tmp2630;
  static const MMC_DEFSTRINGLIT(tmp2631,202,"Variable violating min/max constraint: Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough <= dc.roo.air.dummyCon.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth, has value: ");
  modelica_string tmp2632;
  modelica_metatype tmpMeta2633;
  static int tmp2634 = 0;
  if(!tmp2634)
  {
    tmp2629 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[119]] /* dc.roo.air.dummyCon.roughness_a PARAM */),1);
    tmp2630 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[119]] /* dc.roo.air.dummyCon.roughness_a PARAM */),6);
    if(!(tmp2629 && tmp2630))
    {
      tmp2632 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[119]] /* dc.roo.air.dummyCon.roughness_a PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2633 = stringAppend(MMC_REFSTRINGLIT(tmp2631),tmp2632);
      {
        const char* assert_cond = "(dc.roo.air.dummyCon.roughness_a >= Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough and dc.roo.air.dummyCon.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",25,4,27,35,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2633));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",25,4,27,35,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2633));
        }
      }
      tmp2634 = 1;
    }
  }
  threadData->lastEquationSolved = 4692;
}

/*
equation index: 4693
type: ALGORITHM

  assert(dc.roo.air.dummyCon.nSta[1] >= 1, "Variable violating min constraint: 1 <= dc.roo.air.dummyCon.nSta[1], has value: " + String(dc.roo.air.dummyCon.nSta[1], "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4693(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4693};
  modelica_boolean tmp2635;
  static const MMC_DEFSTRINGLIT(tmp2636,80,"Variable violating min constraint: 1 <= dc.roo.air.dummyCon.nSta[1], has value: ");
  modelica_string tmp2637;
  modelica_metatype tmpMeta2638;
  static int tmp2639 = 0;
  if(!tmp2639)
  {
    tmp2635 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[118]] /* dc.roo.air.dummyCon.nSta[1] PARAM */),((modelica_integer) 1));
    if(!tmp2635)
    {
      tmp2637 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[118]] /* dc.roo.air.dummyCon.nSta[1] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2638 = stringAppend(MMC_REFSTRINGLIT(tmp2636),tmp2637);
      {
        const char* assert_cond = "(dc.roo.air.dummyCon.nSta[1] >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",14,4,16,59,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2638));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",14,4,16,59,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2638));
        }
      }
      tmp2639 = 1;
    }
  }
  threadData->lastEquationSolved = 4693;
}

/*
equation index: 4694
type: ALGORITHM

  assert(dc.roo.air.dummyCon.material[1].TLiq >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.dummyCon.material[1].TLiq, has value: " + String(dc.roo.air.dummyCon.material[1].TLiq, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4694(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4694};
  modelica_boolean tmp2640;
  static const MMC_DEFSTRINGLIT(tmp2641,91,"Variable violating min constraint: 0.0 <= dc.roo.air.dummyCon.material[1].TLiq, has value: ");
  modelica_string tmp2642;
  modelica_metatype tmpMeta2643;
  static int tmp2644 = 0;
  if(!tmp2644)
  {
    tmp2640 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[372]] /* dc.roo.air.dummyCon.material[1].TLiq PARAM */),0.0);
    if(!tmp2640)
    {
      tmp2642 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[372]] /* dc.roo.air.dummyCon.material[1].TLiq PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2643 = stringAppend(MMC_REFSTRINGLIT(tmp2641),tmp2642);
      {
        const char* assert_cond = "(dc.roo.air.dummyCon.material[1].TLiq >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",33,5,35,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2643));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",33,5,35,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2643));
        }
      }
      tmp2644 = 1;
    }
  }
  threadData->lastEquationSolved = 4694;
}

/*
equation index: 4695
type: ALGORITHM

  assert(dc.roo.air.dummyCon.material[1].TSol >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.dummyCon.material[1].TSol, has value: " + String(dc.roo.air.dummyCon.material[1].TSol, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4695(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4695};
  modelica_boolean tmp2645;
  static const MMC_DEFSTRINGLIT(tmp2646,91,"Variable violating min constraint: 0.0 <= dc.roo.air.dummyCon.material[1].TSol, has value: ");
  modelica_string tmp2647;
  modelica_metatype tmpMeta2648;
  static int tmp2649 = 0;
  if(!tmp2649)
  {
    tmp2645 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[373]] /* dc.roo.air.dummyCon.material[1].TSol PARAM */),0.0);
    if(!tmp2645)
    {
      tmp2647 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[373]] /* dc.roo.air.dummyCon.material[1].TSol PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2648 = stringAppend(MMC_REFSTRINGLIT(tmp2646),tmp2647);
      {
        const char* assert_cond = "(dc.roo.air.dummyCon.material[1].TSol >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",30,5,32,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2648));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",30,5,32,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2648));
        }
      }
      tmp2649 = 1;
    }
  }
  threadData->lastEquationSolved = 4695;
}

/*
equation index: 4696
type: ALGORITHM

  assert(dc.roo.air.dummyCon.material[1].nStaReal >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.dummyCon.material[1].nStaReal, has value: " + String(dc.roo.air.dummyCon.material[1].nStaReal, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4696(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4696};
  modelica_boolean tmp2650;
  static const MMC_DEFSTRINGLIT(tmp2651,95,"Variable violating min constraint: 0.0 <= dc.roo.air.dummyCon.material[1].nStaReal, has value: ");
  modelica_string tmp2652;
  modelica_metatype tmpMeta2653;
  static int tmp2654 = 0;
  if(!tmp2654)
  {
    tmp2650 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[377]] /* dc.roo.air.dummyCon.material[1].nStaReal PARAM */),0.0);
    if(!tmp2650)
    {
      tmp2652 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[377]] /* dc.roo.air.dummyCon.material[1].nStaReal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2653 = stringAppend(MMC_REFSTRINGLIT(tmp2651),tmp2652);
      {
        const char* assert_cond = "(dc.roo.air.dummyCon.material[1].nStaReal >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",26,5,28,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2653));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",26,5,28,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2653));
        }
      }
      tmp2654 = 1;
    }
  }
  threadData->lastEquationSolved = 4696;
}

/*
equation index: 4697
type: ALGORITHM

  assert(dc.roo.air.dummyCon.material[1].nSta >= 1, "Variable violating min constraint: 1 <= dc.roo.air.dummyCon.material[1].nSta, has value: " + String(dc.roo.air.dummyCon.material[1].nSta, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4697(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4697};
  modelica_boolean tmp2655;
  static const MMC_DEFSTRINGLIT(tmp2656,89,"Variable violating min constraint: 1 <= dc.roo.air.dummyCon.material[1].nSta, has value: ");
  modelica_string tmp2657;
  modelica_metatype tmpMeta2658;
  static int tmp2659 = 0;
  if(!tmp2659)
  {
    tmp2655 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[115]] /* dc.roo.air.dummyCon.material[1].nSta PARAM */),((modelica_integer) 1));
    if(!tmp2655)
    {
      tmp2657 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[115]] /* dc.roo.air.dummyCon.material[1].nSta PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2658 = stringAppend(MMC_REFSTRINGLIT(tmp2656),tmp2657);
      {
        const char* assert_cond = "(dc.roo.air.dummyCon.material[1].nSta >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",14,5,16,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2658));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",14,5,16,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2658));
        }
      }
      tmp2659 = 1;
    }
  }
  threadData->lastEquationSolved = 4697;
}

/*
equation index: 4698
type: ALGORITHM

  assert(dc.roo.air.dummyCon.material[1].nStaRef >= 0, "Variable violating min constraint: 0 <= dc.roo.air.dummyCon.material[1].nStaRef, has value: " + String(dc.roo.air.dummyCon.material[1].nStaRef, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4698(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4698};
  modelica_boolean tmp2660;
  static const MMC_DEFSTRINGLIT(tmp2661,92,"Variable violating min constraint: 0 <= dc.roo.air.dummyCon.material[1].nStaRef, has value: ");
  modelica_string tmp2662;
  modelica_metatype tmpMeta2663;
  static int tmp2664 = 0;
  if(!tmp2664)
  {
    tmp2660 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[116]] /* dc.roo.air.dummyCon.material[1].nStaRef PARAM */),((modelica_integer) 0));
    if(!tmp2660)
    {
      tmp2662 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[116]] /* dc.roo.air.dummyCon.material[1].nStaRef PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2663 = stringAppend(MMC_REFSTRINGLIT(tmp2661),tmp2662);
      {
        const char* assert_cond = "(dc.roo.air.dummyCon.material[1].nStaRef >= 0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",12,5,13,76,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2663));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",12,5,13,76,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2663));
        }
      }
      tmp2664 = 1;
    }
  }
  threadData->lastEquationSolved = 4698;
}

/*
equation index: 4699
type: ALGORITHM

  assert(dc.roo.air.dummyCon.material[1].d >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.dummyCon.material[1].d, has value: " + String(dc.roo.air.dummyCon.material[1].d, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4699(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4699};
  modelica_boolean tmp2665;
  static const MMC_DEFSTRINGLIT(tmp2666,88,"Variable violating min constraint: 0.0 <= dc.roo.air.dummyCon.material[1].d, has value: ");
  modelica_string tmp2667;
  modelica_metatype tmpMeta2668;
  static int tmp2669 = 0;
  if(!tmp2669)
  {
    tmp2665 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[375]] /* dc.roo.air.dummyCon.material[1].d PARAM */),0.0);
    if(!tmp2665)
    {
      tmp2667 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[375]] /* dc.roo.air.dummyCon.material[1].d PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2668 = stringAppend(MMC_REFSTRINGLIT(tmp2666),tmp2667);
      {
        const char* assert_cond = "(dc.roo.air.dummyCon.material[1].d >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",9,5,9,57,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2668));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",9,5,9,57,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2668));
        }
      }
      tmp2669 = 1;
    }
  }
  threadData->lastEquationSolved = 4699;
}

/*
equation index: 4700
type: ALGORITHM

  assert(dc.roo.air.dummyCon.nLay >= 1, "Variable violating min constraint: 1 <= dc.roo.air.dummyCon.nLay, has value: " + String(dc.roo.air.dummyCon.nLay, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4700(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4700};
  modelica_boolean tmp2670;
  static const MMC_DEFSTRINGLIT(tmp2671,77,"Variable violating min constraint: 1 <= dc.roo.air.dummyCon.nLay, has value: ");
  modelica_string tmp2672;
  modelica_metatype tmpMeta2673;
  static int tmp2674 = 0;
  if(!tmp2674)
  {
    tmp2670 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[117]] /* dc.roo.air.dummyCon.nLay PARAM */),((modelica_integer) 1));
    if(!tmp2670)
    {
      tmp2672 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[117]] /* dc.roo.air.dummyCon.nLay PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2673 = stringAppend(MMC_REFSTRINGLIT(tmp2671),tmp2672);
      {
        const char* assert_cond = "(dc.roo.air.dummyCon.nLay >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",7,4,7,52,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2673));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",7,4,7,52,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2673));
        }
      }
      tmp2674 = 1;
    }
  }
  threadData->lastEquationSolved = 4700;
}

/*
equation index: 4701
type: ALGORITHM

  assert(dc.roo.air.surBou[6].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.air.surBou[6].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, "Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.air.surBou[6].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: " + String(dc.roo.air.surBou[6].boundaryCondition, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4701(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4701};
  modelica_boolean tmp2675;
  modelica_boolean tmp2676;
  static const MMC_DEFSTRINGLIT(tmp2677,241,"Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.air.surBou[6].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: ");
  modelica_string tmp2678;
  modelica_metatype tmpMeta2679;
  static int tmp2680 = 0;
  if(!tmp2680)
  {
    tmp2675 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[160]] /* dc.roo.air.surBou[6].boundaryCondition PARAM */),1);
    tmp2676 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[160]] /* dc.roo.air.surBou[6].boundaryCondition PARAM */),2);
    if(!(tmp2675 && tmp2676))
    {
      tmp2678 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[160]] /* dc.roo.air.surBou[6].boundaryCondition PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2679 = stringAppend(MMC_REFSTRINGLIT(tmp2677),tmp2678);
      {
        const char* assert_cond = "(dc.roo.air.surBou[6].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.air.surBou[6].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/OpaqueSurface.mo",7,3,10,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2679));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/OpaqueSurface.mo",7,3,10,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2679));
        }
      }
      tmp2680 = 1;
    }
  }
  threadData->lastEquationSolved = 4701;
}

/*
equation index: 4702
type: ALGORITHM

  assert(dc.roo.air.surBou[5].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.air.surBou[5].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, "Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.air.surBou[5].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: " + String(dc.roo.air.surBou[5].boundaryCondition, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4702(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4702};
  modelica_boolean tmp2681;
  modelica_boolean tmp2682;
  static const MMC_DEFSTRINGLIT(tmp2683,241,"Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.air.surBou[5].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: ");
  modelica_string tmp2684;
  modelica_metatype tmpMeta2685;
  static int tmp2686 = 0;
  if(!tmp2686)
  {
    tmp2681 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[159]] /* dc.roo.air.surBou[5].boundaryCondition PARAM */),1);
    tmp2682 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[159]] /* dc.roo.air.surBou[5].boundaryCondition PARAM */),2);
    if(!(tmp2681 && tmp2682))
    {
      tmp2684 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[159]] /* dc.roo.air.surBou[5].boundaryCondition PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2685 = stringAppend(MMC_REFSTRINGLIT(tmp2683),tmp2684);
      {
        const char* assert_cond = "(dc.roo.air.surBou[5].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.air.surBou[5].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/OpaqueSurface.mo",7,3,10,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2685));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/OpaqueSurface.mo",7,3,10,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2685));
        }
      }
      tmp2686 = 1;
    }
  }
  threadData->lastEquationSolved = 4702;
}

/*
equation index: 4703
type: ALGORITHM

  assert(dc.roo.air.surBou[4].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.air.surBou[4].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, "Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.air.surBou[4].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: " + String(dc.roo.air.surBou[4].boundaryCondition, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4703(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4703};
  modelica_boolean tmp2687;
  modelica_boolean tmp2688;
  static const MMC_DEFSTRINGLIT(tmp2689,241,"Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.air.surBou[4].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: ");
  modelica_string tmp2690;
  modelica_metatype tmpMeta2691;
  static int tmp2692 = 0;
  if(!tmp2692)
  {
    tmp2687 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[158]] /* dc.roo.air.surBou[4].boundaryCondition PARAM */),1);
    tmp2688 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[158]] /* dc.roo.air.surBou[4].boundaryCondition PARAM */),2);
    if(!(tmp2687 && tmp2688))
    {
      tmp2690 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[158]] /* dc.roo.air.surBou[4].boundaryCondition PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2691 = stringAppend(MMC_REFSTRINGLIT(tmp2689),tmp2690);
      {
        const char* assert_cond = "(dc.roo.air.surBou[4].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.air.surBou[4].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/OpaqueSurface.mo",7,3,10,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2691));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/OpaqueSurface.mo",7,3,10,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2691));
        }
      }
      tmp2692 = 1;
    }
  }
  threadData->lastEquationSolved = 4703;
}

/*
equation index: 4704
type: ALGORITHM

  assert(dc.roo.air.surBou[3].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.air.surBou[3].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, "Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.air.surBou[3].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: " + String(dc.roo.air.surBou[3].boundaryCondition, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4704(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4704};
  modelica_boolean tmp2693;
  modelica_boolean tmp2694;
  static const MMC_DEFSTRINGLIT(tmp2695,241,"Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.air.surBou[3].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: ");
  modelica_string tmp2696;
  modelica_metatype tmpMeta2697;
  static int tmp2698 = 0;
  if(!tmp2698)
  {
    tmp2693 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[157]] /* dc.roo.air.surBou[3].boundaryCondition PARAM */),1);
    tmp2694 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[157]] /* dc.roo.air.surBou[3].boundaryCondition PARAM */),2);
    if(!(tmp2693 && tmp2694))
    {
      tmp2696 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[157]] /* dc.roo.air.surBou[3].boundaryCondition PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2697 = stringAppend(MMC_REFSTRINGLIT(tmp2695),tmp2696);
      {
        const char* assert_cond = "(dc.roo.air.surBou[3].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.air.surBou[3].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/OpaqueSurface.mo",7,3,10,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2697));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/OpaqueSurface.mo",7,3,10,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2697));
        }
      }
      tmp2698 = 1;
    }
  }
  threadData->lastEquationSolved = 4704;
}

/*
equation index: 4705
type: ALGORITHM

  assert(dc.roo.air.surBou[2].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.air.surBou[2].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, "Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.air.surBou[2].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: " + String(dc.roo.air.surBou[2].boundaryCondition, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4705(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4705};
  modelica_boolean tmp2699;
  modelica_boolean tmp2700;
  static const MMC_DEFSTRINGLIT(tmp2701,241,"Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.air.surBou[2].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: ");
  modelica_string tmp2702;
  modelica_metatype tmpMeta2703;
  static int tmp2704 = 0;
  if(!tmp2704)
  {
    tmp2699 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[156]] /* dc.roo.air.surBou[2].boundaryCondition PARAM */),1);
    tmp2700 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[156]] /* dc.roo.air.surBou[2].boundaryCondition PARAM */),2);
    if(!(tmp2699 && tmp2700))
    {
      tmp2702 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[156]] /* dc.roo.air.surBou[2].boundaryCondition PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2703 = stringAppend(MMC_REFSTRINGLIT(tmp2701),tmp2702);
      {
        const char* assert_cond = "(dc.roo.air.surBou[2].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.air.surBou[2].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/OpaqueSurface.mo",7,3,10,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2703));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/OpaqueSurface.mo",7,3,10,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2703));
        }
      }
      tmp2704 = 1;
    }
  }
  threadData->lastEquationSolved = 4705;
}

/*
equation index: 4706
type: ALGORITHM

  assert(dc.roo.air.surBou[1].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.air.surBou[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, "Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.air.surBou[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: " + String(dc.roo.air.surBou[1].boundaryCondition, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4706(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4706};
  modelica_boolean tmp2705;
  modelica_boolean tmp2706;
  static const MMC_DEFSTRINGLIT(tmp2707,241,"Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.air.surBou[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: ");
  modelica_string tmp2708;
  modelica_metatype tmpMeta2709;
  static int tmp2710 = 0;
  if(!tmp2710)
  {
    tmp2705 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[155]] /* dc.roo.air.surBou[1].boundaryCondition PARAM */),1);
    tmp2706 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[155]] /* dc.roo.air.surBou[1].boundaryCondition PARAM */),2);
    if(!(tmp2705 && tmp2706))
    {
      tmp2708 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[155]] /* dc.roo.air.surBou[1].boundaryCondition PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2709 = stringAppend(MMC_REFSTRINGLIT(tmp2707),tmp2708);
      {
        const char* assert_cond = "(dc.roo.air.surBou[1].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.air.surBou[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/OpaqueSurface.mo",7,3,10,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2709));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/OpaqueSurface.mo",7,3,10,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2709));
        }
      }
      tmp2710 = 1;
    }
  }
  threadData->lastEquationSolved = 4706;
}

/*
equation index: 4707
type: ALGORITHM

  assert(dc.roo.air.datConBou[1].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.air.datConBou[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, "Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.air.datConBou[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: " + String(dc.roo.air.datConBou[1].boundaryCondition, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4707(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4707};
  modelica_boolean tmp2711;
  modelica_boolean tmp2712;
  static const MMC_DEFSTRINGLIT(tmp2713,244,"Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.air.datConBou[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: ");
  modelica_string tmp2714;
  modelica_metatype tmpMeta2715;
  static int tmp2716 = 0;
  if(!tmp2716)
  {
    tmp2711 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[91]] /* dc.roo.air.datConBou[1].boundaryCondition PARAM */),1);
    tmp2712 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[91]] /* dc.roo.air.datConBou[1].boundaryCondition PARAM */),2);
    if(!(tmp2711 && tmp2712))
    {
      tmp2714 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[91]] /* dc.roo.air.datConBou[1].boundaryCondition PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2715 = stringAppend(MMC_REFSTRINGLIT(tmp2713),tmp2714);
      {
        const char* assert_cond = "(dc.roo.air.datConBou[1].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.air.datConBou[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",43,3,46,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2715));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",43,3,46,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2715));
        }
      }
      tmp2716 = 1;
    }
  }
  threadData->lastEquationSolved = 4707;
}

/*
equation index: 4708
type: ALGORITHM

  assert(dc.roo.air.datConBou[1].T_b_start >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.datConBou[1].T_b_start, has value: " + String(dc.roo.air.datConBou[1].T_b_start, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4708(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4708};
  modelica_boolean tmp2717;
  static const MMC_DEFSTRINGLIT(tmp2718,88,"Variable violating min constraint: 0.0 <= dc.roo.air.datConBou[1].T_b_start, has value: ");
  modelica_string tmp2719;
  modelica_metatype tmpMeta2720;
  static int tmp2721 = 0;
  if(!tmp2721)
  {
    tmp2717 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[241]] /* dc.roo.air.datConBou[1].T_b_start PARAM */),0.0);
    if(!tmp2717)
    {
      tmp2719 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[241]] /* dc.roo.air.datConBou[1].T_b_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2720 = stringAppend(MMC_REFSTRINGLIT(tmp2718),tmp2719);
      {
        const char* assert_cond = "(dc.roo.air.datConBou[1].T_b_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",30,3,32,79,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2720));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",30,3,32,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2720));
        }
      }
      tmp2721 = 1;
    }
  }
  threadData->lastEquationSolved = 4708;
}

/*
equation index: 4709
type: ALGORITHM

  assert(dc.roo.air.datConBou[1].T_a_start >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.datConBou[1].T_a_start, has value: " + String(dc.roo.air.datConBou[1].T_a_start, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4709(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4709};
  modelica_boolean tmp2722;
  static const MMC_DEFSTRINGLIT(tmp2723,88,"Variable violating min constraint: 0.0 <= dc.roo.air.datConBou[1].T_a_start, has value: ");
  modelica_string tmp2724;
  modelica_metatype tmpMeta2725;
  static int tmp2726 = 0;
  if(!tmp2726)
  {
    tmp2722 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[240]] /* dc.roo.air.datConBou[1].T_a_start PARAM */),0.0);
    if(!tmp2722)
    {
      tmp2724 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[240]] /* dc.roo.air.datConBou[1].T_a_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2725 = stringAppend(MMC_REFSTRINGLIT(tmp2723),tmp2724);
      {
        const char* assert_cond = "(dc.roo.air.datConBou[1].T_a_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",27,3,29,79,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2725));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",27,3,29,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2725));
        }
      }
      tmp2726 = 1;
    }
  }
  threadData->lastEquationSolved = 4709;
}

/*
equation index: 4710
type: ALGORITHM

  assert(dc.roo.air.datConBou[1].layers.roughness_a >= Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough and dc.roo.air.datConBou[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth, "Variable violating min/max constraint: Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough <= dc.roo.air.datConBou[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth, has value: " + String(dc.roo.air.datConBou[1].layers.roughness_a, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4710(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4710};
  modelica_boolean tmp2727;
  modelica_boolean tmp2728;
  static const MMC_DEFSTRINGLIT(tmp2729,213,"Variable violating min/max constraint: Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough <= dc.roo.air.datConBou[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth, has value: ");
  modelica_string tmp2730;
  modelica_metatype tmpMeta2731;
  static int tmp2732 = 0;
  if(!tmp2732)
  {
    tmp2727 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[96]] /* dc.roo.air.datConBou[1].layers.roughness_a PARAM */),1);
    tmp2728 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[96]] /* dc.roo.air.datConBou[1].layers.roughness_a PARAM */),6);
    if(!(tmp2727 && tmp2728))
    {
      tmp2730 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[96]] /* dc.roo.air.datConBou[1].layers.roughness_a PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2731 = stringAppend(MMC_REFSTRINGLIT(tmp2729),tmp2730);
      {
        const char* assert_cond = "(dc.roo.air.datConBou[1].layers.roughness_a >= Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough and dc.roo.air.datConBou[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",25,4,27,35,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2731));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",25,4,27,35,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2731));
        }
      }
      tmp2732 = 1;
    }
  }
  threadData->lastEquationSolved = 4710;
}

/*
equation index: 4711
type: ALGORITHM

  assert(dc.roo.air.datConBou[1].layers.nSta[1] >= 1, "Variable violating min constraint: 1 <= dc.roo.air.datConBou[1].layers.nSta[1], has value: " + String(dc.roo.air.datConBou[1].layers.nSta[1], "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4711(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4711};
  modelica_boolean tmp2733;
  static const MMC_DEFSTRINGLIT(tmp2734,91,"Variable violating min constraint: 1 <= dc.roo.air.datConBou[1].layers.nSta[1], has value: ");
  modelica_string tmp2735;
  modelica_metatype tmpMeta2736;
  static int tmp2737 = 0;
  if(!tmp2737)
  {
    tmp2733 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[95]] /* dc.roo.air.datConBou[1].layers.nSta[1] PARAM */),((modelica_integer) 1));
    if(!tmp2733)
    {
      tmp2735 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[95]] /* dc.roo.air.datConBou[1].layers.nSta[1] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2736 = stringAppend(MMC_REFSTRINGLIT(tmp2734),tmp2735);
      {
        const char* assert_cond = "(dc.roo.air.datConBou[1].layers.nSta[1] >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",14,4,16,59,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2736));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",14,4,16,59,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2736));
        }
      }
      tmp2737 = 1;
    }
  }
  threadData->lastEquationSolved = 4711;
}

/*
equation index: 4712
type: ALGORITHM

  assert(dc.roo.air.datConBou[1].layers.material[1].TLiq >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.datConBou[1].layers.material[1].TLiq, has value: " + String(dc.roo.air.datConBou[1].layers.material[1].TLiq, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4712(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4712};
  modelica_boolean tmp2738;
  static const MMC_DEFSTRINGLIT(tmp2739,102,"Variable violating min constraint: 0.0 <= dc.roo.air.datConBou[1].layers.material[1].TLiq, has value: ");
  modelica_string tmp2740;
  modelica_metatype tmpMeta2741;
  static int tmp2742 = 0;
  if(!tmp2742)
  {
    tmp2738 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[250]] /* dc.roo.air.datConBou[1].layers.material[1].TLiq PARAM */),0.0);
    if(!tmp2738)
    {
      tmp2740 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[250]] /* dc.roo.air.datConBou[1].layers.material[1].TLiq PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2741 = stringAppend(MMC_REFSTRINGLIT(tmp2739),tmp2740);
      {
        const char* assert_cond = "(dc.roo.air.datConBou[1].layers.material[1].TLiq >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",33,5,35,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2741));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",33,5,35,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2741));
        }
      }
      tmp2742 = 1;
    }
  }
  threadData->lastEquationSolved = 4712;
}

/*
equation index: 4713
type: ALGORITHM

  assert(dc.roo.air.datConBou[1].layers.material[1].TSol >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.datConBou[1].layers.material[1].TSol, has value: " + String(dc.roo.air.datConBou[1].layers.material[1].TSol, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4713(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4713};
  modelica_boolean tmp2743;
  static const MMC_DEFSTRINGLIT(tmp2744,102,"Variable violating min constraint: 0.0 <= dc.roo.air.datConBou[1].layers.material[1].TSol, has value: ");
  modelica_string tmp2745;
  modelica_metatype tmpMeta2746;
  static int tmp2747 = 0;
  if(!tmp2747)
  {
    tmp2743 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[251]] /* dc.roo.air.datConBou[1].layers.material[1].TSol PARAM */),0.0);
    if(!tmp2743)
    {
      tmp2745 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[251]] /* dc.roo.air.datConBou[1].layers.material[1].TSol PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2746 = stringAppend(MMC_REFSTRINGLIT(tmp2744),tmp2745);
      {
        const char* assert_cond = "(dc.roo.air.datConBou[1].layers.material[1].TSol >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",30,5,32,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2746));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",30,5,32,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2746));
        }
      }
      tmp2747 = 1;
    }
  }
  threadData->lastEquationSolved = 4713;
}

/*
equation index: 4714
type: ALGORITHM

  assert(dc.roo.air.datConBou[1].layers.material[1].nStaReal >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.datConBou[1].layers.material[1].nStaReal, has value: " + String(dc.roo.air.datConBou[1].layers.material[1].nStaReal, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4714(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4714};
  modelica_boolean tmp2748;
  static const MMC_DEFSTRINGLIT(tmp2749,106,"Variable violating min constraint: 0.0 <= dc.roo.air.datConBou[1].layers.material[1].nStaReal, has value: ");
  modelica_string tmp2750;
  modelica_metatype tmpMeta2751;
  static int tmp2752 = 0;
  if(!tmp2752)
  {
    tmp2748 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[255]] /* dc.roo.air.datConBou[1].layers.material[1].nStaReal PARAM */),0.0);
    if(!tmp2748)
    {
      tmp2750 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[255]] /* dc.roo.air.datConBou[1].layers.material[1].nStaReal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2751 = stringAppend(MMC_REFSTRINGLIT(tmp2749),tmp2750);
      {
        const char* assert_cond = "(dc.roo.air.datConBou[1].layers.material[1].nStaReal >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",26,5,28,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2751));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",26,5,28,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2751));
        }
      }
      tmp2752 = 1;
    }
  }
  threadData->lastEquationSolved = 4714;
}

/*
equation index: 4715
type: ALGORITHM

  assert(dc.roo.air.datConBou[1].layers.material[1].nSta >= 1, "Variable violating min constraint: 1 <= dc.roo.air.datConBou[1].layers.material[1].nSta, has value: " + String(dc.roo.air.datConBou[1].layers.material[1].nSta, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4715(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4715};
  modelica_boolean tmp2753;
  static const MMC_DEFSTRINGLIT(tmp2754,100,"Variable violating min constraint: 1 <= dc.roo.air.datConBou[1].layers.material[1].nSta, has value: ");
  modelica_string tmp2755;
  modelica_metatype tmpMeta2756;
  static int tmp2757 = 0;
  if(!tmp2757)
  {
    tmp2753 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[92]] /* dc.roo.air.datConBou[1].layers.material[1].nSta PARAM */),((modelica_integer) 1));
    if(!tmp2753)
    {
      tmp2755 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[92]] /* dc.roo.air.datConBou[1].layers.material[1].nSta PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2756 = stringAppend(MMC_REFSTRINGLIT(tmp2754),tmp2755);
      {
        const char* assert_cond = "(dc.roo.air.datConBou[1].layers.material[1].nSta >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",14,5,16,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2756));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",14,5,16,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2756));
        }
      }
      tmp2757 = 1;
    }
  }
  threadData->lastEquationSolved = 4715;
}

/*
equation index: 4716
type: ALGORITHM

  assert(dc.roo.air.datConBou[1].layers.material[1].nStaRef >= 0, "Variable violating min constraint: 0 <= dc.roo.air.datConBou[1].layers.material[1].nStaRef, has value: " + String(dc.roo.air.datConBou[1].layers.material[1].nStaRef, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4716(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4716};
  modelica_boolean tmp2758;
  static const MMC_DEFSTRINGLIT(tmp2759,103,"Variable violating min constraint: 0 <= dc.roo.air.datConBou[1].layers.material[1].nStaRef, has value: ");
  modelica_string tmp2760;
  modelica_metatype tmpMeta2761;
  static int tmp2762 = 0;
  if(!tmp2762)
  {
    tmp2758 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[93]] /* dc.roo.air.datConBou[1].layers.material[1].nStaRef PARAM */),((modelica_integer) 0));
    if(!tmp2758)
    {
      tmp2760 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[93]] /* dc.roo.air.datConBou[1].layers.material[1].nStaRef PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2761 = stringAppend(MMC_REFSTRINGLIT(tmp2759),tmp2760);
      {
        const char* assert_cond = "(dc.roo.air.datConBou[1].layers.material[1].nStaRef >= 0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",12,5,13,76,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2761));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",12,5,13,76,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2761));
        }
      }
      tmp2762 = 1;
    }
  }
  threadData->lastEquationSolved = 4716;
}

/*
equation index: 4717
type: ALGORITHM

  assert(dc.roo.air.datConBou[1].layers.material[1].d >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.datConBou[1].layers.material[1].d, has value: " + String(dc.roo.air.datConBou[1].layers.material[1].d, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4717(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4717};
  modelica_boolean tmp2763;
  static const MMC_DEFSTRINGLIT(tmp2764,99,"Variable violating min constraint: 0.0 <= dc.roo.air.datConBou[1].layers.material[1].d, has value: ");
  modelica_string tmp2765;
  modelica_metatype tmpMeta2766;
  static int tmp2767 = 0;
  if(!tmp2767)
  {
    tmp2763 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[253]] /* dc.roo.air.datConBou[1].layers.material[1].d PARAM */),0.0);
    if(!tmp2763)
    {
      tmp2765 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[253]] /* dc.roo.air.datConBou[1].layers.material[1].d PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2766 = stringAppend(MMC_REFSTRINGLIT(tmp2764),tmp2765);
      {
        const char* assert_cond = "(dc.roo.air.datConBou[1].layers.material[1].d >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",9,5,9,57,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2766));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",9,5,9,57,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2766));
        }
      }
      tmp2767 = 1;
    }
  }
  threadData->lastEquationSolved = 4717;
}

/*
equation index: 4718
type: ALGORITHM

  assert(dc.roo.air.datConBou[1].layers.nLay >= 1, "Variable violating min constraint: 1 <= dc.roo.air.datConBou[1].layers.nLay, has value: " + String(dc.roo.air.datConBou[1].layers.nLay, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4718(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4718};
  modelica_boolean tmp2768;
  static const MMC_DEFSTRINGLIT(tmp2769,88,"Variable violating min constraint: 1 <= dc.roo.air.datConBou[1].layers.nLay, has value: ");
  modelica_string tmp2770;
  modelica_metatype tmpMeta2771;
  static int tmp2772 = 0;
  if(!tmp2772)
  {
    tmp2768 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[94]] /* dc.roo.air.datConBou[1].layers.nLay PARAM */),((modelica_integer) 1));
    if(!tmp2768)
    {
      tmp2770 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[94]] /* dc.roo.air.datConBou[1].layers.nLay PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2771 = stringAppend(MMC_REFSTRINGLIT(tmp2769),tmp2770);
      {
        const char* assert_cond = "(dc.roo.air.datConBou[1].layers.nLay >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",7,4,7,52,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2771));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",7,4,7,52,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2771));
        }
      }
      tmp2772 = 1;
    }
  }
  threadData->lastEquationSolved = 4718;
}

/*
equation index: 4719
type: ALGORITHM

  assert(dc.roo.air.datConPar[1].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.air.datConPar[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, "Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.air.datConPar[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: " + String(dc.roo.air.datConPar[1].boundaryCondition, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4719(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4719};
  modelica_boolean tmp2773;
  modelica_boolean tmp2774;
  static const MMC_DEFSTRINGLIT(tmp2775,244,"Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.air.datConPar[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: ");
  modelica_string tmp2776;
  modelica_metatype tmpMeta2777;
  static int tmp2778 = 0;
  if(!tmp2778)
  {
    tmp2773 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[109]] /* dc.roo.air.datConPar[1].boundaryCondition PARAM */),1);
    tmp2774 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[109]] /* dc.roo.air.datConPar[1].boundaryCondition PARAM */),2);
    if(!(tmp2773 && tmp2774))
    {
      tmp2776 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[109]] /* dc.roo.air.datConPar[1].boundaryCondition PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2777 = stringAppend(MMC_REFSTRINGLIT(tmp2775),tmp2776);
      {
        const char* assert_cond = "(dc.roo.air.datConPar[1].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.air.datConPar[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",43,3,46,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2777));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",43,3,46,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2777));
        }
      }
      tmp2778 = 1;
    }
  }
  threadData->lastEquationSolved = 4719;
}

/*
equation index: 4720
type: ALGORITHM

  assert(dc.roo.air.datConPar[1].T_b_start >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.datConPar[1].T_b_start, has value: " + String(dc.roo.air.datConPar[1].T_b_start, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4720(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4720};
  modelica_boolean tmp2779;
  static const MMC_DEFSTRINGLIT(tmp2780,88,"Variable violating min constraint: 0.0 <= dc.roo.air.datConPar[1].T_b_start, has value: ");
  modelica_string tmp2781;
  modelica_metatype tmpMeta2782;
  static int tmp2783 = 0;
  if(!tmp2783)
  {
    tmp2779 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[346]] /* dc.roo.air.datConPar[1].T_b_start PARAM */),0.0);
    if(!tmp2779)
    {
      tmp2781 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[346]] /* dc.roo.air.datConPar[1].T_b_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2782 = stringAppend(MMC_REFSTRINGLIT(tmp2780),tmp2781);
      {
        const char* assert_cond = "(dc.roo.air.datConPar[1].T_b_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",30,3,32,79,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2782));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",30,3,32,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2782));
        }
      }
      tmp2783 = 1;
    }
  }
  threadData->lastEquationSolved = 4720;
}

/*
equation index: 4721
type: ALGORITHM

  assert(dc.roo.air.datConPar[1].T_a_start >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.datConPar[1].T_a_start, has value: " + String(dc.roo.air.datConPar[1].T_a_start, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4721(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4721};
  modelica_boolean tmp2784;
  static const MMC_DEFSTRINGLIT(tmp2785,88,"Variable violating min constraint: 0.0 <= dc.roo.air.datConPar[1].T_a_start, has value: ");
  modelica_string tmp2786;
  modelica_metatype tmpMeta2787;
  static int tmp2788 = 0;
  if(!tmp2788)
  {
    tmp2784 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[345]] /* dc.roo.air.datConPar[1].T_a_start PARAM */),0.0);
    if(!tmp2784)
    {
      tmp2786 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[345]] /* dc.roo.air.datConPar[1].T_a_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2787 = stringAppend(MMC_REFSTRINGLIT(tmp2785),tmp2786);
      {
        const char* assert_cond = "(dc.roo.air.datConPar[1].T_a_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",27,3,29,79,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2787));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",27,3,29,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2787));
        }
      }
      tmp2788 = 1;
    }
  }
  threadData->lastEquationSolved = 4721;
}

/*
equation index: 4722
type: ALGORITHM

  assert(dc.roo.air.datConPar[1].layers.roughness_a >= Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough and dc.roo.air.datConPar[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth, "Variable violating min/max constraint: Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough <= dc.roo.air.datConPar[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth, has value: " + String(dc.roo.air.datConPar[1].layers.roughness_a, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4722(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4722};
  modelica_boolean tmp2789;
  modelica_boolean tmp2790;
  static const MMC_DEFSTRINGLIT(tmp2791,213,"Variable violating min/max constraint: Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough <= dc.roo.air.datConPar[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth, has value: ");
  modelica_string tmp2792;
  modelica_metatype tmpMeta2793;
  static int tmp2794 = 0;
  if(!tmp2794)
  {
    tmp2789 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[114]] /* dc.roo.air.datConPar[1].layers.roughness_a PARAM */),1);
    tmp2790 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[114]] /* dc.roo.air.datConPar[1].layers.roughness_a PARAM */),6);
    if(!(tmp2789 && tmp2790))
    {
      tmp2792 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[114]] /* dc.roo.air.datConPar[1].layers.roughness_a PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2793 = stringAppend(MMC_REFSTRINGLIT(tmp2791),tmp2792);
      {
        const char* assert_cond = "(dc.roo.air.datConPar[1].layers.roughness_a >= Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough and dc.roo.air.datConPar[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",25,4,27,35,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2793));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",25,4,27,35,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2793));
        }
      }
      tmp2794 = 1;
    }
  }
  threadData->lastEquationSolved = 4722;
}

/*
equation index: 4723
type: ALGORITHM

  assert(dc.roo.air.datConPar[1].layers.nSta[1] >= 1, "Variable violating min constraint: 1 <= dc.roo.air.datConPar[1].layers.nSta[1], has value: " + String(dc.roo.air.datConPar[1].layers.nSta[1], "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4723(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4723};
  modelica_boolean tmp2795;
  static const MMC_DEFSTRINGLIT(tmp2796,91,"Variable violating min constraint: 1 <= dc.roo.air.datConPar[1].layers.nSta[1], has value: ");
  modelica_string tmp2797;
  modelica_metatype tmpMeta2798;
  static int tmp2799 = 0;
  if(!tmp2799)
  {
    tmp2795 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[113]] /* dc.roo.air.datConPar[1].layers.nSta[1] PARAM */),((modelica_integer) 1));
    if(!tmp2795)
    {
      tmp2797 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[113]] /* dc.roo.air.datConPar[1].layers.nSta[1] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2798 = stringAppend(MMC_REFSTRINGLIT(tmp2796),tmp2797);
      {
        const char* assert_cond = "(dc.roo.air.datConPar[1].layers.nSta[1] >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",14,4,16,59,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2798));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",14,4,16,59,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2798));
        }
      }
      tmp2799 = 1;
    }
  }
  threadData->lastEquationSolved = 4723;
}

/*
equation index: 4724
type: ALGORITHM

  assert(dc.roo.air.datConPar[1].layers.material[1].TLiq >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.datConPar[1].layers.material[1].TLiq, has value: " + String(dc.roo.air.datConPar[1].layers.material[1].TLiq, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4724(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4724};
  modelica_boolean tmp2800;
  static const MMC_DEFSTRINGLIT(tmp2801,102,"Variable violating min constraint: 0.0 <= dc.roo.air.datConPar[1].layers.material[1].TLiq, has value: ");
  modelica_string tmp2802;
  modelica_metatype tmpMeta2803;
  static int tmp2804 = 0;
  if(!tmp2804)
  {
    tmp2800 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[355]] /* dc.roo.air.datConPar[1].layers.material[1].TLiq PARAM */),0.0);
    if(!tmp2800)
    {
      tmp2802 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[355]] /* dc.roo.air.datConPar[1].layers.material[1].TLiq PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2803 = stringAppend(MMC_REFSTRINGLIT(tmp2801),tmp2802);
      {
        const char* assert_cond = "(dc.roo.air.datConPar[1].layers.material[1].TLiq >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",33,5,35,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2803));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",33,5,35,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2803));
        }
      }
      tmp2804 = 1;
    }
  }
  threadData->lastEquationSolved = 4724;
}

/*
equation index: 4725
type: ALGORITHM

  assert(dc.roo.air.datConPar[1].layers.material[1].TSol >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.datConPar[1].layers.material[1].TSol, has value: " + String(dc.roo.air.datConPar[1].layers.material[1].TSol, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4725(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4725};
  modelica_boolean tmp2805;
  static const MMC_DEFSTRINGLIT(tmp2806,102,"Variable violating min constraint: 0.0 <= dc.roo.air.datConPar[1].layers.material[1].TSol, has value: ");
  modelica_string tmp2807;
  modelica_metatype tmpMeta2808;
  static int tmp2809 = 0;
  if(!tmp2809)
  {
    tmp2805 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[356]] /* dc.roo.air.datConPar[1].layers.material[1].TSol PARAM */),0.0);
    if(!tmp2805)
    {
      tmp2807 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[356]] /* dc.roo.air.datConPar[1].layers.material[1].TSol PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2808 = stringAppend(MMC_REFSTRINGLIT(tmp2806),tmp2807);
      {
        const char* assert_cond = "(dc.roo.air.datConPar[1].layers.material[1].TSol >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",30,5,32,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2808));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",30,5,32,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2808));
        }
      }
      tmp2809 = 1;
    }
  }
  threadData->lastEquationSolved = 4725;
}

/*
equation index: 4726
type: ALGORITHM

  assert(dc.roo.air.datConPar[1].layers.material[1].nStaReal >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.datConPar[1].layers.material[1].nStaReal, has value: " + String(dc.roo.air.datConPar[1].layers.material[1].nStaReal, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4726(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4726};
  modelica_boolean tmp2810;
  static const MMC_DEFSTRINGLIT(tmp2811,106,"Variable violating min constraint: 0.0 <= dc.roo.air.datConPar[1].layers.material[1].nStaReal, has value: ");
  modelica_string tmp2812;
  modelica_metatype tmpMeta2813;
  static int tmp2814 = 0;
  if(!tmp2814)
  {
    tmp2810 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[360]] /* dc.roo.air.datConPar[1].layers.material[1].nStaReal PARAM */),0.0);
    if(!tmp2810)
    {
      tmp2812 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[360]] /* dc.roo.air.datConPar[1].layers.material[1].nStaReal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2813 = stringAppend(MMC_REFSTRINGLIT(tmp2811),tmp2812);
      {
        const char* assert_cond = "(dc.roo.air.datConPar[1].layers.material[1].nStaReal >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",26,5,28,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2813));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",26,5,28,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2813));
        }
      }
      tmp2814 = 1;
    }
  }
  threadData->lastEquationSolved = 4726;
}

/*
equation index: 4727
type: ALGORITHM

  assert(dc.roo.air.datConPar[1].layers.material[1].nSta >= 1, "Variable violating min constraint: 1 <= dc.roo.air.datConPar[1].layers.material[1].nSta, has value: " + String(dc.roo.air.datConPar[1].layers.material[1].nSta, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4727(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4727};
  modelica_boolean tmp2815;
  static const MMC_DEFSTRINGLIT(tmp2816,100,"Variable violating min constraint: 1 <= dc.roo.air.datConPar[1].layers.material[1].nSta, has value: ");
  modelica_string tmp2817;
  modelica_metatype tmpMeta2818;
  static int tmp2819 = 0;
  if(!tmp2819)
  {
    tmp2815 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[110]] /* dc.roo.air.datConPar[1].layers.material[1].nSta PARAM */),((modelica_integer) 1));
    if(!tmp2815)
    {
      tmp2817 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[110]] /* dc.roo.air.datConPar[1].layers.material[1].nSta PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2818 = stringAppend(MMC_REFSTRINGLIT(tmp2816),tmp2817);
      {
        const char* assert_cond = "(dc.roo.air.datConPar[1].layers.material[1].nSta >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",14,5,16,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2818));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",14,5,16,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2818));
        }
      }
      tmp2819 = 1;
    }
  }
  threadData->lastEquationSolved = 4727;
}

/*
equation index: 4728
type: ALGORITHM

  assert(dc.roo.air.datConPar[1].layers.material[1].nStaRef >= 0, "Variable violating min constraint: 0 <= dc.roo.air.datConPar[1].layers.material[1].nStaRef, has value: " + String(dc.roo.air.datConPar[1].layers.material[1].nStaRef, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4728(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4728};
  modelica_boolean tmp2820;
  static const MMC_DEFSTRINGLIT(tmp2821,103,"Variable violating min constraint: 0 <= dc.roo.air.datConPar[1].layers.material[1].nStaRef, has value: ");
  modelica_string tmp2822;
  modelica_metatype tmpMeta2823;
  static int tmp2824 = 0;
  if(!tmp2824)
  {
    tmp2820 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[111]] /* dc.roo.air.datConPar[1].layers.material[1].nStaRef PARAM */),((modelica_integer) 0));
    if(!tmp2820)
    {
      tmp2822 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[111]] /* dc.roo.air.datConPar[1].layers.material[1].nStaRef PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2823 = stringAppend(MMC_REFSTRINGLIT(tmp2821),tmp2822);
      {
        const char* assert_cond = "(dc.roo.air.datConPar[1].layers.material[1].nStaRef >= 0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",12,5,13,76,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2823));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",12,5,13,76,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2823));
        }
      }
      tmp2824 = 1;
    }
  }
  threadData->lastEquationSolved = 4728;
}

/*
equation index: 4729
type: ALGORITHM

  assert(dc.roo.air.datConPar[1].layers.material[1].d >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.datConPar[1].layers.material[1].d, has value: " + String(dc.roo.air.datConPar[1].layers.material[1].d, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4729(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4729};
  modelica_boolean tmp2825;
  static const MMC_DEFSTRINGLIT(tmp2826,99,"Variable violating min constraint: 0.0 <= dc.roo.air.datConPar[1].layers.material[1].d, has value: ");
  modelica_string tmp2827;
  modelica_metatype tmpMeta2828;
  static int tmp2829 = 0;
  if(!tmp2829)
  {
    tmp2825 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[358]] /* dc.roo.air.datConPar[1].layers.material[1].d PARAM */),0.0);
    if(!tmp2825)
    {
      tmp2827 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[358]] /* dc.roo.air.datConPar[1].layers.material[1].d PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2828 = stringAppend(MMC_REFSTRINGLIT(tmp2826),tmp2827);
      {
        const char* assert_cond = "(dc.roo.air.datConPar[1].layers.material[1].d >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",9,5,9,57,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2828));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",9,5,9,57,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2828));
        }
      }
      tmp2829 = 1;
    }
  }
  threadData->lastEquationSolved = 4729;
}

/*
equation index: 4730
type: ALGORITHM

  assert(dc.roo.air.datConPar[1].layers.nLay >= 1, "Variable violating min constraint: 1 <= dc.roo.air.datConPar[1].layers.nLay, has value: " + String(dc.roo.air.datConPar[1].layers.nLay, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4730(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4730};
  modelica_boolean tmp2830;
  static const MMC_DEFSTRINGLIT(tmp2831,88,"Variable violating min constraint: 1 <= dc.roo.air.datConPar[1].layers.nLay, has value: ");
  modelica_string tmp2832;
  modelica_metatype tmpMeta2833;
  static int tmp2834 = 0;
  if(!tmp2834)
  {
    tmp2830 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[112]] /* dc.roo.air.datConPar[1].layers.nLay PARAM */),((modelica_integer) 1));
    if(!tmp2830)
    {
      tmp2832 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[112]] /* dc.roo.air.datConPar[1].layers.nLay PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2833 = stringAppend(MMC_REFSTRINGLIT(tmp2831),tmp2832);
      {
        const char* assert_cond = "(dc.roo.air.datConPar[1].layers.nLay >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",7,4,7,52,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2833));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",7,4,7,52,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2833));
        }
      }
      tmp2834 = 1;
    }
  }
  threadData->lastEquationSolved = 4730;
}

/*
equation index: 4731
type: ALGORITHM

  assert(dc.roo.air.datConExtWin[1].glaSys.gas[1].MM >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.datConExtWin[1].glaSys.gas[1].MM, has value: " + String(dc.roo.air.datConExtWin[1].glaSys.gas[1].MM, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4731(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4731};
  modelica_boolean tmp2835;
  static const MMC_DEFSTRINGLIT(tmp2836,98,"Variable violating min constraint: 0.0 <= dc.roo.air.datConExtWin[1].glaSys.gas[1].MM, has value: ");
  modelica_string tmp2837;
  modelica_metatype tmpMeta2838;
  static int tmp2839 = 0;
  if(!tmp2839)
  {
    tmp2835 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[293]] /* dc.roo.air.datConExtWin[1].glaSys.gas[1].MM PARAM */),0.0);
    if(!tmp2835)
    {
      tmp2837 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[293]] /* dc.roo.air.datConExtWin[1].glaSys.gas[1].MM PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2838 = stringAppend(MMC_REFSTRINGLIT(tmp2836),tmp2837);
      {
        const char* assert_cond = "(dc.roo.air.datConExtWin[1].glaSys.gas[1].MM >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/Gases.mo",21,5,22,48,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2838));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/Gases.mo",21,5,22,48,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2838));
        }
      }
      tmp2839 = 1;
    }
  }
  threadData->lastEquationSolved = 4731;
}

/*
equation index: 4732
type: ALGORITHM

  assert(dc.roo.air.datConExtWin[1].glaSys.gas[1].a_mu >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.datConExtWin[1].glaSys.gas[1].a_mu, has value: " + String(dc.roo.air.datConExtWin[1].glaSys.gas[1].a_mu, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4732(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4732};
  modelica_boolean tmp2840;
  static const MMC_DEFSTRINGLIT(tmp2841,100,"Variable violating min constraint: 0.0 <= dc.roo.air.datConExtWin[1].glaSys.gas[1].a_mu, has value: ");
  modelica_string tmp2842;
  modelica_metatype tmpMeta2843;
  static int tmp2844 = 0;
  if(!tmp2844)
  {
    tmp2840 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[297]] /* dc.roo.air.datConExtWin[1].glaSys.gas[1].a_mu PARAM */),0.0);
    if(!tmp2840)
    {
      tmp2842 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[297]] /* dc.roo.air.datConExtWin[1].glaSys.gas[1].a_mu PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2843 = stringAppend(MMC_REFSTRINGLIT(tmp2841),tmp2842);
      {
        const char* assert_cond = "(dc.roo.air.datConExtWin[1].glaSys.gas[1].a_mu >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/Gases.mo",12,5,13,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2843));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/Gases.mo",12,5,13,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2843));
        }
      }
      tmp2844 = 1;
    }
  }
  threadData->lastEquationSolved = 4732;
}

/*
equation index: 4733
type: ALGORITHM

  assert(dc.roo.air.datConExtWin[1].sidFin.gap >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.datConExtWin[1].sidFin.gap, has value: " + String(dc.roo.air.datConExtWin[1].sidFin.gap, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4733(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4733};
  modelica_boolean tmp2845;
  static const MMC_DEFSTRINGLIT(tmp2846,92,"Variable violating min constraint: 0.0 <= dc.roo.air.datConExtWin[1].sidFin.gap, has value: ");
  modelica_string tmp2847;
  modelica_metatype tmpMeta2848;
  static int tmp2849 = 0;
  if(!tmp2849)
  {
    tmp2845 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[340]] /* dc.roo.air.datConExtWin[1].sidFin.gap PARAM */),0.0);
    if(!tmp2845)
    {
      tmp2847 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[340]] /* dc.roo.air.datConExtWin[1].sidFin.gap PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2848 = stringAppend(MMC_REFSTRINGLIT(tmp2846),tmp2847);
      {
        const char* assert_cond = "(dc.roo.air.datConExtWin[1].sidFin.gap >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/SideFins.mo",10,3,12,57,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2848));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/SideFins.mo",10,3,12,57,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2848));
        }
      }
      tmp2849 = 1;
    }
  }
  threadData->lastEquationSolved = 4733;
}

/*
equation index: 4734
type: ALGORITHM

  assert(dc.roo.air.datConExtWin[1].sidFin.dep >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.datConExtWin[1].sidFin.dep, has value: " + String(dc.roo.air.datConExtWin[1].sidFin.dep, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4734(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4734};
  modelica_boolean tmp2850;
  static const MMC_DEFSTRINGLIT(tmp2851,92,"Variable violating min constraint: 0.0 <= dc.roo.air.datConExtWin[1].sidFin.dep, has value: ");
  modelica_string tmp2852;
  modelica_metatype tmpMeta2853;
  static int tmp2854 = 0;
  if(!tmp2854)
  {
    tmp2850 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[339]] /* dc.roo.air.datConExtWin[1].sidFin.dep PARAM */),0.0);
    if(!tmp2850)
    {
      tmp2852 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[339]] /* dc.roo.air.datConExtWin[1].sidFin.dep PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2853 = stringAppend(MMC_REFSTRINGLIT(tmp2851),tmp2852);
      {
        const char* assert_cond = "(dc.roo.air.datConExtWin[1].sidFin.dep >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/SideFins.mo",7,3,9,57,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2853));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/SideFins.mo",7,3,9,57,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2853));
        }
      }
      tmp2854 = 1;
    }
  }
  threadData->lastEquationSolved = 4734;
}

/*
equation index: 4735
type: ALGORITHM

  assert(dc.roo.air.datConExtWin[1].sidFin.h >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.datConExtWin[1].sidFin.h, has value: " + String(dc.roo.air.datConExtWin[1].sidFin.h, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4735(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4735};
  modelica_boolean tmp2855;
  static const MMC_DEFSTRINGLIT(tmp2856,90,"Variable violating min constraint: 0.0 <= dc.roo.air.datConExtWin[1].sidFin.h, has value: ");
  modelica_string tmp2857;
  modelica_metatype tmpMeta2858;
  static int tmp2859 = 0;
  if(!tmp2859)
  {
    tmp2855 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[341]] /* dc.roo.air.datConExtWin[1].sidFin.h PARAM */),0.0);
    if(!tmp2855)
    {
      tmp2857 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[341]] /* dc.roo.air.datConExtWin[1].sidFin.h PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2858 = stringAppend(MMC_REFSTRINGLIT(tmp2856),tmp2857);
      {
        const char* assert_cond = "(dc.roo.air.datConExtWin[1].sidFin.h >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/SideFins.mo",4,3,6,57,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2858));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/SideFins.mo",4,3,6,57,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2858));
        }
      }
      tmp2859 = 1;
    }
  }
  threadData->lastEquationSolved = 4735;
}

/*
equation index: 4736
type: ALGORITHM

  assert(dc.roo.air.datConExtWin[1].ove.gap >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.datConExtWin[1].ove.gap, has value: " + String(dc.roo.air.datConExtWin[1].ove.gap, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4736(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4736};
  modelica_boolean tmp2860;
  static const MMC_DEFSTRINGLIT(tmp2861,89,"Variable violating min constraint: 0.0 <= dc.roo.air.datConExtWin[1].ove.gap, has value: ");
  modelica_string tmp2862;
  modelica_metatype tmpMeta2863;
  static int tmp2864 = 0;
  if(!tmp2864)
  {
    tmp2860 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[336]] /* dc.roo.air.datConExtWin[1].ove.gap PARAM */),0.0);
    if(!tmp2860)
    {
      tmp2862 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[336]] /* dc.roo.air.datConExtWin[1].ove.gap PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2863 = stringAppend(MMC_REFSTRINGLIT(tmp2861),tmp2862);
      {
        const char* assert_cond = "(dc.roo.air.datConExtWin[1].ove.gap >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/Overhang.mo",15,3,17,57,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2863));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/Overhang.mo",15,3,17,57,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2863));
        }
      }
      tmp2864 = 1;
    }
  }
  threadData->lastEquationSolved = 4736;
}

/*
equation index: 4737
type: ALGORITHM

  assert(dc.roo.air.datConExtWin[1].ove.dep >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.datConExtWin[1].ove.dep, has value: " + String(dc.roo.air.datConExtWin[1].ove.dep, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4737(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4737};
  modelica_boolean tmp2865;
  static const MMC_DEFSTRINGLIT(tmp2866,89,"Variable violating min constraint: 0.0 <= dc.roo.air.datConExtWin[1].ove.dep, has value: ");
  modelica_string tmp2867;
  modelica_metatype tmpMeta2868;
  static int tmp2869 = 0;
  if(!tmp2869)
  {
    tmp2865 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[335]] /* dc.roo.air.datConExtWin[1].ove.dep PARAM */),0.0);
    if(!tmp2865)
    {
      tmp2867 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[335]] /* dc.roo.air.datConExtWin[1].ove.dep PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2868 = stringAppend(MMC_REFSTRINGLIT(tmp2866),tmp2867);
      {
        const char* assert_cond = "(dc.roo.air.datConExtWin[1].ove.dep >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/Overhang.mo",12,3,14,57,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2868));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/Overhang.mo",12,3,14,57,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2868));
        }
      }
      tmp2869 = 1;
    }
  }
  threadData->lastEquationSolved = 4737;
}

/*
equation index: 4738
type: ALGORITHM

  assert(dc.roo.air.datConExtWin[1].ove.wR >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.datConExtWin[1].ove.wR, has value: " + String(dc.roo.air.datConExtWin[1].ove.wR, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4738(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4738};
  modelica_boolean tmp2870;
  static const MMC_DEFSTRINGLIT(tmp2871,88,"Variable violating min constraint: 0.0 <= dc.roo.air.datConExtWin[1].ove.wR, has value: ");
  modelica_string tmp2872;
  modelica_metatype tmpMeta2873;
  static int tmp2874 = 0;
  if(!tmp2874)
  {
    tmp2870 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[338]] /* dc.roo.air.datConExtWin[1].ove.wR PARAM */),0.0);
    if(!tmp2870)
    {
      tmp2872 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[338]] /* dc.roo.air.datConExtWin[1].ove.wR PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2873 = stringAppend(MMC_REFSTRINGLIT(tmp2871),tmp2872);
      {
        const char* assert_cond = "(dc.roo.air.datConExtWin[1].ove.wR >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/Overhang.mo",8,3,10,57,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2873));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/Overhang.mo",8,3,10,57,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2873));
        }
      }
      tmp2874 = 1;
    }
  }
  threadData->lastEquationSolved = 4738;
}

/*
equation index: 4739
type: ALGORITHM

  assert(dc.roo.air.datConExtWin[1].ove.wL >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.datConExtWin[1].ove.wL, has value: " + String(dc.roo.air.datConExtWin[1].ove.wL, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4739(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4739};
  modelica_boolean tmp2875;
  static const MMC_DEFSTRINGLIT(tmp2876,88,"Variable violating min constraint: 0.0 <= dc.roo.air.datConExtWin[1].ove.wL, has value: ");
  modelica_string tmp2877;
  modelica_metatype tmpMeta2878;
  static int tmp2879 = 0;
  if(!tmp2879)
  {
    tmp2875 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[337]] /* dc.roo.air.datConExtWin[1].ove.wL PARAM */),0.0);
    if(!tmp2875)
    {
      tmp2877 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[337]] /* dc.roo.air.datConExtWin[1].ove.wL PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2878 = stringAppend(MMC_REFSTRINGLIT(tmp2876),tmp2877);
      {
        const char* assert_cond = "(dc.roo.air.datConExtWin[1].ove.wL >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/Overhang.mo",5,3,7,57,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2878));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/Overhang.mo",5,3,7,57,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2878));
        }
      }
      tmp2879 = 1;
    }
  }
  threadData->lastEquationSolved = 4739;
}

/*
equation index: 4740
type: ALGORITHM

  assert(dc.roo.air.datConExtWin[1].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.air.datConExtWin[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, "Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.air.datConExtWin[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: " + String(dc.roo.air.datConExtWin[1].boundaryCondition, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4740(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4740};
  modelica_boolean tmp2880;
  modelica_boolean tmp2881;
  static const MMC_DEFSTRINGLIT(tmp2882,247,"Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.air.datConExtWin[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: ");
  modelica_string tmp2883;
  modelica_metatype tmpMeta2884;
  static int tmp2885 = 0;
  if(!tmp2885)
  {
    tmp2880 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[103]] /* dc.roo.air.datConExtWin[1].boundaryCondition PARAM */),1);
    tmp2881 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[103]] /* dc.roo.air.datConExtWin[1].boundaryCondition PARAM */),2);
    if(!(tmp2880 && tmp2881))
    {
      tmp2883 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[103]] /* dc.roo.air.datConExtWin[1].boundaryCondition PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2884 = stringAppend(MMC_REFSTRINGLIT(tmp2882),tmp2883);
      {
        const char* assert_cond = "(dc.roo.air.datConExtWin[1].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.air.datConExtWin[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",43,3,46,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2884));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",43,3,46,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2884));
        }
      }
      tmp2885 = 1;
    }
  }
  threadData->lastEquationSolved = 4740;
}

/*
equation index: 4741
type: ALGORITHM

  assert(dc.roo.air.datConExtWin[1].T_b_start >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.datConExtWin[1].T_b_start, has value: " + String(dc.roo.air.datConExtWin[1].T_b_start, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4741(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4741};
  modelica_boolean tmp2886;
  static const MMC_DEFSTRINGLIT(tmp2887,91,"Variable violating min constraint: 0.0 <= dc.roo.air.datConExtWin[1].T_b_start, has value: ");
  modelica_string tmp2888;
  modelica_metatype tmpMeta2889;
  static int tmp2890 = 0;
  if(!tmp2890)
  {
    tmp2886 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[287]] /* dc.roo.air.datConExtWin[1].T_b_start PARAM */),0.0);
    if(!tmp2886)
    {
      tmp2888 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[287]] /* dc.roo.air.datConExtWin[1].T_b_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2889 = stringAppend(MMC_REFSTRINGLIT(tmp2887),tmp2888);
      {
        const char* assert_cond = "(dc.roo.air.datConExtWin[1].T_b_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",30,3,32,79,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2889));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",30,3,32,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2889));
        }
      }
      tmp2890 = 1;
    }
  }
  threadData->lastEquationSolved = 4741;
}

/*
equation index: 4742
type: ALGORITHM

  assert(dc.roo.air.datConExtWin[1].T_a_start >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.datConExtWin[1].T_a_start, has value: " + String(dc.roo.air.datConExtWin[1].T_a_start, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4742(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4742};
  modelica_boolean tmp2891;
  static const MMC_DEFSTRINGLIT(tmp2892,91,"Variable violating min constraint: 0.0 <= dc.roo.air.datConExtWin[1].T_a_start, has value: ");
  modelica_string tmp2893;
  modelica_metatype tmpMeta2894;
  static int tmp2895 = 0;
  if(!tmp2895)
  {
    tmp2891 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[286]] /* dc.roo.air.datConExtWin[1].T_a_start PARAM */),0.0);
    if(!tmp2891)
    {
      tmp2893 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[286]] /* dc.roo.air.datConExtWin[1].T_a_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2894 = stringAppend(MMC_REFSTRINGLIT(tmp2892),tmp2893);
      {
        const char* assert_cond = "(dc.roo.air.datConExtWin[1].T_a_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",27,3,29,79,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2894));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",27,3,29,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2894));
        }
      }
      tmp2895 = 1;
    }
  }
  threadData->lastEquationSolved = 4742;
}

/*
equation index: 4743
type: ALGORITHM

  assert(dc.roo.air.datConExtWin[1].layers.roughness_a >= Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough and dc.roo.air.datConExtWin[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth, "Variable violating min/max constraint: Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough <= dc.roo.air.datConExtWin[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth, has value: " + String(dc.roo.air.datConExtWin[1].layers.roughness_a, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4743(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4743};
  modelica_boolean tmp2896;
  modelica_boolean tmp2897;
  static const MMC_DEFSTRINGLIT(tmp2898,216,"Variable violating min/max constraint: Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough <= dc.roo.air.datConExtWin[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth, has value: ");
  modelica_string tmp2899;
  modelica_metatype tmpMeta2900;
  static int tmp2901 = 0;
  if(!tmp2901)
  {
    tmp2896 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[108]] /* dc.roo.air.datConExtWin[1].layers.roughness_a PARAM */),1);
    tmp2897 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[108]] /* dc.roo.air.datConExtWin[1].layers.roughness_a PARAM */),6);
    if(!(tmp2896 && tmp2897))
    {
      tmp2899 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[108]] /* dc.roo.air.datConExtWin[1].layers.roughness_a PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2900 = stringAppend(MMC_REFSTRINGLIT(tmp2898),tmp2899);
      {
        const char* assert_cond = "(dc.roo.air.datConExtWin[1].layers.roughness_a >= Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough and dc.roo.air.datConExtWin[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",25,4,27,35,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2900));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",25,4,27,35,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2900));
        }
      }
      tmp2901 = 1;
    }
  }
  threadData->lastEquationSolved = 4743;
}

/*
equation index: 4744
type: ALGORITHM

  assert(dc.roo.air.datConExtWin[1].layers.nSta[1] >= 1, "Variable violating min constraint: 1 <= dc.roo.air.datConExtWin[1].layers.nSta[1], has value: " + String(dc.roo.air.datConExtWin[1].layers.nSta[1], "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4744(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4744};
  modelica_boolean tmp2902;
  static const MMC_DEFSTRINGLIT(tmp2903,94,"Variable violating min constraint: 1 <= dc.roo.air.datConExtWin[1].layers.nSta[1], has value: ");
  modelica_string tmp2904;
  modelica_metatype tmpMeta2905;
  static int tmp2906 = 0;
  if(!tmp2906)
  {
    tmp2902 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[107]] /* dc.roo.air.datConExtWin[1].layers.nSta[1] PARAM */),((modelica_integer) 1));
    if(!tmp2902)
    {
      tmp2904 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[107]] /* dc.roo.air.datConExtWin[1].layers.nSta[1] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2905 = stringAppend(MMC_REFSTRINGLIT(tmp2903),tmp2904);
      {
        const char* assert_cond = "(dc.roo.air.datConExtWin[1].layers.nSta[1] >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",14,4,16,59,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2905));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",14,4,16,59,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2905));
        }
      }
      tmp2906 = 1;
    }
  }
  threadData->lastEquationSolved = 4744;
}

/*
equation index: 4745
type: ALGORITHM

  assert(dc.roo.air.datConExtWin[1].layers.material[1].TLiq >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.datConExtWin[1].layers.material[1].TLiq, has value: " + String(dc.roo.air.datConExtWin[1].layers.material[1].TLiq, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4745(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4745};
  modelica_boolean tmp2907;
  static const MMC_DEFSTRINGLIT(tmp2908,105,"Variable violating min constraint: 0.0 <= dc.roo.air.datConExtWin[1].layers.material[1].TLiq, has value: ");
  modelica_string tmp2909;
  modelica_metatype tmpMeta2910;
  static int tmp2911 = 0;
  if(!tmp2911)
  {
    tmp2907 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[326]] /* dc.roo.air.datConExtWin[1].layers.material[1].TLiq PARAM */),0.0);
    if(!tmp2907)
    {
      tmp2909 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[326]] /* dc.roo.air.datConExtWin[1].layers.material[1].TLiq PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2910 = stringAppend(MMC_REFSTRINGLIT(tmp2908),tmp2909);
      {
        const char* assert_cond = "(dc.roo.air.datConExtWin[1].layers.material[1].TLiq >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",33,5,35,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2910));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",33,5,35,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2910));
        }
      }
      tmp2911 = 1;
    }
  }
  threadData->lastEquationSolved = 4745;
}

/*
equation index: 4746
type: ALGORITHM

  assert(dc.roo.air.datConExtWin[1].layers.material[1].TSol >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.datConExtWin[1].layers.material[1].TSol, has value: " + String(dc.roo.air.datConExtWin[1].layers.material[1].TSol, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4746(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4746};
  modelica_boolean tmp2912;
  static const MMC_DEFSTRINGLIT(tmp2913,105,"Variable violating min constraint: 0.0 <= dc.roo.air.datConExtWin[1].layers.material[1].TSol, has value: ");
  modelica_string tmp2914;
  modelica_metatype tmpMeta2915;
  static int tmp2916 = 0;
  if(!tmp2916)
  {
    tmp2912 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[327]] /* dc.roo.air.datConExtWin[1].layers.material[1].TSol PARAM */),0.0);
    if(!tmp2912)
    {
      tmp2914 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[327]] /* dc.roo.air.datConExtWin[1].layers.material[1].TSol PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2915 = stringAppend(MMC_REFSTRINGLIT(tmp2913),tmp2914);
      {
        const char* assert_cond = "(dc.roo.air.datConExtWin[1].layers.material[1].TSol >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",30,5,32,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2915));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",30,5,32,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2915));
        }
      }
      tmp2916 = 1;
    }
  }
  threadData->lastEquationSolved = 4746;
}

/*
equation index: 4747
type: ALGORITHM

  assert(dc.roo.air.datConExtWin[1].layers.material[1].nStaReal >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.datConExtWin[1].layers.material[1].nStaReal, has value: " + String(dc.roo.air.datConExtWin[1].layers.material[1].nStaReal, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4747(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4747};
  modelica_boolean tmp2917;
  static const MMC_DEFSTRINGLIT(tmp2918,109,"Variable violating min constraint: 0.0 <= dc.roo.air.datConExtWin[1].layers.material[1].nStaReal, has value: ");
  modelica_string tmp2919;
  modelica_metatype tmpMeta2920;
  static int tmp2921 = 0;
  if(!tmp2921)
  {
    tmp2917 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[331]] /* dc.roo.air.datConExtWin[1].layers.material[1].nStaReal PARAM */),0.0);
    if(!tmp2917)
    {
      tmp2919 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[331]] /* dc.roo.air.datConExtWin[1].layers.material[1].nStaReal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2920 = stringAppend(MMC_REFSTRINGLIT(tmp2918),tmp2919);
      {
        const char* assert_cond = "(dc.roo.air.datConExtWin[1].layers.material[1].nStaReal >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",26,5,28,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2920));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",26,5,28,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2920));
        }
      }
      tmp2921 = 1;
    }
  }
  threadData->lastEquationSolved = 4747;
}

/*
equation index: 4748
type: ALGORITHM

  assert(dc.roo.air.datConExtWin[1].layers.material[1].nSta >= 1, "Variable violating min constraint: 1 <= dc.roo.air.datConExtWin[1].layers.material[1].nSta, has value: " + String(dc.roo.air.datConExtWin[1].layers.material[1].nSta, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4748(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4748};
  modelica_boolean tmp2922;
  static const MMC_DEFSTRINGLIT(tmp2923,103,"Variable violating min constraint: 1 <= dc.roo.air.datConExtWin[1].layers.material[1].nSta, has value: ");
  modelica_string tmp2924;
  modelica_metatype tmpMeta2925;
  static int tmp2926 = 0;
  if(!tmp2926)
  {
    tmp2922 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[104]] /* dc.roo.air.datConExtWin[1].layers.material[1].nSta PARAM */),((modelica_integer) 1));
    if(!tmp2922)
    {
      tmp2924 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[104]] /* dc.roo.air.datConExtWin[1].layers.material[1].nSta PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2925 = stringAppend(MMC_REFSTRINGLIT(tmp2923),tmp2924);
      {
        const char* assert_cond = "(dc.roo.air.datConExtWin[1].layers.material[1].nSta >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",14,5,16,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2925));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",14,5,16,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2925));
        }
      }
      tmp2926 = 1;
    }
  }
  threadData->lastEquationSolved = 4748;
}

/*
equation index: 4749
type: ALGORITHM

  assert(dc.roo.air.datConExtWin[1].layers.material[1].nStaRef >= 0, "Variable violating min constraint: 0 <= dc.roo.air.datConExtWin[1].layers.material[1].nStaRef, has value: " + String(dc.roo.air.datConExtWin[1].layers.material[1].nStaRef, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4749(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4749};
  modelica_boolean tmp2927;
  static const MMC_DEFSTRINGLIT(tmp2928,106,"Variable violating min constraint: 0 <= dc.roo.air.datConExtWin[1].layers.material[1].nStaRef, has value: ");
  modelica_string tmp2929;
  modelica_metatype tmpMeta2930;
  static int tmp2931 = 0;
  if(!tmp2931)
  {
    tmp2927 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[105]] /* dc.roo.air.datConExtWin[1].layers.material[1].nStaRef PARAM */),((modelica_integer) 0));
    if(!tmp2927)
    {
      tmp2929 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[105]] /* dc.roo.air.datConExtWin[1].layers.material[1].nStaRef PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2930 = stringAppend(MMC_REFSTRINGLIT(tmp2928),tmp2929);
      {
        const char* assert_cond = "(dc.roo.air.datConExtWin[1].layers.material[1].nStaRef >= 0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",12,5,13,76,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2930));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",12,5,13,76,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2930));
        }
      }
      tmp2931 = 1;
    }
  }
  threadData->lastEquationSolved = 4749;
}

/*
equation index: 4750
type: ALGORITHM

  assert(dc.roo.air.datConExtWin[1].layers.material[1].d >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.datConExtWin[1].layers.material[1].d, has value: " + String(dc.roo.air.datConExtWin[1].layers.material[1].d, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4750(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4750};
  modelica_boolean tmp2932;
  static const MMC_DEFSTRINGLIT(tmp2933,102,"Variable violating min constraint: 0.0 <= dc.roo.air.datConExtWin[1].layers.material[1].d, has value: ");
  modelica_string tmp2934;
  modelica_metatype tmpMeta2935;
  static int tmp2936 = 0;
  if(!tmp2936)
  {
    tmp2932 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[329]] /* dc.roo.air.datConExtWin[1].layers.material[1].d PARAM */),0.0);
    if(!tmp2932)
    {
      tmp2934 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[329]] /* dc.roo.air.datConExtWin[1].layers.material[1].d PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2935 = stringAppend(MMC_REFSTRINGLIT(tmp2933),tmp2934);
      {
        const char* assert_cond = "(dc.roo.air.datConExtWin[1].layers.material[1].d >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",9,5,9,57,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2935));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",9,5,9,57,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2935));
        }
      }
      tmp2936 = 1;
    }
  }
  threadData->lastEquationSolved = 4750;
}

/*
equation index: 4751
type: ALGORITHM

  assert(dc.roo.air.datConExtWin[1].layers.nLay >= 1, "Variable violating min constraint: 1 <= dc.roo.air.datConExtWin[1].layers.nLay, has value: " + String(dc.roo.air.datConExtWin[1].layers.nLay, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4751(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4751};
  modelica_boolean tmp2937;
  static const MMC_DEFSTRINGLIT(tmp2938,91,"Variable violating min constraint: 1 <= dc.roo.air.datConExtWin[1].layers.nLay, has value: ");
  modelica_string tmp2939;
  modelica_metatype tmpMeta2940;
  static int tmp2941 = 0;
  if(!tmp2941)
  {
    tmp2937 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[106]] /* dc.roo.air.datConExtWin[1].layers.nLay PARAM */),((modelica_integer) 1));
    if(!tmp2937)
    {
      tmp2939 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[106]] /* dc.roo.air.datConExtWin[1].layers.nLay PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2940 = stringAppend(MMC_REFSTRINGLIT(tmp2938),tmp2939);
      {
        const char* assert_cond = "(dc.roo.air.datConExtWin[1].layers.nLay >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",7,4,7,52,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2940));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",7,4,7,52,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2940));
        }
      }
      tmp2941 = 1;
    }
  }
  threadData->lastEquationSolved = 4751;
}

/*
equation index: 4752
type: ALGORITHM

  assert(dc.roo.air.datConExt[1].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.air.datConExt[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, "Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.air.datConExt[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: " + String(dc.roo.air.datConExt[1].boundaryCondition, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4752(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4752};
  modelica_boolean tmp2942;
  modelica_boolean tmp2943;
  static const MMC_DEFSTRINGLIT(tmp2944,244,"Variable violating min/max constraint: Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature <= dc.roo.air.datConExt[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate, has value: ");
  modelica_string tmp2945;
  modelica_metatype tmpMeta2946;
  static int tmp2947 = 0;
  if(!tmp2947)
  {
    tmp2942 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[97]] /* dc.roo.air.datConExt[1].boundaryCondition PARAM */),1);
    tmp2943 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[97]] /* dc.roo.air.datConExt[1].boundaryCondition PARAM */),2);
    if(!(tmp2942 && tmp2943))
    {
      tmp2945 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[97]] /* dc.roo.air.datConExt[1].boundaryCondition PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2946 = stringAppend(MMC_REFSTRINGLIT(tmp2944),tmp2945);
      {
        const char* assert_cond = "(dc.roo.air.datConExt[1].boundaryCondition >= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.Temperature and dc.roo.air.datConExt[1].boundaryCondition <= Buildings.ThermalZones.Detailed.Types.CFDBoundaryConditions.HeatFlowRate)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",43,3,46,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2946));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",43,3,46,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2946));
        }
      }
      tmp2947 = 1;
    }
  }
  threadData->lastEquationSolved = 4752;
}

/*
equation index: 4753
type: ALGORITHM

  assert(dc.roo.air.datConExt[1].T_b_start >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.datConExt[1].T_b_start, has value: " + String(dc.roo.air.datConExt[1].T_b_start, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4753(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4753};
  modelica_boolean tmp2948;
  static const MMC_DEFSTRINGLIT(tmp2949,88,"Variable violating min constraint: 0.0 <= dc.roo.air.datConExt[1].T_b_start, has value: ");
  modelica_string tmp2950;
  modelica_metatype tmpMeta2951;
  static int tmp2952 = 0;
  if(!tmp2952)
  {
    tmp2948 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[262]] /* dc.roo.air.datConExt[1].T_b_start PARAM */),0.0);
    if(!tmp2948)
    {
      tmp2950 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[262]] /* dc.roo.air.datConExt[1].T_b_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2951 = stringAppend(MMC_REFSTRINGLIT(tmp2949),tmp2950);
      {
        const char* assert_cond = "(dc.roo.air.datConExt[1].T_b_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",30,3,32,79,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2951));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",30,3,32,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2951));
        }
      }
      tmp2952 = 1;
    }
  }
  threadData->lastEquationSolved = 4753;
}

/*
equation index: 4754
type: ALGORITHM

  assert(dc.roo.air.datConExt[1].T_a_start >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.datConExt[1].T_a_start, has value: " + String(dc.roo.air.datConExt[1].T_a_start, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4754(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4754};
  modelica_boolean tmp2953;
  static const MMC_DEFSTRINGLIT(tmp2954,88,"Variable violating min constraint: 0.0 <= dc.roo.air.datConExt[1].T_a_start, has value: ");
  modelica_string tmp2955;
  modelica_metatype tmpMeta2956;
  static int tmp2957 = 0;
  if(!tmp2957)
  {
    tmp2953 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[261]] /* dc.roo.air.datConExt[1].T_a_start PARAM */),0.0);
    if(!tmp2953)
    {
      tmp2955 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[261]] /* dc.roo.air.datConExt[1].T_a_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2956 = stringAppend(MMC_REFSTRINGLIT(tmp2954),tmp2955);
      {
        const char* assert_cond = "(dc.roo.air.datConExt[1].T_a_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",27,3,29,79,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2956));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/PartialParameterConstruction.mo",27,3,29,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2956));
        }
      }
      tmp2957 = 1;
    }
  }
  threadData->lastEquationSolved = 4754;
}

/*
equation index: 4755
type: ALGORITHM

  assert(dc.roo.air.datConExt[1].layers.roughness_a >= Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough and dc.roo.air.datConExt[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth, "Variable violating min/max constraint: Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough <= dc.roo.air.datConExt[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth, has value: " + String(dc.roo.air.datConExt[1].layers.roughness_a, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4755(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4755};
  modelica_boolean tmp2958;
  modelica_boolean tmp2959;
  static const MMC_DEFSTRINGLIT(tmp2960,213,"Variable violating min/max constraint: Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough <= dc.roo.air.datConExt[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth, has value: ");
  modelica_string tmp2961;
  modelica_metatype tmpMeta2962;
  static int tmp2963 = 0;
  if(!tmp2963)
  {
    tmp2958 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[102]] /* dc.roo.air.datConExt[1].layers.roughness_a PARAM */),1);
    tmp2959 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[102]] /* dc.roo.air.datConExt[1].layers.roughness_a PARAM */),6);
    if(!(tmp2958 && tmp2959))
    {
      tmp2961 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[102]] /* dc.roo.air.datConExt[1].layers.roughness_a PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2962 = stringAppend(MMC_REFSTRINGLIT(tmp2960),tmp2961);
      {
        const char* assert_cond = "(dc.roo.air.datConExt[1].layers.roughness_a >= Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough and dc.roo.air.datConExt[1].layers.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",25,4,27,35,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2962));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",25,4,27,35,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2962));
        }
      }
      tmp2963 = 1;
    }
  }
  threadData->lastEquationSolved = 4755;
}

/*
equation index: 4756
type: ALGORITHM

  assert(dc.roo.air.datConExt[1].layers.nSta[1] >= 1, "Variable violating min constraint: 1 <= dc.roo.air.datConExt[1].layers.nSta[1], has value: " + String(dc.roo.air.datConExt[1].layers.nSta[1], "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4756(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4756};
  modelica_boolean tmp2964;
  static const MMC_DEFSTRINGLIT(tmp2965,91,"Variable violating min constraint: 1 <= dc.roo.air.datConExt[1].layers.nSta[1], has value: ");
  modelica_string tmp2966;
  modelica_metatype tmpMeta2967;
  static int tmp2968 = 0;
  if(!tmp2968)
  {
    tmp2964 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[101]] /* dc.roo.air.datConExt[1].layers.nSta[1] PARAM */),((modelica_integer) 1));
    if(!tmp2964)
    {
      tmp2966 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[101]] /* dc.roo.air.datConExt[1].layers.nSta[1] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2967 = stringAppend(MMC_REFSTRINGLIT(tmp2965),tmp2966);
      {
        const char* assert_cond = "(dc.roo.air.datConExt[1].layers.nSta[1] >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",14,4,16,59,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2967));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",14,4,16,59,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2967));
        }
      }
      tmp2968 = 1;
    }
  }
  threadData->lastEquationSolved = 4756;
}

/*
equation index: 4757
type: ALGORITHM

  assert(dc.roo.air.datConExt[1].layers.material[1].TLiq >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.datConExt[1].layers.material[1].TLiq, has value: " + String(dc.roo.air.datConExt[1].layers.material[1].TLiq, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4757(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4757};
  modelica_boolean tmp2969;
  static const MMC_DEFSTRINGLIT(tmp2970,102,"Variable violating min constraint: 0.0 <= dc.roo.air.datConExt[1].layers.material[1].TLiq, has value: ");
  modelica_string tmp2971;
  modelica_metatype tmpMeta2972;
  static int tmp2973 = 0;
  if(!tmp2973)
  {
    tmp2969 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[271]] /* dc.roo.air.datConExt[1].layers.material[1].TLiq PARAM */),0.0);
    if(!tmp2969)
    {
      tmp2971 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[271]] /* dc.roo.air.datConExt[1].layers.material[1].TLiq PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2972 = stringAppend(MMC_REFSTRINGLIT(tmp2970),tmp2971);
      {
        const char* assert_cond = "(dc.roo.air.datConExt[1].layers.material[1].TLiq >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",33,5,35,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2972));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",33,5,35,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2972));
        }
      }
      tmp2973 = 1;
    }
  }
  threadData->lastEquationSolved = 4757;
}

/*
equation index: 4758
type: ALGORITHM

  assert(dc.roo.air.datConExt[1].layers.material[1].TSol >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.datConExt[1].layers.material[1].TSol, has value: " + String(dc.roo.air.datConExt[1].layers.material[1].TSol, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4758(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4758};
  modelica_boolean tmp2974;
  static const MMC_DEFSTRINGLIT(tmp2975,102,"Variable violating min constraint: 0.0 <= dc.roo.air.datConExt[1].layers.material[1].TSol, has value: ");
  modelica_string tmp2976;
  modelica_metatype tmpMeta2977;
  static int tmp2978 = 0;
  if(!tmp2978)
  {
    tmp2974 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[272]] /* dc.roo.air.datConExt[1].layers.material[1].TSol PARAM */),0.0);
    if(!tmp2974)
    {
      tmp2976 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[272]] /* dc.roo.air.datConExt[1].layers.material[1].TSol PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2977 = stringAppend(MMC_REFSTRINGLIT(tmp2975),tmp2976);
      {
        const char* assert_cond = "(dc.roo.air.datConExt[1].layers.material[1].TSol >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",30,5,32,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2977));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",30,5,32,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2977));
        }
      }
      tmp2978 = 1;
    }
  }
  threadData->lastEquationSolved = 4758;
}

/*
equation index: 4759
type: ALGORITHM

  assert(dc.roo.air.datConExt[1].layers.material[1].nStaReal >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.datConExt[1].layers.material[1].nStaReal, has value: " + String(dc.roo.air.datConExt[1].layers.material[1].nStaReal, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4759(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4759};
  modelica_boolean tmp2979;
  static const MMC_DEFSTRINGLIT(tmp2980,106,"Variable violating min constraint: 0.0 <= dc.roo.air.datConExt[1].layers.material[1].nStaReal, has value: ");
  modelica_string tmp2981;
  modelica_metatype tmpMeta2982;
  static int tmp2983 = 0;
  if(!tmp2983)
  {
    tmp2979 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[276]] /* dc.roo.air.datConExt[1].layers.material[1].nStaReal PARAM */),0.0);
    if(!tmp2979)
    {
      tmp2981 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[276]] /* dc.roo.air.datConExt[1].layers.material[1].nStaReal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2982 = stringAppend(MMC_REFSTRINGLIT(tmp2980),tmp2981);
      {
        const char* assert_cond = "(dc.roo.air.datConExt[1].layers.material[1].nStaReal >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",26,5,28,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2982));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",26,5,28,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2982));
        }
      }
      tmp2983 = 1;
    }
  }
  threadData->lastEquationSolved = 4759;
}

/*
equation index: 4760
type: ALGORITHM

  assert(dc.roo.air.datConExt[1].layers.material[1].nSta >= 1, "Variable violating min constraint: 1 <= dc.roo.air.datConExt[1].layers.material[1].nSta, has value: " + String(dc.roo.air.datConExt[1].layers.material[1].nSta, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4760(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4760};
  modelica_boolean tmp2984;
  static const MMC_DEFSTRINGLIT(tmp2985,100,"Variable violating min constraint: 1 <= dc.roo.air.datConExt[1].layers.material[1].nSta, has value: ");
  modelica_string tmp2986;
  modelica_metatype tmpMeta2987;
  static int tmp2988 = 0;
  if(!tmp2988)
  {
    tmp2984 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[98]] /* dc.roo.air.datConExt[1].layers.material[1].nSta PARAM */),((modelica_integer) 1));
    if(!tmp2984)
    {
      tmp2986 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[98]] /* dc.roo.air.datConExt[1].layers.material[1].nSta PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2987 = stringAppend(MMC_REFSTRINGLIT(tmp2985),tmp2986);
      {
        const char* assert_cond = "(dc.roo.air.datConExt[1].layers.material[1].nSta >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",14,5,16,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2987));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",14,5,16,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2987));
        }
      }
      tmp2988 = 1;
    }
  }
  threadData->lastEquationSolved = 4760;
}

/*
equation index: 4761
type: ALGORITHM

  assert(dc.roo.air.datConExt[1].layers.material[1].nStaRef >= 0, "Variable violating min constraint: 0 <= dc.roo.air.datConExt[1].layers.material[1].nStaRef, has value: " + String(dc.roo.air.datConExt[1].layers.material[1].nStaRef, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4761(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4761};
  modelica_boolean tmp2989;
  static const MMC_DEFSTRINGLIT(tmp2990,103,"Variable violating min constraint: 0 <= dc.roo.air.datConExt[1].layers.material[1].nStaRef, has value: ");
  modelica_string tmp2991;
  modelica_metatype tmpMeta2992;
  static int tmp2993 = 0;
  if(!tmp2993)
  {
    tmp2989 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[99]] /* dc.roo.air.datConExt[1].layers.material[1].nStaRef PARAM */),((modelica_integer) 0));
    if(!tmp2989)
    {
      tmp2991 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[99]] /* dc.roo.air.datConExt[1].layers.material[1].nStaRef PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2992 = stringAppend(MMC_REFSTRINGLIT(tmp2990),tmp2991);
      {
        const char* assert_cond = "(dc.roo.air.datConExt[1].layers.material[1].nStaRef >= 0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",12,5,13,76,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2992));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",12,5,13,76,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2992));
        }
      }
      tmp2993 = 1;
    }
  }
  threadData->lastEquationSolved = 4761;
}

/*
equation index: 4762
type: ALGORITHM

  assert(dc.roo.air.datConExt[1].layers.material[1].d >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.datConExt[1].layers.material[1].d, has value: " + String(dc.roo.air.datConExt[1].layers.material[1].d, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4762(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4762};
  modelica_boolean tmp2994;
  static const MMC_DEFSTRINGLIT(tmp2995,99,"Variable violating min constraint: 0.0 <= dc.roo.air.datConExt[1].layers.material[1].d, has value: ");
  modelica_string tmp2996;
  modelica_metatype tmpMeta2997;
  static int tmp2998 = 0;
  if(!tmp2998)
  {
    tmp2994 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[274]] /* dc.roo.air.datConExt[1].layers.material[1].d PARAM */),0.0);
    if(!tmp2994)
    {
      tmp2996 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[274]] /* dc.roo.air.datConExt[1].layers.material[1].d PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2997 = stringAppend(MMC_REFSTRINGLIT(tmp2995),tmp2996);
      {
        const char* assert_cond = "(dc.roo.air.datConExt[1].layers.material[1].d >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",9,5,9,57,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2997));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",9,5,9,57,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2997));
        }
      }
      tmp2998 = 1;
    }
  }
  threadData->lastEquationSolved = 4762;
}

/*
equation index: 4763
type: ALGORITHM

  assert(dc.roo.air.datConExt[1].layers.nLay >= 1, "Variable violating min constraint: 1 <= dc.roo.air.datConExt[1].layers.nLay, has value: " + String(dc.roo.air.datConExt[1].layers.nLay, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4763(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4763};
  modelica_boolean tmp2999;
  static const MMC_DEFSTRINGLIT(tmp3000,88,"Variable violating min constraint: 1 <= dc.roo.air.datConExt[1].layers.nLay, has value: ");
  modelica_string tmp3001;
  modelica_metatype tmpMeta3002;
  static int tmp3003 = 0;
  if(!tmp3003)
  {
    tmp2999 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[100]] /* dc.roo.air.datConExt[1].layers.nLay PARAM */),((modelica_integer) 1));
    if(!tmp2999)
    {
      tmp3001 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[100]] /* dc.roo.air.datConExt[1].layers.nLay PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3002 = stringAppend(MMC_REFSTRINGLIT(tmp3000),tmp3001);
      {
        const char* assert_cond = "(dc.roo.air.datConExt[1].layers.nLay >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",7,4,7,52,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3002));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",7,4,7,52,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3002));
        }
      }
      tmp3003 = 1;
    }
  }
  threadData->lastEquationSolved = 4763;
}

/*
equation index: 4764
type: ALGORITHM

  assert(dc.roo.air.NSurBou >= 1, "Variable violating min constraint: 1 <= dc.roo.air.NSurBou, has value: " + String(dc.roo.air.NSurBou, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4764(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4764};
  modelica_boolean tmp3004;
  static const MMC_DEFSTRINGLIT(tmp3005,71,"Variable violating min constraint: 1 <= dc.roo.air.NSurBou, has value: ");
  modelica_string tmp3006;
  modelica_metatype tmpMeta3007;
  static int tmp3008 = 0;
  if(!tmp3008)
  {
    tmp3004 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[25]] /* dc.roo.air.NSurBou PARAM */),((modelica_integer) 1));
    if(!tmp3004)
    {
      tmp3006 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[25]] /* dc.roo.air.NSurBou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3007 = stringAppend(MMC_REFSTRINGLIT(tmp3005),tmp3006);
      {
        const char* assert_cond = "(dc.roo.air.NSurBou >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",40,3,42,33,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3007));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",40,3,42,33,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3007));
        }
      }
      tmp3008 = 1;
    }
  }
  threadData->lastEquationSolved = 4764;
}

/*
equation index: 4765
type: ALGORITHM

  assert(dc.roo.air.NConBou >= 1, "Variable violating min constraint: 1 <= dc.roo.air.NConBou, has value: " + String(dc.roo.air.NConBou, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4765(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4765};
  modelica_boolean tmp3009;
  static const MMC_DEFSTRINGLIT(tmp3010,71,"Variable violating min constraint: 1 <= dc.roo.air.NConBou, has value: ");
  modelica_string tmp3011;
  modelica_metatype tmpMeta3012;
  static int tmp3013 = 0;
  if(!tmp3013)
  {
    tmp3009 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[21]] /* dc.roo.air.NConBou PARAM */),((modelica_integer) 1));
    if(!tmp3009)
    {
      tmp3011 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[21]] /* dc.roo.air.NConBou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3012 = stringAppend(MMC_REFSTRINGLIT(tmp3010),tmp3011);
      {
        const char* assert_cond = "(dc.roo.air.NConBou >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",36,3,38,33,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3012));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",36,3,38,33,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3012));
        }
      }
      tmp3013 = 1;
    }
  }
  threadData->lastEquationSolved = 4765;
}

/*
equation index: 4766
type: ALGORITHM

  assert(dc.roo.air.NConPar >= 1, "Variable violating min constraint: 1 <= dc.roo.air.NConPar, has value: " + String(dc.roo.air.NConPar, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4766(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4766};
  modelica_boolean tmp3014;
  static const MMC_DEFSTRINGLIT(tmp3015,71,"Variable violating min constraint: 1 <= dc.roo.air.NConPar, has value: ");
  modelica_string tmp3016;
  modelica_metatype tmpMeta3017;
  static int tmp3018 = 0;
  if(!tmp3018)
  {
    tmp3014 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[24]] /* dc.roo.air.NConPar PARAM */),((modelica_integer) 1));
    if(!tmp3014)
    {
      tmp3016 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[24]] /* dc.roo.air.NConPar PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3017 = stringAppend(MMC_REFSTRINGLIT(tmp3015),tmp3016);
      {
        const char* assert_cond = "(dc.roo.air.NConPar >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",32,3,34,33,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3017));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",32,3,34,33,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3017));
        }
      }
      tmp3018 = 1;
    }
  }
  threadData->lastEquationSolved = 4766;
}

/*
equation index: 4767
type: ALGORITHM

  assert(dc.roo.air.NConExtWin >= 1, "Variable violating min constraint: 1 <= dc.roo.air.NConExtWin, has value: " + String(dc.roo.air.NConExtWin, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4767(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4767};
  modelica_boolean tmp3019;
  static const MMC_DEFSTRINGLIT(tmp3020,74,"Variable violating min constraint: 1 <= dc.roo.air.NConExtWin, has value: ");
  modelica_string tmp3021;
  modelica_metatype tmpMeta3022;
  static int tmp3023 = 0;
  if(!tmp3023)
  {
    tmp3019 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[23]] /* dc.roo.air.NConExtWin PARAM */),((modelica_integer) 1));
    if(!tmp3019)
    {
      tmp3021 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[23]] /* dc.roo.air.NConExtWin PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3022 = stringAppend(MMC_REFSTRINGLIT(tmp3020),tmp3021);
      {
        const char* assert_cond = "(dc.roo.air.NConExtWin >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",28,3,30,33,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3022));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",28,3,30,33,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3022));
        }
      }
      tmp3023 = 1;
    }
  }
  threadData->lastEquationSolved = 4767;
}

/*
equation index: 4768
type: ALGORITHM

  assert(dc.roo.air.NConExt >= 1, "Variable violating min constraint: 1 <= dc.roo.air.NConExt, has value: " + String(dc.roo.air.NConExt, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4768(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4768};
  modelica_boolean tmp3024;
  static const MMC_DEFSTRINGLIT(tmp3025,71,"Variable violating min constraint: 1 <= dc.roo.air.NConExt, has value: ");
  modelica_string tmp3026;
  modelica_metatype tmpMeta3027;
  static int tmp3028 = 0;
  if(!tmp3028)
  {
    tmp3024 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[22]] /* dc.roo.air.NConExt PARAM */),((modelica_integer) 1));
    if(!tmp3024)
    {
      tmp3026 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[22]] /* dc.roo.air.NConExt PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3027 = stringAppend(MMC_REFSTRINGLIT(tmp3025),tmp3026);
      {
        const char* assert_cond = "(dc.roo.air.NConExt >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",24,3,26,33,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3027));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",24,3,26,33,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3027));
        }
      }
      tmp3028 = 1;
    }
  }
  threadData->lastEquationSolved = 4768;
}

/*
equation index: 4769
type: ALGORITHM

  assert(dc.roo.air.nSurBou >= 0, "Variable violating min constraint: 0 <= dc.roo.air.nSurBou, has value: " + String(dc.roo.air.nSurBou, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4769(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4769};
  modelica_boolean tmp3029;
  static const MMC_DEFSTRINGLIT(tmp3030,71,"Variable violating min constraint: 0 <= dc.roo.air.nSurBou, has value: ");
  modelica_string tmp3031;
  modelica_metatype tmpMeta3032;
  static int tmp3033 = 0;
  if(!tmp3033)
  {
    tmp3029 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[154]] /* dc.roo.air.nSurBou PARAM */),((modelica_integer) 0));
    if(!tmp3029)
    {
      tmp3031 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[154]] /* dc.roo.air.nSurBou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3032 = stringAppend(MMC_REFSTRINGLIT(tmp3030),tmp3031);
      {
        const char* assert_cond = "(dc.roo.air.nSurBou >= 0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",19,3,21,54,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3032));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",19,3,21,54,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3032));
        }
      }
      tmp3033 = 1;
    }
  }
  threadData->lastEquationSolved = 4769;
}

/*
equation index: 4770
type: ALGORITHM

  assert(dc.roo.air.nConBou >= 0, "Variable violating min constraint: 0 <= dc.roo.air.nConBou, has value: " + String(dc.roo.air.nConBou, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4770(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4770};
  modelica_boolean tmp3034;
  static const MMC_DEFSTRINGLIT(tmp3035,71,"Variable violating min constraint: 0 <= dc.roo.air.nConBou, has value: ");
  modelica_string tmp3036;
  modelica_metatype tmpMeta3037;
  static int tmp3038 = 0;
  if(!tmp3038)
  {
    tmp3034 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[147]] /* dc.roo.air.nConBou PARAM */),((modelica_integer) 0));
    if(!tmp3034)
    {
      tmp3036 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[147]] /* dc.roo.air.nConBou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3037 = stringAppend(MMC_REFSTRINGLIT(tmp3035),tmp3036);
      {
        const char* assert_cond = "(dc.roo.air.nConBou >= 0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",15,3,17,54,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3037));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",15,3,17,54,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3037));
        }
      }
      tmp3038 = 1;
    }
  }
  threadData->lastEquationSolved = 4770;
}

/*
equation index: 4771
type: ALGORITHM

  assert(dc.roo.air.nConPar >= 0, "Variable violating min constraint: 0 <= dc.roo.air.nConPar, has value: " + String(dc.roo.air.nConPar, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4771(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4771};
  modelica_boolean tmp3039;
  static const MMC_DEFSTRINGLIT(tmp3040,71,"Variable violating min constraint: 0 <= dc.roo.air.nConPar, has value: ");
  modelica_string tmp3041;
  modelica_metatype tmpMeta3042;
  static int tmp3043 = 0;
  if(!tmp3043)
  {
    tmp3039 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[150]] /* dc.roo.air.nConPar PARAM */),((modelica_integer) 0));
    if(!tmp3039)
    {
      tmp3041 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[150]] /* dc.roo.air.nConPar PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3042 = stringAppend(MMC_REFSTRINGLIT(tmp3040),tmp3041);
      {
        const char* assert_cond = "(dc.roo.air.nConPar >= 0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",12,3,13,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3042));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",12,3,13,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3042));
        }
      }
      tmp3043 = 1;
    }
  }
  threadData->lastEquationSolved = 4771;
}

/*
equation index: 4772
type: ALGORITHM

  assert(dc.roo.air.nConExtWin >= 0, "Variable violating min constraint: 0 <= dc.roo.air.nConExtWin, has value: " + String(dc.roo.air.nConExtWin, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4772(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4772};
  modelica_boolean tmp3044;
  static const MMC_DEFSTRINGLIT(tmp3045,74,"Variable violating min constraint: 0 <= dc.roo.air.nConExtWin, has value: ");
  modelica_string tmp3046;
  modelica_metatype tmpMeta3047;
  static int tmp3048 = 0;
  if(!tmp3048)
  {
    tmp3044 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[149]] /* dc.roo.air.nConExtWin PARAM */),((modelica_integer) 0));
    if(!tmp3044)
    {
      tmp3046 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[149]] /* dc.roo.air.nConExtWin PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3047 = stringAppend(MMC_REFSTRINGLIT(tmp3045),tmp3046);
      {
        const char* assert_cond = "(dc.roo.air.nConExtWin >= 0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",9,3,10,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3047));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",9,3,10,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3047));
        }
      }
      tmp3048 = 1;
    }
  }
  threadData->lastEquationSolved = 4772;
}

/*
equation index: 4773
type: ALGORITHM

  assert(dc.roo.air.nConExt >= 0, "Variable violating min constraint: 0 <= dc.roo.air.nConExt, has value: " + String(dc.roo.air.nConExt, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4773(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4773};
  modelica_boolean tmp3049;
  static const MMC_DEFSTRINGLIT(tmp3050,71,"Variable violating min constraint: 0 <= dc.roo.air.nConExt, has value: ");
  modelica_string tmp3051;
  modelica_metatype tmpMeta3052;
  static int tmp3053 = 0;
  if(!tmp3053)
  {
    tmp3049 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[148]] /* dc.roo.air.nConExt PARAM */),((modelica_integer) 0));
    if(!tmp3049)
    {
      tmp3051 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[148]] /* dc.roo.air.nConExt PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3052 = stringAppend(MMC_REFSTRINGLIT(tmp3050),tmp3051);
      {
        const char* assert_cond = "(dc.roo.air.nConExt >= 0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",7,3,8,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3052));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",7,3,8,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3052));
        }
      }
      tmp3053 = 1;
    }
  }
  threadData->lastEquationSolved = 4773;
}

/*
equation index: 4774
type: ALGORITHM

  assert(dc.roo.m_flow_nominal >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.m_flow_nominal, has value: " + String(dc.roo.m_flow_nominal, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4774(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4774};
  modelica_boolean tmp3054;
  static const MMC_DEFSTRINGLIT(tmp3055,76,"Variable violating min constraint: 0.0 <= dc.roo.m_flow_nominal, has value: ");
  modelica_string tmp3056;
  modelica_metatype tmpMeta3057;
  static int tmp3058 = 0;
  if(!tmp3058)
  {
    tmp3054 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1186]] /* dc.roo.m_flow_nominal PARAM */),0.0);
    if(!tmp3054)
    {
      tmp3056 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1186]] /* dc.roo.m_flow_nominal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3057 = stringAppend(MMC_REFSTRINGLIT(tmp3055),tmp3056);
      {
        const char* assert_cond = "(dc.roo.m_flow_nominal >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/RoomHeatMassBalance.mo",113,3,114,76,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3057));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/RoomHeatMassBalance.mo",113,3,114,76,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3057));
        }
      }
      tmp3058 = 1;
    }
  }
  threadData->lastEquationSolved = 4774;
}

/*
equation index: 4775
type: ALGORITHM

  assert(dc.roo.extConMod >= Buildings.HeatTransfer.Types.ExteriorConvection.Fixed and dc.roo.extConMod <= Buildings.HeatTransfer.Types.ExteriorConvection.TemperatureWind, "Variable violating min/max constraint: Buildings.HeatTransfer.Types.ExteriorConvection.Fixed <= dc.roo.extConMod <= Buildings.HeatTransfer.Types.ExteriorConvection.TemperatureWind, has value: " + String(dc.roo.extConMod, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4775(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4775};
  modelica_boolean tmp3059;
  modelica_boolean tmp3060;
  static const MMC_DEFSTRINGLIT(tmp3061,192,"Variable violating min/max constraint: Buildings.HeatTransfer.Types.ExteriorConvection.Fixed <= dc.roo.extConMod <= Buildings.HeatTransfer.Types.ExteriorConvection.TemperatureWind, has value: ");
  modelica_string tmp3062;
  modelica_metatype tmpMeta3063;
  static int tmp3064 = 0;
  if(!tmp3064)
  {
    tmp3059 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[196]] /* dc.roo.extConMod PARAM */),1);
    tmp3060 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[196]] /* dc.roo.extConMod PARAM */),2);
    if(!(tmp3059 && tmp3060))
    {
      tmp3062 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[196]] /* dc.roo.extConMod PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3063 = stringAppend(MMC_REFSTRINGLIT(tmp3061),tmp3062);
      {
        const char* assert_cond = "(dc.roo.extConMod >= Buildings.HeatTransfer.Types.ExteriorConvection.Fixed and dc.roo.extConMod <= Buildings.HeatTransfer.Types.ExteriorConvection.TemperatureWind)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/RoomHeatMassBalance.mo",106,3,108,58,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3063));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/RoomHeatMassBalance.mo",106,3,108,58,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3063));
        }
      }
      tmp3064 = 1;
    }
  }
  threadData->lastEquationSolved = 4775;
}

/*
equation index: 4776
type: ALGORITHM

  assert(dc.roo.intConMod >= Buildings.HeatTransfer.Types.InteriorConvection.Fixed and dc.roo.intConMod <= Buildings.HeatTransfer.Types.InteriorConvection.Temperature, "Variable violating min/max constraint: Buildings.HeatTransfer.Types.InteriorConvection.Fixed <= dc.roo.intConMod <= Buildings.HeatTransfer.Types.InteriorConvection.Temperature, has value: " + String(dc.roo.intConMod, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4776(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4776};
  modelica_boolean tmp3065;
  modelica_boolean tmp3066;
  static const MMC_DEFSTRINGLIT(tmp3067,188,"Variable violating min/max constraint: Buildings.HeatTransfer.Types.InteriorConvection.Fixed <= dc.roo.intConMod <= Buildings.HeatTransfer.Types.InteriorConvection.Temperature, has value: ");
  modelica_string tmp3068;
  modelica_metatype tmpMeta3069;
  static int tmp3070 = 0;
  if(!tmp3070)
  {
    tmp3065 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[197]] /* dc.roo.intConMod PARAM */),1);
    tmp3066 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[197]] /* dc.roo.intConMod PARAM */),2);
    if(!(tmp3065 && tmp3066))
    {
      tmp3068 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[197]] /* dc.roo.intConMod PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3069 = stringAppend(MMC_REFSTRINGLIT(tmp3067),tmp3068);
      {
        const char* assert_cond = "(dc.roo.intConMod >= Buildings.HeatTransfer.Types.InteriorConvection.Fixed and dc.roo.intConMod <= Buildings.HeatTransfer.Types.InteriorConvection.Temperature)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/RoomHeatMassBalance.mo",99,3,101,58,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3069));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/RoomHeatMassBalance.mo",99,3,101,58,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3069));
        }
      }
      tmp3070 = 1;
    }
  }
  threadData->lastEquationSolved = 4776;
}

/*
equation index: 4777
type: ALGORITHM

  assert(dc.roo.dummyGlaSys.gas[1].MM >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.dummyGlaSys.gas[1].MM, has value: " + String(dc.roo.dummyGlaSys.gas[1].MM, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4777(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4777};
  modelica_boolean tmp3071;
  static const MMC_DEFSTRINGLIT(tmp3072,83,"Variable violating min constraint: 0.0 <= dc.roo.dummyGlaSys.gas[1].MM, has value: ");
  modelica_string tmp3073;
  modelica_metatype tmpMeta3074;
  static int tmp3075 = 0;
  if(!tmp3075)
  {
    tmp3071 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[629]] /* dc.roo.dummyGlaSys.gas[1].MM PARAM */),0.0);
    if(!tmp3071)
    {
      tmp3073 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[629]] /* dc.roo.dummyGlaSys.gas[1].MM PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3074 = stringAppend(MMC_REFSTRINGLIT(tmp3072),tmp3073);
      {
        const char* assert_cond = "(dc.roo.dummyGlaSys.gas[1].MM >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/Gases.mo",21,5,22,48,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3074));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/Gases.mo",21,5,22,48,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3074));
        }
      }
      tmp3075 = 1;
    }
  }
  threadData->lastEquationSolved = 4777;
}

/*
equation index: 4778
type: ALGORITHM

  assert(dc.roo.dummyGlaSys.gas[1].a_mu >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.dummyGlaSys.gas[1].a_mu, has value: " + String(dc.roo.dummyGlaSys.gas[1].a_mu, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4778(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4778};
  modelica_boolean tmp3076;
  static const MMC_DEFSTRINGLIT(tmp3077,85,"Variable violating min constraint: 0.0 <= dc.roo.dummyGlaSys.gas[1].a_mu, has value: ");
  modelica_string tmp3078;
  modelica_metatype tmpMeta3079;
  static int tmp3080 = 0;
  if(!tmp3080)
  {
    tmp3076 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[633]] /* dc.roo.dummyGlaSys.gas[1].a_mu PARAM */),0.0);
    if(!tmp3076)
    {
      tmp3078 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[633]] /* dc.roo.dummyGlaSys.gas[1].a_mu PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3079 = stringAppend(MMC_REFSTRINGLIT(tmp3077),tmp3078);
      {
        const char* assert_cond = "(dc.roo.dummyGlaSys.gas[1].a_mu >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/Gases.mo",12,5,13,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3079));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/Gases.mo",12,5,13,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3079));
        }
      }
      tmp3080 = 1;
    }
  }
  threadData->lastEquationSolved = 4778;
}

/*
equation index: 4779
type: ALGORITHM

  assert(dc.roo.dummyCon.roughness_a >= Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough and dc.roo.dummyCon.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth, "Variable violating min/max constraint: Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough <= dc.roo.dummyCon.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth, has value: " + String(dc.roo.dummyCon.roughness_a, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4779(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4779};
  modelica_boolean tmp3081;
  modelica_boolean tmp3082;
  static const MMC_DEFSTRINGLIT(tmp3083,198,"Variable violating min/max constraint: Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough <= dc.roo.dummyCon.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth, has value: ");
  modelica_string tmp3084;
  modelica_metatype tmpMeta3085;
  static int tmp3086 = 0;
  if(!tmp3086)
  {
    tmp3081 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[195]] /* dc.roo.dummyCon.roughness_a PARAM */),1);
    tmp3082 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[195]] /* dc.roo.dummyCon.roughness_a PARAM */),6);
    if(!(tmp3081 && tmp3082))
    {
      tmp3084 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[195]] /* dc.roo.dummyCon.roughness_a PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3085 = stringAppend(MMC_REFSTRINGLIT(tmp3083),tmp3084);
      {
        const char* assert_cond = "(dc.roo.dummyCon.roughness_a >= Buildings.HeatTransfer.Types.SurfaceRoughness.VeryRough and dc.roo.dummyCon.roughness_a <= Buildings.HeatTransfer.Types.SurfaceRoughness.VerySmooth)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",25,4,27,35,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3085));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",25,4,27,35,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3085));
        }
      }
      tmp3086 = 1;
    }
  }
  threadData->lastEquationSolved = 4779;
}

/*
equation index: 4780
type: ALGORITHM

  assert(dc.roo.dummyCon.nSta[1] >= 1, "Variable violating min constraint: 1 <= dc.roo.dummyCon.nSta[1], has value: " + String(dc.roo.dummyCon.nSta[1], "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4780(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4780};
  modelica_boolean tmp3087;
  static const MMC_DEFSTRINGLIT(tmp3088,76,"Variable violating min constraint: 1 <= dc.roo.dummyCon.nSta[1], has value: ");
  modelica_string tmp3089;
  modelica_metatype tmpMeta3090;
  static int tmp3091 = 0;
  if(!tmp3091)
  {
    tmp3087 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[194]] /* dc.roo.dummyCon.nSta[1] PARAM */),((modelica_integer) 1));
    if(!tmp3087)
    {
      tmp3089 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[194]] /* dc.roo.dummyCon.nSta[1] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3090 = stringAppend(MMC_REFSTRINGLIT(tmp3088),tmp3089);
      {
        const char* assert_cond = "(dc.roo.dummyCon.nSta[1] >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",14,4,16,59,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3090));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",14,4,16,59,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3090));
        }
      }
      tmp3091 = 1;
    }
  }
  threadData->lastEquationSolved = 4780;
}

/*
equation index: 4781
type: ALGORITHM

  assert(dc.roo.dummyCon.material[1].TLiq >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.dummyCon.material[1].TLiq, has value: " + String(dc.roo.dummyCon.material[1].TLiq, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4781(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4781};
  modelica_boolean tmp3092;
  static const MMC_DEFSTRINGLIT(tmp3093,87,"Variable violating min constraint: 0.0 <= dc.roo.dummyCon.material[1].TLiq, has value: ");
  modelica_string tmp3094;
  modelica_metatype tmpMeta3095;
  static int tmp3096 = 0;
  if(!tmp3096)
  {
    tmp3092 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[617]] /* dc.roo.dummyCon.material[1].TLiq PARAM */),0.0);
    if(!tmp3092)
    {
      tmp3094 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[617]] /* dc.roo.dummyCon.material[1].TLiq PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3095 = stringAppend(MMC_REFSTRINGLIT(tmp3093),tmp3094);
      {
        const char* assert_cond = "(dc.roo.dummyCon.material[1].TLiq >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",33,5,35,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3095));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",33,5,35,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3095));
        }
      }
      tmp3096 = 1;
    }
  }
  threadData->lastEquationSolved = 4781;
}

/*
equation index: 4782
type: ALGORITHM

  assert(dc.roo.dummyCon.material[1].TSol >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.dummyCon.material[1].TSol, has value: " + String(dc.roo.dummyCon.material[1].TSol, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4782(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4782};
  modelica_boolean tmp3097;
  static const MMC_DEFSTRINGLIT(tmp3098,87,"Variable violating min constraint: 0.0 <= dc.roo.dummyCon.material[1].TSol, has value: ");
  modelica_string tmp3099;
  modelica_metatype tmpMeta3100;
  static int tmp3101 = 0;
  if(!tmp3101)
  {
    tmp3097 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[618]] /* dc.roo.dummyCon.material[1].TSol PARAM */),0.0);
    if(!tmp3097)
    {
      tmp3099 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[618]] /* dc.roo.dummyCon.material[1].TSol PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3100 = stringAppend(MMC_REFSTRINGLIT(tmp3098),tmp3099);
      {
        const char* assert_cond = "(dc.roo.dummyCon.material[1].TSol >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",30,5,32,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3100));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",30,5,32,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3100));
        }
      }
      tmp3101 = 1;
    }
  }
  threadData->lastEquationSolved = 4782;
}

/*
equation index: 4783
type: ALGORITHM

  assert(dc.roo.dummyCon.material[1].nStaReal >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.dummyCon.material[1].nStaReal, has value: " + String(dc.roo.dummyCon.material[1].nStaReal, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4783(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4783};
  modelica_boolean tmp3102;
  static const MMC_DEFSTRINGLIT(tmp3103,91,"Variable violating min constraint: 0.0 <= dc.roo.dummyCon.material[1].nStaReal, has value: ");
  modelica_string tmp3104;
  modelica_metatype tmpMeta3105;
  static int tmp3106 = 0;
  if(!tmp3106)
  {
    tmp3102 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[622]] /* dc.roo.dummyCon.material[1].nStaReal PARAM */),0.0);
    if(!tmp3102)
    {
      tmp3104 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[622]] /* dc.roo.dummyCon.material[1].nStaReal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3105 = stringAppend(MMC_REFSTRINGLIT(tmp3103),tmp3104);
      {
        const char* assert_cond = "(dc.roo.dummyCon.material[1].nStaReal >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",26,5,28,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3105));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",26,5,28,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3105));
        }
      }
      tmp3106 = 1;
    }
  }
  threadData->lastEquationSolved = 4783;
}

/*
equation index: 4784
type: ALGORITHM

  assert(dc.roo.dummyCon.material[1].nSta >= 1, "Variable violating min constraint: 1 <= dc.roo.dummyCon.material[1].nSta, has value: " + String(dc.roo.dummyCon.material[1].nSta, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4784(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4784};
  modelica_boolean tmp3107;
  static const MMC_DEFSTRINGLIT(tmp3108,85,"Variable violating min constraint: 1 <= dc.roo.dummyCon.material[1].nSta, has value: ");
  modelica_string tmp3109;
  modelica_metatype tmpMeta3110;
  static int tmp3111 = 0;
  if(!tmp3111)
  {
    tmp3107 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[191]] /* dc.roo.dummyCon.material[1].nSta PARAM */),((modelica_integer) 1));
    if(!tmp3107)
    {
      tmp3109 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[191]] /* dc.roo.dummyCon.material[1].nSta PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3110 = stringAppend(MMC_REFSTRINGLIT(tmp3108),tmp3109);
      {
        const char* assert_cond = "(dc.roo.dummyCon.material[1].nSta >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",14,5,16,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3110));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",14,5,16,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3110));
        }
      }
      tmp3111 = 1;
    }
  }
  threadData->lastEquationSolved = 4784;
}

/*
equation index: 4785
type: ALGORITHM

  assert(dc.roo.dummyCon.material[1].nStaRef >= 0, "Variable violating min constraint: 0 <= dc.roo.dummyCon.material[1].nStaRef, has value: " + String(dc.roo.dummyCon.material[1].nStaRef, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4785(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4785};
  modelica_boolean tmp3112;
  static const MMC_DEFSTRINGLIT(tmp3113,88,"Variable violating min constraint: 0 <= dc.roo.dummyCon.material[1].nStaRef, has value: ");
  modelica_string tmp3114;
  modelica_metatype tmpMeta3115;
  static int tmp3116 = 0;
  if(!tmp3116)
  {
    tmp3112 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[192]] /* dc.roo.dummyCon.material[1].nStaRef PARAM */),((modelica_integer) 0));
    if(!tmp3112)
    {
      tmp3114 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[192]] /* dc.roo.dummyCon.material[1].nStaRef PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3115 = stringAppend(MMC_REFSTRINGLIT(tmp3113),tmp3114);
      {
        const char* assert_cond = "(dc.roo.dummyCon.material[1].nStaRef >= 0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",12,5,13,76,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3115));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",12,5,13,76,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3115));
        }
      }
      tmp3116 = 1;
    }
  }
  threadData->lastEquationSolved = 4785;
}

/*
equation index: 4786
type: ALGORITHM

  assert(dc.roo.dummyCon.material[1].d >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.dummyCon.material[1].d, has value: " + String(dc.roo.dummyCon.material[1].d, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4786(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4786};
  modelica_boolean tmp3117;
  static const MMC_DEFSTRINGLIT(tmp3118,84,"Variable violating min constraint: 0.0 <= dc.roo.dummyCon.material[1].d, has value: ");
  modelica_string tmp3119;
  modelica_metatype tmpMeta3120;
  static int tmp3121 = 0;
  if(!tmp3121)
  {
    tmp3117 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[620]] /* dc.roo.dummyCon.material[1].d PARAM */),0.0);
    if(!tmp3117)
    {
      tmp3119 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[620]] /* dc.roo.dummyCon.material[1].d PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3120 = stringAppend(MMC_REFSTRINGLIT(tmp3118),tmp3119);
      {
        const char* assert_cond = "(dc.roo.dummyCon.material[1].d >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",9,5,9,57,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3120));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",9,5,9,57,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3120));
        }
      }
      tmp3121 = 1;
    }
  }
  threadData->lastEquationSolved = 4786;
}

/*
equation index: 4787
type: ALGORITHM

  assert(dc.roo.dummyCon.nLay >= 1, "Variable violating min constraint: 1 <= dc.roo.dummyCon.nLay, has value: " + String(dc.roo.dummyCon.nLay, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4787(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4787};
  modelica_boolean tmp3122;
  static const MMC_DEFSTRINGLIT(tmp3123,73,"Variable violating min constraint: 1 <= dc.roo.dummyCon.nLay, has value: ");
  modelica_string tmp3124;
  modelica_metatype tmpMeta3125;
  static int tmp3126 = 0;
  if(!tmp3126)
  {
    tmp3122 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[193]] /* dc.roo.dummyCon.nLay PARAM */),((modelica_integer) 1));
    if(!tmp3122)
    {
      tmp3124 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[193]] /* dc.roo.dummyCon.nLay PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3125 = stringAppend(MMC_REFSTRINGLIT(tmp3123),tmp3124);
      {
        const char* assert_cond = "(dc.roo.dummyCon.nLay >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",7,4,7,52,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3125));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",7,4,7,52,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3125));
        }
      }
      tmp3126 = 1;
    }
  }
  threadData->lastEquationSolved = 4787;
}

/*
equation index: 4788
type: ALGORITHM

  assert(dc.roo.datConBou[1].layers.nSta[1] >= 1, "Variable violating min constraint: 1 <= dc.roo.datConBou[1].layers.nSta[1], has value: " + String(dc.roo.datConBou[1].layers.nSta[1], "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4788(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4788};
  modelica_boolean tmp3127;
  static const MMC_DEFSTRINGLIT(tmp3128,87,"Variable violating min constraint: 1 <= dc.roo.datConBou[1].layers.nSta[1], has value: ");
  modelica_string tmp3129;
  modelica_metatype tmpMeta3130;
  static int tmp3131 = 0;
  if(!tmp3131)
  {
    tmp3127 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[171]] /* dc.roo.datConBou[1].layers.nSta[1] PARAM */),((modelica_integer) 1));
    if(!tmp3127)
    {
      tmp3129 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[171]] /* dc.roo.datConBou[1].layers.nSta[1] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3130 = stringAppend(MMC_REFSTRINGLIT(tmp3128),tmp3129);
      {
        const char* assert_cond = "(dc.roo.datConBou[1].layers.nSta[1] >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",14,4,16,59,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3130));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",14,4,16,59,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3130));
        }
      }
      tmp3131 = 1;
    }
  }
  threadData->lastEquationSolved = 4788;
}

/*
equation index: 4789
type: ALGORITHM

  assert(dc.roo.datConBou[1].layers.material[1].TLiq >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.datConBou[1].layers.material[1].TLiq, has value: " + String(dc.roo.datConBou[1].layers.material[1].TLiq, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4789(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4789};
  modelica_boolean tmp3132;
  static const MMC_DEFSTRINGLIT(tmp3133,98,"Variable violating min constraint: 0.0 <= dc.roo.datConBou[1].layers.material[1].TLiq, has value: ");
  modelica_string tmp3134;
  modelica_metatype tmpMeta3135;
  static int tmp3136 = 0;
  if(!tmp3136)
  {
    tmp3132 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[495]] /* dc.roo.datConBou[1].layers.material[1].TLiq PARAM */),0.0);
    if(!tmp3132)
    {
      tmp3134 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[495]] /* dc.roo.datConBou[1].layers.material[1].TLiq PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3135 = stringAppend(MMC_REFSTRINGLIT(tmp3133),tmp3134);
      {
        const char* assert_cond = "(dc.roo.datConBou[1].layers.material[1].TLiq >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",33,5,35,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3135));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",33,5,35,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3135));
        }
      }
      tmp3136 = 1;
    }
  }
  threadData->lastEquationSolved = 4789;
}

/*
equation index: 4790
type: ALGORITHM

  assert(dc.roo.datConBou[1].layers.material[1].TSol >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.datConBou[1].layers.material[1].TSol, has value: " + String(dc.roo.datConBou[1].layers.material[1].TSol, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4790(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4790};
  modelica_boolean tmp3137;
  static const MMC_DEFSTRINGLIT(tmp3138,98,"Variable violating min constraint: 0.0 <= dc.roo.datConBou[1].layers.material[1].TSol, has value: ");
  modelica_string tmp3139;
  modelica_metatype tmpMeta3140;
  static int tmp3141 = 0;
  if(!tmp3141)
  {
    tmp3137 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[496]] /* dc.roo.datConBou[1].layers.material[1].TSol PARAM */),0.0);
    if(!tmp3137)
    {
      tmp3139 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[496]] /* dc.roo.datConBou[1].layers.material[1].TSol PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3140 = stringAppend(MMC_REFSTRINGLIT(tmp3138),tmp3139);
      {
        const char* assert_cond = "(dc.roo.datConBou[1].layers.material[1].TSol >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",30,5,32,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3140));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",30,5,32,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3140));
        }
      }
      tmp3141 = 1;
    }
  }
  threadData->lastEquationSolved = 4790;
}

/*
equation index: 4791
type: ALGORITHM

  assert(dc.roo.datConBou[1].layers.material[1].nSta >= 1, "Variable violating min constraint: 1 <= dc.roo.datConBou[1].layers.material[1].nSta, has value: " + String(dc.roo.datConBou[1].layers.material[1].nSta, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4791(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4791};
  modelica_boolean tmp3142;
  static const MMC_DEFSTRINGLIT(tmp3143,96,"Variable violating min constraint: 1 <= dc.roo.datConBou[1].layers.material[1].nSta, has value: ");
  modelica_string tmp3144;
  modelica_metatype tmpMeta3145;
  static int tmp3146 = 0;
  if(!tmp3146)
  {
    tmp3142 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[168]] /* dc.roo.datConBou[1].layers.material[1].nSta PARAM */),((modelica_integer) 1));
    if(!tmp3142)
    {
      tmp3144 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[168]] /* dc.roo.datConBou[1].layers.material[1].nSta PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3145 = stringAppend(MMC_REFSTRINGLIT(tmp3143),tmp3144);
      {
        const char* assert_cond = "(dc.roo.datConBou[1].layers.material[1].nSta >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",14,5,16,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3145));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",14,5,16,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3145));
        }
      }
      tmp3146 = 1;
    }
  }
  threadData->lastEquationSolved = 4791;
}

/*
equation index: 4792
type: ALGORITHM

  assert(dc.roo.datConBou[1].layers.nLay >= 1, "Variable violating min constraint: 1 <= dc.roo.datConBou[1].layers.nLay, has value: " + String(dc.roo.datConBou[1].layers.nLay, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4792(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4792};
  modelica_boolean tmp3147;
  static const MMC_DEFSTRINGLIT(tmp3148,84,"Variable violating min constraint: 1 <= dc.roo.datConBou[1].layers.nLay, has value: ");
  modelica_string tmp3149;
  modelica_metatype tmpMeta3150;
  static int tmp3151 = 0;
  if(!tmp3151)
  {
    tmp3147 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[170]] /* dc.roo.datConBou[1].layers.nLay PARAM */),((modelica_integer) 1));
    if(!tmp3147)
    {
      tmp3149 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[170]] /* dc.roo.datConBou[1].layers.nLay PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3150 = stringAppend(MMC_REFSTRINGLIT(tmp3148),tmp3149);
      {
        const char* assert_cond = "(dc.roo.datConBou[1].layers.nLay >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",7,4,7,52,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3150));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",7,4,7,52,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3150));
        }
      }
      tmp3151 = 1;
    }
  }
  threadData->lastEquationSolved = 4792;
}

/*
equation index: 4793
type: ALGORITHM

  assert(dc.roo.datConPar[1].layers.nSta[1] >= 1, "Variable violating min constraint: 1 <= dc.roo.datConPar[1].layers.nSta[1], has value: " + String(dc.roo.datConPar[1].layers.nSta[1], "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4793(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4793};
  modelica_boolean tmp3152;
  static const MMC_DEFSTRINGLIT(tmp3153,87,"Variable violating min constraint: 1 <= dc.roo.datConPar[1].layers.nSta[1], has value: ");
  modelica_string tmp3154;
  modelica_metatype tmpMeta3155;
  static int tmp3156 = 0;
  if(!tmp3156)
  {
    tmp3152 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[189]] /* dc.roo.datConPar[1].layers.nSta[1] PARAM */),((modelica_integer) 1));
    if(!tmp3152)
    {
      tmp3154 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[189]] /* dc.roo.datConPar[1].layers.nSta[1] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3155 = stringAppend(MMC_REFSTRINGLIT(tmp3153),tmp3154);
      {
        const char* assert_cond = "(dc.roo.datConPar[1].layers.nSta[1] >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",14,4,16,59,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3155));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",14,4,16,59,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3155));
        }
      }
      tmp3156 = 1;
    }
  }
  threadData->lastEquationSolved = 4793;
}

/*
equation index: 4794
type: ALGORITHM

  assert(dc.roo.datConPar[1].layers.material[1].TLiq >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.datConPar[1].layers.material[1].TLiq, has value: " + String(dc.roo.datConPar[1].layers.material[1].TLiq, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4794(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4794};
  modelica_boolean tmp3157;
  static const MMC_DEFSTRINGLIT(tmp3158,98,"Variable violating min constraint: 0.0 <= dc.roo.datConPar[1].layers.material[1].TLiq, has value: ");
  modelica_string tmp3159;
  modelica_metatype tmpMeta3160;
  static int tmp3161 = 0;
  if(!tmp3161)
  {
    tmp3157 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[600]] /* dc.roo.datConPar[1].layers.material[1].TLiq PARAM */),0.0);
    if(!tmp3157)
    {
      tmp3159 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[600]] /* dc.roo.datConPar[1].layers.material[1].TLiq PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3160 = stringAppend(MMC_REFSTRINGLIT(tmp3158),tmp3159);
      {
        const char* assert_cond = "(dc.roo.datConPar[1].layers.material[1].TLiq >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",33,5,35,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3160));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",33,5,35,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3160));
        }
      }
      tmp3161 = 1;
    }
  }
  threadData->lastEquationSolved = 4794;
}

/*
equation index: 4795
type: ALGORITHM

  assert(dc.roo.datConPar[1].layers.material[1].TSol >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.datConPar[1].layers.material[1].TSol, has value: " + String(dc.roo.datConPar[1].layers.material[1].TSol, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4795(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4795};
  modelica_boolean tmp3162;
  static const MMC_DEFSTRINGLIT(tmp3163,98,"Variable violating min constraint: 0.0 <= dc.roo.datConPar[1].layers.material[1].TSol, has value: ");
  modelica_string tmp3164;
  modelica_metatype tmpMeta3165;
  static int tmp3166 = 0;
  if(!tmp3166)
  {
    tmp3162 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[601]] /* dc.roo.datConPar[1].layers.material[1].TSol PARAM */),0.0);
    if(!tmp3162)
    {
      tmp3164 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[601]] /* dc.roo.datConPar[1].layers.material[1].TSol PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3165 = stringAppend(MMC_REFSTRINGLIT(tmp3163),tmp3164);
      {
        const char* assert_cond = "(dc.roo.datConPar[1].layers.material[1].TSol >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",30,5,32,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3165));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",30,5,32,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3165));
        }
      }
      tmp3166 = 1;
    }
  }
  threadData->lastEquationSolved = 4795;
}

/*
equation index: 4796
type: ALGORITHM

  assert(dc.roo.datConPar[1].layers.material[1].nSta >= 1, "Variable violating min constraint: 1 <= dc.roo.datConPar[1].layers.material[1].nSta, has value: " + String(dc.roo.datConPar[1].layers.material[1].nSta, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4796(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4796};
  modelica_boolean tmp3167;
  static const MMC_DEFSTRINGLIT(tmp3168,96,"Variable violating min constraint: 1 <= dc.roo.datConPar[1].layers.material[1].nSta, has value: ");
  modelica_string tmp3169;
  modelica_metatype tmpMeta3170;
  static int tmp3171 = 0;
  if(!tmp3171)
  {
    tmp3167 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[186]] /* dc.roo.datConPar[1].layers.material[1].nSta PARAM */),((modelica_integer) 1));
    if(!tmp3167)
    {
      tmp3169 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[186]] /* dc.roo.datConPar[1].layers.material[1].nSta PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3170 = stringAppend(MMC_REFSTRINGLIT(tmp3168),tmp3169);
      {
        const char* assert_cond = "(dc.roo.datConPar[1].layers.material[1].nSta >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",14,5,16,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3170));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",14,5,16,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3170));
        }
      }
      tmp3171 = 1;
    }
  }
  threadData->lastEquationSolved = 4796;
}

/*
equation index: 4797
type: ALGORITHM

  assert(dc.roo.datConPar[1].layers.nLay >= 1, "Variable violating min constraint: 1 <= dc.roo.datConPar[1].layers.nLay, has value: " + String(dc.roo.datConPar[1].layers.nLay, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4797(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4797};
  modelica_boolean tmp3172;
  static const MMC_DEFSTRINGLIT(tmp3173,84,"Variable violating min constraint: 1 <= dc.roo.datConPar[1].layers.nLay, has value: ");
  modelica_string tmp3174;
  modelica_metatype tmpMeta3175;
  static int tmp3176 = 0;
  if(!tmp3176)
  {
    tmp3172 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[188]] /* dc.roo.datConPar[1].layers.nLay PARAM */),((modelica_integer) 1));
    if(!tmp3172)
    {
      tmp3174 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[188]] /* dc.roo.datConPar[1].layers.nLay PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3175 = stringAppend(MMC_REFSTRINGLIT(tmp3173),tmp3174);
      {
        const char* assert_cond = "(dc.roo.datConPar[1].layers.nLay >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",7,4,7,52,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3175));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",7,4,7,52,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3175));
        }
      }
      tmp3176 = 1;
    }
  }
  threadData->lastEquationSolved = 4797;
}

/*
equation index: 4798
type: ALGORITHM

  assert(dc.roo.datConExtWin[1].sidFin.dep >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.datConExtWin[1].sidFin.dep, has value: " + String(dc.roo.datConExtWin[1].sidFin.dep, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4798(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4798};
  modelica_boolean tmp3177;
  static const MMC_DEFSTRINGLIT(tmp3178,88,"Variable violating min constraint: 0.0 <= dc.roo.datConExtWin[1].sidFin.dep, has value: ");
  modelica_string tmp3179;
  modelica_metatype tmpMeta3180;
  static int tmp3181 = 0;
  if(!tmp3181)
  {
    tmp3177 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[584]] /* dc.roo.datConExtWin[1].sidFin.dep PARAM */),0.0);
    if(!tmp3177)
    {
      tmp3179 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[584]] /* dc.roo.datConExtWin[1].sidFin.dep PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3180 = stringAppend(MMC_REFSTRINGLIT(tmp3178),tmp3179);
      {
        const char* assert_cond = "(dc.roo.datConExtWin[1].sidFin.dep >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/SideFins.mo",7,3,9,57,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3180));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/SideFins.mo",7,3,9,57,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3180));
        }
      }
      tmp3181 = 1;
    }
  }
  threadData->lastEquationSolved = 4798;
}

/*
equation index: 4799
type: ALGORITHM

  assert(dc.roo.datConExtWin[1].ove.dep >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.datConExtWin[1].ove.dep, has value: " + String(dc.roo.datConExtWin[1].ove.dep, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4799(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4799};
  modelica_boolean tmp3182;
  static const MMC_DEFSTRINGLIT(tmp3183,85,"Variable violating min constraint: 0.0 <= dc.roo.datConExtWin[1].ove.dep, has value: ");
  modelica_string tmp3184;
  modelica_metatype tmpMeta3185;
  static int tmp3186 = 0;
  if(!tmp3186)
  {
    tmp3182 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[580]] /* dc.roo.datConExtWin[1].ove.dep PARAM */),0.0);
    if(!tmp3182)
    {
      tmp3184 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[580]] /* dc.roo.datConExtWin[1].ove.dep PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3185 = stringAppend(MMC_REFSTRINGLIT(tmp3183),tmp3184);
      {
        const char* assert_cond = "(dc.roo.datConExtWin[1].ove.dep >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/Overhang.mo",12,3,14,57,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3185));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/Overhang.mo",12,3,14,57,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3185));
        }
      }
      tmp3186 = 1;
    }
  }
  threadData->lastEquationSolved = 4799;
}

/*
equation index: 4800
type: ALGORITHM

  assert(dc.roo.datConExtWin[1].layers.nSta[1] >= 1, "Variable violating min constraint: 1 <= dc.roo.datConExtWin[1].layers.nSta[1], has value: " + String(dc.roo.datConExtWin[1].layers.nSta[1], "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4800(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4800};
  modelica_boolean tmp3187;
  static const MMC_DEFSTRINGLIT(tmp3188,90,"Variable violating min constraint: 1 <= dc.roo.datConExtWin[1].layers.nSta[1], has value: ");
  modelica_string tmp3189;
  modelica_metatype tmpMeta3190;
  static int tmp3191 = 0;
  if(!tmp3191)
  {
    tmp3187 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[183]] /* dc.roo.datConExtWin[1].layers.nSta[1] PARAM */),((modelica_integer) 1));
    if(!tmp3187)
    {
      tmp3189 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[183]] /* dc.roo.datConExtWin[1].layers.nSta[1] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3190 = stringAppend(MMC_REFSTRINGLIT(tmp3188),tmp3189);
      {
        const char* assert_cond = "(dc.roo.datConExtWin[1].layers.nSta[1] >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",14,4,16,59,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3190));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",14,4,16,59,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3190));
        }
      }
      tmp3191 = 1;
    }
  }
  threadData->lastEquationSolved = 4800;
}

/*
equation index: 4801
type: ALGORITHM

  assert(dc.roo.datConExtWin[1].layers.material[1].TLiq >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.datConExtWin[1].layers.material[1].TLiq, has value: " + String(dc.roo.datConExtWin[1].layers.material[1].TLiq, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4801(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4801};
  modelica_boolean tmp3192;
  static const MMC_DEFSTRINGLIT(tmp3193,101,"Variable violating min constraint: 0.0 <= dc.roo.datConExtWin[1].layers.material[1].TLiq, has value: ");
  modelica_string tmp3194;
  modelica_metatype tmpMeta3195;
  static int tmp3196 = 0;
  if(!tmp3196)
  {
    tmp3192 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[571]] /* dc.roo.datConExtWin[1].layers.material[1].TLiq PARAM */),0.0);
    if(!tmp3192)
    {
      tmp3194 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[571]] /* dc.roo.datConExtWin[1].layers.material[1].TLiq PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3195 = stringAppend(MMC_REFSTRINGLIT(tmp3193),tmp3194);
      {
        const char* assert_cond = "(dc.roo.datConExtWin[1].layers.material[1].TLiq >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",33,5,35,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3195));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",33,5,35,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3195));
        }
      }
      tmp3196 = 1;
    }
  }
  threadData->lastEquationSolved = 4801;
}

/*
equation index: 4802
type: ALGORITHM

  assert(dc.roo.datConExtWin[1].layers.material[1].TSol >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.datConExtWin[1].layers.material[1].TSol, has value: " + String(dc.roo.datConExtWin[1].layers.material[1].TSol, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4802(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4802};
  modelica_boolean tmp3197;
  static const MMC_DEFSTRINGLIT(tmp3198,101,"Variable violating min constraint: 0.0 <= dc.roo.datConExtWin[1].layers.material[1].TSol, has value: ");
  modelica_string tmp3199;
  modelica_metatype tmpMeta3200;
  static int tmp3201 = 0;
  if(!tmp3201)
  {
    tmp3197 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[572]] /* dc.roo.datConExtWin[1].layers.material[1].TSol PARAM */),0.0);
    if(!tmp3197)
    {
      tmp3199 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[572]] /* dc.roo.datConExtWin[1].layers.material[1].TSol PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3200 = stringAppend(MMC_REFSTRINGLIT(tmp3198),tmp3199);
      {
        const char* assert_cond = "(dc.roo.datConExtWin[1].layers.material[1].TSol >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",30,5,32,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3200));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",30,5,32,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3200));
        }
      }
      tmp3201 = 1;
    }
  }
  threadData->lastEquationSolved = 4802;
}

/*
equation index: 4803
type: ALGORITHM

  assert(dc.roo.datConExtWin[1].layers.material[1].nSta >= 1, "Variable violating min constraint: 1 <= dc.roo.datConExtWin[1].layers.material[1].nSta, has value: " + String(dc.roo.datConExtWin[1].layers.material[1].nSta, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4803(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4803};
  modelica_boolean tmp3202;
  static const MMC_DEFSTRINGLIT(tmp3203,99,"Variable violating min constraint: 1 <= dc.roo.datConExtWin[1].layers.material[1].nSta, has value: ");
  modelica_string tmp3204;
  modelica_metatype tmpMeta3205;
  static int tmp3206 = 0;
  if(!tmp3206)
  {
    tmp3202 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[180]] /* dc.roo.datConExtWin[1].layers.material[1].nSta PARAM */),((modelica_integer) 1));
    if(!tmp3202)
    {
      tmp3204 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[180]] /* dc.roo.datConExtWin[1].layers.material[1].nSta PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3205 = stringAppend(MMC_REFSTRINGLIT(tmp3203),tmp3204);
      {
        const char* assert_cond = "(dc.roo.datConExtWin[1].layers.material[1].nSta >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",14,5,16,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3205));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",14,5,16,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3205));
        }
      }
      tmp3206 = 1;
    }
  }
  threadData->lastEquationSolved = 4803;
}

/*
equation index: 4804
type: ALGORITHM

  assert(dc.roo.datConExtWin[1].layers.nLay >= 1, "Variable violating min constraint: 1 <= dc.roo.datConExtWin[1].layers.nLay, has value: " + String(dc.roo.datConExtWin[1].layers.nLay, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4804(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4804};
  modelica_boolean tmp3207;
  static const MMC_DEFSTRINGLIT(tmp3208,87,"Variable violating min constraint: 1 <= dc.roo.datConExtWin[1].layers.nLay, has value: ");
  modelica_string tmp3209;
  modelica_metatype tmpMeta3210;
  static int tmp3211 = 0;
  if(!tmp3211)
  {
    tmp3207 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[182]] /* dc.roo.datConExtWin[1].layers.nLay PARAM */),((modelica_integer) 1));
    if(!tmp3207)
    {
      tmp3209 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[182]] /* dc.roo.datConExtWin[1].layers.nLay PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3210 = stringAppend(MMC_REFSTRINGLIT(tmp3208),tmp3209);
      {
        const char* assert_cond = "(dc.roo.datConExtWin[1].layers.nLay >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",7,4,7,52,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3210));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",7,4,7,52,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3210));
        }
      }
      tmp3211 = 1;
    }
  }
  threadData->lastEquationSolved = 4804;
}

/*
equation index: 4805
type: ALGORITHM

  assert(dc.roo.datConExt[1].layers.nSta[1] >= 1, "Variable violating min constraint: 1 <= dc.roo.datConExt[1].layers.nSta[1], has value: " + String(dc.roo.datConExt[1].layers.nSta[1], "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4805(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4805};
  modelica_boolean tmp3212;
  static const MMC_DEFSTRINGLIT(tmp3213,87,"Variable violating min constraint: 1 <= dc.roo.datConExt[1].layers.nSta[1], has value: ");
  modelica_string tmp3214;
  modelica_metatype tmpMeta3215;
  static int tmp3216 = 0;
  if(!tmp3216)
  {
    tmp3212 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[177]] /* dc.roo.datConExt[1].layers.nSta[1] PARAM */),((modelica_integer) 1));
    if(!tmp3212)
    {
      tmp3214 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[177]] /* dc.roo.datConExt[1].layers.nSta[1] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3215 = stringAppend(MMC_REFSTRINGLIT(tmp3213),tmp3214);
      {
        const char* assert_cond = "(dc.roo.datConExt[1].layers.nSta[1] >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",14,4,16,59,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3215));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",14,4,16,59,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3215));
        }
      }
      tmp3216 = 1;
    }
  }
  threadData->lastEquationSolved = 4805;
}

/*
equation index: 4806
type: ALGORITHM

  assert(dc.roo.datConExt[1].layers.material[1].TLiq >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.datConExt[1].layers.material[1].TLiq, has value: " + String(dc.roo.datConExt[1].layers.material[1].TLiq, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4806(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4806};
  modelica_boolean tmp3217;
  static const MMC_DEFSTRINGLIT(tmp3218,98,"Variable violating min constraint: 0.0 <= dc.roo.datConExt[1].layers.material[1].TLiq, has value: ");
  modelica_string tmp3219;
  modelica_metatype tmpMeta3220;
  static int tmp3221 = 0;
  if(!tmp3221)
  {
    tmp3217 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[516]] /* dc.roo.datConExt[1].layers.material[1].TLiq PARAM */),0.0);
    if(!tmp3217)
    {
      tmp3219 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[516]] /* dc.roo.datConExt[1].layers.material[1].TLiq PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3220 = stringAppend(MMC_REFSTRINGLIT(tmp3218),tmp3219);
      {
        const char* assert_cond = "(dc.roo.datConExt[1].layers.material[1].TLiq >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",33,5,35,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3220));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",33,5,35,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3220));
        }
      }
      tmp3221 = 1;
    }
  }
  threadData->lastEquationSolved = 4806;
}

/*
equation index: 4807
type: ALGORITHM

  assert(dc.roo.datConExt[1].layers.material[1].TSol >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.datConExt[1].layers.material[1].TSol, has value: " + String(dc.roo.datConExt[1].layers.material[1].TSol, "g"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4807(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4807};
  modelica_boolean tmp3222;
  static const MMC_DEFSTRINGLIT(tmp3223,98,"Variable violating min constraint: 0.0 <= dc.roo.datConExt[1].layers.material[1].TSol, has value: ");
  modelica_string tmp3224;
  modelica_metatype tmpMeta3225;
  static int tmp3226 = 0;
  if(!tmp3226)
  {
    tmp3222 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[517]] /* dc.roo.datConExt[1].layers.material[1].TSol PARAM */),0.0);
    if(!tmp3222)
    {
      tmp3224 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[517]] /* dc.roo.datConExt[1].layers.material[1].TSol PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3225 = stringAppend(MMC_REFSTRINGLIT(tmp3223),tmp3224);
      {
        const char* assert_cond = "(dc.roo.datConExt[1].layers.material[1].TSol >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",30,5,32,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3225));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",30,5,32,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3225));
        }
      }
      tmp3226 = 1;
    }
  }
  threadData->lastEquationSolved = 4807;
}

/*
equation index: 4808
type: ALGORITHM

  assert(dc.roo.datConExt[1].layers.material[1].nSta >= 1, "Variable violating min constraint: 1 <= dc.roo.datConExt[1].layers.material[1].nSta, has value: " + String(dc.roo.datConExt[1].layers.material[1].nSta, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4808(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4808};
  modelica_boolean tmp3227;
  static const MMC_DEFSTRINGLIT(tmp3228,96,"Variable violating min constraint: 1 <= dc.roo.datConExt[1].layers.material[1].nSta, has value: ");
  modelica_string tmp3229;
  modelica_metatype tmpMeta3230;
  static int tmp3231 = 0;
  if(!tmp3231)
  {
    tmp3227 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[174]] /* dc.roo.datConExt[1].layers.material[1].nSta PARAM */),((modelica_integer) 1));
    if(!tmp3227)
    {
      tmp3229 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[174]] /* dc.roo.datConExt[1].layers.material[1].nSta PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3230 = stringAppend(MMC_REFSTRINGLIT(tmp3228),tmp3229);
      {
        const char* assert_cond = "(dc.roo.datConExt[1].layers.material[1].nSta >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",14,5,16,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3230));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/BaseClasses.mo",14,5,16,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3230));
        }
      }
      tmp3231 = 1;
    }
  }
  threadData->lastEquationSolved = 4808;
}

/*
equation index: 4809
type: ALGORITHM

  assert(dc.roo.datConExt[1].layers.nLay >= 1, "Variable violating min constraint: 1 <= dc.roo.datConExt[1].layers.nLay, has value: " + String(dc.roo.datConExt[1].layers.nLay, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4809(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4809};
  modelica_boolean tmp3232;
  static const MMC_DEFSTRINGLIT(tmp3233,84,"Variable violating min constraint: 1 <= dc.roo.datConExt[1].layers.nLay, has value: ");
  modelica_string tmp3234;
  modelica_metatype tmpMeta3235;
  static int tmp3236 = 0;
  if(!tmp3236)
  {
    tmp3232 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[176]] /* dc.roo.datConExt[1].layers.nLay PARAM */),((modelica_integer) 1));
    if(!tmp3232)
    {
      tmp3234 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[176]] /* dc.roo.datConExt[1].layers.nLay PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3235 = stringAppend(MMC_REFSTRINGLIT(tmp3233),tmp3234);
      {
        const char* assert_cond = "(dc.roo.datConExt[1].layers.nLay >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",7,4,7,52,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3235));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/HeatTransfer/Data/OpaqueConstructions.mo",7,4,7,52,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3235));
        }
      }
      tmp3236 = 1;
    }
  }
  threadData->lastEquationSolved = 4809;
}

/*
equation index: 4810
type: ALGORITHM

  assert(dc.roo.NSurBou >= 1, "Variable violating min constraint: 1 <= dc.roo.NSurBou, has value: " + String(dc.roo.NSurBou, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4810(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4810};
  modelica_boolean tmp3237;
  static const MMC_DEFSTRINGLIT(tmp3238,67,"Variable violating min constraint: 1 <= dc.roo.NSurBou, has value: ");
  modelica_string tmp3239;
  modelica_metatype tmpMeta3240;
  static int tmp3241 = 0;
  if(!tmp3241)
  {
    tmp3237 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[20]] /* dc.roo.NSurBou PARAM */),((modelica_integer) 1));
    if(!tmp3237)
    {
      tmp3239 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[20]] /* dc.roo.NSurBou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3240 = stringAppend(MMC_REFSTRINGLIT(tmp3238),tmp3239);
      {
        const char* assert_cond = "(dc.roo.NSurBou >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",40,3,42,33,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3240));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",40,3,42,33,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3240));
        }
      }
      tmp3241 = 1;
    }
  }
  threadData->lastEquationSolved = 4810;
}

/*
equation index: 4811
type: ALGORITHM

  assert(dc.roo.NConBou >= 1, "Variable violating min constraint: 1 <= dc.roo.NConBou, has value: " + String(dc.roo.NConBou, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4811(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4811};
  modelica_boolean tmp3242;
  static const MMC_DEFSTRINGLIT(tmp3243,67,"Variable violating min constraint: 1 <= dc.roo.NConBou, has value: ");
  modelica_string tmp3244;
  modelica_metatype tmpMeta3245;
  static int tmp3246 = 0;
  if(!tmp3246)
  {
    tmp3242 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[16]] /* dc.roo.NConBou PARAM */),((modelica_integer) 1));
    if(!tmp3242)
    {
      tmp3244 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[16]] /* dc.roo.NConBou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3245 = stringAppend(MMC_REFSTRINGLIT(tmp3243),tmp3244);
      {
        const char* assert_cond = "(dc.roo.NConBou >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",36,3,38,33,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3245));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",36,3,38,33,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3245));
        }
      }
      tmp3246 = 1;
    }
  }
  threadData->lastEquationSolved = 4811;
}

/*
equation index: 4812
type: ALGORITHM

  assert(dc.roo.NConPar >= 1, "Variable violating min constraint: 1 <= dc.roo.NConPar, has value: " + String(dc.roo.NConPar, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4812(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4812};
  modelica_boolean tmp3247;
  static const MMC_DEFSTRINGLIT(tmp3248,67,"Variable violating min constraint: 1 <= dc.roo.NConPar, has value: ");
  modelica_string tmp3249;
  modelica_metatype tmpMeta3250;
  static int tmp3251 = 0;
  if(!tmp3251)
  {
    tmp3247 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[19]] /* dc.roo.NConPar PARAM */),((modelica_integer) 1));
    if(!tmp3247)
    {
      tmp3249 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[19]] /* dc.roo.NConPar PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3250 = stringAppend(MMC_REFSTRINGLIT(tmp3248),tmp3249);
      {
        const char* assert_cond = "(dc.roo.NConPar >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",32,3,34,33,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3250));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",32,3,34,33,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3250));
        }
      }
      tmp3251 = 1;
    }
  }
  threadData->lastEquationSolved = 4812;
}

/*
equation index: 4813
type: ALGORITHM

  assert(dc.roo.NConExtWin >= 1, "Variable violating min constraint: 1 <= dc.roo.NConExtWin, has value: " + String(dc.roo.NConExtWin, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4813(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4813};
  modelica_boolean tmp3252;
  static const MMC_DEFSTRINGLIT(tmp3253,70,"Variable violating min constraint: 1 <= dc.roo.NConExtWin, has value: ");
  modelica_string tmp3254;
  modelica_metatype tmpMeta3255;
  static int tmp3256 = 0;
  if(!tmp3256)
  {
    tmp3252 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[18]] /* dc.roo.NConExtWin PARAM */),((modelica_integer) 1));
    if(!tmp3252)
    {
      tmp3254 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[18]] /* dc.roo.NConExtWin PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3255 = stringAppend(MMC_REFSTRINGLIT(tmp3253),tmp3254);
      {
        const char* assert_cond = "(dc.roo.NConExtWin >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",28,3,30,33,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3255));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",28,3,30,33,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3255));
        }
      }
      tmp3256 = 1;
    }
  }
  threadData->lastEquationSolved = 4813;
}

/*
equation index: 4814
type: ALGORITHM

  assert(dc.roo.NConExt >= 1, "Variable violating min constraint: 1 <= dc.roo.NConExt, has value: " + String(dc.roo.NConExt, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4814(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4814};
  modelica_boolean tmp3257;
  static const MMC_DEFSTRINGLIT(tmp3258,67,"Variable violating min constraint: 1 <= dc.roo.NConExt, has value: ");
  modelica_string tmp3259;
  modelica_metatype tmpMeta3260;
  static int tmp3261 = 0;
  if(!tmp3261)
  {
    tmp3257 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[17]] /* dc.roo.NConExt PARAM */),((modelica_integer) 1));
    if(!tmp3257)
    {
      tmp3259 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[17]] /* dc.roo.NConExt PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3260 = stringAppend(MMC_REFSTRINGLIT(tmp3258),tmp3259);
      {
        const char* assert_cond = "(dc.roo.NConExt >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",24,3,26,33,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3260));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",24,3,26,33,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3260));
        }
      }
      tmp3261 = 1;
    }
  }
  threadData->lastEquationSolved = 4814;
}

/*
equation index: 4815
type: ALGORITHM

  assert(dc.roo.nSurBou >= 0, "Variable violating min constraint: 0 <= dc.roo.nSurBou, has value: " + String(dc.roo.nSurBou, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4815(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4815};
  modelica_boolean tmp3262;
  static const MMC_DEFSTRINGLIT(tmp3263,67,"Variable violating min constraint: 0 <= dc.roo.nSurBou, has value: ");
  modelica_string tmp3264;
  modelica_metatype tmpMeta3265;
  static int tmp3266 = 0;
  if(!tmp3266)
  {
    tmp3262 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[301]] /* dc.roo.nSurBou PARAM */),((modelica_integer) 0));
    if(!tmp3262)
    {
      tmp3264 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[301]] /* dc.roo.nSurBou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3265 = stringAppend(MMC_REFSTRINGLIT(tmp3263),tmp3264);
      {
        const char* assert_cond = "(dc.roo.nSurBou >= 0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",19,3,21,54,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3265));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",19,3,21,54,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3265));
        }
      }
      tmp3266 = 1;
    }
  }
  threadData->lastEquationSolved = 4815;
}

/*
equation index: 4816
type: ALGORITHM

  assert(dc.roo.nConBou >= 0, "Variable violating min constraint: 0 <= dc.roo.nConBou, has value: " + String(dc.roo.nConBou, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4816(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4816};
  modelica_boolean tmp3267;
  static const MMC_DEFSTRINGLIT(tmp3268,67,"Variable violating min constraint: 0 <= dc.roo.nConBou, has value: ");
  modelica_string tmp3269;
  modelica_metatype tmpMeta3270;
  static int tmp3271 = 0;
  if(!tmp3271)
  {
    tmp3267 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[295]] /* dc.roo.nConBou PARAM */),((modelica_integer) 0));
    if(!tmp3267)
    {
      tmp3269 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[295]] /* dc.roo.nConBou PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3270 = stringAppend(MMC_REFSTRINGLIT(tmp3268),tmp3269);
      {
        const char* assert_cond = "(dc.roo.nConBou >= 0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",15,3,17,54,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3270));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",15,3,17,54,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3270));
        }
      }
      tmp3271 = 1;
    }
  }
  threadData->lastEquationSolved = 4816;
}

/*
equation index: 4817
type: ALGORITHM

  assert(dc.roo.nConPar >= 0, "Variable violating min constraint: 0 <= dc.roo.nConPar, has value: " + String(dc.roo.nConPar, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4817(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4817};
  modelica_boolean tmp3272;
  static const MMC_DEFSTRINGLIT(tmp3273,67,"Variable violating min constraint: 0 <= dc.roo.nConPar, has value: ");
  modelica_string tmp3274;
  modelica_metatype tmpMeta3275;
  static int tmp3276 = 0;
  if(!tmp3276)
  {
    tmp3272 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[298]] /* dc.roo.nConPar PARAM */),((modelica_integer) 0));
    if(!tmp3272)
    {
      tmp3274 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[298]] /* dc.roo.nConPar PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3275 = stringAppend(MMC_REFSTRINGLIT(tmp3273),tmp3274);
      {
        const char* assert_cond = "(dc.roo.nConPar >= 0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",12,3,13,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3275));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",12,3,13,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3275));
        }
      }
      tmp3276 = 1;
    }
  }
  threadData->lastEquationSolved = 4817;
}

/*
equation index: 4818
type: ALGORITHM

  assert(dc.roo.nConExtWin >= 0, "Variable violating min constraint: 0 <= dc.roo.nConExtWin, has value: " + String(dc.roo.nConExtWin, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4818(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4818};
  modelica_boolean tmp3277;
  static const MMC_DEFSTRINGLIT(tmp3278,70,"Variable violating min constraint: 0 <= dc.roo.nConExtWin, has value: ");
  modelica_string tmp3279;
  modelica_metatype tmpMeta3280;
  static int tmp3281 = 0;
  if(!tmp3281)
  {
    tmp3277 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[297]] /* dc.roo.nConExtWin PARAM */),((modelica_integer) 0));
    if(!tmp3277)
    {
      tmp3279 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[297]] /* dc.roo.nConExtWin PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3280 = stringAppend(MMC_REFSTRINGLIT(tmp3278),tmp3279);
      {
        const char* assert_cond = "(dc.roo.nConExtWin >= 0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",9,3,10,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3280));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",9,3,10,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3280));
        }
      }
      tmp3281 = 1;
    }
  }
  threadData->lastEquationSolved = 4818;
}

/*
equation index: 4819
type: ALGORITHM

  assert(dc.roo.nConExt >= 0, "Variable violating min constraint: 0 <= dc.roo.nConExt, has value: " + String(dc.roo.nConExt, "d"));
*/
OMC_DISABLE_OPT
static void s000_baseline_eqFunction_4819(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4819};
  modelica_boolean tmp3282;
  static const MMC_DEFSTRINGLIT(tmp3283,67,"Variable violating min constraint: 0 <= dc.roo.nConExt, has value: ");
  modelica_string tmp3284;
  modelica_metatype tmpMeta3285;
  static int tmp3286 = 0;
  if(!tmp3286)
  {
    tmp3282 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[296]] /* dc.roo.nConExt PARAM */),((modelica_integer) 0));
    if(!tmp3282)
    {
      tmp3284 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[296]] /* dc.roo.nConExt PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3285 = stringAppend(MMC_REFSTRINGLIT(tmp3283),tmp3284);
      {
        const char* assert_cond = "(dc.roo.nConExt >= 0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",7,3,8,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3285));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/ConstructionNumbers.mo",7,3,8,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3285));
        }
      }
      tmp3286 = 1;
    }
  }
  threadData->lastEquationSolved = 4819;
}
OMC_DISABLE_OPT
void s000_baseline_updateBoundParameters_3(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[401])(DATA*, threadData_t*) = {
    s000_baseline_eqFunction_4419,
    s000_baseline_eqFunction_4420,
    s000_baseline_eqFunction_4421,
    s000_baseline_eqFunction_4422,
    s000_baseline_eqFunction_4423,
    s000_baseline_eqFunction_4424,
    s000_baseline_eqFunction_4425,
    s000_baseline_eqFunction_4426,
    s000_baseline_eqFunction_4427,
    s000_baseline_eqFunction_4428,
    s000_baseline_eqFunction_4429,
    s000_baseline_eqFunction_4430,
    s000_baseline_eqFunction_4431,
    s000_baseline_eqFunction_4432,
    s000_baseline_eqFunction_4433,
    s000_baseline_eqFunction_4434,
    s000_baseline_eqFunction_4435,
    s000_baseline_eqFunction_4436,
    s000_baseline_eqFunction_4437,
    s000_baseline_eqFunction_4438,
    s000_baseline_eqFunction_4439,
    s000_baseline_eqFunction_4440,
    s000_baseline_eqFunction_4441,
    s000_baseline_eqFunction_4442,
    s000_baseline_eqFunction_4443,
    s000_baseline_eqFunction_4444,
    s000_baseline_eqFunction_4445,
    s000_baseline_eqFunction_4446,
    s000_baseline_eqFunction_4447,
    s000_baseline_eqFunction_4448,
    s000_baseline_eqFunction_4449,
    s000_baseline_eqFunction_4450,
    s000_baseline_eqFunction_4451,
    s000_baseline_eqFunction_4452,
    s000_baseline_eqFunction_4453,
    s000_baseline_eqFunction_4454,
    s000_baseline_eqFunction_4455,
    s000_baseline_eqFunction_4456,
    s000_baseline_eqFunction_4457,
    s000_baseline_eqFunction_4458,
    s000_baseline_eqFunction_4459,
    s000_baseline_eqFunction_4460,
    s000_baseline_eqFunction_4461,
    s000_baseline_eqFunction_4462,
    s000_baseline_eqFunction_4463,
    s000_baseline_eqFunction_4464,
    s000_baseline_eqFunction_4465,
    s000_baseline_eqFunction_4466,
    s000_baseline_eqFunction_4467,
    s000_baseline_eqFunction_4468,
    s000_baseline_eqFunction_4469,
    s000_baseline_eqFunction_4470,
    s000_baseline_eqFunction_4471,
    s000_baseline_eqFunction_4472,
    s000_baseline_eqFunction_4473,
    s000_baseline_eqFunction_4474,
    s000_baseline_eqFunction_4475,
    s000_baseline_eqFunction_4476,
    s000_baseline_eqFunction_4477,
    s000_baseline_eqFunction_4478,
    s000_baseline_eqFunction_4479,
    s000_baseline_eqFunction_4480,
    s000_baseline_eqFunction_4481,
    s000_baseline_eqFunction_4482,
    s000_baseline_eqFunction_4483,
    s000_baseline_eqFunction_4484,
    s000_baseline_eqFunction_4485,
    s000_baseline_eqFunction_4486,
    s000_baseline_eqFunction_4487,
    s000_baseline_eqFunction_4488,
    s000_baseline_eqFunction_4489,
    s000_baseline_eqFunction_4490,
    s000_baseline_eqFunction_4491,
    s000_baseline_eqFunction_4492,
    s000_baseline_eqFunction_4493,
    s000_baseline_eqFunction_4494,
    s000_baseline_eqFunction_4495,
    s000_baseline_eqFunction_4496,
    s000_baseline_eqFunction_4497,
    s000_baseline_eqFunction_4498,
    s000_baseline_eqFunction_4499,
    s000_baseline_eqFunction_4500,
    s000_baseline_eqFunction_4501,
    s000_baseline_eqFunction_4502,
    s000_baseline_eqFunction_4503,
    s000_baseline_eqFunction_4504,
    s000_baseline_eqFunction_4505,
    s000_baseline_eqFunction_4506,
    s000_baseline_eqFunction_4507,
    s000_baseline_eqFunction_4508,
    s000_baseline_eqFunction_4509,
    s000_baseline_eqFunction_4510,
    s000_baseline_eqFunction_4511,
    s000_baseline_eqFunction_4512,
    s000_baseline_eqFunction_4513,
    s000_baseline_eqFunction_4514,
    s000_baseline_eqFunction_4515,
    s000_baseline_eqFunction_4516,
    s000_baseline_eqFunction_4517,
    s000_baseline_eqFunction_4518,
    s000_baseline_eqFunction_4519,
    s000_baseline_eqFunction_4520,
    s000_baseline_eqFunction_4521,
    s000_baseline_eqFunction_4522,
    s000_baseline_eqFunction_4523,
    s000_baseline_eqFunction_4524,
    s000_baseline_eqFunction_4525,
    s000_baseline_eqFunction_4526,
    s000_baseline_eqFunction_4527,
    s000_baseline_eqFunction_4528,
    s000_baseline_eqFunction_4529,
    s000_baseline_eqFunction_4530,
    s000_baseline_eqFunction_4531,
    s000_baseline_eqFunction_4532,
    s000_baseline_eqFunction_4533,
    s000_baseline_eqFunction_4534,
    s000_baseline_eqFunction_4535,
    s000_baseline_eqFunction_4536,
    s000_baseline_eqFunction_4537,
    s000_baseline_eqFunction_4538,
    s000_baseline_eqFunction_4539,
    s000_baseline_eqFunction_4540,
    s000_baseline_eqFunction_4541,
    s000_baseline_eqFunction_4542,
    s000_baseline_eqFunction_4543,
    s000_baseline_eqFunction_4544,
    s000_baseline_eqFunction_4545,
    s000_baseline_eqFunction_4546,
    s000_baseline_eqFunction_4547,
    s000_baseline_eqFunction_4548,
    s000_baseline_eqFunction_4549,
    s000_baseline_eqFunction_4550,
    s000_baseline_eqFunction_4551,
    s000_baseline_eqFunction_4552,
    s000_baseline_eqFunction_4553,
    s000_baseline_eqFunction_4554,
    s000_baseline_eqFunction_4555,
    s000_baseline_eqFunction_4556,
    s000_baseline_eqFunction_4557,
    s000_baseline_eqFunction_4558,
    s000_baseline_eqFunction_4559,
    s000_baseline_eqFunction_4560,
    s000_baseline_eqFunction_4561,
    s000_baseline_eqFunction_4562,
    s000_baseline_eqFunction_4563,
    s000_baseline_eqFunction_4564,
    s000_baseline_eqFunction_4565,
    s000_baseline_eqFunction_4566,
    s000_baseline_eqFunction_4567,
    s000_baseline_eqFunction_4568,
    s000_baseline_eqFunction_4569,
    s000_baseline_eqFunction_4570,
    s000_baseline_eqFunction_4571,
    s000_baseline_eqFunction_4572,
    s000_baseline_eqFunction_4573,
    s000_baseline_eqFunction_4574,
    s000_baseline_eqFunction_4575,
    s000_baseline_eqFunction_4576,
    s000_baseline_eqFunction_4577,
    s000_baseline_eqFunction_4578,
    s000_baseline_eqFunction_4579,
    s000_baseline_eqFunction_4580,
    s000_baseline_eqFunction_4581,
    s000_baseline_eqFunction_4582,
    s000_baseline_eqFunction_4583,
    s000_baseline_eqFunction_4584,
    s000_baseline_eqFunction_4585,
    s000_baseline_eqFunction_4586,
    s000_baseline_eqFunction_4587,
    s000_baseline_eqFunction_4588,
    s000_baseline_eqFunction_4589,
    s000_baseline_eqFunction_4590,
    s000_baseline_eqFunction_4591,
    s000_baseline_eqFunction_4592,
    s000_baseline_eqFunction_4593,
    s000_baseline_eqFunction_4594,
    s000_baseline_eqFunction_4595,
    s000_baseline_eqFunction_4596,
    s000_baseline_eqFunction_4597,
    s000_baseline_eqFunction_4598,
    s000_baseline_eqFunction_4599,
    s000_baseline_eqFunction_4600,
    s000_baseline_eqFunction_4601,
    s000_baseline_eqFunction_4602,
    s000_baseline_eqFunction_4603,
    s000_baseline_eqFunction_4604,
    s000_baseline_eqFunction_4605,
    s000_baseline_eqFunction_4606,
    s000_baseline_eqFunction_4607,
    s000_baseline_eqFunction_4608,
    s000_baseline_eqFunction_4609,
    s000_baseline_eqFunction_4610,
    s000_baseline_eqFunction_4611,
    s000_baseline_eqFunction_4612,
    s000_baseline_eqFunction_4613,
    s000_baseline_eqFunction_4614,
    s000_baseline_eqFunction_4615,
    s000_baseline_eqFunction_4616,
    s000_baseline_eqFunction_4617,
    s000_baseline_eqFunction_4618,
    s000_baseline_eqFunction_4619,
    s000_baseline_eqFunction_4620,
    s000_baseline_eqFunction_4621,
    s000_baseline_eqFunction_4622,
    s000_baseline_eqFunction_4623,
    s000_baseline_eqFunction_4624,
    s000_baseline_eqFunction_4625,
    s000_baseline_eqFunction_4626,
    s000_baseline_eqFunction_4627,
    s000_baseline_eqFunction_4628,
    s000_baseline_eqFunction_4629,
    s000_baseline_eqFunction_4630,
    s000_baseline_eqFunction_4631,
    s000_baseline_eqFunction_4632,
    s000_baseline_eqFunction_4633,
    s000_baseline_eqFunction_4634,
    s000_baseline_eqFunction_4635,
    s000_baseline_eqFunction_4636,
    s000_baseline_eqFunction_4637,
    s000_baseline_eqFunction_4638,
    s000_baseline_eqFunction_4639,
    s000_baseline_eqFunction_4640,
    s000_baseline_eqFunction_4641,
    s000_baseline_eqFunction_4642,
    s000_baseline_eqFunction_4643,
    s000_baseline_eqFunction_4644,
    s000_baseline_eqFunction_4645,
    s000_baseline_eqFunction_4646,
    s000_baseline_eqFunction_4647,
    s000_baseline_eqFunction_4648,
    s000_baseline_eqFunction_4649,
    s000_baseline_eqFunction_4650,
    s000_baseline_eqFunction_4651,
    s000_baseline_eqFunction_4652,
    s000_baseline_eqFunction_4653,
    s000_baseline_eqFunction_4654,
    s000_baseline_eqFunction_4655,
    s000_baseline_eqFunction_4656,
    s000_baseline_eqFunction_4657,
    s000_baseline_eqFunction_4658,
    s000_baseline_eqFunction_4659,
    s000_baseline_eqFunction_4660,
    s000_baseline_eqFunction_4661,
    s000_baseline_eqFunction_4662,
    s000_baseline_eqFunction_4663,
    s000_baseline_eqFunction_4664,
    s000_baseline_eqFunction_4665,
    s000_baseline_eqFunction_4666,
    s000_baseline_eqFunction_4667,
    s000_baseline_eqFunction_4668,
    s000_baseline_eqFunction_4669,
    s000_baseline_eqFunction_4670,
    s000_baseline_eqFunction_4671,
    s000_baseline_eqFunction_4672,
    s000_baseline_eqFunction_4673,
    s000_baseline_eqFunction_4674,
    s000_baseline_eqFunction_4675,
    s000_baseline_eqFunction_4676,
    s000_baseline_eqFunction_4677,
    s000_baseline_eqFunction_4678,
    s000_baseline_eqFunction_4679,
    s000_baseline_eqFunction_4680,
    s000_baseline_eqFunction_4681,
    s000_baseline_eqFunction_4682,
    s000_baseline_eqFunction_4683,
    s000_baseline_eqFunction_4684,
    s000_baseline_eqFunction_4685,
    s000_baseline_eqFunction_4686,
    s000_baseline_eqFunction_4687,
    s000_baseline_eqFunction_4688,
    s000_baseline_eqFunction_4689,
    s000_baseline_eqFunction_4690,
    s000_baseline_eqFunction_4691,
    s000_baseline_eqFunction_4692,
    s000_baseline_eqFunction_4693,
    s000_baseline_eqFunction_4694,
    s000_baseline_eqFunction_4695,
    s000_baseline_eqFunction_4696,
    s000_baseline_eqFunction_4697,
    s000_baseline_eqFunction_4698,
    s000_baseline_eqFunction_4699,
    s000_baseline_eqFunction_4700,
    s000_baseline_eqFunction_4701,
    s000_baseline_eqFunction_4702,
    s000_baseline_eqFunction_4703,
    s000_baseline_eqFunction_4704,
    s000_baseline_eqFunction_4705,
    s000_baseline_eqFunction_4706,
    s000_baseline_eqFunction_4707,
    s000_baseline_eqFunction_4708,
    s000_baseline_eqFunction_4709,
    s000_baseline_eqFunction_4710,
    s000_baseline_eqFunction_4711,
    s000_baseline_eqFunction_4712,
    s000_baseline_eqFunction_4713,
    s000_baseline_eqFunction_4714,
    s000_baseline_eqFunction_4715,
    s000_baseline_eqFunction_4716,
    s000_baseline_eqFunction_4717,
    s000_baseline_eqFunction_4718,
    s000_baseline_eqFunction_4719,
    s000_baseline_eqFunction_4720,
    s000_baseline_eqFunction_4721,
    s000_baseline_eqFunction_4722,
    s000_baseline_eqFunction_4723,
    s000_baseline_eqFunction_4724,
    s000_baseline_eqFunction_4725,
    s000_baseline_eqFunction_4726,
    s000_baseline_eqFunction_4727,
    s000_baseline_eqFunction_4728,
    s000_baseline_eqFunction_4729,
    s000_baseline_eqFunction_4730,
    s000_baseline_eqFunction_4731,
    s000_baseline_eqFunction_4732,
    s000_baseline_eqFunction_4733,
    s000_baseline_eqFunction_4734,
    s000_baseline_eqFunction_4735,
    s000_baseline_eqFunction_4736,
    s000_baseline_eqFunction_4737,
    s000_baseline_eqFunction_4738,
    s000_baseline_eqFunction_4739,
    s000_baseline_eqFunction_4740,
    s000_baseline_eqFunction_4741,
    s000_baseline_eqFunction_4742,
    s000_baseline_eqFunction_4743,
    s000_baseline_eqFunction_4744,
    s000_baseline_eqFunction_4745,
    s000_baseline_eqFunction_4746,
    s000_baseline_eqFunction_4747,
    s000_baseline_eqFunction_4748,
    s000_baseline_eqFunction_4749,
    s000_baseline_eqFunction_4750,
    s000_baseline_eqFunction_4751,
    s000_baseline_eqFunction_4752,
    s000_baseline_eqFunction_4753,
    s000_baseline_eqFunction_4754,
    s000_baseline_eqFunction_4755,
    s000_baseline_eqFunction_4756,
    s000_baseline_eqFunction_4757,
    s000_baseline_eqFunction_4758,
    s000_baseline_eqFunction_4759,
    s000_baseline_eqFunction_4760,
    s000_baseline_eqFunction_4761,
    s000_baseline_eqFunction_4762,
    s000_baseline_eqFunction_4763,
    s000_baseline_eqFunction_4764,
    s000_baseline_eqFunction_4765,
    s000_baseline_eqFunction_4766,
    s000_baseline_eqFunction_4767,
    s000_baseline_eqFunction_4768,
    s000_baseline_eqFunction_4769,
    s000_baseline_eqFunction_4770,
    s000_baseline_eqFunction_4771,
    s000_baseline_eqFunction_4772,
    s000_baseline_eqFunction_4773,
    s000_baseline_eqFunction_4774,
    s000_baseline_eqFunction_4775,
    s000_baseline_eqFunction_4776,
    s000_baseline_eqFunction_4777,
    s000_baseline_eqFunction_4778,
    s000_baseline_eqFunction_4779,
    s000_baseline_eqFunction_4780,
    s000_baseline_eqFunction_4781,
    s000_baseline_eqFunction_4782,
    s000_baseline_eqFunction_4783,
    s000_baseline_eqFunction_4784,
    s000_baseline_eqFunction_4785,
    s000_baseline_eqFunction_4786,
    s000_baseline_eqFunction_4787,
    s000_baseline_eqFunction_4788,
    s000_baseline_eqFunction_4789,
    s000_baseline_eqFunction_4790,
    s000_baseline_eqFunction_4791,
    s000_baseline_eqFunction_4792,
    s000_baseline_eqFunction_4793,
    s000_baseline_eqFunction_4794,
    s000_baseline_eqFunction_4795,
    s000_baseline_eqFunction_4796,
    s000_baseline_eqFunction_4797,
    s000_baseline_eqFunction_4798,
    s000_baseline_eqFunction_4799,
    s000_baseline_eqFunction_4800,
    s000_baseline_eqFunction_4801,
    s000_baseline_eqFunction_4802,
    s000_baseline_eqFunction_4803,
    s000_baseline_eqFunction_4804,
    s000_baseline_eqFunction_4805,
    s000_baseline_eqFunction_4806,
    s000_baseline_eqFunction_4807,
    s000_baseline_eqFunction_4808,
    s000_baseline_eqFunction_4809,
    s000_baseline_eqFunction_4810,
    s000_baseline_eqFunction_4811,
    s000_baseline_eqFunction_4812,
    s000_baseline_eqFunction_4813,
    s000_baseline_eqFunction_4814,
    s000_baseline_eqFunction_4815,
    s000_baseline_eqFunction_4816,
    s000_baseline_eqFunction_4817,
    s000_baseline_eqFunction_4818,
    s000_baseline_eqFunction_4819
  };
  
  for (int id = 0; id < 401; id++) {
    eqFunctions[id](data, threadData);
  }
}
#if defined(__cplusplus)
}
#endif