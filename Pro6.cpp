// Pro6.cpp : Defines the entry point for the application.
//

#include "Pro6.h"

using namespace std;

//initialize variables
double grad_cost = 0, y_predict=0, y=0;

//function that solves for the gradient cost using the variable y_predict and y
double gradient_cost() {
	grad_cost = 2 * (y_predict - y);
	return grad_cost; //the value for gradient cost in returned
}

int main()
{
	return 0;
}
