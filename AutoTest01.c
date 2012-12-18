#pragma config(Hubs,  S1, HTMotor,  HTServo,  none,     none)
#pragma config(Sensor, S1, , sensorI2CMuxController)
#pragma config(Motor,  mtr_S1_C1_1,     motorD,        tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C1_2,     motorE,        tmotorTetrix, openLoop, reversed)
#pragma config(Servo,  srvo_S1_C2_1,    servo1,               tServoContinuousRotation)
#pragma config(Servo,  srvo_S1_C2_2,    servo2,               tServoContinuousRotation)

/************************************\
|*     ROBOTC Virtual World         *|
|*         GripperBot               *|
\************************************/

void initializeRobot()
{
	// Place code here to initialize servos to starting positions.
	servo[servo1] = 255; // Gripper opened
	servo[servo2] = 127; // Arm raised
	wait1Msec(300);
	return;
}

task main()
{
	initializeRobot();
	motor[motorD] = 50;
	motor[motorE] = 50;
	wait1Msec(3000);
	motor[motorD] = 100;
	motor[motorE] = 100;
	wait1Msec(30000);

}
