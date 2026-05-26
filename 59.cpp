#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty())return 0;
        int first =0;
        int scan = first+1;
        while(scan<nums.size()){
            if(nums[scan]!=nums[first]){
                 first++;
                 nums[first]=nums[scan];
            }
            scan++;
        }
        return first+1;
    }
};
// remove duplicates in an sorted array 