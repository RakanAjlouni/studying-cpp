#include <iostream>
#include <string>

using namespace std;

void swap_numbers()
{
    short number1, number2, temp;

    cout << "Please enter two numbers: \n";

    cin >> number1 >> number2;

    cout << "\nThis is your first number: " << number1 << "\nThis is your second number: " << number2 << "\n\n";

    temp = number1;
    number1 = number2;
    number2 = temp;


    cout << "Here are your swapped numbers: \n\n" << number1 << "\n" << number2 << "\n";

}

int main()
{

    swap_numbers();
    return 0;
}