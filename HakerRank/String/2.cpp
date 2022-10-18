#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

int ToNum(char str)
{
    if (str == '0')
    {
        return 0;
    }
    else if (str == '1')
    {
        return 1;
    }
    else if (str == '2')
    {
        return 2;
    }
    else if (str == '3')
    {
        return 3;
    }
    else if (str == '4')
    {
        return 4;
    }
    else if (str == '5')
    {
        return 5;
    }
    else if (str == '6')
    {
        return 6;
    }
    else if (str == '7')
    {
        return 7;
    }
    else if (str == '8')
    {
        return 8;
    }
    else if (str == '9')
    {
        return 9;
    }
    return 0;
}

vector<int> parseInts(string str)
{
    vector<int> Int;

    int temp = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ',')
        {
            Int.push_back(temp);
            temp = 0;
        }
        temp = temp * 10 + ToNum(str[i]);
    }
    Int.push_back(temp);
    return Int;
}

int main()
{
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++)
    {

        // cout << integers[i] << "\n";
    }

    return 0;
}