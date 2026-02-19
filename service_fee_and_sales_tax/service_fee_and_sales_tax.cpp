#include <iostream>
using namespace std;


int main()
{
    
    double bill_value;

    cout << "Enter Bill value: \n";
    cin >> bill_value;

    double service_fee = bill_value * 1.1;
    double sales_tax = service_fee * 1.16;

    cout << sales_tax << endl;


    return 0;
}