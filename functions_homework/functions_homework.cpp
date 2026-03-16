#include <iostream>
#include <string>

using namespace std;

void display_my_card_info()
{
    cout << "*********************************************\n";
    cout << "Name: Rakan Ajlouni.\n";
    cout << "Age: 28 years old.\n";
    cout << "City: Amman.\n";
    cout << "Country: Jordan.\n";
    cout << "*********************************************\n\n\n";
}

void display_stars()
{
    cout << "********\n";
    cout << "********\n";
    cout << "********\n";
    cout << "********\n\n\n";
}

void display_i_love_programming()
{
    cout << "I Love Programming!" << endl << endl;
    cout << "I promise to be the best developer ever!" << endl << endl;
    cout << "I know it will take some time to practice, but I will achieve my goal.";
    cout << endl << endl;
    cout << "Best Regards,\nRakan Ajlouni." << "\n\n\n";
}

void display_h()
{
    cout << "*   *\n";
    cout << "*   *\n";
    cout << "*****\n";
    cout << "*   *\n";
    cout << "*   *\n";
}

int main()
{
    display_my_card_info();
    display_stars();
    display_i_love_programming();
    display_h();

    return 0;
}