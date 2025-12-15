// 8. Write a program to display the series [ 4,9,19,34,54..... n] terms.
#include <iostream>
using namespace std;
int main()
{
    int n, i, res = 4, incre = 5;
    cout << "enter serise length : ";
    cin >> n;
    // 4,9,19,34,54..... n
    for (i = 1; i <= n; i++)
    {
        cout << res << " ";
        res = res + 5 * i;
    }
    //  for (i = 1; i <= n; i++)
    // {
    //     cout << res << " ";
    //     res = res + incre;
    //     incre = incre + 5;
    // }
    return 0;
}