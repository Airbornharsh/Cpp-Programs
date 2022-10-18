#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    string largestGoodInteger(string num)
    {
        vector<string> out;
        char preValue = num[0], currValue = num[1], nextValue = num[2];

        for (int i = 3; i < num.length(); i++)
        {
            if (preValue == currValue && currValue == nextValue && preValue == nextValue)
            {
                string k;
                k += preValue;
                k += preValue;
                k += preValue;
                out.push_back(k);
            }
            preValue = currValue;
            currValue = nextValue;
            nextValue = num[i];
        }

        string m = out[0];
        for (int i = 0; i < out.size(); i++)
        {
            if (m < out[i])
            {
                m = out[i];
            }
        }
        if(out.size() > 0){
            return m;
        }else{
            return "";
        }
    }
};

int main()
{
    Solution some;
    cout << some.largestGoodInteger("423523338");
}