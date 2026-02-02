#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // create objetc of ofstream class and also open file using constructor
    ofstream w("C:\\Users\\PC\\Desktop\\bhumika\\student.txt");
    //write data inside file using ofstream object 
    w << "hello bhumika kaise ho sab badiya";
    //close file after all operation done on file
    w.close();
    return 0;
}