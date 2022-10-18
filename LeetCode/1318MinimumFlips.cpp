#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

class Solution
{
public:
    int minFlips(int a, int b, int c)
    {
        vector<int> aRBinary = toBinary(a);
        vector<int> bRBinary = toBinary(b);
        vector<int> cRBinary = toBinary(c);
        int flip = 0;

        for (int i = 0; i < cRBinary.size(); i++)
        {
            cout << " " << aRBinary[i] << " " << bRBinary[i] << " " << cRBinary[i] << " ";
            if (aRBinary[i] + bRBinary[i] == 0)
            {
                if (cRBinary[i] == 1)
                {
                    cout << "step1";
                    flip++;
                }
            }
            else if (aRBinary[i] + bRBinary[i] == 1)
            {
                if (cRBinary[i] == 0)
                {
                    cout << "step2";
                    flip++;
                }
            }
            else if (aRBinary[i] + bRBinary[i] == 2)
            {
                if (cRBinary[i] == 0)
                {
                    cout << "step4";
                    flip += 2;
                }
            }
            cout << i << endl;
        }
        cout << flip;
        return flip;
    }

    vector<int> toBinary(int n)
    {
        vector<int> newN = {0, 0, 0, 0, 0, 0, 0, 0, 0};
        int i = 0;
        while (n > 0)
        {
            if (n == 1)
            {
                newN[i] = 1;
                return newN;
            }
            if (n % 2 == 0)
            {
                newN[i] = 0;
            }
            else
            {
                newN[i] = 1;
            }
            n = n / 2;
            i++;
        }
        return newN;
    }

    vector<int> reverse(vector<int> n)
    {
        vector<int> newN;
        for (int i = n.size() - 1; i >= 0; i--)
        {
            newN.push_back(n[i]);
        }
        return newN;
    }

    int toDecimal(vector<int> n)
    {
        int size = n.size() - 1;
        int i = 0;
        int sum = 0;
        while (size > -1)
        {
            sum += n[i] * pow(2, size);
            i++;
            size--;
        }
        return sum;
    }
};

int main()
{
    Solution a;
    a.minFlips(6, 783, 863);
}