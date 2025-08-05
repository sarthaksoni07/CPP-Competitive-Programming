// ternary operator

#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

int x,y;
cin>>x>>y;
int max = x>y ? x : y ;
cout<<max<<"is the greatest value";

return 0;
}