#include <iostream>

using namespace std;

void print_day(int day_number)
{
	if (day_number == 1)
	{
		cout << "Sunday\n";
	}
	else if (day_number == 2)
	{
		cout << "Monday\n";
	}
	else if (day_number == 3)
	{
		cout << "Tuesday\n";
	}
	else if (day_number == 4)
	{
		cout << "Wednesday\n";
	}
	else if (day_number == 5)
	{
		cout << "Thursday\n";
	}
	else if (day_number == 6)
	{
		cout << "Friday\n";
	}
	else if (day_number == 7)
	{
		cout << "Staturday\n";
	}
	else
	{
		cout << "Wrong day number, try again!\n";
	}
}


int main()
{
	int day;
	
	cout << "Please enter a day number (1-7): \n";
	cin >> day;

	print_day(day);

	return 0;
}

