// example of arrow operator ( -> )
#include <iostream>
using namespace std;
class employ
{
    int id;
    float sallary;

public:
    void setEmploy(int i, float s)
    {
        id = i;
        sallary = s;
    }
    void getEmploy()
    {
        cout << "employ info : " << endl;
        cout << "emp id : " << id << endl;
        cout << "emp sallary : " << sallary << endl;
        cout << "-------------------------------" << endl;
    }
};
int main()
{
    employ e1;
    employ *ptr;
    ptr = &e1;
    // (*ptr).setEmploy(101, 20000);
    ptr->setEmploy(101, 20000);
    e1.getEmploy();
    ptr->getEmploy();
    return 0;
}