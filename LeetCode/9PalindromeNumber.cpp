#include <iostream>
using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
        {
            return false;
        }
        string xs = to_string(x), xfinal = "";
        for (int i = xs.length() - 1; i >= 0; i--)
        {
            xfinal += xs[i];
        }

        if (xs == xfinal)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    Solution s;
    cout << s.isPalindrome(-9999999999121);
    return 0;
}