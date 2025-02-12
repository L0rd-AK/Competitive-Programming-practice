#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define LOCAL
#endif
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) cout << (f ? "YES\n" : "NO\n")
#define pr(x) cout << x << endl
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
   string a, b;
   cin >> a >> b;
   int n = a.length();
   int m = b.length();

   if (a[0] == b[0]) {
       cout<<"YES\n"<<a[0]<<"*"<< endl;
       return;
   }
   if (a[n - 1] == b[m - 1]) {
       cout<<"YES\n"<<"*"<<a[n-1]<<endl;
       return;
   }

   for (int i = 0; i < m - 1; ++i) {
       int it = a.find(b.substr(i, 2));
       if (it < a.length()) {
           cout<<"YES\n"<<"*"<<b.substr(i, 2)<<"*"<<endl;
           return;
       }
   }
   pr("NO");
}


int main() {
#ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        AKG();
    }

    return 0;
}
