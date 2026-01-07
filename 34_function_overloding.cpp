#include <iostream>
using namespace std;
void add(int a)
{
    cout << "sum = " << (a + 50) << endl;
}
void add(int a, int b)
{
    cout << "sum = " << (a + b) << endl;
}
void add(float a, float b)
{
    cout << "sum = " << (a + b) << endl;
}
void add(double a, double b)
{
    cout << "sum = " << (a + b) << endl;
}
void add()
{
    cout << "sum = " << (89) << endl;
}
void add(int a, float b)
{
    cout << "sum = " << (a + b) << endl;
}
void add(float a, int b)
{
    cout << "sum = " << (a + b) << endl;
}
int main()
{
    add(4.5f, 7.2f);
    add(12.478, 6.787);
    add();
    add(5);
    add(12, 23);
    return 0;
}