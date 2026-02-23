#include <iostream>
using namespace std;

int main()
{
    unsigned short A, B; 

    cout << "Please enter the first number A: \n\n";
    cin >> A;
    
    cout << "\n";

    cout << "Please enter the first number B: \n\n";
    cin >> B;

    cout << "\n";

    cout << A << " == " << B << " is " << (A == B) << "\n";
    cout << A << " != " << B << " is " << (A != B) << "\n";
    cout << A << " > " << B << " is " << (A > B) << "\n";
    cout << A << " < " << B << " is " << (A < B) << "\n";
    cout << A << " >= " << B << " is " << (A >= B) << "\n";
    cout << A << " <= " << B << " is " << (A <= B) << "\n";



    return 0;
}