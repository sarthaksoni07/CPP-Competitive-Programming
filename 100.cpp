#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int sum=0;
    for(int i = 0 ; i < n-1; i++){
        int s;
        cin>>s;
        sum+=s;
    }
    cout<<-sum<<"\n";
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