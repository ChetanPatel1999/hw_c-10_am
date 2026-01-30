// template with multiple parameter
#include <iostream>
using namespace std;
template <class t1, class t2>
class data
{
    t1 data1;
    t2 data2;

public:
    data(t1 a, t2 b)
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

    data<int, float> d1(12, 45.34);
    d1.getData();

    data<float, char> d2(45.67, 'P');
    d2.getData();

    data<char, char> d3('A', 'B');
    d3.getData();

    data<string, int> d4("home", 67);
    d4.getData();
    return 0;
}