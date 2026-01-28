// pointer to derived class
#include <iostream>
using namespace std;
class base
{
protected:
    int data1;

public:
    base(int a)
    {
        data1 = a;
    }
    virtual void display()
    {
        cout << " data1 = " << data1 << endl;
    }
    virtual void show()
    {
        cout << "called base show method" << endl;
    }
};
class derived : public base
{
    int data2;

public:
    derived(int a, int b) : base(a)
    {
        data2 = b;
    }
    void display() // method override
    {
        cout << " data1 = " << data1 << endl;
        cout << " data2 = " << data2 << endl;
    }
    void show()
    {
        cout << "hello i am show of derived class" << endl;
    }
};
int main()
{
    base *bptr;
    bptr = new derived(56, 80);
    bptr->display();
    bptr->show();
    return 0;
}