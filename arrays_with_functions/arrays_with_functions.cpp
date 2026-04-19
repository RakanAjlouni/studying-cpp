#include <iostream>

using namespace std;


//Arrays are sent by reference by its nature so need for &
void read_array_data(int x[3])
{
    cout << "Please enter number 1: \n";
    cin >> x[0];

    cout << "Please enter number 2: \n";
    cin >> x[1];

    cout << "Please enter number 3: \n";
    cin >> x[2];

}

void print_array_data(int x[3])
{
    cout << "*********************\n";

    cout << x[0] << "\n";
    cout << x[1] << "\n";
    cout << x[2] << endl;
}


int main()
{
    int x[3];

    read_array_data(x);
    print_array_data(x);

    return 0;
}
