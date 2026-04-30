#include <iostream>

using namespace std;

int main()
{

	int time = 9;

	if (time < 10)
	{
		cout << "Good morning.\n";
	}
	else if (time < 20)
	{
		cout << "Good day.\n";
	}
	else
	{
		cout << "Good evening." << endl;
	}

	return 0;
}