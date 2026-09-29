#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    string x;
    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        x += c;
    }
    string s;
    for (int i = 0; i < m; i++)
    {
        char c;
        cin >> c;
        s += c;
    }
    int size = n * m;
    int iteration = 0;
    while (iteration <= 6)
    {
        if (x.find(s) != -1)
        {
            cout << iteration << "\n";
            return;
        }
        iteration++;
        x += x;
    }
    cout << -1 << "\n";
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