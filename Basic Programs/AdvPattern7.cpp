#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    for (int m = 1; m <= 3; m++)
    {
        for (int i = 1; i <= a; i++)
        {
            if (i % 4 == 3 && m % 3 == 1 || i % 2 == 0 && m % 2 == 0 || i % 4 == 1 && m % 3 == 0)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << "\n";
    }
    
    // LONG WAY
    // for (int i = 1; i <= a; i++)
    // {
    //     if (i % 4 == 3)
    //     {
    //         cout << "* ";
    //     }
    //     else
    //     {
    //         cout << "  ";
    //     }
    // }
    // cout << "\n";
    // for (int i = 1; i <= a; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         cout << "* ";
    //     }
    //     else
    //     {
    //         cout << "  ";
    //     }
    // }
    // cout << "\n";
    // for (int i = 1; i <= a; i++)
    // {
    //     if (i % 4 == 1)
    //     {
    //         cout << "* ";
    //     }
    //     else
    //     {
    //         cout << "  ";
    //     }
    // }
    // cout << "\n";

    return 0;
}