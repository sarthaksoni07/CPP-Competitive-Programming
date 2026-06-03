#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestPalindrome(string s) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        string longest = "";
        int i = 0;
        while (i < s.length()) {
            int left = i;
            int right = i;
            while (left >= 0 && s[left] == s[i]) {
                left--;
            }
            while (right < s.length() && s[right] == s[i]) {
                right++;
            }
            int rep = right;
            while (left >= 0 && right < s.length() && s[right] == s[left]) {
                left--;
                right++;
            }
            if (longest.length() < right - left - 1) {
                longest = s.substr(left + 1, right - left - 1);
            }
            i = rep;
        }
        return longest;
    }
};
//longest pallindromic substring