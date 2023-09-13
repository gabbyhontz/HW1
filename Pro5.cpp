// Pro5.cpp : Defines the entry point for the application.
//

#include "Pro5.h"

using namespace std;

//initializing the variables used in the code
double z=0;
double sigma_z = 0, grad_sig_z=0;

//function where the variable z in the given equation is inputted and returned
double input_z() {
	cout << "Type in a value for z (with at least one decimal place): ";
	cin >> z;
	return z;
}

//function sigmoid where the equation for sigma(z) is alculated using the inputted z value and returned
double sigmoid() {
	sigma_z = 1 / (1 + exp(-z));
	return sigma_z;
}

//function grad_sigmoid where the equation for the gradient of sigma(z) is stored and calculated using the returned sigma_z value
double gradient_sigmoid() {
	grad_sig_z = sigma_z * (1 - (sigma_z));
	return grad_sig_z;
}

int main()
{
	
	return 0;
}
