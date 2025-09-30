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
ll N = 1e18;

void AKG(){
    string s; 
    cin >> s;
    int cnt[4] = {0,0,0,0};
    for(char c : s)cnt[c - '0']++;

    int l = 0, r = (int)s.length() - 1;
    while (l <= r) {
        bool moved = false;

        if (l <= r) {
            if (s[l] == '1' && cnt[1] > 1) { cnt[1]--; l++; moved = true; }
            else if (s[l] == '2' && cnt[2] > 1) { cnt[2]--; l++; moved = true; }
            else if (s[l] == '3' && cnt[3] > 1) { cnt[3]--; l++; moved = true; }
        }

        if (l <= r) {
            if (s[r] == '1' && cnt[1] > 1) { cnt[1]--; r--; moved = true; }
            else if (s[r] == '2' && cnt[2] > 1) { cnt[2]--; r--; moved = true; }
            else if (s[r] == '3' && cnt[3] > 1) { cnt[3]--; r--; moved = true; }
        }

        if (!moved) break;
    }
    int x=r - l + 1;
    if(x<3)pr(0);
    else pr(x);
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