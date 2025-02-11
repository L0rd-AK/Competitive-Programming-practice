#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define LOCAL
#endif
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) cout << (f ? "YES\n" : "NO\n")
#define pt(x) cout << x << endl
#define all(x) x.begin(), x.end()
#define vl vector<ll>
#define vi vector<int>
#define pb push_back
#define pi pair<int, int>

#ifdef LOCAL
#include "D:\\VS-Code\\Competitive programming practice\\Zest-cases\\dbg.h"
#else
#define dbg(x...) 
#endif
// #define N 200005


void AKG() {
      int n; cin >> n;
      vl a(n);
      f(i, 0, n) {
        cin >> a[i];
      }
      if (is_sorted(all(a))) {
         yn(1);
         return;
      }
      int idx=0;
      f(i,1,n){
         if(a[i-1]>a[i])idx=i;
      }
      if(idx==0){
         yn(1);
         return;
      }
      f(i,0,idx){
         int x=min(a[i],a[i+1]);
         a[i]-=x;
         a[i+1]-=x;
      }
      yn(is_sorted(all(a)));
}

int main() {
#ifndef ONLINE_JUDGE
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
