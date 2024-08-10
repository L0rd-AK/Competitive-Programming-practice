#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)
#define endl "\n"
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define prnt(x) cout<<x<<endl

void AKG(){
    ll n,m;
    cin>>n>>m;
    int ans=0,z=n;
    if(m==0)prnt(0);
    else if(m<=n)prnt(1);
    else{
        m-=z;
        ans++;
        z--;
        //cout<<m<<" "<<z<<" "<<endl;
        while(1){
            if(m<=0 || z<=0)break;
            m-=z;ans++;
            if(m<=0 || z<=0)break;
            m-=z;ans++;
            if(m<=0 || z<=0)break;
            z--;
        }
        prnt(ans);
    }
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
    return 0;
}
