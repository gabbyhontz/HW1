// Pro4.cpp : Defines the entry point for the application.
//

#include "Pro4.h"

using namespace std;

int inputA(int vect_A)
{
    int size;


    cout << "Input the size of both matrices? \n" << endl;
    cin >> size;

    for (double i = 0; i < size; i++)

        vect_A = vect_A[i];

    return vect_A;
}

int main()
{
    int product = 0;



    product = vect_A * vect_B;
	return 0;
}
