#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)
#define endl "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int knapsack(int n, int a[], int idx) {
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j < idx; j++) {
            if (a[j] <= i) {
                dp[i] = max(dp[i], 1 + dp[i - a[j]]);
            }
        }
    }

    return dp[n];
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif

    int n;
    int a[3];
    cin >> n >> a[0] >> a[1] >> a[2];
    cout << knapsack(n, a, 3) << endl;

    return 0;
}
