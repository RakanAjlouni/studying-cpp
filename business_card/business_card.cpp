#include <iostream>
using namespace std;


enum gender { male, female };
enum marital_status { single, married };
enum color { blue, red, white, black };

int main()
{
	string name;
	unsigned short age;
	string city;
	string country;
	float monthly_salary; 



	gender user_gender;
	marital_status user_marital_status;
	color user_favorite_color;

	user_gender = gender::male;
	user_marital_status = marital_status::single;
	user_favorite_color = color::black;

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

	float yearly_salary = monthly_salary * 12;


	cout << "*************************\n";
	cout << "Name: " << name << "\n";
	cout << "Age: " << age << " Years old.\n";
	cout << "City: " << city << ".\n";
	cout << "Country: " << country << ".\n";
	cout << "Monthly Salary: " << monthly_salary << "\n";
	cout << "Yearly Salary: " << yearly_salary << "\n";
	cout << "Gender: " << user_gender << "\n";
	cout << "Married: " << user_marital_status << "\n";
	cout << "Favorite Color: " << user_favorite_color << "\n";

	cout << "*************************\n";
	
	return 0;

}