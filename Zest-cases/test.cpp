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


void AKG() {
   ll n;
   cin >> n;
   vl a(n);
   map<ll, ll> mp;
   ll mn = INT_MAX;
   f(i, 0, n) {
      cin >> a[i];
      mp[a[i]]++;
      mn = min(mn, a[i]);
   }

   if (mp[mn] < 2) {
      yn(0);
      return;
   }
   int flg = 0;
   for (const auto& p : mp) {
        if (p.second % 2 == 0) flg++;
    }
    if (flg == mp.size()) {
        yn(1);
        return;
    }

   auto it = mp.begin();
   while (it != mp.end()) {
      if (it->second > 2) {
         mp[it->first + 1] += (it->second - 2);
         it->second = 2;
      }
      ++it;
   }

   for (const auto& p : mp) {
      if (p.second % 2 != 0) {
         yn(0);
         return;
      }
   }

   yn(1);
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
