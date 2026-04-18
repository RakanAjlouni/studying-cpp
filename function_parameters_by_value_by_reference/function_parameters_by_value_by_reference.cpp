#include <iostream>
#include <string>

using namespace std;

//This is by value 
void my_function_by_value(int num1)
{
	num1 = 7000;

	cout << "Num1 inside function became: " << num1 << endl;
}

//This is by reference "&"
void my_function_by_reference(int &num2)
{
	num2 = 7000;

	cout << "Num2 inside function became: " << num2 << endl;
}
int main()
{
	int num1;
	int num2;

	num1 = 1000;
	num2 = 1000;

	my_function_by_value(num1);
	my_function_by_reference(num2);

	
	cout << "num1 after calling the function became: " << num1 << endl;
	cout << "num1 after calling the function became: " << &num1 << endl;
	cout << "num2 after calling the function became: " << num2 << endl;
	cout << "num2 after calling the function became: " << &num2 << endl;

	return 0;
}