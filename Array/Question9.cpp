#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the length of the word\n";
    cin >> n;

    char array[n + 1];
    cin >> array;

    int i = 0;
    while (i < (n / 2))
    {
        if (array[i] != array[n - 1 - i])
        {
            cout << "Word is not a Palindrome Word\n";
            return 0;
        }

        i++;
    }

    if (i == (n / 2))
    {
        cout << "Word is Palindrome Word\n";
    }

    return 0;
}