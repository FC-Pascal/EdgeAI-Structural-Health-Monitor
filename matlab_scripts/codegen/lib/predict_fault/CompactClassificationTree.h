/*
 * File: CompactClassificationTree.h
 *
 * MATLAB Coder version            : 24.1
 * C/C++ source code generated on  : 22-Sep-2026 03:23:45
 */

#ifndef COMPACTCLASSIFICATIONTREE_H
#define COMPACTCLASSIFICATIONTREE_H

/* Include Files */
#include "predict_fault_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void c_CompactClassificationTree_pre(const double obj_Children[6],
                                     const double obj_CutPoint[3],
                                     const double obj_PruneList_data[],
                                     const boolean_T obj_NanCutPoints[3],
                                     const double obj_Cost[4],
                                     const double obj_ClassProbability[6],
                                     const double Xin[4], cell_wrap_0 *labels);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for CompactClassificationTree.h
 *
 * [EOF]
 */
