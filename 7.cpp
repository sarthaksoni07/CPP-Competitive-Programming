#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
 
int days;
cin>>days;

int months = days/30;
int years = months/12;

int leftYears = years%1;
int leftMonths = months%12;
int left = days%30;
cout<<"age of the person is-"<<leftYears<<':'<<leftMonths<<':'<<left;

return 0;
} 