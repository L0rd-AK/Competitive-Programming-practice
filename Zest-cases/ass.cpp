#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);

    long long n, q;
    cin >> n >> q;
    vector<long long> a(n);
    for (long long i = 0; i < n; ++i) {
        cin >> a[i];
    }

    long long N = 1;
    while (N < n) {
        N <<= 1;
    }

    vector<long long> tree(2 * N, 0);
    for (long long i = 0; i < n; ++i) {
        tree[N + i] = a[i];
    }
    for (long long i = N - 1; i >= 1; --i) {
        tree[i] = tree[2 * i] + tree[2 * i + 1];
    }

    while (q--) {
        long long type;
        cin >> type;
        if (type == 1) {
            long long pos, val;
            cin >> pos >> val;
            long long idx = N + pos;
            tree[idx] = val;
            for (idx /= 2; idx >= 1; idx /= 2) {
                tree[idx] = tree[2 * idx] + tree[2 * idx + 1];
            }
        } else {
            long long l, r;
            cin >> l >> r;
            long long res = 0;
            l += N;
            r += N;
            while (l < r) {
                if (l % 2 == 1) {
                    res += tree[l];
                    l++;
                }
                if (r % 2 == 1) {
                    r--;
                    res += tree[r];
                }
                l /= 2;
                r /= 2;
            }
            cout << res << '\n';
        }
    }

    return 0;
}