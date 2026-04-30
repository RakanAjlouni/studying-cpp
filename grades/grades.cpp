#include <iostream>

using namespace std;

struct struct_info
{
	short int grade;
};

void read_info(struct_info& info)
{
	cout << "Please enter grade: \n";
	cin >> info.grade;
}

int main()
{
	struct_info person1;
	read_info(person1);

	if (person1.grade >= 90 && person1.grade <= 100)
	{
		cout << "\nA\n";
	}
	else if (person1.grade >= 80 && person1.grade <= 89)
	{
		cout << "\nB\n";
	}
	else if (person1.grade >= 70 && person1.grade <= 79)
	{
		cout << "\nC\n";
	}
	else if (person1.grade >= 60 && person1.grade <= 69)
	{
		cout << "\nD\n";
	}
	else if (person1.grade >= 50 && person1.grade <= 59)
	{
		cout << "\nE\n";
	}
	else
	{
		cout << "\nF\n";
	}

	return 0;
}