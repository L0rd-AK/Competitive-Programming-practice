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
    vl a(n),b(n);
    f(i, 0, n) cin >> a[i];
    b=a;
    reverse(all(a));
    vl p(n),mx(n);
    mx[0]=b[0];
    f(i, 1, n) {
        mx[i]=max(mx[i-1],b[i]);
    }
    p[0]=a[0];
    f(i,1,n) p[i]=p[i-1]+a[i];
    
    cout << mx[n-1] << " ";
    f(k,1,n){
        int x=n-k-1;
        int y=k-1;
        cout<<mx[x]+p[y]<<" ";
    }cout<<endl;

}

int main() {
#ifdef LOCAL
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