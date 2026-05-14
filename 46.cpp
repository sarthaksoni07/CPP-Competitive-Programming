// group anagrams
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        unordered_map<string, vector<string>> m;
        for (string word : strs)
        {
            string s = word;
            sort(s.begin(), s.end());
            m[s].push_back(word);
        }
        vector<vector<string>> result;
        for (auto it : m)
        {
            result.push_back(it.second);
        }
        return result;
    }
};

//okay got it, so , basically , we are looping through the list of words given, we are picking one word, make a copy of it, and sort it. now the sorted copy acts as a key, we push_back the original word as the value with the sorted copy as the key , so , if there is already a word with the same key lets say eat and tea, the orignal word simply get appended to the list of vector. and if not , it creates a new key - value pair, with the original word appending as the first wod in that list.

// when we are iterating later on, we are making a vector of vector, so when we are looping we are basically appening the vectorsof values in the vector. which means we have a variable sized nested vector. and when we print it , we get the output with grouped words.