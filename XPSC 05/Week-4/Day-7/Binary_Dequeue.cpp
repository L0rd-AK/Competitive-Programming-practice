#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl
#define all(x) x.begin(), x.end()

void AKG() {
    int n, k;
    cin >> n >> k;
    vector<ll> v(n);
    ll total = 0;
    f(i, 0, n){
        cin >> v[i];
        total+=v[i];
    }
    if(total==k){
        prnt(0);
        return;
    }else if(total<k){
        prnt(-1);
        return;
    }
    ll l = 0, r = 0, ans = INT_MIN;
    ll sum = 0;
    while (r < n) {
        sum += v[r];
        while (sum > k) { 
            sum -= v[l];
            l++;
        }
        ans = max(ans, r - l + 1);
        r++;
    }
   prnt(n-ans);
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t=1;
    cin >> t;
    while (t--) {
        AKG();
    }

    return 0;
}
