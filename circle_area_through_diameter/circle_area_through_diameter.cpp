#include <iostream>
using namespace std;

int main()
{
    unsigned short d;
    const double pi = 3.14;

    cout << "Please enter D: \n";

    cin >> d;
    cout << "\n";

    double circle_area_through_diameter = (pi * d * d) / 4;

    cout << "Circle area through diameter = " << circle_area_through_diameter << "\n";


    return 0;
}