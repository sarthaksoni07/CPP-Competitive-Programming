#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int threeSumClosest(vector<int> &nums, int target)
    {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        sort(nums.begin(), nums.end());
        int ctarget = nums[0] + nums[1] + nums[2];
        for (int i = 0; i < nums.size() - 2; i++)
        {
            int left = i + 1;
            int right = nums.size() - 1;
            while (left < right)
            {
                int sum = nums[i] + nums[left] + nums[right];
                if (target == sum)
                {
                    return sum;
                }
                else if (sum < target)
                {
                    if (abs(target - sum) < abs(target - ctarget))
                    {
                        ctarget = sum;
                    }
                    left++;
                }
                else
                {
                    if (abs(target - sum) < abs(target - ctarget))
                    {
                        ctarget = sum;
                    }
                    right--;
                }
            }
        }
        return ctarget;
    }
};