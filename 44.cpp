class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
                int size = nums.size();
        int flag = 0;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < size - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                flag++;
            }
        }
        if (flag != 0) {
            return true;
        } else {
            return false;
        }
    }
};