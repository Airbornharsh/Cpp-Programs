#include <iostream>
using namespace std;

void countsort(int s[10])
{
    int k = 10000;
    int no[k];
    for (int i = 0; i < k; i++)
    {
        no[i] = 0;
    }
    for (int i = 0; i < 10; i++)
    {
        no[s[i]] += 1;
    }
    int m = 0;
    for (int i = 0; i < k; i++)
    {
        m += no[i];
        no[i] = m;
    }
    int c[10];
    for (int i = 9; i > 0; i--)
    {
        no[s[i]] -= 1;
        c[no[s[i]]] = s[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cout << c[i];
    }
    return;
}

int main()
{
    int s[10] = {3, 2, 3, 7, 8, 4, 5, 3, 4, 7};
    countsort(s);

    return 0;
}
