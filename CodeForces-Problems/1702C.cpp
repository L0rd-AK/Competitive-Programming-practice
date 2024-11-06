#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl

void AKG() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    map<int, pair<int, int>> mp;
    f(i, 0, n) {
        cin >> a[i];
        if (mp.find(a[i]) == mp.end()) {
            mp[a[i]] = {i + 1, i + 1};
        } else {
            mp[a[i]].second = i + 1;
        }
    }
    
    while (q--) {
        int a, b;
        cin >> a >> b;
        if (mp.find(a) == mp.end() || mp.find(b) == mp.end()) {
            yn(0);
        } else {
            yn(mp[b].second >= mp[a].first);
        }
    }
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
        auto begin = chrono::high_resolution_clock::now();
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--) {
        AKG();
    }

    #ifndef ONLINE_JUDGE
        auto end = chrono::high_resolution_clock::now();
        auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
        cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";
    #endif

    return 0;
}
