#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define pt(x) cout << x << endl
#define all(x) x.begin(), x.end()

void __print(int x) { cerr << x; }
void __print(long x) { cerr << x; }
void __print(long long x) { cerr << x; }
void __print(unsigned x) { cerr << x; }
void __print(unsigned long x) { cerr << x; }
void __print(unsigned long long x) { cerr << x; }
void __print(float x) { cerr << x; }
void __print(double x) { cerr << x; }
void __print(long double x) { cerr << x; }
void __print(char x) { cerr << '\'' << x << '\''; }
void __print(const char *x) { cerr << '\"' << x << '\"'; }
void __print(const string &x) { cerr << '\"' << x << '\"'; }
void __print(bool x) { cerr << (x ? "true" : "false"); }

template <typename T, typename V>
void __print(const pair<T, V> &x)
{
    cerr << '{';
    __print(x.first);
    cerr << ',';
    __print(x.second);
    cerr << '}';
}
template <typename T>
void __print(const T &x)
{
    int f = 0;
    cerr << '{';
    for (auto &i : x)
        cerr << (f++ ? "," : ""), __print(i);
    cerr << "}";
}
void _print() { cerr << "]\n"; }
template <typename T, typename... V>
void _print(T t, V... v)
{
    __print(t);
    if (sizeof...(v))
        cerr << ", ";
    _print(v...);
}
#ifndef ONLINE_JUDGE
#define dbg(x...)                 \
    cerr << "[" << #x << "] = ["; \
    _print(x)
#else
#define dbg(x...)
#endif

void AKG() {
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    vector<vector<ll>> a(n, vector<ll>(m));
    f(i, 0, n) {
        f(j, 0, m) {
            cin >> a[i][j];
        }
    }
    // s.insert(s.begin(), s[0]);
    int x = 0, y = 0;
    for (char c : s) {
        if (c == 'D') {
            if (x >= n) break; 
            ll sum = 0;
            f(i, 0, m) {
                sum += a[x][i];
            }
            // dbg(sum);
            if (sum > 0) a[x][y] = sum*-1;
            else if (sum < 0) a[x][y] = sum*-1;
            else a[x][y] = 0;
            x++;
        }
        else if (c == 'R') {
            if (y >= m) break; 
            ll sum = 0;
            f(i, 0, n) {
                sum += a[i][y];
            }
            // dbg(sum);
            if (sum > 0) a[x][y] = sum*-1;
            else if (sum < 0) a[x][y] = sum*-1;
            else a[x][y] = 0;
            y++;
        }
    }
    ll sum=0;
    f(i,0,n){
        sum+=a[i][m-1];
    }
    a[n-1][m-1] = sum*-1;
    for (auto i : a) {
        for (auto j : i) {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t; // Read the number of test cases
    while (t--)
    {
        AKG();
    }

    return 0;
}
