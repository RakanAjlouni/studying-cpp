#include <iostream>

using namespace std;

void print_month(int month_number)
{
	switch (month_number)
	{
	case 1:
		cout << "January\n";
		break;
	case 2:
		cout << "February\n";
		break;
	case 3:
		cout << "March\n";
		break;
	case 4:
		cout << "April\n";
		break;
	case 5:
		cout << "May\n";
		break;
	case 6:
		cout << "June\n";
		break;
	case 7:
		cout << "July\n";
		break;
	case 8:
		cout << "August\n";
		break;
	case 9:
		cout << "September\n";
		break;
	case 10:
		cout << "October\n";
		break;
	case 11:
		cout << "November\n";
		break;
	case 12:
		cout << "December\n";
		break;
	default:
		cout << "Wrong month number, try again!\n";
	}
}


int main()
{
	int month;

	cout << "Please enter a month number (1-12): \n";
	cin >> month;

	print_month(month);

	return 0;
}