#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 0; j <= a - i; j++)
        {
            cout << "  ";
        }
        for (int k = 0; k < i * 2 - 1; k++)
        {
            cout << "* ";
        }

        cout << "\n";
    }
    for (int i = a; i >= 1; i--)
    {
        for (int j = a - i; j >= 0; j--)
        {
            cout << "  ";
        }
        for (int k = i * 2 - 1; k > 0; k--)
        {
            cout << "* ";
        }
        cout << "\n";
    }

    return 0;
}