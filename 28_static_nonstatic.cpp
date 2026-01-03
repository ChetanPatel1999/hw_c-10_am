#include <iostream>
using namespace std;
class Student
{
    string name;
    int rno;
    float per;
    static int totalPass;
    static int totalFail;
    static string collageName;
    static int totalStudent;

public:
    void setStudent(string n, int r, float p)
    {
        name = n;
        rno = r;
        per = p;
        totalStudent++;
    }
    void getResultCard()
    {
        cout << "Student Result Card...." << endl;
        cout << "collage name :" << collageName << endl;
        cout << "student name : " << name << endl;
        cout << "student rno : " << rno << endl;
        cout << "student per : " << per << endl;
        if (per >= 33)
        {
            totalPass++;
            cout << "student pass" << endl;
        }
        else
        {
            totalFail++;
            cout << "student Fail" << endl;
        }
        cout << "----------------------------------------" << endl;
    }
    void displayTotalResult()
    {
        cout << "totalPass = " << totalPass << endl;
        cout << "totalFail = " << totalFail << endl;
        cout << "--------------------------------------" << endl;
    }
    void setCollageName(string c)
    {
        collageName = c;
    }
    void displayTotalStudent()
    {
        cout << "total student : " << totalStudent << endl;
        cout << "-------------------------------------" << endl;
    }
};
int Student::totalPass = 0;
int Student::totalFail = 0;
string Student::collageName;
int Student::totalStudent = 0;
int main()
{
    Student s1, s2, s3, s4;
    s1.setCollageName("IIST Collage");
    s1.setStudent("nidhi", 101, 12);
    s2.setStudent("bhumika", 102, 80);
    s3.setStudent("kunal", 103, 45);
    s4.setStudent("ranveer", 104, 99);
    s1.getResultCard();
    s2.getResultCard();
    s3.getResultCard();
    s4.getResultCard();
    s1.displayTotalResult();
    s1.displayTotalStudent();
    return 0;
}