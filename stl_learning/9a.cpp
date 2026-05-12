#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    unordered_map<string, int> m;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        m[str]++;
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        string s;
        cin >> s;
        cout << m[s] << endl;
    }
    return 0;
}