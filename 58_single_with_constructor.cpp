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
    programer(int i, float s, string l, string p) : employ(i, s)
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
    programer p1(101, 12000, "python", "music player");
    p1.getEmp();
    p1.getProgramer();
    return 0;
}