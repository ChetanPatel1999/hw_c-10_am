// dynamic object creation in cpp
#include <iostream>
using namespace std;
class employ
{
    int id;
    float sallary;

public:
    void setEmploy()
    {
        cout << "enter emp info : " << endl;
        cout << "enter emp id : ";
        cin >> id;
        cout << "enter emp sallary : ";
        cin >> sallary;
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
    employ *ptr = new employ[3];
    int i;
    for (i = 0; i < 3; i++) //2
    {
        (ptr + i)->setEmploy();
    }

    for (i = 0; i < 3; i++)//1
    {
        (ptr + i)->getEmploy();
    }

    return 0;
}