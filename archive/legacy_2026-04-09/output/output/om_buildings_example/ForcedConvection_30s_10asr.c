/* Asserts */
#include "ForcedConvection_30s_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 2933
type: ALGORITHM

  assert(weaDat.weaBus.nOpa >= 0.0 and weaDat.weaBus.nOpa <= 1.0, "Variable violating min/max constraint: 0.0 <= weaDat.weaBus.nOpa <= 1.0, has value: " + String(weaDat.weaBus.nOpa, "g"));
*/
void ForcedConvection_30s_eqFunction_2933(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2933};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  static const MMC_DEFSTRINGLIT(tmp2,84,"Variable violating min/max constraint: 0.0 <= weaDat.weaBus.nOpa <= 1.0, has value: ");
  modelica_string tmp3;
  modelica_metatype tmpMeta4;
  static int tmp5 = 0;
  if(!tmp5)
  {
    tmp0 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[241]] /* weaDat.weaBus.nOpa variable */),0.0);
    tmp1 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[241]] /* weaDat.weaBus.nOpa variable */),1.0);
    if(!(tmp0 && tmp1))
    {
      tmp3 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[241]] /* weaDat.weaBus.nOpa variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta4 = stringAppend(MMC_REFSTRINGLIT(tmp2),tmp3);
      {
        const char* assert_cond = "(weaDat.weaBus.nOpa >= 0.0 and weaDat.weaBus.nOpa <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",822,3,826,29,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",822,3,826,29,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4));
        }
      }
      tmp5 = 1;
    }
  }
  threadData->lastEquationSolved = 2933;
}

/*
equation index: 2934
type: ALGORITHM

  assert(weaDat.weaBus.TDryBul >= 0.0, "Variable violating min constraint: 0.0 <= weaDat.weaBus.TDryBul, has value: " + String(weaDat.weaBus.TDryBul, "g"));
*/
void ForcedConvection_30s_eqFunction_2934(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2934};
  modelica_boolean tmp6;
  static const MMC_DEFSTRINGLIT(tmp7,76,"Variable violating min constraint: 0.0 <= weaDat.weaBus.TDryBul, has value: ");
  modelica_string tmp8;
  modelica_metatype tmpMeta9;
  static int tmp10 = 0;
  if(!tmp10)
  {
    tmp6 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[237]] /* weaDat.weaBus.TDryBul variable */),0.0);
    if(!tmp6)
    {
      tmp8 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[237]] /* weaDat.weaBus.TDryBul variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta9 = stringAppend(MMC_REFSTRINGLIT(tmp7),tmp8);
      {
        const char* assert_cond = "(weaDat.weaBus.TDryBul >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",737,3,742,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta9));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",737,3,742,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta9));
        }
      }
      tmp10 = 1;
    }
  }
  threadData->lastEquationSolved = 2934;
}

/*
equation index: 2935
type: ALGORITHM

  assert(weaDat.weaBus.HHorIR >= 0.0, "Variable violating min constraint: 0.0 <= weaDat.weaBus.HHorIR, has value: " + String(weaDat.weaBus.HHorIR, "g"));
*/
void ForcedConvection_30s_eqFunction_2935(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2935};
  modelica_boolean tmp11;
  static const MMC_DEFSTRINGLIT(tmp12,75,"Variable violating min constraint: 0.0 <= weaDat.weaBus.HHorIR, has value: ");
  modelica_string tmp13;
  modelica_metatype tmpMeta14;
  static int tmp15 = 0;
  if(!tmp15)
  {
    tmp11 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[234]] /* weaDat.weaBus.HHorIR variable */),0.0);
    if(!tmp11)
    {
      tmp13 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[234]] /* weaDat.weaBus.HHorIR variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta14 = stringAppend(MMC_REFSTRINGLIT(tmp12),tmp13);
      {
        const char* assert_cond = "(weaDat.weaBus.HHorIR >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",790,3,795,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta14));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",790,3,795,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta14));
        }
      }
      tmp15 = 1;
    }
  }
  threadData->lastEquationSolved = 2935;
}

/*
equation index: 2936
type: ALGORITHM

  assert(weaDat.weaBus.TWetBul >= 0.0, "Variable violating min constraint: 0.0 <= weaDat.weaBus.TWetBul, has value: " + String(weaDat.weaBus.TWetBul, "g"));
*/
void ForcedConvection_30s_eqFunction_2936(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2936};
  modelica_boolean tmp16;
  static const MMC_DEFSTRINGLIT(tmp17,76,"Variable violating min constraint: 0.0 <= weaDat.weaBus.TWetBul, has value: ");
  modelica_string tmp18;
  modelica_metatype tmpMeta19;
  static int tmp20 = 0;
  if(!tmp20)
  {
    tmp16 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[238]] /* weaDat.weaBus.TWetBul variable */),0.0);
    if(!tmp16)
    {
      tmp18 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[238]] /* weaDat.weaBus.TWetBul variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta19 = stringAppend(MMC_REFSTRINGLIT(tmp17),tmp18);
      {
        const char* assert_cond = "(weaDat.weaBus.TWetBul >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",750,3,755,29,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta19));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",750,3,755,29,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta19));
        }
      }
      tmp20 = 1;
    }
  }
  threadData->lastEquationSolved = 2936;
}

/*
equation index: 2937
type: ALGORITHM

  assert(weaDat.weaBus.relHum >= 0.0 and weaDat.weaBus.relHum <= 1.0, "Variable violating min/max constraint: 0.0 <= weaDat.weaBus.relHum <= 1.0, has value: " + String(weaDat.weaBus.relHum, "g"));
*/
void ForcedConvection_30s_eqFunction_2937(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2937};
  modelica_boolean tmp21;
  modelica_boolean tmp22;
  static const MMC_DEFSTRINGLIT(tmp23,86,"Variable violating min/max constraint: 0.0 <= weaDat.weaBus.relHum <= 1.0, has value: ");
  modelica_string tmp24;
  modelica_metatype tmpMeta25;
  static int tmp26 = 0;
  if(!tmp26)
  {
    tmp21 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[243]] /* weaDat.weaBus.relHum variable */),0.0);
    tmp22 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[243]] /* weaDat.weaBus.relHum variable */),1.0);
    if(!(tmp21 && tmp22))
    {
      tmp24 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[243]] /* weaDat.weaBus.relHum variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta25 = stringAppend(MMC_REFSTRINGLIT(tmp23),tmp24);
      {
        const char* assert_cond = "(weaDat.weaBus.relHum >= 0.0 and weaDat.weaBus.relHum <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",757,3,761,29,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta25));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",757,3,761,29,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta25));
        }
      }
      tmp26 = 1;
    }
  }
  threadData->lastEquationSolved = 2937;
}

/*
equation index: 2938
type: ALGORITHM

  assert(weaDat.TBlaSkyCom.TDewPoiK >= 0.0, "Variable violating min constraint: 0.0 <= weaDat.TBlaSkyCom.TDewPoiK, has value: " + String(weaDat.TBlaSkyCom.TDewPoiK, "g"));
*/
void ForcedConvection_30s_eqFunction_2938(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2938};
  modelica_boolean tmp27;
  static const MMC_DEFSTRINGLIT(tmp28,81,"Variable violating min constraint: 0.0 <= weaDat.TBlaSkyCom.TDewPoiK, has value: ");
  modelica_string tmp29;
  modelica_metatype tmpMeta30;
  static int tmp31 = 0;
  if(!tmp31)
  {
    tmp27 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[183]] /* weaDat.TBlaSkyCom.TDewPoiK variable */),0.0);
    if(!tmp27)
    {
      tmp29 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[183]] /* weaDat.TBlaSkyCom.TDewPoiK variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta30 = stringAppend(MMC_REFSTRINGLIT(tmp28),tmp29);
      {
        const char* assert_cond = "(weaDat.TBlaSkyCom.TDewPoiK >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/SkyTemperature/BlackBody.mo",34,3,34,64,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta30));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/SkyTemperature/BlackBody.mo",34,3,34,64,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta30));
        }
      }
      tmp31 = 1;
    }
  }
  threadData->lastEquationSolved = 2938;
}

/*
equation index: 2939
type: ALGORITHM

  assert(weaDat.TBlaSkyCom.nOpa10 >= 0.0 and weaDat.TBlaSkyCom.nOpa10 <= 10.0, "Variable violating min/max constraint: 0.0 <= weaDat.TBlaSkyCom.nOpa10 <= 10.0, has value: " + String(weaDat.TBlaSkyCom.nOpa10, "g"));
*/
void ForcedConvection_30s_eqFunction_2939(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2939};
  modelica_boolean tmp32;
  modelica_boolean tmp33;
  static const MMC_DEFSTRINGLIT(tmp34,91,"Variable violating min/max constraint: 0.0 <= weaDat.TBlaSkyCom.nOpa10 <= 10.0, has value: ");
  modelica_string tmp35;
  modelica_metatype tmpMeta36;
  static int tmp37 = 0;
  if(!tmp37)
  {
    tmp32 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[185]] /* weaDat.TBlaSkyCom.nOpa10 variable */),0.0);
    tmp33 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[185]] /* weaDat.TBlaSkyCom.nOpa10 variable */),10.0);
    if(!(tmp32 && tmp33))
    {
      tmp35 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[185]] /* weaDat.TBlaSkyCom.nOpa10 variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta36 = stringAppend(MMC_REFSTRINGLIT(tmp34),tmp35);
      {
        const char* assert_cond = "(weaDat.TBlaSkyCom.nOpa10 >= 0.0 and weaDat.TBlaSkyCom.nOpa10 <= 10.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/SkyTemperature/BlackBody.mo",36,3,36,59,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta36));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/BoundaryConditions/SkyTemperature/BlackBody.mo",36,3,36,59,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta36));
        }
      }
      tmp37 = 1;
    }
  }
  threadData->lastEquationSolved = 2939;
}

/*
equation index: 2940
type: ALGORITHM

  assert(weaDat.tWetBul_TDryBulXi.XiDryBul >= 0.0 and weaDat.tWetBul_TDryBulXi.XiDryBul <= 1.0, "Variable violating min/max constraint: 0.0 <= weaDat.tWetBul_TDryBulXi.XiDryBul <= 1.0, has value: " + String(weaDat.tWetBul_TDryBulXi.XiDryBul, "g"));
*/
void ForcedConvection_30s_eqFunction_2940(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2940};
  modelica_boolean tmp38;
  modelica_boolean tmp39;
  static const MMC_DEFSTRINGLIT(tmp40,99,"Variable violating min/max constraint: 0.0 <= weaDat.tWetBul_TDryBulXi.XiDryBul <= 1.0, has value: ");
  modelica_string tmp41;
  modelica_metatype tmpMeta42;
  static int tmp43 = 0;
  if(!tmp43)
  {
    tmp38 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[226]] /* weaDat.tWetBul_TDryBulXi.XiDryBul variable */),0.0);
    tmp39 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[226]] /* weaDat.tWetBul_TDryBulXi.XiDryBul variable */),1.0);
    if(!(tmp38 && tmp39))
    {
      tmp41 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[226]] /* weaDat.tWetBul_TDryBulXi.XiDryBul variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta42 = stringAppend(MMC_REFSTRINGLIT(tmp40),tmp41);
      {
        const char* assert_cond = "(weaDat.tWetBul_TDryBulXi.XiDryBul >= 0.0 and weaDat.tWetBul_TDryBulXi.XiDryBul <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/Utilities/Psychrometrics/TWetBul_TDryBulPhi.mo",38,3,39,50,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta42));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/Utilities/Psychrometrics/TWetBul_TDryBulPhi.mo",38,3,39,50,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta42));
        }
      }
      tmp43 = 1;
    }
  }
  threadData->lastEquationSolved = 2940;
}

/*
equation index: 2941
type: ALGORITHM

  assert(weaDat.tWetBul_TDryBulXi.XiSat >= 0.0 and weaDat.tWetBul_TDryBulXi.XiSat <= 1.0, "Variable violating min/max constraint: 0.0 <= weaDat.tWetBul_TDryBulXi.XiSat <= 1.0, has value: " + String(weaDat.tWetBul_TDryBulXi.XiSat, "g"));
*/
void ForcedConvection_30s_eqFunction_2941(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2941};
  modelica_boolean tmp44;
  modelica_boolean tmp45;
  static const MMC_DEFSTRINGLIT(tmp46,96,"Variable violating min/max constraint: 0.0 <= weaDat.tWetBul_TDryBulXi.XiSat <= 1.0, has value: ");
  modelica_string tmp47;
  modelica_metatype tmpMeta48;
  static int tmp49 = 0;
  if(!tmp49)
  {
    tmp44 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[227]] /* weaDat.tWetBul_TDryBulXi.XiSat variable */),0.0);
    tmp45 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[227]] /* weaDat.tWetBul_TDryBulXi.XiSat variable */),1.0);
    if(!(tmp44 && tmp45))
    {
      tmp47 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[227]] /* weaDat.tWetBul_TDryBulXi.XiSat variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta48 = stringAppend(MMC_REFSTRINGLIT(tmp46),tmp47);
      {
        const char* assert_cond = "(weaDat.tWetBul_TDryBulXi.XiSat >= 0.0 and weaDat.tWetBul_TDryBulXi.XiSat <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/Utilities/Psychrometrics/TWetBul_TDryBulPhi.mo",40,3,41,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta48));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/Utilities/Psychrometrics/TWetBul_TDryBulPhi.mo",40,3,41,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta48));
        }
      }
      tmp49 = 1;
    }
  }
  threadData->lastEquationSolved = 2941;
}

/*
equation index: 2942
type: ALGORITHM

  assert(weaDat.tWetBul_TDryBulXi.XiSatRefIn >= 0.0 and weaDat.tWetBul_TDryBulXi.XiSatRefIn <= 1.0, "Variable violating min/max constraint: 0.0 <= weaDat.tWetBul_TDryBulXi.XiSatRefIn <= 1.0, has value: " + String(weaDat.tWetBul_TDryBulXi.XiSatRefIn, "g"));
*/
void ForcedConvection_30s_eqFunction_2942(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2942};
  modelica_boolean tmp50;
  modelica_boolean tmp51;
  static const MMC_DEFSTRINGLIT(tmp52,101,"Variable violating min/max constraint: 0.0 <= weaDat.tWetBul_TDryBulXi.XiSatRefIn <= 1.0, has value: ");
  modelica_string tmp53;
  modelica_metatype tmpMeta54;
  static int tmp55 = 0;
  if(!tmp55)
  {
    tmp50 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* weaDat.tWetBul_TDryBulXi.XiSatRefIn variable */),0.0);
    tmp51 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* weaDat.tWetBul_TDryBulXi.XiSatRefIn variable */),1.0);
    if(!(tmp50 && tmp51))
    {
      tmp53 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* weaDat.tWetBul_TDryBulXi.XiSatRefIn variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta54 = stringAppend(MMC_REFSTRINGLIT(tmp52),tmp53);
      {
        const char* assert_cond = "(weaDat.tWetBul_TDryBulXi.XiSatRefIn >= 0.0 and weaDat.tWetBul_TDryBulXi.XiSatRefIn <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/Utilities/Psychrometrics/TWetBul_TDryBulPhi.mo",42,3,43,82,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta54));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/Utilities/Psychrometrics/TWetBul_TDryBulPhi.mo",42,3,43,82,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta54));
        }
      }
      tmp55 = 1;
    }
  }
  threadData->lastEquationSolved = 2942;
}

/*
equation index: 2915
type: ALGORITHM

  assert(roo.ports[1].h_outflow >= -1e10 and roo.ports[1].h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= roo.ports[1].h_outflow <= 1e10, has value: " + String(roo.ports[1].h_outflow, "g"));
*/
void ForcedConvection_30s_eqFunction_2915(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2915};
  modelica_boolean tmp56;
  modelica_boolean tmp57;
  static const MMC_DEFSTRINGLIT(tmp58,91,"Variable violating min/max constraint: -1e10 <= roo.ports[1].h_outflow <= 1e10, has value: ");
  modelica_string tmp59;
  modelica_metatype tmpMeta60;
  static int tmp61 = 0;
  if(!tmp61)
  {
    tmp56 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[156]] /* roo.ports[1].h_outflow variable */),-1e10);
    tmp57 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[156]] /* roo.ports[1].h_outflow variable */),1e10);
    if(!(tmp56 && tmp57))
    {
      tmp59 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[156]] /* roo.ports[1].h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta60 = stringAppend(MMC_REFSTRINGLIT(tmp58),tmp59);
      {
        const char* assert_cond = "(roo.ports[1].h_outflow >= -1e10 and roo.ports[1].h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/cfd/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta60));
        } else {
          FILE_INFO info = {"/home/cfd/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta60));
        }
      }
      tmp61 = 1;
    }
  }
  threadData->lastEquationSolved = 2915;
}

/*
equation index: 2916
type: ALGORITHM

  assert(roo.ports[2].h_outflow >= -1e10 and roo.ports[2].h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= roo.ports[2].h_outflow <= 1e10, has value: " + String(roo.ports[2].h_outflow, "g"));
*/
void ForcedConvection_30s_eqFunction_2916(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2916};
  modelica_boolean tmp62;
  modelica_boolean tmp63;
  static const MMC_DEFSTRINGLIT(tmp64,91,"Variable violating min/max constraint: -1e10 <= roo.ports[2].h_outflow <= 1e10, has value: ");
  modelica_string tmp65;
  modelica_metatype tmpMeta66;
  static int tmp67 = 0;
  if(!tmp67)
  {
    tmp62 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[157]] /* roo.ports[2].h_outflow variable */),-1e10);
    tmp63 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[157]] /* roo.ports[2].h_outflow variable */),1e10);
    if(!(tmp62 && tmp63))
    {
      tmp65 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[157]] /* roo.ports[2].h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta66 = stringAppend(MMC_REFSTRINGLIT(tmp64),tmp65);
      {
        const char* assert_cond = "(roo.ports[2].h_outflow >= -1e10 and roo.ports[2].h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/cfd/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta66));
        } else {
          FILE_INFO info = {"/home/cfd/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta66));
        }
      }
      tmp67 = 1;
    }
  }
  threadData->lastEquationSolved = 2916;
}

/*
equation index: 2917
type: ALGORITHM

  assert(roo.air.cfd.y[7] >= 0.0, "Variable violating min constraint: 0.0 <= roo.air.cfd.y[7], has value: " + String(roo.air.cfd.y[7], "g"));
*/
void ForcedConvection_30s_eqFunction_2917(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2917};
  modelica_boolean tmp68;
  static const MMC_DEFSTRINGLIT(tmp69,71,"Variable violating min constraint: 0.0 <= roo.air.cfd.y[7], has value: ");
  modelica_string tmp70;
  modelica_metatype tmpMeta71;
  static int tmp72 = 0;
  if(!tmp72)
  {
    tmp68 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[288]] /* roo.air.cfd.y[7] DISCRETE */),0.0);
    if(!tmp68)
    {
      tmp70 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[288]] /* roo.air.cfd.y[7] DISCRETE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta71 = stringAppend(MMC_REFSTRINGLIT(tmp69),tmp70);
      {
        const char* assert_cond = "(roo.air.cfd.y[7] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta71));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta71));
        }
      }
      tmp72 = 1;
    }
  }
  threadData->lastEquationSolved = 2917;
}

/*
equation index: 2918
type: ALGORITHM

  assert(roo.air.cfd.y[10] >= 0.0 and roo.air.cfd.y[10] <= 1.0, "Variable violating min/max constraint: 0.0 <= roo.air.cfd.y[10] <= 1.0, has value: " + String(roo.air.cfd.y[10], "g"));
*/
void ForcedConvection_30s_eqFunction_2918(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2918};
  modelica_boolean tmp73;
  modelica_boolean tmp74;
  static const MMC_DEFSTRINGLIT(tmp75,83,"Variable violating min/max constraint: 0.0 <= roo.air.cfd.y[10] <= 1.0, has value: ");
  modelica_string tmp76;
  modelica_metatype tmpMeta77;
  static int tmp78 = 0;
  if(!tmp78)
  {
    tmp73 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[291]] /* roo.air.cfd.y[10] DISCRETE */),0.0);
    tmp74 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[291]] /* roo.air.cfd.y[10] DISCRETE */),1.0);
    if(!(tmp73 && tmp74))
    {
      tmp76 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[291]] /* roo.air.cfd.y[10] DISCRETE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta77 = stringAppend(MMC_REFSTRINGLIT(tmp75),tmp76);
      {
        const char* assert_cond = "(roo.air.cfd.y[10] >= 0.0 and roo.air.cfd.y[10] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta77));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta77));
        }
      }
      tmp78 = 1;
    }
  }
  threadData->lastEquationSolved = 2918;
}

/*
equation index: 2919
type: ALGORITHM

  assert(roo.air.cfd.y[11] >= 0.0 and roo.air.cfd.y[11] <= 1.0, "Variable violating min/max constraint: 0.0 <= roo.air.cfd.y[11] <= 1.0, has value: " + String(roo.air.cfd.y[11], "g"));
*/
void ForcedConvection_30s_eqFunction_2919(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2919};
  modelica_boolean tmp79;
  modelica_boolean tmp80;
  static const MMC_DEFSTRINGLIT(tmp81,83,"Variable violating min/max constraint: 0.0 <= roo.air.cfd.y[11] <= 1.0, has value: ");
  modelica_string tmp82;
  modelica_metatype tmpMeta83;
  static int tmp84 = 0;
  if(!tmp84)
  {
    tmp79 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[292]] /* roo.air.cfd.y[11] DISCRETE */),0.0);
    tmp80 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[292]] /* roo.air.cfd.y[11] DISCRETE */),1.0);
    if(!(tmp79 && tmp80))
    {
      tmp82 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[292]] /* roo.air.cfd.y[11] DISCRETE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta83 = stringAppend(MMC_REFSTRINGLIT(tmp81),tmp82);
      {
        const char* assert_cond = "(roo.air.cfd.y[11] >= 0.0 and roo.air.cfd.y[11] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta83));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta83));
        }
      }
      tmp84 = 1;
    }
  }
  threadData->lastEquationSolved = 2919;
}

/*
equation index: 2920
type: ALGORITHM

  assert(roo.irRadGai.JOutConExtWin[1] >= 0.0, "Variable violating min constraint: 0.0 <= roo.irRadGai.JOutConExtWin[1], has value: " + String(roo.irRadGai.JOutConExtWin[1], "g"));
*/
void ForcedConvection_30s_eqFunction_2920(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2920};
  modelica_boolean tmp85;
  static const MMC_DEFSTRINGLIT(tmp86,84,"Variable violating min constraint: 0.0 <= roo.irRadGai.JOutConExtWin[1], has value: ");
  modelica_string tmp87;
  modelica_metatype tmpMeta88;
  static int tmp89 = 0;
  if(!tmp89)
  {
    tmp85 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[119]] /* roo.irRadGai.JOutConExtWin[1] variable */),0.0);
    if(!tmp85)
    {
      tmp87 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[119]] /* roo.irRadGai.JOutConExtWin[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta88 = stringAppend(MMC_REFSTRINGLIT(tmp86),tmp87);
      {
        const char* assert_cond = "(roo.irRadGai.JOutConExtWin[1] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationGainDistribution.mo",19,3,21,73,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta88));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationGainDistribution.mo",19,3,21,73,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta88));
        }
      }
      tmp89 = 1;
    }
  }
  threadData->lastEquationSolved = 2920;
}

/*
equation index: 2921
type: ALGORITHM

  assert(roo.irRadExc.J[1] <= 0.0, "Variable violating max constraint: roo.irRadExc.J[1] <= 0.0, has value: " + String(roo.irRadExc.J[1], "g"));
*/
void ForcedConvection_30s_eqFunction_2921(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2921};
  modelica_boolean tmp90;
  static const MMC_DEFSTRINGLIT(tmp91,72,"Variable violating max constraint: roo.irRadExc.J[1] <= 0.0, has value: ");
  modelica_string tmp92;
  modelica_metatype tmpMeta93;
  static int tmp94 = 0;
  if(!tmp94)
  {
    tmp90 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[91]] /* roo.irRadExc.J[1] variable */),0.0);
    if(!tmp90)
    {
      tmp92 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[91]] /* roo.irRadExc.J[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta93 = stringAppend(MMC_REFSTRINGLIT(tmp91),tmp92);
      {
        const char* assert_cond = "(roo.irRadExc.J[1] <= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",63,3,68,36,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta93));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",63,3,68,36,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta93));
        }
      }
      tmp94 = 1;
    }
  }
  threadData->lastEquationSolved = 2921;
}

/*
equation index: 2922
type: ALGORITHM

  assert(roo.irRadExc.J[2] <= 0.0, "Variable violating max constraint: roo.irRadExc.J[2] <= 0.0, has value: " + String(roo.irRadExc.J[2], "g"));
*/
void ForcedConvection_30s_eqFunction_2922(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2922};
  modelica_boolean tmp95;
  static const MMC_DEFSTRINGLIT(tmp96,72,"Variable violating max constraint: roo.irRadExc.J[2] <= 0.0, has value: ");
  modelica_string tmp97;
  modelica_metatype tmpMeta98;
  static int tmp99 = 0;
  if(!tmp99)
  {
    tmp95 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[92]] /* roo.irRadExc.J[2] variable */),0.0);
    if(!tmp95)
    {
      tmp97 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[92]] /* roo.irRadExc.J[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta98 = stringAppend(MMC_REFSTRINGLIT(tmp96),tmp97);
      {
        const char* assert_cond = "(roo.irRadExc.J[2] <= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",63,3,68,36,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta98));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",63,3,68,36,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta98));
        }
      }
      tmp99 = 1;
    }
  }
  threadData->lastEquationSolved = 2922;
}

/*
equation index: 2923
type: ALGORITHM

  assert(roo.irRadExc.J[3] <= 0.0, "Variable violating max constraint: roo.irRadExc.J[3] <= 0.0, has value: " + String(roo.irRadExc.J[3], "g"));
*/
void ForcedConvection_30s_eqFunction_2923(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2923};
  modelica_boolean tmp100;
  static const MMC_DEFSTRINGLIT(tmp101,72,"Variable violating max constraint: roo.irRadExc.J[3] <= 0.0, has value: ");
  modelica_string tmp102;
  modelica_metatype tmpMeta103;
  static int tmp104 = 0;
  if(!tmp104)
  {
    tmp100 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[93]] /* roo.irRadExc.J[3] variable */),0.0);
    if(!tmp100)
    {
      tmp102 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[93]] /* roo.irRadExc.J[3] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta103 = stringAppend(MMC_REFSTRINGLIT(tmp101),tmp102);
      {
        const char* assert_cond = "(roo.irRadExc.J[3] <= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",63,3,68,36,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta103));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",63,3,68,36,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta103));
        }
      }
      tmp104 = 1;
    }
  }
  threadData->lastEquationSolved = 2923;
}

/*
equation index: 2924
type: ALGORITHM

  assert(roo.irRadExc.J[4] <= 0.0, "Variable violating max constraint: roo.irRadExc.J[4] <= 0.0, has value: " + String(roo.irRadExc.J[4], "g"));
*/
void ForcedConvection_30s_eqFunction_2924(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2924};
  modelica_boolean tmp105;
  static const MMC_DEFSTRINGLIT(tmp106,72,"Variable violating max constraint: roo.irRadExc.J[4] <= 0.0, has value: ");
  modelica_string tmp107;
  modelica_metatype tmpMeta108;
  static int tmp109 = 0;
  if(!tmp109)
  {
    tmp105 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[94]] /* roo.irRadExc.J[4] variable */),0.0);
    if(!tmp105)
    {
      tmp107 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[94]] /* roo.irRadExc.J[4] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta108 = stringAppend(MMC_REFSTRINGLIT(tmp106),tmp107);
      {
        const char* assert_cond = "(roo.irRadExc.J[4] <= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",63,3,68,36,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta108));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",63,3,68,36,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta108));
        }
      }
      tmp109 = 1;
    }
  }
  threadData->lastEquationSolved = 2924;
}

/*
equation index: 2925
type: ALGORITHM

  assert(roo.irRadExc.J[5] <= 0.0, "Variable violating max constraint: roo.irRadExc.J[5] <= 0.0, has value: " + String(roo.irRadExc.J[5], "g"));
*/
void ForcedConvection_30s_eqFunction_2925(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2925};
  modelica_boolean tmp110;
  static const MMC_DEFSTRINGLIT(tmp111,72,"Variable violating max constraint: roo.irRadExc.J[5] <= 0.0, has value: ");
  modelica_string tmp112;
  modelica_metatype tmpMeta113;
  static int tmp114 = 0;
  if(!tmp114)
  {
    tmp110 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[95]] /* roo.irRadExc.J[5] variable */),0.0);
    if(!tmp110)
    {
      tmp112 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[95]] /* roo.irRadExc.J[5] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta113 = stringAppend(MMC_REFSTRINGLIT(tmp111),tmp112);
      {
        const char* assert_cond = "(roo.irRadExc.J[5] <= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",63,3,68,36,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta113));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",63,3,68,36,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta113));
        }
      }
      tmp114 = 1;
    }
  }
  threadData->lastEquationSolved = 2925;
}

/*
equation index: 2926
type: ALGORITHM

  assert(roo.irRadExc.J[6] <= 0.0, "Variable violating max constraint: roo.irRadExc.J[6] <= 0.0, has value: " + String(roo.irRadExc.J[6], "g"));
*/
void ForcedConvection_30s_eqFunction_2926(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2926};
  modelica_boolean tmp115;
  static const MMC_DEFSTRINGLIT(tmp116,72,"Variable violating max constraint: roo.irRadExc.J[6] <= 0.0, has value: ");
  modelica_string tmp117;
  modelica_metatype tmpMeta118;
  static int tmp119 = 0;
  if(!tmp119)
  {
    tmp115 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[96]] /* roo.irRadExc.J[6] variable */),0.0);
    if(!tmp115)
    {
      tmp117 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[96]] /* roo.irRadExc.J[6] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta118 = stringAppend(MMC_REFSTRINGLIT(tmp116),tmp117);
      {
        const char* assert_cond = "(roo.irRadExc.J[6] <= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",63,3,68,36,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta118));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",63,3,68,36,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta118));
        }
      }
      tmp119 = 1;
    }
  }
  threadData->lastEquationSolved = 2926;
}

/*
equation index: 2927
type: ALGORITHM

  assert(roo.irRadExc.G[1] >= 0.0, "Variable violating min constraint: 0.0 <= roo.irRadExc.G[1], has value: " + String(roo.irRadExc.G[1], "g"));
*/
void ForcedConvection_30s_eqFunction_2927(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2927};
  modelica_boolean tmp120;
  static const MMC_DEFSTRINGLIT(tmp121,72,"Variable violating min constraint: 0.0 <= roo.irRadExc.G[1], has value: ");
  modelica_string tmp122;
  modelica_metatype tmpMeta123;
  static int tmp124 = 0;
  if(!tmp124)
  {
    tmp120 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[85]] /* roo.irRadExc.G[1] variable */),0.0);
    if(!tmp120)
    {
      tmp122 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[85]] /* roo.irRadExc.G[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta123 = stringAppend(MMC_REFSTRINGLIT(tmp121),tmp122);
      {
        const char* assert_cond = "(roo.irRadExc.G[1] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",70,3,74,37,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta123));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",70,3,74,37,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta123));
        }
      }
      tmp124 = 1;
    }
  }
  threadData->lastEquationSolved = 2927;
}

/*
equation index: 2928
type: ALGORITHM

  assert(roo.irRadExc.G[2] >= 0.0, "Variable violating min constraint: 0.0 <= roo.irRadExc.G[2], has value: " + String(roo.irRadExc.G[2], "g"));
*/
void ForcedConvection_30s_eqFunction_2928(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2928};
  modelica_boolean tmp125;
  static const MMC_DEFSTRINGLIT(tmp126,72,"Variable violating min constraint: 0.0 <= roo.irRadExc.G[2], has value: ");
  modelica_string tmp127;
  modelica_metatype tmpMeta128;
  static int tmp129 = 0;
  if(!tmp129)
  {
    tmp125 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[86]] /* roo.irRadExc.G[2] variable */),0.0);
    if(!tmp125)
    {
      tmp127 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[86]] /* roo.irRadExc.G[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta128 = stringAppend(MMC_REFSTRINGLIT(tmp126),tmp127);
      {
        const char* assert_cond = "(roo.irRadExc.G[2] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",70,3,74,37,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta128));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",70,3,74,37,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta128));
        }
      }
      tmp129 = 1;
    }
  }
  threadData->lastEquationSolved = 2928;
}

/*
equation index: 2929
type: ALGORITHM

  assert(roo.irRadExc.G[3] >= 0.0, "Variable violating min constraint: 0.0 <= roo.irRadExc.G[3], has value: " + String(roo.irRadExc.G[3], "g"));
*/
void ForcedConvection_30s_eqFunction_2929(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2929};
  modelica_boolean tmp130;
  static const MMC_DEFSTRINGLIT(tmp131,72,"Variable violating min constraint: 0.0 <= roo.irRadExc.G[3], has value: ");
  modelica_string tmp132;
  modelica_metatype tmpMeta133;
  static int tmp134 = 0;
  if(!tmp134)
  {
    tmp130 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[87]] /* roo.irRadExc.G[3] variable */),0.0);
    if(!tmp130)
    {
      tmp132 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[87]] /* roo.irRadExc.G[3] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta133 = stringAppend(MMC_REFSTRINGLIT(tmp131),tmp132);
      {
        const char* assert_cond = "(roo.irRadExc.G[3] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",70,3,74,37,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta133));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",70,3,74,37,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta133));
        }
      }
      tmp134 = 1;
    }
  }
  threadData->lastEquationSolved = 2929;
}

/*
equation index: 2930
type: ALGORITHM

  assert(roo.irRadExc.G[4] >= 0.0, "Variable violating min constraint: 0.0 <= roo.irRadExc.G[4], has value: " + String(roo.irRadExc.G[4], "g"));
*/
void ForcedConvection_30s_eqFunction_2930(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2930};
  modelica_boolean tmp135;
  static const MMC_DEFSTRINGLIT(tmp136,72,"Variable violating min constraint: 0.0 <= roo.irRadExc.G[4], has value: ");
  modelica_string tmp137;
  modelica_metatype tmpMeta138;
  static int tmp139 = 0;
  if(!tmp139)
  {
    tmp135 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* roo.irRadExc.G[4] variable */),0.0);
    if(!tmp135)
    {
      tmp137 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* roo.irRadExc.G[4] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta138 = stringAppend(MMC_REFSTRINGLIT(tmp136),tmp137);
      {
        const char* assert_cond = "(roo.irRadExc.G[4] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",70,3,74,37,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta138));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",70,3,74,37,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta138));
        }
      }
      tmp139 = 1;
    }
  }
  threadData->lastEquationSolved = 2930;
}

/*
equation index: 2931
type: ALGORITHM

  assert(roo.irRadExc.G[5] >= 0.0, "Variable violating min constraint: 0.0 <= roo.irRadExc.G[5], has value: " + String(roo.irRadExc.G[5], "g"));
*/
void ForcedConvection_30s_eqFunction_2931(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2931};
  modelica_boolean tmp140;
  static const MMC_DEFSTRINGLIT(tmp141,72,"Variable violating min constraint: 0.0 <= roo.irRadExc.G[5], has value: ");
  modelica_string tmp142;
  modelica_metatype tmpMeta143;
  static int tmp144 = 0;
  if(!tmp144)
  {
    tmp140 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[89]] /* roo.irRadExc.G[5] variable */),0.0);
    if(!tmp140)
    {
      tmp142 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[89]] /* roo.irRadExc.G[5] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta143 = stringAppend(MMC_REFSTRINGLIT(tmp141),tmp142);
      {
        const char* assert_cond = "(roo.irRadExc.G[5] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",70,3,74,37,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta143));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",70,3,74,37,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta143));
        }
      }
      tmp144 = 1;
    }
  }
  threadData->lastEquationSolved = 2931;
}

/*
equation index: 2932
type: ALGORITHM

  assert(roo.irRadExc.G[6] >= 0.0, "Variable violating min constraint: 0.0 <= roo.irRadExc.G[6], has value: " + String(roo.irRadExc.G[6], "g"));
*/
void ForcedConvection_30s_eqFunction_2932(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2932};
  modelica_boolean tmp145;
  static const MMC_DEFSTRINGLIT(tmp146,72,"Variable violating min constraint: 0.0 <= roo.irRadExc.G[6], has value: ");
  modelica_string tmp147;
  modelica_metatype tmpMeta148;
  static int tmp149 = 0;
  if(!tmp149)
  {
    tmp145 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[90]] /* roo.irRadExc.G[6] variable */),0.0);
    if(!tmp145)
    {
      tmp147 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[90]] /* roo.irRadExc.G[6] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta148 = stringAppend(MMC_REFSTRINGLIT(tmp146),tmp147);
      {
        const char* assert_cond = "(roo.irRadExc.G[6] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",70,3,74,37,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta148));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",70,3,74,37,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta148));
        }
      }
      tmp149 = 1;
    }
  }
  threadData->lastEquationSolved = 2932;
}

/*
equation index: 2914
type: ALGORITHM

  assert(roo.heaPorRad.T >= 0.0, "Variable violating min constraint: 0.0 <= roo.heaPorRad.T, has value: " + String(roo.heaPorRad.T, "g"));
*/
void ForcedConvection_30s_eqFunction_2914(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2914};
  modelica_boolean tmp150;
  static const MMC_DEFSTRINGLIT(tmp151,70,"Variable violating min constraint: 0.0 <= roo.heaPorRad.T, has value: ");
  modelica_string tmp152;
  modelica_metatype tmpMeta153;
  static int tmp154 = 0;
  if(!tmp154)
  {
    tmp150 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[84]] /* roo.heaPorRad.T variable */),0.0);
    if(!tmp150)
    {
      tmp152 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[84]] /* roo.heaPorRad.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta153 = stringAppend(MMC_REFSTRINGLIT(tmp151),tmp152);
      {
        const char* assert_cond = "(roo.heaPorRad.T >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/cfd/.openmodelica/libraries/Modelica 4.0.0+maint.om/Thermal/HeatTransfer/Interfaces/HeatPort.mo",3,3,3,38,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta153));
        } else {
          FILE_INFO info = {"/home/cfd/.openmodelica/libraries/Modelica 4.0.0+maint.om/Thermal/HeatTransfer/Interfaces/HeatPort.mo",3,3,3,38,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta153));
        }
      }
      tmp154 = 1;
    }
  }
  threadData->lastEquationSolved = 2914;
}

/*
equation index: 2913
type: ALGORITHM

  assert(roo.air.cfd.u[12] >= 200.0 and roo.air.cfd.u[12] <= 373.15, "Variable violating min/max constraint: 200.0 <= roo.air.cfd.u[12] <= 373.15, has value: " + String(roo.air.cfd.u[12], "g"));
*/
void ForcedConvection_30s_eqFunction_2913(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2913};
  modelica_boolean tmp155;
  modelica_boolean tmp156;
  static const MMC_DEFSTRINGLIT(tmp157,88,"Variable violating min/max constraint: 200.0 <= roo.air.cfd.u[12] <= 373.15, has value: ");
  modelica_string tmp158;
  modelica_metatype tmpMeta159;
  static int tmp160 = 0;
  if(!tmp160)
  {
    tmp155 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[69]] /* roo.air.cfd.u[12] variable */),200.0);
    tmp156 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[69]] /* roo.air.cfd.u[12] variable */),373.15);
    if(!(tmp155 && tmp156))
    {
      tmp158 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[69]] /* roo.air.cfd.u[12] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta159 = stringAppend(MMC_REFSTRINGLIT(tmp157),tmp158);
      {
        const char* assert_cond = "(roo.air.cfd.u[12] >= 200.0 and roo.air.cfd.u[12] <= 373.15)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta159));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta159));
        }
      }
      tmp160 = 1;
    }
  }
  threadData->lastEquationSolved = 2913;
}

/*
equation index: 2912
type: ALGORITHM

  assert(roo.air.cfd.u[13] >= 200.0 and roo.air.cfd.u[13] <= 373.15, "Variable violating min/max constraint: 200.0 <= roo.air.cfd.u[13] <= 373.15, has value: " + String(roo.air.cfd.u[13], "g"));
*/
void ForcedConvection_30s_eqFunction_2912(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2912};
  modelica_boolean tmp161;
  modelica_boolean tmp162;
  static const MMC_DEFSTRINGLIT(tmp163,88,"Variable violating min/max constraint: 200.0 <= roo.air.cfd.u[13] <= 373.15, has value: ");
  modelica_string tmp164;
  modelica_metatype tmpMeta165;
  static int tmp166 = 0;
  if(!tmp166)
  {
    tmp161 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[70]] /* roo.air.cfd.u[13] variable */),200.0);
    tmp162 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[70]] /* roo.air.cfd.u[13] variable */),373.15);
    if(!(tmp161 && tmp162))
    {
      tmp164 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[70]] /* roo.air.cfd.u[13] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta165 = stringAppend(MMC_REFSTRINGLIT(tmp163),tmp164);
      {
        const char* assert_cond = "(roo.air.cfd.u[13] >= 200.0 and roo.air.cfd.u[13] <= 373.15)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta165));
        } else {
          FILE_INFO info = {"/workspace/external/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta165));
        }
      }
      tmp166 = 1;
    }
  }
  threadData->lastEquationSolved = 2912;
}

/*
equation index: 2911
type: ALGORITHM

  assert(bouOut.ports[1].h_outflow >= -1e10 and bouOut.ports[1].h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= bouOut.ports[1].h_outflow <= 1e10, has value: " + String(bouOut.ports[1].h_outflow, "g"));
*/
void ForcedConvection_30s_eqFunction_2911(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2911};
  modelica_boolean tmp167;
  modelica_boolean tmp168;
  static const MMC_DEFSTRINGLIT(tmp169,94,"Variable violating min/max constraint: -1e10 <= bouOut.ports[1].h_outflow <= 1e10, has value: ");
  modelica_string tmp170;
  modelica_metatype tmpMeta171;
  static int tmp172 = 0;
  if(!tmp172)
  {
    tmp167 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[53]] /* bouOut.ports[1].h_outflow variable */),-1e10);
    tmp168 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[53]] /* bouOut.ports[1].h_outflow variable */),1e10);
    if(!(tmp167 && tmp168))
    {
      tmp170 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[53]] /* bouOut.ports[1].h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta171 = stringAppend(MMC_REFSTRINGLIT(tmp169),tmp170);
      {
        const char* assert_cond = "(bouOut.ports[1].h_outflow >= -1e10 and bouOut.ports[1].h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/cfd/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta171));
        } else {
          FILE_INFO info = {"/home/cfd/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta171));
        }
      }
      tmp172 = 1;
    }
  }
  threadData->lastEquationSolved = 2911;
}

/*
equation index: 2910
type: ALGORITHM

  assert(bounIn.ports[1].h_outflow >= -1e10 and bounIn.ports[1].h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= bounIn.ports[1].h_outflow <= 1e10, has value: " + String(bounIn.ports[1].h_outflow, "g"));
*/
void ForcedConvection_30s_eqFunction_2910(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2910};
  modelica_boolean tmp173;
  modelica_boolean tmp174;
  static const MMC_DEFSTRINGLIT(tmp175,94,"Variable violating min/max constraint: -1e10 <= bounIn.ports[1].h_outflow <= 1e10, has value: ");
  modelica_string tmp176;
  modelica_metatype tmpMeta177;
  static int tmp178 = 0;
  if(!tmp178)
  {
    tmp173 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[56]] /* bounIn.ports[1].h_outflow variable */),-1e10);
    tmp174 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[56]] /* bounIn.ports[1].h_outflow variable */),1e10);
    if(!(tmp173 && tmp174))
    {
      tmp176 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[56]] /* bounIn.ports[1].h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta177 = stringAppend(MMC_REFSTRINGLIT(tmp175),tmp176);
      {
        const char* assert_cond = "(bounIn.ports[1].h_outflow >= -1e10 and bounIn.ports[1].h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/cfd/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta177));
        } else {
          FILE_INFO info = {"/home/cfd/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta177));
        }
      }
      tmp178 = 1;
    }
  }
  threadData->lastEquationSolved = 2910;
}
/* function to check assert after a step is done */
OMC_DISABLE_OPT
int ForcedConvection_30s_checkForAsserts(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[33])(DATA*, threadData_t*) = {
    ForcedConvection_30s_eqFunction_2933,
    ForcedConvection_30s_eqFunction_2934,
    ForcedConvection_30s_eqFunction_2935,
    ForcedConvection_30s_eqFunction_2936,
    ForcedConvection_30s_eqFunction_2937,
    ForcedConvection_30s_eqFunction_2938,
    ForcedConvection_30s_eqFunction_2939,
    ForcedConvection_30s_eqFunction_2940,
    ForcedConvection_30s_eqFunction_2941,
    ForcedConvection_30s_eqFunction_2942,
    ForcedConvection_30s_eqFunction_2915,
    ForcedConvection_30s_eqFunction_2916,
    ForcedConvection_30s_eqFunction_2917,
    ForcedConvection_30s_eqFunction_2918,
    ForcedConvection_30s_eqFunction_2919,
    ForcedConvection_30s_eqFunction_2920,
    ForcedConvection_30s_eqFunction_2921,
    ForcedConvection_30s_eqFunction_2922,
    ForcedConvection_30s_eqFunction_2923,
    ForcedConvection_30s_eqFunction_2924,
    ForcedConvection_30s_eqFunction_2925,
    ForcedConvection_30s_eqFunction_2926,
    ForcedConvection_30s_eqFunction_2927,
    ForcedConvection_30s_eqFunction_2928,
    ForcedConvection_30s_eqFunction_2929,
    ForcedConvection_30s_eqFunction_2930,
    ForcedConvection_30s_eqFunction_2931,
    ForcedConvection_30s_eqFunction_2932,
    ForcedConvection_30s_eqFunction_2914,
    ForcedConvection_30s_eqFunction_2913,
    ForcedConvection_30s_eqFunction_2912,
    ForcedConvection_30s_eqFunction_2911,
    ForcedConvection_30s_eqFunction_2910
  };
  
  for (int id = 0; id < 33; id++) {
    eqFunctions[id](data, threadData);
  }
  
  return 0;
}

#if defined(__cplusplus)
}
#endif
