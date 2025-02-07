#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define LOCAL
#endif
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) cout << (f ? "YES\n" : "NO\n")
#define pt(x) cout << x << endl
#define all(x) x.begin(), x.end()
#define vl vector<ll>
#define vi vector<int>
#define pb push_back
#define pi pair<int, int>

#ifdef LOCAL
#include "D:\\VS-Code\\Competitive programming practice\\Zest-cases\\dbg.h"
#else
#define dbg(x...) 
#endif
#define N 200005
class FenwickTree {
    vector<int> BIT;
    int n;
public:
    FenwickTree(int size) {
        n = size;
        BIT.assign(n + 1, 0);
    }

    void update(int idx, int val) {
        while (idx <= n) {
            BIT[idx] += val;
            idx += (idx & -idx);
        }
    }

    int query(int idx) {
        int sum = 0;
        while (idx > 0) {
            sum += BIT[idx];
            idx -= (idx & -idx);
        }
        return sum;
    }

    int rangeQuery(int l, int r) {
        return query(r) - query(l - 1);
    }
};
void AKG() {
    int n;cin >> n;
    string s;cin >> s;

    string rev_s = s;
    reverse(all(rev_s));
    unordered_map<char, queue<int>> pos_map;
    for (int i = 0; i < n; i++) {
        pos_map[s[i]].push(i);
    }

    vi target_indices(n);
    for (int i = 0; i < n; i++) {
        target_indices[i] = pos_map[rev_s[i]].front();
        pos_map[rev_s[i]].pop();
    }

    FenwickTree BIT(n);
    ll ans = 0;

    for (int i = n - 1; i >= 0; i--) {
        ans += BIT.query(target_indices[i]);
        BIT.update(target_indices[i] + 1, 1);
    }

   pt(ans);
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--) {
        AKG();
    }
    
    return 0;
}
