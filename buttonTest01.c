
#pragma config(Sensor,  motorC,  touchSensor,             tmotorNXT, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{

	if(SensorValue(touchSensor) == 1){
		PlaySound(soundBeepBeep);
	}


}