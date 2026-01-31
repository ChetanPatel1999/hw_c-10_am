#include <iostream>
using namespace std;
int main()
{
    int x;
    cout<<"enter value : ";
    cin >> x;
    try
    {
        if (x > 0 && x < 10)
        {
            throw "hello";
        }
        if (x > 10 && x < 20)
        {
            throw 12;
        }
        if (x > 20 && x < 30)
        {
            throw 45.67;
        }
    }
    catch (int e)
    {
        cout << "int catch block exicute " << endl;
    }
    catch (double e)
    {
        cout << "double catch block exicute " << endl;
    }
    catch (float e)
    {
        cout << "float catch block exicute " << endl;
    }
    catch (...) // default catch block is exicute when mathing catch block is not fond after throwing instance
    {
        cout << "default catch block";
    }

    cout << "\nprogram run succefully";
    return 0;
}