#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        // ONE WAY
        //  for (int k = 1; k <= a-i; k++)
        //  {
        //      cout << " ";
        //  }

        // for (int j = 1; j <= i; j++)
        // {
        //     cout << "*";
        // }
        // cout << "\n";

        // ANOTHER WAY
        for (int j = 1; j <= a; j++)
        {
            if (j <= a - i)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << "\n";
    }
    return 0;
}