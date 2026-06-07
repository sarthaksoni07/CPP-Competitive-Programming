#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        vector<int> max;
        int left = 0;
        multiset<int> curr;
        for (int right = 0; right < nums.size(); right++) {
            curr.insert(nums[right]);
            if (right - left + 1 > k) {
                curr.erase(curr.find(nums[left]));// removes forward mving left element from the sliding window
                left++;
            }
            if (right >= k - 1) {// makes sure element initiall are not pushed 
                max.push_back(*curr.rbegin());// finds the max of the slding window and pushes in the resulting array
            }
        }
        return max;
    }
};