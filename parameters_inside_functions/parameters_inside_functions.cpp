#include <iostream>
#include <string>

using namespace std;

short my_sum_function(short number1, short number2)
{
    
    cout << "******************************\n\n" << "The sum of number 1 and number 2 is: ";


    return  number1 + number2;


}

int main()
{
    short number1, number2;

    cout << "Please enter number 1: \n";
    cin >> number1;
    cout << "Please enter number 2: \n";
    cin >> number2;

    cout << my_sum_function(number1, number2) << "\n\n";


    return 0;
}