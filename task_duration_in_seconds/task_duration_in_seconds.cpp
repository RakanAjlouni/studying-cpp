#include <iostream>
#include <cmath>

using namespace std;

double total_seconds(unsigned short days, unsigned short hours, unsigned short minutes, unsigned short seconds)
{
    return (days * 24 * pow(60, 2)) + (hours * pow(60, 2)) + (minutes * 60) + seconds;
}

int main()
{

    unsigned short int days, hours, minutes, seconds;

    cout << "Enter days, hours, minutes, and seconds: \n";

    cin >> days >> hours >> minutes >> seconds;


    cout << "Total duration in seconds : " << total_seconds(days, hours, minutes, seconds) << endl;


    return 0;
}