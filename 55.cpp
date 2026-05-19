#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int trap(vector<int>& height) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        int water = 0;
        // smaller height - empty space == number of blocks water
        int left = 0;
        int left_max = 0;
        int right = height.size() - 1;
        int right_max = 0;
        while (left < right) {
            if (height[left] > left_max) {
                left_max = height[left];
            }
            if (height[right] > right_max) {
                right_max = height[right];
            }
            if (left_max <= right_max) {
                water += left_max - height[left];
                left++;
            } else {
                water += right_max - height[right];
                right--;
            }
        }
        return water;
    }
};