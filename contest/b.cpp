#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "Yes\n" : cout << "No\n"
#define prnt(x) cout << x << endl

void AKG() { 
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    f(i, 0, n) cin >> a[i];
    f(i, 0, m) cin >> b[i];
    int ans = 0;

    f(i, 0, m) {
        int idx = b[i] - 1; 
        if (idx >= 0 && idx < n) { 
            if (a[idx] <= 0) ans++;
            else a[idx]--;
        }
    }
    prnt(ans);
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        AKG();
    }

    return 0;
}
