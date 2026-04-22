/* Initialization */
#include "tmp_two_returns_res_model.h"
#include "tmp_two_returns_res_11mix.h"
#include "tmp_two_returns_res_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void tmp_two_returns_res_functionInitialEquations_0(DATA *data, threadData_t *threadData);
void tmp_two_returns_res_functionInitialEquations_1(DATA *data, threadData_t *threadData);

int tmp_two_returns_res_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  data->simulationInfo->discreteCall = 1;
  tmp_two_returns_res_functionInitialEquations_0(data, threadData);
  tmp_two_returns_res_functionInitialEquations_1(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  return 0;
}
extern void tmp_two_returns_res_eqFunction_1(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_2(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_3(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_4(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_5(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_6(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_7(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_8(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_9(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_10(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_11(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_12(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_13(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_14(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_15(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_16(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_17(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_18(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_19(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_20(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_21(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_22(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_23(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_24(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_25(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_26(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_27(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_28(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_29(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_30(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_31(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_32(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_33(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_34(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_35(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_36(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_37(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_38(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_39(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_40(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_41(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_42(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_43(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_44(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_45(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_46(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_47(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_48(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_49(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_50(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1180(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_52(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_53(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_54(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_55(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_56(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_57(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_58(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_59(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_60(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_61(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_62(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_63(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_64(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_65(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_66(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_67(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_68(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_69(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_70(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_71(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_72(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_73(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_74(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_75(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_76(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_77(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_78(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_79(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_80(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_81(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_82(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_83(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_84(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_85(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_86(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_87(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_88(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_89(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_90(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_91(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_92(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_93(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_94(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_95(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_96(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_97(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_98(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_99(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_100(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_101(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_102(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_103(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_104(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_105(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_106(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_107(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_108(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_109(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_110(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_111(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_112(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_113(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_114(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_115(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_116(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_117(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_118(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_119(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_120(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_121(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_122(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_123(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_124(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_125(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_126(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_127(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_128(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_129(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_130(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_131(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_132(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_133(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_134(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_135(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_136(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_137(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_138(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_139(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_140(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_141(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_142(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_143(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_144(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_145(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_146(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_147(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_148(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_149(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_150(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_151(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_152(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_153(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_154(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1282(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1283(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1284(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1287(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1288(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1291(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1292(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1295(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1296(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1299(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1300(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1303(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1304(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1307(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1308(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1309(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1310(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1311(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1312(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1313(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1314(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_176(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_177(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_178(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_179(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_180(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_181(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_182(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_183(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_184(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_185(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_186(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_187(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_188(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_189(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1242(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_191(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_192(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1230(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_194(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_195(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1232(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_197(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_198(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1236(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_200(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_201(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1229(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_203(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_204(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1274(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1235(DATA *data, threadData_t *threadData);


/*
equation index: 828
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
void tmp_two_returns_res_eqFunction_828(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,828};
  /* Linear equation system */
  int retValue;
  double aux_x[5] = { (data->localData[1]->realVars[data->simulationInfo->realVarsIndex[115]] /* roo.irRadExc.J[2] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[117]] /* roo.irRadExc.J[4] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[116]] /* roo.irRadExc.J[3] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[114]] /* roo.irRadExc.J[1] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[119]] /* roo.irRadExc.J[6] variable */) };
  infoStreamPrint(OMC_LOG_DT, 0, "Solving linear system 828 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);

  retValue = solve_linear_system(data, threadData, 1, &aux_x[0]);

  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,828};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving linear system 828 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[115]] /* roo.irRadExc.J[2] variable */) = aux_x[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[117]] /* roo.irRadExc.J[4] variable */) = aux_x[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[116]] /* roo.irRadExc.J[3] variable */) = aux_x[2];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[114]] /* roo.irRadExc.J[1] variable */) = aux_x[3];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[119]] /* roo.irRadExc.J[6] variable */) = aux_x[4];

  threadData->lastEquationSolved = 828;
}
extern void tmp_two_returns_res_eqFunction_1273(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1285(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1286(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1270(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1305(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1306(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1269(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1297(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1298(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1271(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1301(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1302(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1268(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1289(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1290(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1272(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1293(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1294(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_250(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_251(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_252(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_253(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_254(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_255(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_256(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_257(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_258(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_259(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_260(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_261(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_262(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1181(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_264(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_265(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_266(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_267(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_268(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_269(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_270(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_271(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_272(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_273(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_274(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_275(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_276(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_277(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_278(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_279(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_280(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_281(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_282(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_283(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_284(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_285(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_286(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_287(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_288(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_289(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_290(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_291(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_292(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_293(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_294(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_295(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_296(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_297(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_298(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_299(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_300(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_301(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_302(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_303(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_304(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_305(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_306(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_307(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_308(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_309(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_310(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_311(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_312(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_313(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_314(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_315(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_316(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1333(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1334(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1320(DATA *data, threadData_t *threadData);


/*
equation index: 917
type: SIMPLE_ASSIGN
roo.air.cfd.u[13] = 0.1 * (-retRes2.dp) * retRes2.m_flow_nominal_pos
*/
void tmp_two_returns_res_eqFunction_917(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,917};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[81]] /* roo.air.cfd.u[13] variable */) = (0.1) * (((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[65]] /* retRes2.dp variable */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[40]] /* retRes2.m_flow_nominal_pos PARAM */)));
  threadData->lastEquationSolved = 917;
}
extern void tmp_two_returns_res_eqFunction_1324(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1315(DATA *data, threadData_t *threadData);


/*
equation index: 920
type: SIMPLE_ASSIGN
roo.air.cfd.u[12] = 0.1 * (-retRes1.dp) * retRes1.m_flow_nominal_pos
*/
void tmp_two_returns_res_eqFunction_920(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,920};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[80]] /* roo.air.cfd.u[12] variable */) = (0.1) * (((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[62]] /* retRes1.dp variable */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[24]] /* retRes1.m_flow_nominal_pos PARAM */)));
  threadData->lastEquationSolved = 920;
}
extern void tmp_two_returns_res_eqFunction_1323(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1318(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_328(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_329(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1237(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1325(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1238(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_333(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_334(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1276(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1319(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1277(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_338(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_339(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1233(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_341(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_342(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1231(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1326(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_345(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_346(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1239(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1240(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1241(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_350(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_351(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1278(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1279(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1280(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_355(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_356(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1234(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_358(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_359(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1275(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_361(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_362(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_363(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_364(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_365(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_366(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_367(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_368(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_369(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_370(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_371(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_372(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_373(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_374(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_375(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_376(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_377(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_378(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_379(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_380(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_381(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_382(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_383(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_384(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_385(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_386(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1337(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1343(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_389(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1419(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1420(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1422(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1424(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1345(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1346(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_396(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1351(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1352(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_399(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_400(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1355(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_402(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1357(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1423(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1425(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1421(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1416(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1417(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1415(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1414(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1413(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1412(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1411(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1410(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1409(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1408(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1407(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1405(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1406(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1404(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1397(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1398(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_423(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1401(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1393(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1394(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_427(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1391(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1392(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1387(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1388(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_432(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1386(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1385(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1384(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1383(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1382(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1381(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1380(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1365(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1366(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_442(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1361(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1362(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1358(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1359(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1363(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_448(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1403(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_450(DATA *data, threadData_t *threadData);


void tmp_two_returns_res_eqFunction_1046(DATA*, threadData_t*);
void tmp_two_returns_res_eqFunction_1047(DATA*, threadData_t*);
void tmp_two_returns_res_eqFunction_1048(DATA*, threadData_t*);
/*
equation index: 1053
indexNonlinear: 3
type: NONLINEAR

vars: {weaDat.weaBus.TWetBul}
eqns: {1046, 1047, 1048}
*/
void tmp_two_returns_res_eqFunction_1053(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1053};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 1053 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[275]] /* weaDat.weaBus.TWetBul variable */);
  retValue = solve_nonlinear_system(data, threadData, 3);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1053};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 1053 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[275]] /* weaDat.weaBus.TWetBul variable */) = data->simulationInfo->nonlinearSystemData[3].nlsx[0];
  threadData->lastEquationSolved = 1053;
}
extern void tmp_two_returns_res_eqFunction_459(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_460(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_461(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_462(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_463(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_464(DATA *data, threadData_t *threadData);


/*
equation index: 1060
type: ALGORITHM

  $whenCondition3 := $START.$whenCondition3;
  $whenCondition3 := roo.air.cfd.sampleTrigger;
*/
void tmp_two_returns_res_eqFunction_1060(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1060};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[2]] /* $whenCondition3 DISCRETE */) = (data->modelData->booleanVarsData[2] /* $whenCondition3 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[2]] /* $whenCondition3 DISCRETE */) = (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* roo.air.cfd.sampleTrigger DISCRETE */);
  threadData->lastEquationSolved = 1060;
}
extern void tmp_two_returns_res_eqFunction_466(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1329(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1330(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_469(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_470(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1327(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1328(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_473(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_474(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1175(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1176(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_477(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1172(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1182(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_480(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_481(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1173(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1174(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_484(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1171(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1183(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_487(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_488(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1335(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1336(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_491(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_492(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1331(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1332(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_495(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_496(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_497(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_498(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_499(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_500(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_501(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_502(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_503(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_504(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_505(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_506(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_507(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_508(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_509(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_510(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_511(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_512(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_513(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_514(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_515(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_516(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_517(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_518(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_519(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_520(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_521(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_522(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_523(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_524(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_525(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_526(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_527(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_528(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_529(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_530(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_531(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_532(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_533(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_534(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_535(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_536(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_537(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_538(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_539(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_540(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_541(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_542(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_543(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_544(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1177(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1178(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_547(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_1179(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_549(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_550(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_551(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_552(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_553(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_554(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_555(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_556(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_557(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_558(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_559(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_560(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_561(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_562(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_563(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_564(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_565(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_566(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_567(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_568(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_569(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_570(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_571(DATA *data, threadData_t *threadData);

extern void tmp_two_returns_res_eqFunction_572(DATA *data, threadData_t *threadData);

int tmp_two_returns_res_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  data->simulationInfo->discreteCall = 1;
  static void (*const eqFunctions[539])(DATA*, threadData_t*) = {
    tmp_two_returns_res_eqFunction_1,
    tmp_two_returns_res_eqFunction_2,
    tmp_two_returns_res_eqFunction_3,
    tmp_two_returns_res_eqFunction_4,
    tmp_two_returns_res_eqFunction_5,
    tmp_two_returns_res_eqFunction_6,
    tmp_two_returns_res_eqFunction_7,
    tmp_two_returns_res_eqFunction_8,
    tmp_two_returns_res_eqFunction_9,
    tmp_two_returns_res_eqFunction_10,
    tmp_two_returns_res_eqFunction_11,
    tmp_two_returns_res_eqFunction_12,
    tmp_two_returns_res_eqFunction_13,
    tmp_two_returns_res_eqFunction_14,
    tmp_two_returns_res_eqFunction_15,
    tmp_two_returns_res_eqFunction_16,
    tmp_two_returns_res_eqFunction_17,
    tmp_two_returns_res_eqFunction_18,
    tmp_two_returns_res_eqFunction_19,
    tmp_two_returns_res_eqFunction_20,
    tmp_two_returns_res_eqFunction_21,
    tmp_two_returns_res_eqFunction_22,
    tmp_two_returns_res_eqFunction_23,
    tmp_two_returns_res_eqFunction_24,
    tmp_two_returns_res_eqFunction_25,
    tmp_two_returns_res_eqFunction_26,
    tmp_two_returns_res_eqFunction_27,
    tmp_two_returns_res_eqFunction_28,
    tmp_two_returns_res_eqFunction_29,
    tmp_two_returns_res_eqFunction_30,
    tmp_two_returns_res_eqFunction_31,
    tmp_two_returns_res_eqFunction_32,
    tmp_two_returns_res_eqFunction_33,
    tmp_two_returns_res_eqFunction_34,
    tmp_two_returns_res_eqFunction_35,
    tmp_two_returns_res_eqFunction_36,
    tmp_two_returns_res_eqFunction_37,
    tmp_two_returns_res_eqFunction_38,
    tmp_two_returns_res_eqFunction_39,
    tmp_two_returns_res_eqFunction_40,
    tmp_two_returns_res_eqFunction_41,
    tmp_two_returns_res_eqFunction_42,
    tmp_two_returns_res_eqFunction_43,
    tmp_two_returns_res_eqFunction_44,
    tmp_two_returns_res_eqFunction_45,
    tmp_two_returns_res_eqFunction_46,
    tmp_two_returns_res_eqFunction_47,
    tmp_two_returns_res_eqFunction_48,
    tmp_two_returns_res_eqFunction_49,
    tmp_two_returns_res_eqFunction_50,
    tmp_two_returns_res_eqFunction_1180,
    tmp_two_returns_res_eqFunction_52,
    tmp_two_returns_res_eqFunction_53,
    tmp_two_returns_res_eqFunction_54,
    tmp_two_returns_res_eqFunction_55,
    tmp_two_returns_res_eqFunction_56,
    tmp_two_returns_res_eqFunction_57,
    tmp_two_returns_res_eqFunction_58,
    tmp_two_returns_res_eqFunction_59,
    tmp_two_returns_res_eqFunction_60,
    tmp_two_returns_res_eqFunction_61,
    tmp_two_returns_res_eqFunction_62,
    tmp_two_returns_res_eqFunction_63,
    tmp_two_returns_res_eqFunction_64,
    tmp_two_returns_res_eqFunction_65,
    tmp_two_returns_res_eqFunction_66,
    tmp_two_returns_res_eqFunction_67,
    tmp_two_returns_res_eqFunction_68,
    tmp_two_returns_res_eqFunction_69,
    tmp_two_returns_res_eqFunction_70,
    tmp_two_returns_res_eqFunction_71,
    tmp_two_returns_res_eqFunction_72,
    tmp_two_returns_res_eqFunction_73,
    tmp_two_returns_res_eqFunction_74,
    tmp_two_returns_res_eqFunction_75,
    tmp_two_returns_res_eqFunction_76,
    tmp_two_returns_res_eqFunction_77,
    tmp_two_returns_res_eqFunction_78,
    tmp_two_returns_res_eqFunction_79,
    tmp_two_returns_res_eqFunction_80,
    tmp_two_returns_res_eqFunction_81,
    tmp_two_returns_res_eqFunction_82,
    tmp_two_returns_res_eqFunction_83,
    tmp_two_returns_res_eqFunction_84,
    tmp_two_returns_res_eqFunction_85,
    tmp_two_returns_res_eqFunction_86,
    tmp_two_returns_res_eqFunction_87,
    tmp_two_returns_res_eqFunction_88,
    tmp_two_returns_res_eqFunction_89,
    tmp_two_returns_res_eqFunction_90,
    tmp_two_returns_res_eqFunction_91,
    tmp_two_returns_res_eqFunction_92,
    tmp_two_returns_res_eqFunction_93,
    tmp_two_returns_res_eqFunction_94,
    tmp_two_returns_res_eqFunction_95,
    tmp_two_returns_res_eqFunction_96,
    tmp_two_returns_res_eqFunction_97,
    tmp_two_returns_res_eqFunction_98,
    tmp_two_returns_res_eqFunction_99,
    tmp_two_returns_res_eqFunction_100,
    tmp_two_returns_res_eqFunction_101,
    tmp_two_returns_res_eqFunction_102,
    tmp_two_returns_res_eqFunction_103,
    tmp_two_returns_res_eqFunction_104,
    tmp_two_returns_res_eqFunction_105,
    tmp_two_returns_res_eqFunction_106,
    tmp_two_returns_res_eqFunction_107,
    tmp_two_returns_res_eqFunction_108,
    tmp_two_returns_res_eqFunction_109,
    tmp_two_returns_res_eqFunction_110,
    tmp_two_returns_res_eqFunction_111,
    tmp_two_returns_res_eqFunction_112,
    tmp_two_returns_res_eqFunction_113,
    tmp_two_returns_res_eqFunction_114,
    tmp_two_returns_res_eqFunction_115,
    tmp_two_returns_res_eqFunction_116,
    tmp_two_returns_res_eqFunction_117,
    tmp_two_returns_res_eqFunction_118,
    tmp_two_returns_res_eqFunction_119,
    tmp_two_returns_res_eqFunction_120,
    tmp_two_returns_res_eqFunction_121,
    tmp_two_returns_res_eqFunction_122,
    tmp_two_returns_res_eqFunction_123,
    tmp_two_returns_res_eqFunction_124,
    tmp_two_returns_res_eqFunction_125,
    tmp_two_returns_res_eqFunction_126,
    tmp_two_returns_res_eqFunction_127,
    tmp_two_returns_res_eqFunction_128,
    tmp_two_returns_res_eqFunction_129,
    tmp_two_returns_res_eqFunction_130,
    tmp_two_returns_res_eqFunction_131,
    tmp_two_returns_res_eqFunction_132,
    tmp_two_returns_res_eqFunction_133,
    tmp_two_returns_res_eqFunction_134,
    tmp_two_returns_res_eqFunction_135,
    tmp_two_returns_res_eqFunction_136,
    tmp_two_returns_res_eqFunction_137,
    tmp_two_returns_res_eqFunction_138,
    tmp_two_returns_res_eqFunction_139,
    tmp_two_returns_res_eqFunction_140,
    tmp_two_returns_res_eqFunction_141,
    tmp_two_returns_res_eqFunction_142,
    tmp_two_returns_res_eqFunction_143,
    tmp_two_returns_res_eqFunction_144,
    tmp_two_returns_res_eqFunction_145,
    tmp_two_returns_res_eqFunction_146,
    tmp_two_returns_res_eqFunction_147,
    tmp_two_returns_res_eqFunction_148,
    tmp_two_returns_res_eqFunction_149,
    tmp_two_returns_res_eqFunction_150,
    tmp_two_returns_res_eqFunction_151,
    tmp_two_returns_res_eqFunction_152,
    tmp_two_returns_res_eqFunction_153,
    tmp_two_returns_res_eqFunction_154,
    tmp_two_returns_res_eqFunction_1282,
    tmp_two_returns_res_eqFunction_1283,
    tmp_two_returns_res_eqFunction_1284,
    tmp_two_returns_res_eqFunction_1287,
    tmp_two_returns_res_eqFunction_1288,
    tmp_two_returns_res_eqFunction_1291,
    tmp_two_returns_res_eqFunction_1292,
    tmp_two_returns_res_eqFunction_1295,
    tmp_two_returns_res_eqFunction_1296,
    tmp_two_returns_res_eqFunction_1299,
    tmp_two_returns_res_eqFunction_1300,
    tmp_two_returns_res_eqFunction_1303,
    tmp_two_returns_res_eqFunction_1304,
    tmp_two_returns_res_eqFunction_1307,
    tmp_two_returns_res_eqFunction_1308,
    tmp_two_returns_res_eqFunction_1309,
    tmp_two_returns_res_eqFunction_1310,
    tmp_two_returns_res_eqFunction_1311,
    tmp_two_returns_res_eqFunction_1312,
    tmp_two_returns_res_eqFunction_1313,
    tmp_two_returns_res_eqFunction_1314,
    tmp_two_returns_res_eqFunction_176,
    tmp_two_returns_res_eqFunction_177,
    tmp_two_returns_res_eqFunction_178,
    tmp_two_returns_res_eqFunction_179,
    tmp_two_returns_res_eqFunction_180,
    tmp_two_returns_res_eqFunction_181,
    tmp_two_returns_res_eqFunction_182,
    tmp_two_returns_res_eqFunction_183,
    tmp_two_returns_res_eqFunction_184,
    tmp_two_returns_res_eqFunction_185,
    tmp_two_returns_res_eqFunction_186,
    tmp_two_returns_res_eqFunction_187,
    tmp_two_returns_res_eqFunction_188,
    tmp_two_returns_res_eqFunction_189,
    tmp_two_returns_res_eqFunction_1242,
    tmp_two_returns_res_eqFunction_191,
    tmp_two_returns_res_eqFunction_192,
    tmp_two_returns_res_eqFunction_1230,
    tmp_two_returns_res_eqFunction_194,
    tmp_two_returns_res_eqFunction_195,
    tmp_two_returns_res_eqFunction_1232,
    tmp_two_returns_res_eqFunction_197,
    tmp_two_returns_res_eqFunction_198,
    tmp_two_returns_res_eqFunction_1236,
    tmp_two_returns_res_eqFunction_200,
    tmp_two_returns_res_eqFunction_201,
    tmp_two_returns_res_eqFunction_1229,
    tmp_two_returns_res_eqFunction_203,
    tmp_two_returns_res_eqFunction_204,
    tmp_two_returns_res_eqFunction_1274,
    tmp_two_returns_res_eqFunction_1235,
    tmp_two_returns_res_eqFunction_828,
    tmp_two_returns_res_eqFunction_1273,
    tmp_two_returns_res_eqFunction_1285,
    tmp_two_returns_res_eqFunction_1286,
    tmp_two_returns_res_eqFunction_1270,
    tmp_two_returns_res_eqFunction_1305,
    tmp_two_returns_res_eqFunction_1306,
    tmp_two_returns_res_eqFunction_1269,
    tmp_two_returns_res_eqFunction_1297,
    tmp_two_returns_res_eqFunction_1298,
    tmp_two_returns_res_eqFunction_1271,
    tmp_two_returns_res_eqFunction_1301,
    tmp_two_returns_res_eqFunction_1302,
    tmp_two_returns_res_eqFunction_1268,
    tmp_two_returns_res_eqFunction_1289,
    tmp_two_returns_res_eqFunction_1290,
    tmp_two_returns_res_eqFunction_1272,
    tmp_two_returns_res_eqFunction_1293,
    tmp_two_returns_res_eqFunction_1294,
    tmp_two_returns_res_eqFunction_250,
    tmp_two_returns_res_eqFunction_251,
    tmp_two_returns_res_eqFunction_252,
    tmp_two_returns_res_eqFunction_253,
    tmp_two_returns_res_eqFunction_254,
    tmp_two_returns_res_eqFunction_255,
    tmp_two_returns_res_eqFunction_256,
    tmp_two_returns_res_eqFunction_257,
    tmp_two_returns_res_eqFunction_258,
    tmp_two_returns_res_eqFunction_259,
    tmp_two_returns_res_eqFunction_260,
    tmp_two_returns_res_eqFunction_261,
    tmp_two_returns_res_eqFunction_262,
    tmp_two_returns_res_eqFunction_1181,
    tmp_two_returns_res_eqFunction_264,
    tmp_two_returns_res_eqFunction_265,
    tmp_two_returns_res_eqFunction_266,
    tmp_two_returns_res_eqFunction_267,
    tmp_two_returns_res_eqFunction_268,
    tmp_two_returns_res_eqFunction_269,
    tmp_two_returns_res_eqFunction_270,
    tmp_two_returns_res_eqFunction_271,
    tmp_two_returns_res_eqFunction_272,
    tmp_two_returns_res_eqFunction_273,
    tmp_two_returns_res_eqFunction_274,
    tmp_two_returns_res_eqFunction_275,
    tmp_two_returns_res_eqFunction_276,
    tmp_two_returns_res_eqFunction_277,
    tmp_two_returns_res_eqFunction_278,
    tmp_two_returns_res_eqFunction_279,
    tmp_two_returns_res_eqFunction_280,
    tmp_two_returns_res_eqFunction_281,
    tmp_two_returns_res_eqFunction_282,
    tmp_two_returns_res_eqFunction_283,
    tmp_two_returns_res_eqFunction_284,
    tmp_two_returns_res_eqFunction_285,
    tmp_two_returns_res_eqFunction_286,
    tmp_two_returns_res_eqFunction_287,
    tmp_two_returns_res_eqFunction_288,
    tmp_two_returns_res_eqFunction_289,
    tmp_two_returns_res_eqFunction_290,
    tmp_two_returns_res_eqFunction_291,
    tmp_two_returns_res_eqFunction_292,
    tmp_two_returns_res_eqFunction_293,
    tmp_two_returns_res_eqFunction_294,
    tmp_two_returns_res_eqFunction_295,
    tmp_two_returns_res_eqFunction_296,
    tmp_two_returns_res_eqFunction_297,
    tmp_two_returns_res_eqFunction_298,
    tmp_two_returns_res_eqFunction_299,
    tmp_two_returns_res_eqFunction_300,
    tmp_two_returns_res_eqFunction_301,
    tmp_two_returns_res_eqFunction_302,
    tmp_two_returns_res_eqFunction_303,
    tmp_two_returns_res_eqFunction_304,
    tmp_two_returns_res_eqFunction_305,
    tmp_two_returns_res_eqFunction_306,
    tmp_two_returns_res_eqFunction_307,
    tmp_two_returns_res_eqFunction_308,
    tmp_two_returns_res_eqFunction_309,
    tmp_two_returns_res_eqFunction_310,
    tmp_two_returns_res_eqFunction_311,
    tmp_two_returns_res_eqFunction_312,
    tmp_two_returns_res_eqFunction_313,
    tmp_two_returns_res_eqFunction_314,
    tmp_two_returns_res_eqFunction_315,
    tmp_two_returns_res_eqFunction_316,
    tmp_two_returns_res_eqFunction_1333,
    tmp_two_returns_res_eqFunction_1334,
    tmp_two_returns_res_eqFunction_1320,
    tmp_two_returns_res_eqFunction_917,
    tmp_two_returns_res_eqFunction_1324,
    tmp_two_returns_res_eqFunction_1315,
    tmp_two_returns_res_eqFunction_920,
    tmp_two_returns_res_eqFunction_1323,
    tmp_two_returns_res_eqFunction_1318,
    tmp_two_returns_res_eqFunction_328,
    tmp_two_returns_res_eqFunction_329,
    tmp_two_returns_res_eqFunction_1237,
    tmp_two_returns_res_eqFunction_1325,
    tmp_two_returns_res_eqFunction_1238,
    tmp_two_returns_res_eqFunction_333,
    tmp_two_returns_res_eqFunction_334,
    tmp_two_returns_res_eqFunction_1276,
    tmp_two_returns_res_eqFunction_1319,
    tmp_two_returns_res_eqFunction_1277,
    tmp_two_returns_res_eqFunction_338,
    tmp_two_returns_res_eqFunction_339,
    tmp_two_returns_res_eqFunction_1233,
    tmp_two_returns_res_eqFunction_341,
    tmp_two_returns_res_eqFunction_342,
    tmp_two_returns_res_eqFunction_1231,
    tmp_two_returns_res_eqFunction_1326,
    tmp_two_returns_res_eqFunction_345,
    tmp_two_returns_res_eqFunction_346,
    tmp_two_returns_res_eqFunction_1239,
    tmp_two_returns_res_eqFunction_1240,
    tmp_two_returns_res_eqFunction_1241,
    tmp_two_returns_res_eqFunction_350,
    tmp_two_returns_res_eqFunction_351,
    tmp_two_returns_res_eqFunction_1278,
    tmp_two_returns_res_eqFunction_1279,
    tmp_two_returns_res_eqFunction_1280,
    tmp_two_returns_res_eqFunction_355,
    tmp_two_returns_res_eqFunction_356,
    tmp_two_returns_res_eqFunction_1234,
    tmp_two_returns_res_eqFunction_358,
    tmp_two_returns_res_eqFunction_359,
    tmp_two_returns_res_eqFunction_1275,
    tmp_two_returns_res_eqFunction_361,
    tmp_two_returns_res_eqFunction_362,
    tmp_two_returns_res_eqFunction_363,
    tmp_two_returns_res_eqFunction_364,
    tmp_two_returns_res_eqFunction_365,
    tmp_two_returns_res_eqFunction_366,
    tmp_two_returns_res_eqFunction_367,
    tmp_two_returns_res_eqFunction_368,
    tmp_two_returns_res_eqFunction_369,
    tmp_two_returns_res_eqFunction_370,
    tmp_two_returns_res_eqFunction_371,
    tmp_two_returns_res_eqFunction_372,
    tmp_two_returns_res_eqFunction_373,
    tmp_two_returns_res_eqFunction_374,
    tmp_two_returns_res_eqFunction_375,
    tmp_two_returns_res_eqFunction_376,
    tmp_two_returns_res_eqFunction_377,
    tmp_two_returns_res_eqFunction_378,
    tmp_two_returns_res_eqFunction_379,
    tmp_two_returns_res_eqFunction_380,
    tmp_two_returns_res_eqFunction_381,
    tmp_two_returns_res_eqFunction_382,
    tmp_two_returns_res_eqFunction_383,
    tmp_two_returns_res_eqFunction_384,
    tmp_two_returns_res_eqFunction_385,
    tmp_two_returns_res_eqFunction_386,
    tmp_two_returns_res_eqFunction_1337,
    tmp_two_returns_res_eqFunction_1343,
    tmp_two_returns_res_eqFunction_389,
    tmp_two_returns_res_eqFunction_1419,
    tmp_two_returns_res_eqFunction_1420,
    tmp_two_returns_res_eqFunction_1422,
    tmp_two_returns_res_eqFunction_1424,
    tmp_two_returns_res_eqFunction_1345,
    tmp_two_returns_res_eqFunction_1346,
    tmp_two_returns_res_eqFunction_396,
    tmp_two_returns_res_eqFunction_1351,
    tmp_two_returns_res_eqFunction_1352,
    tmp_two_returns_res_eqFunction_399,
    tmp_two_returns_res_eqFunction_400,
    tmp_two_returns_res_eqFunction_1355,
    tmp_two_returns_res_eqFunction_402,
    tmp_two_returns_res_eqFunction_1357,
    tmp_two_returns_res_eqFunction_1423,
    tmp_two_returns_res_eqFunction_1425,
    tmp_two_returns_res_eqFunction_1421,
    tmp_two_returns_res_eqFunction_1416,
    tmp_two_returns_res_eqFunction_1417,
    tmp_two_returns_res_eqFunction_1415,
    tmp_two_returns_res_eqFunction_1414,
    tmp_two_returns_res_eqFunction_1413,
    tmp_two_returns_res_eqFunction_1412,
    tmp_two_returns_res_eqFunction_1411,
    tmp_two_returns_res_eqFunction_1410,
    tmp_two_returns_res_eqFunction_1409,
    tmp_two_returns_res_eqFunction_1408,
    tmp_two_returns_res_eqFunction_1407,
    tmp_two_returns_res_eqFunction_1405,
    tmp_two_returns_res_eqFunction_1406,
    tmp_two_returns_res_eqFunction_1404,
    tmp_two_returns_res_eqFunction_1397,
    tmp_two_returns_res_eqFunction_1398,
    tmp_two_returns_res_eqFunction_423,
    tmp_two_returns_res_eqFunction_1401,
    tmp_two_returns_res_eqFunction_1393,
    tmp_two_returns_res_eqFunction_1394,
    tmp_two_returns_res_eqFunction_427,
    tmp_two_returns_res_eqFunction_1391,
    tmp_two_returns_res_eqFunction_1392,
    tmp_two_returns_res_eqFunction_1387,
    tmp_two_returns_res_eqFunction_1388,
    tmp_two_returns_res_eqFunction_432,
    tmp_two_returns_res_eqFunction_1386,
    tmp_two_returns_res_eqFunction_1385,
    tmp_two_returns_res_eqFunction_1384,
    tmp_two_returns_res_eqFunction_1383,
    tmp_two_returns_res_eqFunction_1382,
    tmp_two_returns_res_eqFunction_1381,
    tmp_two_returns_res_eqFunction_1380,
    tmp_two_returns_res_eqFunction_1365,
    tmp_two_returns_res_eqFunction_1366,
    tmp_two_returns_res_eqFunction_442,
    tmp_two_returns_res_eqFunction_1361,
    tmp_two_returns_res_eqFunction_1362,
    tmp_two_returns_res_eqFunction_1358,
    tmp_two_returns_res_eqFunction_1359,
    tmp_two_returns_res_eqFunction_1363,
    tmp_two_returns_res_eqFunction_448,
    tmp_two_returns_res_eqFunction_1403,
    tmp_two_returns_res_eqFunction_450,
    tmp_two_returns_res_eqFunction_1053,
    tmp_two_returns_res_eqFunction_459,
    tmp_two_returns_res_eqFunction_460,
    tmp_two_returns_res_eqFunction_461,
    tmp_two_returns_res_eqFunction_462,
    tmp_two_returns_res_eqFunction_463,
    tmp_two_returns_res_eqFunction_464,
    tmp_two_returns_res_eqFunction_1060,
    tmp_two_returns_res_eqFunction_466,
    tmp_two_returns_res_eqFunction_1329,
    tmp_two_returns_res_eqFunction_1330,
    tmp_two_returns_res_eqFunction_469,
    tmp_two_returns_res_eqFunction_470,
    tmp_two_returns_res_eqFunction_1327,
    tmp_two_returns_res_eqFunction_1328,
    tmp_two_returns_res_eqFunction_473,
    tmp_two_returns_res_eqFunction_474,
    tmp_two_returns_res_eqFunction_1175,
    tmp_two_returns_res_eqFunction_1176,
    tmp_two_returns_res_eqFunction_477,
    tmp_two_returns_res_eqFunction_1172,
    tmp_two_returns_res_eqFunction_1182,
    tmp_two_returns_res_eqFunction_480,
    tmp_two_returns_res_eqFunction_481,
    tmp_two_returns_res_eqFunction_1173,
    tmp_two_returns_res_eqFunction_1174,
    tmp_two_returns_res_eqFunction_484,
    tmp_two_returns_res_eqFunction_1171,
    tmp_two_returns_res_eqFunction_1183,
    tmp_two_returns_res_eqFunction_487,
    tmp_two_returns_res_eqFunction_488,
    tmp_two_returns_res_eqFunction_1335,
    tmp_two_returns_res_eqFunction_1336,
    tmp_two_returns_res_eqFunction_491,
    tmp_two_returns_res_eqFunction_492,
    tmp_two_returns_res_eqFunction_1331,
    tmp_two_returns_res_eqFunction_1332,
    tmp_two_returns_res_eqFunction_495,
    tmp_two_returns_res_eqFunction_496,
    tmp_two_returns_res_eqFunction_497,
    tmp_two_returns_res_eqFunction_498,
    tmp_two_returns_res_eqFunction_499,
    tmp_two_returns_res_eqFunction_500,
    tmp_two_returns_res_eqFunction_501,
    tmp_two_returns_res_eqFunction_502,
    tmp_two_returns_res_eqFunction_503,
    tmp_two_returns_res_eqFunction_504,
    tmp_two_returns_res_eqFunction_505,
    tmp_two_returns_res_eqFunction_506,
    tmp_two_returns_res_eqFunction_507,
    tmp_two_returns_res_eqFunction_508,
    tmp_two_returns_res_eqFunction_509,
    tmp_two_returns_res_eqFunction_510,
    tmp_two_returns_res_eqFunction_511,
    tmp_two_returns_res_eqFunction_512,
    tmp_two_returns_res_eqFunction_513,
    tmp_two_returns_res_eqFunction_514,
    tmp_two_returns_res_eqFunction_515,
    tmp_two_returns_res_eqFunction_516,
    tmp_two_returns_res_eqFunction_517,
    tmp_two_returns_res_eqFunction_518,
    tmp_two_returns_res_eqFunction_519,
    tmp_two_returns_res_eqFunction_520,
    tmp_two_returns_res_eqFunction_521,
    tmp_two_returns_res_eqFunction_522,
    tmp_two_returns_res_eqFunction_523,
    tmp_two_returns_res_eqFunction_524,
    tmp_two_returns_res_eqFunction_525,
    tmp_two_returns_res_eqFunction_526,
    tmp_two_returns_res_eqFunction_527,
    tmp_two_returns_res_eqFunction_528,
    tmp_two_returns_res_eqFunction_529,
    tmp_two_returns_res_eqFunction_530,
    tmp_two_returns_res_eqFunction_531,
    tmp_two_returns_res_eqFunction_532,
    tmp_two_returns_res_eqFunction_533,
    tmp_two_returns_res_eqFunction_534,
    tmp_two_returns_res_eqFunction_535,
    tmp_two_returns_res_eqFunction_536,
    tmp_two_returns_res_eqFunction_537,
    tmp_two_returns_res_eqFunction_538,
    tmp_two_returns_res_eqFunction_539,
    tmp_two_returns_res_eqFunction_540,
    tmp_two_returns_res_eqFunction_541,
    tmp_two_returns_res_eqFunction_542,
    tmp_two_returns_res_eqFunction_543,
    tmp_two_returns_res_eqFunction_544,
    tmp_two_returns_res_eqFunction_1177,
    tmp_two_returns_res_eqFunction_1178,
    tmp_two_returns_res_eqFunction_547,
    tmp_two_returns_res_eqFunction_1179,
    tmp_two_returns_res_eqFunction_549,
    tmp_two_returns_res_eqFunction_550,
    tmp_two_returns_res_eqFunction_551,
    tmp_two_returns_res_eqFunction_552,
    tmp_two_returns_res_eqFunction_553,
    tmp_two_returns_res_eqFunction_554,
    tmp_two_returns_res_eqFunction_555,
    tmp_two_returns_res_eqFunction_556,
    tmp_two_returns_res_eqFunction_557,
    tmp_two_returns_res_eqFunction_558,
    tmp_two_returns_res_eqFunction_559,
    tmp_two_returns_res_eqFunction_560,
    tmp_two_returns_res_eqFunction_561,
    tmp_two_returns_res_eqFunction_562,
    tmp_two_returns_res_eqFunction_563,
    tmp_two_returns_res_eqFunction_564,
    tmp_two_returns_res_eqFunction_565,
    tmp_two_returns_res_eqFunction_566,
    tmp_two_returns_res_eqFunction_567,
    tmp_two_returns_res_eqFunction_568,
    tmp_two_returns_res_eqFunction_569,
    tmp_two_returns_res_eqFunction_570,
    tmp_two_returns_res_eqFunction_571,
    tmp_two_returns_res_eqFunction_572
  };
  
  for (int id = 0; id < 539; id++) {
    eqFunctions[id](data, threadData);
  }
  data->simulationInfo->discreteCall = 0;
  
  return 0;
}
int tmp_two_returns_res_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
{
  const int *equationIndexes = NULL;
  double res = 0.0;

  
  return 0;
}


#if defined(__cplusplus)
}
#endif
