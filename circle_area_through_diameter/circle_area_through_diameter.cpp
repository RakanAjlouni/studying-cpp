#include <iostream>
#include <cmath>
#include <string>

using namespace std;

double circle_area_through_diameter(unsigned short d)
{
    const double pi = 3.14;

    cout << "Circle area through diameter = ";

    return (pi * pow(d, 2)) / 4;
}

int main()
{
    unsigned short d;

    cout << "Please enter D: \n";

    cin >> d;
    cout << "\n";


    cout << circle_area_through_diameter(d) << "\n";


    return 0;
}