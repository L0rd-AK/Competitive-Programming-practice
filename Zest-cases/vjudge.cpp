#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);

    int T; cin >> T;
    while (T--) {
        int n, q; cin >> n >> q;
        string a, b; cin >> a >> b;

        vector<array<int,26>> pa(n+1), pb(n+1);
        for (int i = 1; i <= n; ++i) {
            pa[i] = pa[i-1];
            pb[i] = pb[i-1];
            ++pa[i][a[i-1]-'a'];
            ++pb[i][b[i-1]-'a'];
        }

        while (q--) {
            int l, r; cin >> l >> r;
            int ans = 0;
            for (int c = 0; c < 26; ++c) {
                int ca = pa[r][c] - pa[l-1][c];
                int cb = pb[r][c] - pb[l-1][c];
                ans += abs(ca - cb);
            }
            cout << ans << '\n';
        }
    }
    return 0;
}
