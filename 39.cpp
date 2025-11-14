#include <bits/stdc++.h>

using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    char a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int f, g;
    int flag = 0;
    cin >> f >> g;
    f--;
    g--;
    char s = a[f][g];
    for (int i = f - 1; i <= f + 1; i++)
    {
        for (int j = g - 1; j <= g + 1; j++)
        {
            if (i >= 0 && i < n && j >= 0 && j < m)
            {

                if (i == f && j == g)
                {
                    continue;
                }
                if (a[i][j] == s)
                {
                    flag++;
                }
            }
        }
    }
    if (flag == 0)
    {
        cout << "yes" << endl;
    }
    else if (flag > 0)
    {
        cout << "no" << endl;
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