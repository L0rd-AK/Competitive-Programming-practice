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
    vi a1(26,0),b1(26,0);
    f(i,0,n){
        a1[a[i]-'a']++;
        b1[b[i]-'a']++;
    }
    vector<vi> pre_a(n,vi(26,0)),pre_b(n,vi(26,0));
    pre_a[0][0]=a1[0],pre_b[0][0]=b1[0];
    f(i,1,n){
        f(j,1,26){
        pre_a[i][j]=a1[i]+pre_a[i-1][j];
        pre_b[i][j]=b1[i]+pre_b[i-1][j];
        }
    }
    while(q--){
        int x,y;cin>>x>>y;
        int ans=0;
        for(char c='a';c<='z';c++){
            int l=pre_a[y][c]-pre_a[x-1][c];
            int r=pre_b[y][c]-pre_b[x-1][c];
            ans+=(l-r);
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