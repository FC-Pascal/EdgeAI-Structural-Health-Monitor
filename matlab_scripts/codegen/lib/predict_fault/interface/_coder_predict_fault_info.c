/*
 * File: _coder_predict_fault_info.c
 *
 * MATLAB Coder version            : 24.1
 * C/C++ source code generated on  : 22-Sep-2026 03:23:45
 */

/* Include Files */
#include "_coder_predict_fault_info.h"
#include "emlrt.h"
#include "tmwtypes.h"

/* Function Declarations */
static const mxArray *c_emlrtMexFcnResolvedFunctionsI(void);

/* Function Definitions */
/*
 * Arguments    : void
 * Return Type  : const mxArray *
 */
static const mxArray *c_emlrtMexFcnResolvedFunctionsI(void)
{
  const mxArray *nameCaptureInfo;
  const char_T *data[5] = {
      "789ce554c16adb40105d95140aa5894ff982d04bb108a181905b51126a079b10c984e20d"
      "cd5a9ad86a7777cceeaa566f3df6d6df293df5d80fe8b5dfd02f28c4"
      "962c5b1608991a14dacc6576f466e7cdcc6a8658ad8e4508d926a9fc789aea6773bb31d7"
      "8fc8aa1471abe067adba93c7646be55e867f996b1fa581d8a4866402",
      "16370314a164d2781fc7401468e41f204890db9083170a70f346776689b31cb43066d0ec"
      "ec8cc07fef4682a8915e66c8f3c6a21f3725f56e55f4a328c57e14fd"
      "1e0adff7bfe4cbe2d30abe0ceff7ae9d63dad3a034edb9a797f4042792230b343d0d86f0"
      "aad5748d8a7c1329c69baf8171336a765086061515cc703678ab7d15",
      "8e4deaef29800e06c0ed2998afe7a624df9d35eb29eaa5ff93441fb57f5975f27dfadda6"
      "75f265725f7c7149bc75ffc7dd12be4601f7f6bbedc9d924f6806964"
      "ef249c0f2f0f4f96795c54f054e5414aecbae27f2db9bf6e1f7b25f11b05bcdf72aef7d2"
      "015588668f1a443ec0986ac3a6b3ea73a6b582217db13c71604a8672",
      "f66d3ac18a3a28c6cc37170a82d09fcebb2d72757cdeb08ee715756478969e9d656727c9"
      "4526e4daf61493fa1695b8bf3dbde97bba157c19de6f75377ccfa465"
      "74d1b2e435ebdb27c7df7ed6ba9f09fdc36be59bcbffbe9fdbccf322165ca941d78c5fbe"
      "398af70f5039fffe7ebe032051c46e",
      ""};
  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(&data[0], 3040U, &nameCaptureInfo);
  return nameCaptureInfo;
}

/*
 * Arguments    : void
 * Return Type  : mxArray *
 */
mxArray *emlrtMexFcnProperties(void)
{
  mxArray *xEntryPoints;
  mxArray *xInputs;
  mxArray *xResult;
  const char_T *propFieldName[9] = {"Version",
                                    "ResolvedFunctions",
                                    "Checksum",
                                    "EntryPoints",
                                    "CoverageInfo",
                                    "IsPolymorphic",
                                    "PropertyList",
                                    "UUID",
                                    "ClassEntryPointIsHandle"};
  const char_T *epFieldName[8] = {
      "Name",     "NumberOfInputs", "NumberOfOutputs", "ConstantInputs",
      "FullPath", "TimeStamp",      "Constructor",     "Visible"};
  xEntryPoints =
      emlrtCreateStructMatrix(1, 1, 8, (const char_T **)&epFieldName[0]);
  xInputs = emlrtCreateLogicalMatrix(1, 1);
  emlrtSetField(xEntryPoints, 0, "Name", emlrtMxCreateString("predict_fault"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 0, "FullPath",
      emlrtMxCreateString("C:\\Users\\USER\\Downloads\\EdgeAI-Structural-"
                          "Health-Monitor\\matlab_scripts\\predict_fault.m"));
  emlrtSetField(xEntryPoints, 0, "TimeStamp",
                emlrtMxCreateDoubleScalar(740247.13822916662));
  emlrtSetField(xEntryPoints, 0, "Constructor",
                emlrtMxCreateLogicalScalar(false));
  emlrtSetField(xEntryPoints, 0, "Visible", emlrtMxCreateLogicalScalar(true));
  xResult =
      emlrtCreateStructMatrix(1, 1, 9, (const char_T **)&propFieldName[0]);
  emlrtSetField(xResult, 0, "Version",
                emlrtMxCreateString("24.1.0.2537033 (R2024a)"));
  emlrtSetField(xResult, 0, "ResolvedFunctions",
                (mxArray *)c_emlrtMexFcnResolvedFunctionsI());
  emlrtSetField(xResult, 0, "Checksum",
                emlrtMxCreateString("Ik9cE8DsHk4YXAVKZ90qoD"));
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

/*
 * File trailer for _coder_predict_fault_info.c
 *
 * [EOF]
 */
