#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define LOCAL
#endif
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define pt(x) cout << x << endl
#define all(x) x.begin(), x.end()


#ifdef LOCAL
#include "D:\VS-Code\Competitive programming practice\Zest-cases\dbg.h"
#else
#define dbg(x...) 
#endif
#define N 200005
ll b[N], a[N];
void AKG() {
    int n,m;cin>>n>>m;
    f(i,0,n) cin>>a[i];
    f(i,0,m){
        int x,y;cin>>x>>y;
        b[x-1]++;
        b[y]--;
    }
    f(i,1,n) b[i]+=b[i-1];
    sort(a,a+n);
    sort(b,b+n);
    ll ans=0;
    f(i,0,n) ans+=a[i]*b[i];
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
