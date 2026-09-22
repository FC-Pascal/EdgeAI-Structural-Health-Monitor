/*
 * File: CompactClassificationTree.c
 *
 * MATLAB Coder version            : 24.1
 * C/C++ source code generated on  : 22-Sep-2026 03:23:45
 */

/* Include Files */
#include "CompactClassificationTree.h"
#include "predict_fault_types.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"

/* Function Definitions */
/*
 * Arguments    : const double obj_Children[6]
 *                const double obj_CutPoint[3]
 *                const double obj_PruneList_data[]
 *                const boolean_T obj_NanCutPoints[3]
 *                const double obj_Cost[4]
 *                const double obj_ClassProbability[6]
 *                const double Xin[4]
 *                cell_wrap_0 *labels
 * Return Type  : void
 */
void c_CompactClassificationTree_pre(const double obj_Children[6],
                                     const double obj_CutPoint[3],
                                     const double obj_PruneList_data[],
                                     const boolean_T obj_NanCutPoints[3],
                                     const double obj_Cost[4],
                                     const double obj_ClassProbability[6],
                                     const double Xin[4], cell_wrap_0 *labels)
{
  static const char classNames[12] = {'F', 'N', 'a', 'o', 'u', 'r',
                                      'l', 'm', 't', 'a', 'y', 'l'};
  double a__1_idx_0;
  double d;
  int i;
  int m;
  m = 0;
  while (!((obj_PruneList_data[m] <= 0.0) || rtIsNaN(Xin[0]) ||
           obj_NanCutPoints[m])) {
    if (Xin[0] < obj_CutPoint[m]) {
      m = (int)obj_Children[m << 1] - 1;
    } else {
      m = (int)obj_Children[(m << 1) + 1] - 1;
    }
  }
  d = obj_ClassProbability[m + 3];
  a__1_idx_0 = obj_ClassProbability[m] * obj_Cost[0] + d * obj_Cost[1];
  d = obj_ClassProbability[m] * obj_Cost[2] + d * obj_Cost[3];
  if ((a__1_idx_0 > d) || (rtIsNaN(a__1_idx_0) && (!rtIsNaN(d)))) {
    m = 1;
  } else {
    m = 0;
  }
  labels->f1.size[0] = 1;
  labels->f1.size[1] = 6;
  for (i = 0; i < 6; i++) {
    labels->f1.data[i] = classNames[m + (i << 1)];
  }
}

/*
 * File trailer for CompactClassificationTree.c
 *
 * [EOF]
 */
