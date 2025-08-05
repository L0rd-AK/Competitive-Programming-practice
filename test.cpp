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

const int MOD = 1e9+7;
const int N = 1e5+7;

void AKG(){
    int n;
    cin >> n;
    vl b(n);

    ll min_b = 1e9 + 1;
    ll max_b = 0;

    for (int i = 0; i < n; ++i) {
        cin >> b[i];
        if (b[i] < min_b) min_b = b[i];
        if (b[i] > max_b) max_b = b[i];
    }

    ll count_min = 0, count_max = 0;
    for (int i = 0; i < n; ++i) {
        if (b[i] == min_b) ++count_min;
        if (b[i] == max_b) ++count_max;
    }

    if (min_b == max_b) {
        ll ways = (ll)n * (n - 1) / 2;
        cout << "0 " << ways << endl;
    } else {
        ll max_diff = max_b - min_b;
        ll ways = count_min * count_max;
        cout << max_diff << " " << ways << endl;
    }
}

int main() {
#ifdef LOCAL
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t=1;
    // cin >> t; 
    while (t--)AKG();
    return 0;
}