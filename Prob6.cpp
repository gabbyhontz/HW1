﻿// Prob6.cpp : Defines the entry point for the application
//

#include "Prob6.h"

using namespace std;

//function that solves for the gradient cost using the variable y_predict and y
double gradient_cost(double y_predict, double y) {
	double grad_cost;
	grad_cost = 2 * (y_predict - y);
	return grad_cost; //the value for gradient cost in returned
}

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


//function for dot product between two vectors
double dot_product(vector<double> w, vector<double> x, int size) {
    double dot_pro = 0; //initialize dot product

    //for loop performing the dot product for each vector element 
    for (double i = 0; i < size; i++) {

        dot_pro = dot_pro + w[i] * x[i];
    }
    return dot_pro;
}

int main()
{
    int size; //initializing size vector
    cout << "What is the size of your vectors?" << endl;
    cin >> size; //taking size of vector from user

    double var_ww; //initialize input of vector components
    vector<double> vect_ww; //initialize vector with variable values as doubles
    for (double i = 0; i < size; i++)
    {
        cout << "what is the value for element " << i << " in your vector w? " << endl;
        cin >> var_ww; //input for vector a variables
        vect_ww.push_back(var_ww); //used to push elements into a vector from the back
    }

    double var_xx; //initialize input of vector components
    vector<double> vect_xx; //initialize vector with variable values as doubles
    for (double i = 0; i < size; i++)
    {
        cout << "what is the value for element " << i << " in your vector x? " << endl;
        cin >> var_xx; //input for vector a variables
        vect_xx.push_back(var_xx); //used to push elements into a vector from the back
    }

    //output the dot product
    cout << "Dot Product = " << dot_product(vect_ww, vect_xx, size) << "\n" << endl;
    double z = dot_product(vect_ww, vect_xx, size);

    //sigmoid is outputted
    cout << "Sigma(z) = " << sigmoid(z) << "\n" << endl; //calling the function and dsiplaying the returned value from sigmoid
    //gradient sigmoid is ouputted where sigmoid is inputted into gradient sigmoid
    cout << "Gradient Sigma(z) = " << gradient_sigmoid(sigmoid(z)) << "\n" << endl; //calling the function and displaying the returned value from gradient_sigmoid
    double y_predict = sigmoid(z);

    //a cout statement is made to input a value for y
    double y;
    cout << "Input the value for y: ";
    cin >> y;

    //the function for gradient cost is called and displayed in the code
    //y predict and y are inputted into the function call
    cout << "Gradient Cost: " << gradient_cost(y_predict, y);

    return 0;
}

