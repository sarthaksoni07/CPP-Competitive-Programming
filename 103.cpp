#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int t;
    cin >> t;
    vector<int> array(t);

    for(int i = 0 ; i < t ; i++){
        cin>>array[i];
    }
    vector<int> result;
    result.push_back(array[0]);
    for (int i = 1; i < t; i++)
    {
        if(array[i]>=array[i-1]){
            result.push_back(array[i]);
        }else{
            result.push_back(array[i]);
            result.push_back(array[i]);
        }
    }
    cout<<result.size()<<"\n";
    for (int i :result){
        cout<<i<<"\t";
    }
    cout<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}