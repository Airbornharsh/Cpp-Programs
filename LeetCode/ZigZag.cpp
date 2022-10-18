#include <iostream>
#include <vector>
using namespace std;

// class Solution
// {
// public:
//     void convert(string s, int numRows)
//     {
//         int b = numRows;
//         vector<int> add;
//         vector<int> temp;
//         int diff = (numRows - 1) * 2;

//         for (int i = 0; i < s.length(); i++)
//         {
//             if (i % diff == 0)
//             {
//                 add.push_back(i);
//                 temp.push_back(i);
//             }
//         }
//         b--;
//         int pre, next;
//         while (b > 0)
//         {
//             for (int i = 0; i < temp.size(); i++)
//             {
//                 if (temp[i] > 0 && temp[i] < s.length() - 1)
//                 {
//                     pre = temp[i] - 1;
//                     next = temp[i] + 1;
//                     if (!Check(add, pre))
//                     {
//                         add.push_back(pre);
//                         temp.push_back(pre);
//                     }
//                     if (!Check(add, next))
//                     {
//                         add.push_back(next);
//                         temp.push_back(next);
//                     }
//                 }
//                 else if (temp[i] == s.length() - 1)
//                 {
//                     pre = i - 1;
//                     if (!Check(add, pre))
//                     {
//                         add.push_back(pre);
//                         temp.push_back(pre);
//                     }
//                 }
//                 else if (temp[i] == 0)
//                 {
//                     next = i + 1;
//                     if (!Check(add, next))
//                     {
//                         add.push_back(next);
//                         temp.push_back(next);
//                     }
//                 }
//             }
//             b--;
//         }

//         Printall(add, s);
//     }

//     void Printall(vector<int> add, string s)
//     {
//         string check = "even";
//         for (int i = 0; i < add.size(); i++)
//         {
//             if (add[i + 1] < add[i])
//             {
//                 check = "odd";
//             }
//             if (check == "even")
//             {
//                 cout << s[add[i]];
//                 Spaces((add[i + 1] - add[i] - 2)/2);
//             }
//             else if (check == "odd")
//             {
//                 cout <<s[add[i]]<< endl;
//                 check = "even";
//             }
//         }
//     }

//     void Spaces(int n)
//     {
//         while (n > 0)
//         {
//             cout << " ";
//             n--;
//         }
//     }

//     bool Check(vector<int> add, int n)
//     {
//         for (int i = 0; i < add.size(); i++)
//         {
//             if (add[i] == n)
//             {
//                 return true;
//             }
//         }

//         return false;
//     }
// };

class Solution
{
public:
    string convert(string s, int numRows)
    {
        string output;
        int b = numRows;
        vector<int> add;
        vector<int> temp;
        int diff = (numRows - 1) * 2;

        for (int i = 0; i < s.length(); i++)
        {
            if (i == 0)
            {
                add.push_back(i);
                temp.push_back(i);
            }else if(i % diff == 0){
                add.push_back(i);
                temp.push_back(i);
            }
        }
        b--;
        int pre, next;
        while (b > 0)
        {
            for (int i = 0; i < temp.size(); i++)
            {
                if (temp[i] > 0 && temp[i] < s.length() - 1)
                {
                    pre = temp[i] - 1;
                    next = temp[i] + 1;
                    if (!Check(add, pre))
                    {
                        add.push_back(pre);
                        temp.push_back(pre);
                    }
                    if (!Check(add, next))
                    {
                        add.push_back(next);
                        temp.push_back(next);
                    }
                }
                else if (temp[i] == s.length() - 1)
                {
                    pre = i - 1;
                    if (!Check(add, pre))
                    {
                        add.push_back(pre);
                        temp.push_back(pre);
                    }
                }
                else if (temp[i] == 0)
                {
                    next = i + 1;
                    if (!Check(add, next))
                    {
                        add.push_back(next);
                        temp.push_back(next);
                    }
                }
            }
            b--;
        }
        for (int i = 0; i < add.size(); i++)
        {
            output = output + s[add[i]];
        }
        cout << output;
        return output;
    }

    bool Check(vector<int> add, int n)
    {
        for (int i = 0; i < add.size(); i++)
        {
            if (add[i] == n)
            {
                return true;
            }
        }

        return false;
    }
};

int main()
{
    Solution some;
    some.convert("A", 1);
    return 0;
}