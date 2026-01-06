#include <iostream>
using namespace std;
class sample
{
public:
    sample()
    {
        cout << "0 arg constructor is called" << endl;
    }
    sample(int a)
    {
        cout << "1 arg constructor is called" << endl;
    }
    sample(int a, int b)
    {
        cout << "2 arg constructor is called" << endl;
    }
    void display()
    {
        cout << "hi i am display " << endl;
    }
};
int main()
{

    sample s1, s2, s3(12);
    sample s4(34, 56);
    s1.display();
    return 0;
}