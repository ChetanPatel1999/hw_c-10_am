#include <iostream>
using namespace std;
class Student
{
    string name;
    int rno;
    float per;

public:
    Student(string n, int r, float p)
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
    void average(Student obj)
    {
        float ave = (per + obj.per) / 2;
        cout << "average of " << name << " and " << obj.name << " = " << ave << endl;
        cout << "----------------------------------------" << endl;
    }
    static void average(Student obj1, Student obj2)
    {
        float ave = (obj1.per + obj2.per) / 2;
        cout << "average of " << obj1.name << " and " << obj2.name << " = " << ave << endl;
        cout << "----------------------------------------" << endl;
    }
    static void average(Student obj1, Student obj2, Student obj3)
    {
        float ave = (obj1.per + obj2.per + obj3.per) / 3;
        cout << "average of " << obj1.name << " and " << obj2.name << " and " << obj3.name << " = " << ave << endl;
        cout << "----------------------------------------" << endl;
    }
    static void average(Student obj1, Student obj2, Student obj3, Student obj4)
    {
        float ave = (obj1.per + obj2.per + obj3.per + obj4.per) / 4;
        cout << "average of " << obj1.name << " and " << obj2.name << " and " << obj3.name << " and " << obj4.name << " = " << ave << endl;
        cout << "----------------------------------------" << endl;
    }
    static void maxMarks(Student o1, Student o2)
    {
        if (o1.per > o2.per)
        {
            cout << o1.name << " have more percentage then " << o2.name << endl;

        }
        else
        {
            cout << o2.name << " have more percentage then " << o1.name << endl;
        }
    }
};
int main()
{
    Student s1("nidhi", 101, 9);
    Student s2("bhumika", 102, 80);
    Student s3("kunal", 103, 20);
    Student s4("ranveer", 104, 99);
    s1.getResultCard();
    s2.getResultCard();
    s3.getResultCard();
    s4.getResultCard();
    // s1.average(s2);
    Student::average(s1, s2);
    Student::average(s1, s3);
    Student::average(s2, s3);
    Student::average(s2, s3, s4);
    Student::average(s2, s3, s4, s1);
    Student::maxMarks(s1, s2);
    return 0;
}