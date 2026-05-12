#include <bits/stdc++.h>
using namespace std;
 void printm(auto m){
     for(auto &it:m){//& used to reference and not make any copy.
         cout<<it.first<<"\t"<<it.second<<endl;
     }// to print map
    
 }
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    // stl maps and how to use them 
    // maps and unordered maps. maps stored sorted order, and unordered stores withotu orders
    // maps stores key value pair
    // type of container
     
    map<int,string> m ={{1,"abc"},{3,"efg"},{2,"def"}};//no matter the order, it will be stored in sorted order
    // no keys will be repeated, the value will be modified.

    // to insert - 
    m.insert({4,"ghi"});

    // size of map 
    cout<<m.size()<<endl;

    // other methods 
    // m.find(3);// returns iterator
    auto it =m.find(7);
    if(it==m.end()){
        cout<<"no value found"<<endl;
    }
    else{
        cout<<(*it).first<<"\t"<<(*it).second<<endl;
    }
    
    // m.erase() removest key value pair
    printm(m);
    cout<<"after erase"<<endl;
    m.erase(4);
    printm(m);


    return 0;
}   