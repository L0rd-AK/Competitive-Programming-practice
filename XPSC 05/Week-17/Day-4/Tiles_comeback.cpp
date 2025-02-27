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

const int MOD = 998244353;
const int N = 3e5+5;

void AKG() {
    int n,k;cin>>n>>k;
    vi a(n);
    f(i,0,n) cin>>a[i];
    vi suf(n+1,0);
    for(int i=n-1;i>=0;i--) suf[i]=suf[i+1]+(a[i]==a[n-1]);
    if(a[0]==a[n-1]){
        if(suf[0]%k==0 or suf[0]>=k){
           yn(1);
           return;
        }
    }
    int cnt=0;
    for(int i=0;i<=n-2;i++){
        cnt+=(a[i]==a[0]);
        if(cnt%k==0 and suf[i+1]>=k){
           yn(1);
           return;
        }
    }
    yn(0);
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
