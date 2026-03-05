#include <iostream>
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



int main()
{	
	id business_card1;
	
	business_card1.name = "Rakan Ajlouni";
	business_card1.age = 29;
	business_card1.monthly_salary = 1500;
	business_card1.yearly_salary;
	business_card1.gender = 'M';
	business_card1.married = 0;
	business_card1.address.city = "Amman";
	business_card1.address.country = "Jordan";
	business_card1.address.street = "Firas Aj st.";
	business_card1.address.contact_info.email = "rakan.ajlouni@gmail.com";
	business_card1.address.contact_info.phone_number = "0777xxxxxx";


	business_card1.yearly_salary = business_card1.monthly_salary * 12;

	cout << "***************\n\n";

	cout << "Name: " << business_card1.name << "\n";
	cout << "Age: " << business_card1.age << "\n";
	cout << "Monthly Salary: " << business_card1.monthly_salary << "\n";
	cout << "Yearly  Salary: " << business_card1.yearly_salary << "\n";
	cout << "Gender: " << business_card1.gender << "\n";
	cout << "Married: " << business_card1.married << "\n";
	cout << "City: " << business_card1.address.city << "\n";
	cout << "Country: " << business_card1.address.country << "\n";
	cout << "Street: " << business_card1.address.street << "\n";
	cout << "Email: " << business_card1.address.contact_info.email << "\n";
	cout << "Phone number: " << business_card1.address.contact_info.phone_number << "\n\n";

	cout << "***************\n\n";


	return 0;
}