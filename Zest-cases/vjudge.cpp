#include <bits/stdc++.h>
using namespace std;
#define f(i, l, r) for (int i = (l); i < (r); ++i)
using ll = long long;

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (ll &x : a) cin >> x;

    // Compute prefix maximums of the original array
    vector<ll> mx(n);
    mx[0] = a[0];
    f(i, 1, n) mx[i] = max(mx[i - 1], a[i]);

    // Compute prefix sums of the reversed array to get suffix sums
    vector<ll> rev = a;
    reverse(rev.begin(), rev.end());
    vector<ll> p(n);
    p[0] = rev[0];
    f(i, 1, n) p[i] = p[i - 1] + rev[i];

    // k = 0: only prefix max of the full array
    cout << mx[n - 1] << " ";

    // k from 1 to n-1: prefix max up to index (n-k-1) + sum of last k elements
    f(k, 1, n) {
        int pref_idx = n - k - 1;
        int sum_idx = k - 1;
        cout << mx[pref_idx] + p[sum_idx] << " ";
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
