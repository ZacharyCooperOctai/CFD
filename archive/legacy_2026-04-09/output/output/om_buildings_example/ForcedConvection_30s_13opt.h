#if defined(__cplusplus)
  extern "C" {
#endif
  int ForcedConvection_30s_mayer(DATA* data, modelica_real** res, short*);
  int ForcedConvection_30s_lagrange(DATA* data, modelica_real** res, short *, short *);
  int ForcedConvection_30s_getInputVarIndicesInOptimization(DATA* data, int* input_var_indices);
  int ForcedConvection_30s_pickUpBoundsForInputsInOptimization(DATA* data, modelica_real* min, modelica_real* max, modelica_real*nominal, modelica_boolean *useNominal, char ** name, modelica_real * start, modelica_real * startTimeOpt);
  int ForcedConvection_30s_setInputData(DATA *data, const modelica_boolean file);
  int ForcedConvection_30s_getTimeGrid(DATA *data, modelica_integer * nsi, modelica_real**t);
#if defined(__cplusplus)
}
#endif
