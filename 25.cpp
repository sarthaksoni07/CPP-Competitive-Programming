#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string f, s;
    cin >> f >> s;
    int a = f.length();
    int b = s.length();
    int m = min(a, b);
    for (int i = 0; i < m; i++)
    {
        cout << f[i] << s[i];
    }
    if (a > b)
    {
        cout << f.substr(m); // this gives us the string starting from the index till the end;
    }
    else if (b > a)
    {
        cout << s.substr(m);
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}