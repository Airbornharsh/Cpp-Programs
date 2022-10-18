#include <iostream>
#include <vector>
using namespace std;

// class Solution
// {
// public:
//     int lengthOfLongestSubstring(string s)
//     {
//         vector<char> Compare;
//         vector<char> TempCompare;
//         int MaxLength = 0, location;
//         for (int i = 0; i < s.length(); i++)
//         {
//             if (this->ElementFound(s[i], TempCompare))
//             {
//                 location = this->ReturnRepeatLocation(s[i], TempCompare);
//                 TempCompare.erase(TempCompare.begin(), TempCompare.begin() + location);
//                 // TempCompare.clear();

//             }
//             TempCompare.push_back(s[i]);

//             cout << i;
//             cout << TempCompare.size();
//             cout << Compare.size() << endl;

//             if (TempCompare.size() > Compare.size())
//             {
//                 Compare = TempCompare;
//             }
//             // cout<<MaxLength<<endl;
//         }
//         MaxLength = Compare.size();
//         return MaxLength;
//     }

//     bool ElementFound(char ch, vector<char> temp)
//     {
//         for (int i = 0; i < temp.size(); i++)
//         {
//             if (ch == temp[i])
//             {
//                 return true;
//             }
//         }
//         return false;
//     }

//     int ReturnRepeatLocation(char ch, vector<char> temp)
//     {
//         for (int i = 0; i < temp.size(); i++)
//         {
//             if (ch == temp[i])
//             {
//                 return i;
//             }
//         }
//         return 0;
//     }
// };

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        string Compare;
        string TempCompare;
        int location;
        for (int i = 0; i < s.length(); i++)
        {
            if (this->ElementFound(s[i], TempCompare))
                        {
                location = this->ReturnRepeatLocation(s[i], TempCompare);
                TempCompare = TempCompare.substr(location +1,TempCompare.length() - location - 1);
            }

            TempCompare += s[i];

            if (TempCompare.length() > Compare.length())
            {
                Compare = TempCompare;
            }
        }
        return Compare.length();
    }

    bool ElementFound(char ch, string temp)
    {
        for (int i = 0; i < temp.size(); i++)
        {
            if (ch == temp[i])
            {
                return true;
            }
        }
        return false;
    }

    int ReturnRepeatLocation(char ch, string temp)
    {
        for (int i = 0; i < temp.size(); i++)
        {
            if (ch == temp[i])
            {
                return i;
            }
        }
        return 0;
    }
};

int main()
{
    Solution Some;
    cout << Some.lengthOfLongestSubstring("abcabcbb") << endl;
    // cout << Some.lengthOfLongestSubstring("bbbbb") << endl;
    // cout << Some.lengthOfLongestSubstring("pwwkew") << endl;
    // cout << Some.lengthOfLongestSubstring("dvdf") << endl;
    //cout << Some.lengthOfLongestSubstring("aabaab!bb") << endl;

    return 0;
}
