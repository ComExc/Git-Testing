/*
 * main.c
 *
 *  Created on: 20-Jan-2022
 *      Author: RAHUL MONDAL
 */

#include "States.h"

static void (*state_table[])(void) = {Gear_Down, Checking_Before_Takeoff, Raising_Gear,
									Gear_Up, Checking_Before_Landing, Lowering_Gear};//Declaration of array of Function pointer
int main()
{
	Init_State_Machine();
	while(1)
	{
		state_table[current_state]();//Calling the states 
	}
}
