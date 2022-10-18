#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 1)
            {
                (j % 2 == 1)
                    ? cout << 1
                    : cout << 0;
            }
            else
            {
                (j % 2 == 1)
                    ? cout << 0
                    : cout << 1;
            }
        }
        cout << "\n";
    }
    return 0;
}