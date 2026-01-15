// example of multilavle inheritance
#include <iostream>
using namespace std;
class student
{
    int rno;

public:
    void setRno(int r)
    {
        rno = r;
    }
    void getRno()
    {
        cout << "student info : " << endl;
        cout << "student rno : " << rno << endl;
    }
};
class marks : public student
{
protected:
    int hindi;
    int math;

public:
    void setMarks(int h, int m)
    {
        hindi = h;
        math = m;
    }
    void getMarks()
    {
        cout << "hindi : " << hindi << endl;
        cout << "math : " << math << endl;
    }
};
class result : public marks
{
    float per;

public:
    void getResult()
    {
        per = (hindi + math) / 2.0;
        cout << "percentage : " << per << endl;
    }
};
int main()
{
    result s1;
    s1.setRno(101);
    s1.setMarks(45, 89);
    s1.getRno();
    s1.getMarks();
    s1.getResult();

    return 0;
}