#include <iostream>

using namespace std;

struct struct_info
{
	int mark1;
	int mark2;
	int mark3;
};

void read_info(struct_info& marks)
{
	cout << "Enter mark 1: \n";
	cin >> marks.mark1;

	cout << "Enter mark 1: \n";
	cin >> marks.mark2;

	cout << "Enter mark 1: \n";
	cin >> marks.mark3;
}

double average_mark(struct_info marks)
{
	return (marks.mark1 + marks.mark2 + marks.mark3) / 3.0;
}

int main()
{
	struct_info average1;
	read_info(average1);

	if (average_mark(average1) >= 50)
	{
		cout << "\nYour average is " << average_mark(average1) << "\n";
		cout << "\nPASS\n";
	}
	else
	{
		cout << "\nYour average is " << average_mark(average1) << "\n";
		cout << "\nFAIL\n";
	}

	return 0;
}