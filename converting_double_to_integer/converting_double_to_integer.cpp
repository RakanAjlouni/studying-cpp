#include <iostream>
using namespace std;


int main()
{
	int num1;
	double num2 = 18.99;

	num1 = num2; //Implicit conversion from double to integer

	num1 = (int)num2; //explicit conversion, called c style

	num1 = int(num2); //explicit conversion

	cout << num1 << endl;



	return 0;
}