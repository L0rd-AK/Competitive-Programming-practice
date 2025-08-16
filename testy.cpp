#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);

    int n; 
    if(!(cin >> n)) return 0;
    vector<long long> a(n);
    long long sum = 0;
    for (auto &x : a) cin >> x, sum += x;

    if (sum & 1LL) { cout << 0 << '\n'; return 0; }

    long long target = sum / 2, pref = 0;
    long long ans = 0;
    // split must be between [0 .. n-2] so both parts are non-empty
    for (int i = 0; i < n - 1; ++i) {
        pref += a[i];
        if (pref == target) ++ans;
    }
    cout << ans << '\n';
    return 0;
}
