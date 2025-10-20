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
ll N = 1e18;


ll cost(const string &s, char ch){
    vl pos;
    int n = (int)s.size();
    for(int i=0;i<n;i++) if(s[i]==ch) pos.push_back(i);
    int k = (int)pos.size();
    if(k <= 1) return 0;
    vl adj(k);
    for(int i=0;i<k;i++) adj[i] = pos[i] - i;
    ll med = adj[k/2];
    ll res = 0;
    for(ll x : adj) res += (x > med ? x - med : med - x);
    return res;
}

void AKG(){
    int n;cin>>n;
    string s;cin>>s;
    pr(min(cost(s,'a'), cost(s,'b')));
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