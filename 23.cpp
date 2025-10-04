#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int x;
    cin >> x;
    int arr[x][x];
    int p = 0;
    int s = 0;

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < x; i++)
    {
        p += arr[i][i];
        s += arr[i][x - i - 1];
    }

    cout << abs(p - s);
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