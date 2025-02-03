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
#define vl vector<ll>
#define vi vector<int>
#define pb push_back
#define pi pair<int, int>

#ifdef LOCAL
#include "D:\VS-Code\Competitive programming practice\Zest-cases\dbg.h"
#else
#define dbg(x...) 
#endif
#define N 200005

void AKG() {
    int n,k,q;cin>>n>>k>>q;
    vl a(N,0);
    f(i,0,n){
        int l,r;cin>>l>>r;
        a[l]++;
        a[r+1]--;
    }
    int c=0;
    f(i,0,N){
        c+=a[i];
        (c>=k?a[i]=1:a[i]=0);
    }
    vl ans(N,0);
    f(i,1,N){
        ans[i]=ans[i-1]+a[i];
    }
    while(q--){
        int l,r;cin>>l>>r;
        cout<<ans[r]-ans[l-1]<<endl;
    }
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
