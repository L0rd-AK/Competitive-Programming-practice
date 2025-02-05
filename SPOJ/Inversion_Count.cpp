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

ll merge(vector<ll> &a, ll l, ll m, ll r) {
    ll n1 = m-l+1, n2 = r-m;
    vector<ll> L(n1), R(n2);
    f(i,0,n1) L[i] = a[l+i];
    f(i,0,n2) R[i] = a[m+1+i];
    
    ll i = 0, j = 0, k = l, ans = 0;
    while(i < n1 && j < n2){
        if(L[i] <= R[j]){
            a[k++] = L[i++];
        }else{
            a[k++] = R[j++];
            ans += n1-i;
        }
    }
    
    while(i < n1) a[k++] = L[i++];
    while(j < n2) a[k++] = R[j++];
    
    return ans;
}

ll func(vector<ll> &a, ll l, ll r) {
    ll ans = 0;
    if(l < r){
        ll m = (l+r)/2;
        ans += func(a, l, m);
        ans += func(a, m+1, r);
        ans += merge(a, l, m, r);
    }
    
    return ans;
}
void AKG() {
    ll n;cin>>n;
    vector<ll> a(n);
    f(i,0,n) cin>>a[i];
    pt(func(a,0,n-1));
}


int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t=1;
    cin >> t;
    while (t--){
        AKG();
    }

    return 0;
}
