#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int k = a;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            cout << j;
        }
        k--;
        cout << "\n";
    }
    return 0;
}