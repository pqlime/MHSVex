#pragma once
#include "Config.h"

task usercontrol()
{
	while (1)
	{
#if DEBUG
	if (vexRT[DBG_SPINBTNU] || vexRT[DBG_SPINBTND])
	{
		motor[leftMotor] = vexRT[DBG_SPINBTNU] ? 60 : -60;
		motor[rightMotor] = vexRT[DBG_SPINBTNU] ? 60 : -60;
		wait1Msec(1000);
		motor[leftMotor] = 0;
		motor[rightMotor] = 0;
	}
#else
	// Wheel controls
	motor[leftMotor]  = vexRT[MOVE_LT];
	motor[rightMotor] = vexRT[MOVE_RT];

	// Claw control
	motor[clawMotor] = (vexRT[CLAW_UP] && !vexRT[CLAW_DN]) ? CLAW_UP_SPEED : (vexRT[CLAW_DN] ? CLAW_DN_SPEED : 0);

	// Arm control
	motor[armMotor] = (vexRT[ARM_UP] && !vexRT[ARM_DN]) ? ARM_UP_SPEED : (vexRT[ARM_DN] ? ARM_DN_SPEED : 0);
#endif // DEBUG
	}

	return;
}
