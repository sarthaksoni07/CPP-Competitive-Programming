#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int count;
    string s;
    cin >> s;
    int l = s.length();
    if (l > 10)
    {
        cout << s[0] << l - 2 << s[l - 1] << endl;
    }
    else if (l <= 10)
    {
        cout << s << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {

        solve();
    }

    return 0;
}