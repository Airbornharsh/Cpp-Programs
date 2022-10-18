#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the length of the array\n";
    cin >> n;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int s;
    cout << "Enter the Sum to find the subarray\n";
    cin >> s;

    int st = 0, ed = 0, curr = 1;
    while (st < n)
    {
        while (ed < n && curr + array[ed] < s)
        {
            cout << array[ed] << "\n";
            cout << curr << "\n";
            curr += array[ed];
            ed = ed + 1;
        }
        if (curr == s)
        {
            cout << st << ed;
            return 0;
        }
        curr = 1;
        st = st + 1;
        ed = st;
    }

    return 0;
}
