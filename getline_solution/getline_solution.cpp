#include <iostream>
#include <string>

using namespace std;


int main()
{
    int number;
    string name;
    string country;

    cout << "Please enter employee number: \n";
    cin >> number;

    cout << "Please enter your name: \n";
    cin.ignore(1, '\n');
    getline(cin, name);

    cout << "Please enter your country: \n";
    cin >> country;

    cout << "Number: " << number << ", Name: " << name << ", Country: " << country;


    return 0;
}