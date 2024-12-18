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

bool check(char ch, int n, string s) {
    vector<int> v;
    string st = "";

    for (int i = 0; i < n; i++) {
        if ((i % 2) == 0) {
            if (ch == '0')
                st += '1';
            else
                st += '0';
        } else {
            st += ch;
        }
    }

    for(int i = 0; i < n; i++) {
        if(s[i] != st[i])
            v.push_back(i);
    }

    if(v.size() == 0) {
        return true;
    }

    string a = s.substr(0, v[0]);
    string b = s.substr(v[0], v[v.size() - 1] - v[0] + 1);
    reverse(b.begin(), b.end());
    a += b + s.substr(v[v.size() - 1] + 1);

    if(a==st){
         return true;
    } 
    return false; 
}



void AKG() {
    int n;cin>>n;
    string s;cin>>s;
    if(check('0',n,s) || check('1',n,s))yn(1);
    else yn(0);
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t=1;
    cin >> t;
    while (t--) {
        AKG();
    }

    return 0;
}
