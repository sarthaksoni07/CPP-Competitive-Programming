#include<bits/stdc++.h>
using namespace std;
void solve(){
    int result =0 ;
    for(int i = 0 ; i<10 ; i++){
        for(int j = 0 ; j < 10 ; j++){
            char c; 
            cin>>c;
            if(c=='X'){
                int s = min(i+1, j+1);
                int z = min((11-(i+1)),(11-(j+1)));
                result+=min(s,z);
            }
        }
    }
    cout<<result<<"\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
return 0;
}