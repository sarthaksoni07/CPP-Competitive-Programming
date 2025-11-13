
void solve()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int f;
    int flag = 0;
    cin >> f;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (flag != 0)
            {
                return;
            }
            else if (flag == 0)
            {
                if (arr[i][j] == f)
                {
                    flag++;
                }
            }
        }
    }
    if (flag == 1)
    {
        cout << "will not take number" << endl;
    }
    else if (flag == 0)
    {
        cout << "will take number" << endl;
    }
}
