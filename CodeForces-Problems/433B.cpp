#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define LOCAL
#endif

#define ll long long
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) cout << (f ? "YES\n" : "NO\n")
#define pr(x) cout << x << "\n"
#define all(x) x.begin(), x.end()
#define vl vector<ll>
#define vi vector<int>
#define pb push_back
#define pi pair<ll, ll>

#ifdef LOCAL
#include "D:\\VS-Code\\Competitive programming practice\\Zest-cases\\dbg.h"
#else
#define dbg(x...)
#endif

const int MOD = 1e9+7;
const int N = 1e6+5;
void AKG() {
   int n;cin>>n;
   vl a(n),b(n),pre_a(n),pre_b(n);
   f(i,0,n)cin>>a[i];
   pre_a[0]=a[0];
   f(i,1,n)pre_a[i]=pre_a[i-1]+a[i];
   b=a;
   sort(all(b));
   pre_b[0]=b[0];
   f(i,1,n)pre_b[i]=pre_b[i-1]+b[i];
   int q;cin>>q;
   while(q--){
    int a,b,c;cin>>a>>b>>c;
    if(a==1){
        if(b==1)pr(pre_a[c-1]);
        else pr(pre_a[c-1]-pre_a[b-2]);
    }else{
        if(b==1) pr(pre_b[c-1]);
        else pr(pre_b[c-1]-pre_b[b-2]);
    }
   }

}

int main() {
#ifdef LOCAL
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t = 1;
    // cin >> t; 
    while (t--) {
        AKG();
    }

    return 0;
}
