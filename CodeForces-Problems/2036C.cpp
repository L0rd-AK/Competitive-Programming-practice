#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl
#define all(x) x.begin(), x.end()

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define dbg(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define dbg(x...)
#endif

string s;
bool func(int i, int n) {
    if (i <= 2) return false;
    if (i >= n) return false;
    if (s[i] == '0' && s[i-1] == '0' && s[i-2] == '1' && s[i-3] == '1') return true;
    return false;
}

void AKG() {
    cin >> s;
    int n = s.length();
    ll ans = 0;
    f(i, 3, n) {
        ans += func(i, n);
    }
    int q;
    cin >> q;
    while (q--) {
        ll x;
        char y;
        cin >> x >> y;
        x--;
        if (s[x] != y) {
            bool l = func(x, n) || func(x + 1, n) || func(x + 2, n) || func(x + 3, n);
            s[x] = y;
            bool r = func(x, n) || func(x + 1, n) || func(x + 2, n) || func(x + 3, n);
            // dbg(l, r);
            if (l && !r) ans--;
            else if (!l && r) ans++;
        }
        yn(ans > 0);
    }
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
