#pragma config(Hubs,  S1, HTMotor,  HTServo,  none,     none)
#pragma config(Sensor, S1,     ,               sensorI2CMuxController)
#pragma config(Sensor, S2,     compass,        sensorVirtualCompass)
#pragma config(Sensor, S3,     light,          sensorLightInactive)
#pragma config(Sensor, S4,     sonar,          sensorSONAR)
#pragma config(Motor,  motorA,          claw,          tmotorNXT, PIDControl, encoder)
#pragma config(Motor,  motorB,          wrist,         tmotorNXT, PIDControl, encoder)
#pragma config(Motor,  mtr_S1_C1_1,     right,         tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C1_2,     left,          tmotorTetrix, openLoop, reversed)

#include "JoystickDriver.c"

task main()
{
  while(1 == 1)
  {
    getJoystickSettings(joystick);
    motor[mtr_S1_C1_1] = joystick.joy1_y1;
    motor[mtr_S1_C1_2] = joystick.joy1_y2;
  }
}
