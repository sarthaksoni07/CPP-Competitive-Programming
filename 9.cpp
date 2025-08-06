// to print all the even number in the series

#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

int n;
cin>>n;
// for(int i=1;i<=n;i++){
//     if(i%2 == 0){
//         cout<<i<<endl;
//     }
// slow method


for(int i=2;i<=n;i+=2){
cout<<i<<endl;
}
return 0;
}