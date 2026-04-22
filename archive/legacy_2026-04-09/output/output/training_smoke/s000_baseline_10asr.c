/* Asserts */
#include "s000_baseline_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 4930
type: ALGORITHM

  assert(dc.weaDat.weaBus.TDryBul >= 0.0, "Variable violating min constraint: 0.0 <= dc.weaDat.weaBus.TDryBul, has value: " + String(dc.weaDat.weaBus.TDryBul, "g"));
*/
void s000_baseline_eqFunction_4930(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4930};
  modelica_boolean tmp0;
  static const MMC_DEFSTRINGLIT(tmp1,79,"Variable violating min constraint: 0.0 <= dc.weaDat.weaBus.TDryBul, has value: ");
  modelica_string tmp2;
  modelica_metatype tmpMeta3;
  static int tmp4 = 0;
  if(!tmp4)
  {
    tmp0 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[427]] /* dc.weaDat.weaBus.TDryBul variable */),0.0);
    if(!tmp0)
    {
      tmp2 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[427]] /* dc.weaDat.weaBus.TDryBul variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3 = stringAppend(MMC_REFSTRINGLIT(tmp1),tmp2);
      {
        const char* assert_cond = "(dc.weaDat.weaBus.TDryBul >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",737,3,742,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",737,3,742,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3));
        }
      }
      tmp4 = 1;
    }
  }
  threadData->lastEquationSolved = 4930;
}

/*
equation index: 4931
type: ALGORITHM

  assert(dc.weaDat.weaBus.relHum >= 0.0 and dc.weaDat.weaBus.relHum <= 1.0, "Variable violating min/max constraint: 0.0 <= dc.weaDat.weaBus.relHum <= 1.0, has value: " + String(dc.weaDat.weaBus.relHum, "g"));
*/
void s000_baseline_eqFunction_4931(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4931};
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  static const MMC_DEFSTRINGLIT(tmp7,89,"Variable violating min/max constraint: 0.0 <= dc.weaDat.weaBus.relHum <= 1.0, has value: ");
  modelica_string tmp8;
  modelica_metatype tmpMeta9;
  static int tmp10 = 0;
  if(!tmp10)
  {
    tmp5 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[433]] /* dc.weaDat.weaBus.relHum variable */),0.0);
    tmp6 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[433]] /* dc.weaDat.weaBus.relHum variable */),1.0);
    if(!(tmp5 && tmp6))
    {
      tmp8 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[433]] /* dc.weaDat.weaBus.relHum variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta9 = stringAppend(MMC_REFSTRINGLIT(tmp7),tmp8);
      {
        const char* assert_cond = "(dc.weaDat.weaBus.relHum >= 0.0 and dc.weaDat.weaBus.relHum <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",757,3,761,29,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta9));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",757,3,761,29,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta9));
        }
      }
      tmp10 = 1;
    }
  }
  threadData->lastEquationSolved = 4931;
}

/*
equation index: 4932
type: ALGORITHM

  assert(dc.weaDat.weaBus.HHorIR >= 0.0, "Variable violating min constraint: 0.0 <= dc.weaDat.weaBus.HHorIR, has value: " + String(dc.weaDat.weaBus.HHorIR, "g"));
*/
void s000_baseline_eqFunction_4932(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4932};
  modelica_boolean tmp11;
  static const MMC_DEFSTRINGLIT(tmp12,78,"Variable violating min constraint: 0.0 <= dc.weaDat.weaBus.HHorIR, has value: ");
  modelica_string tmp13;
  modelica_metatype tmpMeta14;
  static int tmp15 = 0;
  if(!tmp15)
  {
    tmp11 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[424]] /* dc.weaDat.weaBus.HHorIR variable */),0.0);
    if(!tmp11)
    {
      tmp13 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[424]] /* dc.weaDat.weaBus.HHorIR variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta14 = stringAppend(MMC_REFSTRINGLIT(tmp12),tmp13);
      {
        const char* assert_cond = "(dc.weaDat.weaBus.HHorIR >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",790,3,795,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta14));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",790,3,795,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta14));
        }
      }
      tmp15 = 1;
    }
  }
  threadData->lastEquationSolved = 4932;
}

/*
equation index: 4933
type: ALGORITHM

  assert(dc.weaDat.weaBus.nOpa >= 0.0 and dc.weaDat.weaBus.nOpa <= 1.0, "Variable violating min/max constraint: 0.0 <= dc.weaDat.weaBus.nOpa <= 1.0, has value: " + String(dc.weaDat.weaBus.nOpa, "g"));
*/
void s000_baseline_eqFunction_4933(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4933};
  modelica_boolean tmp16;
  modelica_boolean tmp17;
  static const MMC_DEFSTRINGLIT(tmp18,87,"Variable violating min/max constraint: 0.0 <= dc.weaDat.weaBus.nOpa <= 1.0, has value: ");
  modelica_string tmp19;
  modelica_metatype tmpMeta20;
  static int tmp21 = 0;
  if(!tmp21)
  {
    tmp16 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[431]] /* dc.weaDat.weaBus.nOpa variable */),0.0);
    tmp17 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[431]] /* dc.weaDat.weaBus.nOpa variable */),1.0);
    if(!(tmp16 && tmp17))
    {
      tmp19 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[431]] /* dc.weaDat.weaBus.nOpa variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta20 = stringAppend(MMC_REFSTRINGLIT(tmp18),tmp19);
      {
        const char* assert_cond = "(dc.weaDat.weaBus.nOpa >= 0.0 and dc.weaDat.weaBus.nOpa <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",822,3,826,29,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta20));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",822,3,826,29,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta20));
        }
      }
      tmp21 = 1;
    }
  }
  threadData->lastEquationSolved = 4933;
}

/*
equation index: 4934
type: ALGORITHM

  assert(dc.weaDat.weaBus.TWetBul >= 0.0, "Variable violating min constraint: 0.0 <= dc.weaDat.weaBus.TWetBul, has value: " + String(dc.weaDat.weaBus.TWetBul, "g"));
*/
void s000_baseline_eqFunction_4934(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4934};
  modelica_boolean tmp22;
  static const MMC_DEFSTRINGLIT(tmp23,79,"Variable violating min constraint: 0.0 <= dc.weaDat.weaBus.TWetBul, has value: ");
  modelica_string tmp24;
  modelica_metatype tmpMeta25;
  static int tmp26 = 0;
  if(!tmp26)
  {
    tmp22 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[428]] /* dc.weaDat.weaBus.TWetBul variable */),0.0);
    if(!tmp22)
    {
      tmp24 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[428]] /* dc.weaDat.weaBus.TWetBul variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta25 = stringAppend(MMC_REFSTRINGLIT(tmp23),tmp24);
      {
        const char* assert_cond = "(dc.weaDat.weaBus.TWetBul >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",750,3,755,29,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta25));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/WeatherData/ReaderTMY3.mo",750,3,755,29,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta25));
        }
      }
      tmp26 = 1;
    }
  }
  threadData->lastEquationSolved = 4934;
}

/*
equation index: 4935
type: ALGORITHM

  assert(dc.weaDat.TBlaSkyCom.TDewPoiK >= 0.0, "Variable violating min constraint: 0.0 <= dc.weaDat.TBlaSkyCom.TDewPoiK, has value: " + String(dc.weaDat.TBlaSkyCom.TDewPoiK, "g"));
*/
void s000_baseline_eqFunction_4935(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4935};
  modelica_boolean tmp27;
  static const MMC_DEFSTRINGLIT(tmp28,84,"Variable violating min constraint: 0.0 <= dc.weaDat.TBlaSkyCom.TDewPoiK, has value: ");
  modelica_string tmp29;
  modelica_metatype tmpMeta30;
  static int tmp31 = 0;
  if(!tmp31)
  {
    tmp27 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[373]] /* dc.weaDat.TBlaSkyCom.TDewPoiK variable */),0.0);
    if(!tmp27)
    {
      tmp29 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[373]] /* dc.weaDat.TBlaSkyCom.TDewPoiK variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta30 = stringAppend(MMC_REFSTRINGLIT(tmp28),tmp29);
      {
        const char* assert_cond = "(dc.weaDat.TBlaSkyCom.TDewPoiK >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/SkyTemperature/BlackBody.mo",34,3,34,64,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta30));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/SkyTemperature/BlackBody.mo",34,3,34,64,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta30));
        }
      }
      tmp31 = 1;
    }
  }
  threadData->lastEquationSolved = 4935;
}

/*
equation index: 4936
type: ALGORITHM

  assert(dc.weaDat.TBlaSkyCom.nOpa10 >= 0.0 and dc.weaDat.TBlaSkyCom.nOpa10 <= 10.0, "Variable violating min/max constraint: 0.0 <= dc.weaDat.TBlaSkyCom.nOpa10 <= 10.0, has value: " + String(dc.weaDat.TBlaSkyCom.nOpa10, "g"));
*/
void s000_baseline_eqFunction_4936(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4936};
  modelica_boolean tmp32;
  modelica_boolean tmp33;
  static const MMC_DEFSTRINGLIT(tmp34,94,"Variable violating min/max constraint: 0.0 <= dc.weaDat.TBlaSkyCom.nOpa10 <= 10.0, has value: ");
  modelica_string tmp35;
  modelica_metatype tmpMeta36;
  static int tmp37 = 0;
  if(!tmp37)
  {
    tmp32 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[375]] /* dc.weaDat.TBlaSkyCom.nOpa10 variable */),0.0);
    tmp33 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[375]] /* dc.weaDat.TBlaSkyCom.nOpa10 variable */),10.0);
    if(!(tmp32 && tmp33))
    {
      tmp35 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[375]] /* dc.weaDat.TBlaSkyCom.nOpa10 variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta36 = stringAppend(MMC_REFSTRINGLIT(tmp34),tmp35);
      {
        const char* assert_cond = "(dc.weaDat.TBlaSkyCom.nOpa10 >= 0.0 and dc.weaDat.TBlaSkyCom.nOpa10 <= 10.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/SkyTemperature/BlackBody.mo",36,3,36,59,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta36));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/BoundaryConditions/SkyTemperature/BlackBody.mo",36,3,36,59,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta36));
        }
      }
      tmp37 = 1;
    }
  }
  threadData->lastEquationSolved = 4936;
}

/*
equation index: 4937
type: ALGORITHM

  assert(dc.weaDat.tWetBul_TDryBulXi.XiDryBul >= 0.0 and dc.weaDat.tWetBul_TDryBulXi.XiDryBul <= 1.0, "Variable violating min/max constraint: 0.0 <= dc.weaDat.tWetBul_TDryBulXi.XiDryBul <= 1.0, has value: " + String(dc.weaDat.tWetBul_TDryBulXi.XiDryBul, "g"));
*/
void s000_baseline_eqFunction_4937(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4937};
  modelica_boolean tmp38;
  modelica_boolean tmp39;
  static const MMC_DEFSTRINGLIT(tmp40,102,"Variable violating min/max constraint: 0.0 <= dc.weaDat.tWetBul_TDryBulXi.XiDryBul <= 1.0, has value: ");
  modelica_string tmp41;
  modelica_metatype tmpMeta42;
  static int tmp43 = 0;
  if(!tmp43)
  {
    tmp38 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[416]] /* dc.weaDat.tWetBul_TDryBulXi.XiDryBul variable */),0.0);
    tmp39 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[416]] /* dc.weaDat.tWetBul_TDryBulXi.XiDryBul variable */),1.0);
    if(!(tmp38 && tmp39))
    {
      tmp41 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[416]] /* dc.weaDat.tWetBul_TDryBulXi.XiDryBul variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta42 = stringAppend(MMC_REFSTRINGLIT(tmp40),tmp41);
      {
        const char* assert_cond = "(dc.weaDat.tWetBul_TDryBulXi.XiDryBul >= 0.0 and dc.weaDat.tWetBul_TDryBulXi.XiDryBul <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Utilities/Psychrometrics/TWetBul_TDryBulPhi.mo",38,3,39,50,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta42));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Utilities/Psychrometrics/TWetBul_TDryBulPhi.mo",38,3,39,50,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta42));
        }
      }
      tmp43 = 1;
    }
  }
  threadData->lastEquationSolved = 4937;
}

/*
equation index: 4938
type: ALGORITHM

  assert(dc.weaDat.tWetBul_TDryBulXi.XiSat >= 0.0 and dc.weaDat.tWetBul_TDryBulXi.XiSat <= 1.0, "Variable violating min/max constraint: 0.0 <= dc.weaDat.tWetBul_TDryBulXi.XiSat <= 1.0, has value: " + String(dc.weaDat.tWetBul_TDryBulXi.XiSat, "g"));
*/
void s000_baseline_eqFunction_4938(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4938};
  modelica_boolean tmp44;
  modelica_boolean tmp45;
  static const MMC_DEFSTRINGLIT(tmp46,99,"Variable violating min/max constraint: 0.0 <= dc.weaDat.tWetBul_TDryBulXi.XiSat <= 1.0, has value: ");
  modelica_string tmp47;
  modelica_metatype tmpMeta48;
  static int tmp49 = 0;
  if(!tmp49)
  {
    tmp44 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[417]] /* dc.weaDat.tWetBul_TDryBulXi.XiSat variable */),0.0);
    tmp45 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[417]] /* dc.weaDat.tWetBul_TDryBulXi.XiSat variable */),1.0);
    if(!(tmp44 && tmp45))
    {
      tmp47 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[417]] /* dc.weaDat.tWetBul_TDryBulXi.XiSat variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta48 = stringAppend(MMC_REFSTRINGLIT(tmp46),tmp47);
      {
        const char* assert_cond = "(dc.weaDat.tWetBul_TDryBulXi.XiSat >= 0.0 and dc.weaDat.tWetBul_TDryBulXi.XiSat <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Utilities/Psychrometrics/TWetBul_TDryBulPhi.mo",40,3,41,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta48));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Utilities/Psychrometrics/TWetBul_TDryBulPhi.mo",40,3,41,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta48));
        }
      }
      tmp49 = 1;
    }
  }
  threadData->lastEquationSolved = 4938;
}

/*
equation index: 4939
type: ALGORITHM

  assert(dc.weaDat.tWetBul_TDryBulXi.XiSatRefIn >= 0.0 and dc.weaDat.tWetBul_TDryBulXi.XiSatRefIn <= 1.0, "Variable violating min/max constraint: 0.0 <= dc.weaDat.tWetBul_TDryBulXi.XiSatRefIn <= 1.0, has value: " + String(dc.weaDat.tWetBul_TDryBulXi.XiSatRefIn, "g"));
*/
void s000_baseline_eqFunction_4939(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4939};
  modelica_boolean tmp50;
  modelica_boolean tmp51;
  static const MMC_DEFSTRINGLIT(tmp52,104,"Variable violating min/max constraint: 0.0 <= dc.weaDat.tWetBul_TDryBulXi.XiSatRefIn <= 1.0, has value: ");
  modelica_string tmp53;
  modelica_metatype tmpMeta54;
  static int tmp55 = 0;
  if(!tmp55)
  {
    tmp50 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[418]] /* dc.weaDat.tWetBul_TDryBulXi.XiSatRefIn variable */),0.0);
    tmp51 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[418]] /* dc.weaDat.tWetBul_TDryBulXi.XiSatRefIn variable */),1.0);
    if(!(tmp50 && tmp51))
    {
      tmp53 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[418]] /* dc.weaDat.tWetBul_TDryBulXi.XiSatRefIn variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta54 = stringAppend(MMC_REFSTRINGLIT(tmp52),tmp53);
      {
        const char* assert_cond = "(dc.weaDat.tWetBul_TDryBulXi.XiSatRefIn >= 0.0 and dc.weaDat.tWetBul_TDryBulXi.XiSatRefIn <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Utilities/Psychrometrics/TWetBul_TDryBulPhi.mo",42,3,43,82,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta54));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/Utilities/Psychrometrics/TWetBul_TDryBulPhi.mo",42,3,43,82,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta54));
        }
      }
      tmp55 = 1;
    }
  }
  threadData->lastEquationSolved = 4939;
}

/*
equation index: 4842
type: ALGORITHM

  assert(dc.roo.ports[1].h_outflow >= -1e10 and dc.roo.ports[1].h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= dc.roo.ports[1].h_outflow <= 1e10, has value: " + String(dc.roo.ports[1].h_outflow, "g"));
*/
void s000_baseline_eqFunction_4842(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4842};
  modelica_boolean tmp56;
  modelica_boolean tmp57;
  static const MMC_DEFSTRINGLIT(tmp58,94,"Variable violating min/max constraint: -1e10 <= dc.roo.ports[1].h_outflow <= 1e10, has value: ");
  modelica_string tmp59;
  modelica_metatype tmpMeta60;
  static int tmp61 = 0;
  if(!tmp61)
  {
    tmp56 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[318]] /* dc.roo.ports[1].h_outflow variable */),-1e10);
    tmp57 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[318]] /* dc.roo.ports[1].h_outflow variable */),1e10);
    if(!(tmp56 && tmp57))
    {
      tmp59 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[318]] /* dc.roo.ports[1].h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta60 = stringAppend(MMC_REFSTRINGLIT(tmp58),tmp59);
      {
        const char* assert_cond = "(dc.roo.ports[1].h_outflow >= -1e10 and dc.roo.ports[1].h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta60));
        } else {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta60));
        }
      }
      tmp61 = 1;
    }
  }
  threadData->lastEquationSolved = 4842;
}

/*
equation index: 4843
type: ALGORITHM

  assert(dc.roo.ports[2].h_outflow >= -1e10 and dc.roo.ports[2].h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= dc.roo.ports[2].h_outflow <= 1e10, has value: " + String(dc.roo.ports[2].h_outflow, "g"));
*/
void s000_baseline_eqFunction_4843(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4843};
  modelica_boolean tmp62;
  modelica_boolean tmp63;
  static const MMC_DEFSTRINGLIT(tmp64,94,"Variable violating min/max constraint: -1e10 <= dc.roo.ports[2].h_outflow <= 1e10, has value: ");
  modelica_string tmp65;
  modelica_metatype tmpMeta66;
  static int tmp67 = 0;
  if(!tmp67)
  {
    tmp62 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[319]] /* dc.roo.ports[2].h_outflow variable */),-1e10);
    tmp63 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[319]] /* dc.roo.ports[2].h_outflow variable */),1e10);
    if(!(tmp62 && tmp63))
    {
      tmp65 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[319]] /* dc.roo.ports[2].h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta66 = stringAppend(MMC_REFSTRINGLIT(tmp64),tmp65);
      {
        const char* assert_cond = "(dc.roo.ports[2].h_outflow >= -1e10 and dc.roo.ports[2].h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta66));
        } else {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta66));
        }
      }
      tmp67 = 1;
    }
  }
  threadData->lastEquationSolved = 4843;
}

/*
equation index: 4844
type: ALGORITHM

  assert(dc.roo.ports[3].h_outflow >= -1e10 and dc.roo.ports[3].h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= dc.roo.ports[3].h_outflow <= 1e10, has value: " + String(dc.roo.ports[3].h_outflow, "g"));
*/
void s000_baseline_eqFunction_4844(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4844};
  modelica_boolean tmp68;
  modelica_boolean tmp69;
  static const MMC_DEFSTRINGLIT(tmp70,94,"Variable violating min/max constraint: -1e10 <= dc.roo.ports[3].h_outflow <= 1e10, has value: ");
  modelica_string tmp71;
  modelica_metatype tmpMeta72;
  static int tmp73 = 0;
  if(!tmp73)
  {
    tmp68 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[320]] /* dc.roo.ports[3].h_outflow variable */),-1e10);
    tmp69 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[320]] /* dc.roo.ports[3].h_outflow variable */),1e10);
    if(!(tmp68 && tmp69))
    {
      tmp71 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[320]] /* dc.roo.ports[3].h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta72 = stringAppend(MMC_REFSTRINGLIT(tmp70),tmp71);
      {
        const char* assert_cond = "(dc.roo.ports[3].h_outflow >= -1e10 and dc.roo.ports[3].h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta72));
        } else {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta72));
        }
      }
      tmp73 = 1;
    }
  }
  threadData->lastEquationSolved = 4844;
}

/*
equation index: 4845
type: ALGORITHM

  assert(dc.roo.ports[4].h_outflow >= -1e10 and dc.roo.ports[4].h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= dc.roo.ports[4].h_outflow <= 1e10, has value: " + String(dc.roo.ports[4].h_outflow, "g"));
*/
void s000_baseline_eqFunction_4845(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4845};
  modelica_boolean tmp74;
  modelica_boolean tmp75;
  static const MMC_DEFSTRINGLIT(tmp76,94,"Variable violating min/max constraint: -1e10 <= dc.roo.ports[4].h_outflow <= 1e10, has value: ");
  modelica_string tmp77;
  modelica_metatype tmpMeta78;
  static int tmp79 = 0;
  if(!tmp79)
  {
    tmp74 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[321]] /* dc.roo.ports[4].h_outflow variable */),-1e10);
    tmp75 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[321]] /* dc.roo.ports[4].h_outflow variable */),1e10);
    if(!(tmp74 && tmp75))
    {
      tmp77 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[321]] /* dc.roo.ports[4].h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta78 = stringAppend(MMC_REFSTRINGLIT(tmp76),tmp77);
      {
        const char* assert_cond = "(dc.roo.ports[4].h_outflow >= -1e10 and dc.roo.ports[4].h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta78));
        } else {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta78));
        }
      }
      tmp79 = 1;
    }
  }
  threadData->lastEquationSolved = 4845;
}

/*
equation index: 4846
type: ALGORITHM

  assert(dc.roo.ports[5].h_outflow >= -1e10 and dc.roo.ports[5].h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= dc.roo.ports[5].h_outflow <= 1e10, has value: " + String(dc.roo.ports[5].h_outflow, "g"));
*/
void s000_baseline_eqFunction_4846(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4846};
  modelica_boolean tmp80;
  modelica_boolean tmp81;
  static const MMC_DEFSTRINGLIT(tmp82,94,"Variable violating min/max constraint: -1e10 <= dc.roo.ports[5].h_outflow <= 1e10, has value: ");
  modelica_string tmp83;
  modelica_metatype tmpMeta84;
  static int tmp85 = 0;
  if(!tmp85)
  {
    tmp80 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[322]] /* dc.roo.ports[5].h_outflow variable */),-1e10);
    tmp81 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[322]] /* dc.roo.ports[5].h_outflow variable */),1e10);
    if(!(tmp80 && tmp81))
    {
      tmp83 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[322]] /* dc.roo.ports[5].h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta84 = stringAppend(MMC_REFSTRINGLIT(tmp82),tmp83);
      {
        const char* assert_cond = "(dc.roo.ports[5].h_outflow >= -1e10 and dc.roo.ports[5].h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta84));
        } else {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta84));
        }
      }
      tmp85 = 1;
    }
  }
  threadData->lastEquationSolved = 4846;
}

/*
equation index: 4847
type: ALGORITHM

  assert(dc.roo.ports[6].h_outflow >= -1e10 and dc.roo.ports[6].h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= dc.roo.ports[6].h_outflow <= 1e10, has value: " + String(dc.roo.ports[6].h_outflow, "g"));
*/
void s000_baseline_eqFunction_4847(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4847};
  modelica_boolean tmp86;
  modelica_boolean tmp87;
  static const MMC_DEFSTRINGLIT(tmp88,94,"Variable violating min/max constraint: -1e10 <= dc.roo.ports[6].h_outflow <= 1e10, has value: ");
  modelica_string tmp89;
  modelica_metatype tmpMeta90;
  static int tmp91 = 0;
  if(!tmp91)
  {
    tmp86 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[323]] /* dc.roo.ports[6].h_outflow variable */),-1e10);
    tmp87 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[323]] /* dc.roo.ports[6].h_outflow variable */),1e10);
    if(!(tmp86 && tmp87))
    {
      tmp89 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[323]] /* dc.roo.ports[6].h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta90 = stringAppend(MMC_REFSTRINGLIT(tmp88),tmp89);
      {
        const char* assert_cond = "(dc.roo.ports[6].h_outflow >= -1e10 and dc.roo.ports[6].h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta90));
        } else {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta90));
        }
      }
      tmp91 = 1;
    }
  }
  threadData->lastEquationSolved = 4847;
}

/*
equation index: 4848
type: ALGORITHM

  assert(dc.roo.heaPorRad.T >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.heaPorRad.T, has value: " + String(dc.roo.heaPorRad.T, "g"));
*/
void s000_baseline_eqFunction_4848(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4848};
  modelica_boolean tmp92;
  static const MMC_DEFSTRINGLIT(tmp93,73,"Variable violating min constraint: 0.0 <= dc.roo.heaPorRad.T, has value: ");
  modelica_string tmp94;
  modelica_metatype tmpMeta95;
  static int tmp96 = 0;
  if(!tmp96)
  {
    tmp92 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[246]] /* dc.roo.heaPorRad.T variable */),0.0);
    if(!tmp92)
    {
      tmp94 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[246]] /* dc.roo.heaPorRad.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta95 = stringAppend(MMC_REFSTRINGLIT(tmp93),tmp94);
      {
        const char* assert_cond = "(dc.roo.heaPorRad.T >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Thermal/HeatTransfer/Interfaces/HeatPort.mo",3,3,3,38,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta95));
        } else {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Thermal/HeatTransfer/Interfaces/HeatPort.mo",3,3,3,38,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta95));
        }
      }
      tmp96 = 1;
    }
  }
  threadData->lastEquationSolved = 4848;
}

/*
equation index: 4849
type: ALGORITHM

  assert(dc.roo.air.cfd.u[10] >= -1e5 and dc.roo.air.cfd.u[10] <= 1e5, "Variable violating min/max constraint: -1e5 <= dc.roo.air.cfd.u[10] <= 1e5, has value: " + String(dc.roo.air.cfd.u[10], "g"));
*/
void s000_baseline_eqFunction_4849(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4849};
  modelica_boolean tmp97;
  modelica_boolean tmp98;
  static const MMC_DEFSTRINGLIT(tmp99,87,"Variable violating min/max constraint: -1e5 <= dc.roo.air.cfd.u[10] <= 1e5, has value: ");
  modelica_string tmp100;
  modelica_metatype tmpMeta101;
  static int tmp102 = 0;
  if(!tmp102)
  {
    tmp97 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[169]] /* dc.roo.air.cfd.u[10] variable */),-1e5);
    tmp98 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[169]] /* dc.roo.air.cfd.u[10] variable */),1e5);
    if(!(tmp97 && tmp98))
    {
      tmp100 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[169]] /* dc.roo.air.cfd.u[10] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta101 = stringAppend(MMC_REFSTRINGLIT(tmp99),tmp100);
      {
        const char* assert_cond = "(dc.roo.air.cfd.u[10] >= -1e5 and dc.roo.air.cfd.u[10] <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta101));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta101));
        }
      }
      tmp102 = 1;
    }
  }
  threadData->lastEquationSolved = 4849;
}

/*
equation index: 4850
type: ALGORITHM

  assert(dc.roo.air.cfd.u[11] >= -1e5 and dc.roo.air.cfd.u[11] <= 1e5, "Variable violating min/max constraint: -1e5 <= dc.roo.air.cfd.u[11] <= 1e5, has value: " + String(dc.roo.air.cfd.u[11], "g"));
*/
void s000_baseline_eqFunction_4850(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4850};
  modelica_boolean tmp103;
  modelica_boolean tmp104;
  static const MMC_DEFSTRINGLIT(tmp105,87,"Variable violating min/max constraint: -1e5 <= dc.roo.air.cfd.u[11] <= 1e5, has value: ");
  modelica_string tmp106;
  modelica_metatype tmpMeta107;
  static int tmp108 = 0;
  if(!tmp108)
  {
    tmp103 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* dc.roo.air.cfd.u[11] variable */),-1e5);
    tmp104 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* dc.roo.air.cfd.u[11] variable */),1e5);
    if(!(tmp103 && tmp104))
    {
      tmp106 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* dc.roo.air.cfd.u[11] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta107 = stringAppend(MMC_REFSTRINGLIT(tmp105),tmp106);
      {
        const char* assert_cond = "(dc.roo.air.cfd.u[11] >= -1e5 and dc.roo.air.cfd.u[11] <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta107));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta107));
        }
      }
      tmp108 = 1;
    }
  }
  threadData->lastEquationSolved = 4850;
}

/*
equation index: 4851
type: ALGORITHM

  assert(dc.roo.air.cfd.u[12] >= -1e5 and dc.roo.air.cfd.u[12] <= 1e5, "Variable violating min/max constraint: -1e5 <= dc.roo.air.cfd.u[12] <= 1e5, has value: " + String(dc.roo.air.cfd.u[12], "g"));
*/
void s000_baseline_eqFunction_4851(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4851};
  modelica_boolean tmp109;
  modelica_boolean tmp110;
  static const MMC_DEFSTRINGLIT(tmp111,87,"Variable violating min/max constraint: -1e5 <= dc.roo.air.cfd.u[12] <= 1e5, has value: ");
  modelica_string tmp112;
  modelica_metatype tmpMeta113;
  static int tmp114 = 0;
  if(!tmp114)
  {
    tmp109 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[171]] /* dc.roo.air.cfd.u[12] variable */),-1e5);
    tmp110 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[171]] /* dc.roo.air.cfd.u[12] variable */),1e5);
    if(!(tmp109 && tmp110))
    {
      tmp112 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[171]] /* dc.roo.air.cfd.u[12] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta113 = stringAppend(MMC_REFSTRINGLIT(tmp111),tmp112);
      {
        const char* assert_cond = "(dc.roo.air.cfd.u[12] >= -1e5 and dc.roo.air.cfd.u[12] <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta113));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta113));
        }
      }
      tmp114 = 1;
    }
  }
  threadData->lastEquationSolved = 4851;
}

/*
equation index: 4852
type: ALGORITHM

  assert(dc.roo.air.cfd.u[13] >= -1e5 and dc.roo.air.cfd.u[13] <= 1e5, "Variable violating min/max constraint: -1e5 <= dc.roo.air.cfd.u[13] <= 1e5, has value: " + String(dc.roo.air.cfd.u[13], "g"));
*/
void s000_baseline_eqFunction_4852(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4852};
  modelica_boolean tmp115;
  modelica_boolean tmp116;
  static const MMC_DEFSTRINGLIT(tmp117,87,"Variable violating min/max constraint: -1e5 <= dc.roo.air.cfd.u[13] <= 1e5, has value: ");
  modelica_string tmp118;
  modelica_metatype tmpMeta119;
  static int tmp120 = 0;
  if(!tmp120)
  {
    tmp115 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[172]] /* dc.roo.air.cfd.u[13] variable */),-1e5);
    tmp116 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[172]] /* dc.roo.air.cfd.u[13] variable */),1e5);
    if(!(tmp115 && tmp116))
    {
      tmp118 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[172]] /* dc.roo.air.cfd.u[13] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta119 = stringAppend(MMC_REFSTRINGLIT(tmp117),tmp118);
      {
        const char* assert_cond = "(dc.roo.air.cfd.u[13] >= -1e5 and dc.roo.air.cfd.u[13] <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta119));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta119));
        }
      }
      tmp120 = 1;
    }
  }
  threadData->lastEquationSolved = 4852;
}

/*
equation index: 4853
type: ALGORITHM

  assert(dc.roo.air.cfd.u[14] >= -1e5 and dc.roo.air.cfd.u[14] <= 1e5, "Variable violating min/max constraint: -1e5 <= dc.roo.air.cfd.u[14] <= 1e5, has value: " + String(dc.roo.air.cfd.u[14], "g"));
*/
void s000_baseline_eqFunction_4853(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4853};
  modelica_boolean tmp121;
  modelica_boolean tmp122;
  static const MMC_DEFSTRINGLIT(tmp123,87,"Variable violating min/max constraint: -1e5 <= dc.roo.air.cfd.u[14] <= 1e5, has value: ");
  modelica_string tmp124;
  modelica_metatype tmpMeta125;
  static int tmp126 = 0;
  if(!tmp126)
  {
    tmp121 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[173]] /* dc.roo.air.cfd.u[14] variable */),-1e5);
    tmp122 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[173]] /* dc.roo.air.cfd.u[14] variable */),1e5);
    if(!(tmp121 && tmp122))
    {
      tmp124 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[173]] /* dc.roo.air.cfd.u[14] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta125 = stringAppend(MMC_REFSTRINGLIT(tmp123),tmp124);
      {
        const char* assert_cond = "(dc.roo.air.cfd.u[14] >= -1e5 and dc.roo.air.cfd.u[14] <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta125));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta125));
        }
      }
      tmp126 = 1;
    }
  }
  threadData->lastEquationSolved = 4853;
}

/*
equation index: 4854
type: ALGORITHM

  assert(dc.roo.air.cfd.u[15] >= -1e5 and dc.roo.air.cfd.u[15] <= 1e5, "Variable violating min/max constraint: -1e5 <= dc.roo.air.cfd.u[15] <= 1e5, has value: " + String(dc.roo.air.cfd.u[15], "g"));
*/
void s000_baseline_eqFunction_4854(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4854};
  modelica_boolean tmp127;
  modelica_boolean tmp128;
  static const MMC_DEFSTRINGLIT(tmp129,87,"Variable violating min/max constraint: -1e5 <= dc.roo.air.cfd.u[15] <= 1e5, has value: ");
  modelica_string tmp130;
  modelica_metatype tmpMeta131;
  static int tmp132 = 0;
  if(!tmp132)
  {
    tmp127 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[174]] /* dc.roo.air.cfd.u[15] variable */),-1e5);
    tmp128 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[174]] /* dc.roo.air.cfd.u[15] variable */),1e5);
    if(!(tmp127 && tmp128))
    {
      tmp130 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[174]] /* dc.roo.air.cfd.u[15] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta131 = stringAppend(MMC_REFSTRINGLIT(tmp129),tmp130);
      {
        const char* assert_cond = "(dc.roo.air.cfd.u[15] >= -1e5 and dc.roo.air.cfd.u[15] <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta131));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta131));
        }
      }
      tmp132 = 1;
    }
  }
  threadData->lastEquationSolved = 4854;
}

/*
equation index: 4855
type: ALGORITHM

  assert(dc.roo.air.cfd.u[16] >= -1e5 and dc.roo.air.cfd.u[16] <= 0.0, "Variable violating min/max constraint: -1e5 <= dc.roo.air.cfd.u[16] <= 0.0, has value: " + String(dc.roo.air.cfd.u[16], "g"));
*/
void s000_baseline_eqFunction_4855(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4855};
  modelica_boolean tmp133;
  modelica_boolean tmp134;
  static const MMC_DEFSTRINGLIT(tmp135,87,"Variable violating min/max constraint: -1e5 <= dc.roo.air.cfd.u[16] <= 0.0, has value: ");
  modelica_string tmp136;
  modelica_metatype tmpMeta137;
  static int tmp138 = 0;
  if(!tmp138)
  {
    tmp133 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[175]] /* dc.roo.air.cfd.u[16] variable */),-1e5);
    tmp134 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[175]] /* dc.roo.air.cfd.u[16] variable */),0.0);
    if(!(tmp133 && tmp134))
    {
      tmp136 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[175]] /* dc.roo.air.cfd.u[16] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta137 = stringAppend(MMC_REFSTRINGLIT(tmp135),tmp136);
      {
        const char* assert_cond = "(dc.roo.air.cfd.u[16] >= -1e5 and dc.roo.air.cfd.u[16] <= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta137));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta137));
        }
      }
      tmp138 = 1;
    }
  }
  threadData->lastEquationSolved = 4855;
}

/*
equation index: 4856
type: ALGORITHM

  assert(dc.roo.air.cfd.u[17] >= -1e5 and dc.roo.air.cfd.u[17] <= 0.0, "Variable violating min/max constraint: -1e5 <= dc.roo.air.cfd.u[17] <= 0.0, has value: " + String(dc.roo.air.cfd.u[17], "g"));
*/
void s000_baseline_eqFunction_4856(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4856};
  modelica_boolean tmp139;
  modelica_boolean tmp140;
  static const MMC_DEFSTRINGLIT(tmp141,87,"Variable violating min/max constraint: -1e5 <= dc.roo.air.cfd.u[17] <= 0.0, has value: ");
  modelica_string tmp142;
  modelica_metatype tmpMeta143;
  static int tmp144 = 0;
  if(!tmp144)
  {
    tmp139 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[176]] /* dc.roo.air.cfd.u[17] variable */),-1e5);
    tmp140 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[176]] /* dc.roo.air.cfd.u[17] variable */),0.0);
    if(!(tmp139 && tmp140))
    {
      tmp142 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[176]] /* dc.roo.air.cfd.u[17] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta143 = stringAppend(MMC_REFSTRINGLIT(tmp141),tmp142);
      {
        const char* assert_cond = "(dc.roo.air.cfd.u[17] >= -1e5 and dc.roo.air.cfd.u[17] <= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta143));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta143));
        }
      }
      tmp144 = 1;
    }
  }
  threadData->lastEquationSolved = 4856;
}

/*
equation index: 4857
type: ALGORITHM

  assert(dc.roo.air.cfd.u[18] >= -1e5 and dc.roo.air.cfd.u[18] <= 0.0, "Variable violating min/max constraint: -1e5 <= dc.roo.air.cfd.u[18] <= 0.0, has value: " + String(dc.roo.air.cfd.u[18], "g"));
*/
void s000_baseline_eqFunction_4857(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4857};
  modelica_boolean tmp145;
  modelica_boolean tmp146;
  static const MMC_DEFSTRINGLIT(tmp147,87,"Variable violating min/max constraint: -1e5 <= dc.roo.air.cfd.u[18] <= 0.0, has value: ");
  modelica_string tmp148;
  modelica_metatype tmpMeta149;
  static int tmp150 = 0;
  if(!tmp150)
  {
    tmp145 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[177]] /* dc.roo.air.cfd.u[18] variable */),-1e5);
    tmp146 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[177]] /* dc.roo.air.cfd.u[18] variable */),0.0);
    if(!(tmp145 && tmp146))
    {
      tmp148 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[177]] /* dc.roo.air.cfd.u[18] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta149 = stringAppend(MMC_REFSTRINGLIT(tmp147),tmp148);
      {
        const char* assert_cond = "(dc.roo.air.cfd.u[18] >= -1e5 and dc.roo.air.cfd.u[18] <= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta149));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta149));
        }
      }
      tmp150 = 1;
    }
  }
  threadData->lastEquationSolved = 4857;
}

/*
equation index: 4858
type: ALGORITHM

  assert(dc.roo.air.cfd.u[19] >= -1e5 and dc.roo.air.cfd.u[19] <= 0.0, "Variable violating min/max constraint: -1e5 <= dc.roo.air.cfd.u[19] <= 0.0, has value: " + String(dc.roo.air.cfd.u[19], "g"));
*/
void s000_baseline_eqFunction_4858(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4858};
  modelica_boolean tmp151;
  modelica_boolean tmp152;
  static const MMC_DEFSTRINGLIT(tmp153,87,"Variable violating min/max constraint: -1e5 <= dc.roo.air.cfd.u[19] <= 0.0, has value: ");
  modelica_string tmp154;
  modelica_metatype tmpMeta155;
  static int tmp156 = 0;
  if(!tmp156)
  {
    tmp151 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* dc.roo.air.cfd.u[19] variable */),-1e5);
    tmp152 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* dc.roo.air.cfd.u[19] variable */),0.0);
    if(!(tmp151 && tmp152))
    {
      tmp154 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* dc.roo.air.cfd.u[19] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta155 = stringAppend(MMC_REFSTRINGLIT(tmp153),tmp154);
      {
        const char* assert_cond = "(dc.roo.air.cfd.u[19] >= -1e5 and dc.roo.air.cfd.u[19] <= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta155));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta155));
        }
      }
      tmp156 = 1;
    }
  }
  threadData->lastEquationSolved = 4858;
}

/*
equation index: 4859
type: ALGORITHM

  assert(dc.roo.air.cfd.u[20] >= -1e5 and dc.roo.air.cfd.u[20] <= 0.0, "Variable violating min/max constraint: -1e5 <= dc.roo.air.cfd.u[20] <= 0.0, has value: " + String(dc.roo.air.cfd.u[20], "g"));
*/
void s000_baseline_eqFunction_4859(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4859};
  modelica_boolean tmp157;
  modelica_boolean tmp158;
  static const MMC_DEFSTRINGLIT(tmp159,87,"Variable violating min/max constraint: -1e5 <= dc.roo.air.cfd.u[20] <= 0.0, has value: ");
  modelica_string tmp160;
  modelica_metatype tmpMeta161;
  static int tmp162 = 0;
  if(!tmp162)
  {
    tmp157 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[179]] /* dc.roo.air.cfd.u[20] variable */),-1e5);
    tmp158 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[179]] /* dc.roo.air.cfd.u[20] variable */),0.0);
    if(!(tmp157 && tmp158))
    {
      tmp160 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[179]] /* dc.roo.air.cfd.u[20] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta161 = stringAppend(MMC_REFSTRINGLIT(tmp159),tmp160);
      {
        const char* assert_cond = "(dc.roo.air.cfd.u[20] >= -1e5 and dc.roo.air.cfd.u[20] <= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta161));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta161));
        }
      }
      tmp162 = 1;
    }
  }
  threadData->lastEquationSolved = 4859;
}

/*
equation index: 4860
type: ALGORITHM

  assert(dc.roo.air.cfd.u[21] >= -1e5 and dc.roo.air.cfd.u[21] <= 0.0, "Variable violating min/max constraint: -1e5 <= dc.roo.air.cfd.u[21] <= 0.0, has value: " + String(dc.roo.air.cfd.u[21], "g"));
*/
void s000_baseline_eqFunction_4860(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4860};
  modelica_boolean tmp163;
  modelica_boolean tmp164;
  static const MMC_DEFSTRINGLIT(tmp165,87,"Variable violating min/max constraint: -1e5 <= dc.roo.air.cfd.u[21] <= 0.0, has value: ");
  modelica_string tmp166;
  modelica_metatype tmpMeta167;
  static int tmp168 = 0;
  if(!tmp168)
  {
    tmp163 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[180]] /* dc.roo.air.cfd.u[21] variable */),-1e5);
    tmp164 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[180]] /* dc.roo.air.cfd.u[21] variable */),0.0);
    if(!(tmp163 && tmp164))
    {
      tmp166 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[180]] /* dc.roo.air.cfd.u[21] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta167 = stringAppend(MMC_REFSTRINGLIT(tmp165),tmp166);
      {
        const char* assert_cond = "(dc.roo.air.cfd.u[21] >= -1e5 and dc.roo.air.cfd.u[21] <= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta167));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta167));
        }
      }
      tmp168 = 1;
    }
  }
  threadData->lastEquationSolved = 4860;
}

/*
equation index: 4861
type: ALGORITHM

  assert(dc.roo.air.cfd.u[22] >= 200.0 and dc.roo.air.cfd.u[22] <= 373.15, "Variable violating min/max constraint: 200.0 <= dc.roo.air.cfd.u[22] <= 373.15, has value: " + String(dc.roo.air.cfd.u[22], "g"));
*/
void s000_baseline_eqFunction_4861(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4861};
  modelica_boolean tmp169;
  modelica_boolean tmp170;
  static const MMC_DEFSTRINGLIT(tmp171,91,"Variable violating min/max constraint: 200.0 <= dc.roo.air.cfd.u[22] <= 373.15, has value: ");
  modelica_string tmp172;
  modelica_metatype tmpMeta173;
  static int tmp174 = 0;
  if(!tmp174)
  {
    tmp169 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[181]] /* dc.roo.air.cfd.u[22] variable */),200.0);
    tmp170 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[181]] /* dc.roo.air.cfd.u[22] variable */),373.15);
    if(!(tmp169 && tmp170))
    {
      tmp172 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[181]] /* dc.roo.air.cfd.u[22] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta173 = stringAppend(MMC_REFSTRINGLIT(tmp171),tmp172);
      {
        const char* assert_cond = "(dc.roo.air.cfd.u[22] >= 200.0 and dc.roo.air.cfd.u[22] <= 373.15)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta173));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta173));
        }
      }
      tmp174 = 1;
    }
  }
  threadData->lastEquationSolved = 4861;
}

/*
equation index: 4862
type: ALGORITHM

  assert(dc.roo.air.cfd.u[23] >= 200.0 and dc.roo.air.cfd.u[23] <= 373.15, "Variable violating min/max constraint: 200.0 <= dc.roo.air.cfd.u[23] <= 373.15, has value: " + String(dc.roo.air.cfd.u[23], "g"));
*/
void s000_baseline_eqFunction_4862(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4862};
  modelica_boolean tmp175;
  modelica_boolean tmp176;
  static const MMC_DEFSTRINGLIT(tmp177,91,"Variable violating min/max constraint: 200.0 <= dc.roo.air.cfd.u[23] <= 373.15, has value: ");
  modelica_string tmp178;
  modelica_metatype tmpMeta179;
  static int tmp180 = 0;
  if(!tmp180)
  {
    tmp175 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[182]] /* dc.roo.air.cfd.u[23] variable */),200.0);
    tmp176 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[182]] /* dc.roo.air.cfd.u[23] variable */),373.15);
    if(!(tmp175 && tmp176))
    {
      tmp178 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[182]] /* dc.roo.air.cfd.u[23] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta179 = stringAppend(MMC_REFSTRINGLIT(tmp177),tmp178);
      {
        const char* assert_cond = "(dc.roo.air.cfd.u[23] >= 200.0 and dc.roo.air.cfd.u[23] <= 373.15)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta179));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta179));
        }
      }
      tmp180 = 1;
    }
  }
  threadData->lastEquationSolved = 4862;
}

/*
equation index: 4863
type: ALGORITHM

  assert(dc.roo.air.cfd.u[24] >= 200.0 and dc.roo.air.cfd.u[24] <= 373.15, "Variable violating min/max constraint: 200.0 <= dc.roo.air.cfd.u[24] <= 373.15, has value: " + String(dc.roo.air.cfd.u[24], "g"));
*/
void s000_baseline_eqFunction_4863(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4863};
  modelica_boolean tmp181;
  modelica_boolean tmp182;
  static const MMC_DEFSTRINGLIT(tmp183,91,"Variable violating min/max constraint: 200.0 <= dc.roo.air.cfd.u[24] <= 373.15, has value: ");
  modelica_string tmp184;
  modelica_metatype tmpMeta185;
  static int tmp186 = 0;
  if(!tmp186)
  {
    tmp181 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[183]] /* dc.roo.air.cfd.u[24] variable */),200.0);
    tmp182 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[183]] /* dc.roo.air.cfd.u[24] variable */),373.15);
    if(!(tmp181 && tmp182))
    {
      tmp184 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[183]] /* dc.roo.air.cfd.u[24] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta185 = stringAppend(MMC_REFSTRINGLIT(tmp183),tmp184);
      {
        const char* assert_cond = "(dc.roo.air.cfd.u[24] >= 200.0 and dc.roo.air.cfd.u[24] <= 373.15)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta185));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta185));
        }
      }
      tmp186 = 1;
    }
  }
  threadData->lastEquationSolved = 4863;
}

/*
equation index: 4864
type: ALGORITHM

  assert(dc.roo.air.cfd.u[25] >= 200.0 and dc.roo.air.cfd.u[25] <= 373.15, "Variable violating min/max constraint: 200.0 <= dc.roo.air.cfd.u[25] <= 373.15, has value: " + String(dc.roo.air.cfd.u[25], "g"));
*/
void s000_baseline_eqFunction_4864(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4864};
  modelica_boolean tmp187;
  modelica_boolean tmp188;
  static const MMC_DEFSTRINGLIT(tmp189,91,"Variable violating min/max constraint: 200.0 <= dc.roo.air.cfd.u[25] <= 373.15, has value: ");
  modelica_string tmp190;
  modelica_metatype tmpMeta191;
  static int tmp192 = 0;
  if(!tmp192)
  {
    tmp187 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[184]] /* dc.roo.air.cfd.u[25] variable */),200.0);
    tmp188 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[184]] /* dc.roo.air.cfd.u[25] variable */),373.15);
    if(!(tmp187 && tmp188))
    {
      tmp190 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[184]] /* dc.roo.air.cfd.u[25] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta191 = stringAppend(MMC_REFSTRINGLIT(tmp189),tmp190);
      {
        const char* assert_cond = "(dc.roo.air.cfd.u[25] >= 200.0 and dc.roo.air.cfd.u[25] <= 373.15)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta191));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta191));
        }
      }
      tmp192 = 1;
    }
  }
  threadData->lastEquationSolved = 4864;
}

/*
equation index: 4865
type: ALGORITHM

  assert(dc.roo.air.cfd.u[26] >= 200.0 and dc.roo.air.cfd.u[26] <= 373.15, "Variable violating min/max constraint: 200.0 <= dc.roo.air.cfd.u[26] <= 373.15, has value: " + String(dc.roo.air.cfd.u[26], "g"));
*/
void s000_baseline_eqFunction_4865(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4865};
  modelica_boolean tmp193;
  modelica_boolean tmp194;
  static const MMC_DEFSTRINGLIT(tmp195,91,"Variable violating min/max constraint: 200.0 <= dc.roo.air.cfd.u[26] <= 373.15, has value: ");
  modelica_string tmp196;
  modelica_metatype tmpMeta197;
  static int tmp198 = 0;
  if(!tmp198)
  {
    tmp193 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[185]] /* dc.roo.air.cfd.u[26] variable */),200.0);
    tmp194 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[185]] /* dc.roo.air.cfd.u[26] variable */),373.15);
    if(!(tmp193 && tmp194))
    {
      tmp196 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[185]] /* dc.roo.air.cfd.u[26] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta197 = stringAppend(MMC_REFSTRINGLIT(tmp195),tmp196);
      {
        const char* assert_cond = "(dc.roo.air.cfd.u[26] >= 200.0 and dc.roo.air.cfd.u[26] <= 373.15)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta197));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta197));
        }
      }
      tmp198 = 1;
    }
  }
  threadData->lastEquationSolved = 4865;
}

/*
equation index: 4866
type: ALGORITHM

  assert(dc.roo.air.cfd.u[27] >= 200.0 and dc.roo.air.cfd.u[27] <= 373.15, "Variable violating min/max constraint: 200.0 <= dc.roo.air.cfd.u[27] <= 373.15, has value: " + String(dc.roo.air.cfd.u[27], "g"));
*/
void s000_baseline_eqFunction_4866(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4866};
  modelica_boolean tmp199;
  modelica_boolean tmp200;
  static const MMC_DEFSTRINGLIT(tmp201,91,"Variable violating min/max constraint: 200.0 <= dc.roo.air.cfd.u[27] <= 373.15, has value: ");
  modelica_string tmp202;
  modelica_metatype tmpMeta203;
  static int tmp204 = 0;
  if(!tmp204)
  {
    tmp199 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[186]] /* dc.roo.air.cfd.u[27] variable */),200.0);
    tmp200 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[186]] /* dc.roo.air.cfd.u[27] variable */),373.15);
    if(!(tmp199 && tmp200))
    {
      tmp202 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[186]] /* dc.roo.air.cfd.u[27] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta203 = stringAppend(MMC_REFSTRINGLIT(tmp201),tmp202);
      {
        const char* assert_cond = "(dc.roo.air.cfd.u[27] >= 200.0 and dc.roo.air.cfd.u[27] <= 373.15)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta203));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta203));
        }
      }
      tmp204 = 1;
    }
  }
  threadData->lastEquationSolved = 4866;
}

/*
equation index: 4867
type: ALGORITHM

  assert(dc.roo.air.cfd.u[28] >= 200.0 and dc.roo.air.cfd.u[28] <= 373.15, "Variable violating min/max constraint: 200.0 <= dc.roo.air.cfd.u[28] <= 373.15, has value: " + String(dc.roo.air.cfd.u[28], "g"));
*/
void s000_baseline_eqFunction_4867(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4867};
  modelica_boolean tmp205;
  modelica_boolean tmp206;
  static const MMC_DEFSTRINGLIT(tmp207,91,"Variable violating min/max constraint: 200.0 <= dc.roo.air.cfd.u[28] <= 373.15, has value: ");
  modelica_string tmp208;
  modelica_metatype tmpMeta209;
  static int tmp210 = 0;
  if(!tmp210)
  {
    tmp205 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[187]] /* dc.roo.air.cfd.u[28] variable */),200.0);
    tmp206 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[187]] /* dc.roo.air.cfd.u[28] variable */),373.15);
    if(!(tmp205 && tmp206))
    {
      tmp208 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[187]] /* dc.roo.air.cfd.u[28] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta209 = stringAppend(MMC_REFSTRINGLIT(tmp207),tmp208);
      {
        const char* assert_cond = "(dc.roo.air.cfd.u[28] >= 200.0 and dc.roo.air.cfd.u[28] <= 373.15)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta209));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta209));
        }
      }
      tmp210 = 1;
    }
  }
  threadData->lastEquationSolved = 4867;
}

/*
equation index: 4868
type: ALGORITHM

  assert(dc.roo.air.cfd.u[29] >= 200.0 and dc.roo.air.cfd.u[29] <= 373.15, "Variable violating min/max constraint: 200.0 <= dc.roo.air.cfd.u[29] <= 373.15, has value: " + String(dc.roo.air.cfd.u[29], "g"));
*/
void s000_baseline_eqFunction_4868(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4868};
  modelica_boolean tmp211;
  modelica_boolean tmp212;
  static const MMC_DEFSTRINGLIT(tmp213,91,"Variable violating min/max constraint: 200.0 <= dc.roo.air.cfd.u[29] <= 373.15, has value: ");
  modelica_string tmp214;
  modelica_metatype tmpMeta215;
  static int tmp216 = 0;
  if(!tmp216)
  {
    tmp211 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[188]] /* dc.roo.air.cfd.u[29] variable */),200.0);
    tmp212 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[188]] /* dc.roo.air.cfd.u[29] variable */),373.15);
    if(!(tmp211 && tmp212))
    {
      tmp214 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[188]] /* dc.roo.air.cfd.u[29] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta215 = stringAppend(MMC_REFSTRINGLIT(tmp213),tmp214);
      {
        const char* assert_cond = "(dc.roo.air.cfd.u[29] >= 200.0 and dc.roo.air.cfd.u[29] <= 373.15)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta215));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta215));
        }
      }
      tmp216 = 1;
    }
  }
  threadData->lastEquationSolved = 4868;
}

/*
equation index: 4869
type: ALGORITHM

  assert(dc.roo.air.cfd.u[30] >= 200.0 and dc.roo.air.cfd.u[30] <= 373.15, "Variable violating min/max constraint: 200.0 <= dc.roo.air.cfd.u[30] <= 373.15, has value: " + String(dc.roo.air.cfd.u[30], "g"));
*/
void s000_baseline_eqFunction_4869(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4869};
  modelica_boolean tmp217;
  modelica_boolean tmp218;
  static const MMC_DEFSTRINGLIT(tmp219,91,"Variable violating min/max constraint: 200.0 <= dc.roo.air.cfd.u[30] <= 373.15, has value: ");
  modelica_string tmp220;
  modelica_metatype tmpMeta221;
  static int tmp222 = 0;
  if(!tmp222)
  {
    tmp217 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[189]] /* dc.roo.air.cfd.u[30] variable */),200.0);
    tmp218 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[189]] /* dc.roo.air.cfd.u[30] variable */),373.15);
    if(!(tmp217 && tmp218))
    {
      tmp220 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[189]] /* dc.roo.air.cfd.u[30] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta221 = stringAppend(MMC_REFSTRINGLIT(tmp219),tmp220);
      {
        const char* assert_cond = "(dc.roo.air.cfd.u[30] >= 200.0 and dc.roo.air.cfd.u[30] <= 373.15)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta221));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta221));
        }
      }
      tmp222 = 1;
    }
  }
  threadData->lastEquationSolved = 4869;
}

/*
equation index: 4870
type: ALGORITHM

  assert(dc.roo.air.cfd.u[31] >= 200.0 and dc.roo.air.cfd.u[31] <= 373.15, "Variable violating min/max constraint: 200.0 <= dc.roo.air.cfd.u[31] <= 373.15, has value: " + String(dc.roo.air.cfd.u[31], "g"));
*/
void s000_baseline_eqFunction_4870(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4870};
  modelica_boolean tmp223;
  modelica_boolean tmp224;
  static const MMC_DEFSTRINGLIT(tmp225,91,"Variable violating min/max constraint: 200.0 <= dc.roo.air.cfd.u[31] <= 373.15, has value: ");
  modelica_string tmp226;
  modelica_metatype tmpMeta227;
  static int tmp228 = 0;
  if(!tmp228)
  {
    tmp223 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[190]] /* dc.roo.air.cfd.u[31] variable */),200.0);
    tmp224 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[190]] /* dc.roo.air.cfd.u[31] variable */),373.15);
    if(!(tmp223 && tmp224))
    {
      tmp226 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[190]] /* dc.roo.air.cfd.u[31] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta227 = stringAppend(MMC_REFSTRINGLIT(tmp225),tmp226);
      {
        const char* assert_cond = "(dc.roo.air.cfd.u[31] >= 200.0 and dc.roo.air.cfd.u[31] <= 373.15)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta227));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta227));
        }
      }
      tmp228 = 1;
    }
  }
  threadData->lastEquationSolved = 4870;
}

/*
equation index: 4871
type: ALGORITHM

  assert(dc.roo.air.cfd.u[32] >= 200.0 and dc.roo.air.cfd.u[32] <= 373.15, "Variable violating min/max constraint: 200.0 <= dc.roo.air.cfd.u[32] <= 373.15, has value: " + String(dc.roo.air.cfd.u[32], "g"));
*/
void s000_baseline_eqFunction_4871(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4871};
  modelica_boolean tmp229;
  modelica_boolean tmp230;
  static const MMC_DEFSTRINGLIT(tmp231,91,"Variable violating min/max constraint: 200.0 <= dc.roo.air.cfd.u[32] <= 373.15, has value: ");
  modelica_string tmp232;
  modelica_metatype tmpMeta233;
  static int tmp234 = 0;
  if(!tmp234)
  {
    tmp229 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[191]] /* dc.roo.air.cfd.u[32] variable */),200.0);
    tmp230 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[191]] /* dc.roo.air.cfd.u[32] variable */),373.15);
    if(!(tmp229 && tmp230))
    {
      tmp232 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[191]] /* dc.roo.air.cfd.u[32] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta233 = stringAppend(MMC_REFSTRINGLIT(tmp231),tmp232);
      {
        const char* assert_cond = "(dc.roo.air.cfd.u[32] >= 200.0 and dc.roo.air.cfd.u[32] <= 373.15)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta233));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta233));
        }
      }
      tmp234 = 1;
    }
  }
  threadData->lastEquationSolved = 4871;
}

/*
equation index: 4872
type: ALGORITHM

  assert(dc.roo.air.cfd.u[33] >= 200.0 and dc.roo.air.cfd.u[33] <= 373.15, "Variable violating min/max constraint: 200.0 <= dc.roo.air.cfd.u[33] <= 373.15, has value: " + String(dc.roo.air.cfd.u[33], "g"));
*/
void s000_baseline_eqFunction_4872(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4872};
  modelica_boolean tmp235;
  modelica_boolean tmp236;
  static const MMC_DEFSTRINGLIT(tmp237,91,"Variable violating min/max constraint: 200.0 <= dc.roo.air.cfd.u[33] <= 373.15, has value: ");
  modelica_string tmp238;
  modelica_metatype tmpMeta239;
  static int tmp240 = 0;
  if(!tmp240)
  {
    tmp235 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[192]] /* dc.roo.air.cfd.u[33] variable */),200.0);
    tmp236 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[192]] /* dc.roo.air.cfd.u[33] variable */),373.15);
    if(!(tmp235 && tmp236))
    {
      tmp238 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[192]] /* dc.roo.air.cfd.u[33] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta239 = stringAppend(MMC_REFSTRINGLIT(tmp237),tmp238);
      {
        const char* assert_cond = "(dc.roo.air.cfd.u[33] >= 200.0 and dc.roo.air.cfd.u[33] <= 373.15)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta239));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta239));
        }
      }
      tmp240 = 1;
    }
  }
  threadData->lastEquationSolved = 4872;
}

/*
equation index: 4873
type: ALGORITHM

  assert(dc.roo.air.cfd.u[40] >= 0.0 and dc.roo.air.cfd.u[40] <= 1.0, "Variable violating min/max constraint: 0.0 <= dc.roo.air.cfd.u[40] <= 1.0, has value: " + String(dc.roo.air.cfd.u[40], "g"));
*/
void s000_baseline_eqFunction_4873(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4873};
  modelica_boolean tmp241;
  modelica_boolean tmp242;
  static const MMC_DEFSTRINGLIT(tmp243,86,"Variable violating min/max constraint: 0.0 <= dc.roo.air.cfd.u[40] <= 1.0, has value: ");
  modelica_string tmp244;
  modelica_metatype tmpMeta245;
  static int tmp246 = 0;
  if(!tmp246)
  {
    tmp241 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[199]] /* dc.roo.air.cfd.u[40] variable */),0.0);
    tmp242 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[199]] /* dc.roo.air.cfd.u[40] variable */),1.0);
    if(!(tmp241 && tmp242))
    {
      tmp244 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[199]] /* dc.roo.air.cfd.u[40] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta245 = stringAppend(MMC_REFSTRINGLIT(tmp243),tmp244);
      {
        const char* assert_cond = "(dc.roo.air.cfd.u[40] >= 0.0 and dc.roo.air.cfd.u[40] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta245));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta245));
        }
      }
      tmp246 = 1;
    }
  }
  threadData->lastEquationSolved = 4873;
}

/*
equation index: 4874
type: ALGORITHM

  assert(dc.roo.air.cfd.u[41] >= 0.0 and dc.roo.air.cfd.u[41] <= 1.0, "Variable violating min/max constraint: 0.0 <= dc.roo.air.cfd.u[41] <= 1.0, has value: " + String(dc.roo.air.cfd.u[41], "g"));
*/
void s000_baseline_eqFunction_4874(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4874};
  modelica_boolean tmp247;
  modelica_boolean tmp248;
  static const MMC_DEFSTRINGLIT(tmp249,86,"Variable violating min/max constraint: 0.0 <= dc.roo.air.cfd.u[41] <= 1.0, has value: ");
  modelica_string tmp250;
  modelica_metatype tmpMeta251;
  static int tmp252 = 0;
  if(!tmp252)
  {
    tmp247 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[200]] /* dc.roo.air.cfd.u[41] variable */),0.0);
    tmp248 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[200]] /* dc.roo.air.cfd.u[41] variable */),1.0);
    if(!(tmp247 && tmp248))
    {
      tmp250 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[200]] /* dc.roo.air.cfd.u[41] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta251 = stringAppend(MMC_REFSTRINGLIT(tmp249),tmp250);
      {
        const char* assert_cond = "(dc.roo.air.cfd.u[41] >= 0.0 and dc.roo.air.cfd.u[41] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta251));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta251));
        }
      }
      tmp252 = 1;
    }
  }
  threadData->lastEquationSolved = 4874;
}

/*
equation index: 4875
type: ALGORITHM

  assert(dc.roo.air.cfd.u[42] >= 0.0 and dc.roo.air.cfd.u[42] <= 1.0, "Variable violating min/max constraint: 0.0 <= dc.roo.air.cfd.u[42] <= 1.0, has value: " + String(dc.roo.air.cfd.u[42], "g"));
*/
void s000_baseline_eqFunction_4875(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4875};
  modelica_boolean tmp253;
  modelica_boolean tmp254;
  static const MMC_DEFSTRINGLIT(tmp255,86,"Variable violating min/max constraint: 0.0 <= dc.roo.air.cfd.u[42] <= 1.0, has value: ");
  modelica_string tmp256;
  modelica_metatype tmpMeta257;
  static int tmp258 = 0;
  if(!tmp258)
  {
    tmp253 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[201]] /* dc.roo.air.cfd.u[42] variable */),0.0);
    tmp254 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[201]] /* dc.roo.air.cfd.u[42] variable */),1.0);
    if(!(tmp253 && tmp254))
    {
      tmp256 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[201]] /* dc.roo.air.cfd.u[42] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta257 = stringAppend(MMC_REFSTRINGLIT(tmp255),tmp256);
      {
        const char* assert_cond = "(dc.roo.air.cfd.u[42] >= 0.0 and dc.roo.air.cfd.u[42] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta257));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta257));
        }
      }
      tmp258 = 1;
    }
  }
  threadData->lastEquationSolved = 4875;
}

/*
equation index: 4876
type: ALGORITHM

  assert(dc.roo.air.cfd.u[43] >= 0.0 and dc.roo.air.cfd.u[43] <= 1.0, "Variable violating min/max constraint: 0.0 <= dc.roo.air.cfd.u[43] <= 1.0, has value: " + String(dc.roo.air.cfd.u[43], "g"));
*/
void s000_baseline_eqFunction_4876(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4876};
  modelica_boolean tmp259;
  modelica_boolean tmp260;
  static const MMC_DEFSTRINGLIT(tmp261,86,"Variable violating min/max constraint: 0.0 <= dc.roo.air.cfd.u[43] <= 1.0, has value: ");
  modelica_string tmp262;
  modelica_metatype tmpMeta263;
  static int tmp264 = 0;
  if(!tmp264)
  {
    tmp259 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[202]] /* dc.roo.air.cfd.u[43] variable */),0.0);
    tmp260 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[202]] /* dc.roo.air.cfd.u[43] variable */),1.0);
    if(!(tmp259 && tmp260))
    {
      tmp262 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[202]] /* dc.roo.air.cfd.u[43] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta263 = stringAppend(MMC_REFSTRINGLIT(tmp261),tmp262);
      {
        const char* assert_cond = "(dc.roo.air.cfd.u[43] >= 0.0 and dc.roo.air.cfd.u[43] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta263));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta263));
        }
      }
      tmp264 = 1;
    }
  }
  threadData->lastEquationSolved = 4876;
}

/*
equation index: 4877
type: ALGORITHM

  assert(dc.roo.air.cfd.u[44] >= 0.0 and dc.roo.air.cfd.u[44] <= 1.0, "Variable violating min/max constraint: 0.0 <= dc.roo.air.cfd.u[44] <= 1.0, has value: " + String(dc.roo.air.cfd.u[44], "g"));
*/
void s000_baseline_eqFunction_4877(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4877};
  modelica_boolean tmp265;
  modelica_boolean tmp266;
  static const MMC_DEFSTRINGLIT(tmp267,86,"Variable violating min/max constraint: 0.0 <= dc.roo.air.cfd.u[44] <= 1.0, has value: ");
  modelica_string tmp268;
  modelica_metatype tmpMeta269;
  static int tmp270 = 0;
  if(!tmp270)
  {
    tmp265 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[203]] /* dc.roo.air.cfd.u[44] variable */),0.0);
    tmp266 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[203]] /* dc.roo.air.cfd.u[44] variable */),1.0);
    if(!(tmp265 && tmp266))
    {
      tmp268 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[203]] /* dc.roo.air.cfd.u[44] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta269 = stringAppend(MMC_REFSTRINGLIT(tmp267),tmp268);
      {
        const char* assert_cond = "(dc.roo.air.cfd.u[44] >= 0.0 and dc.roo.air.cfd.u[44] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta269));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta269));
        }
      }
      tmp270 = 1;
    }
  }
  threadData->lastEquationSolved = 4877;
}

/*
equation index: 4878
type: ALGORITHM

  assert(dc.roo.air.cfd.u[45] >= 0.0 and dc.roo.air.cfd.u[45] <= 1.0, "Variable violating min/max constraint: 0.0 <= dc.roo.air.cfd.u[45] <= 1.0, has value: " + String(dc.roo.air.cfd.u[45], "g"));
*/
void s000_baseline_eqFunction_4878(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4878};
  modelica_boolean tmp271;
  modelica_boolean tmp272;
  static const MMC_DEFSTRINGLIT(tmp273,86,"Variable violating min/max constraint: 0.0 <= dc.roo.air.cfd.u[45] <= 1.0, has value: ");
  modelica_string tmp274;
  modelica_metatype tmpMeta275;
  static int tmp276 = 0;
  if(!tmp276)
  {
    tmp271 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[204]] /* dc.roo.air.cfd.u[45] variable */),0.0);
    tmp272 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[204]] /* dc.roo.air.cfd.u[45] variable */),1.0);
    if(!(tmp271 && tmp272))
    {
      tmp274 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[204]] /* dc.roo.air.cfd.u[45] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta275 = stringAppend(MMC_REFSTRINGLIT(tmp273),tmp274);
      {
        const char* assert_cond = "(dc.roo.air.cfd.u[45] >= 0.0 and dc.roo.air.cfd.u[45] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta275));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",42,3,43,74,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta275));
        }
      }
      tmp276 = 1;
    }
  }
  threadData->lastEquationSolved = 4878;
}

/*
equation index: 4879
type: ALGORITHM

  assert(dc.roo.air.cfd.y[1] >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.cfd.y[1], has value: " + String(dc.roo.air.cfd.y[1], "g"));
*/
void s000_baseline_eqFunction_4879(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4879};
  modelica_boolean tmp277;
  static const MMC_DEFSTRINGLIT(tmp278,74,"Variable violating min constraint: 0.0 <= dc.roo.air.cfd.y[1], has value: ");
  modelica_string tmp279;
  modelica_metatype tmpMeta280;
  static int tmp281 = 0;
  if(!tmp281)
  {
    tmp277 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[541]] /* dc.roo.air.cfd.y[1] DISCRETE */),0.0);
    if(!tmp277)
    {
      tmp279 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[541]] /* dc.roo.air.cfd.y[1] DISCRETE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta280 = stringAppend(MMC_REFSTRINGLIT(tmp278),tmp279);
      {
        const char* assert_cond = "(dc.roo.air.cfd.y[1] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta280));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta280));
        }
      }
      tmp281 = 1;
    }
  }
  threadData->lastEquationSolved = 4879;
}

/*
equation index: 4880
type: ALGORITHM

  assert(dc.roo.air.cfd.y[2] >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.cfd.y[2], has value: " + String(dc.roo.air.cfd.y[2], "g"));
*/
void s000_baseline_eqFunction_4880(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4880};
  modelica_boolean tmp282;
  static const MMC_DEFSTRINGLIT(tmp283,74,"Variable violating min constraint: 0.0 <= dc.roo.air.cfd.y[2], has value: ");
  modelica_string tmp284;
  modelica_metatype tmpMeta285;
  static int tmp286 = 0;
  if(!tmp286)
  {
    tmp282 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[542]] /* dc.roo.air.cfd.y[2] DISCRETE */),0.0);
    if(!tmp282)
    {
      tmp284 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[542]] /* dc.roo.air.cfd.y[2] DISCRETE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta285 = stringAppend(MMC_REFSTRINGLIT(tmp283),tmp284);
      {
        const char* assert_cond = "(dc.roo.air.cfd.y[2] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta285));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta285));
        }
      }
      tmp286 = 1;
    }
  }
  threadData->lastEquationSolved = 4880;
}

/*
equation index: 4881
type: ALGORITHM

  assert(dc.roo.air.cfd.y[3] >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.cfd.y[3], has value: " + String(dc.roo.air.cfd.y[3], "g"));
*/
void s000_baseline_eqFunction_4881(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4881};
  modelica_boolean tmp287;
  static const MMC_DEFSTRINGLIT(tmp288,74,"Variable violating min constraint: 0.0 <= dc.roo.air.cfd.y[3], has value: ");
  modelica_string tmp289;
  modelica_metatype tmpMeta290;
  static int tmp291 = 0;
  if(!tmp291)
  {
    tmp287 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[543]] /* dc.roo.air.cfd.y[3] DISCRETE */),0.0);
    if(!tmp287)
    {
      tmp289 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[543]] /* dc.roo.air.cfd.y[3] DISCRETE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta290 = stringAppend(MMC_REFSTRINGLIT(tmp288),tmp289);
      {
        const char* assert_cond = "(dc.roo.air.cfd.y[3] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta290));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta290));
        }
      }
      tmp291 = 1;
    }
  }
  threadData->lastEquationSolved = 4881;
}

/*
equation index: 4882
type: ALGORITHM

  assert(dc.roo.air.cfd.y[4] >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.cfd.y[4], has value: " + String(dc.roo.air.cfd.y[4], "g"));
*/
void s000_baseline_eqFunction_4882(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4882};
  modelica_boolean tmp292;
  static const MMC_DEFSTRINGLIT(tmp293,74,"Variable violating min constraint: 0.0 <= dc.roo.air.cfd.y[4], has value: ");
  modelica_string tmp294;
  modelica_metatype tmpMeta295;
  static int tmp296 = 0;
  if(!tmp296)
  {
    tmp292 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[544]] /* dc.roo.air.cfd.y[4] DISCRETE */),0.0);
    if(!tmp292)
    {
      tmp294 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[544]] /* dc.roo.air.cfd.y[4] DISCRETE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta295 = stringAppend(MMC_REFSTRINGLIT(tmp293),tmp294);
      {
        const char* assert_cond = "(dc.roo.air.cfd.y[4] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta295));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta295));
        }
      }
      tmp296 = 1;
    }
  }
  threadData->lastEquationSolved = 4882;
}

/*
equation index: 4883
type: ALGORITHM

  assert(dc.roo.air.cfd.y[5] >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.cfd.y[5], has value: " + String(dc.roo.air.cfd.y[5], "g"));
*/
void s000_baseline_eqFunction_4883(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4883};
  modelica_boolean tmp297;
  static const MMC_DEFSTRINGLIT(tmp298,74,"Variable violating min constraint: 0.0 <= dc.roo.air.cfd.y[5], has value: ");
  modelica_string tmp299;
  modelica_metatype tmpMeta300;
  static int tmp301 = 0;
  if(!tmp301)
  {
    tmp297 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[545]] /* dc.roo.air.cfd.y[5] DISCRETE */),0.0);
    if(!tmp297)
    {
      tmp299 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[545]] /* dc.roo.air.cfd.y[5] DISCRETE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta300 = stringAppend(MMC_REFSTRINGLIT(tmp298),tmp299);
      {
        const char* assert_cond = "(dc.roo.air.cfd.y[5] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta300));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta300));
        }
      }
      tmp301 = 1;
    }
  }
  threadData->lastEquationSolved = 4883;
}

/*
equation index: 4884
type: ALGORITHM

  assert(dc.roo.air.cfd.y[6] >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.cfd.y[6], has value: " + String(dc.roo.air.cfd.y[6], "g"));
*/
void s000_baseline_eqFunction_4884(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4884};
  modelica_boolean tmp302;
  static const MMC_DEFSTRINGLIT(tmp303,74,"Variable violating min constraint: 0.0 <= dc.roo.air.cfd.y[6], has value: ");
  modelica_string tmp304;
  modelica_metatype tmpMeta305;
  static int tmp306 = 0;
  if(!tmp306)
  {
    tmp302 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[546]] /* dc.roo.air.cfd.y[6] DISCRETE */),0.0);
    if(!tmp302)
    {
      tmp304 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[546]] /* dc.roo.air.cfd.y[6] DISCRETE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta305 = stringAppend(MMC_REFSTRINGLIT(tmp303),tmp304);
      {
        const char* assert_cond = "(dc.roo.air.cfd.y[6] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta305));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta305));
        }
      }
      tmp306 = 1;
    }
  }
  threadData->lastEquationSolved = 4884;
}

/*
equation index: 4885
type: ALGORITHM

  assert(dc.roo.air.cfd.y[7] >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.air.cfd.y[7], has value: " + String(dc.roo.air.cfd.y[7], "g"));
*/
void s000_baseline_eqFunction_4885(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4885};
  modelica_boolean tmp307;
  static const MMC_DEFSTRINGLIT(tmp308,74,"Variable violating min constraint: 0.0 <= dc.roo.air.cfd.y[7], has value: ");
  modelica_string tmp309;
  modelica_metatype tmpMeta310;
  static int tmp311 = 0;
  if(!tmp311)
  {
    tmp307 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[547]] /* dc.roo.air.cfd.y[7] DISCRETE */),0.0);
    if(!tmp307)
    {
      tmp309 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[547]] /* dc.roo.air.cfd.y[7] DISCRETE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta310 = stringAppend(MMC_REFSTRINGLIT(tmp308),tmp309);
      {
        const char* assert_cond = "(dc.roo.air.cfd.y[7] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta310));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta310));
        }
      }
      tmp311 = 1;
    }
  }
  threadData->lastEquationSolved = 4885;
}

/*
equation index: 4886
type: ALGORITHM

  assert(dc.roo.air.cfd.y[20] >= 0.0 and dc.roo.air.cfd.y[20] <= 1.0, "Variable violating min/max constraint: 0.0 <= dc.roo.air.cfd.y[20] <= 1.0, has value: " + String(dc.roo.air.cfd.y[20], "g"));
*/
void s000_baseline_eqFunction_4886(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4886};
  modelica_boolean tmp312;
  modelica_boolean tmp313;
  static const MMC_DEFSTRINGLIT(tmp314,86,"Variable violating min/max constraint: 0.0 <= dc.roo.air.cfd.y[20] <= 1.0, has value: ");
  modelica_string tmp315;
  modelica_metatype tmpMeta316;
  static int tmp317 = 0;
  if(!tmp317)
  {
    tmp312 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[560]] /* dc.roo.air.cfd.y[20] DISCRETE */),0.0);
    tmp313 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[560]] /* dc.roo.air.cfd.y[20] DISCRETE */),1.0);
    if(!(tmp312 && tmp313))
    {
      tmp315 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[560]] /* dc.roo.air.cfd.y[20] DISCRETE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta316 = stringAppend(MMC_REFSTRINGLIT(tmp314),tmp315);
      {
        const char* assert_cond = "(dc.roo.air.cfd.y[20] >= 0.0 and dc.roo.air.cfd.y[20] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta316));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta316));
        }
      }
      tmp317 = 1;
    }
  }
  threadData->lastEquationSolved = 4886;
}

/*
equation index: 4887
type: ALGORITHM

  assert(dc.roo.air.cfd.y[21] >= 0.0 and dc.roo.air.cfd.y[21] <= 1.0, "Variable violating min/max constraint: 0.0 <= dc.roo.air.cfd.y[21] <= 1.0, has value: " + String(dc.roo.air.cfd.y[21], "g"));
*/
void s000_baseline_eqFunction_4887(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4887};
  modelica_boolean tmp318;
  modelica_boolean tmp319;
  static const MMC_DEFSTRINGLIT(tmp320,86,"Variable violating min/max constraint: 0.0 <= dc.roo.air.cfd.y[21] <= 1.0, has value: ");
  modelica_string tmp321;
  modelica_metatype tmpMeta322;
  static int tmp323 = 0;
  if(!tmp323)
  {
    tmp318 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[561]] /* dc.roo.air.cfd.y[21] DISCRETE */),0.0);
    tmp319 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[561]] /* dc.roo.air.cfd.y[21] DISCRETE */),1.0);
    if(!(tmp318 && tmp319))
    {
      tmp321 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[561]] /* dc.roo.air.cfd.y[21] DISCRETE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta322 = stringAppend(MMC_REFSTRINGLIT(tmp320),tmp321);
      {
        const char* assert_cond = "(dc.roo.air.cfd.y[21] >= 0.0 and dc.roo.air.cfd.y[21] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta322));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta322));
        }
      }
      tmp323 = 1;
    }
  }
  threadData->lastEquationSolved = 4887;
}

/*
equation index: 4888
type: ALGORITHM

  assert(dc.roo.air.cfd.y[22] >= 0.0 and dc.roo.air.cfd.y[22] <= 1.0, "Variable violating min/max constraint: 0.0 <= dc.roo.air.cfd.y[22] <= 1.0, has value: " + String(dc.roo.air.cfd.y[22], "g"));
*/
void s000_baseline_eqFunction_4888(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4888};
  modelica_boolean tmp324;
  modelica_boolean tmp325;
  static const MMC_DEFSTRINGLIT(tmp326,86,"Variable violating min/max constraint: 0.0 <= dc.roo.air.cfd.y[22] <= 1.0, has value: ");
  modelica_string tmp327;
  modelica_metatype tmpMeta328;
  static int tmp329 = 0;
  if(!tmp329)
  {
    tmp324 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[562]] /* dc.roo.air.cfd.y[22] DISCRETE */),0.0);
    tmp325 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[562]] /* dc.roo.air.cfd.y[22] DISCRETE */),1.0);
    if(!(tmp324 && tmp325))
    {
      tmp327 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[562]] /* dc.roo.air.cfd.y[22] DISCRETE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta328 = stringAppend(MMC_REFSTRINGLIT(tmp326),tmp327);
      {
        const char* assert_cond = "(dc.roo.air.cfd.y[22] >= 0.0 and dc.roo.air.cfd.y[22] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta328));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta328));
        }
      }
      tmp329 = 1;
    }
  }
  threadData->lastEquationSolved = 4888;
}

/*
equation index: 4889
type: ALGORITHM

  assert(dc.roo.air.cfd.y[23] >= 0.0 and dc.roo.air.cfd.y[23] <= 1.0, "Variable violating min/max constraint: 0.0 <= dc.roo.air.cfd.y[23] <= 1.0, has value: " + String(dc.roo.air.cfd.y[23], "g"));
*/
void s000_baseline_eqFunction_4889(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4889};
  modelica_boolean tmp330;
  modelica_boolean tmp331;
  static const MMC_DEFSTRINGLIT(tmp332,86,"Variable violating min/max constraint: 0.0 <= dc.roo.air.cfd.y[23] <= 1.0, has value: ");
  modelica_string tmp333;
  modelica_metatype tmpMeta334;
  static int tmp335 = 0;
  if(!tmp335)
  {
    tmp330 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[563]] /* dc.roo.air.cfd.y[23] DISCRETE */),0.0);
    tmp331 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[563]] /* dc.roo.air.cfd.y[23] DISCRETE */),1.0);
    if(!(tmp330 && tmp331))
    {
      tmp333 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[563]] /* dc.roo.air.cfd.y[23] DISCRETE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta334 = stringAppend(MMC_REFSTRINGLIT(tmp332),tmp333);
      {
        const char* assert_cond = "(dc.roo.air.cfd.y[23] >= 0.0 and dc.roo.air.cfd.y[23] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta334));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta334));
        }
      }
      tmp335 = 1;
    }
  }
  threadData->lastEquationSolved = 4889;
}

/*
equation index: 4890
type: ALGORITHM

  assert(dc.roo.air.cfd.y[24] >= 0.0 and dc.roo.air.cfd.y[24] <= 1.0, "Variable violating min/max constraint: 0.0 <= dc.roo.air.cfd.y[24] <= 1.0, has value: " + String(dc.roo.air.cfd.y[24], "g"));
*/
void s000_baseline_eqFunction_4890(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4890};
  modelica_boolean tmp336;
  modelica_boolean tmp337;
  static const MMC_DEFSTRINGLIT(tmp338,86,"Variable violating min/max constraint: 0.0 <= dc.roo.air.cfd.y[24] <= 1.0, has value: ");
  modelica_string tmp339;
  modelica_metatype tmpMeta340;
  static int tmp341 = 0;
  if(!tmp341)
  {
    tmp336 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[564]] /* dc.roo.air.cfd.y[24] DISCRETE */),0.0);
    tmp337 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[564]] /* dc.roo.air.cfd.y[24] DISCRETE */),1.0);
    if(!(tmp336 && tmp337))
    {
      tmp339 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[564]] /* dc.roo.air.cfd.y[24] DISCRETE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta340 = stringAppend(MMC_REFSTRINGLIT(tmp338),tmp339);
      {
        const char* assert_cond = "(dc.roo.air.cfd.y[24] >= 0.0 and dc.roo.air.cfd.y[24] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta340));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta340));
        }
      }
      tmp341 = 1;
    }
  }
  threadData->lastEquationSolved = 4890;
}

/*
equation index: 4891
type: ALGORITHM

  assert(dc.roo.air.cfd.y[25] >= 0.0 and dc.roo.air.cfd.y[25] <= 1.0, "Variable violating min/max constraint: 0.0 <= dc.roo.air.cfd.y[25] <= 1.0, has value: " + String(dc.roo.air.cfd.y[25], "g"));
*/
void s000_baseline_eqFunction_4891(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4891};
  modelica_boolean tmp342;
  modelica_boolean tmp343;
  static const MMC_DEFSTRINGLIT(tmp344,86,"Variable violating min/max constraint: 0.0 <= dc.roo.air.cfd.y[25] <= 1.0, has value: ");
  modelica_string tmp345;
  modelica_metatype tmpMeta346;
  static int tmp347 = 0;
  if(!tmp347)
  {
    tmp342 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[565]] /* dc.roo.air.cfd.y[25] DISCRETE */),0.0);
    tmp343 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[565]] /* dc.roo.air.cfd.y[25] DISCRETE */),1.0);
    if(!(tmp342 && tmp343))
    {
      tmp345 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[565]] /* dc.roo.air.cfd.y[25] DISCRETE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta346 = stringAppend(MMC_REFSTRINGLIT(tmp344),tmp345);
      {
        const char* assert_cond = "(dc.roo.air.cfd.y[25] >= 0.0 and dc.roo.air.cfd.y[25] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta346));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDExchange.mo",44,3,45,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta346));
        }
      }
      tmp347 = 1;
    }
  }
  threadData->lastEquationSolved = 4891;
}

/*
equation index: 4892
type: ALGORITHM

  assert(dc.roo.air.fluInt.p >= 8e4 and dc.roo.air.fluInt.p <= 1.2e5, "Variable violating min/max constraint: 8e4 <= dc.roo.air.fluInt.p <= 1.2e5, has value: " + String(dc.roo.air.fluInt.p, "g"));
*/
void s000_baseline_eqFunction_4892(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4892};
  modelica_boolean tmp348;
  modelica_boolean tmp349;
  static const MMC_DEFSTRINGLIT(tmp350,87,"Variable violating min/max constraint: 8e4 <= dc.roo.air.fluInt.p <= 1.2e5, has value: ");
  modelica_string tmp351;
  modelica_metatype tmpMeta352;
  static int tmp353 = 0;
  if(!tmp353)
  {
    tmp348 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[45]] /* dc.roo.air.fluInt.p STATE(1) */),8e4);
    tmp349 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[45]] /* dc.roo.air.fluInt.p STATE(1) */),1.2e5);
    if(!(tmp348 && tmp349))
    {
      tmp351 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[45]] /* dc.roo.air.fluInt.p STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta352 = stringAppend(MMC_REFSTRINGLIT(tmp350),tmp351);
      {
        const char* assert_cond = "(dc.roo.air.fluInt.p >= 8e4 and dc.roo.air.fluInt.p <= 1.2e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDFluidInterface.mo",44,3,50,71,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta352));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/CFDFluidInterface.mo",44,3,50,71,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta352));
        }
      }
      tmp353 = 1;
    }
  }
  threadData->lastEquationSolved = 4892;
}

/*
equation index: 4893
type: ALGORITHM

  assert(dc.roo.irRadGai.JOutConExtWin[1] >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadGai.JOutConExtWin[1], has value: " + String(dc.roo.irRadGai.JOutConExtWin[1], "g"));
*/
void s000_baseline_eqFunction_4893(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4893};
  modelica_boolean tmp354;
  static const MMC_DEFSTRINGLIT(tmp355,87,"Variable violating min constraint: 0.0 <= dc.roo.irRadGai.JOutConExtWin[1], has value: ");
  modelica_string tmp356;
  modelica_metatype tmpMeta357;
  static int tmp358 = 0;
  if(!tmp358)
  {
    tmp354 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[281]] /* dc.roo.irRadGai.JOutConExtWin[1] variable */),0.0);
    if(!tmp354)
    {
      tmp356 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[281]] /* dc.roo.irRadGai.JOutConExtWin[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta357 = stringAppend(MMC_REFSTRINGLIT(tmp355),tmp356);
      {
        const char* assert_cond = "(dc.roo.irRadGai.JOutConExtWin[1] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationGainDistribution.mo",19,3,21,73,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta357));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationGainDistribution.mo",19,3,21,73,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta357));
        }
      }
      tmp358 = 1;
    }
  }
  threadData->lastEquationSolved = 4893;
}

/*
equation index: 4894
type: ALGORITHM

  assert(dc.roo.irRadExc.J[1] <= 0.0, "Variable violating max constraint: dc.roo.irRadExc.J[1] <= 0.0, has value: " + String(dc.roo.irRadExc.J[1], "g"));
*/
void s000_baseline_eqFunction_4894(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4894};
  modelica_boolean tmp359;
  static const MMC_DEFSTRINGLIT(tmp360,75,"Variable violating max constraint: dc.roo.irRadExc.J[1] <= 0.0, has value: ");
  modelica_string tmp361;
  modelica_metatype tmpMeta362;
  static int tmp363 = 0;
  if(!tmp363)
  {
    tmp359 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[253]] /* dc.roo.irRadExc.J[1] variable */),0.0);
    if(!tmp359)
    {
      tmp361 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[253]] /* dc.roo.irRadExc.J[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta362 = stringAppend(MMC_REFSTRINGLIT(tmp360),tmp361);
      {
        const char* assert_cond = "(dc.roo.irRadExc.J[1] <= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",63,3,68,36,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta362));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",63,3,68,36,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta362));
        }
      }
      tmp363 = 1;
    }
  }
  threadData->lastEquationSolved = 4894;
}

/*
equation index: 4895
type: ALGORITHM

  assert(dc.roo.irRadExc.J[2] <= 0.0, "Variable violating max constraint: dc.roo.irRadExc.J[2] <= 0.0, has value: " + String(dc.roo.irRadExc.J[2], "g"));
*/
void s000_baseline_eqFunction_4895(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4895};
  modelica_boolean tmp364;
  static const MMC_DEFSTRINGLIT(tmp365,75,"Variable violating max constraint: dc.roo.irRadExc.J[2] <= 0.0, has value: ");
  modelica_string tmp366;
  modelica_metatype tmpMeta367;
  static int tmp368 = 0;
  if(!tmp368)
  {
    tmp364 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[254]] /* dc.roo.irRadExc.J[2] variable */),0.0);
    if(!tmp364)
    {
      tmp366 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[254]] /* dc.roo.irRadExc.J[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta367 = stringAppend(MMC_REFSTRINGLIT(tmp365),tmp366);
      {
        const char* assert_cond = "(dc.roo.irRadExc.J[2] <= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",63,3,68,36,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta367));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",63,3,68,36,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta367));
        }
      }
      tmp368 = 1;
    }
  }
  threadData->lastEquationSolved = 4895;
}

/*
equation index: 4896
type: ALGORITHM

  assert(dc.roo.irRadExc.J[3] <= 0.0, "Variable violating max constraint: dc.roo.irRadExc.J[3] <= 0.0, has value: " + String(dc.roo.irRadExc.J[3], "g"));
*/
void s000_baseline_eqFunction_4896(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4896};
  modelica_boolean tmp369;
  static const MMC_DEFSTRINGLIT(tmp370,75,"Variable violating max constraint: dc.roo.irRadExc.J[3] <= 0.0, has value: ");
  modelica_string tmp371;
  modelica_metatype tmpMeta372;
  static int tmp373 = 0;
  if(!tmp373)
  {
    tmp369 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[255]] /* dc.roo.irRadExc.J[3] variable */),0.0);
    if(!tmp369)
    {
      tmp371 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[255]] /* dc.roo.irRadExc.J[3] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta372 = stringAppend(MMC_REFSTRINGLIT(tmp370),tmp371);
      {
        const char* assert_cond = "(dc.roo.irRadExc.J[3] <= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",63,3,68,36,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta372));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",63,3,68,36,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta372));
        }
      }
      tmp373 = 1;
    }
  }
  threadData->lastEquationSolved = 4896;
}

/*
equation index: 4897
type: ALGORITHM

  assert(dc.roo.irRadExc.J[4] <= 0.0, "Variable violating max constraint: dc.roo.irRadExc.J[4] <= 0.0, has value: " + String(dc.roo.irRadExc.J[4], "g"));
*/
void s000_baseline_eqFunction_4897(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4897};
  modelica_boolean tmp374;
  static const MMC_DEFSTRINGLIT(tmp375,75,"Variable violating max constraint: dc.roo.irRadExc.J[4] <= 0.0, has value: ");
  modelica_string tmp376;
  modelica_metatype tmpMeta377;
  static int tmp378 = 0;
  if(!tmp378)
  {
    tmp374 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[256]] /* dc.roo.irRadExc.J[4] variable */),0.0);
    if(!tmp374)
    {
      tmp376 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[256]] /* dc.roo.irRadExc.J[4] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta377 = stringAppend(MMC_REFSTRINGLIT(tmp375),tmp376);
      {
        const char* assert_cond = "(dc.roo.irRadExc.J[4] <= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",63,3,68,36,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta377));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",63,3,68,36,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta377));
        }
      }
      tmp378 = 1;
    }
  }
  threadData->lastEquationSolved = 4897;
}

/*
equation index: 4898
type: ALGORITHM

  assert(dc.roo.irRadExc.J[5] <= 0.0, "Variable violating max constraint: dc.roo.irRadExc.J[5] <= 0.0, has value: " + String(dc.roo.irRadExc.J[5], "g"));
*/
void s000_baseline_eqFunction_4898(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4898};
  modelica_boolean tmp379;
  static const MMC_DEFSTRINGLIT(tmp380,75,"Variable violating max constraint: dc.roo.irRadExc.J[5] <= 0.0, has value: ");
  modelica_string tmp381;
  modelica_metatype tmpMeta382;
  static int tmp383 = 0;
  if(!tmp383)
  {
    tmp379 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[257]] /* dc.roo.irRadExc.J[5] variable */),0.0);
    if(!tmp379)
    {
      tmp381 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[257]] /* dc.roo.irRadExc.J[5] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta382 = stringAppend(MMC_REFSTRINGLIT(tmp380),tmp381);
      {
        const char* assert_cond = "(dc.roo.irRadExc.J[5] <= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",63,3,68,36,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta382));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",63,3,68,36,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta382));
        }
      }
      tmp383 = 1;
    }
  }
  threadData->lastEquationSolved = 4898;
}

/*
equation index: 4899
type: ALGORITHM

  assert(dc.roo.irRadExc.J[6] <= 0.0, "Variable violating max constraint: dc.roo.irRadExc.J[6] <= 0.0, has value: " + String(dc.roo.irRadExc.J[6], "g"));
*/
void s000_baseline_eqFunction_4899(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4899};
  modelica_boolean tmp384;
  static const MMC_DEFSTRINGLIT(tmp385,75,"Variable violating max constraint: dc.roo.irRadExc.J[6] <= 0.0, has value: ");
  modelica_string tmp386;
  modelica_metatype tmpMeta387;
  static int tmp388 = 0;
  if(!tmp388)
  {
    tmp384 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* dc.roo.irRadExc.J[6] variable */),0.0);
    if(!tmp384)
    {
      tmp386 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* dc.roo.irRadExc.J[6] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta387 = stringAppend(MMC_REFSTRINGLIT(tmp385),tmp386);
      {
        const char* assert_cond = "(dc.roo.irRadExc.J[6] <= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",63,3,68,36,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta387));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",63,3,68,36,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta387));
        }
      }
      tmp388 = 1;
    }
  }
  threadData->lastEquationSolved = 4899;
}

/*
equation index: 4900
type: ALGORITHM

  assert(dc.roo.irRadExc.G[1] >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadExc.G[1], has value: " + String(dc.roo.irRadExc.G[1], "g"));
*/
void s000_baseline_eqFunction_4900(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4900};
  modelica_boolean tmp389;
  static const MMC_DEFSTRINGLIT(tmp390,75,"Variable violating min constraint: 0.0 <= dc.roo.irRadExc.G[1], has value: ");
  modelica_string tmp391;
  modelica_metatype tmpMeta392;
  static int tmp393 = 0;
  if(!tmp393)
  {
    tmp389 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[247]] /* dc.roo.irRadExc.G[1] variable */),0.0);
    if(!tmp389)
    {
      tmp391 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[247]] /* dc.roo.irRadExc.G[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta392 = stringAppend(MMC_REFSTRINGLIT(tmp390),tmp391);
      {
        const char* assert_cond = "(dc.roo.irRadExc.G[1] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",70,3,74,37,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta392));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",70,3,74,37,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta392));
        }
      }
      tmp393 = 1;
    }
  }
  threadData->lastEquationSolved = 4900;
}

/*
equation index: 4901
type: ALGORITHM

  assert(dc.roo.irRadExc.G[2] >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadExc.G[2], has value: " + String(dc.roo.irRadExc.G[2], "g"));
*/
void s000_baseline_eqFunction_4901(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4901};
  modelica_boolean tmp394;
  static const MMC_DEFSTRINGLIT(tmp395,75,"Variable violating min constraint: 0.0 <= dc.roo.irRadExc.G[2], has value: ");
  modelica_string tmp396;
  modelica_metatype tmpMeta397;
  static int tmp398 = 0;
  if(!tmp398)
  {
    tmp394 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[248]] /* dc.roo.irRadExc.G[2] variable */),0.0);
    if(!tmp394)
    {
      tmp396 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[248]] /* dc.roo.irRadExc.G[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta397 = stringAppend(MMC_REFSTRINGLIT(tmp395),tmp396);
      {
        const char* assert_cond = "(dc.roo.irRadExc.G[2] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",70,3,74,37,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta397));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",70,3,74,37,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta397));
        }
      }
      tmp398 = 1;
    }
  }
  threadData->lastEquationSolved = 4901;
}

/*
equation index: 4902
type: ALGORITHM

  assert(dc.roo.irRadExc.G[3] >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadExc.G[3], has value: " + String(dc.roo.irRadExc.G[3], "g"));
*/
void s000_baseline_eqFunction_4902(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4902};
  modelica_boolean tmp399;
  static const MMC_DEFSTRINGLIT(tmp400,75,"Variable violating min constraint: 0.0 <= dc.roo.irRadExc.G[3], has value: ");
  modelica_string tmp401;
  modelica_metatype tmpMeta402;
  static int tmp403 = 0;
  if(!tmp403)
  {
    tmp399 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[249]] /* dc.roo.irRadExc.G[3] variable */),0.0);
    if(!tmp399)
    {
      tmp401 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[249]] /* dc.roo.irRadExc.G[3] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta402 = stringAppend(MMC_REFSTRINGLIT(tmp400),tmp401);
      {
        const char* assert_cond = "(dc.roo.irRadExc.G[3] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",70,3,74,37,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta402));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",70,3,74,37,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta402));
        }
      }
      tmp403 = 1;
    }
  }
  threadData->lastEquationSolved = 4902;
}

/*
equation index: 4903
type: ALGORITHM

  assert(dc.roo.irRadExc.G[4] >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadExc.G[4], has value: " + String(dc.roo.irRadExc.G[4], "g"));
*/
void s000_baseline_eqFunction_4903(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4903};
  modelica_boolean tmp404;
  static const MMC_DEFSTRINGLIT(tmp405,75,"Variable violating min constraint: 0.0 <= dc.roo.irRadExc.G[4], has value: ");
  modelica_string tmp406;
  modelica_metatype tmpMeta407;
  static int tmp408 = 0;
  if(!tmp408)
  {
    tmp404 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[250]] /* dc.roo.irRadExc.G[4] variable */),0.0);
    if(!tmp404)
    {
      tmp406 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[250]] /* dc.roo.irRadExc.G[4] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta407 = stringAppend(MMC_REFSTRINGLIT(tmp405),tmp406);
      {
        const char* assert_cond = "(dc.roo.irRadExc.G[4] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",70,3,74,37,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta407));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",70,3,74,37,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta407));
        }
      }
      tmp408 = 1;
    }
  }
  threadData->lastEquationSolved = 4903;
}

/*
equation index: 4904
type: ALGORITHM

  assert(dc.roo.irRadExc.G[5] >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadExc.G[5], has value: " + String(dc.roo.irRadExc.G[5], "g"));
*/
void s000_baseline_eqFunction_4904(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4904};
  modelica_boolean tmp409;
  static const MMC_DEFSTRINGLIT(tmp410,75,"Variable violating min constraint: 0.0 <= dc.roo.irRadExc.G[5], has value: ");
  modelica_string tmp411;
  modelica_metatype tmpMeta412;
  static int tmp413 = 0;
  if(!tmp413)
  {
    tmp409 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[251]] /* dc.roo.irRadExc.G[5] variable */),0.0);
    if(!tmp409)
    {
      tmp411 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[251]] /* dc.roo.irRadExc.G[5] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta412 = stringAppend(MMC_REFSTRINGLIT(tmp410),tmp411);
      {
        const char* assert_cond = "(dc.roo.irRadExc.G[5] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",70,3,74,37,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta412));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",70,3,74,37,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta412));
        }
      }
      tmp413 = 1;
    }
  }
  threadData->lastEquationSolved = 4904;
}

/*
equation index: 4905
type: ALGORITHM

  assert(dc.roo.irRadExc.G[6] >= 0.0, "Variable violating min constraint: 0.0 <= dc.roo.irRadExc.G[6], has value: " + String(dc.roo.irRadExc.G[6], "g"));
*/
void s000_baseline_eqFunction_4905(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4905};
  modelica_boolean tmp414;
  static const MMC_DEFSTRINGLIT(tmp415,75,"Variable violating min constraint: 0.0 <= dc.roo.irRadExc.G[6], has value: ");
  modelica_string tmp416;
  modelica_metatype tmpMeta417;
  static int tmp418 = 0;
  if(!tmp418)
  {
    tmp414 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[252]] /* dc.roo.irRadExc.G[6] variable */),0.0);
    if(!tmp414)
    {
      tmp416 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[252]] /* dc.roo.irRadExc.G[6] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta417 = stringAppend(MMC_REFSTRINGLIT(tmp415),tmp416);
      {
        const char* assert_cond = "(dc.roo.irRadExc.G[6] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",70,3,74,37,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta417));
        } else {
          FILE_INFO info = {"C:/OMLibs/modelica-buildings/Buildings/ThermalZones/Detailed/BaseClasses/InfraredRadiationExchange.mo",70,3,74,37,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta417));
        }
      }
      tmp418 = 1;
    }
  }
  threadData->lastEquationSolved = 4905;
}

/*
equation index: 4906
type: ALGORITHM

  assert(dc.sup[1].ports[1].h_outflow >= -1e10 and dc.sup[1].ports[1].h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= dc.sup[1].ports[1].h_outflow <= 1e10, has value: " + String(dc.sup[1].ports[1].h_outflow, "g"));
*/
void s000_baseline_eqFunction_4906(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4906};
  modelica_boolean tmp419;
  modelica_boolean tmp420;
  static const MMC_DEFSTRINGLIT(tmp421,97,"Variable violating min/max constraint: -1e10 <= dc.sup[1].ports[1].h_outflow <= 1e10, has value: ");
  modelica_string tmp422;
  modelica_metatype tmpMeta423;
  static int tmp424 = 0;
  if(!tmp424)
  {
    tmp419 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[367]] /* dc.sup[1].ports[1].h_outflow variable */),-1e10);
    tmp420 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[367]] /* dc.sup[1].ports[1].h_outflow variable */),1e10);
    if(!(tmp419 && tmp420))
    {
      tmp422 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[367]] /* dc.sup[1].ports[1].h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta423 = stringAppend(MMC_REFSTRINGLIT(tmp421),tmp422);
      {
        const char* assert_cond = "(dc.sup[1].ports[1].h_outflow >= -1e10 and dc.sup[1].ports[1].h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta423));
        } else {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta423));
        }
      }
      tmp424 = 1;
    }
  }
  threadData->lastEquationSolved = 4906;
}

/*
equation index: 4907
type: ALGORITHM

  assert(dc.sup[2].ports[1].h_outflow >= -1e10 and dc.sup[2].ports[1].h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= dc.sup[2].ports[1].h_outflow <= 1e10, has value: " + String(dc.sup[2].ports[1].h_outflow, "g"));
*/
void s000_baseline_eqFunction_4907(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4907};
  modelica_boolean tmp425;
  modelica_boolean tmp426;
  static const MMC_DEFSTRINGLIT(tmp427,97,"Variable violating min/max constraint: -1e10 <= dc.sup[2].ports[1].h_outflow <= 1e10, has value: ");
  modelica_string tmp428;
  modelica_metatype tmpMeta429;
  static int tmp430 = 0;
  if(!tmp430)
  {
    tmp425 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[368]] /* dc.sup[2].ports[1].h_outflow variable */),-1e10);
    tmp426 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[368]] /* dc.sup[2].ports[1].h_outflow variable */),1e10);
    if(!(tmp425 && tmp426))
    {
      tmp428 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[368]] /* dc.sup[2].ports[1].h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta429 = stringAppend(MMC_REFSTRINGLIT(tmp427),tmp428);
      {
        const char* assert_cond = "(dc.sup[2].ports[1].h_outflow >= -1e10 and dc.sup[2].ports[1].h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta429));
        } else {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta429));
        }
      }
      tmp430 = 1;
    }
  }
  threadData->lastEquationSolved = 4907;
}

/*
equation index: 4908
type: ALGORITHM

  assert(dc.sup[3].ports[1].h_outflow >= -1e10 and dc.sup[3].ports[1].h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= dc.sup[3].ports[1].h_outflow <= 1e10, has value: " + String(dc.sup[3].ports[1].h_outflow, "g"));
*/
void s000_baseline_eqFunction_4908(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4908};
  modelica_boolean tmp431;
  modelica_boolean tmp432;
  static const MMC_DEFSTRINGLIT(tmp433,97,"Variable violating min/max constraint: -1e10 <= dc.sup[3].ports[1].h_outflow <= 1e10, has value: ");
  modelica_string tmp434;
  modelica_metatype tmpMeta435;
  static int tmp436 = 0;
  if(!tmp436)
  {
    tmp431 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[369]] /* dc.sup[3].ports[1].h_outflow variable */),-1e10);
    tmp432 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[369]] /* dc.sup[3].ports[1].h_outflow variable */),1e10);
    if(!(tmp431 && tmp432))
    {
      tmp434 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[369]] /* dc.sup[3].ports[1].h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta435 = stringAppend(MMC_REFSTRINGLIT(tmp433),tmp434);
      {
        const char* assert_cond = "(dc.sup[3].ports[1].h_outflow >= -1e10 and dc.sup[3].ports[1].h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta435));
        } else {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta435));
        }
      }
      tmp436 = 1;
    }
  }
  threadData->lastEquationSolved = 4908;
}

/*
equation index: 4909
type: ALGORITHM

  assert(dc.sup[4].ports[1].h_outflow >= -1e10 and dc.sup[4].ports[1].h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= dc.sup[4].ports[1].h_outflow <= 1e10, has value: " + String(dc.sup[4].ports[1].h_outflow, "g"));
*/
void s000_baseline_eqFunction_4909(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4909};
  modelica_boolean tmp437;
  modelica_boolean tmp438;
  static const MMC_DEFSTRINGLIT(tmp439,97,"Variable violating min/max constraint: -1e10 <= dc.sup[4].ports[1].h_outflow <= 1e10, has value: ");
  modelica_string tmp440;
  modelica_metatype tmpMeta441;
  static int tmp442 = 0;
  if(!tmp442)
  {
    tmp437 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[370]] /* dc.sup[4].ports[1].h_outflow variable */),-1e10);
    tmp438 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[370]] /* dc.sup[4].ports[1].h_outflow variable */),1e10);
    if(!(tmp437 && tmp438))
    {
      tmp440 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[370]] /* dc.sup[4].ports[1].h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta441 = stringAppend(MMC_REFSTRINGLIT(tmp439),tmp440);
      {
        const char* assert_cond = "(dc.sup[4].ports[1].h_outflow >= -1e10 and dc.sup[4].ports[1].h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta441));
        } else {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta441));
        }
      }
      tmp442 = 1;
    }
  }
  threadData->lastEquationSolved = 4909;
}

/*
equation index: 4910
type: ALGORITHM

  assert(dc.sup[5].ports[1].h_outflow >= -1e10 and dc.sup[5].ports[1].h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= dc.sup[5].ports[1].h_outflow <= 1e10, has value: " + String(dc.sup[5].ports[1].h_outflow, "g"));
*/
void s000_baseline_eqFunction_4910(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4910};
  modelica_boolean tmp443;
  modelica_boolean tmp444;
  static const MMC_DEFSTRINGLIT(tmp445,97,"Variable violating min/max constraint: -1e10 <= dc.sup[5].ports[1].h_outflow <= 1e10, has value: ");
  modelica_string tmp446;
  modelica_metatype tmpMeta447;
  static int tmp448 = 0;
  if(!tmp448)
  {
    tmp443 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[371]] /* dc.sup[5].ports[1].h_outflow variable */),-1e10);
    tmp444 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[371]] /* dc.sup[5].ports[1].h_outflow variable */),1e10);
    if(!(tmp443 && tmp444))
    {
      tmp446 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[371]] /* dc.sup[5].ports[1].h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta447 = stringAppend(MMC_REFSTRINGLIT(tmp445),tmp446);
      {
        const char* assert_cond = "(dc.sup[5].ports[1].h_outflow >= -1e10 and dc.sup[5].ports[1].h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta447));
        } else {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta447));
        }
      }
      tmp448 = 1;
    }
  }
  threadData->lastEquationSolved = 4910;
}

/*
equation index: 4911
type: ALGORITHM

  assert(dc.sup[6].ports[1].h_outflow >= -1e10 and dc.sup[6].ports[1].h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= dc.sup[6].ports[1].h_outflow <= 1e10, has value: " + String(dc.sup[6].ports[1].h_outflow, "g"));
*/
void s000_baseline_eqFunction_4911(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4911};
  modelica_boolean tmp449;
  modelica_boolean tmp450;
  static const MMC_DEFSTRINGLIT(tmp451,97,"Variable violating min/max constraint: -1e10 <= dc.sup[6].ports[1].h_outflow <= 1e10, has value: ");
  modelica_string tmp452;
  modelica_metatype tmpMeta453;
  static int tmp454 = 0;
  if(!tmp454)
  {
    tmp449 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[372]] /* dc.sup[6].ports[1].h_outflow variable */),-1e10);
    tmp450 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[372]] /* dc.sup[6].ports[1].h_outflow variable */),1e10);
    if(!(tmp449 && tmp450))
    {
      tmp452 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[372]] /* dc.sup[6].ports[1].h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta453 = stringAppend(MMC_REFSTRINGLIT(tmp451),tmp452);
      {
        const char* assert_cond = "(dc.sup[6].ports[1].h_outflow >= -1e10 and dc.sup[6].ports[1].h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta453));
        } else {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta453));
        }
      }
      tmp454 = 1;
    }
  }
  threadData->lastEquationSolved = 4911;
}

/*
equation index: 4912
type: ALGORITHM

  assert(dc.retRes[1].port_b.h_outflow >= -1e10 and dc.retRes[1].port_b.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= dc.retRes[1].port_b.h_outflow <= 1e10, has value: " + String(dc.retRes[1].port_b.h_outflow, "g"));
*/
void s000_baseline_eqFunction_4912(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4912};
  modelica_boolean tmp455;
  modelica_boolean tmp456;
  static const MMC_DEFSTRINGLIT(tmp457,98,"Variable violating min/max constraint: -1e10 <= dc.retRes[1].port_b.h_outflow <= 1e10, has value: ");
  modelica_string tmp458;
  modelica_metatype tmpMeta459;
  static int tmp460 = 0;
  if(!tmp460)
  {
    tmp455 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[149]] /* dc.retRes[1].port_b.h_outflow variable */),-1e10);
    tmp456 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[149]] /* dc.retRes[1].port_b.h_outflow variable */),1e10);
    if(!(tmp455 && tmp456))
    {
      tmp458 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[149]] /* dc.retRes[1].port_b.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta459 = stringAppend(MMC_REFSTRINGLIT(tmp457),tmp458);
      {
        const char* assert_cond = "(dc.retRes[1].port_b.h_outflow >= -1e10 and dc.retRes[1].port_b.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta459));
        } else {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta459));
        }
      }
      tmp460 = 1;
    }
  }
  threadData->lastEquationSolved = 4912;
}

/*
equation index: 4913
type: ALGORITHM

  assert(dc.retRes[2].port_b.h_outflow >= -1e10 and dc.retRes[2].port_b.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= dc.retRes[2].port_b.h_outflow <= 1e10, has value: " + String(dc.retRes[2].port_b.h_outflow, "g"));
*/
void s000_baseline_eqFunction_4913(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4913};
  modelica_boolean tmp461;
  modelica_boolean tmp462;
  static const MMC_DEFSTRINGLIT(tmp463,98,"Variable violating min/max constraint: -1e10 <= dc.retRes[2].port_b.h_outflow <= 1e10, has value: ");
  modelica_string tmp464;
  modelica_metatype tmpMeta465;
  static int tmp466 = 0;
  if(!tmp466)
  {
    tmp461 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[150]] /* dc.retRes[2].port_b.h_outflow variable */),-1e10);
    tmp462 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[150]] /* dc.retRes[2].port_b.h_outflow variable */),1e10);
    if(!(tmp461 && tmp462))
    {
      tmp464 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[150]] /* dc.retRes[2].port_b.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta465 = stringAppend(MMC_REFSTRINGLIT(tmp463),tmp464);
      {
        const char* assert_cond = "(dc.retRes[2].port_b.h_outflow >= -1e10 and dc.retRes[2].port_b.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta465));
        } else {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta465));
        }
      }
      tmp466 = 1;
    }
  }
  threadData->lastEquationSolved = 4913;
}

/*
equation index: 4914
type: ALGORITHM

  assert(dc.retRes[3].port_b.h_outflow >= -1e10 and dc.retRes[3].port_b.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= dc.retRes[3].port_b.h_outflow <= 1e10, has value: " + String(dc.retRes[3].port_b.h_outflow, "g"));
*/
void s000_baseline_eqFunction_4914(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4914};
  modelica_boolean tmp467;
  modelica_boolean tmp468;
  static const MMC_DEFSTRINGLIT(tmp469,98,"Variable violating min/max constraint: -1e10 <= dc.retRes[3].port_b.h_outflow <= 1e10, has value: ");
  modelica_string tmp470;
  modelica_metatype tmpMeta471;
  static int tmp472 = 0;
  if(!tmp472)
  {
    tmp467 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[151]] /* dc.retRes[3].port_b.h_outflow variable */),-1e10);
    tmp468 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[151]] /* dc.retRes[3].port_b.h_outflow variable */),1e10);
    if(!(tmp467 && tmp468))
    {
      tmp470 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[151]] /* dc.retRes[3].port_b.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta471 = stringAppend(MMC_REFSTRINGLIT(tmp469),tmp470);
      {
        const char* assert_cond = "(dc.retRes[3].port_b.h_outflow >= -1e10 and dc.retRes[3].port_b.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta471));
        } else {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta471));
        }
      }
      tmp472 = 1;
    }
  }
  threadData->lastEquationSolved = 4914;
}

/*
equation index: 4915
type: ALGORITHM

  assert(dc.retRes[4].port_b.h_outflow >= -1e10 and dc.retRes[4].port_b.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= dc.retRes[4].port_b.h_outflow <= 1e10, has value: " + String(dc.retRes[4].port_b.h_outflow, "g"));
*/
void s000_baseline_eqFunction_4915(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4915};
  modelica_boolean tmp473;
  modelica_boolean tmp474;
  static const MMC_DEFSTRINGLIT(tmp475,98,"Variable violating min/max constraint: -1e10 <= dc.retRes[4].port_b.h_outflow <= 1e10, has value: ");
  modelica_string tmp476;
  modelica_metatype tmpMeta477;
  static int tmp478 = 0;
  if(!tmp478)
  {
    tmp473 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[152]] /* dc.retRes[4].port_b.h_outflow variable */),-1e10);
    tmp474 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[152]] /* dc.retRes[4].port_b.h_outflow variable */),1e10);
    if(!(tmp473 && tmp474))
    {
      tmp476 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[152]] /* dc.retRes[4].port_b.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta477 = stringAppend(MMC_REFSTRINGLIT(tmp475),tmp476);
      {
        const char* assert_cond = "(dc.retRes[4].port_b.h_outflow >= -1e10 and dc.retRes[4].port_b.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta477));
        } else {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta477));
        }
      }
      tmp478 = 1;
    }
  }
  threadData->lastEquationSolved = 4915;
}

/*
equation index: 4916
type: ALGORITHM

  assert(dc.retRes[5].port_b.h_outflow >= -1e10 and dc.retRes[5].port_b.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= dc.retRes[5].port_b.h_outflow <= 1e10, has value: " + String(dc.retRes[5].port_b.h_outflow, "g"));
*/
void s000_baseline_eqFunction_4916(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4916};
  modelica_boolean tmp479;
  modelica_boolean tmp480;
  static const MMC_DEFSTRINGLIT(tmp481,98,"Variable violating min/max constraint: -1e10 <= dc.retRes[5].port_b.h_outflow <= 1e10, has value: ");
  modelica_string tmp482;
  modelica_metatype tmpMeta483;
  static int tmp484 = 0;
  if(!tmp484)
  {
    tmp479 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[153]] /* dc.retRes[5].port_b.h_outflow variable */),-1e10);
    tmp480 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[153]] /* dc.retRes[5].port_b.h_outflow variable */),1e10);
    if(!(tmp479 && tmp480))
    {
      tmp482 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[153]] /* dc.retRes[5].port_b.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta483 = stringAppend(MMC_REFSTRINGLIT(tmp481),tmp482);
      {
        const char* assert_cond = "(dc.retRes[5].port_b.h_outflow >= -1e10 and dc.retRes[5].port_b.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta483));
        } else {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta483));
        }
      }
      tmp484 = 1;
    }
  }
  threadData->lastEquationSolved = 4916;
}

/*
equation index: 4917
type: ALGORITHM

  assert(dc.retRes[6].port_b.h_outflow >= -1e10 and dc.retRes[6].port_b.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= dc.retRes[6].port_b.h_outflow <= 1e10, has value: " + String(dc.retRes[6].port_b.h_outflow, "g"));
*/
void s000_baseline_eqFunction_4917(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4917};
  modelica_boolean tmp485;
  modelica_boolean tmp486;
  static const MMC_DEFSTRINGLIT(tmp487,98,"Variable violating min/max constraint: -1e10 <= dc.retRes[6].port_b.h_outflow <= 1e10, has value: ");
  modelica_string tmp488;
  modelica_metatype tmpMeta489;
  static int tmp490 = 0;
  if(!tmp490)
  {
    tmp485 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[154]] /* dc.retRes[6].port_b.h_outflow variable */),-1e10);
    tmp486 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[154]] /* dc.retRes[6].port_b.h_outflow variable */),1e10);
    if(!(tmp485 && tmp486))
    {
      tmp488 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[154]] /* dc.retRes[6].port_b.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta489 = stringAppend(MMC_REFSTRINGLIT(tmp487),tmp488);
      {
        const char* assert_cond = "(dc.retRes[6].port_b.h_outflow >= -1e10 and dc.retRes[6].port_b.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta489));
        } else {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta489));
        }
      }
      tmp490 = 1;
    }
  }
  threadData->lastEquationSolved = 4917;
}

/*
equation index: 4918
type: ALGORITHM

  assert(dc.T_sup_out[1] >= 278.15 and dc.T_sup_out[1] <= 303.15, "Variable violating min/max constraint: 278.15 <= dc.T_sup_out[1] <= 303.15, has value: " + String(dc.T_sup_out[1], "g"));
*/
void s000_baseline_eqFunction_4918(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4918};
  modelica_boolean tmp491;
  modelica_boolean tmp492;
  static const MMC_DEFSTRINGLIT(tmp493,87,"Variable violating min/max constraint: 278.15 <= dc.T_sup_out[1] <= 303.15, has value: ");
  modelica_string tmp494;
  modelica_metatype tmpMeta495;
  static int tmp496 = 0;
  if(!tmp496)
  {
    tmp491 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[125]] /* dc.T_sup_out[1] variable */),278.15);
    tmp492 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[125]] /* dc.T_sup_out[1] variable */),303.15);
    if(!(tmp491 && tmp492))
    {
      tmp494 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[125]] /* dc.T_sup_out[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta495 = stringAppend(MMC_REFSTRINGLIT(tmp493),tmp494);
      {
        const char* assert_cond = "(dc.T_sup_out[1] >= 278.15 and dc.T_sup_out[1] <= 303.15)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/Desktop/Repositories/CFD/dc_model.mo",181,3,184,70,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta495));
        } else {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/Desktop/Repositories/CFD/dc_model.mo",181,3,184,70,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta495));
        }
      }
      tmp496 = 1;
    }
  }
  threadData->lastEquationSolved = 4918;
}

/*
equation index: 4919
type: ALGORITHM

  assert(dc.T_sup_out[2] >= 278.15 and dc.T_sup_out[2] <= 303.15, "Variable violating min/max constraint: 278.15 <= dc.T_sup_out[2] <= 303.15, has value: " + String(dc.T_sup_out[2], "g"));
*/
void s000_baseline_eqFunction_4919(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4919};
  modelica_boolean tmp497;
  modelica_boolean tmp498;
  static const MMC_DEFSTRINGLIT(tmp499,87,"Variable violating min/max constraint: 278.15 <= dc.T_sup_out[2] <= 303.15, has value: ");
  modelica_string tmp500;
  modelica_metatype tmpMeta501;
  static int tmp502 = 0;
  if(!tmp502)
  {
    tmp497 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[126]] /* dc.T_sup_out[2] variable */),278.15);
    tmp498 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[126]] /* dc.T_sup_out[2] variable */),303.15);
    if(!(tmp497 && tmp498))
    {
      tmp500 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[126]] /* dc.T_sup_out[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta501 = stringAppend(MMC_REFSTRINGLIT(tmp499),tmp500);
      {
        const char* assert_cond = "(dc.T_sup_out[2] >= 278.15 and dc.T_sup_out[2] <= 303.15)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/Desktop/Repositories/CFD/dc_model.mo",181,3,184,70,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta501));
        } else {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/Desktop/Repositories/CFD/dc_model.mo",181,3,184,70,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta501));
        }
      }
      tmp502 = 1;
    }
  }
  threadData->lastEquationSolved = 4919;
}

/*
equation index: 4920
type: ALGORITHM

  assert(dc.T_sup_out[3] >= 278.15 and dc.T_sup_out[3] <= 303.15, "Variable violating min/max constraint: 278.15 <= dc.T_sup_out[3] <= 303.15, has value: " + String(dc.T_sup_out[3], "g"));
*/
void s000_baseline_eqFunction_4920(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4920};
  modelica_boolean tmp503;
  modelica_boolean tmp504;
  static const MMC_DEFSTRINGLIT(tmp505,87,"Variable violating min/max constraint: 278.15 <= dc.T_sup_out[3] <= 303.15, has value: ");
  modelica_string tmp506;
  modelica_metatype tmpMeta507;
  static int tmp508 = 0;
  if(!tmp508)
  {
    tmp503 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[127]] /* dc.T_sup_out[3] variable */),278.15);
    tmp504 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[127]] /* dc.T_sup_out[3] variable */),303.15);
    if(!(tmp503 && tmp504))
    {
      tmp506 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[127]] /* dc.T_sup_out[3] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta507 = stringAppend(MMC_REFSTRINGLIT(tmp505),tmp506);
      {
        const char* assert_cond = "(dc.T_sup_out[3] >= 278.15 and dc.T_sup_out[3] <= 303.15)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/Desktop/Repositories/CFD/dc_model.mo",181,3,184,70,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta507));
        } else {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/Desktop/Repositories/CFD/dc_model.mo",181,3,184,70,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta507));
        }
      }
      tmp508 = 1;
    }
  }
  threadData->lastEquationSolved = 4920;
}

/*
equation index: 4921
type: ALGORITHM

  assert(dc.T_sup_out[4] >= 278.15 and dc.T_sup_out[4] <= 303.15, "Variable violating min/max constraint: 278.15 <= dc.T_sup_out[4] <= 303.15, has value: " + String(dc.T_sup_out[4], "g"));
*/
void s000_baseline_eqFunction_4921(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4921};
  modelica_boolean tmp509;
  modelica_boolean tmp510;
  static const MMC_DEFSTRINGLIT(tmp511,87,"Variable violating min/max constraint: 278.15 <= dc.T_sup_out[4] <= 303.15, has value: ");
  modelica_string tmp512;
  modelica_metatype tmpMeta513;
  static int tmp514 = 0;
  if(!tmp514)
  {
    tmp509 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[128]] /* dc.T_sup_out[4] variable */),278.15);
    tmp510 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[128]] /* dc.T_sup_out[4] variable */),303.15);
    if(!(tmp509 && tmp510))
    {
      tmp512 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[128]] /* dc.T_sup_out[4] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta513 = stringAppend(MMC_REFSTRINGLIT(tmp511),tmp512);
      {
        const char* assert_cond = "(dc.T_sup_out[4] >= 278.15 and dc.T_sup_out[4] <= 303.15)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/Desktop/Repositories/CFD/dc_model.mo",181,3,184,70,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta513));
        } else {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/Desktop/Repositories/CFD/dc_model.mo",181,3,184,70,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta513));
        }
      }
      tmp514 = 1;
    }
  }
  threadData->lastEquationSolved = 4921;
}

/*
equation index: 4922
type: ALGORITHM

  assert(dc.T_sup_out[5] >= 278.15 and dc.T_sup_out[5] <= 303.15, "Variable violating min/max constraint: 278.15 <= dc.T_sup_out[5] <= 303.15, has value: " + String(dc.T_sup_out[5], "g"));
*/
void s000_baseline_eqFunction_4922(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4922};
  modelica_boolean tmp515;
  modelica_boolean tmp516;
  static const MMC_DEFSTRINGLIT(tmp517,87,"Variable violating min/max constraint: 278.15 <= dc.T_sup_out[5] <= 303.15, has value: ");
  modelica_string tmp518;
  modelica_metatype tmpMeta519;
  static int tmp520 = 0;
  if(!tmp520)
  {
    tmp515 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[129]] /* dc.T_sup_out[5] variable */),278.15);
    tmp516 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[129]] /* dc.T_sup_out[5] variable */),303.15);
    if(!(tmp515 && tmp516))
    {
      tmp518 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[129]] /* dc.T_sup_out[5] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta519 = stringAppend(MMC_REFSTRINGLIT(tmp517),tmp518);
      {
        const char* assert_cond = "(dc.T_sup_out[5] >= 278.15 and dc.T_sup_out[5] <= 303.15)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/Desktop/Repositories/CFD/dc_model.mo",181,3,184,70,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta519));
        } else {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/Desktop/Repositories/CFD/dc_model.mo",181,3,184,70,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta519));
        }
      }
      tmp520 = 1;
    }
  }
  threadData->lastEquationSolved = 4922;
}

/*
equation index: 4923
type: ALGORITHM

  assert(dc.T_sup_out[6] >= 278.15 and dc.T_sup_out[6] <= 303.15, "Variable violating min/max constraint: 278.15 <= dc.T_sup_out[6] <= 303.15, has value: " + String(dc.T_sup_out[6], "g"));
*/
void s000_baseline_eqFunction_4923(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4923};
  modelica_boolean tmp521;
  modelica_boolean tmp522;
  static const MMC_DEFSTRINGLIT(tmp523,87,"Variable violating min/max constraint: 278.15 <= dc.T_sup_out[6] <= 303.15, has value: ");
  modelica_string tmp524;
  modelica_metatype tmpMeta525;
  static int tmp526 = 0;
  if(!tmp526)
  {
    tmp521 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[130]] /* dc.T_sup_out[6] variable */),278.15);
    tmp522 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[130]] /* dc.T_sup_out[6] variable */),303.15);
    if(!(tmp521 && tmp522))
    {
      tmp524 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[130]] /* dc.T_sup_out[6] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta525 = stringAppend(MMC_REFSTRINGLIT(tmp523),tmp524);
      {
        const char* assert_cond = "(dc.T_sup_out[6] >= 278.15 and dc.T_sup_out[6] <= 303.15)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/Desktop/Repositories/CFD/dc_model.mo",181,3,184,70,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta525));
        } else {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/Desktop/Repositories/CFD/dc_model.mo",181,3,184,70,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta525));
        }
      }
      tmp526 = 1;
    }
  }
  threadData->lastEquationSolved = 4923;
}

/*
equation index: 4924
type: ALGORITHM

  assert(fanTable.y[1] >= 0.0 and fanTable.y[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= fanTable.y[1] <= 1.0, has value: " + String(fanTable.y[1], "g"));
*/
void s000_baseline_eqFunction_4924(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4924};
  modelica_boolean tmp527;
  modelica_boolean tmp528;
  static const MMC_DEFSTRINGLIT(tmp529,79,"Variable violating min/max constraint: 0.0 <= fanTable.y[1] <= 1.0, has value: ");
  modelica_string tmp530;
  modelica_metatype tmpMeta531;
  static int tmp532 = 0;
  if(!tmp532)
  {
    tmp527 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[442]] /* fanTable.y[1] variable */),0.0);
    tmp528 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[442]] /* fanTable.y[1] variable */),1.0);
    if(!(tmp527 && tmp528))
    {
      tmp530 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[442]] /* fanTable.y[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta531 = stringAppend(MMC_REFSTRINGLIT(tmp529),tmp530);
      {
        const char* assert_cond = "(fanTable.y[1] >= 0.0 and fanTable.y[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Interfaces.mo",314,5,315,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta531));
        } else {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Interfaces.mo",314,5,315,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta531));
        }
      }
      tmp532 = 1;
    }
  }
  threadData->lastEquationSolved = 4924;
}

/*
equation index: 4925
type: ALGORITHM

  assert(fanTable.y[2] >= 0.0 and fanTable.y[2] <= 1.0, "Variable violating min/max constraint: 0.0 <= fanTable.y[2] <= 1.0, has value: " + String(fanTable.y[2], "g"));
*/
void s000_baseline_eqFunction_4925(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4925};
  modelica_boolean tmp533;
  modelica_boolean tmp534;
  static const MMC_DEFSTRINGLIT(tmp535,79,"Variable violating min/max constraint: 0.0 <= fanTable.y[2] <= 1.0, has value: ");
  modelica_string tmp536;
  modelica_metatype tmpMeta537;
  static int tmp538 = 0;
  if(!tmp538)
  {
    tmp533 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[443]] /* fanTable.y[2] variable */),0.0);
    tmp534 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[443]] /* fanTable.y[2] variable */),1.0);
    if(!(tmp533 && tmp534))
    {
      tmp536 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[443]] /* fanTable.y[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta537 = stringAppend(MMC_REFSTRINGLIT(tmp535),tmp536);
      {
        const char* assert_cond = "(fanTable.y[2] >= 0.0 and fanTable.y[2] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Interfaces.mo",314,5,315,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta537));
        } else {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Interfaces.mo",314,5,315,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta537));
        }
      }
      tmp538 = 1;
    }
  }
  threadData->lastEquationSolved = 4925;
}

/*
equation index: 4926
type: ALGORITHM

  assert(fanTable.y[3] >= 0.0 and fanTable.y[3] <= 1.0, "Variable violating min/max constraint: 0.0 <= fanTable.y[3] <= 1.0, has value: " + String(fanTable.y[3], "g"));
*/
void s000_baseline_eqFunction_4926(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4926};
  modelica_boolean tmp539;
  modelica_boolean tmp540;
  static const MMC_DEFSTRINGLIT(tmp541,79,"Variable violating min/max constraint: 0.0 <= fanTable.y[3] <= 1.0, has value: ");
  modelica_string tmp542;
  modelica_metatype tmpMeta543;
  static int tmp544 = 0;
  if(!tmp544)
  {
    tmp539 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[444]] /* fanTable.y[3] variable */),0.0);
    tmp540 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[444]] /* fanTable.y[3] variable */),1.0);
    if(!(tmp539 && tmp540))
    {
      tmp542 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[444]] /* fanTable.y[3] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta543 = stringAppend(MMC_REFSTRINGLIT(tmp541),tmp542);
      {
        const char* assert_cond = "(fanTable.y[3] >= 0.0 and fanTable.y[3] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Interfaces.mo",314,5,315,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta543));
        } else {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Interfaces.mo",314,5,315,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta543));
        }
      }
      tmp544 = 1;
    }
  }
  threadData->lastEquationSolved = 4926;
}

/*
equation index: 4927
type: ALGORITHM

  assert(fanTable.y[4] >= 0.0 and fanTable.y[4] <= 1.0, "Variable violating min/max constraint: 0.0 <= fanTable.y[4] <= 1.0, has value: " + String(fanTable.y[4], "g"));
*/
void s000_baseline_eqFunction_4927(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4927};
  modelica_boolean tmp545;
  modelica_boolean tmp546;
  static const MMC_DEFSTRINGLIT(tmp547,79,"Variable violating min/max constraint: 0.0 <= fanTable.y[4] <= 1.0, has value: ");
  modelica_string tmp548;
  modelica_metatype tmpMeta549;
  static int tmp550 = 0;
  if(!tmp550)
  {
    tmp545 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[445]] /* fanTable.y[4] variable */),0.0);
    tmp546 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[445]] /* fanTable.y[4] variable */),1.0);
    if(!(tmp545 && tmp546))
    {
      tmp548 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[445]] /* fanTable.y[4] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta549 = stringAppend(MMC_REFSTRINGLIT(tmp547),tmp548);
      {
        const char* assert_cond = "(fanTable.y[4] >= 0.0 and fanTable.y[4] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Interfaces.mo",314,5,315,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta549));
        } else {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Interfaces.mo",314,5,315,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta549));
        }
      }
      tmp550 = 1;
    }
  }
  threadData->lastEquationSolved = 4927;
}

/*
equation index: 4928
type: ALGORITHM

  assert(fanTable.y[5] >= 0.0 and fanTable.y[5] <= 1.0, "Variable violating min/max constraint: 0.0 <= fanTable.y[5] <= 1.0, has value: " + String(fanTable.y[5], "g"));
*/
void s000_baseline_eqFunction_4928(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4928};
  modelica_boolean tmp551;
  modelica_boolean tmp552;
  static const MMC_DEFSTRINGLIT(tmp553,79,"Variable violating min/max constraint: 0.0 <= fanTable.y[5] <= 1.0, has value: ");
  modelica_string tmp554;
  modelica_metatype tmpMeta555;
  static int tmp556 = 0;
  if(!tmp556)
  {
    tmp551 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[446]] /* fanTable.y[5] variable */),0.0);
    tmp552 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[446]] /* fanTable.y[5] variable */),1.0);
    if(!(tmp551 && tmp552))
    {
      tmp554 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[446]] /* fanTable.y[5] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta555 = stringAppend(MMC_REFSTRINGLIT(tmp553),tmp554);
      {
        const char* assert_cond = "(fanTable.y[5] >= 0.0 and fanTable.y[5] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Interfaces.mo",314,5,315,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta555));
        } else {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Interfaces.mo",314,5,315,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta555));
        }
      }
      tmp556 = 1;
    }
  }
  threadData->lastEquationSolved = 4928;
}

/*
equation index: 4929
type: ALGORITHM

  assert(fanTable.y[6] >= 0.0 and fanTable.y[6] <= 1.0, "Variable violating min/max constraint: 0.0 <= fanTable.y[6] <= 1.0, has value: " + String(fanTable.y[6], "g"));
*/
void s000_baseline_eqFunction_4929(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4929};
  modelica_boolean tmp557;
  modelica_boolean tmp558;
  static const MMC_DEFSTRINGLIT(tmp559,79,"Variable violating min/max constraint: 0.0 <= fanTable.y[6] <= 1.0, has value: ");
  modelica_string tmp560;
  modelica_metatype tmpMeta561;
  static int tmp562 = 0;
  if(!tmp562)
  {
    tmp557 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[447]] /* fanTable.y[6] variable */),0.0);
    tmp558 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[447]] /* fanTable.y[6] variable */),1.0);
    if(!(tmp557 && tmp558))
    {
      tmp560 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[447]] /* fanTable.y[6] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta561 = stringAppend(MMC_REFSTRINGLIT(tmp559),tmp560);
      {
        const char* assert_cond = "(fanTable.y[6] >= 0.0 and fanTable.y[6] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Interfaces.mo",314,5,315,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta561));
        } else {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Interfaces.mo",314,5,315,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta561));
        }
      }
      tmp562 = 1;
    }
  }
  threadData->lastEquationSolved = 4929;
}

/*
equation index: 4841
type: ALGORITHM

  assert(dc.retSink.ports[6].h_outflow >= -1e10 and dc.retSink.ports[6].h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= dc.retSink.ports[6].h_outflow <= 1e10, has value: " + String(dc.retSink.ports[6].h_outflow, "g"));
*/
void s000_baseline_eqFunction_4841(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4841};
  modelica_boolean tmp563;
  modelica_boolean tmp564;
  static const MMC_DEFSTRINGLIT(tmp565,98,"Variable violating min/max constraint: -1e10 <= dc.retSink.ports[6].h_outflow <= 1e10, has value: ");
  modelica_string tmp566;
  modelica_metatype tmpMeta567;
  static int tmp568 = 0;
  if(!tmp568)
  {
    tmp563 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[158]] /* dc.retSink.ports[6].h_outflow variable */),-1e10);
    tmp564 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[158]] /* dc.retSink.ports[6].h_outflow variable */),1e10);
    if(!(tmp563 && tmp564))
    {
      tmp566 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[158]] /* dc.retSink.ports[6].h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta567 = stringAppend(MMC_REFSTRINGLIT(tmp565),tmp566);
      {
        const char* assert_cond = "(dc.retSink.ports[6].h_outflow >= -1e10 and dc.retSink.ports[6].h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta567));
        } else {
          FILE_INFO info = {"C:/Users/ZacharyCooper-Baldoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta567));
        }
      }
      tmp568 = 1;
    }
  }
  threadData->lastEquationSolved = 4841;
}
/* function to check assert after a step is done */
OMC_DISABLE_OPT
int s000_baseline_checkForAsserts(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[99])(DATA*, threadData_t*) = {
    s000_baseline_eqFunction_4930,
    s000_baseline_eqFunction_4931,
    s000_baseline_eqFunction_4932,
    s000_baseline_eqFunction_4933,
    s000_baseline_eqFunction_4934,
    s000_baseline_eqFunction_4935,
    s000_baseline_eqFunction_4936,
    s000_baseline_eqFunction_4937,
    s000_baseline_eqFunction_4938,
    s000_baseline_eqFunction_4939,
    s000_baseline_eqFunction_4842,
    s000_baseline_eqFunction_4843,
    s000_baseline_eqFunction_4844,
    s000_baseline_eqFunction_4845,
    s000_baseline_eqFunction_4846,
    s000_baseline_eqFunction_4847,
    s000_baseline_eqFunction_4848,
    s000_baseline_eqFunction_4849,
    s000_baseline_eqFunction_4850,
    s000_baseline_eqFunction_4851,
    s000_baseline_eqFunction_4852,
    s000_baseline_eqFunction_4853,
    s000_baseline_eqFunction_4854,
    s000_baseline_eqFunction_4855,
    s000_baseline_eqFunction_4856,
    s000_baseline_eqFunction_4857,
    s000_baseline_eqFunction_4858,
    s000_baseline_eqFunction_4859,
    s000_baseline_eqFunction_4860,
    s000_baseline_eqFunction_4861,
    s000_baseline_eqFunction_4862,
    s000_baseline_eqFunction_4863,
    s000_baseline_eqFunction_4864,
    s000_baseline_eqFunction_4865,
    s000_baseline_eqFunction_4866,
    s000_baseline_eqFunction_4867,
    s000_baseline_eqFunction_4868,
    s000_baseline_eqFunction_4869,
    s000_baseline_eqFunction_4870,
    s000_baseline_eqFunction_4871,
    s000_baseline_eqFunction_4872,
    s000_baseline_eqFunction_4873,
    s000_baseline_eqFunction_4874,
    s000_baseline_eqFunction_4875,
    s000_baseline_eqFunction_4876,
    s000_baseline_eqFunction_4877,
    s000_baseline_eqFunction_4878,
    s000_baseline_eqFunction_4879,
    s000_baseline_eqFunction_4880,
    s000_baseline_eqFunction_4881,
    s000_baseline_eqFunction_4882,
    s000_baseline_eqFunction_4883,
    s000_baseline_eqFunction_4884,
    s000_baseline_eqFunction_4885,
    s000_baseline_eqFunction_4886,
    s000_baseline_eqFunction_4887,
    s000_baseline_eqFunction_4888,
    s000_baseline_eqFunction_4889,
    s000_baseline_eqFunction_4890,
    s000_baseline_eqFunction_4891,
    s000_baseline_eqFunction_4892,
    s000_baseline_eqFunction_4893,
    s000_baseline_eqFunction_4894,
    s000_baseline_eqFunction_4895,
    s000_baseline_eqFunction_4896,
    s000_baseline_eqFunction_4897,
    s000_baseline_eqFunction_4898,
    s000_baseline_eqFunction_4899,
    s000_baseline_eqFunction_4900,
    s000_baseline_eqFunction_4901,
    s000_baseline_eqFunction_4902,
    s000_baseline_eqFunction_4903,
    s000_baseline_eqFunction_4904,
    s000_baseline_eqFunction_4905,
    s000_baseline_eqFunction_4906,
    s000_baseline_eqFunction_4907,
    s000_baseline_eqFunction_4908,
    s000_baseline_eqFunction_4909,
    s000_baseline_eqFunction_4910,
    s000_baseline_eqFunction_4911,
    s000_baseline_eqFunction_4912,
    s000_baseline_eqFunction_4913,
    s000_baseline_eqFunction_4914,
    s000_baseline_eqFunction_4915,
    s000_baseline_eqFunction_4916,
    s000_baseline_eqFunction_4917,
    s000_baseline_eqFunction_4918,
    s000_baseline_eqFunction_4919,
    s000_baseline_eqFunction_4920,
    s000_baseline_eqFunction_4921,
    s000_baseline_eqFunction_4922,
    s000_baseline_eqFunction_4923,
    s000_baseline_eqFunction_4924,
    s000_baseline_eqFunction_4925,
    s000_baseline_eqFunction_4926,
    s000_baseline_eqFunction_4927,
    s000_baseline_eqFunction_4928,
    s000_baseline_eqFunction_4929,
    s000_baseline_eqFunction_4841
  };
  
  for (int id = 0; id < 99; id++) {
    eqFunctions[id](data, threadData);
  }
  
  return 0;
}

#if defined(__cplusplus)
}
#endif
