#include <iostream>
using namespace std;



int main()
{
	unsigned short num1, num2, num3;



	cout << "Please enter number 1: \n";
	cin >> num1;

	cout << "Please enter number 2: \n";
	cin >> num2;

	cout << "Please enter number 3: \n";
	cin >> num3;

	cout << "\n";

	unsigned short total = num1 + num2 + num3;


	cout << "The total of numbers you entered is: \n";
	cout << num1 << " +\n";
	cout << num2 << " +\n";
	cout << num3 << "\n";
	cout << "----------------------------------------------\n";
	cout << "Total = " << total << "\n";


	return 0;
}
