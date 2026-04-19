#include <iostream>

using namespace std;

void read_grades(float grades[3])
{
    cout << "Please enter grade 1: \n";
    cin >> grades[0];

    cout << "Please enter grade 2: \n";
    cin >> grades[1];

    cout << "Please enter grade 3: \n";
    cin >> grades[2];
}

float average_of_grades(float grades[3])
{
    return (grades[0] + grades[1] + grades[2]) / 3;
}

void write_grades(float grades[3])
{

    cout << "************************\n\n";

    cout << "The average of grades is: " << average_of_grades(grades) << endl;
}

int main()
{
    float grades[3];

    read_grades(grades);
    write_grades(grades);
  

    return 0;
}