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

const int MOD = 998244353;
const int N = 2e5 + 5;
ll n,m,l,ss,su,a1;
const ll k=998244353,n2=(k+1)/2;
string a;
void AKG() {
    cin>>n>>m;ss=1;
    cin>>a;su=0;su+=a[0]-'0';
    for(int i=1;i<=n-1;i++)ss=ss*2%k,su+=a[i]-'0';
    su=su*2-n;
    for(int i=1;i<=m;i++){
        cin>>a1;
        if(a[a1-1]=='0')a[a1-1]='1',su+=2;
        else a[a1-1]='0',su-=2;
        cout<<ss*((su*su+n-2+k)%k)%k*n2%k*n2%k*n2%k<<'\n';
    }

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