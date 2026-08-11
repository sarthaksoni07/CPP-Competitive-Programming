#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long bowlSubarrays(vector<int>& nums) {
        long long result = 0;
        stack<int> s;
        s.push(nums[0]);
        for (int i = 1; i < nums.size(); i++) {
            while (!s.empty() && s.top() < nums[i]) {
                s.pop();
                if (!s.empty()) {
                    result++;
                }
            }
            s.push(nums[i]);
        }
        return result;
    }
};// 3676 count bowl subarrays