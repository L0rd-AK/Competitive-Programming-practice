#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl

void AKG() {
    int n, m;
    cin >> n >> m;
    string s, k;
    cin >> s >> k;
    int diff = 0;
    int ans = INT_MAX;

    for (int i = 0; i <= n - m; i++) {
        diff = 0;
        for (int j = 0; j < m; j++) {
            int x = abs(s[i + j] - k[j]);
            if (x > 5) {
                diff += 10 - x;
            } else {
                diff += x;
            }
        }
        ans = min(ans, diff);
    }
    prnt(ans);
}

int main() {
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
