#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isPalindrome(string s)
    {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        int forw = 0;
        int backw = s.length() - 1;
        while (forw < backw)
        {
            while (forw < backw && !isalnum(s[forw]))
            {
                forw++;
            }
            while (forw < backw && !isalnum(s[backw]))
            {
                backw--;
            }
            if (tolower(s[forw]) != tolower(s[backw]))
            {
                return false;
            }
            forw++;
            backw--;
        }
        return true;
    }
};
// checks if palindrome 