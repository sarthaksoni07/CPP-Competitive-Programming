#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> num1(nums.begin(), nums.end());
        for (int ind = 1; ind <= nums.size() + 1; ind++) {
            if (num1.find(ind) == num1.end()) {
                return ind;
            }
        }
        return 1;
    }
};
//first missing positive
// accepted but does not looks optimal