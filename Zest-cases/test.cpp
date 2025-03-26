#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define LOCAL
#endif

#define ll long long
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) cout << (f ? "YES\n" : "NO\n")
#define pr(x) cout << x << "\n"
#define all(x) x.begin(), x.end()
#define vl vector<ll>
#define vi vector<int>
#define pb push_back
#define pi pair<ll, ll>

#ifdef LOCAL
#include "D:\\VS-Code\\Competitive programming practice\\Zest-cases\\dbg.h"
#else
#define dbg(x...)
#endif

const int MOD = 998244353;
const int N = 2e5 + 5;

vector<int> smallestPrimeFactor(int n) {
    vector<int> spf(n + 1);
    iota(spf.begin(), spf.end(), 0); // Initialize spf[i] = i
    for (int i = 2; i * i <= n; ++i) {
        if (spf[i] == i) { // i is prime
            for (int j = i * i; j <= n; j += i) {
                if (spf[j] == j) {
                    spf[j] = i; // Mark smallest prime factor
                }
            }
        }
    }
    return spf;
}

void AKG() {
    int n;
    cin >> n;
    vector<int> spf = smallestPrimeFactor(n);
    long long ans = 0;
    for (int i = 2; i <= n; ++i) {
        if (spf[i] == i) { // Check if i is prime
            ans += n / i;
        }
    }
    pr(ans);
}

int main() {
#ifdef LOCAL
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--) {
        AKG();
    }

    return 0;
}