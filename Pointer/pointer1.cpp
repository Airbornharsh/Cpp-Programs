#include <iostream>
using namespace std;

int main()
{

    int a[5] = {4, 3, 74, 75, 5};
    int *pt;
    pt = a;

    for (int i = 0; i < 5; i++)
    {
        cout << *(a +i);
    }

    return 0;
}