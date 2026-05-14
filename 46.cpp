// group anagrams
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> m;
        for( string word :strs){
            string s = word;
            sort(s.begin(), s.end());
            m[s].push_back(word);
        }
        vector<vector<string>> result;
        for (auto it : m){
            result.push_back(it.second);
        }
        return result;
    }
};
