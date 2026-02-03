#include <iostream>
#include <fstream>
using namespace std;
int main()
{

    ofstream w;
    //when you do not want delete privius data of file only want to add new
    // data so that time pass _S_app in open method
    w.open("student.txt",_S_app);
    w << "hello bhumika\n";
    w.close();
    return 0;
}