#include <iostream>
using namespace std;
int main()
{
    string city[5] = {"indo", "ujjain","mhow", "ratlam", "bhopal"};
    int i;
    for (i = 0; i < 5; i++)
    {
        cout << city[i] << endl;
    }

    for (i = 0; i < 5; i++)
    {
        if (city[i].length() == 4)
        {
            cout << "city which name contain 4 later = " << city[i] << endl;
        }
    }
    return 0;
}