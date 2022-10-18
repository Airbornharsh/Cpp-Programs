#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    int arr[7] = {2, 56, 8, 7, 89, 1, 9};
    vector<pair<int, int>> a;

    int k = sizeof(arr) / sizeof(arr[0]);
    cout << k;
    for (int i = 0; i < k; i++)
    {
        a.push_back(make_pair(arr[i], i));
    }

    sort(a.begin(), a.end());
    for (int i = 0; i < k; i++)
    {
        arr[a[i].second] = i;
    }
    for (int i = 0; i < k; i++)
    {
        cout << arr[i] << " " << i << endl;
    }

    return 0;
}