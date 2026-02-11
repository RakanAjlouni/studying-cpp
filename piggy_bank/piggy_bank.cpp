#include <iostream>
using namespace std;


int main()
{
	unsigned short penny, nickel, dime, quarter, dollar;


    cout << "Please enter Pennies, Nickles, Dimes, Quarters, Dollars";

	cout << "\n";

	cin >> penny >> nickel >> dime >> quarter >> dollar;

	unsigned short total_pennies = penny + nickel * 5 + dime * 10 + quarter * 25 + dollar * 100;
	double total_dollars = penny * 0.01 + nickel * 0.05 + dime * 0.10 + quarter * 0.25 + dollar * 1.00;


	cout << "The total pennies amount in the piggy bank is: $" << total_pennies << "\n";
	cout << "The total dollars amount in the piggy bank is: $" << total_dollars << endl;



	return 0;
}