#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        if (nums.empty())
            return 0;
        int first = 0;
        for (int scan = 0; scan < nums.size(); scan++) {
            if (nums[scan] != val) {
                nums[first] = nums[scan];
                first++;
            }
        }
        return first;
    }
};
//remove element