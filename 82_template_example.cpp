#include <iostream>
using namespace std;
template <class T>
class complex
{
    T real;
    T image;

public:
    complex() {}
    complex(T r, T i)
    {
        real = r;
        image = i;
    }
    void getComplex()
    {
        cout << "complex number : (" << real << "+" << image << "i)" << endl;
    }
    complex operator+(complex obj)
    {
        complex res;
        res.real = real + obj.real;
        res.image = image + obj.image;
        return res;
    }
    complex operator-(complex obj)
    {
        complex res;
        res.real = real - obj.real;
        res.image = image - obj.image;
        return res;
    }
};
int main()
{
    complex<int> c1(12, 5), c2(6, 2), c3;
    c1.getComplex();
    c2.getComplex();
    c3 = c1 + c2;
    c3.getComplex();
    cout << "---------------------------" << endl;
    complex<float> c4(2.4, 6.3), c5(5.2, 8.3), c6;
    c4.getComplex();
    c5.getComplex();
    c6 = c4 + c5;
    c6.getComplex();
    return 0;
}