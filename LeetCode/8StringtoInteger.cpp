#include <iostream>
#include <climits>
#include <string.h>
using namespace std;

class Solution
{
public:
    int myAtoi(string s)
    {
        long int k = 0;
        string check = "";
        bool checkDone = false;
        string number = "";
        // int numberIndex;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != ' ' && s[i] != '+' && s[i] != '-')
            {
                if (s[i] >= '0' && s[i] <= '9')
                {
                    // numberIndex = i;
                    number = "true";
                    break;
                }
                else
                {
                    return 0;
                }
            }
        }
        for (int i = 0; i < s.length(); i++)
        {

            if (s[i] == '-')
            {
                // if (number == "true")
                // {
                //     return 0;
                // }
                if (checkDone == true)
                {
                    return 0;
                }
                check = "negative";
                checkDone = true;
            }
            else if (s[i] == '+')
            {
                // if (number == "true")
                // {
                //     return 0;
                // }
                if (checkDone == true)
                {
                    return 0;
                }
                check = "positive";
                checkDone = true;
            }
        }

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '.')
            {
                break;
            }
            switch (s[i])
            {
            case '0':
                k = k * 10 + 0;
                break;
            case '1':
                k = k * 10 + 1;
                break;

            case '2':
                k = k * 10 + 2;
                break;
            case '3':
                k = k * 10 + 3;
                break;

            case '4':
                k = k * 10 + 4;
                break;
            case '5':
                k = k * 10 + 5;
                break;

            case '6':
                k = k * 10 + 6;
                break;
            case '7':
                k = k * 10 + 7;
                break;

            case '8':
                k = k * 10 + 8;
                break;
            case '9':
                k = k * 10 + 9;
                break;
            }
        }
        if (check == "negative")
        {
            k *= -1;
        }
        if (k > INT_MAX)
        {
            return INT_MAX;
        }
        if (k < INT_MIN)
        {
            return INT_MIN;
        }
        return k;
    }
};

int main()
{
    Solution some;
    cout << some.myAtoi("-42");
    return 0;
}