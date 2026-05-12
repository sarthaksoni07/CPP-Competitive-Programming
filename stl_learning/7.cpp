#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    // to write stl in short
    vector<int> v = {1, 2, 3, 4};
    // normal iterator appraoch
    vector<int>::iterator it = v.begin();
    for (it = v.begin(); it < v.end(); it++)
    {
        cout << *it;
    }
    // range based loop
    for (int value : v)
    {
        cout << value;
    }
    // auto keyword
    //    how is it used ?
    auto a = 10; // automatically determines it's type.
    // same way
    for (auto it2 = v.begin(); it2 < v.end(); it2++)
    {
        cout << *it2;
    } // output the same

    // for a complex things likne a vector of piars
    vector<pair<int, int>> v2 = {{1, 2}, {3, 4}, {5, 6}};
    // lets use both methods
    for (pair<int, int> value2 : v2)
    {
        cout << value2.first << "\t" << value2.second;
    }
    for (auto it2 = v2.begin(); it2 < v2.end(); it2++)
    {
        cout << (*it2).first << (*it2).second;
    } // both methods are working nice

    return 0;
}