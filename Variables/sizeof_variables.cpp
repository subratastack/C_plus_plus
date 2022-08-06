#include <iostream>
#include <climits>
#include <cfloat>

using namespace std;

int main()
{

    // Check the size of all the primitive types in C++

    cout << sizeof(char) << endl;
    cout << sizeof(int) << endl;
    cout << sizeof(unsigned int) << endl;
    cout << sizeof(short) << endl;
    cout << sizeof(long) << endl;
    cout << sizeof(long long) << endl;

    cout << "---------------------------" << endl;

    cout << sizeof(float) << endl;
    cout << sizeof(double) << endl;
    cout << sizeof(long double) << endl;

    cout << "---------------------------" << endl;

    cout << CHAR_BIT << endl;
    cout << UCHAR_MAX << endl;
    cout << LONG_MIN << endl;
    cout << LONG_MAX << endl;

    return 0;
}