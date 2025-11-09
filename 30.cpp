#include <bits/stdc++.h>
using namespace std;

int main()
{
    // lucky array

    int n;
    int flag = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int min = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
        if (min == arr[i])
        {
            min = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == min)
        {
            flag++;
        }
    }
    if (flag % 2 == 0)
    {
        cout << "Unlucky";
    }
    if (flag % 2 == 1)
    {
        cout << "Lucky" << endl;
    }

    return 0;
}