#include <iostream>
using namespace std;



int main()
{
    unsigned int total_seconds;
    const int seconds_per_day = 24 * 60 * 60;
    const int seconds_per_hour = 60 * 60;
	const int seconds_per_minute = 60;

    cout << "Please enter seconds:\n";
    
    cin >> total_seconds;
    
    unsigned int days, hours, minutes, seconds_left, remainder;

    days = (total_seconds / seconds_per_day),
                 remainder = total_seconds % seconds_per_day;

    hours = (remainder / seconds_per_hour),
                 remainder = remainder % seconds_per_hour;

    minutes = (remainder / seconds_per_minute),
                 remainder = remainder % seconds_per_minute;

    seconds_left = remainder;


    cout << days << ":" << hours << ":" << minutes << ":" << seconds_left << endl;

    return 0;
}
