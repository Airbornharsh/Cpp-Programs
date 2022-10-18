#include <iostream>
using namespace std;

int main()
{
    int y;

    cin >> y;

    double x[y][4];

    for (int i = 0; i < y; i++)
    {
        cin >> x[i][0];
        cin >> x[i][1];
        cin >> x[i][2];
        cin >> x[i][3];

        cout << x[i][0] / x[i][2]<<endl;

        if (x[i][0] / x[i][2] > x[i][1] / x[i][3])
            cout << "Chefina" << endl;
        else if (x[i][0] / x[i][3] < x[i][1] / x[i][3])
            cout << "Chef" << endl;
        else
            cout << "Both" << endl;
    }
    return 0;
}
