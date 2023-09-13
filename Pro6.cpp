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
	//a cout statement is made to input a value for y_predict
	cout << "Input the value for y_predict (using atleast one decimal place): ";
	cin >> y_predict;

	//a cout statement is amde to input a value for y
	cout << "Input the value for y (using atleast one decimal place): ";
	cin >> y;

	//the function for gradient cost is called and displayed in the code
	cout << "Gradient Cost: " << gradient_cost();
}
