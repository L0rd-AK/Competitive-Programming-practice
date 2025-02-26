#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) cout << (f ? "YES\n" : "NO\n")
#define pr(x) cout << x << endl
#define all(x) x.begin(), x.end()
#define vl vector<ll>
#define vi vector<int>
#define pb push_back
#define pi pair<ll, ll>

const int MOD = 998244353;
const int N = 3e5+5;

// Returns the index of the lowest unset bit in x
static int stBit(ll x) {
    for (int b = 0; b < 30; b++) {
        if (((x >> b) & 1) == 0) {
            return b;
        }
    }
    return 30; 
}

void AKG() {
    ll n, x;
    cin >> n >> x;
    int b = stBit(x);  // Find smallest missing bit in x
    ll m = (1LL << b); // 2^b
    vl ans;
    
    if (n >= m + 1) {
        // Case when we have enough slots to include {0, 1, ..., 2^b - 1} and x
        for (int i = 0; i < m; i++) {
            ans.push_back(i);
        }
        ans.push_back(x);
        while ((int)ans.size() < n) {
            ans.push_back(0);
        }
    } else {
        // Case when we cannot fit all {0, ..., 2^b-1}
        ll val = 0;
        for (int i = 0; i < n; i++) {
            ans.push_back(i);
            val |= i;
        }
        if (val != x) {
            // Adjust the last element to make OR equal to x
            ans[n - 1] = x ^ val;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << (i + 1 < n ? ' ' : '\n');
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);

    int t = 1;
    cin >> t;
    while (t--) {
        AKG();
    }

    return 0;
}
