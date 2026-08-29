#include <iostream>

using namespace std;

void print_day(int day_number)
{
	switch (day_number)
	{
	case 1:
		cout << "Sunday\n";
		break;
	case 2:
		cout << "Monday\n";
		break;
	case 3:
		cout << "Tuesday\n";
		break;
	case 4:
		cout << "Wednesday\n";
		break;
	case 5:
		cout << "Thursday\n";
		break;
	case 6:
		cout << "Friday\n";
		break;
	case 7:
		cout << "Staturday\n";
		break;
	default:
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

