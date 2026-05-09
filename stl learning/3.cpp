//nesting in vectors
#include <bits/stdc++.h>
using namespace std;
void printVec(vector<pair<int,int>> &v) 
{ 
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first<<" "<< v[i].second << endl; 
    }
    cout <<endl;
}
void printVec(vector<pair<int,string>> &v) 
{ 
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first<<" "<< v[i].second << endl; 
    }
    cout <<endl;
}
int main()
{
    vector<pair<int,int>> v;// we can use pair inside of vectors,and other types of containers inside the vector. 
    vector<pair<int,string>> v1 = {{1,"sarthak"}, {2,"sparsh"}};
    printVec(v1);
    v.push_back({1,2});
    v.push_back({3,4});
    v.push_back({5,6});
    v.push_back({7,8});// we can ad multiple pairs inside the vector.
    printVec(v);
    return 0;
}   