#include <iostream>
#include <cmath>
#include <string>

using namespace std;


double circle_area(unsigned short r)
{
    const double pi = 3.14;

    cout << "Circle area = ";

    return pi * pow(r, 2);

}
int main()
{
    unsigned short r;

    cout << "Please enter D: \n";

    cin >> r;
    cout << "\n";


    cout << circle_area(r) << "\n";


    return 0;
}