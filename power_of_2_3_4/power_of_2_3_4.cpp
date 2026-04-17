#include <iostream>
#include <cmath>
#include <string>

using namespace std;

unsigned short get_square(unsigned short number)
{
	return pow(number, 2);
}

unsigned short get_cube(unsigned short number)
{
	return pow(number, 3);
}

unsigned short get_fourth_power(unsigned short number)
{
	return pow(number, 4);
}

int main()
{
	unsigned short number;

	cout << "Please enter a number: \n";
	cin >> number;
	cout << "\n";

	cout << get_square(number) << "\n" << get_cube(number) << "\n" << get_fourth_power(number) << "\n";


	return 0;
}