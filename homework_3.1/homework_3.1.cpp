#include <iostream>
using namespace std;


int main()
{
	int age;


	cout << "Please enter your age: ";
	cin >> age;
	cout << "\n";

	int your_age_after_5_years = age + 5;

	cout << "After 5 years you will be " << your_age_after_5_years << " years old.\n";

	return 0;
}