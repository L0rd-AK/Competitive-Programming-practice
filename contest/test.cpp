#include <bits/stdc++.h>
using namespace std;

// Function to solve the problem for one test case
void AKG() {
    int n;
    cin >> n;

    vector<string> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    // Vector to store indices and corresponding binary value as an integer
    vector<pair<int, long long>> binaryRows;

    for (int i = 0; i < n; i++) {
        long long binaryValue = 0;
        for (char bit : v[i]) {
            binaryValue = (binaryValue << 1) + (bit - '0'); // Convert binary string to integer
        }
        binaryRows.push_back({i, binaryValue});
    }

    // Sort based on the binary value
    sort(binaryRows.begin(), binaryRows.end(), [&](pair<int, long long> a, pair<int, long long> b) {
        return a.second < b.second;
    });

    // Output 1-based indices
    for (auto &row : binaryRows) {
        cout << row.first + 1 << " ";
    }
    cout << endl;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        AKG();
    }

    return 0;
}
