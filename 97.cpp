#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; 
    cin>>n ; 
    vector<int> arr(n);
    for ( int i =0 ; i < n; i++){
        cin>>arr[i];
    }
    map<int,int> chq;
    for( int i : arr){
        chq[i]++;
    }
    if(chq.size()==1){
        cout<<"YES"<<"\n";
    }else if(chq.size()>2){
        cout<<"NO"<<"\n";
    }else if(chq.size()==2){
        auto it = chq.begin();
        int freq1 = it->second;
        it++;
        int freq2 = it->second;
        if(abs(freq1-freq2)<=1){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
return 0;
}