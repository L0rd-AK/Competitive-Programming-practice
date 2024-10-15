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
    vector<int> a(n);
    f(i, 0, n) cin >> a[i];
    sort(a.begin(), a.end(), greater<int>());
    
    ll mx = 0;
    int prev = INT_MAX;
    
    for (int i = 0; i < n; ++i) {
        if (a[i] >= prev) {
            a[i] = max(0, prev - 1);
        }
        mx += a[i];
        prev = a[i];
    }
    
    prnt(mx);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--) {
        AKG();
    }
    
    return 0;
}
