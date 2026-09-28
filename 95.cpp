#include<bits/stdc++.h>
using namespace std;
void solve(){
    int i; 
    cin>>i;
    if(i%3==2||i%3==1){
        cout<<"First"<<"\n";
    }else{
        cout<<"Second"<<"\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
return 0;
} 