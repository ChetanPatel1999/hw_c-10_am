// how to take string from user
#include <iostream>
using namespace std;
int main()
{
    string s;
    cout << "enter string : ";
    //    cin>>s;
    getline(cin, s);   //its take one line or sentance from user
    cout << "string : " << s << endl;
    return 0;
}