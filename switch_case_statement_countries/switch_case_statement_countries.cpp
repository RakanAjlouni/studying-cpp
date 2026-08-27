#include <iostream>

using namespace std;

enum en_country_choice { Jordan = 1, Tunisia = 2, Algeria = 3, Oman = 4, Egypt = 5, Iraq = 6, Other = 7 };

int main()
{
	cout << "*************************\n";
	cout << "Please enter the number of your country: \n";
	cout << "(1) Jordan\n";
	cout << "(2) Tunisia\n";
	cout << "(3) Algeria\n";
	cout << "(4) Oman\n";
	cout << "(5) Egypt\n";
	cout << "(6) Iraq\n";
	cout << "(7) Other\n";
	cout << "*************************\n\n";
	cout << "Your choice: ";

	int c;
	en_country_choice country;

	cin >> c;
	country = (en_country_choice)c;

	switch (country)
	{
	case en_country_choice::Jordan:
		cout << "Your country is Jordan\n";
		break;
	case en_country_choice::Tunisia:
		cout << "Your country is Tunisia\n";
		break;
	case en_country_choice::Algeria:
		cout << "Your country is Algeria\n";
		break;
	case en_country_choice::Oman:
		cout << "Your country is Oman\n";
		break;
	case en_country_choice::Egypt:
		cout << "Your country is Egypt\n";
		break;
	case en_country_choice::Iraq:
		cout << "Your country is Iraq\n";
		break;
	default:
		cout << "Your country is Other\n";
	}
	return 0;
}