// mirror a matrix
// turn a matrix 90 degree
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
void transposeMatrix(int arr[][3]){
    for(int i = 0 ; i < 3; i++){
        for(int j = i + 1 ; j < 3 ; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
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
    transposeMatrix(arr);
    reverseMatrix(arr);

    return 0;
}