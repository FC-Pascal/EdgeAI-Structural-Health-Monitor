function label = predict_fault(features)
%#codegen
% This function predicts the motor state on the edge device
% 'features' expects a 1x4 array: [RMS, Peak2Peak, Kurtosis, CrestFactor]

% Load the lightweight model for Coder
mdl = loadLearnerForCoder('EdgeTreeModel');

% Make the prediction
label = predict(mdl, features);
end