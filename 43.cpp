#include <bits/stdc++.h>
using namespace std;
void solve()
{
    class Solution
    {
    public:
        int maxArea(vector<int> &height)
        {
            int answer = 0;
            for (int i = 0; i < height.size(); i++)
            {
                for (int j = 0; j < height.size(); j++)
                {
                    int diff;
                    int result = 0;
                    if (i == j)
                    {
                        continue;
                    }
                    if (i > j)
                    {
                        diff = i - j;
                    }
                    else if (j > i)
                    {
                        diff = j - i;
                    }
                    if (height[i] > height[j])
                    {
                        result = height[j] * diff;
                    }
                    else if (height[j] > height[i])
                    {
                        result = height[i] * diff;
                    }
                    else if (height[i] == height[j])
                    {
                        result = height[i] * diff;
                    }
                    if (result >= answer)
                    {
                        answer = result;
                    }
                }
            }
            return answer;
        }
    };
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}