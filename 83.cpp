#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int curr_alt = 0; 
        int max= 0;
        for(int i : gain){
            curr_alt+=i;
            if(curr_alt>max){
                max=curr_alt;
            }
        }
        return max; 
    }
};

// daily problem max altitude of a biker.