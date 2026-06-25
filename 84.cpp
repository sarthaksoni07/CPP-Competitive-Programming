#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for (int i = 0; i < matrix.size() / 2; i++) {
            for (int j = 0; j < matrix.size(); j++) {
                swap(matrix[i][j], matrix[matrix.size() - 1 - i][j]);//mirror the rows, by swapping them 
            }
        }

        for (int i = 0; i < matrix.size(); i++) {
            for (int j = i + 1; j < matrix.size(); j++) {
                if (i == j) {
                    continue;
                } else {
                    swap(matrix[i][j], matrix[j][i]);//tranpose them 
                }
            }
        }
    }
};
// rotate a image 90 degree ; 
//core idea , mirror the matrix, then tranpose it 