#include <iostream>
using namespace std;


int main()
{
    short number;

    cout << "Enter a number: \n";

    cin >> number;
    cout << "\n";

    short half_number = number / 2;

    cout << "Half of " << number << " is " << half_number << "\n";


    return 0;
    
}