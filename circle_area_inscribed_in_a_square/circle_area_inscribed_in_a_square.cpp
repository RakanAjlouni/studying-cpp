#include <iostream>
using namespace std;


int main()
{
    unsigned short a;
    const double pi = 3.14;

    cout << "Please enter D: \n";
    cin >> a;
    cout << "\n";

    double circle_area_inscribed_in_square = (pi * a * a) / 4;
    
    cout << "Circle area inscribed in square = " << circle_area_inscribed_in_square << "\n";


    return 0;
}
