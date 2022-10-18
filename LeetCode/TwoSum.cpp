#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size() - 1; i++)
        {
            for (int j = i+1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    vector<int> some={i,j};
                    return some;
                }
            }
        }
        vector<int> ok={};
        return ok;
    }
};

int main()
{
    Solution Some;
    vector<int> a = {3,2,4};
    vector<int> ans = Some.twoSum(a, 7);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
    }

    return 0;
}