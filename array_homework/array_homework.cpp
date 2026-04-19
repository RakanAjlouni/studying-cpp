#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    float grades[3];

    cout << "Please enter grade 1: \n";
    cin >> grades[0];
    
    cout << "Please enter grade 2: \n";
    cin >> grades[1];

    cout << "Please enter grade 3: \n";
    cin >> grades[2];
    
    cout << "************************\n\n";

    float average_of_grades = (grades[0] + grades[1] + grades[2]) / 3;

    cout << "The average of grades is: " << average_of_grades << endl;

    return 0;
}