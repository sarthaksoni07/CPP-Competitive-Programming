#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> maxSlidingWindow(vector<int> &nums, int k)
    {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        vector<int> max;
        int left = 0;
        multiset<int> curr;// we use multiset to preserve order of the insertion of the elements. we have the deque aproach, but for not, we have this multiset approach
        for (int right = 0; right < nums.size(); right++)
        {
            curr.insert(nums[right]);
            if (right - left + 1 > k)
            {
                curr.erase(curr.find(nums[left]));
                left++;// ensures windows remains of size k
            }
            if (right >= k - 1)
            {
                max.push_back(*curr.rbegin());// ensure first elements withing the k are not pushed into the max stack, it only pushed the max eleement in the window size k ;  

            }
        }
        return max;
    }
};