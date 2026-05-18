#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i > 0 && (nums[i] == nums[i - 1]))
            {
                continue;// in the sorted array, check if the next element is same as the one before
            }
            int forw = i + 1;
            int backw = nums.size() - 1;
            while (forw < backw)
            {
                int sum = nums[i] + nums[forw] + nums[backw];
                if (sum == 0)
                {
                    result.push_back({nums[i], nums[forw], nums[backw]});
                    ++forw;
                    --backw;
                    while (forw < backw && nums[forw] == nums[forw - 1])
                    {
                        ++forw;// check forward duplicate
                    }
                    while (forw < backw && nums[backw] == nums[backw + 1])
                    {
                        --backw;// check backward duplicates 
                    }
                }
                else if (sum < 0)
                {
                    forw++;
                }
                else if (sum > 0)
                {
                    backw--;
                }
            }
        }
        return result;
    }
};
// Sort nums.

// Loop through with index i.

// Set left = i + 1 and right = nums.length - 1.

// Check the sum. Too small? Move left right. Too big? Move right left. Perfect
// match? Save it and skip duplicates!