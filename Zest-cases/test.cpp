#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define LOCAL
#endif

#define ll long long
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define pr(x) cout << x << "\n"
#define vl vector<ll>

void AKG() {
    int n, k;
    cin >> n >> k;
    vl a(n);
    ll sum = 0;
    f(i, 0, n) {
        cin >> a[i];
        sum += a[i];
    }
    if (sum % k != 0) {
        pr(n);
        return;
    }
    int ans1 = 0, ans2 = 0;
    int l = 0;
    while (l < n) {
        if ((sum - a[l]) % k != 0) {
            ans1 = n - l - 1;
            break;
        }
        l++;
    }
    int r = n - 1;
    while (r >= 0) {
        if ((sum - a[r]) % k != 0) {
            ans2 = r;
            break;
        }
        r--;
    }
    int ans = max(ans1, ans2);
    if (ans == 0) pr(-1);
    else pr(ans);
}

int main() {
#ifdef LOCAL
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) AKG();
    return 0;
}
