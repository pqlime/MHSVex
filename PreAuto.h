#pragma once
#include "Config.h"

void pre_auton()
{
	bStopTasksBetweenModes = true; // Kills tasks between modes

	return;
}
