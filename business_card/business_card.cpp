#include <iostream>
using namespace std;



int main()
{
	string name;
	unsigned short age;
	string city;
	string country;
	float monthly_salary; 
	char gender;
	bool married;

	cout << "Please enter your name: \n";
	cin >> name; 

	cout << "Please enter your age: \n";
	cin >> age;

	cout << "Please enter your city: \n";
	cin >> city;

	cout << "Please enter your country: \n";
	cin >> country;

	cout << "Please enter your monthly salary: \n";	
	cin >> monthly_salary;

	cout << "Please enter your gender: \n";
	cin >> gender;

	cout << "Are you married? 1/0 \n";
	cin >> married;

	float yearly_salary = monthly_salary * 12;


	cout << "*************************\n";
	cout << "Name: " << name << "\n";
	cout << "Age: " << age << " Years old.\n";
	cout << "City: " << city << ".\n";
	cout << "Country: " << country << ".\n";
	cout << "Monthly Salary: " << monthly_salary << "\n";
	cout << "Yearly Salary: " << yearly_salary << "\n";
	cout << "Gender: " << gender << "\n";
	cout << "Married: " << married << "\n";
	cout << "*************************\n";
	
	return 0;

}