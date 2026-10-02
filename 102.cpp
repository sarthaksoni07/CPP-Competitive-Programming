#include <bits/stdc++.h>
using namespace std;
void solve(int t)
{
    int result = 1e9;
    for(int i = 0 ; i< t ; i++){
        int s;
        cin>>s;
        if(abs(s)<result){
            result = abs(s);
        }
    }
    cout<<result<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    solve(t);
    return 0;
}