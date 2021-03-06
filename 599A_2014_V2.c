#pragma config(Motor,  port1,           middle_drive_motor, tmotorVex393_HBridge, openLoop, reversed)
#pragma config(Motor,  port2,           right_front_drive_motor, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           left_rear_drive_motor, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           left_lift_motor, tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port5,           claw_motor,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,           left_front_drive_motor, tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port7,           right_rear_drive_motor, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port8,           right_top_lift_motor, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           right_bottom_lift_motor, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port10,          claw_pivot_motor, tmotorVex393_HBridge, openLoop, reversed)
#pragma platform(VEX)

//Competition Control and Duration Settings
#pragma competitionControl(Competition)
#pragma autonomousDuration(20)
#pragma userControlDuration(120)

#include"Drive.h"
#include"Lift Arm.h"

#include "Vex_Competition_Includes.c"   //Main competition background code...do not modify!

/////////////////////////////////////////////////////////////////////////////////////////
//
//                          Pre-Autonomous Functions
//
// You may want to perform some actions before the competition starts. Do them in the
// following function.
//
/////////////////////////////////////////////////////////////////////////////////////////

void pre_auton()
{
  // Set bStopTasksBetweenModes to false if you want to keep user created tasks running between
  // Autonomous and Tele-Op modes. You will need to manage all user created tasks if set to false.
  bStopTasksBetweenModes = true;

	// All activities that occur before the competition starts
	// Example: clearing encoders, setting servo positions, ...
}

/////////////////////////////////////////////////////////////////////////////////////////
//
//                                 Autonomous Task
//
// This task is used to control your robot during the autonomous phase of a VEX Competition.
// You must modify the code to add your own robot specific commands here.
//
/////////////////////////////////////////////////////////////////////////////////////////

task autonomous()
{
  // .....................................................................................
  // Insert user code here.
  // .....................................................................................

	AutonomousCodePlaceholderForTesting();  // Remove this function call once you have "real" code.
}

/////////////////////////////////////////////////////////////////////////////////////////
//
//                                 User Control Task
//
// This task is used to control your robot during the user control phase of a VEX Competition.
// You must modify the code to add your own robot specific commands here.
//
/////////////////////////////////////////////////////////////////////////////////////////

task usercontrol()
{
	// User control code here, inside the loop

	while (true)
	{
	  // This is the main execution loop for the user control program. Each time through the loop
	  // your program should update motor + servo values based on feedback from the joysticks.

	  // .....................................................................................
	  // Insert user code here. This is where you use the joystick values to update your motors, etc.
	  // .....................................................................................

	  UserControlCodePlaceholderForTesting(); // Remove this function call once you have "real" code.
	}
	Drive();
	Lift Arm();
}
