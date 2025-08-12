#include<bits/stdc++.h>

using namespace std;

// print stars

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int x;
    cin>>x;
    for(int i=x;i>=0;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<'\n';
    }


    return 0;
}