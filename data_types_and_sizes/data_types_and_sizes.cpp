#include <iostream>
using namespace std;


int main()
{
    //note: by default everything is signed.

    int v1;
    signed int v2;

    unsigned int v3;

    short int v4;
    short v5;

    unsigned short int v6;
    unsigned short v7;

    signed long int v8;
    long int v9;
    long v10;

    unsigned long v11;

    long long int v12;

    unsigned long long v13;

    long double v14;

    signed char v15;
    char v16;

    unsigned char v17;


    double distance = 56E12; // 56E12 is equal to 56*10^2
    cout << distance << "\n";

    short d = 3434233; //Error! out of range
    cout << d << "\n";

    unsigned int a = -10; //Error! can only store positive numbers!
    cout << a << "\n";







    return 0;
}