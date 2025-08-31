// mirror a matrix
#include <bits/stdc++.h>
using namespace std;
void inputMatrix(int arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
}

void reverseMatrix(int arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 2; j >= 0; j--)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[3][3];
    inputMatrix(arr);
    reverseMatrix(arr);

    return 0;
}