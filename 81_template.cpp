// template of a class
#include <iostream>
using namespace std;
template <class t>
class data
{
    t data1;
    t data2;

public:
    data(t a, t b)
    {
        data1 = a;
        data2 = b;
    }
    void getData()
    {
        cout << "data1 : " << data1 << endl;
        cout << "data2 : " << data2 << endl;
        cout << "----------------------------" << endl;
    }
};
int main()
{

    data<int> d1(12, 45);
    d1.getData();

    data<float> d2(45.67, 89.12);
    d2.getData();

    data<char> d3('A', 'B');
    d3.getData();

    data<string> d4("home", "pen");
    d4.getData();
    return 0;
}