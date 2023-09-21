// Pro4.cpp : Defines the entry point for the application.
//

#include "Pro4.h"

using namespace std;

double dot_product() {
    double dot_pro=0; //initialize dot_pro

    int size; //initializing size vector
    cout << "What is the size of your vectors A and B?" << endl;
    cin >> size; //taking size of vector from user

    cout << endl;

    double var_a; //initialize input of vector components
    vector<double> vect_a; //initializing vector with variable values as double
    for (double i = 0; i < size; i++)
    {
        cout << "what is the value for element " << i << " in your vector A? " << endl;
        cin >> var_a; //input for vector a variables
        vect_a.push_back(var_a); //used to push elements into a vector from the back
    }
    
    cout << endl;

    double var_b; //initialize input of vector components
    vector<double> vect_b; //initialize vector with variable values as doubles
    for (double i = 0; i < size; i++)
    {
        cout << "what is the value for element " << i << " in your vector B? " << endl;
        cin >> var_b; //input for vector b variables
        vect_b.push_back(var_b); //used to push elements into a vector from the back
    }
    
    cout << endl;

    cout << "The answer is: " << endl;
	//for loop to find the dot product
    for (double i = 0; i < size; i++) {
	//dot product that runs for the number inputted for the size
	//the vector elements in slot 0 are multiplied and added to the existing dot product
	//this loop contines until i is found to be greater than the size of the matrix
        dot_pro = dot_pro+vect_a[i] * vect_b[i];
    }
    
	//return the value of dot_product
    return dot_pro;
}

int main()
{
	//output the function dot_produuct
   cout << dot_product() << endl;
	
	return 0;
}
