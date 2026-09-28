#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string str;
    for (int i = 0; i < n; i++)
    {
        char temp;
        cin >> temp;
        str += temp;
    }
    if (str.find("...")==-1)
    {
        int count = 0;
        for (char c : str)
        {
            if (c == '.')
            {
                count++;
            }
        }
        cout << count << "\n";
    }
    else
    {
        cout << 2 << "\n";
    }
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}