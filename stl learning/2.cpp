// vectors in stl
#include <bits/stdc++.h>
using namespace std;
void printVec(vector<int> &v) // you shoud pass &v so that there is no copies created of the vector
{ 
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl; // print just like array
    }
}
void printVec(vector<string> &v)
{ // overloaded for strings
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}
int main()
{
    vector<int> v;
    // this is how to initialize and push the vector
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(2);
    printVec(v);
    // to remove 
    v.pop_back();//removes last element
    printVec(v);


    vector<int> v1(10);// to declare a vector of size 10 , all the elements would be initialized to 0 ; 
    printVec(v1); 
    vector<int> v2(10, 3);// to declare a vector is size 10 , but initialize all the vlaues to 3
    printVec(v2);
    
    

    // since vector can be of any type , this is a string vector
    vector<string> s; 
    s.push_back("sarthak");
    s.push_back("sprsh");
    s.push_back("rahul");
    printVec(s);


    // we can also copy vectors, and we should copy by reference to maintain the time complexity . 
    vector<string> &s1 = s;//copied in O(1);
    printVec(s1);
    return 0;
}