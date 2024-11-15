#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl

void AKG() {
    int n,k;cin>>n>>k;
    string s;cin>>s;
    int pfx[n]={0};
    for(int i = 0; i < n; i++){
        pfx[i+1] = pfx[i] + (s[i] == 'W');
    }
    int ans = 1e9;
    for(int i = 0; i <= n-k; i++){
        ans = min(ans, pfx[i+k] - pfx[i]);
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