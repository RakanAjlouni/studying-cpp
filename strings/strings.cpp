#include <iostream>
#include <string>
using namespace std;

int main()
{
	string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	cout << "The length of the alphabet is: " << alphabet.length() << "\n";

	cout << alphabet[2] << "\n"; //This will print C

	string str1 = "10", str2 = "20";

	string str3 = str1 + str2;

	cout << str3 << "\n"; //Will print 1020

	int sum = stoi(str1) + stoi(str2);

	cout << sum << "\n"; //Will print 30

	



	return 0;
}