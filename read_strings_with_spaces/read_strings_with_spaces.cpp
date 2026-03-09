#include <iostream>
#include <string>
using namespace std;


int main()
{
	string full_name;


	cout << "Please enter your name: " << "\n";
	
	//cin >> full_name;

	getline(cin, full_name);

	cout << full_name << endl;



	return 0;
}