#include <bits/stdc++.h>
using namespace std;

void printAllSubsets(vector<int>& arr) {
    int n = arr.size();
    int totalSubsets = 1 << n; // 2^n subsets
    
    for (int i = 0; i < totalSubsets; ++i) {
        cout << "{ ";
        for (int j = 0; j < n; ++j) {
            if (i & (1 << j)) {
                cout << arr[j] << " ";
            }
        }
        cout << "}" << endl;
    }
}

int main() {
    vector<int> arr = {1, 2, 3,4,5};
    printAllSubsets(arr);
    return 0;
}
