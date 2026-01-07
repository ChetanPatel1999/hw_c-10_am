#include <iostream>
using namespace std;
int main()
{
    int a = 12;
    int &b = a;                  // b is reference
    int &c = b;                  // c is reference
    cout << "a = " << a << endl; // 12
    cout << "b = " << b << endl; // 12
    cout << "c = " << c << endl; // 12

    a = 90;

    cout << "a = " << a << endl; // 90
    cout << "b = " << b << endl; // 90
    cout << "c = " << c << endl; // 90

    b = 40;

    cout << "a = " << a << endl; // 40
    cout << "b = " << b << endl; // 40
    cout << "c = " << c << endl; // 40

    return 0;
}