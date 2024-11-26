#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl
#define all(x) x.begin(), x.end()

void AKG() {
    int n;cin>>n;
    vector<ll> v;
    ll od=0,evn=0,mx=INT_MIN;
    f(i,0,n){
        ll x;
        cin>>x;
        if(x%2==0){
            evn++;
            v.push_back(x);
        }
        else{
            od++;
            mx=max(mx,x);
        }
        
    }
    if(od==n || evn==n){
        prnt(0);
        return;
    }
    sort(all(v));
    int ans=evn;
    for(auto i:v){
        if(i<mx)mx+=i;
        else{
            ans++;
            break;
        }
        
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
    cin >> t;
    while (t--) {
        AKG();
    }

    return 0;
}
