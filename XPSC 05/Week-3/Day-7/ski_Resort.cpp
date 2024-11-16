#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl

void AKG() {
    int n,k,q;cin>>n>>k>>q;
    vector<int> a(n);
    f(i,0,n)cin>>a[i];
    int ans = 0, len = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] <= q) {
            len++;
        } else{
            if (len >= k) {
                ans += (len - k + 1) * (len - k + 2) / 2;
            }
            len = 0;
            }
        }

        if (len >= k) {
            ans += (len - k + 1) * (len - k + 2) / 2;
        }
        cout << ans << endl;
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--) {
        AKG();
    }

    return 0;
}