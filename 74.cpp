#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() <= 1)
            return 0;
        int max = 0;
        int i = 0;
        while (i < prices.size()) {
            int right = i;
            while (right < prices.size() && prices[right] >= prices[i]) {
                if (prices[right] - prices[i] > max) {
                    max = prices[right] - prices[i];
                }
                right++;
            }
            while (i < prices.size() -1&& prices[i] == prices[i + 1]) {
                i++;
            }
            i++;
        }
        return max;
    }
};

// best time to buy and sell stock 