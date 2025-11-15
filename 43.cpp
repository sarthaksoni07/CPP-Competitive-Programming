class Solution {
public:
    int maxArea(vector<int>& height) {
        int answer = 0;
        int result;
        int left = 0;
        int right = height.size() - 1;
        while (left < right) {
            result = (right - left) * min(height[left], height[right]);
            if (result > answer) {
                answer = result;
            }
            if (height[left] > height[right]) {
                right--;
            } else {
                left++;
            }
        }
        return answer;
    }
};