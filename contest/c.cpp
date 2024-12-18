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

void stabilizeArray(vector<int>& a) {
    stack<int> vlaue;
    stack<int> idx; 
    int n=a.size();
    vlaue.push(a[0]);
    idx.push(0);

    int max_diff = 0;

    for (int i = 1; i < n; i++) {
        int val = a[i];
        while (!vlaue.empty()) {
            int top = vlaue.top();
            if (top < val) {
                vlaue.pop();
                idx.pop();
            } else {
                break;
            }
        }
        if (!vlaue.empty()) {
            int top_index = idx.top();
            int diff = i - top_index - 1;
            max_diff = max(max_diff, diff);
        } else {
            max_diff = i; 
        }
        vlaue.push(val);
        idx.push(i);
    }
    prnt(max_diff);
}

void AKG(){
    int n;cin>>n;
    vector<int> a(n);
    f(i,0,n)cin>>a[i];
    stabilizeArray(a);
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
