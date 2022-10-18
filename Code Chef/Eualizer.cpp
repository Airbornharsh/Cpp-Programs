#include <iostream>
#include <vector>
using namespace std;

void Equalizer(vector<int> n)
{
    int n1 = n[0], n2 = n[1];
    if (n[0] == n[1])
    {
        cout << "YES" << endl;
        return;
    }

    while (n[0] > n[1])
    {
        n[1] *= 2;
    }

    if (n[0] == n[1])
    {
        cout << "YES" << endl;
        return;
    }

    while (n1 < n2)
    {
        n1 *= 2;
    }

    if (n1 == n2)
    {
        cout << "YES" << endl;
        return;
    }

    cout << "NO" << endl;
    return;
}

int main()
{
    // your code goes here
    int a;
    cin >> a;
    vector<vector<int>> b;
    for (int i = 0; i < a; i++)
    {
        vector<int> k;
        int c, d;
        cin >> c;
        cin >> d;
        k.push_back(c);
        k.push_back(d);
        b.push_back(k);
    }

    for (int i = 0; i < a; i++)
    {
        Equalizer(b[i]);
    }

    return 0;
}
