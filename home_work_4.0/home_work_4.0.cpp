#include <iostream>
using namespace std;


int main()
{
    unsigned short A, B;

    cout << "Please enter the first number A: \n";
    cin >> A;

    cout << "PLease enter the second number B: \n\n";
    cin >> B;
    cout << "\n";


    cout << A << " + " << B << " = " << A + B << "\n";
    cout << A << " - " << B << " = " << A - B << "\n";
    cout << A << " * " << B << " = " << A * B << "\n";
    cout << A << " / " << B << " = " << A / B << "\n";
    cout << A << " % " << B << " = " << A % B << "\n";

    return 0;
}
