#pragma config(Hubs,  S1, HTMotor,  HTServo,  none,     none)
#pragma config(Sensor, S1, , sensorI2CMuxController)
#pragma config(Motor,  mtr_S1_C1_1,     motorD,        tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C1_2,     motorE,        tmotorTetrix, openLoop, reversed)
#pragma config(Servo,  srvo_S1_C2_1,    servo1,               tServoContinuousRotation)
#pragma config(Servo,  srvo_S1_C2_2,    servo2,               tServoContinuousRotation)

//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/************************************\
|*     ROBOTC Virtual World         *|
|*         GripperBot               *|
\************************************/

task main()
{

	motor[motorD] = 50;
	motor[motorE] = 50;
	wait1Msec(3000);
	motor[motorD] = 100;
	motor[motorE] = 100;
	wait1Msec(30000);

}