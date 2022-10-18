#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a * 2; j++)
        {
            if (j <= i || j > a * 2 - i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    for (int i = a - 1; i >= 1; i--)
    {
        for (int j = a * 2; j >= 1; j--)
        {
            if (j <= i || j > a * 2 - i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}