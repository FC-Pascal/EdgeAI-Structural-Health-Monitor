/*
 * File: predict_fault.c
 *
 * MATLAB Coder version            : 24.1
 * C/C++ source code generated on  : 22-Sep-2026 03:23:45
 */

/* Include Files */
#include "predict_fault.h"
#include "CompactClassificationTree.h"
#include "predict_fault_data.h"
#include "predict_fault_initialize.h"
#include "predict_fault_types.h"
#include "rt_nonfinite.h"

/* Function Definitions */
/*
 * This function predicts the motor state on the edge device
 *  'features' expects a 1x4 array: [RMS, Peak2Peak, Kurtosis, CrestFactor]
 *
 * Arguments    : const double features[4]
 *                cell_wrap_0 label[1]
 * Return Type  : void
 */
void predict_fault(const double features[4], cell_wrap_0 label[1])
{
  static const double mdl_ClassProbability[6] = {0.5, 0.0, 1.0, 0.5, 1.0, 0.0};
  static const double mdl_CutPoint[3] = {0.77474246117719825, 0.0, 0.0};
  static const signed char iv[6] = {2, 0, 0, 3, 0, 0};
  static const signed char mdl_CutPredictorIndex[3] = {1, 0, 0};
  static const boolean_T mdl_NanCutPoints[3] = {false, true, true};
  double mdl_Children[6];
  double mdl_Cost[4];
  double mdl_PruneList_data[3];
  int i;
  int mdl_Children_tmp;
  if (!isInitialized_predict_fault) {
    predict_fault_initialize();
  }
  /*  Load the lightweight model for Coder */
  for (i = 0; i < 3; i++) {
    mdl_Children_tmp = i << 1;
    mdl_Children[mdl_Children_tmp] = iv[i];
    mdl_Children[mdl_Children_tmp + 1] = iv[i + 3];
    mdl_PruneList_data[i] = mdl_CutPredictorIndex[i];
  }
  mdl_Cost[0] = 0.0;
  mdl_Cost[1] = 1.0;
  mdl_Cost[2] = 1.0;
  mdl_Cost[3] = 0.0;
  /*  Make the prediction */
  c_CompactClassificationTree_pre(
      mdl_Children, mdl_CutPoint, mdl_PruneList_data, mdl_NanCutPoints,
      mdl_Cost, mdl_ClassProbability, features, &label[0]);
}

/*
 * File trailer for predict_fault.c
 *
 * [EOF]
 */
