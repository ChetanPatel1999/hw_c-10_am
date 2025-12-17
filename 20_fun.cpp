#include <iostream>
using namespace std;
// no return type with parameter
void add(int a, int b)
{
    int c;
    c = a + b;
    cout << "addition = " << c << endl;
}
void cube(int num)
{
    cout << "cube of " << num << " = " << (num * num * num) << endl;
}
int main()
{
    add(23, 78);
    add(12, 18);
    add(4, 7);
    cube(4);
    return 0;
}