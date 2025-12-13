#include <iostream>
using namespace std;
int main()
{
    float kg, gram;
    cout << "enter weight in kg : ";
    cin >> kg;
    gram = kg * 1000;
    cout << "weight in gram : " << gram<<" gram";
    return 0;
}