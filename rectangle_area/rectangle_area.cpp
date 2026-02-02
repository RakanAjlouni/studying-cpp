#include <iostream>
using namespace std;


int main()
{
    unsigned short a, b;
    cout << "Enter a and b: \n\n";
    
    cin >> a >> b;
    cout << "\n";

    unsigned short rectangle_area = a * b;

    cout << "Rectangle area = " << rectangle_area << "\n";


    return 0;
}