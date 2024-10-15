#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl

int subset_sum(vector<int>& coins, int n, int k, int sum) {
    int half = sum / 2; 

    vector<vector<bool>> dp(k + 1, vector<bool>(half + 1, false));
    dp[0][0] = true;

    for (int i = 0; i < n; ++i) {
        int coin = coins[i];
        for (int j = k; j > 0; --j) { 
            for (int s = half; s >= coin; --s) {
                dp[j][s] = dp[j][s] || dp[j - 1][s - coin];
            }
        }
    }

    for (int s = half; s >= 0; --s) {
        if (dp[k][s]) {
            return s;
        }
    }

    return 0;
}

void AKG() {
    int n,sum=0;
    cin >> n;
    vector<int> coins(n);
    for (int i = 0; i < n; ++i) {
        cin >> coins[i];
        sum+=coins[i];
    }
    int halfc = n / 2;
    int op1 = subset_sum(coins, n, halfc, sum);

     if (n % 2 == 0) {
        prnt(abs(sum - 2 * op1));
    }else{
        int op2 = subset_sum(coins, n, halfc + 1, sum);
        prnt(min(abs(sum - 2 * op1), abs(sum - 2 * op2)));
    }
    
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--) {
        AKG();
    }
    
    return 0;
}
