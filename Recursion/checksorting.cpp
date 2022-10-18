#include <iostream>
using namespace std;

int dec(int n)
{
    cout << n;
    if (n == 0)
    {
        return 0;
    }
    dec(n - 1);
    return 0;
}

int inc(int m, int n)
{
    cout << m;
    if (m == n)
    {
        return 0;
    }

    inc(m + 1, n);
    return 0;
}

int main()
{

    int n;
    cin >> n;

    dec(n);
    inc(0, n);
    return 0;
}



 