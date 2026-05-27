#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int left = 0;
        int right = nums.size() - 1;
        int first = -1;
        int last = -1;
        while (left <= right)
        {
            int middle = left + (right - left) / 2;
            if (target == nums[middle])
            {
                first = middle;
                right = middle - 1;
            }
            else if (target < nums[middle])
            {
                right = middle - 1;
            }
            else if (target > nums[middle])
            {
                left = middle + 1;
            }
        }
        if (first == -1)
        {
            return {-1, -1};
        }
        left = 0;
        right = nums.size() - 1;
        while (left <= right)
        {
            int middle = left + (right - left) / 2;
            if (target == nums[middle])
            {
                last = middle;
                left = middle + 1;
            }
            else if (target < nums[middle])
            {
                right = middle - 1;
            }
            else if (target > nums[middle])
            {
                left = middle + 1;
            }
        }
        return {first, last};
    }
}; // first and last occurences in sorted array.
