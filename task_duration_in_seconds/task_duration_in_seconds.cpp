#include <iostream>
using namespace std;


int main()
{

	unsigned short int days, hours, minutes, seconds;

    cout << "Enter days, hours, minutes, and seconds: \n";

    cin >> days >> hours >> minutes >> seconds;

    unsigned long total_seconds = (days * 24 * 60 * 60) + (hours * 60 * 60) + (minutes * 60) + seconds;

    cout << "Total duration in seconds : " << total_seconds << endl;



    return 0;
}