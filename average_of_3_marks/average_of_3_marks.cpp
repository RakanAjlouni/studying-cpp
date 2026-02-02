#include <iostream>
using namespace std;


int main()
{
    unsigned short mark1, mark2, mark3;

    cout << "Please enter Mark 1, Mark 2, Mark 3: \n";

    cin >> mark1 >> mark2 >> mark3;

    unsigned short marks_average = (mark1 + mark2 + mark3) / 3;

    
    cout << "\n";
    cout << marks_average << "\n";


    return 0;
}