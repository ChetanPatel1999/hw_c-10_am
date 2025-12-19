// with return type with paramter
#include <iostream>
using namespace std;
int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
float avrage(int a, int b)
{
    return (a + b) / (float)2;
}

char upperCase(char ch)
{
    return ch - 32;
}

// with return type no paramter
// string fullName()
// {
//     return "hello nidhi mandloi";
// }

string fullName(string name, string sirname)
{
    string fullName;
    fullName = name + " " + sirname;
    return fullName;
}

int main()
{
    cout << fullName("ranveer", "singh");
    // cout << "upperCase = " << upperCase('q');
    // cout << "average = " << avrage(2, 5);
    // cout << "addition = " << add(2, 1) << endl;
    // int res = add(6, 19);
    // cout << "addition = " << res << endl;

    // if (add(12, 7) % 2 == 0)
    // {
    //     cout << "hello nidhi";
    // }
    // else
    // {
    //     cout << "hello ranveer";
    // }22
    return 0;
}