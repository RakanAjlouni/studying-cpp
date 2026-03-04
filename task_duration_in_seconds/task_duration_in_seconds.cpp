#include <iostream>
#include <cmath>
using namespace std;


int main()
{

    unsigned short int days, hours, minutes, seconds;

    cout << "Enter days, hours, minutes, and seconds: \n";

    cin >> days >> hours >> minutes >> seconds;

    double total_seconds = (days * 24 * pow(60, 2)) + (hours * pow(60, 2)) + (minutes * 60) + seconds;

    cout << "Total duration in seconds : " << round(total_seconds) << endl;



    return 0;
}