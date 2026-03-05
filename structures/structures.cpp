#include <iostream>
using namespace std;

struct struct_address
{
    string street1;
    string PoBOX;

};
    
struct struct_owner
 {
    string full_name;
    string phone;
    struct_address address;
};


struct car

{
    string brand;
    string model;
    int year;
    struct_owner owner;
 
};



int main()

{

    car my_car1, my_car2;
    
    my_car1.brand = "Porsche";
    my_car1.model = "911 GT3 RS";    
    my_car1.year = 2026;
    my_car1.owner.full_name = "Rakan Ajlouni";
    my_car1.owner.phone = "1234567890";
    my_car1.owner.address.PoBOX = "5551";

    my_car2.brand = "Nissan";
    my_car2.model = "R35 GT-R";
    my_car2.year = 2026;


    cout << my_car1.brand << " " << my_car1.model << " " << my_car1.year << "\n";    
    cout << my_car1.owner.full_name << " " <<  my_car1.owner.address.PoBOX << "\n\n";

    cout << my_car2.brand << " " << my_car2.model << " " << my_car2.year << "\n";
            
    return 0;
   
};



