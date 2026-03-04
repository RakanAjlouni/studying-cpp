#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    unsigned short a;
    const double pi = 3.14;

    cout << "Please enter A: \n";
    cin >> a;
    cout << "\n";

    double circle_area_inscribed_in_square = (pi * pow(a, 2)) / 4;

    cout << "Circle area inscribed in square = " << ceil(circle_area_inscribed_in_square) << "\n";


    return 0;
}
