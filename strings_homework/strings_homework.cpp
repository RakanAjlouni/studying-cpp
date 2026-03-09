#include <iostream>
#include <string>
using namespace std;


int main()
{
	string full_name;

	cout << "Please enter your name: \n\n";

	getline(cin, full_name);

	cout << "\n";

	string str2, str3;

	cout << "Please enter string 2: \n\n";

	getline(cin, str2);

	cout << "\n";

	cout << "Please enter string 3: \n\n";

	getline(cin, str3);

	cout << "\n\n";

	cout << "********************* \n\n";

	cout << "The length of ful name is: " << full_name.length() << "\n\n";

	cout << "Characters at 0, 2, 4, 7 are: " << full_name[0] << " " << full_name[2] << " " << full_name[4] << " " << full_name[7] << "\n\n";

	string str4 = str2 + str3;

	cout << "Concatenating string 2 and string 3: " << str4 << "\n\n";

	int int_multiplication = stoi(str2) * stoi(str3);

	cout << "5 * 10 = " << int_multiplication << endl;








	return 0;
}