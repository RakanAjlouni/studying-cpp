#include <iostream>
#include <string>

using namespace std;

void swap_numbers(short &number1,short &number2)
{
    short temp;

    temp = number1;
    number1 = number2;
    number2 = temp;
    
    cout << "After swap inside function number1 = " << number1 << ", number2 = " << number2 << endl;
}

int main()
{
    short number1, number2;

    cout << "Please enter number1: \n";
    cin >> number1;

    cout << "Please enter number2: \n";
    cin >> number2;

    cout << "Before swapping number1 = " << number1 << ", B = " << number2 << endl;

    swap_numbers(number1, number2);

    cout << "After swapping inside main the number1 = " << number1 << ", B = " << number2 << endl;


    return 0;
}