// dynamic object creation in cpp
#include <iostream>
using namespace std;
class employ
{
    int id;
    float sallary;

public:
    employ(int i, float s)
    {
        id = i;
        sallary = s;
    }
    void getEmploy()
    {
        cout << "employ  info : " << endl;
        cout << "emp id : " << id << endl;
        cout << "emp sallary : " << sallary << endl;
        cout << "-------------------------------\n"
             << endl;
    }
};

int main()
{
    employ *ptr = new employ(101, 1200);
    ptr->getEmploy();
    return 0;
}