#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    // iterators in stl
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int>::iterator it = v.begin();
    cout << "value of v[0]\n"
         << *(it) << endl;
    cout << "value of v[1]\n"
         << *(++it) << endl; // we can increment this like pointers.
    // to iterate, we can run an loop
    for (it = v.begin(); it < v.end(); ++it)
    {
        cout << *(it) << "\t";
    }

    // difference between (it+1)and it++ is that it+1 moves to the next memory block while it++ moves to the next iterator, it++ is more preffered
    cout << "\nto output pairs\n";
    vector<pair<int, int>> v1 = {{1, 2}, {3, 4}, {5, 6}};

    vector<pair<int, int>>::iterator it1 = v1.begin();

    for (it1 = v1.begin(); it1 < v1.end(); ++it1)
    {
        cout << (*it1).first << "\t" << (*it1).second << endl;
    }

    
    for (it1 = v1.begin(); it1 < v1.end(); ++it1)
    {
        cout << (it1->first) << "\t" << (it1->second) << endl; // other syntax
    }

    return 0;
}