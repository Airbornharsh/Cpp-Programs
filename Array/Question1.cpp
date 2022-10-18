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

    int k = 1, dif1 = array[1] - array[0], dif2, length = 2, maxlength = 2;
    while (k < n - 1)
    {
        dif2 = array[k + 1] - array[k];

        if (dif1 == dif2)
        {
            length += 1;
        }
        else
        {
            maxlength = max(maxlength, length);
            length = 2;
        }
        dif1 = dif2;
        k++;
    }
    cout << maxlength;
    return 0;
}