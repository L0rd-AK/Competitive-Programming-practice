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
const int N = 1e5+7;


void AKG() {
    int n,k;cin>>n>>k;
    vi a(n);
    f(i,0,n)cin>>a[i];
    bool ok=0;
    int idx=0;
    f(i,0,n){
        int ans=0;
        f(j,0,n){
            if(i!=j&&abs(a[i]-a[j])%k!=0){
                ans++;
                //dbg(i,j);
            }
        }
        if(ans==n-1){
            ok=1;
            idx=i;
        }
    }
    
    if(ok){
        yn(1);
        pr(idx+1);
    }else{
        yn(0);
    }
}

int main() {
#ifdef LOCAL
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t=1;
    cin >> t; 
    while (t--)AKG();
    return 0;
}