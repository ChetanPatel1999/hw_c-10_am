// dynamic object creation in cpp
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
    employ *ptr = new employ;
    ptr->setEmploy(101, 4500);
    ptr->getEmploy();
    return 0;
}