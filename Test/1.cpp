#include <iostream>
using namespace std;

int main()
{
    int n;
     cin >> n;
    int arr[n];

    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        bool check = false;
        for (int k = i + 1; k < n; k++)
        {
            if (arr[i] < arr[k])
            {
                check = true;
            }
        }

        if (check == false)
        {
            cout << arr[i] << endl;
        }
    }
    return 0;
}
