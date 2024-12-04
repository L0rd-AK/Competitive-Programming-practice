#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl
#define all(x) x.begin(), x.end()
#define debug(p) for(auto i:p)cout<<i<<" ";cout<<endl;

void AKG() {
    int n;cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int pos=0;
    for(int i=0;i<n-1;i++){
        if(v[i]==0)continue;
        else{
            pos=i;
            break;
        }
    }
    ll ans=0,z=0;
    for(int i=pos;i<n-1;i++){
        if(v[i]==0)z++;
        ans+=v[i];
    }
    if(ans==0) prnt(0);
    else prnt(ans+z);
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
