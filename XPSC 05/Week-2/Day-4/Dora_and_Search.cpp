#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl

void AKG() {
    int n;
    cin >> n;
    vector<int> a(n);
    f(i, 0, n) cin >> a[i];
    int l = 0, r = n - 1, mn = 1, mx = n;
    
    while (l <= r) {
        if (a[l] == mn) {
            l++;
            mn++;
        } else if (a[l] == mx) {
            l++;
            mx--;
        } else if (a[r] == mn) {
            r--;
            mn++;
        } else if (a[r] == mx) {
            r--;
            mx--;
        } else {
            break;
        }
    }
    
    if (l <= r) {
        cout << l + 1 << " " << r + 1 << endl;
    } else {
        prnt(-1);
    }
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
        auto begin = chrono::high_resolution_clock::now();
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--) {
        AKG();
    }

    #ifndef ONLINE_JUDGE
        auto end = chrono::high_resolution_clock::now();
        auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
        cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";
    #endif

    return 0;
}
