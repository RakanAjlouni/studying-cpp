#include <iostream>
#include <cmath>
using namespace std;



int main()
{
	unsigned short number;
	unsigned short power_of_it;

	cout << "Please enter a number and the power of it: \n";
	cin >> number >> power_of_it;
	cout << "\n";

	unsigned int powered_number = pow(number, power_of_it);

	cout << "Number " << number << " powered to " << power_of_it << " equals: " << round(powered_number) << endl;

	return 0;
}