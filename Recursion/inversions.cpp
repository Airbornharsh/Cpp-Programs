#include <iostream>
using namespace std;

int main()
{

    int arr[8] = {3, 5, 6, 9, 1, 2, 7, 8};
    int a = 0, b = 0, count = 0;
    int k = (sizeof(arr) / sizeof(0));
    while (a < k)
    {
        for (int i = a + 1; i < k; i++)
        {
            if (arr[a] > arr[i] && i > a)
            {
                cout << arr[a] << " " << arr[i] << endl;
                count++;
            }
        }
        a++;
    }

    cout << count;
    return 0;
}