#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl

void AKG() {
    int n;
        cin >> n;
        vector<int> p(n);
        string s[i];
        for (int i = 0; i < n; ++i) {
            cin >> p[i];
        }
        cin>>s;
        vector<pair<pair<char, int>, int>> l(n);
        for (int i = 0; i < n; ++i) {
            l[i] = {{s[i], p[i]}, i};
        }

        sort(l.begin(), l.end());

        vector<int> q(n, -1);
        for (int i = 0; i < n; ++i) {
            q[l[i].second] = i + 1;
        }

        for (int i = 0; i < n; ++i) {
            cout << q[i] << " ";
        }
        cout << endl;
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
