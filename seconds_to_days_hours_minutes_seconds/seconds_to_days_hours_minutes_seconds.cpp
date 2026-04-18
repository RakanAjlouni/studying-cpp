#include <iostream>
#include <cmath>

using namespace std;

unsigned int get_days(unsigned int total_seconds)
{
    const unsigned int seconds_per_day = 24 * pow(60, 2);
    return total_seconds / seconds_per_day;

}

unsigned int get_hours(unsigned int total_seconds)
{
    const unsigned int seconds_per_day = 24 * pow(60, 2);
    const unsigned int seconds_per_hour = pow(60, 2);

    unsigned int remainder = total_seconds % seconds_per_day;
    return remainder / seconds_per_hour;
}

unsigned int get_minutes(unsigned int total_seconds)
{
    const unsigned int seconds_per_day = 24 * pow(60, 2);
    const unsigned int seconds_per_hour = pow(60, 2);
    const unsigned int seconds_per_minute = 60;

    unsigned int remainder = total_seconds % seconds_per_day;
    remainder = remainder % seconds_per_hour;
    return remainder / seconds_per_minute;
}

unsigned int get_seconds_left(unsigned int total_seconds)
{
    const unsigned int seconds_per_day = 24 * pow(60, 2);
    const unsigned int seconds_per_hour = pow(60, 2);
    const unsigned int seconds_per_minute = 60;

    unsigned int remainder = total_seconds % seconds_per_day;
    remainder = remainder % seconds_per_hour;
    remainder = remainder % seconds_per_minute;
    return remainder;
}


int main()
{
    unsigned int total_seconds;

    cout << "Please enter total seconds: \n";

    cin >> total_seconds;



    cout << get_days(total_seconds) << ":" << get_hours(total_seconds) << ":" << get_minutes(total_seconds) << ":" << get_seconds_left(total_seconds) << endl;

    return 0;
}
