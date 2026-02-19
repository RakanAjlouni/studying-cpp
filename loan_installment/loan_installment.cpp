#include <iostream>
using namespace std;


int main()
{
	unsigned short loan_amount, monthly_payment;

    cout << "Please enter loan ammount and monthly payment:\n\n";
    cin >> loan_amount >> monthly_payment;
    cout << "\n";

    unsigned short months = loan_amount / monthly_payment;

    cout << months << " Months" << endl;




    return 0;
}