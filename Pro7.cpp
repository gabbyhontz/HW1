// Pro7.cpp : Defines the entry point for the application.
//

#include "Pro7.h"

using namespace std;

//function to solve for sigmoid from problem 5
double sigmoid(double z) {
    double sigma;
    sigma = 1 / (1 + exp(-z));
    return sigma;
}

//dot product function from problem 4
double dot_product(vector<double> w, vector<double> x, int size) {
    double dot_pro = 0; 

    //for loop that computes the dot product for each element in the vector
    for (double i = 0; i < size; i++) {
        
        dot_pro = dot_pro + w[i] * x[i];
    }
    return dot_pro;
}

//vector function that outputs the vector for dwi and acepts input of vector w,x, and size of vectors
vector<double> gradient_weights(vector<double> w, vector<double> x, int size) {

    double sigma, dot_pro;

    //input the value of y from the problem
    double y; //initializing
    cout << "What is the value for y?" << endl;
    cin >> y; 

    //initialize the variables of dwi
    double var_dwi;
    vector<double> vect_dwi; //initialize the vector of dwi

    cout << "The gradient weight is = " << endl;

    //call the dot product function and input vector w,x, and their size
    dot_pro = dot_product(w, x,size);
    sigma = sigmoid(dot_pro); //the dot product is incorporated into the sigmoid function

    //variables are defined for the equations to make debugging easier
    double dC = (2 * (sigma - y));
    double dsigma = (sigma * (1 - sigma));

    //for loop to solve for the vector dwi using the values of dC and dsigma
    for (double i = 0; i < size; i++) {
        //the variable for dwi are found and put into a vactor format
        var_dwi = dC * dsigma * x[i];
        vect_dwi.push_back(var_dwi);
    }

	return vect_dwi;
}

//function to solve for the updated weights using w, alpha, vector_dwi,and the vector size
void update_weights(vector<double> &w, double alpha, vector<double> vect_dwi, int size) {

    //for loop solving for the updated weights at the vector size
	for (int i = 0; i < size; i++) {
		w[i] = w[i] - alpha * vect_dwi[i];
	}

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

    //input alpha value
    double alpha;
    cout << "what is the value for alpha?" << endl;
    cin >> alpha;

    cout << "\n" << endl;

    //display dot product and simga values
    cout << "Dot Product = " << dot_product(vect_ww,vect_xx,size) << "\n" << endl;
    cout << "Sigma(z) = " << sigmoid(dot_product(vect_ww, vect_xx,size)) << "\n" << endl;
    
    //displays the elements of the dwi vector found in the gradient weights function
    vector<double> vect_dwi = gradient_weights(vect_ww,vect_xx,size);
    for (int i = 0; i < vect_dwi.size() ; i++) {
        cout << vect_dwi[i] << endl;
    }

    //call updated weights function
    update_weights(vect_ww, alpha, vect_dwi,size);

    cout << "\n" << endl;

    //display the updated weights vector ww
    cout << "Updated Weights = " << endl;
    for (int i = 0; i < vect_ww.size(); i++) {
        cout << vect_ww[i] << endl;
    }
	
	return 0;
}
