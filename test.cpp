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
bool cmp(int a,int b,int c,int d){
    return a%b<c%d;
}
void AKG() {
    int n;cin>>n;
    vi a(n);
    f(i,0,n)cin>>a[i];
    sort(all(a),cmp);
    if(a[0]==a[1]&&a[0]==1)yn(0);
    else if(a[0]==a[1]){
        f(i,1,n){
            if(a[i]%a[i-1]!=0&&a[i]%a[i-1]<a[0]){yn(1);return;}
        }
        yn(0);
    }else yn(1);
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