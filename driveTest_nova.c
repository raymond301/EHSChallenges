#pragma config(Hubs,  S1, HTMotor,  HTServo,  none,     none)
#pragma config(Sensor, S1,     ,               sensorI2CMuxController)
#pragma config(Motor,  motorA,          gripMotor,     tmotorNXT, openLoop, encoder)
#pragma config(Motor,  motorB,          wristMotor,    tmotorNXT, openLoop, encoder)
#pragma config(Motor,  motorC,           ,             tmotorNXT, openLoop, encoder)
#pragma config(Motor,  mtr_S1_C1_1,     rightMotor,    tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C1_2,     leftMotor,     tmotorTetrix, openLoop, reversed)

#include "JoystickDriver.c"

task main()
{
  int threshold = 10;             /* Int 'threshold' will allow us to ignore low       */
                                  /* readings that keep our robot in perpetual motion. */

  while(true)                            // Infinite loop:
  {
    getJoystickSettings(joystick);
    if(abs(joystick.joy1_y2) > threshold)   // If the right analog stick's Y-axis readings are either above or below the threshold:
    {
      motor[mtr_S1_C1_1] = joystick.joy1_y2;         // Motor B is assigned a power level equal to the right analog stick's Y-axis reading.
    }
    else                                    // Else if the readings are within the threshold:
    {
      motor[mtr_S1_C1_1] = 0;                        // Motor B is stopped with a power level of 0.
    }


    if(abs(joystick.joy1_y1) > threshold)   // If the left analog stick's Y-axis readings are either above or below the threshold:
    {
      motor[mtr_S1_C1_2] = joystick.joy1_y1;         // Motor C is assigned a power level equal to the left analog stick's Y-axis reading.
    }
    else                                    // Else if the readings are within the threshold:
    {
      motor[mtr_S1_C1_2] = 0;                        // Motor C is stopped with a power level of 0.
    }
  }
}
