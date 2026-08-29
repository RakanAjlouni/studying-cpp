#include <iostream>

using namespace std;

struct struct_info
{
	int number1;
	int number2;
	char operation_type;
};

void read_info(struct_info& info)
{
	cout << "Please enter number1: \n";
	cin >> info.number1;

	cout << "Please enter number2: \n";
	cin >> info.number2;

	cout << "Please enter Operation Type: (+, -, *, /) \n";
	cin >> info.operation_type;
}

double get_calculation(struct_info& info)
{
	switch (info.operation_type)
	{
	case '+':
		return info.number1 + info.number2;
	case '-':
		return info.number1 - info.number2;
	case '*':
		return info.number1 * info.number2;
	case '/':
		return (double)info.number1 / info.number2;
	default:
		cout << "Wrong operation Type\n";
		return 0;
	}
}

int main()
{
	struct_info person1;
	read_info(person1);
	
	cout << "The result is: " << get_calculation(person1) << "\n";

	return 0;
}