#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    if (sum % n != 0) {
        yn(0);
        return;
    }

    ll target = sum / n;
    for (int i = 1; i < n - 1; i++) {
        if (a[i-1] > target) {
            ll excess = a[i-1] - target;
            a[i-1] = target;
            a[i + 1] += excess;
        } else if (a[i-1] < target) {
            ll deficit = target - a[i-1];
            a[i-1] += deficit;
            a[i + 1] -= deficit;
            // if (a[i + 1] < 0) {
            //     yn(0);
            //     return;
            // }
        }
    }

    //yn(a[n-3]==target && a[n - 2] == target && a[n - 1] == target);
    f(i,0,n){
        if(a[i]!=target){
            yn(0);
            return;
        }
    }
    yn(1);
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
        solve();
    }

    return 0;
}
