// USING FOR LOOP

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a, SUM = 0;
//     cin >> a;

//     for (int i = 1; i <= a; i ++)
//     {
//         SUM += i;
//     }

//     cout << "Sum is " << SUM;

//     return 0;
// }

// USING WHILE LOOP

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a, SUM = 0;
//     cin >> a;
//     while (a > 0)
//     {
//         SUM += a;
//         a--;
//     }

//     cout << "SUM is " << SUM;

//     return 0;
// }

// USING DO WHILE LOOP

#include <iostream>
using namespace std;

int main()
{
    int a, SUM = 0;
    cin >> a;
    do
    {
        SUM += a;
        a--;
    } while (a > 0);

    cout << "SUM is " << SUM;

    return 0;
}