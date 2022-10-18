#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;

    for (int i = a; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";

        if (i == 1)
        {
            break;
        }
    }

    return 0;
}