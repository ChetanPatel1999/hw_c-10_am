// in c++ we use new keyword to allocate dynamica memory.
#include <iostream>
using namespace std;
int main()
{
    int *ptr = new int;        // only allocate memory
    int *ptr1 = new int(78.7); // memory allocate and store 78 at memory
    *ptr = 90;
    cout << "data1 = " << *ptr << endl;
    cout << "data2 = " << *ptr1 << endl;
    delete ptr; // its delete dynamic allocate memory
    delete ptr1;

    float *ptr2 = new float;
    float *ptr3 = new float(7.56);
    *ptr2 = 45.67;
    cout << "data3 = " << *ptr2 << endl;
    cout << "data4 = " << *ptr3 << endl;
    return 0;
}