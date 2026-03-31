#include <iostream>
#include <string>

using namespace std;

void my_function()
{
	cout << "This is my first function, it got executed!!" << endl;
}

string my_function2()
{
	return "This is my first returning value function, this is the value";
}

float my_function3()
{
	float x = 10.5;
	float y = 20.3;

	return x * y;
}

int main()
{

	my_function();
	cout << my_function2() << "\n\n";
	
	float result;

	result = ceil(my_function3());

	cout << result << "\n";

	return 0;
}