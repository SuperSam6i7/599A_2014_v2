#include "Macros.h"

void moveArm(int speed)
{
	motor[top_right_arm] = speed;
	motor[top_left_arm] = speed;
	motor[bottom_right_arm] = speed;
}

void lift()
{
	if (vexRT[Ch3] > DEADZONE)
	{
		moveArm(vexRT[Ch3]);
	}
	if (vexRT[Ch3] < DEADZONE && > -DEADZONE)
	{
		moveArm(0);
	}
	if (vexRT[Ch3] < -DEADZONE)
	{
		moveArm(vexRT[Ch3]);
	}
}
