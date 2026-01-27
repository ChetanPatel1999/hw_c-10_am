// dynamic object creation in cpp
#include <iostream>
using namespace std;
class employ
{
    int id;
    float sallary;
    static int count;

public:
    void setEmploy()
    {
        cout << "\nenter emp " << ++count << " info : " << endl;
        cout << "enter emp id : ";
        cin >> id;
        cout << "enter emp sallary : ";
        cin >> sallary;
    }
    void getEmploy()
    {
        cout << "employ " << ++count << " info : " << endl;
        cout << "emp id : " << id << endl;
        cout << "emp sallary : " << sallary << endl;
        cout << "-------------------------------\n"
             << endl;
    }
    static void setCount(int a)
    {
        count = a;
    }
};
int employ::count = 0;
int main()
{
    int n;
    cout << "enter emp count : ";
    cin >> n;
    employ *ptr = new employ[n];
    int i;
    for (i = 0; i < n; i++) // 2
    {
        (ptr + i)->setEmploy();
    }

    employ::setCount(0);

    for (i = 0; i < n; i++) // 1
    {
        (ptr + i)->getEmploy();
    }

    return 0;
}