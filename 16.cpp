#include <bits/stdc++.h>
using namespace std;
// if x exist in an array and what is it's position

void findArray(int arr[], int n, int s){
  int position = -1;
    for(int i = 0 ; i <n;i++){
        if(s == arr[i]){
            position = i ;
            break;
        }
    }
    cout<<position<<endl;
}
 
int main()
{
int arr [] = {1,2,3,4,5,6};
int n = sizeof(arr)/sizeof(arr[0]);

findArray(arr,n,5);
return 0;
}