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
	if (info.operation_type == '+')
	{
		return info.number1 + info.number2;
	}
	else if (info.operation_type == '-')
	{
		return info.number1 - info.number2;
	}
	else if (info.operation_type == '*')
	{
		return info.number1 * info.number2;
	}
	else if (info.operation_type == '/')
	{
		return (double)info.number1 / info.number2;
	}
	else
	{
		cout << "Wrong operation Type";
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