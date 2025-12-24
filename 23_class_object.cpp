#include <iostream>
using namespace std;
class mouse
{
    string companyName;
    string color;
    int price;
    float rating;
    bool isWireLess;

public:
    void setMouse(string cn, string c, int p, float r, bool wl) // setter method
    {
        companyName = cn;
        color = c;
        price = p;
        rating = r;
        isWireLess = wl;
    }
    void getMouse()  //getter method
    {
        cout << "mouse info : " << endl;
        cout << "mouse company name : " << companyName << endl;
        cout << "mouse color: " << color << endl;
        cout << "mouse price: " << price << endl;
        cout << "mouse rating: " << rating << endl;
        cout << "mouse isWireLess: " << isWireLess << endl;
        cout << "---------------------------------------" << endl;
    }
};
int main()
{
    mouse m1, m2, m3;

    m1.setMouse("hp", "black", 400, 3.7, true);

    m2.setMouse("frontech", "white", 700, 4.5, true);
    m3.setMouse("dell", "red", 300, 2.5, false);

    m1.getMouse();
    m2.getMouse();
    m3.getMouse();

    return 0;
}
