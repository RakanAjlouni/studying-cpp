#include <iostream>
#include <string>

using namespace std;

void my_sum_procedure()
{
    short number1, number2;

    cout << "Please enter number 1: \n";
    cin >> number1;

    cout << "Please enter number 2: \n";
    cin >> number2;

    short sum = number1 + number2;

    cout << "******************************\n\n" << "The sum of number 1 and number 2 is: " << sum << "\n\n";

}

short my_sum_function()
{
    short number1, number2;

    cout << "Please enter number 1: \n";
    cin >> number1;

    cout << "Please enter number 2: \n";
    cin >> number2;

    cout << "******************************\n\n" << "The sum of number 1 and number 2 is: ";


    return  number1 + number2;


}

int main()
{

    my_sum_procedure();
    cout << my_sum_function() + 10 << "\n\n";


    return 0;
}