#include <iostream>
using namespace std;

int main()
{
    int a =3;
    // cin >> a;

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (j == 0)
            {
                cout << i+1 << " ";
            }
            else if (i == j || (i - j) % 2 == 0)
            {
                // cout << j * 2 + i * 2 + 1 << " ";
            }
            else
            {

                // cout << j * 2 + i * 2 << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

// 1

// 1 4
// 2 3

// 1 8 7
// 2 9 6
// 3 4 5

// 1 22 23 14 13
// 2 21 24 15 12
// 3 20 25 16 11
// 4 19 18 17 10
// 5 6  7  8  9