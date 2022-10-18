#include <iostream>
using namespace std;

void replace(string s, int n, int n1)
{
    if (n1 >= n)
    {
        return;
    }

    if (s[n1] == 'p' && s[n1 + 1] == 'i')
    {
        cout << "3.14";
        replace(s, n, n1 + 2);
        return;
    }
    cout << s[n1];
    replace(s, n, n1 + 1);

    return;
}

int main()
{

    string s;
    cin >> s;
    replace(s, s.length(), 0);
    return 0;
}