#include <iostream>
#include <string>

using namespace std;

struct struct_info
{
	int mark;
};

void read_info(struct_info& info)
{
	cout << "Enter your mark: ";
	cin >> info.mark;
}

int main()
{
	struct_info person1;
	read_info(person1);

	if (person1.mark >= 50)
	{
		cout << "\nPASS \n";
	}
	else
	{
		cout << "\nFAIL\n";
	}

	return 0;
}