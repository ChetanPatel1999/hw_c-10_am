// example of static or non static variable
#include <iostream>
using namespace std;
class demo
{
    int a;        // non static variable
    int b;        // non static variable
    static int x; // static variable
    static int y; // static variable
public:
    void setData(int r, int s, int t, int u)
    {
        a = r;
        b = s;
        x = t;
        y = u;
    }
    void display()
    {
        cout << "a,b = " << a << "," << b << endl;
        cout << "x,y = " << x << "," << y << endl;
        cout << "----------------------------------" << endl;
    }
};
//must redclared static variable outside class with class name (demo::x)
int demo::x;
int demo::y;
int main()
{
    demo d1, d2, d3;
    d1.setData(12, 13, 100, 200);
    d2.setData(14, 15, 300, 400);
    d3.setData(16, 17, 500, 600);
    d1.display();
    d2.display();
    d3.display();
    return 0;
}