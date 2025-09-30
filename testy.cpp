#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define LOCAL
#endif

#define ll long long
#define endl "\n"

#ifdef LOCAL
#include "D:\\VS-Code\\Competitive programming practice\\Zest-cases\\dbg.h"
#else
#define dbg(x...)
#endif

void AKG(){
    string s; 
    cin >> s;
    int cnt[4] = {0,0,0,0}; // indices 1..3 used
    for(char c : s) if(c >= '1' && c <= '3') cnt[c - '0']++;

    int l = 0, r = (int)s.length() - 1;
    while (l <= r) {
        bool moved = false;

        // try to trim left
        if (l <= r) {
            if (s[l] == '1' && cnt[1] > 1) { cnt[1]--; l++; moved = true; }
            else if (s[l] == '2' && cnt[2] > 1) { cnt[2]--; l++; moved = true; }
            else if (s[l] == '3' && cnt[3] > 1) { cnt[3]--; l++; moved = true; }
        }

        // try to trim right
        if (l <= r) {
            if (s[r] == '1' && cnt[1] > 1) { cnt[1]--; r--; moved = true; }
            else if (s[r] == '2' && cnt[2] > 1) { cnt[2]--; r--; moved = true; }
            else if (s[r] == '3' && cnt[3] > 1) { cnt[3]--; r--; moved = true; }
        }

        // if neither side moved, break to avoid infinite loop
        if (!moved) break;
    }
    int x=r - l + 1;
    if(x<3)pr(0);
    else cout << max(0,x) << '\n';
}

int main() {
#ifdef LOCAL
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) AKG();
    return 0;
}
