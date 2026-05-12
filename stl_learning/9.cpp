// unordered map in c++ stl
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);


    unordered_map<int,string> m= {{1,"abc"},{2,"def"},{3,"ghi"}};
    
    // the keys in unordered_map can be only the variable for which hash function is definded


    // same declaration with same methods
    m.erase(3);
    cout<<m.size()<<endl;
     
    for (auto it : m ){
        cout<<it.first<<"\t"<<it.second<<endl;
    }
    // time complexity to access, delete or modify elements are O(1)
    return 0;
}