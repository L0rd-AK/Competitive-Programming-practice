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
ll N = 1e18;

int main() {
#ifdef LOCAL
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t; 
    f(j, 0, t) {
        int n; cin >> n;
        vi a(n);
        f(i, 0, n) cin >> a[i];
        vector<pair<bool, bool>> v(n);
        priority_queue<int> maxPQ;
        maxPQ.push(a[0]);
        v[0].first = true;
        f(i, 1, n) {
            if (a[i] > maxPQ.top()) v[i].first = true;
            maxPQ.push(a[i]);
        }
        priority_queue<int, vector<int>, greater<int>> minPQ;
        minPQ.push(a[n - 1]);
        v[n - 1].second = true;
        for (int i = n - 2; i >= 0; i--) {
            if (a[i] < minPQ.top()) v[i].second = true;
            minPQ.push(a[i]);
        }
        int idx = 1; bool flg = 0;
        f(k, 0, n) {
            if (v[k].first && v[k].second) {
                cout << "Case " << (j + 1) << ": " << idx << endl;
                flg = 1; break;
            }
            idx++;
        }
        if (!flg) cout << "Case " << (j + 1) << ": " << "Humanity is doomed!" << endl;
    }
    return 0;
}
