#include <iostream>
using namespace std;
class test
{
    int num1;
    int num2;

public:
    test() {}
    test(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
    void display()
    {
        cout << "num1 = " << num1 << endl;
        cout << "num2 = " << num2 << endl;
        cout << "-------------------------------" << endl;
    }
};
int main()
{
    test t1(12, 5);
    test t2(45, 78);
    test t3;
    t1.display();
    t2.display();
    return 0;
}