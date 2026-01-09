#include <iostream>
using namespace std;
class sample
{
public:
    sample()
    {
        cout << "constructore is called" << endl;
    }
    ~sample()
    {
        cout << "distructor is called " << endl;
    }
    void display()
    {
        cout << "display is called" << endl;
    }
};
int main()
{
    cout << "main function is start...." << endl;
    sample p1, p2;
    p1.display();
    p2.display();
    cout << "inside main function " << endl;
    {
        cout << "inside block" << endl;
        sample p4;
        p4.display();
        cout << "block is end" << endl;
    }

    cout << "outside block" << endl;
    
    return 0;
}