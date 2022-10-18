#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter a Number\n";
    cin >> a;
    int New = 0;
    while (a > 0)
    {
        int k = a % 10;
        New = New * 10 + k;

        a /= 10;
    }

    cout << "Reversed Number is " << New;

    return 0;
}