#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        stack<int> result;
        for (string& s : tokens) {
            if (s == "+" || s == "-" || s == "*" || s == "/") {
                int first = result.top();
                result.pop();
                int second = result.top();
                result.pop();
                if (s == "+")
                    result.push(first + second);
                else if (s == "-")
                    result.push(second - first);
                else if (s == "*")
                    result.push(second * first);
                else if (s == "/")
                    result.push(second / first);
            } else {
                result.push(stoi(s));
            }
        }
        return result.top();
    }
};

// reverse polish notation