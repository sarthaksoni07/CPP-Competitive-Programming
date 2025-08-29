// question

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int i = 0;
int a[]={0,2,5,7,9};
int *ptr = a;
while(ptr+i <=a +4){
    cout<<*(ptr+i)<<'\n';
    ptr++;
    i++;
}
return 0;
}

//1st iteration 
//ptr + 0(i=0 before increment) = 0

//2nd iteration
//(ptr+1)+1 or ptr + 2 = 5

//3rd iteration
//(ptr+2)+2 or ptr + 4 = 9