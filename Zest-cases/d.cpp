#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)
#define endl "\n"
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define prnt(x) cout<<x<<endl

void AKG() {
    int n;cin>>n;
    ll a[n],p[n];
    f(i,0,n)cin>>a[i];
    p[0]=a[0];
    f(i,1,n){
        p[i]=p[i-1]+a[i];
    }
    int q;cin>>q;
    while(q--){
        int x;cin>>x;
        bool ok=1;
        f(i,0,n){
            if(p[i]>=x){
                prnt(i+1);
                ok=0;
                break;
            }
        }
        if(ok)prnt(-1);
    }
    
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
    auto begin = std::chrono::high_resolution_clock::now();
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t = 1;
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
