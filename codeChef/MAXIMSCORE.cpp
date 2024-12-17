#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl
#define all(x) x.begin(), x.end()

void AKG(){
    int n;
    cin >> n;
    vector<int> a(n);
    f(i, 0, n) cin >> a[i];
    if (n == 1) {
        prnt(0);
        return;
    }
    if (n == 2) {
        prnt(abs(a[1] - a[0]));
        return;
    }
    int ans = INT_MAX;
    f(i, 0, n) {
        if(i==0)
            ans = min(ans,abs(a[i] - a[i + 1]));
        else if(i==n-1)
            ans = min(ans,abs(a[i] - a[i - 1]));
        else
            ans = min(ans, max(abs(a[i] - a[i - 1]), abs(a[i] - a[i + 1])));

    }
    prnt(ans);
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
