#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea = 0;
        int left = 0;
        int right = height.size() - 1;
        while (left < right) {
            int area = 0;
            if (height[left] < height[right]) {
                area = height[left] * (right - left);
                left++;
            } else if (height[right] < height[left]) {
                area = height[right] * (right - left);
                right--;
            } else if (height[right] == height[left]) {
                area = height[right] * (right - left);
                left++;
                right--;
            }
            if (area >= maxArea) {
                maxArea = area;
            }
        }
        return maxArea;
    }
};// container with most water