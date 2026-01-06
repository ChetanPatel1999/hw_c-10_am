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
    Student(string n, int r, float p)
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
    static void displayTotalResult()
    {
        cout << "totalPass = " << totalPass << endl;
        cout << "totalFail = " << totalFail << endl;
        cout << "--------------------------------------" << endl;
    }
    static void setCollageName(string c)
    {
        collageName = c;
    }
    static void displayTotalStudent()
    {
        cout << "total student : " << totalStudent << endl;
        cout << "-------------------------------------" << endl;
    }
    static void classInfo()
    {
        cout<<"this class have 6 method"<<endl;
        cout<<"methods name are setStudent, displyResultcard and many more"<<endl;
    }
};
int Student::totalPass = 0;
int Student::totalFail = 0;
string Student::collageName;
int Student::totalStudent = 0;
int main()
{
    Student::setCollageName("IIST Collage");
    Student s1("nidhi", 101, 12);
    Student s2("bhumika", 102, 80);
    Student s3("kunal", 103, 45);
    Student s4("ranveer", 104, 99);
    s1.getResultCard();
    s2.getResultCard();
    s3.getResultCard();
    s4.getResultCard();
    Student::displayTotalResult();
    Student::displayTotalStudent();
    Student::classInfo();
    return 0;
}