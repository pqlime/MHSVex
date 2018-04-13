#pragma once

/*=/ Autonomous Definitions /=====================*/

// Centimeters per second @ speed=60
#define CMPERSEC 67

/*=/ User Control Definitions /===================*/

// Debug
#define DEBUG 0
#define DBG_INCSPD Btn7U
#define DBG_DECSPD Btn7D
#define DBG_SPINBTNU Btn7R
#define DBG_SPINBTND Btn7L

// Movement
#define CLAW_UP_SPEED 90
#define ARM_UP_SPEED 100
#define CLAW_DN_SPEED -50
#define ARM_DN_SPEED -60

// Controls

#define MOVE_LT    Ch2
#define MOVE_RT    Ch3
#define MOVE_CLAW  Ch3
#define MOVE_ARM   Ch2

#define SWITCH_MODE Btn6U
#define CLAW_UP Btn5U
#define CLAW_DN Btn5D
#define ARM_UP  Btn6D
#define ARM_DN  Btn6U
