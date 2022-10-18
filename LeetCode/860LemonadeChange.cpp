#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool lemonadeChange(vector<int> &bills)
    {
        vector<vector<int>> cashType;
        int k = 0;

        for (int i = 0; i < bills.size(); i++)
        {
            int m = 0;

            if (k == 0)
            {
                vector<int> temp = {bills[i], 1};
                cashType.push_back(temp);
                k = 1;
                continue;
            }
            for (int j = 0; j < cashType.size(); j++)
            {
                if (cashType[j][0] == bills[i])
                {
                    cashType[j][1]++;
                    m = 1;
                }
            }

            if (m == 0)
            {
                vector<int> temp = {bills[i], 1};
                cashType.push_back(temp);
            }
        }

        this->DisplayElements(cashType);

        return false;
    }

    void DisplayElements(vector<vector<int>> &cashType)
    {
        for (int i = 0; i < cashType.size(); i++)
        {
            cout << cashType[i][0] << " " << cashType[i][1] << endl;
        }
    }
};

int main()
{
    Solution a;
    vector<int> temp = {5, 5, 10, 20};
    a.lemonadeChange(temp);
}