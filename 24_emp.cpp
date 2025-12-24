// how to take object data from user
#include <iostream>
using namespace std;
int count = 0;
class emp
{
    int id;
    float sallary;

public:
    void setEmp()
    {
        cout << "enter emp" << ++count << " info : "<<endl;
        cout << "enter id : ";
        cin >> id;
        cout << "enter sallary : ";
        cin >> sallary;
    }
    void getEmp()
    {
        cout << "\nemp" << ++count << " info : "<<endl;
        cout << "emp id : " << id << endl;
        cout << "emp sallary : " << sallary << endl;
        cout << "----------------------------------" << endl;
    }
};
int main()
{
    emp e1, e2;
    e1.setEmp();
    e2.setEmp();
    count = 0;
    e1.getEmp();
    e2.getEmp();
    return 0;
}