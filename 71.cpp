#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> str;
        int left = 0; 
        int max_size= 0; 
        for(int right = 0 ; right < s.length();++right){
            while(str.find(s[right])!=str.end()){
                str.erase(s[left]);
                left++;
            }
            str.insert(s[right]);
            if(right-left+1>max_size){
                max_size=right-left+1;
            }
        }
        return max_size;
    }
};

// long of longest substr withotu repetition    