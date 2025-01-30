#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define pt(x) cout << x << endl
#define all(x) x.begin(), x.end()


#ifdef LOCAL
#include "dbg.h"
#else
#define dbg(x...) 
#endif

void AKG() {
    int n;cin>>n;
    vector<ll> a(n);
    f(i,0,n) cin>>a[i];
    unordered_map<ll,ll> mp;
    f(i,0,n) {
        for(int j=i+1;j<n;j++) {
            mp[a[j]+a[i]]++;
        }
    }
    ll ans=0;
    for(auto x:mp) {
        ans=max(ans,x.second);
    }
    dbg(mp);
    pt(ans);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t=1;
    // cin >> t;
    while (t--){
        AKG();
    }

    return 0;
}
