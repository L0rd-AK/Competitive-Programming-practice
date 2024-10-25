#include <iostream>
#include <vector>

using namespace std;

vector<int> sumMainDiagonal(const vector<vector<int>>& matrix) {
    int n = matrix.size();
    vector<int> sums(n);

    for (int i = 0; i < n; i++) {
        sums[i] = matrix[i][i];
    }

    return sums;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    vector<int> individualSums = sumMainDiagonal(matrix);

    cout << "Individual sums of the main diagonal: ";
    for (int sum : individualSums) {
        cout << sum << " ";
    }
    cout << endl;

    return 0;
}