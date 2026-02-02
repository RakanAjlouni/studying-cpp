#include <iostream>
using namespace std;


int main()
{
    unsigned short a, h;

    cout << "Please enter a, h: \n";

    cin >> a >> h;

    unsigned short  triangle_area = (a / 2) * h;

    cout << "Triangle area = " << triangle_area << "\n";


    return 0;
}
