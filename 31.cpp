#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int check = 0;
    cin >> n;
    int arr[n];
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    sort(arr, arr + n);
    sort(arr1, arr1 + n);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr1[i])
        {
            check++;
        }
    }
    if (check == n)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
    return 0;
}