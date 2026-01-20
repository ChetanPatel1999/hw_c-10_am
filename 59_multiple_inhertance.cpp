#include <iostream>
using namespace std;
class base1
{
public:
    base1()
    {
        cout << "0 arg base1 constructor is called" << endl;
    }
    base1(int a)
    {
        cout << "1 arg base1 constructor is called" << endl;
    }
    base1(int a, int b)
    {
        cout << "2 arg base1 constructor is called" << endl;
    }
};
class base2
{
public:
    base2()
    {
        cout << "0 arg base2 constructor is called" << endl;
    }
    base2(int a)
    {
        cout << "1 arg base2 constructor is called" << endl;
    }
    base2(int a, int b)
    {
        cout << "2 arg base2 constructor is called" << endl;
    }
};
class child : public base1, public base2
{
public:
    child():base2(34),base1(2,4)
    {
        cout << "child 0 arg constructor called" << endl;
    }
    child(int a)
    {
        cout << "child 1 arg constructor called" << endl;
    }
};
int main()
{
    child c1;
    return 0;
}