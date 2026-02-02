#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream read;
    read.open("facto.txt");
    string s;
    while (read.eof() == 0)
    {
        read >> s;
        cout << s << " ";
    }
    read.close();
    return 0;
}