#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int k = a;
    for (int i = 1; i <= a; i++)
    {
        k--;
        for (int m = k; m >= 1; m--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }

        cout << "\n";
    }
    return 0;
}