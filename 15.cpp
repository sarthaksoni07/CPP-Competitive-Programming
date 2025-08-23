#include <bits/stdc++.h>
using namespace std;
char star(int i, int j, int r, int c)
{
    if (i+j>=4 && i>=j-4)
    {
        return '*';
    }

    else{
        return' ';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

 int i,j,r=5,c=9;
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