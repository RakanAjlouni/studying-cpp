#include <iostream>
using namespace std;

enum en_screen_color { red = 1, blue = 2, green = 3, yellow = 4 };


int main()
{
	cout << "************************\n";
	cout << "Please choose the number of your color: \n";
	cout << "(1) Red\n";
	cout << "(2) Blue\n";
	cout << "(3) Green\n";
	cout << "(4) Yellow\n";
	cout << "************************\n";
	cout << "Your choice: ";

	int c;
	en_screen_color color; 

	cin >> c;
	color = (en_screen_color) c;

	if (color == en_screen_color::red)
	{
		system("color 4F");
	}
	else if (color == en_screen_color::blue)
	{
		system("color 1F");
	}
	else if (color == en_screen_color::green)
	{
		system("color 2F");
	}
	else if (color == en_screen_color::yellow)
	{
		system("color 6F");
	}
	else
	{
		system("color 4F");
	}
	return 0;
}
