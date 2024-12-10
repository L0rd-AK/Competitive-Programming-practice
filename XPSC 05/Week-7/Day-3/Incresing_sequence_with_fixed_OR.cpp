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
    ll n;
    cin >> n;
    deque<ll> dq;
    for(int i=0;i<=__lg(n);i++){
        if((n>>i) & 1){
            ll x=n-(1LL<<i);
            if(x>0)dq.push_front(x);
        }
    }
    dq.push_back(n);
    prnt(dq.size());
    for(auto i:dq){
        cout<<i<<" ";
    }cout<<endl;
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
