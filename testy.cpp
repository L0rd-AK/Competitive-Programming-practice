#include <bits/stdc++.h>
using namespace std;

int minOperations(const vector<int>& arr) {
    unordered_set<int> uniq(arr.begin(), arr.end());
    int D = uniq.size();
    return 2 * D - 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << minOperations(a) << "\n";
    }
    return 0;
}
