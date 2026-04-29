#include <iostream>

using namespace std;

struct struct_info
{
	int age;
};

void read_info(struct_info& info)
{
	cout << "Enter your age: ";
	cin >> info.age;
}


int main()
{
	struct_info person1;
	read_info(person1);

	if (person1.age >= 18 && person1.age <= 45)
	{
		cout << "\nVALID AGE\n";
	}
	else
	{
		cout << "\nINVALID AGE\n";
	}

	return 0;
}