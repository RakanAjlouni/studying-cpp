#include <iostream>

using namespace std;

int main()
{
	int number;
	
	cout << "Please enter a number: ";
	cin >> number;

	for (int i = number; i >= 1; i--)
	{
		cout << i << endl;
	}
}