#pragma config(Hubs,  S1, HTMotor,  HTMotor,  none,     none)
#pragma config(Motor,  mtr_S1_C1_1,     backLeft,      tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C1_2,     backRight,     tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C2_1,     frontLeft,     tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C2_2,     frontRight,    tmotorTetrix, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#include "JoystickDriver.c"

task main()
{
  int threshold = 20;             /* Int 'threshold' will allow us to ignore low       */
                                  /* readings that keep our robot in perpetual motion. */

   motor[mtr_S1_C1_1] = 20;
   motor[mtr_S1_C1_2] = 20;
   motor[frontRight] = 20;
   motor[backRight] = 20;
   wait1Msec(100);

  while(true)                            // Infinite loop:
  {
    getJoystickSettings(joystick);

      motor[frontRight] = joystick.joy1_y2;         // Motor B is assigned a power level equal to the right analog stick's Y-axis reading.
			motor[backRight] = joystick.joy1_y2;

      motor[frontLeft] = joystick.joy1_y1;         // Motor C is assigned a power level equal to the left analog stick's Y-axis reading.
			motor[backLeft] = joystick.joy1_y1;

  }
}
