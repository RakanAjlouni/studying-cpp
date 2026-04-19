#include <iostream>

using namespace std;

struct struct_info
{
	string first_name;
	string last_name;
	int age;
	string phone;
};

int main()
{
	struct_info people[2];

	people[0].first_name = "Rakan";
	people[0].last_name = "Ajlouni";
	people[0].age = 28;
	people[0].phone = "0777777777";

	people[1].first_name = "Yusuf";
	people[1].last_name = "Ajlouni";
	people[1].age = 66;
	people[1].phone = "0666777777";

	cout << people[1].first_name << endl;

	return 0;
}