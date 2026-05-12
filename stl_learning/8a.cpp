#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    // question on maps
    // Given N strings, print unique strings
    // in lexiographical order with their
    // frequency
    int n;
    cin >> n;
    map<string, int> w;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        w[s] += 1;
    }
    for (auto it : w)
    {
        cout << it.first << "\t"<<it.second << endl;
    }

    return 0;
}