#include<bits/stdc++.h>

using namespace std;

void solve(){

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    // int t; cin>>t;while(t--)
    // solve();
char s;
cin>>s;
int n;
cin>>n;
int x[n];
for(int i=0;i<n;i++){
    cin>>x[i];
}

for(int i=0;i<n;i++){
    for(int j=0;j<x[i];j++){
        cout<<s;
    }
    cout<<'\n';
}
return 0;
}