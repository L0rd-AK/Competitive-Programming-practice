#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl

void AKG() {
    ll n,ans=0;
    cin>>n;
    ll x,mn=INT_MAX;
    f(i,0,n){
        cin>>x;
        ans+=x;
        if(x%2==1)mn=min(x,mn);
    }
    if(ans%2==0)prnt(ans);
    else prnt(ans-mn);
    
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
        auto begin = std::chrono::high_resolution_clock::now();
    #endif

    fast();

    int t=1;
    // cin >> t;
    while (t--) {
        AKG();
    }

    #ifndef ONLINE_JUDGE
        auto end = std::chrono::high_resolution_clock::now();
        auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
        cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";
    #endif

    return 0;

}
