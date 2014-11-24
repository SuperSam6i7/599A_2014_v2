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
