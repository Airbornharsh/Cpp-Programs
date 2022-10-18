#include <iostream>
using namespace std;

int main()
{

    int a;
    cin >> a;
    int i;
    for (i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            cout << "Not A Prime Number";
            break;
        }
    }
    if (i == a)
    {
        cout << "Prime Number";
    }

    return 0;
}