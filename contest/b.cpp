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
   int n,k;cin>>n>>k;
   vi a(n),b(n);
    f(i,0,n) cin>>a[i];
    f(i,0,n) cin>>b[i];
    int sum=0,b_minus=0;
    set<int> s;
    f(i,0,n) {
        if(b[i]!=-1) {
            sum=a[i]+b[i];
            s.insert(sum);
        } 
        if(b[i]==-1) {
            b_minus++;
        }
    }
    if(b_minus==n) {
        pr(n+(k/n));
        return;
    }
    // dbg(s);
    if(s.size()!=1) {
        cout<<0<<endl;
        return;
    } 
    int ans=0;
    f(i,0,n) {
        if(b[i]==-1) {
            int x=sum-a[i];
            if(x<=k && x>=0)ans++;
            else {
                cout<<0<<endl;
                return;
            }
        } 
    }
    // cout<<ans<<" ";
    pr(ans/2);

    
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