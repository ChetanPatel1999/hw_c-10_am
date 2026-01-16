#include <iostream>
using namespace std;
class person
{
    string name;
    int age;

public:
    void setPerson(string n, int a)
    {
        name = n;
        age = a;
    }
    void getPerson()
    {
        cout << "name : " << name << endl;
        cout << "age : " << age << endl;
    }
};
class teacher : virtual public person
{
protected:
    string subject;

public:
    void setSubjet(string s)
    {
        subject = s;
    }
};
class student : virtual public person
{
protected:
    int fees;

public:
    void setFees(int f)
    {
        fees = f;
    }
};
class phdStudent : public teacher, public student
{
public:
    void getInfo()
    {
        cout << "subject : " << subject << endl;
        cout << "fees : " << fees << endl;
    }
};
int main()
{
    phdStudent s1;
    s1.setPerson("bhumika", 18);
    s1.setSubjet("math");
    s1.setFees(15000);
    s1.getPerson();
    s1.getInfo();
    return 0;
}