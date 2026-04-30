#include <iostream>

using namespace std;

struct struct_info
{
    int total_sales;
    double percentage;
    double total_commission;
};

void read_info(struct_info& info)
{
    cout << "Please enter total sales: \n";
    cin >> info.total_sales;
}

double get_percentage_rate(struct_info& info)
{ 
    if (info.total_sales >= 1'000'000)
    {
        return 0.01;
    }
    else if (info.total_sales >= 500'000 && info.total_sales <= 999'999)
    {
        return 0.02;
    }
    else if (info.total_sales >= 100'000 && info.total_sales <= 499'999)
    {
        return 0.03;
    }
    else if (info.total_sales >= 50'000 && info.total_sales <= 99'999)
    {
        return 0.05;
    }
    else
    {
        return 0;
    }
}

double calculate_commission(const struct_info& info)
{
    return info.total_sales * info.percentage;
}

int main()
{
    struct_info person1;
    read_info(person1);
    person1.percentage = get_percentage_rate(person1);
    person1.total_commission = calculate_commission(person1);

    cout << "\nTotal commission: " << person1.total_commission << endl;
        
    return 0;
}