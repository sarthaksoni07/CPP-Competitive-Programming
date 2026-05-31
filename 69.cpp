#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        sort(asteroids.begin(),asteroids.end());
        long long fmass=mass;
        for ( long long i :asteroids){
            if(i>fmass){
                return false;
            }else if (i<=fmass){
                fmass+=i;
            }
        }
        return true;
    }
};
//destroying aesteroid
