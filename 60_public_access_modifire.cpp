#include <iostream>
using namespace std;
class base
{
public:
    int a;

private:
    int b;

protected:
    int c;

public:
    void setb(int x)
    {
        c = 90;
        a = 80;
        b = x;
    }
};
class child : public base
{
public:
    void getData()
    {
        cout << "a = " << a << endl;
        cout << "c = " << c << endl;
        // cout << "b = " << b << endl; // private cant access in child class
    }
};
class Trial
{
public:
    void display()
    {
        base o1;
        o1.a = 900;
        cout << "a = " << o1.a << endl;
        // cout << "c = " << o1.c << endl;  //protetced 
        // cout << "a = " << o1.b << endl; private data not access
    }
};
int main()
{
    base obj;
    obj.a = 12;
    // obj.c = 88; // protetced not access
    // obj.b = 89;  //private
    cout << obj.a << endl;
    // cout << obj.b << endl;  //private
    obj.setb(56);

    return 0;
}