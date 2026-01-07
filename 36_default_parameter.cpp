// default parameter in function :-
#include <iostream>
using namespace std;
void add(int a = 5, int b = 8) // a, b are default parameter
{
    cout << "sum = " << (a + b) << endl;
}
void form(string name, int age, string city = "indore") //city is default parameter
{
    cout << "form data :-" << endl;
    cout << "name = " << name << endl;
    cout << "age = " << age << endl;
    cout << "city = " << city << endl;
    cout << "------------------------------" << endl;
}
void totalBill(int quntity, int price=100)
{
    cout << "total bill = " << (quntity * price)<<endl;
}
int main()
{
    totalBill(5,25);
    totalBill(5);
     
    // form("nidhi", 19, "khargone");
    // form("bhumika", 18);

    // add();
    // add(100);
    // add(12, 80);
    return 0;
}