#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a;
    cout << "Enter a Number\n";
    cin >> a;
    int New = 0, check = a;
    while (a > 0)
    {
        int k = a % 10;
        New = New + pow(k, 3);
        a /= 10;
    }
    if (New == check)
    {
        cout << check << " is a Amstrong Number";
    }
    else
    {
        cout << check << " is not a Amstrong Number";
    }
    return 0;
}