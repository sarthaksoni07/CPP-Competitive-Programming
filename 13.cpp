#include <bits/stdc++.h>
using namespace std;
 
string star(int i , int j, int r ,int c){
    return "*";
}
int main()
{
//patter matching techniques in cpp

 int r,c; 
 cin>>r>>c;
 for(int i=0;i<r;i++){
    for(int j = 0 ;j<c;j++){
        cout<<star(i,j,r,c);
    }
    cout<<endl;
 }
return 0;
}