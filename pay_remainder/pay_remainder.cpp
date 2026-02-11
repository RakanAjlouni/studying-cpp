#include <iostream>
using namespace std;


int main()
{
	unsigned short total_bill, cash_received;

    cout << "Please enter total bill and cash received: \n\n";

    cin >> total_bill >> cash_received;
    cout << "\n";

    unsigned short remainder = cash_received - total_bill;
    cout << remainder << endl;
    



    return 0;
}