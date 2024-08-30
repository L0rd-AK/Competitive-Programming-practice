#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define prnt(x) cout << x << endl

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    
    f(i, 0, n) cin >> a[i];
    f(i, 0, n) cin >> b[i];

    int i = 0, j = n - 1, x = 0, y = n - 1;
    
    while (i <= j && x <= y) {
        if (a[i] != b[x] && a[i] != b[y]) {
            prnt("Alice");
            return;
        }
        if (a[j] != b[y] && a[j] != b[x]) {
            prnt("Alice");
            return;
        }
        
        if (a[i] == b[x]) i++, x++;
        else if (a[i] == b[y]) i++, y--;
        
        if (a[j] == b[y]) j--, y--;
        else if (a[j] == b[x]) j--, x++;
    }
    
    prnt("Bob");
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
