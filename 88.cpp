#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int longestValidParentheses(string s)
    {
        if (s.length() < 2)
        {
            return 0;
        }
        stack<int> index;
        int lmax = 0;
        index.push(-1);
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
            {
                index.push(i);
            }
            if (s[i] == ')')
            {
                index.pop();
                if (index.empty())
                {
                    index.push(i);
                }
                else
                {
                    lmax = max(lmax, i - index.top());
                }
            }
        }
        return lmax;
    }
}; // problem 32 , longes valid parenthesis