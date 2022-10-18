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

        x[i][0] / x[i][3] == x[i][1] / x[i][3] ? cout << "Both" << endl : x[i][0] / x[i][2] > x[i][1] / x[i][3] ? cout << "Chefina"<<endl
                                                                                                                : cout << "Chef"<<endl;
    }

    return 0;
}
