#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
     int x;
     cin>>x;
     set<string> s;
     for (int i = 0 ; i<x;++i){
        string str;
        cin>>str;
        s.insert(str);
     }
     for(auto it : s){
        cout<<it<<endl;
     }
     
    return 0;
}