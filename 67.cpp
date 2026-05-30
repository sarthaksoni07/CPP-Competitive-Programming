#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>result;
        for(int i = 0; i < nums.size()/2;i++){
            result.push_back(nums[i]);
            result.push_back(nums[i+n]);
        }
        return result;
    }
};
// shuffle the array 
// quest array 1, question 2