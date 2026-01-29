// example of pure virtual function and abstract class.
#include <iostream>
using namespace std;
class base    //abstract classz
{
public:
    virtual void display() = 0; // pure virtual function
    void show()
    {
        cout << "hello i am show";
    }
};
class derived : public base
{
public:
    void display() // override pure virtual function
    {
        cout << "hello i am display" << endl;
    }
    void setData()
    {
        // code;
    }
};
int main()
{
    derived d1;
    d1.display();
    d1.show();
    d1.setData();
    return 0;
}