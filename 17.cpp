//pointers
#include <bits/stdc++.h>
using namespace std;

int main()
{
int x = 5;
int* ptr = &x;
cout<<*ptr<<endl; 
int arr[]={1,2,3,4,5,6,7};
//these 3 lines will give the same output because this is how pointers works
cout<<arr[3]<<'\n';
cout<<3[arr]<<'\n';
cout<<*(arr+3)<<'\n';

return 0;
}