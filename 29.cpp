#include <bits/stdc++.h>
using namespace std;
// minmax
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int min = arr[0];
    int minindex;
    int max = arr[0];
    int maxindex;
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
            minindex = i;
        }

        if (max < arr[i])
        {
            max = arr[i];
            maxindex = i;
        }
    }

    int temp = arr[minindex];
    arr[minindex] = arr[maxindex];
    arr[maxindex] = temp;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}