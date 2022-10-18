#include <iostream>
using namespace std;

int main()
{

    int array[10] = {2, 3, 4, 5, 6, 7, 10, 19, 34, 45};
    int k;
    cout << "Enter the Number which is present as a sum of two element in the array\n";
    cin >> k;
    int st = 0, ed = 9, s = 0;
    while (st != ed)
    {
        s = array[st] + array[ed];
        if (s > k)
        {
            ed--;
        }
        else if (s < k)
        {
            st++;
        }
        else
        {
            break;
        }
    }

    cout << st << " " << ed;

    return 0;
}