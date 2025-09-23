#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        // Since a is non-decreasing and values are in [1..n], we can count directly.
        vector<int> cnt(n + 1, 0);
        for (int x : a) {
            cnt[x]++;
        }
        // Collect non-zero counts.
        vector<int> freqs;
        for (int v = 1; v <= n; v++) {
            if (cnt[v] > 0) {
                freqs.push_back(cnt[v]);
            }
        }
        int ans = 0;
        // Try every possible k from 1 up to n.
        for (int k = 1; k <= n; k++) {
            int c = 0;
            for (int f : freqs) {
                if (f >= k) {
                    c++;
                }
            }
            ans = max(ans, c * k);
        }
        cout << ans << "\n";
    }
    return 0;
}
