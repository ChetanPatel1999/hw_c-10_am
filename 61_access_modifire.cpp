#include <iostream>
using namespace std;
class demo
{
    int a;
    int b;
    void m1()
    {
        cout << "hello i am m1 " << endl;
    }

public:
    void m2()
    {
        m1();
        cout << "hello i am m2 " << endl;
    }
};
int main()
{
    demo d1;
    d1.m2();
    return 0;
}