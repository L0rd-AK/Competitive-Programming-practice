#include <bits/stdc++.h>
using namespace std;
#define ll  long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)
#define endl "\n"
#define  yn(f)  f? cout<<"YES\n":cout<<"NO\n"
#define prnt(x) cout<<x<<endl

void AKG(){
     int n;cin>>n;
     ll a[n];
     ll sum=0;
     f(i,0,n){cin>>a[i];sum+=a[i];}
     prnt(sum-2*a[n-2]);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
    auto begin = std::chrono::high_resolution_clock::now();
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        AKG();
    }
#ifndef ONLINE_JUDGE
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n"; 
#endif
    return 0 ;
}