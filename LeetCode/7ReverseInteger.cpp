#include <iostream>
#include <math.h>
using namespace std;

class Solution
{
public:
    int reverse(int x)
    {
        if (x > 1534236468)
        {
            return 0;
        }
        if (x < -pow(2, 31) && x > pow(2, 31) - 1)
        {
            return 0;
        }
        long int k = 0;
        string check = "positive";
        if (x < 0)
        {
            x *= -1;
            check = "negative";
        }
        while (x > 0)
        {
            k = k * 10 + x % 10;
            x /= 10;
        }
        if (check == "negative")
        {
            k *= -1;
        }
        return k;
    }
};

int main()
{
    Solution some;
    cout << some.reverse(1534236469);

    return 0;
}