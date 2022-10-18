#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;
    cin >> target;
    int sum = 0, j = 0, a = 0, b = 0;
    while (j < n && sum != target)
    {

        for (int i = 0; i < n; i++)
        {
            sum = arr[j] + arr[i];
            if (sum == target)
            {
                a = j;
                b = i;
                break;
            }
        }

        j++;
    }
    int out[2] = {a, b};
    for (int i = 0; i < 2; i++)
    {
        cout << out[i] << " ";
    }

    return 0; 
}

