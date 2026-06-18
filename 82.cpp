#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    double angleClock(int hour, int minutes) {
        double min_deg = minutes*(360.0/60.0);
        double hour_deg =((hour%12)*(360.0/12.0))+(0.5*minutes);
        double result= max(min_deg,hour_deg)-min(min_deg,hour_deg); 
        if(result>180){
            return 360.0-result;
        }
        return result;
        
    }
};
// we addd minutes*0.5 to hour de because hour hand also moves as minute moves
// we multiply minute by 0.5 because, there are 360/12 degress(30),in each hour, and 30/60 degrees is the degress for each minute, and that minute is multipled to 0.5 or 30/60.