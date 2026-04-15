#include <iostream>
#include <cmath>
#include <string>

using namespace std;

double circle_area_along_the_circumference(unsigned short l)
{
    const double pi = 3.14;

    cout << "Circle area along the circumference = ";

    return pow(l, 2) / (4 * pi);
}

int main()
{
    unsigned short l;

    cout << "Please enter L: \n";
    cin >> l;
    cout << "\n";

    cout << circle_area_along_the_circumference(l) << "\n";

    return 0;
}