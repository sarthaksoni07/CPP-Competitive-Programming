#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows <= 1 || numRows >= s.length()) return s;
        vector<vector<char>> result(numRows);
        bool flag = true;
        int counter = 0; 
        for(int i = 0 ; i < s.length(); i++){
            if(counter<numRows&&counter>=0&&flag){
                result[counter].push_back(s[i]);
                if(counter==numRows-1){
                    flag=false;
                    counter--;
                }else{
                counter++;
                }

            }else if(counter< numRows && counter>=0 && !flag){
                result[counter].push_back(s[i]);
            if(counter==0){
                flag=true;
                counter++;
            }else{
                counter--;
            }
            }
        }
        string str ="";
        for(int i = 0; i < result.size();i++){
            for( char j : result[i]){
                str+=j;
            }
        }
        return str;
    }
};//zig zag conversion