#include <iostream>
using namespace std;

string reverse(string s, int n)
{
    if (n == -1)
    {
        return "";
    }

    cout << s[n];
    reverse(s, n - 1);
    return "";
}

int main()
{

    string s;
    cin >> s;

    reverse(s, s.length());

    return 0;
}