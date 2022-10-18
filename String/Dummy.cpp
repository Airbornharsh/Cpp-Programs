#include <iostream>
using namespace std;

int main()
{
    int y;
    cin >> y;

    string x[y];
    string ans[y];

    for (int i = 0; i < y; i++)
    {
        int k;
        cin >> k;

        string l[k];
        x[i] = "";

        for (int j = 0; j < k; j++)
        {
            cin >> l[j];
            x[i] += l[j];
        }

        for (int i = 0; i < y; i++)
        {
            int m = 0, p = 0;
            string num = "";
            for (int j = 0; j < x[i].length(); j++)
            {

                if (p)
                {
                    break;
                }

                if (j == x[i].length() - j - 1 || j == x[i].length() - j - 1 - 1 || j - 1 == x[i].length() - j - 1)
                {
                    p = 1;
                }

                if (m % 2 == 0)
                {
                    if (x[i][j] == '1')
                    {
                        num = num + '1';
                    }
                    else if (x[i][j] == '0')
                    {
                        num = '0' + num;
                    }
                }
                else
                {
                    if (x[i][x[i].length() - j - 1] == '1')
                    {
                        num = '1' + num;
                    }
                    else if (x[i][x[i].length() - j - 1] == '0')
                    {
                        num = num + '0';
                    }
                }
                m++;
            }
            ans[i] = num;
        }
    }

    for (int i = 0; i < y; i++)
    {
        cout << ans[i] << endl;
    }

    return 0;
}
