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
    int n, k;
    cin >> n >> k;
    ll sum=0;
    vi a(n);
    f(i, 0, n) {
        cin >> a[i];
        sum += a[i];
    }
    int pos=0;
    for(int i=0;i<n;i++){
            if(a[i]>a[pos]) pos=i;
    }
    a[pos]--;
    int mx=-1,mn=2e9;
    for(int i=0;i<n;i++){
        mx=max(mx,a[i]);
        mn=min(mn,a[i]);
    }
    if(mx-mn>k) pr("Jerry");
    else if (sum % 2 == 0) pr("Jerry");
    else pr("Tom");
    
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