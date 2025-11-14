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
    int f, g, flag = 0;
    cin >> f >> g;
    char s = a[f][g];
    for (int i = f - 1; i <= f + 1; i++)
    {
        for (int j = g - 1; j <= g + 1; j++)
        {
            while (i != f && j != g)
            {
                if (a[i][j] == s)
                {
                    flag++;
                }
            }
        }
    }

    if (flag > 0)
    {
        cout << "no" << endl;
    }
    else
    {
        cout << "yes" << endl;
    }
}
