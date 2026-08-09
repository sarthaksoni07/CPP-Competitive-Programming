//  daily temperatures
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> dailyTemperatures(vector<int> &temperatures)
    {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        stack<int> index;
        vector<int> result(temperatures.size(), 0);
        for (int i = 0; i < temperatures.size(); i++)
        {
            while (!index.empty() && temperatures[index.top()] < temperatures[i])
            {
                result[index.top()] = i - index.top();
                // since result is already pre allocated, we use the index, if the temp[i] is greater than the index.top, then for the position of index.top, make it i-index.top
                index.pop();
            }
            index.push(i);
        }
        return result;
    }
};
// for revision purpuse