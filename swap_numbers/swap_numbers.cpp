#include <iostream>
using namespace std;


int main()
{   
    short number1, number2;

    cout << "Please enter two numbers: \n";

    cin >> number1 >> number2;

    cout << "\n" << number1 << "\n" << number2 << "\n\n";
    
    short temp = number1;
    number1 = number2, number2 = temp;


    cout << number1 << "\n" << number2 << "\n";


    return 0;
}