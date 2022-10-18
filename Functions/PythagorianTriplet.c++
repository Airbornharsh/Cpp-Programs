#include <iostream>
#include <math.h>
using namespace std;

bool Pythagorian(int a, int b, int c)
{
    if (pow(a, 2) == (pow(b, 2) + pow(c, 2)))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    int a, b, c;
    cout << "Enter Three Numbers";
    cin >> a >> b >> c;

    if (Pythagorian(a, b, c) == true || Pythagorian(b, c, a) == true || Pythagorian(c, a, b) == true)
    {
        cout << "Numbers are Pythagorian Triplet";
    }
    else
    {
        cout << "Numbers are not Pythagorian Triplet";
    }
    return 0;
}