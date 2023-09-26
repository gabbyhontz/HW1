// Pro7.cpp : Defines the entry point for the application.
//

#include "Pro7.h"

using namespace std;

double sigmoid(double z) {
    double sigma;
    sigma = 1 / (1 + exp(-z));
    return sigma;
}

double dot_product(vector<double> w, vector<double> x, int size) {
    double dot_pro = 0; 

    for (double i = 0; i < size; i++) {
        
        dot_pro = dot_pro + w[i] * x[i];
    }
    return dot_pro;
}

vector<double> gradient_weights(vector<double> w, vector<double> x, int size) {

    double sigma, dot_pro;

    double y = 1;

    double var_dwi;
    vector<double> vect_dwi;

    cout << "The gradient weight is = " << endl;

    dot_pro = dot_product(w, x,size);
    sigma = sigmoid(dot_pro);

    double dC = (2 * (sigma - y));
    double dsigma = (sigma * (1 - sigma));

    for (double i = 0; i < size; i++) {

        var_dwi = dC * dsigma * x[i];
        vect_dwi.push_back(var_dwi);
    }

	return vect_dwi;
}


void update_weights(vector<double> &w, double alpha, vector<double> vect_dwi, int size) {

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

    double alpha;
    cout << "what is the value for alpha?" << endl;
    cin >> alpha;

    cout << "\n" << endl;

    cout << "Dot Product = " << dot_product(vect_ww,vect_xx,size) << "\n" << endl;
    cout << "Sigma(z) = " << sigmoid(dot_product(vect_ww, vect_xx,size)) << "\n" << endl;
    
    vector<double> vect_dwi = gradient_weights(vect_ww,vect_xx,size);
    for (int i = 0; i < vect_dwi.size() ; i++) {
        cout << vect_dwi[i] << endl;
    }

    update_weights(vect_ww, alpha, vect_dwi,size);

    cout << "\n" << endl;

    cout << "Updated Weights = " << endl;
    for (int i = 0; i < vect_ww.size(); i++) {
        cout << vect_ww[i] << endl;
    }
	
	return 0;
}
