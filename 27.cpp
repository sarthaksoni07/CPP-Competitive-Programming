#include <bits/stdc++.h>
using namespace std;
// array replacement

int main()
{
    int n;
    cout << "please enter size of the array -";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter the " << i << "th element of the array";
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            arr[i] = 1;
        }
        if (arr[i] < 0)
        {
            arr[i] = 2;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    return 0;
}