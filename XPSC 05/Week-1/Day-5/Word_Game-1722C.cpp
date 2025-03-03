#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl

void AKG() {
    int n;
    cin >> n;
    vector<vector<string>> v(3, vector<string>(n));
    map<string, int> mp;

    f(i, 0, 3) {
        f(j, 0, n) {
            cin >> v[i][j];
            mp[v[i][j]]++;
        }
    }

    f(i, 0, 3) {
        int ans = 0;
        f(j, 0, n) {
            string s = v[i][j];
            if (mp[s] == 1) ans += 3;
            else if (mp[s] == 2) ans += 1;
        }
        cout << ans << " ";
    }

    cout << endl;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
    auto begin = std::chrono::high_resolution_clock::now();
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--) {
        AKG();
    }

    #ifndef ONLINE_JUDGE
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";
    #endif

    return 0;
}
