#include<bits/stdc++.h>
using namespace std;
class Solution {

public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int, int> table;
        for (int i : nums) {
            table[i]++;
        }
        for (auto it : table) {
            if (it.second == nums.size() / 2) {
                return it.first;
            }
        }
        return {};
    }
};
// N-Repeated Element in Size 2N Array
