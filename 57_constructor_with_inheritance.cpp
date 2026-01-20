#include <iostream>
using namespace std;
class base
{
public:
    base()
    {
        cout << "0 arg base constructor is called" << endl;
    }
    base(int a)
    {
        cout << "1 arg base constructor is called" << endl;
    }
    base(int a, int b)
    {
        cout << "2 arg base constructor is called" << endl;
    }
    void display()
    {
        cout << "hi i am display" << endl;
    }
};
class child : public base
{
public:
    child() : base(34, 56)
    {
        cout << "0 arg child constructor is called" << endl;
    }
    child(int a)
    {
        cout << "1 arg child constructor is called" << endl;
    }
    child(int a, int b) : base(12)
    {
        cout << "2 arg child constructor is called" << endl;
    }
};
int main()
{
    child c1;
    return 0;
}