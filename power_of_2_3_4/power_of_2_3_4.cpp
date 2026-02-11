#include <iostream>
using namespace std;



int main()
{
	unsigned short number;
	
    cout << "Please enter a number: \n";
	cin >> number; 
	cout << "\n";

	unsigned short number2 = number * number;
	unsigned short number3 = number * number * number;
	unsigned short number4 = number * number * number * number;

	cout << number2 << "\n" << number3 << "\n" << number4 << "\n";


	return 0;
}