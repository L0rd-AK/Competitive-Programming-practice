#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define LOCAL
#endif

#define ll long long
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) cout << (f ? "YES\n" : "NO\n")
#define pr(x) cout << x << endl
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

void AKG() {
    int n;
    cin >> n;
    vi a(n);
    ll mx_itm=INT_MIN, mx_idx=-1;
    f(i, 0, n) {
        cin >> a[i];
        if(a[i]>mx_itm){
            mx_itm=a[i];
            mx_idx=i;
        }
    }
    if(n==2){
        pr(abs(a[0]-a[1]));
        return;
    }
    dbg(mx_itm);
    if(mx_idx==0 || mx_idx==n-1){
        pr(mx_itm);
        return;
    }
    if(mx_idx==1){
           int x=abs(a[0]-a[1]);
           pr(x);
           return;
        }
    if(mx_idx==n-2){
            int x=abs(a[n-1]-a[n-2]);
            pr(x);
            return;
        }
   
    pr(abs(mx_itm));
}

int main() {
#ifdef LOCAL
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        AKG();
    }

    return 0;
}
