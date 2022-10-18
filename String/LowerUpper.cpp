#include <iostream>
#include <cctype>
using namespace std;

int main()
{

    string name;
    cin >> name;
    string newname = "";

    for (int i = 0; i < name.length(); i++)
    {
        char n = name[i];
        int k = name[i];
        if (k >= 65 && k <= 90)
        {
            newname = newname + (char)tolower(n);
        }
        else
        {
            newname = newname + n;
        }
    }

    cout << newname;

    return 0;
}