#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl
#define all(x) x.begin(), x.end()

void AKG() {
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    f(i, 0, n) cin >> v[i];

    ll l = 0, ans = 0, cnt = 0;
    unordered_map<int,int> mp;
    for (ll r = 0; r < n; r++) {
        //mp[v[r]]++;
        if(mp[v[r]]++ == 0)cnt++;
        while (cnt > k) {
            if (--mp[v[l]] == 0) cnt--;
            l++;
        }
        ans+=(r-l+1);
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
    // cin >> t;
    while (t--) {
        AKG();
    }

    return 0;
}
