#pragma once
#include "Config.h"

task autonomous()
{
	while (1)
	{
#if DEBUG
		motor[armMotor] = 50;
#else
		sleep(1);
#endif // DEBUG
	}

	return;
}
