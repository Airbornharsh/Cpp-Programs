#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> median;
        int i = 0, j = 0;
        while (i < nums1.size() || j < nums2.size())
        {
            if (nums1[i] < nums2[j])
            {
                median.push_back(nums1[i]);
                i++;
            }
            else
            {
                median.push_back(nums2[j]);
                j++;
            }
        }

        double medianNo = 0;

        if (median.size() % 2 == 0)
        {
            medianNo = (median[median.size() / 2] + median[(median.size() / 2) - 1]) / 2;
        }
        else
        {
            medianNo = (median[(median.size() - 1) / 2]);
        }
        return medianNo;
    }

    int BigVector(vector<int> &nums1, vector<int> &nums2)
    {
        if (nums1.size() > nums2.size())
        {
            return nums1.size();
        }
        else
        {
            return nums2.size();
        }
    }
};

int main()
{
    Solution Some;
    vector<int> nums1 = {1, 2};
    vector<int> nums2 = {3,4};
    cout << Some.findMedianSortedArrays(nums1, nums2);


    return 0;
}
