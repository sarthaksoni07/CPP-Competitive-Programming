#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> rows[9];
        unordered_set<char> cols[9];
        unordered_set<char> grid[9];
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                char val = board[i][j];
                if (val == '.') {
                    continue;
                }
                if (rows[i].find(val) != rows[i].end()) {
                    return false;
                }
                if (cols[j].find(val) != cols[j].end()) {
                    return false;
                }
                int boxid = ((i / 3) * 3) + ((j / 3));
                if (grid[boxid].find(val) != grid[boxid].end()) {
                    return false;
                }
                rows[i].insert(val);
                cols[j].insert(val);
                grid[boxid].insert(val);
            }
        }
        return true;
    }
};
// valid sudoku