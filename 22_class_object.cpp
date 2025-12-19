#include <iostream>
using namespace std;
class mouse
{
public:
    string CompanyName;
    string color;
    int price;
    float rating;
    bool isWireLess;
};
int main()
{
    mouse m1, m2, m3;

    m1.CompanyName = "Hp";
    m1.color = "black";
    m1.price = 400;
    m1.rating = 3.6;
    m1.isWireLess = false;

    cout << "mouse info : " << endl;
    cout << "mouse company name : " << m1.CompanyName << endl;
    cout << "mouse color: " << m1.color << endl;
    cout << "mouse price: " << m1.price << endl;
    cout << "mouse rating: " << m1.rating << endl;
    cout << "mouse isWireLess: " << m1.isWireLess << endl;
    return 0;
}