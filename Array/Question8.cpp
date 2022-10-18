#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter the rows and Column of a martrix\n";
    cin >> a >> b;

    int array[a][b];

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> array[i][j];
        }
        cout << " ";
    }

    int find;
    cout << "Enter the Number to be found in the array\n";
    cin >> find;

    int i = 0, j = b - 1;
    while (find != array[i][j] && i < a && j >= 0)
    {
        if (array[i][j] > find)
        {
            j--;
        }
        else
        {
            i++;
        }

        // if (arr[i][j + 1] > find || j == b - 1)
        // {
        //     if (arr[i + 1][j] > find || i == a - 1)
        //     {
        //         if (arr[i + 1][j - 1] > find)
        //         {
        //             i++;
        //             j = j - 2;
        //         }
        //         else
        //         {
        //             i++;
        //             j--;
        //         }
        //     }
        //     else
        //     {
        //         i++;
        //     }
        // }
        // else
        // {
        //     if (arr[i + 1][j] > find || i == a - 1)
        //     {
        //         if (arr[i + 1][j - 1] > find && j == 0)
        //         {
        //             i++;
        //             j = j - 2;
        //         }
        //         else
        //         {
        //             i++;
        //             j--;
        //         }
        //     }
        //     else
        //     {
        //         i++;
        //     }
        //     j++;
        // }
    }

    if (array[i][j] == find)
    {
        cout << "Found\n";
        cout << "Row is " << i + 1 << " and Column is " << j + 1;
    }
    else
    {
        cout << "Not Found";
    }

    return 0;
}