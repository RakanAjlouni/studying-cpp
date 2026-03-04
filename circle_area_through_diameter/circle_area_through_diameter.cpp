#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    unsigned short d;
    const double pi = 3.14;

    cout << "Please enter D: \n";

    cin >> d;
    cout << "\n";

    double circle_area_through_diameter = (pi * pow(d, 2)) / 4;

    cout << "Circle area through diameter = " << ceil(circle_area_through_diameter) << "\n";


    return 0;
}