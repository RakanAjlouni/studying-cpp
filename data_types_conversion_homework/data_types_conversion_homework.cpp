#include <iostream>
#include <string>
using namespace std;


int main()
{
    string st1 = "43.22";

    int num_int = stoi(st1);
    float num_float = stof(st1);
    double num_double = stod(st1);

    int int_num = 20;
    double double_num = 33.5;

    string string1, string2; 

    string1 = to_string(int_num);
    string2 = to_string(double_num);

    float float_num = 55.23;

    string float_str;
    int float_int;

    float_str = to_string(float_num);
    float_int = float_num; // Implicit conversion from float to integer
    float_int = (int)float_num;  //explicit conversion, called c style
    float_int = int(float_num); // explicit conversion


    cout << "String to num_int = " << num_int << "\n";
    cout << "String to num_float = " << num_float << "\n";
    cout << "String to num_double = " << num_double << "\n";
    cout << "Integer to string = " << int_num << "\n";
    cout << "Double to string = " << double_num << "\n";
    cout << "Float to string = " << float_str << "\n";
    cout << "Float to integer = " << float_int << "\n";




    return 0;
}
