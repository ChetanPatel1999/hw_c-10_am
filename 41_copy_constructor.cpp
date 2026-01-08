#include <iostream>
using namespace std;
class emp
{
    int id;
    float sallary;

public:
    emp() {}
    emp(int a, float b)
    {
        id = a;
        sallary = b;
    }
    emp(emp &obj) // copy constructor
    {
        cout << "copy constructor is called" << endl;
        id = obj.id+5;
        sallary = obj.sallary+1000;
    }
    void display()
    {
        cout << "emp info :" << endl;
        cout << "id : " << id << endl;
        cout << "sallary : " << sallary << endl;
        cout << "---------------------------" << endl;
    }
};
int main()
{
    emp e1(103, 15000), e2(e1),e3=e1,e4;
    e1.display();
    e2.display();
    e3.display();
    e4=e1;  // default copy constructor is called
    e4.display();
    return 0;
}