#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define LOCAL
#endif

#define ll long long
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) cout << (f ? "DA\n" : "NET\n")
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


void AKG(){
        ll a,b;cin>>a>>b;
        if(a%2==1&&b%2==1){
            pr(a*b+1);
            return;
        }
        if(((a + b)%2) == 0){
            pr(a+b);
            return;
        }

        if((b%2) == 1){
            pr(-1);
            return;
        }
        ll tb = 0;
        ll temp = b;
        while((temp%2) == 0){
            tb++;
            temp >>= 1;
        }
        if(tb == 1){
            pr(-1);
            return;
        }
        ll k=1LL<<(tb-1);
        ll ans=a*k+(b/k);
        pr(ans);

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