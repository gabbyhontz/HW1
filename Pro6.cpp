// Pro6.cpp : Defines the entry point for the application
//

#include "Pro6.h"

using namespace std;

//function that solves for the gradient cost using the variable y_predict and y
double gradient_cost(double y_predict, double y) {
	double grad_cost;
	grad_cost = 2 * (y_predict - y);
	return grad_cost; //the value for gradient cost in returned
}

int main()
{
	//a cout statement is made to input a value for y_predict
	double y_predict;
	cout << "Input the value for y_predict: ";
	cin >> y_predict;

	//a cout statement is made to input a value for y
	double y;
	cout << "Input the value for y: ";
	cin >> y;

	//the function for gradient cost is called and displayed in the code
	//y predict and y are inputted into the function call
	cout << "Gradient Cost: " << gradient_cost(y_predict, y);
}
