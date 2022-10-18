#include <iostream>
#include <bits/c++config.h>
using namespace std;

int main()
{

    int n;
    cout << "Enter the length of the Sentence\n";
    cin >> n;
    cin.ignore();
    char array[n + 1];
    cout << "Enter the Sentence\n";
    cin.getline(array, n);
    cin.ignore();
    int length = 0, maxlength = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (array[i] != ' ' || array[i] != '\0')
        {
            length = length + 1;
        }
        else
        {
            maxlength = max(maxlength, length);
            length = 0;
        }

        if (array[i] == '\0')
        {
            break;
        }
    }

    cout << "The length of the Longest word is " << maxlength;

    return 0;
}