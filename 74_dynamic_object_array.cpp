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
    employ *temp;
    temp = ptr;
    int i;
    for (i = 0; i < 3; i++) // 3
    {
        ptr->setEmploy();
        ptr++;
    }
    ptr = temp;
    // ptr = ptr - 3;
    for (i = 0; i < 3; i++)
    {
        ptr->getEmploy();
        ptr++;
    }

    return 0;
}