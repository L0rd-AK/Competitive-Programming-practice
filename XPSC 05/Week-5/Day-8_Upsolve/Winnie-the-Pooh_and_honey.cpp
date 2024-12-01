#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl
#define all(x) x.begin(), x.end()


int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n,k;cin>>n>>k;
    ll ans=0,x;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x>=k*3)ans+=x-k*3;
        else if(x>=k*2)ans+=x-k*2;
        else if(x>=k)ans+=x-k;
        else ans+=x;
    }
    prnt(ans);

    return 0;
}