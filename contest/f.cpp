#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define LOCAL
#endif

#define ll long long
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) cout << (f ? "1\n" : "0\n")
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
const int N = 5e8+4;

void AKG() {
    int n, k;
    cin >> n >> k;
    vi a(n), b(n);
    f(i, 0, n) cin >> a[i];
    f(i, 0, n) cin >> b[i];
    
    int misB = 0;
    bool first = true;
    
    set<int> s;
    f(i, 0, n) {
        if (b[i] != -1) s.insert(a[i]+b[i]);
        else misB++;
    }
    
    if (misB == n) {
        int mx_a = *max_element(all(a));
        int mn = INT_MAX;
        for (int num : a) {
            mn = min(mn, num+k);
        }
        dbg(mn);
        if (mx_a > mn) {
            pr(0);
            return;
        } 
        cout << max(0, mn-mx_a+1) << endl;
        return;
    }
    
    if (s.size() != 1) {
        pr(0);
        return;
    }
    
    int sum = *s.begin();
    bool ok = true;
    f(i, 0, n) {
        if (b[i] == -1) {
            int x = sum - a[i];
            if (x < 0 || x > k) {
                ok = false;
                break;
            }
        }
    }
    yn(ok);
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