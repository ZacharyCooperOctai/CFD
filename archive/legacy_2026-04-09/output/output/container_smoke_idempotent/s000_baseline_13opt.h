#if defined(__cplusplus)
  extern "C" {
#endif
  int s000_baseline_mayer(DATA* data, modelica_real** res, short*);
  int s000_baseline_lagrange(DATA* data, modelica_real** res, short *, short *);
  int s000_baseline_getInputVarIndicesInOptimization(DATA* data, int* input_var_indices);
  int s000_baseline_pickUpBoundsForInputsInOptimization(DATA* data, modelica_real* min, modelica_real* max, modelica_real*nominal, modelica_boolean *useNominal, char ** name, modelica_real * start, modelica_real * startTimeOpt);
  int s000_baseline_setInputData(DATA *data, const modelica_boolean file);
  int s000_baseline_getTimeGrid(DATA *data, modelica_integer * nsi, modelica_real**t);
#if defined(__cplusplus)
}
#endif
