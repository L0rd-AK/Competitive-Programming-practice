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
    int a[n];
    f(i, 0, n) cin >> a[i];

    f(i, 0, n) {
        int x;
        cin >> x;
        string s;
        cin >> s;
        f(j, 0, x) {
            if (s[j] == 'D') {
                a[i] = (a[i] + 1) % 10;
            } else if (s[j] == 'U') {
                a[i] = (a[i] - 1 + 10) % 10;
            }
        }
    }
    
    f(i, 0, n) cout << a[i] << " ";
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
