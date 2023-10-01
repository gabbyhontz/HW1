// Prob8.cpp : Defines the entry point for the application.
//

#include "Prob8.h"

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
vector<double> gradient_weights(vector<double> w, vector<double> x, int size, int y) {

    double sigma, dot_pro;

    //initialize the variables of dwi
    double var_dwi;
    vector<double> vect_dwi; //initialize the vector of dwi

    //call the dot product function and input vector w,x, and their size
    dot_pro = dot_product(w, x, size);
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
void update_weights(vector<double>& w, double alpha, vector<double> vect_dwi) {


    //for loop solving for the updated weights at the vector size
    for (int i = 0; i < vect_dwi.size(); i++) {
        w[i] = w[i] - alpha * vect_dwi[i];
    }

}

int main()
{
    //vector<double> w = { 0.0001,0.0001,0.0001 };

    int size=3;

    double alpha; //initializing size vector
    cout << "What is the svalue of alpha?" << endl;
    cin >> alpha; //taking size of vector from user

    double var_w; //initialize input of vector components
    vector<double> w; //initialize vector with variable values as doubles
    for (double i = 0; i < size; i++)
    {
        cout << "what is the value for element " << i << " in your vector w? " << endl;
        cin >> var_w; //input for vector a variables
        w.push_back(var_w); //used to push elements into a vector from the back
    }


    //for loop to count iterations of 150
    for (int i = 0; i < 150; i++) {
        //initialize all x sets for each aircraft
        vector<double> M_346_Master = { 124,31.89,20.945 };
        vector<double> AT_402B = { 74,51.08,9.170 };
        vector<double> MB_326 = { 103,34.67,8.300 };
        vector<double> AT_502B = { 77,52.00,9.400 };
        vector<double> MB_339 = { 104,35.63,13.000 };
        vector<double> AT_602 = { 92,56.00,12.500 };
        vector<double> Aero_L_159_Alca = { 130,31.29,17.637 };
        vector<double> AT_504 = { 73,52.00,9.600 };

        //initialize y set
        vector<double> y = { 1,0,1,0,1,0,1,0 };

        //initialize vector of vectors for air crafts sets
        vector<vector<double>> vector_of_vector = { M_346_Master, AT_402B, MB_326, AT_502B, MB_339, AT_602, Aero_L_159_Alca, AT_504 };;

        //for loop to run through vector of vectors
        for (int i = 0; i < vector_of_vector.size(); i++)
        {
            //vector_of_vector[i]; // this is a vector
            //for loop to run through variables within  the vector of vectors
            for (int j = 0; j < vector_of_vector[i].size(); j++)
            {
                vector_of_vector[i][j]; // this is double
            }

            //displays the elements of the dwi vector found in the gradient weights function
            vector<double> vect_dwi = gradient_weights(w, vector_of_vector[i], size, y[i]);

            //call updated weights function
            update_weights(w, alpha, vect_dwi);

            //display the updated weights vector w
            cout << "Updated Weights Aircraft Model " << i+1 << " = " << endl;
            for (int i = 0; i < w.size(); i++) {
                cout << w[i] << endl;
            }
        }

        cout << endl;


    }
    return 0;
}
