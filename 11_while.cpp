// wap to print sum of individual digit of given number.
#include <iostream>
using namespace std;
int main()
{
    int num, sum = 0, rem;
    cout << "enter a num : ";
    cin >> num; //454
    while (num > 0)
    {
        rem = num % 10;//5
        sum = sum + rem;//13
        num = num / 10;
    }
    cout << "sum of individual digit = " << sum << endl;

    return 0;
}