#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl

// Use 1D DP array to optimize space
int dp[10005];

// Recursive function to check if there's a subset sum equal to given sum
bool checkSum(int n, int sum, vector<int>& arr) {
    if (sum == 0) return true;      // Found subset with required sum
    if (n == 0 || sum < 0) return false; // No elements left or invalid sum

    if (dp[sum] != -1) return dp[sum];   // Use memoized result

    // Either include the current element or exclude it
    bool include = checkSum(n - 1, sum - arr[n - 1], arr);  // Include current element
    bool exclude = checkSum(n - 1, sum, arr);  // Exclude current element

    return dp[sum] = include || exclude;
}

void AKG() {
    int n, sum;
    cin >> n >> sum;

    vector<int> v(n);
    f(i, 0, n) cin >> v[i];

    // Initialize dp array with -1 (uncomputed states)
    memset(dp, -1, sizeof(dp));

    // Check if subset with given sum exists
    yn(checkSum(n, sum, v));
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
    auto begin = std::chrono::high_resolution_clock::now();
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while (t--) {
        AKG();
    }

#ifndef ONLINE_JUDGE
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";
#endif

    return 0;
}
