#include <iostream>
using namespace std;

enum color { red=100, green=200, yellow=300, blue=400 };
enum direction { north, south, east, west };
enum week { sat, sun, mon, tue, wed, thu, fri };
enum gender { male, female };
enum status { single, married };


int main()
{
	color my_color;
	direction my_direction;
	week today;
	status my_status;

	my_color = color::green;
	my_direction = direction::north;
	today = week::wed;
	my_status = status::single;


	cout << "Color is: " << my_color << "\n";
	cout << "Direction is: " << my_direction << "\n";
	cout << "Today is: " << today << "\n";
	cout << "Status is: " << my_status << "\n";




	return 0;
}