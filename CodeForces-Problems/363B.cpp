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
    int n,k;cin>>n>>k;
    vi a(n+1);
    int s=0,mn=INT_MAX;
    for(int i=1;i<=n;i++){
    int h;cin>>h;
    a[i]=a[i-1]+h;
    if(i>=k&&a[i]-a[i-k]<mn)
        mn=a[i]-a[i-k],s=i-k+1;
    }
    cout<<s ;
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
