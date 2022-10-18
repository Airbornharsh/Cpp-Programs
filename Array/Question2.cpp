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

    int k = 0, dif1 = array[1] - array[0], maxNo = 0;
    ;
    while (k < n)
    {
        if (k > 0 && k < n - 1 && array[k] > maxNo && array[k] > array[k + 1])
        {
            maxNo = max(maxNo, array[k]);
            cout << k << " ";
            k++;
        }
        else if (k == 0 && array[0] > array[1])
        {
            maxNo = array[0];
            cout << k << " ";
            k++;
        }
        else if (k == n - 1 && array[n - 1] > array[n - 2] && array[n - 1] > maxNo)
        {
            cout << k << " ";
        }

        k++;
    }
    return 0;
}