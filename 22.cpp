#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int m, n;
    cin >> m >> n;
    int a[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    int x;
    cin >> x;

    bool found = false;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (x == a[i][j])
            {
                found = true;
                break;
            }
        }
        if (found)
        {
            break;
        }
    }
    if (found)
    {

        cout << "will not take number";
    }
    else
    {

        cout << "will take number";
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
        solve();

    return 0;
}