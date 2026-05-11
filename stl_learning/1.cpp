// pair and vectors
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    //singular pair 
    pair<int,string>p;
    p= {1,"sarthak"};
    cout<<p.first<<" "<<p.second<<"\n";
    // this was the first pair, to make a list of pairs, and to iterate , we need to do this 
    pair<int, string> p1[3];
    p1[0]={1,"sartak"};
    p1[1]={2,"sparsh"};
    p1[2]={3,"rahul"};
    for (int i = 0 ; i < 3; i++){
        cout<<p1[i].first<<" "<<p1[i].second<<"\n";
    }
    return 0;
}