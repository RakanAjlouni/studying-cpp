#include <iostream>
#include <cmath>
#include <string>

using namespace std;

double circle_area_inscribed_in_an_isosceles_triangle(double a, double b)
{
    const double pi = 3.14;

    cout << "Circle area inscribed in an isosceles traingle = ";

    return pi * (pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));
}

int main()
{
    double a, b;

    cout << "Please enter a, b: \n";

    cin >> a >> b;

    cout << "\n";


    cout << circle_area_inscribed_in_an_isosceles_triangle(a, b) << "\n";


    return 0;
}