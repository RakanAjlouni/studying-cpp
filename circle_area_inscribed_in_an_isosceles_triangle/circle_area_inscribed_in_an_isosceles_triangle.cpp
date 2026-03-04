#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b;
    const double pi = 3.14;

    cout << "Please enter a, b: \n";

    cin >> a >> b;

    cout << "\n";

    double circle_area_inscribed_in_an_isosceles_triangle = pi * (pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));

    cout << "Circle area inscribed in an isosceles triangle = " << floor(circle_area_inscribed_in_an_isosceles_triangle) << "\n";


    return 0;
}