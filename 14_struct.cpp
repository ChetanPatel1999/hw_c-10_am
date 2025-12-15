#include <iostream>
using namespace std;
struct mouse
{
    string companyName;
    string color;
    int price;
    float rating;
};
int main()
{
    mouse m1, m2, m3;
    m1.companyName = "fronTech";
    m1.color = "black";
    m1.price = 800;
    m1.rating = 4.9;

    m2.companyName = "logitech";
    m2.color = "white";
    m2.price = 5;
    m2.rating = 4;

    cout << "mouse1 info : " << endl;
    cout << "mouse Comapny name : " << m1.companyName << endl;
    cout << "mouse color : " << m1.color << endl;
    cout << "mouse price : " << m1.price << endl;
    cout << "mouse rating : " << m1.rating << endl;
    cout << "------------------------------------------" << endl;

    cout << "mouse2 info : " << endl;
    cout << "mouse Comapny name : " << m2.companyName << endl;
    cout << "mouse color : " << m2.color << endl;
    cout << "mouse price : " << m2.price << endl;
    cout << "mouse rating : " << m2.rating << endl;
    cout << "------------------------------------------" << endl;

    return 0;
}