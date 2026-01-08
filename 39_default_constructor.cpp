#include <iostream>
using namespace std;
class emp
{
    int id;
    float sallary;

public:
    emp(int a=101, float b=45000) // constructor with all default parameter
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
     emp e1,e2,e3(103,15000);
     e1.display();
     e2.display();
     e3.display();
    
    return 0;
}