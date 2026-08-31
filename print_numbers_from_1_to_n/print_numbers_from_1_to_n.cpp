#include <iostream>

using namespace std;

int user_number()
{
	int number;

	cout << "Please enter a number: ";
	cin >> number;

	return number;
}

void for_loop(int number)
{
	for (int i = 1; i <= number; i++)
	{
		cout << i << endl;
	}
}

int main()
{
	for_loop(user_number());
	
	return 0;
}