#include<bits/stdc++.h>
using namespace std;
class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        unordered_map<int, int> m;
        for (int n : nums) {
            m[n]++;
        }
        vector<vector<int>> v(nums.size() + 1);
        for (auto it : m) {
            v[it.second].push_back(it.first);
        }
        vector<int> result;
        for (int i = nums.size(); i >= 0; i--) {
            if (v[i].empty()) {
                continue;
            } else {
                for (int j : v[i]) {
                    result.push_back(j);
                    if (result.size() == k) {
                        return result;
                    }
                }
            }
        }

        return result;
    }
};
