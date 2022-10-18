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

    int sum = 0, maxsum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                sum += array[k];
            }
            maxsum = max(sum, maxsum);
            sum = 0;
        }
    }

    cout << maxsum;

    return 0;
}