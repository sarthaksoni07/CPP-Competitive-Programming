#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
 
int days;
cin>>days;
int years = days/365;
int left = days&365;
int month = left/30;
int day=left%30;
cout<<"age of the person is-"<<years<<':'<<month<<':'<<day;

return 0;
} 