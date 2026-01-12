// example of inheritance
#include <iostream>
using namespace std;
class A  //parent / base class
{
public:
    void m1()
    {
        cout << "A m1 is called" << endl;
    }
    void m2()
    {
        cout << "A m2 is called" << endl;
    }
};
class B : public A    // child/derived class
{
public:
    void m3()
    {
        cout << "B m3 is called" << endl;
    }
    void m4()
    {
        cout << "B m4 is called" << endl;
    }
};
int main()
{
    B obj;
    obj.m1();
    obj.m2();
    obj.m3();
    obj.m4();
    return 0;
}