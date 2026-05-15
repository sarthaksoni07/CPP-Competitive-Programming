//half century!
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()){// if empty return zero
            return 0;
        }
        unordered_set<int> m;// unordered set used, to remove duplicates and have o(1)access time.
        for (int i : nums){
            m.insert(i);
        }
        int max_count= 1;//if there is only one element in the list, return 1.
        for(int i:m){
            if(m.find(i-1)==m.end()){// this line checks if there is an element is the starting point or not, if yes then execute the code below, else, continue.

                int counter = 1;// this will count 
                int val=i;
                while(m.find(val+1)!=m.end()){
                    counter++;// keep track of longest consecutive streak
                    val++;// keep incrementing values until we hit the m.end()
                }
                if(counter>max_count){
                    max_count=counter;
                }
            }
        }
        return max_count;
    }
};
// longest consecutive sequence;