#include <iostream>
using namespace std;
int main()
{
    printf("app is start....\n");
    cout << "this division app : " << endl;
    int a, b, c;
    cout << "enter first num : ";
    cin >> a;
    cout << "enter second num : ";
    cin >> b;
    try
    {
        if (b == 0)
        {
            throw b;
        }
        c = a / b;
        cout << "division: " << c << endl;
        cout << "division app run succefully" << endl;
    }
    catch (int e)
    {
        cout << "zero division error" << endl;
    }
    cout << "this addition app : " << endl;
    cout << "enter first num : ";
    cin >> a;
    cout << "enter second num : ";
    cin >> b;
    c = a + b;
    cout << "addition: " << c << endl;
    cout << "addition app run succefully" << endl;
    return 0;
}