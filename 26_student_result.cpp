#include <iostream>
using namespace std;
class Student
{
    string name;
    int rno;
    float per;

public:
    void setStudent(string n, int r, float p)
    {
        name = n;
        rno = r;
        per = p;
    }
    void getResultCard()
    {
        cout << "Student Result Card...." << endl;
        cout << "student name : " << name << endl;
        cout << "student rno : " << rno << endl;
        cout << "student per : " << per << endl;
        if (per >= 33)
        {
            cout << "student pass" << endl;
        }
        else
        {
            cout << "student Fail" << endl;
        }
        cout << "----------------------------------------" << endl;
    }
};
int main()
{
    Student s1, s2, s3, s4;
    s1.setStudent("nidhi", 101, 12);
    s2.setStudent("bhumika", 102, 80);
    s3.setStudent("kunal", 103, 20);
    s4.setStudent("ranveer", 104, 99);
    s1.getResultCard();
    s2.getResultCard();
    s3.getResultCard();
    s4.getResultCard();
    return 0;
}