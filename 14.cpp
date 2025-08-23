#include <bits/stdc++.h>
using namespace std;
char star(int i, int j, int r, int c)
{
    if (i == j)
    {
        return '*';
    }
    else if(i<j)
    {
        return '-';
    }
    else{
        return 'x';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int i, j, r, c;
    cin>>r>>c;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << star(i, j, r, c);
        }
        cout<<'\n';
    }
    return 0;
}