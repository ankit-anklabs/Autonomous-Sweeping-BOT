#ifndef PID_CONF_H
#define PID_CONF_H

double setpoint = 20000.0; // Desired setpoint
double setpoint_1 = 20000.0; // Desired setpoint
double input, output, input_1, output_1;

// PID Controller Gains for Main System
double Kp = 0.001;  // Proportional gain
double Ki = 0.002;  // Integral gain
double Kd = 0.000;  // Derivative gain

// PID Controller Gains for Secondary System 1
double Kp_1 = 0.001; // Proportional gain
double Ki_1 = 0.002; // Integral gain
double Kd_1 = 0.000; // Derivative gain

// PID Controller Gains for Secondary System 2
double Kp_L1 = 0.002; // Proportional gain
double Ki_L1 = 0.004; // Integral gain
double Kd_L1 = 0.000; // Derivative gain

// PID Controller Gains for Secondary System 3
double Kp_L2 = 0.004; // Proportional gain
double Ki_L2 = 0.008; // Integral gain
double Kd_L2 = 0.0000; // Derivative gain

// PID Controller Gains for Secondary System 4
double Kp_L3 = 0.008; // Proportional gain
double Ki_L3 = 0.01;  // Integral gain
double Kd_L3 = 0.0000; // Derivative gain

// PID Controller Gains for Secondary System 5
double Kp_L4 = 0.001; // Proportional gain
double Ki_L4 = 0.016; // Integral gain
double Kd_L4 = 0.0001; // Derivative gain


#endif // PID_CONF_H
