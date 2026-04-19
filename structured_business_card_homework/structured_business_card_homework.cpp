#include <iostream>
#include <string>

using namespace std;

struct struct_contact_info
{
	string email;
	string phone_number;

};

struct struct_address
{
	string city;
	string country;
	string street;
	struct_contact_info contact_info;

};

struct id
{
	string name;
	unsigned short age;
	unsigned int monthly_salary;
	unsigned int yearly_salary;
	char gender;
	bool married;
	struct_address address;
};

void read_info(id &info)
{
	cout << "Name: ";
	getline(cin, info.name);

	cout << "\nAge: ";
	cin >> info.age;

	cout << "\nMonthly Salary: ";
	cin >> info.monthly_salary;

	cout << "\nGender: ";
	cin >> info.gender;

	cout << "\nMarried: ";
	cin >> info.married;

	cout << "\nCity: ";
	cin >> info.address.city;

	cout << "\nCountry: ";
	cin >> info.address.country;

	cout << "\nStreet: ";
	getline(cin >> ws, info.address.street);

	cout << "\nEmail: ";
	cin >> info.address.contact_info.email;

	cout << "\nPhone number: ";
	cin >> info.address.contact_info.phone_number;
}

void print_info(id info)
{
	info.yearly_salary = info.monthly_salary * 12;

	cout << "***************\n\n";

	cout << "Name: " << info.name << "\n";
	cout << "Age: " << info.age << "\n";
	cout << "Monthly Salary: " << info.monthly_salary << "\n";
	cout << "Yearly  Salary: " << info.yearly_salary << "\n";
	cout << "Gender: " << info.gender << "\n";
	cout << "Married: " << info.married << "\n";
	cout << "City: " << info.address.city << "\n";
	cout << "Country: " << info.address.country << "\n";
	cout << "Street: " << info.address.street << "\n";
	cout << "Email: " << info.address.contact_info.email << "\n";
	cout << "Phone number: " << info.address.contact_info.phone_number << "\n\n";

	cout << "***************\n\n";

}

int main()
{	
	id person1;
	read_info(person1);
	print_info(person1);

	return 0;
}