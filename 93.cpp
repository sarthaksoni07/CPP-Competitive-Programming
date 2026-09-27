#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> gas(n);
    for (int i = 0; i < n; i++)
    {
        cin >> gas[i];
    }
    int max = gas[0];
    for (int i = 0; i < n - 1; i++)
    {
        int dist = gas[i + 1] - gas[i];
        if (dist > max)
        {
            max = dist;
        }
    }
    int dist = 2 * (x - gas[n - 1]);
    if (dist > max)
    {
        max = dist;
    }
    cout << max << "\n";
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
