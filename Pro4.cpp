// Pro4.cpp : Defines the entry point for the application.
//

#include "Pro4.h"

using namespace std;

//declare variables (global)
double vector1_length = 0, vector2_length = 0, element_input = 0, dotproduct_ans = 0;
int run1 = 0, run2 = 0;

//function of dot_product where i must be less than the size of the vectors
double dot_product(vector<int> &vector1, vector<int> &vector2) {
	// "vector<int> &vector1" is mean to reference a variable that is equal to vector<int> but doesn't store the values
	for (double i = 0; i < vector1.size(); i++) {
		dotproduct_ans = vector1[i] * vector2[i]; //solving for the dot product by multiplying the two vectors of size i
		return dotproduct_ans; //give the answer of the dot product computation
	}

}

int main()
{
	vector<int> vector1; //declare a vector named vector 1 with a size to be inputted
	vector<int> vector2; // decarea  vector named vector 2 with a size to be inputted

	//output the question and input the length of vector one
	cout << "What is the length of vector 1? " << "\n";
	cin >> vector1_length;

	cout << endl;

	//output the question and input the length of vector two
	cout << "What is the length of vector 2? " << "\n";
	cin >> vector2_length;

	cout << endl;
	

	while (run1 < vector1_length) {
		for (double i = 0; i<vector1_length; i++) {
			cout << "What is the element number " << run1 + 1 << " of vector 1 ? " << "\n";
			cin >> i; //calling input of the actual numbers "elements"
			vector1.push_back(i);// the "vector1.push_back" fuction creates a number of inputs that are allowed based on the number of elements and stores it as vector one
		}
		run1 = run1 + 1;
	}

	cout << endl;


	while (run2 < vector2_length) {
		for (double i = 0; i <vector2_length; i++) {
			cout << "What is the element number " << run2 + 1 << " of vector 2 ? " << "\n";
			cin >> i; //calling input of the actual numbers "elements"
			vector2.push_back(i);// the "vector1.push_back" fuction creates a number of inputs that are allowed based on the number of elements and stores it as vector one
		}
		run2 = run2 + 1;
	}

	cout << endl;

	//output of the dot product found in the dot_product function
	cout << "The dot product is:  " << dot_product(vector1, vector2);

	return 0;
}
