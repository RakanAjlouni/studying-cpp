#include <iostream>

using namespace std;

enum en_weekday {sun = 1, mon = 2, tue = 3, wed = 4, thu = 5, fri = 6, sat = 7};

void show_weekday_menu()
{
	cout << "*************************" << endl;
	cout << "        Week Days        " << endl;
	cout << "*************************" << endl;
	cout << "1: Sunday" << endl;
	cout << "2: Monday" << endl;
	cout << "3: Tuesday" << endl;
	cout << "4: Wednesday" << endl;
	cout << "5: Thursday" << endl;
	cout << "6: Friday" << endl;
	cout << "7: Saturday" << endl;
	cout << "*************************" << endl;
	cout << "Please enter the number of day: " << endl;
}

en_weekday read_weekday()
{
	int  wd;
	cin >> wd;
	return (en_weekday)wd;
}

string get_weekday(en_weekday weekday)
{
	switch (weekday)
	{
	case en_weekday::sun:
		return "Sunday";
		break;
	case en_weekday::mon:
		return "Monday";
		break;
	case en_weekday::tue:
		return "Tuesday";
		break;
	case en_weekday::wed:
		return "Wednesday";
		break;
	case en_weekday::thu:
		return "Thursday";
		break;
	case en_weekday::fri:
		return "Friday";
		break;
	case en_weekday::sat:
		return "Saturday";
		break;
	default:
		return "Not a week day!\n";
	}
}

int main()
{
	show_weekday_menu();

	en_weekday weekday = read_weekday();

	cout << "Today is " << get_weekday(weekday) << endl;

	return 0;
}