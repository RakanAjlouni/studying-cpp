#include <iostream>
#include <string>

using namespace std;

string print_name(string name)
{
	cout << "\n\n Your name is: \n\n";

	return name;
}

int main()
{
	string name;
	cout << "Please enter your name: \n\n";
	getline(cin, name);

	cout << print_name(name) << "\n\n";

	return 0;
}