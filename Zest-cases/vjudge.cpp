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
    string s;
    cin >> s;
    int n = s.length();
    string s1, s2;
    map<char, int> a, b;
    
    // Distribute characters into two groups
    f(i, 0, n) {
        if (i % 2) {
            a[s[i]]++;
            s1 += s[i];
        } else {
            b[s[i]]++;
            s2 += s[i];
        }
    }

    int ans = 0;
    while ((s1.length() + 1) / 2 < a.size() || (s2.length() + 1) / 2 < b.size()) {
        ans++;
        
        if (a.size() < b.size()) {
            s1.clear();
            a.clear();
            f(i, 0, n) {
                if (i % 2) {
                    a[s[i]]++;
                    s1 += s[i];
                }
            }
        } else if (a.size() > b.size()) {
            s2.clear();
            b.clear();
            f(i, 0, n) {
                if (i % 2 == 0) {
                    b[s[i]]++;
                    s2 += s[i];
                }
            }
        } else {
            break; // If both are balanced, exit loop
        }
    }
    
    pr(ans);
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
