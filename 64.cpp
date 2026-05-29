#include<bits/stdc++.h>
using namespace std;
class Solution {

public:
    vector<int> plusOne(vector<int>& digits) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        auto it = digits.end() - 1;
        int last = *it;
        if (last < 9) {
            *it += 1;
        } else {
            while (it >= digits.begin() && *it == 9) {
                *it = 0;
                it--;
            }
            if (it >= digits.begin()) {
                *it += 1;
            } else {
                digits.insert(digits.begin(), 1);
            }
        }
        return digits;
    }
};