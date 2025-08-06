#include <bits/stdc++.h>
using namespace std;

bool is_prime(int x){
    for(int i=2;i<=x;i++){
        if(x%i==0){
            return false;
        }
        return true;
    }
}


int main()
{
int i;
cin>>i;
 if(is_prime(i)){
    cout<<i<<" ";
 }
return 0;
}
