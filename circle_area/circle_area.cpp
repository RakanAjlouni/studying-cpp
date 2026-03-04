#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    unsigned short r;
    const double pi = 3.14;

    cout << "Please enter D: \n";

    cin >> r;
    cout << "\n";

    double circle_area_through_diameter = pi * pow(r, 2);

    cout << "Circle area through diameter = " << ceil(circle_area_through_diameter) << "\n";


    return 0;
}