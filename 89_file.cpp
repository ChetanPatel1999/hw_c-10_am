#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // create objetc of ofstream class
    ofstream w;
    //open file using open method
    w.open("C:\\Users\\PC\\Desktop\\bhumika\\student.txt");
    //write data inside file using ofstream object 
    w << "hello bhumika";
    //close file after all operation done on file
    w.close();
    return 0;
}