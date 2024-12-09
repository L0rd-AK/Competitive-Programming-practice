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
    int n;
    cin >> n;
    vector<int> a(n+2),b(n+2);
    for (int i = 1; i < n; i++)cin >> b[i];
    b[0] = b[n] = 0;
    for (int i = 1; i <= n; i++)
        a[i] = b[i - 1] | b[i];
    bool flg = true;
    for (int i = 1; i < n; i++)
        if ((a[i] & a[i + 1]) != b[i]) {
            flg = false;
            break;
        }
    if (flg) {
        for (int i = 1; i <= n; i++)cout << a[i] << ' ';
        cout << endl;
    } else prnt(-1);
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
