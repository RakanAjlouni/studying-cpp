#include <iostream>
using namespace std;


int main()
{
    unsigned short l;
    const double pi = 3.14;

    cout << "Please enter L: \n";
    cin >> l; 
    cout << "\n";

    double circle_area_along_the_circumference = (l * l) / (4 * pi);

    cout << "Circle area along the circumference = " << circle_area_along_the_circumference << "\n";


    return 0;
}