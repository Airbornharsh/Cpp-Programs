#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        for (int k = 1; k <= a; k++)
        {
            if (k <= a - i)
            {
                cout << " ";
            }
            else
            {
                cout << a - k + 1;
            }
        }
        for (int m = 1; m <= a - 1; m++)
        {
            if (m <= i - 1)
            {
                cout << m + 1;
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