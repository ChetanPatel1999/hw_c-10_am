// object pass as argument in class method
#include <iostream>
using namespace std;
class data
{
    int num1;
    int num2;

public:
    data(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
    void display()
    {
        cout << "num1 = " << num1 << endl;
        cout << "num2 = " << num2 << endl;
        cout << "---------------------------" << endl;
    }
    void addSameObjectData()
    {
        cout << "sum = " << (num1 + num2) << endl;
        cout << "---------------------------" << endl;
    }
    void addDifferentObjectData(data obj)
    {
        cout << "sumNum1 = " << (num1 + obj.num1) << endl;
        cout << "sumNum2 = " << (num2 + obj.num2) << endl;
    }
    static void staticMethod(data obj1, data obj2)
    {
        cout << "sumNum1 = " << (obj1.num1 + obj2.num1) << endl;
        cout << "sumNum2 = " << (obj1.num2 + obj2.num2) << endl;
    }
};
int main()
{
    data d1(12, 5);
    data d2(5, 7);
    d1.display();
    d2.display();
    d1.addSameObjectData();
    d2.addSameObjectData();
    d1.addDifferentObjectData(d2);
    data::staticMethod(d1, d2);
    return 0;
}