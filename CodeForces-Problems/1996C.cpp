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
    ll n,q;cin>>n>>q;
    string a,b;cin>>a>>b;
    vector<vi> mp(n+1,vi(26,0));
    f(i,0,n){
        mp[i+1]=mp[i];
        mp[i+1][a[i]-'a']++;
        mp[i+1][b[i]-'a']--;
    }
    while(q--){
        int x,y;cin>>x>>y;
        x--;
        int ans=0;
        f(i,0,26){
            ans+=max(0,mp[y][i]-mp[x][i]);
        }
        pr(ans);
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