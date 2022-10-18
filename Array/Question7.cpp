#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter the rows and Column of a martrix\n";
    cin >> a >> b;

    while (a != b)
    {
        cout << "Enter the Same No of Rows and column For Transposing\n";
        cin >> a >> b;
    }

    int arr[a][b];

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> arr[i][j];
        }
        cout << " ";
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = i; j < b; j++)
        {
            int tm = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = tm;
        }
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}