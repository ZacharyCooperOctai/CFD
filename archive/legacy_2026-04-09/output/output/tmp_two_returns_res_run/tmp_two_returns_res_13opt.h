#if defined(__cplusplus)
  extern "C" {
#endif
  int tmp_two_returns_res_mayer(DATA* data, modelica_real** res, short*);
  int tmp_two_returns_res_lagrange(DATA* data, modelica_real** res, short *, short *);
  int tmp_two_returns_res_getInputVarIndicesInOptimization(DATA* data, int* input_var_indices);
  int tmp_two_returns_res_pickUpBoundsForInputsInOptimization(DATA* data, modelica_real* min, modelica_real* max, modelica_real*nominal, modelica_boolean *useNominal, char ** name, modelica_real * start, modelica_real * startTimeOpt);
  int tmp_two_returns_res_setInputData(DATA *data, const modelica_boolean file);
  int tmp_two_returns_res_getTimeGrid(DATA *data, modelica_integer * nsi, modelica_real**t);
#if defined(__cplusplus)
}
#endif
