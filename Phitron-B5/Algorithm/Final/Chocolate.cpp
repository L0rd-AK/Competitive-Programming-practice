#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl
 

void AKG() {
     int n;
    cin >> n;
    int s = 0;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
    }
    if (s % 2 == 0)
    {
        int sum = s / 2;
        bool dp[n + 1][sum + 1];
        dp[0][0] = true;
        for (int i = 1; i <= sum; i++)
            dp[0][i] = false;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= sum; j++)
            {
                if (a[i - 1] <= j)
                {
                    dp[i][j] = dp[i - 1][j - a[i - 1]] || dp[i - 1][j];
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }
        yn(dp[n][sum]);
    }
    else
    {
       yn(0);
    }             
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while (t--) {
        AKG();
    }

    return 0;
}
