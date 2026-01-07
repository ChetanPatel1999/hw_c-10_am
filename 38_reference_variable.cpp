#include <iostream>
using namespace std;
void change(int &n)
{
    cout << "res = " << n << endl;
    n = 90;
}
int main()
{
    int data = 45;
    cout << "data = " << data << endl;          
    change(data);
    cout << "data = " << data << endl;
    return 0;
}