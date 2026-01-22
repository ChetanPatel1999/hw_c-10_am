#include <iostream>
using namespace std;
class data;
class trial
{
public:
    void display1(data);
    void display2(data);
};
class data
{
    int num1;
    int num2;
    friend class trial;

public:
    data() {}
    data(int n1, int n2)
    {
        num1 = n1;
        num2 = n2;
    }
};
void trial::display1(data obj)
{
    cout << "num1 = " << obj.num1 << endl;
}
void trial::display2(data obj)
{
    cout << "num2 = " << obj.num2 << endl;
}
int main()
{
    data d1(12, 5);
    trial t1;
    t1.display1(d1);
    t1.display2(d1);
    return 0;
}