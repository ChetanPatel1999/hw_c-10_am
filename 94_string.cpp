// wap to print word count in given string.
#include <iostream>
using namespace std;
int main()
{
    string s = "indore city is a clean city and i am";
    int i, c = 0;
    for (i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            c++;
        }
    }
    cout << "total word in string : " << c+1 << endl;
    return 0;
}