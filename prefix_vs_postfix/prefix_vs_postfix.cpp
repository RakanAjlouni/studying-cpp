#include <iostream>
using namespace std;



int main()
{
	unsigned short A = 10;
	unsigned short B = A++; // B will take the old value of A, then A will increase by 1

	cout << "B = " << B << "\n";
	cout << "A = " << A << "\n";


	B = ++A; // A will increase by 1, then B will take the new value of A

	cout << "B = " << B << "\n";
	cout << "A = " << A << endl;

	return 0;
}