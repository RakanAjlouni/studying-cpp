#include <iostream>
#include <string>

using namespace std;

struct struct_info
{
	string first_name;
	string last_name;
	int age;
	string phone;
};

void read_info(struct_info &info)
{
	cout << "\n*****************************\n\n";

	cout << "Please enter first name: ";
	cin >> info.first_name;

	cout << "Please enter last name: ";
	cin >> info.last_name;

	cout << "Please enter age: ";
	cin >> info.age;

	cout << "Please enter phone: ";
	cin >> info.phone;

	cout << "\n*****************************\n\n";
}

void print_info(struct_info info)
{	
	cout << "First name: " << info.first_name << "\n";
	cout << "Last name: " << info.last_name << "\n";
	cout << "Age is: " << info.age << "\n";
	cout << "Phone is: " << info.phone << "\n\n";
}

void read_people_info(struct_info people[2])
{
	read_info(people[0]);
	read_info(people[1]);
}

void print_people_info(struct_info people[2])
{
	print_info(people[0]);

	cout << "\n*****************************\n\n";

	print_info(people[1]);

	cout << "\n*****************************\n\n";
}

int main()
{
	struct_info people[2];

	read_people_info(people);
	print_people_info(people);
	
	
	return 0;
}