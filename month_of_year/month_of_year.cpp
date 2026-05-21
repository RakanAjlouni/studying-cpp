#include <iostream>

using namespace std;

void print_month(int month_number)
{
	if (month_number == 1)
	{
		cout << "January\n";
	}
	else if (month_number == 2)
	{
		cout << "February\n";
	}
	else if (month_number == 3)
	{
		cout << "March\n";
	}
	else if (month_number == 4)
	{
		cout << "April\n";
	}
	else if (month_number == 5)
	{
		cout << "May\n";
	}
	else if (month_number == 6)
	{
		cout << "June\n";
	}
	else if (month_number == 7)
	{
		cout << "July\n";
	}
	else if (month_number == 8)
	{
		cout << "August\n";
	}
	else if (month_number == 9)
	{
		cout << "September\n";
	}
	else if (month_number == 10)
	{
		cout << "October\n";
	}
	else if (month_number == 11)
	{
		cout << "November\n";
	}
	else if (month_number == 12)
	{
		cout << "December\n";
	}
	else
	{
		cout << "Wrong day number, try again!\n";
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