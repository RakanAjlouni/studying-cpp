#include <iostream>

using namespace std;

int main()
{
	for (int i = 1; i <= 5; i++)
	{
		cout << i << endl;
		cout << "Rakan Ajlouni" << endl;
	}

	cout << "Odd numbers: \n";


	for (int i = 1; i <= 10; i = i + 2)
	{
		cout << i << "\n\n";
	}

	cout << "Even numbers: \n";
	
	for (int i = 0; i <= 10; i = i + 2)
	{
		cout << i << "\n\n";
	}

	for (int i = 5; i >= 1; i--)
	{
		cout << i << endl;
	}
	return 0;
}