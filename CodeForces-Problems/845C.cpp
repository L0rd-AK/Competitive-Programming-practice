#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define LOCAL
#endif
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define pt(x) cout << x << endl
#define all(x) x.begin(), x.end()
#define vl vector<ll>
#define vi vector<int>
#define pb push_back
#define pi pair<int, int>

#ifdef LOCAL
#include "D:\VS-Code\Competitive programming practice\Zest-cases\dbg.h"
#else
#define dbg(x...) 
#endif
#define N 200005

void AKG() {
    int n;cin>>n;
    vector<pair<int,int>> a(n);
    f(i,0,n) cin>>a[i].first>>a[i].second;
    sort(all(a));
    pi tv1 = {0,0}, tv2 = {0,0};
    f(i,0,n){
        if(tv1.second<a[i].first)tv1={0,0};
        if(tv2.second<a[i].first)tv2={0,0};
        if(tv1.second==0){
            tv1 = a[i];
        }else if(tv2.second==0){
            tv2 = a[i];
        }else{
            pt("NO");
            return;
        }
    }
    pt("YES");
}


int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t=1;
    // cin >> t;
    while (t--){
        AKG();
    }

    return 0;
}
