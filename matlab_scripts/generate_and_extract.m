% Day 1: Synthetic Vibration Data Generation & Feature Extraction
% Goal: Create a lightweight dataset for our TinyML model

num_samples = 100; % We will generate 100 normal and 100 faulty examples
fs = 1000;         % Sample rate (1000 readings per second)
t = 0:1/fs:1-1/fs; % 1 second of time data

% Pre-allocate a matrix to hold our 4 features (RMS, Peak-to-Peak, Kurtosis, Crest Factor)
features = zeros(num_samples * 2, 4); 
labels = strings(num_samples * 2, 1);

for i = 1:num_samples
    %% 1. GENERATE NORMAL MOTOR DATA
    % A healthy motor spins cleanly at 50Hz with a little bit of background noise
    sig_normal = sin(2*pi*50*t) + 0.1*randn(size(t));
    
    % Extract Features (Compressing 1000 data points into 4 simple numbers)
    features(i, 1) = rms(sig_normal);                    % Root Mean Square (overall energy)
    features(i, 2) = peak2peak(sig_normal);              % Total wave height
    features(i, 3) = kurtosis(sig_normal);               % Sharpness of the peaks
    features(i, 4) = max(abs(sig_normal))/rms(sig_normal); % Crest factor
    labels(i) = "Normal";
    
    %% 2. GENERATE FAULTY MOTOR DATA
    % A faulty bearing adds high-frequency grinding (120Hz) and heavier noise
    sig_faulty = sin(2*pi*50*t) + 0.5*sin(2*pi*120*t) + 0.3*randn(size(t));
    
    % Extract Features
    features(i+num_samples, 1) = rms(sig_faulty);
    features(i+num_samples, 2) = peak2peak(sig_faulty);
    features(i+num_samples, 3) = kurtosis(sig_faulty);
    features(i+num_samples, 4) = max(abs(sig_faulty))/rms(sig_faulty);
    labels(i+num_samples) = "Faulty";
end

% 3. PACKAGE EVERYTHING FOR THE AI MODEL
% We convert our matrix into a clean table with headers
FeatureTable = table(features(:,1), features(:,2), features(:,3), features(:,4), labels, ...
    'VariableNames', {'RMS', 'Peak2Peak', 'Kurtosis', 'CrestFactor', 'Condition'});

% Save the table to the data folder so we can use it tomorrow
save('../data/MotorFeaturesDataset.mat', 'FeatureTable');

disp('Day 1 Complete! FeatureTable generated and saved successfully.');
head(FeatureTable) % Display the first few rows in the command window