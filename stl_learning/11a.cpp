#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    //question using unordere set
    int x ;
    cin>>x;
    unordered_set<string> s;
    for(int i = 0; i < x; i++){
        string str;
        cin>>str;
        s.insert(str);
    }
    int q;
    cin>>q;
    while(q--){
        string str;
        cin>>str;
        auto it = s.find(str);
        if(it!=s.end()){
            cout<<"found"<<endl;
        }
        else{
            cout<<"not found"<<endl;
        }
    }
     
    return 0;
}