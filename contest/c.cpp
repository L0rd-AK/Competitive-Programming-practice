#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl
#define all(x) x.begin(), x.end()

ll func(const string& n) {
    ll sum = 0;
    for (char c : n) {
        sum += (c - '0');
    }
    return sum;
}

void AKG() {
    string s;
    cin >> s;
    ll sum = func(s);
    if (sum % 9 == 0) {
        yn(1);
        return;
    }
    sort(all(s));
    reverse(all(s));

    ll ans=sum;
    for (char c : s) {
        int x = c - '0';
        if ( x == 2 || x==3) {
            ll sq_x = x * x;
            ans += sq_x-x;

            if (ans % 9 == 0) {
                yn(1);
                return;
            }
            //sum+=x;
        }
    }

    yn(0);
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
