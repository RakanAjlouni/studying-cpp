#include <iostream>
#include <string>

using namespace std;

struct struct_info
{
	int age;
	string driving_license;
};

void read_info(struct_info& info)
{
	cout << "Enter your age: ";
	cin >> info.age;

	cout << "Do you have a driving licencse? (Yes/No) ";
	cin >> info.driving_license;
}

int main()
{
	struct_info person1;
	read_info(person1);

	if (person1.age > 21 && person1.driving_license == "Yes")
	{
		cout << "\nHired\n";
	}
	else
	{
		cout << "\nRejected\n";
	}

	return 0;
}