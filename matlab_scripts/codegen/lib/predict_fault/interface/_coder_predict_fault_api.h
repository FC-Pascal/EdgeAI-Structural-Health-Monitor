/*
 * File: _coder_predict_fault_api.h
 *
 * MATLAB Coder version            : 24.1
 * C/C++ source code generated on  : 22-Sep-2026 03:23:45
 */

#ifndef _CODER_PREDICT_FAULT_API_H
#define _CODER_PREDICT_FAULT_API_H

/* Include Files */
#include "emlrt.h"
#include "mex.h"
#include "tmwtypes.h"
#include <string.h>

/* Type Definitions */
#ifndef struct_emxArray_char_T_1x6
#define struct_emxArray_char_T_1x6
struct emxArray_char_T_1x6 {
  char_T data[6];
  int32_T size[2];
};
#endif /* struct_emxArray_char_T_1x6 */
#ifndef typedef_emxArray_char_T_1x6
#define typedef_emxArray_char_T_1x6
typedef struct emxArray_char_T_1x6 emxArray_char_T_1x6;
#endif /* typedef_emxArray_char_T_1x6 */

#ifndef typedef_cell_wrap_0
#define typedef_cell_wrap_0
typedef struct {
  emxArray_char_T_1x6 f1;
} cell_wrap_0;
#endif /* typedef_cell_wrap_0 */

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void predict_fault(real_T features[4], cell_wrap_0 label[1]);

void predict_fault_api(const mxArray *prhs, const mxArray **plhs);

void predict_fault_atexit(void);

void predict_fault_initialize(void);

void predict_fault_terminate(void);

void predict_fault_xil_shutdown(void);

void predict_fault_xil_terminate(void);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for _coder_predict_fault_api.h
 *
 * [EOF]
 */
