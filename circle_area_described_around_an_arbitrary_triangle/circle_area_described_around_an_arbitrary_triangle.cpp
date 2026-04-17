#include <iostream>
#include <cmath>
#include <string>

using namespace std;

double circle_area_described_around_an_arbitrary_triangle(unsigned short a, unsigned short b, unsigned short c)
{
    const double pi = 3.14;

    cout << "Circle area described around an arbitrary triangle = ";

    double p = (a + b + c) / 2;
    double x = (a * b * c) / (4 * (sqrt(p * (p - a) * (p - b) * (p - c))));
    return pi * pow(x, 2);
}

int main()
{
    unsigned short a, b, c;

    cout << "Please enter a, b, c: \n";

    cin >> a >> b >> c;

    cout << "\n";

    cout << circle_area_described_around_an_arbitrary_triangle(a, b, c) << "\n";


    return 0;
}