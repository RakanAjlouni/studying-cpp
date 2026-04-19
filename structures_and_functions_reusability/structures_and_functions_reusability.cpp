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
	cout << "Please enter your first name: \n";
	cin >> info.first_name;

	cout << "Please enter your last name: \n";
	cin >> info.last_name;

	cout << "Please enter your age: \n";
	cin >> info.age;


	cout << "Please enter your phone: \n";
	cin >> info.phone;

}

//By value because we're only printing here
void print_info(struct_info info)
{
	cout << "\n*****************************\n\n";

	cout << "First name: " << info.first_name << "\n";
	cout << "Last name: " << info.last_name << "\n";
	cout << "Age: " << info.age << "\n";
	cout << "Phone: " << info.phone << "\n";


	cout << "\n*****************************\n";

}

int main()
{
	struct_info person1_info;
	read_info(person1_info);
	print_info(person1_info);

	struct_info person2_info;
	read_info(person2_info);
	print_info(person2_info);


	return 0;
}