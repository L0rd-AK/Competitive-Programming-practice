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
    int a,b,c,n;cin>>n>>a>>b>>c;
    int sum=a+b+c;
    int ans=0;
    if(sum==n){
        pr(3);
        return;
    }
    if(sum>n){
        n-=a;ans++;
        if(n<=0){
            pr(ans);
            return;
        }
        n-=b;ans++;
        if(n<=0){
            pr(ans);
            return;
        }
        n-=c;ans++;
        if(n<=0){
            pr(ans);
            return;
        }
    }
    if(sum<n){
        ans+=(n/sum)*3;
        int rem=n%sum;
        if(rem==0){
            pr(ans);
            return;
        }
        rem-=a;ans++;
        if(rem<=0){
            pr(ans);
            return;
        }
        rem-=b;ans++;
        if(rem<=0){
            pr(ans);
            return;
        }
        rem-=c;ans++;
        if(rem<=0){
            pr(ans);
            return;
        }
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