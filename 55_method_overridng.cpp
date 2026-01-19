#include <iostream>
using namespace std;
class student
{
    string name;
    int rno;

public:
    void setStudent(string n, int r)
    {
        name = n;
        rno = r;
    }
    void displayStd()
    {
        cout << "student Info : " << endl;
        cout << "name = " << name << endl;
        cout << "rno = " << rno << endl;
    }
    void result(int per)
    {
        if (per >= 33)
        {
            printf("student Pass\n");
        }
        else
        {
            printf("student Fail\n");
        }
        cout << "-----------------------" << endl;
    }
};
class engStud : public student
{
    int sem;
    string branch;

public:
    void setEngStud(int s, string b)
    {
        sem = s;
        branch = b;
    }
    void displayEngStd()
    {
        cout << "sem = " << sem << endl;
        cout << "branch = " << branch << endl;
        cout << "----------------------------" << endl;
    }
};
class mediStud : public student
{
    int prof;
    string speci;

public:
    void setMediStud(int p, string s)
    {
        prof = p;
        speci = s;
    }
    void displayMediStud()
    {
        cout << "prof = " << prof << endl;
        cout << "speci = " << speci << endl;
        cout << "----------------------------" << endl;
    }
    void result(int per)
    {
        if (per >= 40)
        {
            printf("student Pass\n");
        }
        else
        {
            printf("student Fail\n");
        }
        cout << "-----------------------" << endl;
    }
};

int main()
{
    engStud s1;
    s1.setStudent("raj", 101);
    s1.setEngStud(3, "CS");
    s1.displayStd();
    s1.displayEngStd();
    s1.result(35);

    mediStud s2;
    s2.setStudent("harry", 102);
    s2.setMediStud(2, "artho");
    s2.displayStd();
    s2.displayMediStud();
    s2.result(45);

    return 0;
}