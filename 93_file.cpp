#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream read;
    read.open("student.txt");
    string s;
    read >> s;
    cout << s<<" ";

    read >> s;
    cout << s<<" ";

    read >> s;
    cout << s;
    read.close();
    return 0;
}