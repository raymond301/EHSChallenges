/*
 * FTC Programming Challenge #1
 * There is only 2 issues here.
 * The robot should drive forward, then stop.
 */

#pragma config(Hubs,  S1, HTMotor,  HTServo,  none,     none)
#pragma config(Sensor, S1,     ,               sensorI2CMuxController)
#pragma config(Sensor, S2,     compass,        sensorVirtualCompass)
#pragma config(Sensor, S3,     light,          sensorLightInactive)
#pragma config(Sensor, S4,     sonar,          sensorSONAR)
#pragma config(Motor,  motorA,          claw,          tmotorNXT, PIDControl, encoder)
#pragma config(Motor,  motorB,          wrist,         tmotorNXT, PIDControl, encoder)
#pragma config(Motor,  mtr_S1_C1_1,     right,         tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C1_2,     left,          tmotorTetrix, openLoop, reversed)

/************************************\
|*     ROBOTC Virtual World         *|
|*       GripperBot (compass)       *|
\************************************/

int threshold = 40;
bool keepGoing = false;
int fast = 100;
int medium = 50;
int sortaBackUp = -50;

task main()
{
  while(keepGoing)
  {
		if(SensorValue(s4) < threshold && SensorValue(s4) != -1)
    {
      motor[motorD]=sortaBackUp;
      motor[motorE]=sortaBackUp;
      wait1Msec(800);
			keepGoing=true;
		}//end if threshold

		motor[motorD] = fast;
		motor[motorE] = fast;

	}//end while: [keepGoing]
}
