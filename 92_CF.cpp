#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, k; 
    cin>>n>>k;
    vector<int> arr(n);
    for(int i = 0 ; i< n; i++){
        cin>>arr[i];
    }
    if(k==1&&!is_sorted(arr.begin(),arr.end())){
        cout<<"NO\n";
    }else{
        cout<<"YES\n";
    }
}
int main(){
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
int t;
cin>>t;
while(t--){
solve();
}
return 0;
}