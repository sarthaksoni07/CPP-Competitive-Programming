// set , unordered sets and multisets.
#include <bits/stdc++.h>
using namespace std;
void printS(set<string>&m){
    for( auto it : m){
        cout<<it<<endl;
    }
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    set<string> s;
    s.insert("s");        
    s.insert("a");        
    s.insert("d");
    // to print
    printS(s);
    auto it = s.find("d");// to find any element's location
    if(it!=s.end()){
        cout<<*it;
        s.erase(it);// will erase the element
    }
    s.erase("s");// will erase the element
    
    s.insert("a");// will not be added since they do not store copy 
    return 0;
}