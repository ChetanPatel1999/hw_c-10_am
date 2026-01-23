#include <iostream>
using namespace std;
int main()
{
    int *ptr = new int[5]; // 400
    int *temp = ptr;
    int i;

    cout << "enter array elements : " << endl;
    for (i = 0; i < 5; i++)
    {
        cin >> *ptr;
        ptr++; // 420
    }
    ptr = temp; // ptr= ptr-5;
    cout << "array element are : " << endl;
    for (i = 0; i < 5; i++)
    {
        cout << *ptr << endl; //
        ptr++;
    }
    return 0;
}