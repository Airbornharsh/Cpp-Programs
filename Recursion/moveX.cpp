#include <iostream>
using namespace std;

void pastex(int k)
{
    if (k == 0)
    {
        return;
    }

    cout << 'x';

    pastex(k - 1);

    return;
}


int movex(string s, int n, int c, int k)
{

    if (c == n)
    {
        pastex(k);
        return 0;
    }

    if (s[c] == 'x')
    {
        k = k + 1;
    }
    else
    {
        cout << s[c];
    }

    movex(s, n, c + 1, k);

    return 0;
}


int main()
{
    string s;
    cin >> s;

    int k = movex(s, s.length(), 0, 0);

    return 0;
}