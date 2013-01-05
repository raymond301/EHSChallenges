#pragma config(Motor,  motorA,          gripMotor,     tmotorNXT, openLoop, encoder)
#pragma config(Motor,  motorB,          wristMotor,    tmotorNXT, openLoop, encoder)

#include "JoystickDriver.c"

task main()
{
  while(1 == 1)
  {
    getJoystickSettings(joystick);
    motor[motorC] = joystick.joy1_y1;
    motor[motorB] = joystick.joy1_y2;
  }
}
