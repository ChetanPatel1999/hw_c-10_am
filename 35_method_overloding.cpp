#include <iostream>
using namespace std;
class display
{
public:
    void disp(int a)
    {
        cout << "data = " << a << endl;
    }
    void disp(string a)
    {
        cout << "data = " << a << endl;
    }
    void disp(double a)
    {
        cout << "data = " << a << endl;
    }
};
int main()
{
    display d1;
    d1.disp(12);
    d1.disp("hello");
    d1.disp(67.8);
    return 0;
}