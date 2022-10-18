#include <iostream>
using namespace std;

int remove(string s, int a, int b)
{
    if (b > s.length())
    {
        return 0;
    }

    if (s[a] == s[b])
    {
        remove(s, a, b + 1);
        return b;
    }
    else
    {
        cout << s[a];
        remove(s, b, b);
        return 0;
    }
    return 0;
}

int main()
{
    string s;
    cin >> s;
    remove(s, 0, 0);

    return 0;
}