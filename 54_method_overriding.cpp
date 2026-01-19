// method overriding example
#include <iostream>
using namespace std;

class base
{
public:
    void display(int a)
    {
        cout << "base display : " << a << endl;
    }
};
class derived : public base
{
public: 
    void display(int a)   //method overring 
    {
        cout << "derived display : " << (a + 5) << endl;
    }
};
int main()
{
    derived d1;
    d1.display(12); // derived display is called
    return 0;
}