#include <iostream>
#include <cmath>
#include <string>

using namespace std;

double circle_area_inscribed_in_square(unsigned short a)
{
    const double pi = 3.14;

    cout << "Circle area inscribed in square = ";

    return (pi * pow(a, 2)) / 4;
}

int main()
{
    unsigned short a;

    cout << "Please enter A: \n";
    cin >> a;

    cout << "\n";


    cout << circle_area_inscribed_in_square(a) << "\n";


    return 0;
}
