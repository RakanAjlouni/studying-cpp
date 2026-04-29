#include <iostream>

using namespace std;

struct struct_info
{
	short int pin;
	const short int balance = 5000;
};

void read_info(struct_info& info)
{
	cout << "Enter your PIN: ";
	cin >> info.pin;
}

int main()
{
	struct_info person1;
	read_info(person1);

	if (person1.pin == 0000)
	{
		cout << "\nYour balance is: " << person1.balance << "\n";
	}
	else
	{
		cout << "\nWrong Personal idetification number (PIN)!!\n";
	}

	return 0;
}