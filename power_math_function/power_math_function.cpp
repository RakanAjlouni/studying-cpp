#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	unsigned short x = 2, y = 4;

	cout << "Power value: x^y = (2^4) is: " << pow(x, y) << "\n"; //gives 16
	cout << "Power value: 2^4 is: " << pow(4, 3) << "\n"; // gives 64

	unsigned short hint = 2;
	hint = hint * hint;
	hint = pow(hint, 2);



	return 0;
}