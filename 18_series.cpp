// Write a program to find the sum of the series [1 +11 + 111 + 1111 + .. n ]
// terms.
#include <iostream>
using namespace std;
int main()
{
    int n, i, res = 1, incre = 10, sum = 0;
    cout << "enter serise length : ";
    cin >> n;
    // 1  11  111   1111  11111
    for (i = 1; i <= n; i++)
    {
        cout << res << " ";
        sum = sum + res;
        res = res + incre;
        incre = incre * 10;
    }
    cout << " = " << sum;
    return 0;
}