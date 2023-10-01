// Pro1.cpp : Defines the entry point for the application
//

#include "Pro1.h"

using namespace std;

int main()
{
	// initializing variables
	double roll_damping_coeff = 0.7;
	double aileron_effect = 0.2;
	double roll_rate = 1; // rad/s
	double step_size = 0.01;
	double aileron_angle = 0;
	double change_roll_rate = 0;

	//this for loop creates the variable i=interation, and runs through the code 500 times, 
	//every run through the value of i is increased by 1 to store a new variable
	for (double i = 0; i <= 500; i++) {
		//solving for the time t, we divide i by 100 because our time step 0.01 is in the hundreds place
		const double t = i / 100.0;

		//if statement where for the range [0,2] aileron_angle=1
		if (t >= 0 && t <= 2) {
			aileron_angle = 1;
		}
		//else if statement where for the range (2,infinity)  aileron_angle=0
		else if (t > 2) {
			aileron_angle = 0;
		}

		//equation to find roll rate dot (change_roll_rate)
		change_roll_rate = (roll_damping_coeff * roll_rate) + (aileron_effect * aileron_angle);
		//equation to find roll rate at each time period (0s to 5s at a time step of 0.01s)
		roll_rate = roll_rate + change_roll_rate * step_size;

		//printing out of the time, and the roll rate corresponding to that time
		cout << "Time (s): " << t << "        " << "Roll Rate (rad/s): " << roll_rate << endl;

	}
	return 0;
}
