#include <iostream>
using namespace std;
class base
{
public:
    int a;

protected:
    int b;

private:
    int c;
};
class child : private base
{
    void show()
    {
        a = 12;
        b = 89;
        c = 9;
    }
};
class D : public child
{
    void show()
    {
        a = 800;
        b = 90;
    }
};
int main()
{
    child obj;
    obj.a = 12;
    obj.b = 56;
    return 0;
}