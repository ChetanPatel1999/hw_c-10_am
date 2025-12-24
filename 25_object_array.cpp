// how to take object data from user
#include <iostream>
using namespace std;
int count = 0; // globle variable
class emp
{
    int id;
    float sallary;
public:
    void setEmp()
    {
        cout << "enter emp" << ++count << " info : " << endl;
        cout << "enter id : ";
        cin >> id;
        cout << "enter sallary : ";
        cin >> sallary;
    }
    void getEmp()
    {
        cout << "\nemp" << ++count << " info : " << endl;
        cout << "emp id : " << id << endl;
        cout << "emp sallary : " << sallary << endl;
        cout << "----------------------------------" << endl;
    }
};
int main()
{
    int n;
    cout << "enter no of emp : ";
    cin >> n;
    emp e[n];
    int i;
    for (i = 0; i < n; i++)
    {
        e[i].setEmp();
    }
    count = 0;
    for (i = 0; i < n; i++)
    {
        e[i].getEmp();
    }
    return 0;
}