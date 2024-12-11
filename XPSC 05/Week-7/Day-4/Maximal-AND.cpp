#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl
#define all(x) x.begin(), x.end()
#define debug(p) for(auto i:p)cout<<i<<" ";cout<<endl;

void AKG() {
     int n, K;
      cin >> n >> K;
      vector<int> a(n);

      for (int i = 0;i < n;i++) {
         cin >> a[i];
      }

      vector<int> bits(31);
      for (int i = 0;i < n;i++) {
         for (int k = 30;k >= 0;k--) {
            if ((a[i] >> k) & 1) {
               bits[k]++;
            }
         }
      }

      int ans = 0;
      for (int k = 30;k >= 0;k--) {
         if (bits[k] == n) {
            ans += (1LL << k);
         }
         else {
            int need = n - bits[k];
            if (K >= need) {
               ans += (1LL << k);
               K -= need;
            }
         }
      }

     prnt(ans);
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
