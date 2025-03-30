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
    int n;cin>>n;
    int a[n+1],b[n+1];
    for(int i=1;i<=n;i++)b[i]=0;
    for(int i=1;i<=n;i++)cin>>a[i],b[a[i]]++;
    int ans=0,l=0,r=0;
    for(int i=1;i<=n;i++){
        if(b[a[i]]==1){
            int j=i;
            while(j<n&&b[a[j+1]]==1)j++;
            if(j-i+1>ans){
                ans=j-i+1;
                l=i;
                r=j;
            }
            i=j;
        }
    }
    if(!ans)pr(0);
    else cout<<l<<" "<<r<<endl;
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