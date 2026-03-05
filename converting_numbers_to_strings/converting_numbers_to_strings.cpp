#include <iostream>
#include <string>
using namespace std;


int main()
{
	int num1 = 123;
	double num2 = 18.99;

	string st1, st2;

	st1 = to_string(num1);
	st2 = to_string(num2);

	cout << st1 << "\n";
	cout << st2 << "\n";


	return 0;
}