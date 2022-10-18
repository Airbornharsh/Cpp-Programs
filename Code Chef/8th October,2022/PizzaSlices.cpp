#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int y;

    cin >> y;
    double x[y][2];
    int i;

    for (i = 0; i < y; i++)
    {
        cin >> x[i][0];
        cin >> x[i][1];

        double temp = (x[i][0] * x[i][1]) / 4;

        cout << ceil(temp) << endl;
    }

    return 0;
}
