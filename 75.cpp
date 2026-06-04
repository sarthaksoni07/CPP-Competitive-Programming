#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int characterReplacement(string s, int k)
    {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        // we will use a character array to keep track of the most visible element
        vector<int> freq(26);
        int left = 0;
        int max_size = 0;
        int mfreq = 0;
        for (int right = 0; right < s.length(); right++)
        {
            freq[s[right] - 'A']++;//incrementing the alphabet, 0 for a, 1 for b...25 for z
            if (freq[s[right] - 'A'] > mfreq)
            {
                mfreq = freq[s[right] - 'A']; // will keep track of which element has been seen most times
            }
            if ((right - left + 1) - mfreq > k)// most freq element subtracted from total length, if greater than k elements, we reduce the window slide
            {
                freq[s[left] - 'A']--;
                left++;
            }
            max_size = max(right - left + 1, max_size);// keep track of the biggest window slide encountered.
        }
        return max_size;
    }
};
// longest rpeating character replacement