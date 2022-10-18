#include <iostream>
using namespace std;

int main()
{
    int a1, a2, a3;
    cin >> a1 >> a2 >> a3;
    if (a1 > a2)
    {
        if (a1 > a3)
        {
            cout << "MAX is " << a1;
        }
        else
        {
            cout << "MAX is " << a3;
        }
    }
    else
    {
        if (a2 > a3)
        {
            cout << "MAX is " << a2;
        }
        else
        {
            cout << "MAX is " << a3;
        }
    }

    return 0;
}
