#include <iostream>
using namespace std;

int main()
{

    int array[10] = {93, 4, 43, 64, 23, 5, 6, 8, 29, 69}, n;
    cout << "Enter a Number Which y0u want to Search\n";
    cin >> n;
    int check = 0;
    for (int i = 0; i < 10; i++) 
    {
        if (array[i] == n)
        {
            cout << "Number Found at " << i + 1;
            check = 1;
        }
    }

    if (check == 0)
    {
        cout << "Number Not Found";
    }

    return 0;
}