#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r = matrix.size(), c = matrix[0].size();
        vector<vector<bool>> mark(r, vector<bool>(c, false));

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (matrix[i][j] == 0) {
                    mark[i][j] = true;
                }
            }
        }

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (mark[i][j]) {
                    for (int a = 0; a < r; a++) matrix[a][j] = 0;
                    for (int b = 0; b < c; b++) matrix[i][b] = 0;
                }
            }
        }
    }
};
