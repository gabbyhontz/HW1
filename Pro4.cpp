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
    vector<double> vect_a;
    for (double i = 0; i < size; i++)
    {
        cout << "what is the value for element " << i << " in your vector A? " << endl;
        cin >> var_a;
        vect_a.push_back(var_a);
    }
    
    cout << endl;

    double var_b;
    vector<double> vect_b;
    for (double i = 0; i < size; i++)
    {
        cout << "what is the value for element " << i << " in your vector B? " << endl;
        cin >> var_b;
        vect_b.push_back(var_b);
    }
    
    cout << endl;

    cout << "The answer is: " << endl;
    for (double i = 0; i < size; i++) {
        //its only multiplying the last two entries in each input (0.0001*20.945)
        dot_pro = dot_pro+vect_a[i] * vect_b[i];
    }
    

    return dot_pro;
}

int main()
{
   cout << dot_product() << endl;
	
	return 0;
}
