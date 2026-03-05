#include <iostream>
#include <string>
using namespace std;



int main()
{
	string str = "123.456";

	//convert string to integer
	int num_int = stoi(str);


	//convert string to float
	float num_float = stof(str);

	//convert string to double
	double num_double = stod(str);

	cout << "num_int = " << num_int << "\n";
	cout << "num_float = " << num_float << "\n";
	cout << "num_double = " << num_double << "\n";



	return 0;
}