#include <iostream>
#include <cmath>
using namespace std;



int main()
{
	unsigned short number;

	cout << "Please enter a number: \n";
	cin >> number;
	cout << "\n";

	unsigned short number2 = pow(number, 2);
	unsigned short number3 = pow(number, 3);
	unsigned short number4 = pow(number, 4);

	cout << round(number2) << "\n" << round(number3) << "\n" << round(number4) << "\n";


	return 0;
}