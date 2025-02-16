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
#define pi pair<ll, ll>

#ifdef LOCAL
#include "D:\\VS-Code\\Competitive programming practice\\Zest-cases\\dbg.h"
#else
#define dbg(x...)
#endif
const int N  = 2e5+10;

void solveCase() {
    int n;
    cin >> n;
    vi nums(n);
    unordered_map<int, int> mp;

    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
        mp[nums[i]]++;
    }
    set<int> st;
    for (auto &entry : mp) {
        if (entry.second == 1) {
            st.insert(entry.first);
        }
    }

    int len = 0, segStart = -1, segEnd = -1;
    int left = 0;
    for (int right = 0; right < n; ++right) {
        if (st.find(nums[right]) == st.end()) {
            left = right + 1; 
        } else {
            int currentLength = right - left + 1;
            if (currentLength > len) {
                len = currentLength;
                segStart = left;
                segEnd = right;
            }
        }
    }

    if (len == 0) {
        cout << "0\n";
    } else {
        cout << segStart + 1 << " " << segEnd + 1 << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        AKG();
    }

    return 0;
}
