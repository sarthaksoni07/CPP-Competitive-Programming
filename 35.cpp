#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string s;
    cin>>s;
    int start= 0;
    int end = 0;
    int n = s.length();
    for(int i= 0 ; i < n ;i++){
        while(s[i]!=' '){
            end++;
        }
        if(s[i]==' '){
            reverse(s.begin()+start, s.begin()+end+1);
            start = end+1;
        }
    }
    return 0;
}