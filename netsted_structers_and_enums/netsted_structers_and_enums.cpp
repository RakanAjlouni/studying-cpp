#include <iostream>
using namespace std;

enum en_color { red, green, yellow, blue };
enum en_gender { male, female };
enum en_marital_status { single, married };

struct st_address
{
    string street_name;
    string building_no;
    string po_box;
    string zip_code;
};

struct st_contact_info
{
    string phone;
    string email;

    st_address address;
};

struct st_person
{
    string first_name;
    string last_name;

    st_contact_info contact_info;

    en_marital_status marital_stauts;
    en_gender gender;
    en_color favorite_color;


};
 

int main()
{
    st_person person1;

    person1.first_name = "Rakan";
    person1.last_name = "Ajlouni";

    person1.contact_info.email = "abc@xyz.com";
    person1.contact_info.phone = "+962777xxxxxx";
    person1.contact_info.address.po_box = "7777";
    person1.contact_info.address.zip_code = "1114";
    person1.contact_info.address.street_name = "Firas aj st.";
    person1.contact_info.address.building_no = "8A";

    person1.gender = en_gender::male;
    person1.marital_stauts = en_marital_status::single;
    person1.favorite_color = en_color::blue;


    cout << "First name: " << person1.first_name << "\n";


    return 0;
}