#include <iostream>
#include <string>

using namespace std;

unsigned short rectangle_area(unsigned short a, unsigned short b)
{
    cout << "Rectangle area = ";

    return a * b;
}

int main()
{
    unsigned short a, b;
    cout << "Enter a and b: \n\n";

    cin >> a >> b;
    cout << "\n";

    cout << rectangle_area(a, b) << "\n";


    return 0;
}