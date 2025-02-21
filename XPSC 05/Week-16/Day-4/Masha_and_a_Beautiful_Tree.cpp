#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define LOCAL
#endif

#define ll long long
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) cout << (f ? "YES\n" : "NO\n")
#define pr(x) cout << x << endl
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
const int N = 200005;
vi a;
int ans = 0;

void merge(int l1,int r1,int l2,int r2){
    int mxL=0;
    for(int i=l1;i<=r1;i++){
        mxL=max(mxL,a[i]);
    }
    int mnR=INT_MAX;
    for(int i=l2;i<=r2;i++){
        mnR=min(mnR,a[i]);
    }
    if(mxL>mnR){
        int R=l2;
        for(int i=l1;i<=r1;i++){
            swap(a[i],a[R]);
            R++;
        }
        ans++;
    }
    if(l1==r1)return;
    int mid1=(l1+r1)/2;
    int mid2=(l2+r2)/2;
 
    merge(l1,mid1,mid1+1,r1);
    merge(l2,mid2,mid2+1,r2);
}

void AKG() {
    int n;cin>>n;
    a.resize(n+1);
    f(i,1,n+1) cin>>a[i];
    if(is_sorted(all(a))){
        pr(0);
        return;
    }
    ans=0;
    int mid = (n+1)/2;
    merge(1,mid,mid+1,n);
    if(is_sorted(all(a))){
        pr(ans);   
    }else pr(-1);   

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
