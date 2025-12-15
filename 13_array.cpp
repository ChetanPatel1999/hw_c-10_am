// array
#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    int i;
    cout << "enter array elements : " << endl;
    for (i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    cout << "arr element are : ";
    for (i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    int sum = 0;
    for (i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }
    cout << "\nsum of array element is " << sum << endl;
    return 0;
}