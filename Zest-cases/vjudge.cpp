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
    vector<ll> a(n),b(n);
    f(i, 0, n)cin >> a[i];
    f(i, 0, n)cin >> b[i];
    
    ll l = 0, r = 1, ans = 0;
    ll sum = a[0];
    while (r < n) {
        sum += a[r];
        if(b[r-1]%b[r]!=0 || sum > k) { 
           l=r;
           sum=a[r];
        }
        ans = max(ans, r - l + 1);
        r++;
    }
   prnt(ans);
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
