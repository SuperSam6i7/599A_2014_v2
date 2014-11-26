#include "Macros.h"

void moveLeftMotors(int speed)
{
	motor[left_front] = speed;
	motor[left_rear] = speed;
}

void moveRightMotors(int speed)
{
	motor[right_front] = speed;
	motor[right_rear] = speed;
}

void drive()
{
	if (vexRt[Ch1] > DEADZONE)
	{
		moveLeftMotors(vexRt[Ch1]);
		moveRightMotors(vexRT[Ch1]);
	}
	if (vexRT[Ch1] < DEADZONE && vexRT[Ch2] < DEADZONE)
	{
		moveLeftMotors(0);
		moveRightMotors(0);
	}
	if (vexRT[Ch1] < -DEADZONE)
	{
		moveLeftMotors(vexRT[Ch1]);
		moveRightMotors(vexRT[Ch1]);
	}
	if (vexRT[Ch2] > DEADZONE)
	{
		moveLeftMotors(vexRT[Ch2]);
		moveRightMotors(-vexRT[Ch2]);
	}
	if (vexRT[Ch2] < -DEADZONE)
	{
		moveLeftMotors(-vexRT[Ch2]);
		moveRightMotors(vexRT[Ch2]);
	}
}
