#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> index;
        vector<int> result(temperatures.size(), 0);
        for (int i = 0; i < temperatures.size(); i++) {

            while (!index.empty() &&
                   temperatures[index.top()] < temperatures[i]) {
                result[index.top()] = i - index.top();
                index.pop();
            }

            index.push(i);
        }
        return result;
    }
};
// monotonics stakc, where we store the indeces of the element, compare them to current index element, and use that to calculate the answer using the indexes.