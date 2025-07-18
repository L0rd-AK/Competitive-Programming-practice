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

void AKG() {
    int n,s;cin>>n>>s;
    vi a(n);
    f(i,0,n)cin>>a[i];
    if(s<a[0]){
        pr((a[0]-s)+(a[n-1]-a[0]));
    }else if(s>a[n-1]){
        pr((s-a[n-1])+(a[n-1]-a[0]));
    }else{
        int x=abs(s-a[0]);
        int y=abs(s-a[n-1]);
        if(x>y)pr(y*2+x);
        else pr(x*2+y);
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
