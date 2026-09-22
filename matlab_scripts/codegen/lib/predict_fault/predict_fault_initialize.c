/*
 * File: predict_fault_initialize.c
 *
 * MATLAB Coder version            : 24.1
 * C/C++ source code generated on  : 22-Sep-2026 03:23:45
 */

/* Include Files */
#include "predict_fault_initialize.h"
#include "predict_fault_data.h"
#include "rt_nonfinite.h"

/* Function Definitions */
/*
 * Arguments    : void
 * Return Type  : void
 */
void predict_fault_initialize(void)
{
  rt_InitInfAndNaN();
  isInitialized_predict_fault = true;
}

/*
 * File trailer for predict_fault_initialize.c
 *
 * [EOF]
 */
