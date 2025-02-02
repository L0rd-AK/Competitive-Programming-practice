#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define LOCAL
#endif
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define pt(x) cout << x << endl
#define all(x) x.begin(), x.end()

#ifdef LOCAL
#include "D:\\VS-Code\\Competitive programming practice\\Zest-cases\\dbg.h"
#else
#define dbg(x...) 
#endif
#define N 200005

void AKG() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    f(i, 0, n) cin >> a[i];

    int sz = n / k;
    vector<int> b;

    for (int i = 0; i < n; i += 2) {  
        for (int j = i; j < n && j < i + sz; j++) { 
            dbg(a[j], j);
            b.push_back(a[j]); 
        }
    }

    b.push_back(0); 
    dbg(b);

    ll ans = 0;
    for (int i = 0; i < b.size(); i++) {
        if (b[i] != i+1) { 
            break;
        }
        ans = i+1;
    }
    pt(ans);
}

int main()
{
#ifndef ONLINE_JUDGE
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
