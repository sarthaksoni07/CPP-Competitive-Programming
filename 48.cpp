//product of array except self
#include <bits/stdc++.h>
using namespace std;
 
class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        vector <int> result(nums.size(),1);
        int product = 1;
        for (int i = 0; i < nums.size();i++){
            result[i]=product;
            product*=nums[i];
        }
        product = 1;
        for(int i = nums.size()-1;i>=0;i--){
            result[i]*=product;
            product*=nums[i];
        }
        return result;
    }
};
