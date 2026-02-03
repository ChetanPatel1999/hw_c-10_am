#include <iostream>
using namespace std;
int main()
{
    string s = "indore";
    // s.append(" city");  //append method is used to add string in current string end
    // s.push_back('K');
    // s.push_back(65);  // its used to add single char in string.
    // s.clear(); // its empy string object
    // cout << s.at(2) << endl; //  at method return a char from string at given index
    // cout << s.compare("indore") << endl; // its return 0 when string are same otherwise return 1
    // s.replace(2, 2, "ram"); //  replace(start_pos , total_replace , new_string);
    // cout << s.find("o") << endl; // raeturn index number of given character
    // s = "indore city";
    // string s2 = s.substr(7, 4); // return a substring form give index to total character
    // cout << s2 << endl;
    string s2 = "ujjain";
    s.swap(s2);  // we can swap to string 
    cout << s<<endl;
    cout << s2<<endl;
    return 0;
}