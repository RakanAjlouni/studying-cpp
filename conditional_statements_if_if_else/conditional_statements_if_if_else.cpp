#include <iostream>

using namespace std;

/*
int main()
{
	int x = 10;

	if (x > 5 || x <= 8)
	{
		cout << "The code of IF body has executed." << "\n\n";
	}

	cout << "The code after IF body always executed." << endl;

	return 0;
}

This is IF without ELSE.

*/

int main()
{
	int x;

	cout << "Please enter your number: \n";
	cin >> x;

	if (x > 5)
	{
		cout << "Yes " << x << " is greater than 5 \n";
	}
	else
	{
		cout << "No " << x << " is less than 5 \n";
	}

	cout << "The code after IF body is always executed." << endl;

	
	return 0;
}