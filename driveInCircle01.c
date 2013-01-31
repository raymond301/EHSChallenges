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
|*         GripperBot               *|
\************************************/


void tightRightTurn()
{
	motor[motorD] = 0;
	motor[motorE] = 0;
	wait1Msec(500);
	motor[motorD] = -100;
	motor[motorE] = 100;
	wait1Msec(710);
	return;
}

int threshold = 40;

task main()
{
	// run forever:
  while(true)
  {

		if(SensorValue(s4) < threshold && SensorValue(s4) != -1)
    {
      // HALT and back up!:
      motor[right] = -75;
      motor[left]  = -75;
      wait1Msec(800);
			tightRightTurn();
		}//end if threshold

		motor[motorD] = 100;
		motor[motorE] = 100;
	tightRightTurn();

	}//end while: forever
}
