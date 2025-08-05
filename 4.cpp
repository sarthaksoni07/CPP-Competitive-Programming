// to use a if else statement
#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

int x,y,z;
cin>>x>>y>>z;

if(x>y){
    if(x>z){
        cout<<x<<"is the greatest number";
    }
    else{
        cout<<z<<"is the greatest number";
    }
}
else{
    if(y>z){
        cout<<x<<"is the greatest number";
    }
    else{
        cout<<z<<"is the greatest number";
    }
}
return 0;
}