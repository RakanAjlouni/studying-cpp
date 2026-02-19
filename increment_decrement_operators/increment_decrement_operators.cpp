#include <iostream>
using namespace std;


int main()
{
    unsigned short A = 10, B = 20; 

	A++; //Same as A = A + 1, also same as ++A but there is a difference between A++ and ++A, we will see that in the next section
	B--; //Same as B = B - 1, also same as --B but there is a difference between B-- and --B, we will see that in the next section

	cout << "A = " << A << "\n";
	cout << "B = " << B << "\n";


    return 0;
}