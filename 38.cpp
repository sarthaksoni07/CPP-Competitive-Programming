#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int l = 0, r = 0;
    for (int i = 0; i < n; i++)
    {
        l += (arr[i][i]);
        r += (arr[i][n - 1 - i]);
    }

    int result = (l) - (r);
    if (result < 0)
    {
        cout << -(result) << endl;
    }
    else if (result > 0)
    {
        cout << result << endl;
    }
    else
    {
        cout << 0 << endl;
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