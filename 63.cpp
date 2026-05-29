#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minElement(vector<int>& nums) {
       ios_base::sync_with_stdio(false);
       cin.tie(nullptr);
       cout.tie(nullptr); 
        int min = nums[0];
        for (int i : nums) {
            int sum = 0;
            while (i > 0) {
                sum += i % 10;
                i /= 10;
            }
            if (sum < min) {
                min = sum;
            }
        }
        return min;
    }
};