#include <iostream>
#include <cstring>
using namespace std;

class Solution
{
public:
    string longestPalindrome(string s)
    {
        string NewS = s;
        string CurrentS;
        string LatestS;
        for (int i = 0; i < s.length(); i++)
        {
            if (s.length() == 1)
            {
                LatestS = s;
                break;
            }
            for (int j = s.length() - 1; j > i; j--)
            {
                if (NewS[i] == NewS[j])
                {
                    CurrentS += NewS[i];
                }
            }
        }
        //LatestS = CurrentS;
        LatestS = CurrentS + Reverse(CurrentS);
        if (CurrentS == "")
        {
            LatestS = s[0];
            return LatestS;
        }
        if (strstr(s.c_str(), LatestS.c_str()))
        {
            return LatestS;
        }
        else
        {
            int k = LatestS.length() / 2;
            LatestS = LatestS.substr(0, k) + LatestS.substr(k + 1, LatestS.length() - k);
        }

        return LatestS;
    }

    string Reverse(string S)
    {
        int n = S.length();
        string New;
        while (n > 0)
        {
            New += S[n - 1];
            n--;
        }
        return New;
    }
};

int main()
{
    Solution some;
    cout << some.longestPalindrome("bcccm");
}