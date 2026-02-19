#include <iostream>
using namespace std;


int main()
{
    unsigned short loan_amount, months;

    cout << "Please enter loan ammount and how many months:\n\n";

    cin >> loan_amount >> months;

	unsigned short monthly_installment = loan_amount / months;

    cout << "\n";


    cout << "Your monthly installment is: " << monthly_installment << endl;



    return 0;
}