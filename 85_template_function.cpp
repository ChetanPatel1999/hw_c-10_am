#include <iostream>
using namespace std;

template <class T>
void display(T data)
{
    cout << "data : " << data << endl;
}


template <class D1, class D2>
void add(D1 a, D2 b)
{
    cout << "sum : " << (a + b) << endl;
}
int main()
{
    add(34, 5.2);

    display(34);
    display(89);
    display(12.55);
    display('Z');
    display("raj varma");
    return 0;
}