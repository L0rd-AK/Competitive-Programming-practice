#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);

    int t;
    cin >> t;
    while (t--) {
        ll n;
        int k;
        cin >> n >> k;
        if (n >= k && (n % 2) == (k % 2)) {
            cout << "YES\n";
            for (int i = 0; i < k - 1; i++) {
                cout << 1 << ' ';
            }
            cout << (n - (k - 1)) << '\n';
        }else if (n >= 2LL * k && (n % 2) == 0) {
            cout << "YES\n";
          
            for (int i = 0; i < k - 1; i++) {
                cout << 2 << ' ';
            }
            cout << (n - 2LL * (k - 1)) << '\n';
        }else {
            cout << "NO\n";
        }
    }

    return 0;
}
