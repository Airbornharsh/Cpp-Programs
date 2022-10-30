#include <iostream>
using namespace std;

int main()
{
    int n = 6;
    int m = 1;

    while (m <= n)
    {

        for (int i = m; i <= n; i++)
        {
            cout << i;
        }
        for (int i = 1; i < m; i++)
        {
            cout << i;
        }
        cout << endl;
        m++;
    }
}

// 123456
// 234561
// 345612
// 456123
// 561234
// 612345