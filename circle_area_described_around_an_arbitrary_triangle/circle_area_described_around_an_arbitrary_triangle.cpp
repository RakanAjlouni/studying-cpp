#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    unsigned short a, b, c;
    const double pi = 3.14;

    cout << "Please enter a, b, c: \n";

    cin >> a >> b >> c;

    cout << "\n";

    double p = (a + b + c) / 2;
    double x = (a*b*c) / (4*(sqrt(p*(p-a)*(p-b)*(p-c))));
    double circle_area_described_around_an_arbitrary_triangle = pi * pow(x, 2);

    cout << "Circle area described around an arbitrary triangle = " << round(circle_area_described_around_an_arbitrary_triangle) << "\n";


    return 0;
}