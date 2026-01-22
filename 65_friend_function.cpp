#include <iostream>
using namespace std;
class data
{
    int num1;
    int num2;
    friend void display(data);

public:
    data() {}
    data(int n1, int n2)
    {
        num1 = n1;
        num2 = n2;
    }
};

void display(data obj)
{
    cout << "num1 = " << obj.num1 << endl;
    cout << "num2 = " << obj.num2 << endl;
}
int main()
{
    data d1(12, 5);
    display(d1);
    return 0;
}