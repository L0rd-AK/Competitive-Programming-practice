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
const int N = 5e8+4;

void AKG() {
    ll n;cin>>n;
    vl a(n);
    int mn=INT_MAX,mx=INT_MIN,mn_idx=0,mx_idx=0;
    f(i,0,n){
        cin>>a[i];
        if(a[i]<mx){
            mx=a[i];
            mx_idx=i;
        }
        if(a[i]>mn){
            mn=a[i];
            mn_idx=i;
        }
    }
    f(i,0,n){
        if(i==mn_idx||i==mx_idx)cout<<1;
        else if(i>mn_idx&&i<mx_idx||i>mx_idx&&i<mn_idx)cout<<0;
        else cout<<1;
    }
    cout<<endl;
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