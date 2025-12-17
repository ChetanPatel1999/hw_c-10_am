#include <iostream>
using namespace std;
// no return type no parameter
void learn();  //function declaration
void fun()
{
    cout << "hello i am fun" << endl;
    cout << "my name is khan" << endl;
    learn();
}
void learn()
{
    cout << "hi i am learing C++" << endl;
    cout << "here we leran function in C++" << endl;
}
int main()
{
    cout << "programm is start ...." << endl;
    fun();
    cout << "again inside main" << endl;
    fun();
    return 0;
}