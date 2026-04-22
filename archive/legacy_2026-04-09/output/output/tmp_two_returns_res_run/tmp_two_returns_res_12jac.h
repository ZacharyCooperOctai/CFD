/* Jacobians */
static const REAL_ATTRIBUTE dummyREAL_ATTRIBUTE = omc_dummyRealAttribute;

#if defined(__cplusplus)
extern "C" {
#endif

/* Jacobian Variables */
#define tmp_two_returns_res_INDEX_JAC_LSJac0 0
int tmp_two_returns_res_functionJacLSJac0_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int tmp_two_returns_res_initialAnalyticJacobianLSJac0(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define tmp_two_returns_res_INDEX_JAC_NLSJac3 1
int tmp_two_returns_res_functionJacNLSJac3_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int tmp_two_returns_res_initialAnalyticJacobianNLSJac3(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define tmp_two_returns_res_INDEX_JAC_LSJac4 2
int tmp_two_returns_res_functionJacLSJac4_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int tmp_two_returns_res_initialAnalyticJacobianLSJac4(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define tmp_two_returns_res_INDEX_JAC_NLSJac5 3
int tmp_two_returns_res_functionJacNLSJac5_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int tmp_two_returns_res_initialAnalyticJacobianNLSJac5(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define tmp_two_returns_res_INDEX_JAC_LSJac6 4
int tmp_two_returns_res_functionJacLSJac6_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int tmp_two_returns_res_initialAnalyticJacobianLSJac6(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define tmp_two_returns_res_INDEX_JAC_NLSJac9 5
int tmp_two_returns_res_functionJacNLSJac9_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int tmp_two_returns_res_initialAnalyticJacobianNLSJac9(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define tmp_two_returns_res_INDEX_JAC_H 6
int tmp_two_returns_res_functionJacH_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int tmp_two_returns_res_initialAnalyticJacobianH(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define tmp_two_returns_res_INDEX_JAC_F 7
int tmp_two_returns_res_functionJacF_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int tmp_two_returns_res_initialAnalyticJacobianF(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define tmp_two_returns_res_INDEX_JAC_D 8
int tmp_two_returns_res_functionJacD_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int tmp_two_returns_res_initialAnalyticJacobianD(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define tmp_two_returns_res_INDEX_JAC_C 9
int tmp_two_returns_res_functionJacC_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int tmp_two_returns_res_initialAnalyticJacobianC(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define tmp_two_returns_res_INDEX_JAC_B 10
int tmp_two_returns_res_functionJacB_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int tmp_two_returns_res_initialAnalyticJacobianB(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define tmp_two_returns_res_INDEX_JAC_A 11
int tmp_two_returns_res_functionJacA_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int tmp_two_returns_res_initialAnalyticJacobianA(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);

#if defined(__cplusplus)
}
#endif
