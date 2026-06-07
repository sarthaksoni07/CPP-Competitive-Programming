#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool checkInclusion(string s1, string s2)
    {
        vector<int> str1(26); // we use 2 character array to store the frequencies of alphabets
        vector<int> str2(26); // use another to match those freuqency, it it does, then return true, else false
        for (int i = 0; i < s1.length(); i++)
        {
            str1[s1[i] - 'a']++; // for str1, store the frequency table;
        }
        int left = 0, right = 0;
        while (right < s2.length())
        {
            str2[s2[right] - 'a']++; // increase the frequncy of element just came in our way
            if (right - left + 1 > s1.length())
            {                           // keep the size of sliding window the same, we wil check s1.length characters at one time
                str2[s2[left] - 'a']--; // if size is bigger, remove the last element, and reduce that number's frequency
                ++left;
            }
            if (str1 == str2)
            { // if both the frequencies match, then return true
                return true;
            }
            right++;
        }
        return false;
    }
};
// permutation in a string