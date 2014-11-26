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
	if (vexRt[Ch1] > 0)
	{
		moveLeftMotors(vexRt[Ch1]);
		moveRightMotors(vexRT[Ch1]);
	}
	if (vexRT[Ch1] == 0 && vexRT[Ch2] == 0)
	{
		moveLeftMotors(0);
		moveRightMotors(0);
	}
	if (vexRT[Ch1] < 0)
	{
		moveLeftMotors(vexRT[Ch1]);
		moveRightMotors(vexRT[Ch1]);
	}
	if (vexRT[Ch2] > 0)
	{
		moveLeftMotors(127);
		moveRightMotors(-127);
	}
	if (vexRT[Ch2] < 0)
	{
		moveLeftMotors(-127);
		moveRightMotors(127);
	}
}
