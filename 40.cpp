#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s, t;
    cin >> s >> t;
    int l = s.length();
    int m = t.length();
    if (l < m)
    {
        for (int i = 0; i < l; i++)
        {
            cout << s[i] << t[i];
        }
        cout << t.substr(l, m - l);
        cout << endl;
    }
    else if (l > m)
    {
        for (int i = 0; i < m; i++)
        {
            cout << s[i] << t[i];
        }
        cout << s.substr(m, l - m);
        cout << endl;
    }
    else if (l == m)
    {
        for (int i = 0; i < l; i++)
        {
            cout << s[i] << t[i];
        }
        cout << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}