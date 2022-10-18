#include <iostream>
using namespace std;

int natural(int a)
{
    return (a * (a + 1) / 2);
}

int main()
{
    // int n, sum = 0;
    // cin >> n;

    // cout << "Sum of Natural Number is " << natural(n);
    // return 0;

    int i = 5;
    int a = --i + ++i - i-- + --i;
    cout << a;
}