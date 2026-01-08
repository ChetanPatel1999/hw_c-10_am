#include <iostream>
using namespace std;
class emp
{
    int id;
    float sallary;

public:
    emp() // non paramterized constructor
    {
        id = 500;
        sallary = 12000;
    }
    emp(int a, float b) // parameterized constructor
    {
        id = a;
        sallary = b;
    }
    void display()
    {
        cout << "emp info :" << endl;
        cout << "id : " << id << endl;
        cout << "sallary : " << sallary << endl;
        cout<<"---------------------------"<<endl;
    }
};
int main()
{
     emp e1,e2,e3(101,15000);
     e1.display();
     e2.display();
     e3.display();
    
    return 0;
}