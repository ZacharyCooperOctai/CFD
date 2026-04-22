#if defined(__cplusplus)
  extern "C" {
#endif
  int tmp_one_port_mayer(DATA* data, modelica_real** res, short*);
  int tmp_one_port_lagrange(DATA* data, modelica_real** res, short *, short *);
  int tmp_one_port_getInputVarIndicesInOptimization(DATA* data, int* input_var_indices);
  int tmp_one_port_pickUpBoundsForInputsInOptimization(DATA* data, modelica_real* min, modelica_real* max, modelica_real*nominal, modelica_boolean *useNominal, char ** name, modelica_real * start, modelica_real * startTimeOpt);
  int tmp_one_port_setInputData(DATA *data, const modelica_boolean file);
  int tmp_one_port_getTimeGrid(DATA *data, modelica_integer * nsi, modelica_real**t);
#if defined(__cplusplus)
}
#endif
