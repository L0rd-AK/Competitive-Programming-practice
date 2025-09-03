#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define LOCAL
#endif

#define ll long long
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) cout << (f ? "DA\n" : "NET\n")
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


void AKG() {
    int n;
        cin >> n;
        vl b(n);
        for (int i = 0; i < n; i++) cin >> b[i];

        vl a;
        a.push_back(b[0]);

        for (int i = 1; i < n; i++) {
            if (b[i-1] <= b[i]) {
                a.push_back(b[i]);
            } else {
                a.push_back(b[i]);
                a.push_back(b[i]);
            }
        }

        cout << (int)a.size() << "\n";
        for (auto x : a) cout << x << " ";
        cout << "\n";
}


int main() {
#ifdef LOCAL
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t=1;
    cin >> t; 
    while (t--)AKG();
    return 0;
}