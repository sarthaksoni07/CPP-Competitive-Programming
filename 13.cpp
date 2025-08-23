#include <bits/stdc++.h>
using namespace std;

char star(int i, int j, int r, int c)
{
    if (i == 0 || i == r - 1 || j == 0 || j == c - 1)
    {
        return '*';
    }
    else
    {
        return ' ';
    }
}
int main()
{
    // patter matching techniques in cpp
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int r, c, i, j;
    cin >> r >> c;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << star(i, j, r, c);
        }
        cout << endl;
    }
    return 0;
}