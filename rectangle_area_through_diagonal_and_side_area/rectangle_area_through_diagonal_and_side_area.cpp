#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    unsigned short a, d;
    
    cout << "Enter a and d: \n\n";

    cin >> a >> d;
    cout << "\n";

    double rectangle_area = a * sqrt(pow(d, 2) - pow(a, 2));

    cout << "Rectangle area is: \n" << rectangle_area;






    return 0;
}