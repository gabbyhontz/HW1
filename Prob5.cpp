// Prob5.cpp : Defines the entry point for the application.
//

#include "Prob5.h"

using namespace std;

//function sigmoid where the equation for sigma(z) is alculated using the inputted z value and returned
double sigmoid(double z) {
	double sigma_z;
	sigma_z = 1 / (1 + exp(-z));
	return sigma_z;
}

//function grad_sigmoid where the equation for the gradient of sigma(z) is stored and calculated using the returned sigma_z value
double gradient_sigmoid(double sigma_z) {
	double grad_sig_z;
	grad_sig_z = sigma_z * (1 - (sigma_z));
	return grad_sig_z;
}

int main()
{
	//the value for z is inputted by the user and inputted into the function sigmoid
	double z;
	cout << "Type in a value for z (with at least one decimal place): ";
	cin >> z;

	//sigmoid is outputted
	cout << "Sigma(z) = " << sigmoid(z) << "\n" << endl; //calling the function and dsiplaying the returned value from sigmoid
	//gradient sigmoid is ouputted where sigmoid is inputted into gradient sigmoid
	cout << "Gradient Sigma(z) = " << gradient_sigmoid(sigmoid(z)) << "\n" << endl; //calling the function and displaying the returned value from gradient_sigmoid

	return 0;
}
