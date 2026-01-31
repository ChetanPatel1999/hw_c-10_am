#include <iostream>
using namespace std;
int main()
{
    int x = -7;
    cout << "before try block" << endl;
    try
    {
        cout << "inside try block" << endl;
        if (x < 0)
        {
            throw x;
        }
        cout << "x value  : " << x << endl;
        cout << "try block run succesfully" << endl;
    }
    catch (int e)
    {
        cout << "catch block exicute " << endl;
    }
    cout << "after catch block" << endl;
    cout << "program run succefully" << endl;
    return 0;
}