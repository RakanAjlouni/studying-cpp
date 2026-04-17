#include <iostream>
#include <cmath>
#include <string>

using namespace std;

unsigned int powered_number(unsigned int number, unsigned int power_of_it)
{

	return pow(number, power_of_it);
}

int main()
{
	unsigned short number;
	unsigned short power_of_it;

	cout << "Please enter a number and the power of it: \n";
	cin >> number >> power_of_it;
	cout << "\n";


	// We handle the text here so it stays in order
	cout << "Number = " << number << ", ";
	cout << "Powered to = " << power_of_it << ", ";
	cout << "Equals = " << powered_number(number, power_of_it) << endl;

	return 0;
}