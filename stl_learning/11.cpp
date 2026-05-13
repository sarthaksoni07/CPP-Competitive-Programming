#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    unordered_set<string>s;
    //same methods as ordered sets.
    s.insert("abc");
    s.insert("abc");// can store duplicate elements
    s.insert("def");
    s.insert("ghi");
    s.insert("jkl");
    // they will not be stored in order
    for (auto it:s){
        cout<<it<<endl;// prints in random order
        // s.erase(it)  - erases the element at the pointer
    }
    s.erase("def");//will erase the elements from the list
    auto it = s.find("abdc"); // returns the adress 
    cout<<*it<<endl;
 
    return 0;
}