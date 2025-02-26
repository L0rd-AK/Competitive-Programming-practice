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

const int N = 3e5 + 5;

void solve() {
    int n, d;
        cin >> n >> d;
        vi ans;
        ans.push_back(1);

        if (n >= 3) {
            ans.push_back(3);
        } else if (n == 2 && d % 3 == 0) {
            ans.push_back(3);
        }

        if (d == 5) {
            ans.push_back(5);
        }

        if (d == 7 || n >= 3) {
            ans.push_back(7);
        }

        if (d == 9) {
            ans.push_back(9);
        } else if (d == 3 || d == 6) {
            if (n >= 3) {
                ans.push_back(9);
            }
        } else {
            if (n >= 6) {
                ans.push_back(9);
            }
        }

        sort(all(ans));
        for (int i = 0; i < ans.size(); ++i) (i<ans.size()-1)?cout<<ans[i]<<" ":cout<<ans[i]<<endl;
            
        
}

int main() {
#ifdef LOCAL
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
