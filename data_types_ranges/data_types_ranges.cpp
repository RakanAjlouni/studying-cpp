#include <iostream>
using namespace std;

int main()
{
    cout << "*****************************************************\n\n";

    cout << "char range: (" << CHAR_MIN << ", " << CHAR_MAX << ")\n";
    cout << "unsigned char range: (" << 0 << ", " << UCHAR_MAX << ")\n\n";

    cout << "short int range: (" << SHRT_MIN << ", " << SHRT_MAX << ")\n";
    cout << "unsigned short int range: (" << 0 << ", " << USHRT_MAX << ")\n\n";

    cout << "int range: (" << INT_MIN << ", " << INT_MAX << ")\n";
    cout << "unsigned int range: (" << 0 << ", " << UINT_MAX << ")\n";
    cout << "long int range: (" << LONG_MIN << ", " << LONG_MAX << ")\n";
    cout << "unsigned long int range: (" << 0 << ", " << ULONG_MAX << ")\n\n";

    cout << "long long int range: (" << LLONG_MIN << ", " << LLONG_MAX << ")\n";
    cout << "unsigned long long int range: (" << 0 << ", " << ULLONG_MAX << ")\n\n";

    cout << "float range: (" << FLT_MIN << ", " << FLT_MAX << ")\n";
    cout << "float(negative) range: (" << -FLT_MIN << ", " << -FLT_MAX << ")\n\n";

    cout << "double range: (" << DBL_MIN << ", " << DBL_MAX << ")\n";
    cout << "double(negative) range: (" << -DBL_MIN << ", " << -DBL_MAX << ")\n";
    cout << "long double range: (" << LDBL_MIN_10_EXP << ", " << LDBL_MAX_10_EXP << ")\n\n";

    cout << "*****************************************************\n\n";


    
    return 0;
}