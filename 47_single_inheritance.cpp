#include <iostream>
using namespace std;
class employ
{
    int id;
    float sallary;

public:
    void setEmp(int i, float s)
    {
        id = i;
        sallary = s;
    }
    void getEmp()
    {
        cout << "emp info : " << endl;
        cout << "id : " << id << endl;
        cout << "sallary : " << sallary << endl;
    }
};
class programer : public employ
{
    string lang;
    string project;

public:
    void setProgramer(string l, string p)
    {
        lang = l;
        project = p;
    }
    void getProgramer()
    {
        cout << "language : " << lang << endl;
        cout << "project : " << project << endl;
    }
};
int main()
{
    programer p1;
    p1.setEmp(101, 15000);
    p1.setProgramer("python", "music player");
    p1.getEmp();
    p1.getProgramer();
    return 0;
}