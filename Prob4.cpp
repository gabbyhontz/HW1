// Prob4.cpp : Defines the entry point for the application.
//

#include "Prob4.h"

using namespace std;

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

    return 0;
}
