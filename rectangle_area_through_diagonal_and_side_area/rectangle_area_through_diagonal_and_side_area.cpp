#include <iostream>
#include <cmath>
#include <string>

using namespace std;

double rectangle_area(unsigned short a, unsigned short d)
{
    cout << "Rectangle area = ";

    return (a * sqrt(pow(d, 2) - pow(a, 2)));
}

int main()
{
    unsigned short a, d;

    cout << "Enter a and d: \n";

    cin >> a >> d;
    cout << "\n";


    cout << rectangle_area(a, d) << "\n";



    return 0;
}