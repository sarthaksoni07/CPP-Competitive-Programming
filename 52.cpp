#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
       
        int forw = 0;
        int backw = numbers.size()-1;
        while(forw<backw){
            int sum = numbers[forw]+numbers[backw];
            if((sum)==target){
                return {++forw,++backw};
            }   
            else if(sum>target){
                backw--;
            }
            else if(sum<target){
                forw++;
            } 
        }
        return{};
    }
};

// 2 sumof the sorted array.